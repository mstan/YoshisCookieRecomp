# Yoshi's Cookie NES Recomp — Session Handoff

## Current state

Game boots, title screen renders correctly, progresses through intro
animation to options screen. Options screen responds to D-pad/A (settings
change visible). **Freezes at options screen** — Start button doesn't
advance game state from $03D9=0x32 to gameplay.

Audio whine on title screen (APU init issue, not investigated).

## What was fixed this session

1. **Trampoline addr_adjust** (1→0): inline data contains target address
   directly, no RTS-style +1 needed. Was off-by-one on every bankswitched call.
2. **Thunk trampoline $C024**: `JMP $F424` alias — bank 0 code uses this
   instead of direct `JSR $F424`.
3. **NMI/trampoline bank race**: `call_by_address()` used runtime
   `g_current_bank` which NMI could change between the bank switch and
   dispatch. Fix: emit direct `func_XXXX_bN()` using statically-known bank.
4. **Zero-fill auto-exclusion**: pre-pass detects contiguous $00 runs (≥16
   bytes) and adds them as data_regions. 191 regions excluded across all banks.
5. **Data region codegen skip**: codegen now respects data_regions in pre-scan,
   emission loop, wrapper collection, and dispatch table.
6. **Sub-$8000 dispatch guard**: `call_by_address()` rejects addr < $8000 early.
7. **Inline dispatch $F573**: A-indexed pointer table after JSR, properly handled.
8. **Screenshot TCP command**: `{"cmd":"screenshot","path":"..."}`.

## Metrics

| Metric | Start | End |
|--------|-------|-----|
| Game state | Instant crash (frame 0) | Options screen (state 0x32) |
| Functions | ~4086 (stale) | 6137 |
| FP_SUSPECT | N/A | 438 |
| Dispatch misses | 12+ (fatal) | 2 (harmless, sub-$8000) |

## The bug (options screen freeze)

### Symptom
Options screen renders and animates (background scrolls, settings respond
to D-pad/A). Start button doesn't advance $03D9 from 0x32 to the next
state. `$03D9` never gets written while on this screen.

### What it is NOT
- **Not an input issue.** Controller reads via $4016 work — `$00CC` updates
  every frame via `func_F5C4 < func_F5AD`. D-pad/A inputs change settings.
- **Not a missing function.** `func_8127_b3` (the bank 3 target called from
  the options handler) exists and is correctly discovered.
- **Not a dispatch issue.** Trampoline uses static dispatch now.

### What it likely IS
The NMI handler at `$C6E7` checks game state `$03D9`. For state 0x32, it
bypasses the main input handler (`$C746` path where Start is checked) and
goes directly to `$C7CE` which dispatches to `func_CA0A` (state 50 update).
`func_CA0A` calls bank 3 `$8127` via trampoline. The Start check must be
inside `func_8127_b3` or a function it calls.

### Recommended investigation
1. Read the generated `func_8127_b3` code — verify it reads `$00CC` and
   checks for bit 3 (Start = 0x08).
2. If the code looks correct, trace at runtime: does `func_8127_b3` execute?
   Follow `$00CC` reads during frame processing.
3. If `func_8127_b3` delegates to another function (likely another trampoline
   call), check if THAT function exists and works.
4. The function at bank 3 $8127 starts with `JMP $8FD7` — check if $8FD7
   in bank 3 is discovered and correct.

### Audio whine
Title screen plays audio that hangs/loops. APU init or channel handling
may have a bug. Lower priority than gameplay progression.

## Key files

| File | Purpose |
|------|---------|
| `game.toml` | Trampolines ($F424, $C024), inline_dispatch ($F573), data regions |
| `generated/*.c` | 6137 functions, regenerated with static trampoline dispatch |
| `nesrecomp.pin` | Pinned to `57e4bf7` (zero-fill, data_region codegen, screenshot) |
| `extras.c` | TCP debug server hooks |
| `CLAUDE.md` | Project rules |
| `TCP.md` | TCP command reference (includes screenshot) |
| `DEBUG.md` | Debug loop + screenshot docs |

## Build

```bash
VSCMAKE="/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"

# Full rebuild
"$VSCMAKE" --build "F:/Projects/nesrecomp-release/recompiler_build" --config Release
cd "F:/Projects/nesrecomp-release/YoshisCookieRecomp"
"F:/Projects/nesrecomp-release/recompiler_build/Release/NESRecomp.exe" \
    "Yoshi's Cookie # NES.NES" --game game.toml
"$VSCMAKE" --build build --config Release

# Run
cd build/Release
./YoshisCookieRecomp.exe "../../Yoshi's Cookie # NES.NES"
```

## Nesrecomp commits (on feature/function-finder branch)

```
f079640  code_generator: trampoline dispatch uses static bank, not g_current_bank
57e4bf7  function_finder + codegen: auto-exclude zero-fill regions, guard sub-$8000 dispatch
5e5a56c  code_generator: skip data_region in pre-scan, emission, wrappers, and dispatch
230f217  debug_server: add screenshot TCP command
```
