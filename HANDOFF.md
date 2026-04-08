# Yoshi's Cookie NES Recompilation — Handoff Prompt

Copy everything below this line into a new Claude Code session opened in
`F:\Projects\nesrecomp-release\YoshisCookieRecomp`:

---

You are working on a NES static recompilation project using nesrecomp.

## MANDATORY FIRST STEPS

1. Read `F:\Projects\PRINCIPLES.md` — non-negotiable debugging rules
2. Read `CLAUDE.md` — project rules, build instructions, hard constraints
3. Read `DEBUG.md` — debug loop and stack instrumentation reference
4. Read `TCP.md` — full TCP debug server command reference

Acknowledge all four before proceeding.

---

## OBJECTIVE

Get Yoshi's Cookie from garbled title screen → correct rendering.

---

## CURRENT STATE

The game builds and runs (nesrecomp `ed4137f`). Title screen is garbled.
Two fixes are applied in `game.toml`:

1. `bank_save_addr = 0xBFFF` — trampolines now read bank ID from ROM (proven from $F451: `LDA $BFFF`)
2. `push_all_jsr = true` — needed for universal bail detection (prevents C stack overflow)

The recompiler (`F:/Projects/nesrecomp/recompiler/src/code_generator.c`) has been
modified with full stack instrumentation (PHA/PLA/RTI → nes_stack_push/pull ring buffer).

---

## THE BUG (proven, not hypothetical)

During RESET init, `call_by_address(0x8104)` dispatches with `g_current_bank = 4`.

In bank 4 ROM, address $8104 = byte `$40` = **RTI** — garbage data decoded as code.
RTI pops 3 bytes from S without matching push. Called 3 times → S drifts from $FF to $08.

Low S causes NMI's 6-byte push to overwrite the VRAM update buffer at $0100-$0108.
`func_F4C0` (VRAM transfer) reads corrupted data → writes garbage to $2006/$2007 → garbled tiles.

### Evidence (from stack_trace_history ring buffer)
```
[0] f=0 + s=0xFF val=0x00 fn=func_8104_b4   (RTI pull 1 of 3)
[1] f=0 + s=0x00 val=0x00 fn=func_8104_b4   (RTI pull 2)
[2] f=0 + s=0x01 val=0x00 fn=func_8104_b4   (RTI pull 3)
  ... repeats 2 more times (9 total pulls) ...
[9] f=0 - s=0x08 val=0x00 fn=func_8101_b0   (NMI entry push — S already at $08)
```

---

## THE SINGLE REMAINING QUESTION

> **Why is `g_current_bank = 4` when `$8104` is dispatched during RESET init,
> despite `bank_save_addr = 0xBFFF` on both trampolines?**

If trampolines correctly restore the bank, g_current_bank should be 0 (the RESET bank)
when $8104 is called. Something leaves bank 4 active. Either:

- A code path switches to bank 4 without using a trampoline (direct `func_F46D()` call)
- The inline trampoline expansion has a bug in bank restoration
- A non-trampoline call_by_address dispatch inherits a stale g_current_bank

---

## WHAT TO DO

### Step 1: Find who dispatches $8104 with bank 4

Add a diagnostic inside `call_by_address` (generated dispatch file) or at the top of
`func_8104_b4` to print the recomp call stack when called. This is a throwaway diagnostic.

Alternatively: modify the dispatch emitter in `code_generator.c` to emit a pre-dispatch
hook that fires before the bank switch, logging addr + g_current_bank + call stack.

### Step 2: Trace backward to the bank switch

Once you know WHO calls $8104 with bank 4, trace backward: what set g_current_bank = 4?
Look for `func_F46D()` calls (bank switch) that aren't wrapped in a trampoline save/restore.

### Step 3: Fix the bank management

The fix is one of:
- Ensure the trampoline correctly restores the bank at the site that leaves bank 4 active
- Add a missing trampoline pattern for the code path that does bank switching without save/restore
- Fix the inline trampoline expansion to handle the specific calling convention

### Step 4: Verify

After fixing, verify:
- S stays in normal range ($E0-$FF) during RESET init and main loop
- Nestopia oracle diff count drops (currently ~300+ bytes at frame 60)
- Stack page $0100-$013F has clean VRAM data (tile indices, not $97/$22 garbage)

---

## WHAT NOT TO DO

- Do NOT restrict the dispatch table to specific banks (causes stack overflow)
- Do NOT add data_region exclusions for $8100-$810A (inflates function count, doesn't prevent generation)
- Do NOT remove `push_all_jsr` (causes C stack overflow without bail detection)
- Do NOT edit generated code (fix the tool)
- Do NOT guess — use the TCP instrumentation

---

## KEY ADDRESSES

| Address | Function | Notes |
|---------|----------|-------|
| $8104 | Bank 0: `ASL $81; JMP $8109` | Bank 4: `$40` = RTI (THE BUG) |
| $F424 | Original trampoline | PLA PLA at start, reads $BFFF for bank save |
| $C024 | JMP thunk → $F424 | `func_C024` calls `func_F424` directly |
| $F46D | Bank switch | `ASL A; STA $8001` (R6=A*2, R7=A*2+1) |
| $F4C0 | VRAM transfer | TSX; TXS $FF; PLA loop; restore |
| $C5C8 | NMI handler | 3 PHAs, work, 3 PLAs + RTI at $C6E1 |
| $CA38 | State dispatcher | LDA $03D9; inline_dispatch 64 entries |
| $BFFF | Bank ID | Each 16KB bank stores its own number here |
