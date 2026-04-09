# YoshisCookieRecomp

Static recompilation of Yoshi's Cookie (NES) for native PC.
Built with the [NESRecomp](https://github.com/mstan/nesrecomp) framework.

> **Status: Believed to be 100% playable.** Both 1P and VS modes tested through full gameplay with zero oracle divergence against Nestopia. If you find a bug, please open an issue.

## What Works

- Title screen and menu navigation
- 1P puzzle mode (all rounds, speeds, music types)
- VS mode (2-player on one keyboard)
- Options screen (round, speed, handicap, music selection)
- Cookie grid rendering and puzzle mechanics
- Score tracking and game-over states

## Quick Start

1. Download the latest release from [Releases](../../releases)
2. Extract and run `YoshisCookieRecomp.exe`
3. Select your Yoshi's Cookie (USA) ROM when prompted — the path is saved for future launches

## Controls

| NES Button | Keyboard |
|------------|----------|
| D-Pad      | Arrow keys |
| A          | Z |
| B          | X |
| Start      | Enter |
| Select     | Tab |

| Hotkey | Action |
|--------|--------|
| F5     | Toggle turbo (fast-forward) |
| F6     | Save state |
| F7     | Load state |

## Building from Source

Requires Visual Studio 2022 and CMake 3.20+.

```bash
git clone --recursive https://github.com/mstan/YoshisCookieRecomp
cd YoshisCookieRecomp
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
```

Place your `Yoshi's Cookie (USA).nes` ROM in the build directory or select it at runtime.

## Architecture

This is a **static recompiler**, not an emulator. The original 6502 machine code is translated to C at build time, then compiled to native x64. The NES PPU, APU, and mapper are simulated by the runner library.

- `game.toml` — recompiler configuration (trampolines, inline dispatch, data regions)
- `extras.c` — game-specific hooks (ROM CRC verification)
- `generated/` — auto-generated C code (do not edit manually)
- `nesrecomp/` — framework submodule (recompiler + runner)

## ROM Details

- **Mapper:** 4 (MMC3)
- **PRG ROM:** 128 KB (8 x 16 KB banks)
- **CHR ROM:** 64 KB (8 x 8 KB banks)
- **Expected CRC32:** `0x52B58732` (headerless, USA release)

## Known Limitations

- Audio is basic (APU register writes are captured but full audio mixing is work-in-progress)
