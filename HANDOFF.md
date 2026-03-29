# Yoshi's Cookie NES Recompilation — Handoff Prompt

Copy everything below this line into a new Claude Code session opened in
`F:\Projects\nesrecomp-release\YoshisCookieRecomp`:

---

## Context

You are working on a **static NES recompilation** of Yoshi's Cookie. The project
translates 6502 machine code → C → native x64. It is NOT an emulator.

The project is set up and builds successfully. The Ghidra MCP server is running
on port 3990. Before doing anything, verify Ghidra is live:

```
Call mcp__ghidra_yoshis_cookie__get_program_info
```

If it doesn't respond, STOP. Ghidra must be running.

## ROM Details

- **Mapper 4 (MMC3)**, 8 PRG banks (128KB), 8 CHR ROM banks (64KB)
- Vectors: NMI=$C5C8, RESET=$F6DD, IRQ=$D2E7
- CRC32: 0x52B58732
- MMC3 banking: two 8KB switchable PRG regions + two 8KB fixed
  - The game's trampoline at $F424 maps 16KB at a time (R6=bank*2, R7=bank*2+1)
  - Fixed bank is the last 16KB ($C000-$FFFF)
- CHR ROM: 8 x 8KB banks, MMC3 fine-grained CHR switching (2x2KB + 4x1KB)
- IRQ scanline counter is active (IRQ vector $D2E7) — not yet implemented in runner

## What's Working

- Full build pipeline: recompiler → generated code → game exe
- MMC3 mapper support (PRG + CHR banking, mirroring, IRQ state save/restore)
- Debug infrastructure: TCP server (port 4370), verify mode, Nestopia oracle
- The recompiler finds 3732 functions
- Game boots and runs at 60fps without crashing

## Current Problem

The game renders a **blank gray screen**. The main loop is stuck because the
trampoline at $F424 dispatches to address $0000 every frame. Two dispatch misses
repeat continuously:

- `$0000 bank=1` — trampoline resolving to zero (the real target address isn't
  being set up correctly in zero-page $0D/$0E)
- `$8101 bank=0` — a real function the recompiler missed

**Root cause: the trampoline at $F424 uses a `JMP ($000D)` pattern.** The trampoline:
1. Reads 3 inline bytes after the JSR: [bank, addr_lo, addr_hi]
2. Stores the target address into zero-page $0D/$0E
3. Switches to the target bank
4. Does `JMP ($000D)` to call the target function

The recompiler's trampoline handling isn't setting up $0D/$0E correctly for this
game's variant, so the indirect jump resolves to $0000.

## The Fix

Two parallel workstreams:

### 1. Fix the trampoline dispatch
Use Ghidra to trace $F424 step-by-step. Understand exactly how it reads the
inline bytes, stores the target, switches banks, and jumps. Then either:
- Fix the trampoline pattern in `code_generator.c` if it's a general issue
- Add a `game_dispatch_override` in `extras.c` if it's game-specific

### 2. Identify data regions
The pointer scanner is likely creating false-positive function entries from data
tables. Use Ghidra to identify data regions in each bank and add `data_region`
entries to `game.cfg`:

```
data_region <bank> <start_hex> <end_hex>
```

### How to identify data regions in Ghidra:

1. Look at the fixed bank (bank07.bin loaded at $C000)
2. After auto-analysis, scroll through the listing view
3. Data regions show up as:
   - Undefined bytes (not disassembled as instructions)
   - Tables of `.word` or `.byte` values
   - Areas between functions that don't contain valid 6502 instructions
   - Jump/dispatch tables (arrays of 16-bit addresses)
4. Use `D` to try disassembling ambiguous regions — if the instructions
   make no sense, it's data
5. Note the start and end addresses of each data region

### Priority areas to investigate:

- **$F424 (fixed bank)**: The trampoline. Trace every instruction from entry
  to the `JMP ($000D)`. Understand the inline byte layout and bank-switch
  mechanism.
- **$F46D (fixed bank)**: The trampoline's return path (`trampoline F424 3 F46D`
  in game.cfg — F46D is the address that restores the caller's bank).
- **$F573 (fixed bank)**: The inline dispatch (`inline_dispatch F573` in
  game.cfg). A-register indexed jump table.
- **Bank 7 ($C000-$FFFF)**: Fixed bank — most pointer scan false positives
  come from here.
- **Bank 0 ($8000-$BFFF)**: Contains the missed function at $8101.

## The Loop

```
1. GHIDRA: Examine a bank or trace a function
2. UPDATE game.cfg: Add data_region, extra_func, or fix trampoline handling
3. REGENERATE: F:/Projects/nesrecomp/build/recompiler/Release/NESRecomp.exe "Yoshi's Cookie # NES.NES" --game game.cfg
4. REBUILD: "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" --build build --config Release
5. TEST: timeout 12 build/Release/YoshisCookieRecomp.exe "Yoshi's Cookie # NES.NES"
6. CHECK: Look at C:/temp/mm3_shot_XXXX.png and dispatch miss output
7. REPEAT until title screen renders correctly
```

## Key Rules

- **RULE 0: No Ghidra = No Action.** Call `mcp__ghidra_yoshis_cookie__get_program_info`
  before touching any file. If it doesn't respond, stop.
- **RULE 1: Fix the tool, never the output.** `generated/*.c` files are build
  artifacts. Never read them whole, never edit them. Fix `code_generator.c`,
  `function_finder.c`, `runtime.c`, or `game.cfg` instead.
- **RULE 2: Check PATTERNS.md** before implementing any new dispatch pattern.
  Read `nesrecomp/PATTERNS.md` first.
- **No fprintf debug logging.** Use the TCP debug server (port 4370) for runtime
  inspection.

## File Locations

| File | Purpose |
|------|---------|
| `game.cfg` | Recompiler config — data_region, extra_func, trampoline, dispatch |
| `extras.c` | Game-specific hooks (CRC32, verify mode, debug server, dispatch override) |
| `nesrecomp/recompiler/src/code_generator.c` | 6502→C emitter |
| `nesrecomp/recompiler/src/function_finder.c` | Function discovery / pointer scan |
| `nesrecomp/runner/src/runtime.c` | NES memory map, PPU register stubs |
| `nesrecomp/runner/src/ppu_renderer.c` | Tile/sprite rendering |
| `nesrecomp/runner/src/mapper.c` | MMC3 bank switching + CHR banking |
| `nesrecomp/PATTERNS.md` | 6502 dispatch idiom catalog |
| `nesrecomp/CLAUDE.md` | Framework rules and workflow |

## Current game.cfg

```
output_prefix yoshis-cookie

# Trampoline: JSR $F424 reads 3 inline bytes [bank, lo, hi], returns via $F46D
trampoline F424 3 F46D

# Inline dispatch at $F573: JSR $F573 followed by address table, A selects entry
inline_dispatch F573

# Extra functions not found by automatic discovery (dispatch misses)
extra_func -1 C048
extra_func 0 8221
extra_func 0 8109
extra_func 0 8101
extra_func 1 8CFE
extra_func 1 8C54
extra_func 1 9260
extra_func 1 9360
extra_func 1 8146
extra_func 3 8BAA
extra_func 5 9B8F
extra_func 5 91C4
extra_func 6 9CFA
extra_func 6 813C
extra_func 6 82A4
extra_func 6 8382
```

## Bank Files for Ghidra

Pre-extracted in `banks/` directory:
- `bank07.bin` → import at base address $C000 (fixed bank, DO THIS FIRST)
- `bank00.bin` through `bank06.bin` → import at base address $8000
- Language: 6502:LE:16:default, Format: Raw Binary

## Run Modes

```batch
# Native (recompiled code)
build/Release/YoshisCookieRecomp.exe "Yoshi's Cookie # NES.NES"

# Emulated (Nestopia oracle only — reference)
build/Release/YoshisCookieRecomp.exe "Yoshi's Cookie # NES.NES" --emulated

# Verify (both native + Nestopia, compare each frame)
build/Release/YoshisCookieRecomp.exe "Yoshi's Cookie # NES.NES" --verify
```

## Immediate Next Steps

1. **Trace $F424 in Ghidra.** Disassemble bank07.bin at $F424. Follow every
   instruction until the `JMP ($000D)`. Document the exact inline byte layout.
2. **Add `extra_func 0 8101`** to game.cfg (already done above).
3. **Check if the trampoline pattern in code_generator.c handles `JMP ($000D)`
   correctly** — the current implementation may only handle direct JSR targets,
   not indirect jumps through zero-page pointers.
4. **Identify data regions** in bank 7 using Ghidra and add `data_region` entries.
5. Regenerate, rebuild, test. Goal: get past the blank screen to the title screen.

---
