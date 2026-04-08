# NES Recompilation – Claude Rules & Protocol

Read `F:\Projects\PRINCIPLES.md` first. It overrides everything.

This project is a **static NES recompilation system**.
We achieve **byte-level equivalence with an emulator oracle** (Nestopia).

## What we're building

- **nesrecomp** (`nesrecomp/` junction → `F:/Projects/nesrecomp`): recompiler + runner
- **Recompiler** (`code_generator.c`, `function_finder.c`): translates 6502 → C
- **Runner** (`runtime.c`, `ppu_renderer.c`, `main_runner.c`, `mapper.c`): NES hardware sim
- **Game repo** (this dir): `game.toml`, `extras.c`, generated output

Fixes belong in the recompiler/runner or `game.toml`. **Never edit generated code.**

## HARD RULES

1. **No guessing.** Every claim backed by data.
2. **No stdout/stderr debugging.** Use TCP ring buffer (`debug_server.c` on port 4370).
3. **Always use oracle comparison.** Native vs Nestopia (`--verify` mode).
4. **Fix root cause only.** No symptom patches.
5. **Fix the tool, not the output.** Never modify `generated/*.c`.
6. **Per-function game.toml overrides are discouraged.** Prefer generic recompiler fixes.
7. **Kill all game instances** before launching new ones.

## Debug protocol (mandatory sequence)

See `DEBUG.md` for the full loop.

1. Sync state (not frame number — use PPU/scroll/palette markers)
2. Dump native + emulator (TCP ring buffer)
3. Byte-level diff
4. Find FIRST divergence
5. Trace the writer (function, instruction, address)
6. Classify (codegen / runner / timing / config)
7. Fix (minimal, in recompiler or runner)

## TCP debugging

Port **4370** (native), **4371** (emulated). See `TCP.md` for command reference.

The TCP ring buffer is the PRIMARY debugging interface. If tooling is missing, **build it first**, then continue. Do NOT fall back to printf.

## Stack trace instrumentation (this game)

`NES_TRACE_STACK_WRITES` and `RECOMP_STACK_TRACKING` are enabled in CMakeLists.
- `nes_stack_push(val)` / `nes_stack_pull()` record all PHA/PLA/PHP/PLP/RTI/JSR stack ops
- `nes_stack_check_drop(pc)` fires on TXS that drops S below threshold
- TCP: `stack_first_drop`, `stack_trace_history` commands
- Shadow call stack: `call_stack` command (with inline_dispatch pop fix)

## Build

```bash
VSCMAKE="/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"

# 1. Rebuild recompiler (if nesrecomp source changed)
"$VSCMAKE" --build "F:/Projects/nesrecomp-release/recompiler_build" --config Release

# 2. Regenerate game code
cd "F:/Projects/nesrecomp-release/YoshisCookieRecomp"
"F:/Projects/nesrecomp-release/recompiler_build/Release/NESRecomp.exe" \
    "Yoshi's Cookie # NES.NES" --game game.toml

# 3. Configure + build game (first time only for configure)
"$VSCMAKE" -B build -S . -G "Visual Studio 17 2022" -DENABLE_NESTOPIA_ORACLE=ON
"$VSCMAKE" --build build --config Release

# 4. Run
cd build/Release
./YoshisCookieRecomp.exe "../../Yoshi's Cookie # NES.NES"           # native
./YoshisCookieRecomp.exe "../../Yoshi's Cookie # NES.NES" --verify  # oracle compare
./YoshisCookieRecomp.exe "../../Yoshi's Cookie # NES.NES" --emulated # Nestopia only
```

## ROM details

- Mapper 4 (MMC3), 8 PRG banks (128KB), 8 CHR ROM banks (64KB)
- Vectors: NMI=$C5C8, RESET=$F6DD, IRQ=$D2E7
- Nesrecomp pin: `ed4137f`
