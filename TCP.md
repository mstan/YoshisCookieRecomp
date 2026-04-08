# TCP Debug Server — Command Reference

JSON-over-newline protocol on `127.0.0.1:4370` (native) or `:4371` (emulated).
Send `{"cmd":"NAME", ...}\n`, receive JSON response.

## Core commands

| Command | Params | Description |
|---------|--------|-------------|
| `ping` | — | Health check |
| `frame` | — | Current frame + last function |
| `get_registers` | — | A, X, Y, S, P, flags, bank, frame |
| `read_ram` | `addr`, `len` (max 256) | Hex dump of CPU RAM |
| `dump_ram` | `addr`, `len` (max 8192) | Multi-chunk hex dump |
| `write_ram` | `addr`, `val` | Write single byte |
| `read_ppu` | `addr`, `len` | Read PPU address space |
| `mapper_state` | — | Mapper type, bank, MMC3 regs, IRQ state |
| `ppu_state` | — | PPUCTRL, PPUMASK, PPUSTATUS, scroll, spr0 |

## Followers (write tracking)

| Command | Params | Description |
|---------|--------|-------------|
| `follow` | `addr`, `break_on` (opt) | Start tracking writes to address |
| `unfollow` | `addr` | Stop tracking |
| `follow_history` | `addr`, `limit` | Last N writes with frame, old/new val, call stack |

**Note:** Followers only see writes via `nes_write()`. PHA/JSR stack writes bypass this — use `stack_trace_history` instead.

## Stack trace (NES_TRACE_STACK_WRITES)

| Command | Params | Description |
|---------|--------|-------------|
| `stack_first_drop` | — | First time S dropped below $C0: frame, seq, S, fn, kind (push/txs), pc |
| `stack_trace_history` | `limit`, `before_drop` | Ring buffer entries. `before_drop=1` returns entries at time of first drop. Each entry: frame, seq, S, val, direction (+/-), fn |

## S-register tracking

| Command | Params | Description |
|---------|--------|-------------|
| `watch_s` | `break_on_change`, `frame_lo`, `frame_hi` | Enable S change tracking |
| `unwatch_s` | — | Disable |
| `watch_s_history` | — | Recent S changes |

## Watchpoints

| Command | Params | Description |
|---------|--------|-------------|
| `watch` | `addr`, `val` (opt) | Break on RAM write |
| `unwatch` | `addr` | Remove watchpoint |

## Time travel

| Command | Params | Description |
|---------|--------|-------------|
| `get_frame` | `frame` | Get specific frame from ring buffer |
| `read_frame_ram` | `frame`, `addr`, `len` | Read RAM at historical frame |
| `frame_range` | `start`, `end`, `addr`, `len` | Hex dump across frame range |
| `frame_timeseries` | `start`, `end`, `addrs` (array) | Per-frame values for addresses |
| `history` | `addr`, `start`, `end` | Value history for address across frames |
| `first_failure` | — | First verify-mode failure frame |

## Flow control

| Command | Params | Description |
|---------|--------|-------------|
| `pause` | — | Pause game loop |
| `continue` | — | Resume |
| `step` | `count` | Step N frames |
| `run_to_frame` | `frame` | Run until frame N |
| `set_input` | `buttons` | Override controller input |
| `clear_input` | — | Remove input override |

## Debug

| Command | Params | Description |
|---------|--------|-------------|
| `call_stack` | — | Current recomp shadow call stack (needs RECOMP_STACK_TRACKING) |
| `watchdog_status` | — | Watchdog trigger state |
| `quit` | — | Exit game |
