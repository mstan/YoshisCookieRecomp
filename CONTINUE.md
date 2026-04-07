# Yoshi's Cookie NES Recomp — Session Handoff

## What happened

Yoshi's Cookie was migrated from a vendored nesrecomp submodule (pinned
to `0bb6e99`) to the canonical nesrecomp junction + pin pipeline that
all 7 sibling games now use. The migration infrastructure is complete
and committed: junction, pin file, game.toml, CMakeLists pin-check,
regenerated code (4086 functions). The game builds and runs.

**However, rendering is broken.** The game booted and rendered correctly
on the old submodule (`0bb6e99`). On canonical (`ed4137f`), it shows
garbled CHR tiles and nametable corruption — consistent with MMC3 CHR
bank register state being wrong.

## The bug

### Symptom
Title screen renders with garbled tiles. The tile *data* appears to be
present (you can see "GO" text fragments and repeating tile patterns)
but the CHR bank mapping is wrong — tiles are pulled from incorrect
CHR banks, producing a checkerboard/mosaic of mismatched 8x8 blocks.

### What it is NOT
- **Not a dispatch miss.** Two frame-0 misses (`$8104` bank 0, `$8149`
  bank 4) were found and added to `game.toml`. Without them the game
  showed a flat gray screen. With them it boots but renders garbled.
  No further dispatch misses appear in `dispatch_misses.log` during
  the title screen.
- **Not a PPU scroll issue.** The garbling is CHR-level (wrong tile
  graphics), not scroll-level (wrong nametable position). The abs_nt_y
  and t-register fixes that fixed MM3's stage select are already in
  canonical and don't help here.
- **Not a function count issue.** Old regen: ~4084 functions. New regen:
  4086. The two extras are the dispatch-miss additions.

### What it likely IS
MMC3 CHR bank register handling divergence between the old submodule
(`0bb6e99`) and canonical (`ed4137f`). Yoshi's Cookie is Mapper 4
(MMC3) with 8 CHR ROM banks. The MMC3 uses registers R0-R5 to map
six 1KB or 2KB CHR banks. If the canonical mapper's CHR bank write
handling differs from the old submodule's (timing, register semantics,
or initialization), tiles will be pulled from wrong banks.

The old submodule (`0bb6e99`) is from commit `fix: prevent mid-frame
NMI from corrupting PPU latch and VRAM buffer` — it predates the major
MMC3 work that went into canonical (8KB bank dispatch, scanline IRQ
counter, etc.). Between `0bb6e99` and canonical `812d259`, the mapper
code evolved significantly:
- `846a8a4` MMC3 8KB bank dispatch
- `85dc59c` MMC3 IRQ masking, illegal opcode dispatch filter
- `2f109ef` Expose MMC3 mapper state
- `48cf8b3` PPU t/v register model
- `a8db205` Guard t-register scroll sync to MMC3 only

Any of these could have introduced a subtle CHR banking behavior change
that Cookie depends on.

## Recommended debugging approach

### 1. Set up oracle comparison
Cookie has verify_mode + Nestopia bridge infrastructure already wired
up. Build with `-DENABLE_NESTOPIA_ORACLE=ON` (requires cloning
`nestopia-core` manually into the project dir since it's no longer a
submodule). Run with `--verify` to get native vs oracle RAM diffs.

### 2. Compare CHR bank state at frame 1
Use TCP debug commands to dump mapper state from both native and oracle:
```
# Connect to native (port 4370)
{"cmd":"mapper_state"}

# Connect to oracle (port 4371, if running --emulated)
{"cmd":"mapper_state"}
```
Compare R0-R5 CHR bank register values. If they diverge at boot,
that's the root cause.

### 3. Trace $8000 writes
MMC3 bank select is done by writing to $8000 (bank select register)
and $8001 (bank data register). The sequence of writes during init
determines which CHR banks are mapped. Add a follower/watchpoint on
the mapper write handler to trace every $8000/$8001 write pair and
compare native vs oracle.

### 4. Check mapper_write in canonical vs old submodule
The old submodule's `mapper.c` at `0bb6e99` is preserved in the
format-patch output at:
```
F:/Projects/nesrecomp-release/YoshisCookieRecomp/nesrecomp.corrupted/runner/src/mapper.c
```
(This may or may not still exist — the canonical clone was re-created
during a corruption recovery. If not, check out `0bb6e99` from the
nesrecomp remote: `git -C F:/Projects/nesrecomp fetch origin &&
git -C F:/Projects/nesrecomp show 0bb6e99:runner/src/mapper.c`.)

Diff `mapper_write()` between old and canonical. Focus on:
- The $8000/$8001 handler (MMC3 bank select + bank data)
- CHR bank granularity (1KB vs 2KB vs 8KB)
- The `mapper_get_chr_bank()` function if it exists
- Initial bank state at power-on

### 5. Narrower bisect if needed
If the mapper diff is large, the intermediate commits between `0bb6e99`
and `812d259` are all on canonical's git history. You can binary-search
by checking out intermediate SHAs in `F:/Projects/nesrecomp`, rebuilding,
and testing Cookie.

## Key files

| File | Purpose |
|------|---------|
| `game.toml` | Recompiler config — trampolines, inline_dispatch, extra funcs, data regions |
| `extras.c` | Game hooks — TCP debug server at port 4370, verify mode |
| `verify_mode.c` | Native vs Nestopia comparison (fprintf-based, no ring buffer plumbing) |
| `CMakeLists.txt` | Build — pin-check block, nestopia oracle option |
| `nesrecomp.pin` | Pinned to `ed4137f` (LOCAL-ONLY canonical) |
| `nesrecomp/` | Junction → `F:/Projects/nesrecomp` |

## Build

```bash
cd F:/Projects/nesrecomp-release/YoshisCookieRecomp

# Normal (no oracle)
cmake -B build -S . -G "Visual Studio 17 2022" -A x64 -DENABLE_NESTOPIA_ORACLE=OFF
cmake --build build --config Release
./build/Release/YoshisCookieRecomp.exe "Yoshi's Cookie # NES.NES"

# With oracle (needs nestopia-core cloned manually)
git clone https://github.com/libretro/nestopia.git nestopia-core
cmake -B build -S . -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
./build/Release/YoshisCookieRecomp.exe "Yoshi's Cookie # NES.NES" --verify
```

## ROM details
- **Mapper 4 (MMC3)**, 8 PRG banks (128 KB), 8 CHR ROM banks (64 KB)
- Vectors: NMI=$C5C8, RESET=$F6DD, IRQ=$D2E7
- CRC32 (data): 0x52B58732

## Canonical nesrecomp state
```
ed4137f  ppu_renderer: restore t-register sync, abs_nt_y, g_disable_render_irq
174b202  function_finder: split-table dispatch with PHA/PHA fake-return
8619146  function_finder: auto-detect split-table JMP(zp) dispatch
812d259  debug_server: add debug_server_set_verify_result API          ← origin/master
32306d0  fix(ppu_renderer): adopt vendored Option A hybrid
f3d8bd5  fix(ppu_renderer): canonical PPU vertical state machine
```

The top 3 commits are LOCAL-ONLY (not pushed to origin). They exist
because MM3 needs the function_finder and ppu_renderer work. Cookie
pins to the same SHA so the junction resolves, but Cookie's bug is
independent of those 3 commits — the rendering was also broken when
testing against `812d259` alone (before the ppu_renderer restoration).

## What NOT to do
- Do not edit `generated/yoshis-cookie_full.c` or `generated/yoshis-cookie_dispatch.c` — fix the tool
- Do not add fprintf debug logging — use TCP debug server at port 4370
- Do not guess what the 6502 code does — use Ghidra MCP
- Do not stub missing functionality — implement it properly in the runner
