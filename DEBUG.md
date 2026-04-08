# Debug Loop

1. **Sync state** — not frame number. Use PPU state, scroll, palette, or game RAM.
2. **Dump native + emulator** — TCP ring buffer on port 4370 (native) / 4371 (emulated).
3. **Byte-level diff** — exact address, expected vs actual.
4. **Find FIRST divergence** — earliest frame, not latest symptom.
5. **Trace the writer** — function, instruction, call path. Use `follow` + `follow_history` or `stack_trace_history`.
6. **Classify** — codegen / runner / timing / game config.
7. **Fix** — minimal change in recompiler or runner. Never generated code.

## Stack-specific debugging (this game)

The game uses the stack page ($0100-$01FF) as a VRAM update buffer.
`func_F4C0` reads it via PLA after TXS $FF. NMI pushes 6 bytes at $01XX.
If S is too low, NMI pushes overwrite the VRAM buffer → garbled tiles.

### Instrumentation available

- `stack_trace_history` TCP command: ring buffer of all push/pull ops with direction, S, value, function
- `stack_first_drop` TCP command: captures the first time S drops below $C0
- S-at-vblank stderr trace: prints when S changes between instructions (first 50 changes)
- NMI-ENTRY/NMI-EXIT stderr traces: prints S around NMI push/restore
- PRE-RENDER/POST-RENDER stderr traces: prints S around ppu_render_frame

### Python inspection scripts

- `inspect.py [port]` — registers, mapper state, stack page, PPU state
- `inspect_stack.py` — stack_first_drop + stack_trace_history (before drop + latest)
- `inspect_emu.py [port]` — same as inspect.py but for emulated mode (port 4371)
- `dump_followers.py` — follow_history for registered addresses
