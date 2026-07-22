/* yoshis-cookie_full_bank07_part07.c — PRG bank 7 function bodies (sub-part 7).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella yoshis-cookie_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "yoshis-cookie_full_decls.h"

void func_C993(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C993");
#endif
label_C993:;
    /* $C993: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x27); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C995:;
    /* $C995: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xA9 + g_cpu.X) & 0xFF), g_cpu.A);
label_C997:;
    /* $C997: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC997); return;
}

void func_E120(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E120");
#endif
label_E120:;
    /* $E120: FA */ maybe_trigger_vblank(2); /* NOP */
label_E121:;
    /* $E121: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EFA9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EFA9");
#endif
label_EFA9:;
    /* $EFA9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_EFAB:;
    /* $EFAB: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_EFAD:;
    /* $EFAD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05DD); FLAG_NZ(g_cpu.A);
label_EFB0:;
    /* $EFB0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EFB5; }
label_EFB2:;
    /* $EFB2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F028(); g_code_window_base = _swb; } return;
label_EFB5:;
    /* $EFB5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EFB7:;
    /* $EFB7: 8D */ maybe_trigger_vblank(4); nes_write(0x05DD, g_cpu.A);
label_EFBA:;
    /* $EFBA: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EEBE(); g_code_window_base = _swb; }
label_EFBD:;
    /* $EFBD: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x03E2); FLAG_NZ(g_cpu.Y);
label_EFC0:;
    /* $EFC0: 84 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.Y);
label_EFC2:;
    /* $EFC2: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x03E6); FLAG_NZ(g_cpu.X);
label_EFC5:;
    /* $EFC5: 86 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.X);
label_EFC7:;
    /* $EFC7: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E002(); g_code_window_base = _swb; }
label_EFCA:;
    /* $EFCA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_EFCD:;
    /* $EFCD: 8D */ maybe_trigger_vblank(4); nes_write(0x05DB, g_cpu.A);
label_EFD0:;
    /* $EFD0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_EFD3:;
    /* $EFD3: 8D */ maybe_trigger_vblank(4); nes_write(0x05DC, g_cpu.A);
label_EFD6:;
    /* $EFD6: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFDE, -1);
label_EFD9:;
    /* $EFD9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_EFDB:;
    /* $EFDB: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_EFDD:;
    /* $EFDD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E6); FLAG_NZ(g_cpu.A);
label_EFE0:;
    /* $EFE0: 8D */ maybe_trigger_vblank(4); nes_write(0x03E9, g_cpu.A);
label_EFE3:;
    /* $EFE3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_EFE6:;
    /* $EFE6: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EFE9:;
    /* $EFE9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_EFEE; }
label_EFEB:;
    /* $EFEB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F023(); g_code_window_base = _swb; } return;
label_EFEE:;
    /* $EFEE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EFF1:;
    /* $EFF1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_EFF3:;
    /* $EFF3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EFF7; }
label_EFF5:;
    /* $EFF5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_EFF7:;
    /* $EFF7: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_EFF9:;
    /* $EFF9: 9D */ maybe_trigger_vblank(5); nes_write((0x0368 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EFFC:;
    /* $EFFC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_EFFE:;
    /* $EFFE: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBDE(); g_code_window_base = _swb; }
label_F001:;
    /* $F001: 9D */ maybe_trigger_vblank(5); nes_write((0x0369 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F004:;
    /* $F004: 9D */ maybe_trigger_vblank(5); nes_write((0x036D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F007:;
    /* $F007: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F00A:;
    /* $F00A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F00C:;
    /* $F00C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F010; }
label_F00E:;
    /* $F00E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2D; FLAG_NZ(g_cpu.A);
label_F010:;
    /* $F010: 9D */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F013:;
    /* $F013: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F014:;
    /* $F014: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F015:;
    /* $F015: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F016:;
    /* $F016: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F017:;
    /* $F017: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_F019:;
    /* $F019: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F01A:;
    /* $F01A: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F01D:;
    /* $F01D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F020:;
    /* $F020: 4C */ maybe_trigger_vblank(3); goto label_EFE3;
}

void func_F097(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F097");
#endif
label_F097:;
    /* $F097: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_F099:;
    /* $F099: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F09D; }
label_F09B:;
    /* $F09B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_F09D:;
    /* $F09D: 9D */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F0A0:;
    /* $F0A0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0A3:;
    /* $F0A3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_F0A5:;
    /* $F0A5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0A9; }
label_F0A7:;
    /* $F0A7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1C; FLAG_NZ(g_cpu.A);
label_F0A9:;
    /* $F0A9: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_F0AB:;
    /* $F0AB: 9D */ maybe_trigger_vblank(5); nes_write((0x0368 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F0AE:;
    /* $F0AE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_F0B0:;
    /* $F0B0: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBDE(); g_code_window_base = _swb; }
label_F0B3:;
    /* $F0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0369 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F0B6:;
    /* $F0B6: 9D */ maybe_trigger_vblank(5); nes_write((0x036D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F0B9:;
    /* $F0B9: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_F0BA:;
    /* $F0BA: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F0BB:;
    /* $F0BB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_F0BD:;
    /* $F0BD: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F0BE:;
    /* $F0BE: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F0BF:;
    /* $F0BF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F0C0:;
    /* $F0C0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_F0C2:;
    /* $F0C2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F0C3:;
    /* $F0C3: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F0C6:;
    /* $F0C6: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F0C9:;
    /* $F0C9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F089(); g_code_window_base = _swb; } return;
}

void func_C669(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C669");
#endif
label_C669:;
    /* $C669: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_C66B:;
    /* $C66B: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x0FC9; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_C66E:;
    /* $C66E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C670:;
    /* $C670: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_C672:;
    /* $C672: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C674:;
    /* $C674: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_C676:;
    /* $C676: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C678:;
    /* $C678: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_C67A:;
    /* $C67A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C67C:;
    /* $C67C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_C67E:;
    /* $C67E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C680:;
    /* $C680: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x32; g_cpu.C=(g_cpu.A>=0x32)?1:0; FLAG_NZ(r&0xFF); }
label_C682:;
    /* $C682: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C684:;
    /* $C684: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x33; g_cpu.C=(g_cpu.A>=0x33)?1:0; FLAG_NZ(r&0xFF); }
label_C686:;
    /* $C686: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C688:;
    /* $C688: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x34; g_cpu.C=(g_cpu.A>=0x34)?1:0; FLAG_NZ(r&0xFF); }
label_C68A:;
    /* $C68A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C68C:;
    /* $C68C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x36; g_cpu.C=(g_cpu.A>=0x36)?1:0; FLAG_NZ(r&0xFF); }
label_C68E:;
    /* $C68E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C690:;
    /* $C690: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x37; g_cpu.C=(g_cpu.A>=0x37)?1:0; FLAG_NZ(r&0xFF); }
label_C692:;
    /* $C692: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C694:;
    /* $C694: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_C696:;
    /* $C696: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C698:;
    /* $C698: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_C69A:;
    /* $C69A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C69C:;
    /* $C69C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1C; g_cpu.C=(g_cpu.A>=0x1C)?1:0; FLAG_NZ(r&0xFF); }
label_C69E:;
    /* $C69E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6A0:;
    /* $C6A0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB4); FLAG_NZ(g_cpu.A);
label_C6A2:;
    /* $C6A2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6A6; }
label_C6A4:;
    /* $C6A4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6A6:;
    /* $C6A6: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xAE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6A8:;
    /* $C6A8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6AA:;
    /* $C6AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_C6AC:;
    /* $C6AC: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_C6AE:;
    /* $C6AE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B0:;
    /* $C6B0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6B4; }
label_C6B2:;
    /* $C6B2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B4:;
    /* $C6B4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B6:;
    /* $C6B6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6B8:;
    /* $C6B8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6BA:;
    /* $C6BA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC6E7, -1);
label_C6BD:;
    /* $C6BD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xCA38, -1);
label_C6C0:;
    /* $C6C0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_C6C2:;
    /* $C6C2: 8D */ maybe_trigger_vblank(4); nes_write(0x0409, g_cpu.A);
label_C6C5:;
    /* $C6C5: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F599(); g_code_window_base = _swb; }
label_C6C8:;
    /* $C6C8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048F); FLAG_NZ(g_cpu.A);
label_C6CB:;
    /* $C6CB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6CD:;
    /* $C6CD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_C6D0:;
    /* $C6D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_C6D2:;
    /* $C6D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6D4:;
    /* $C6D4: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E36F(); g_code_window_base = _swb; }
label_C6D7:;
    /* $C6D7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C6DD:;
    /* $C6DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C6DF:;
    /* $C6DF: 85 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.A);
label_C6E1:;
    /* $C6E1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E2:;
    /* $C6E2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C6E3:;
    /* $C6E3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E4:;
    /* $C6E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C6E5:;
    /* $C6E5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E6:;
    /* $C6E6: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC6E6; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D9A9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9A9");
#endif
label_D9A9:;
    /* $D9A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D9AB:;
    /* $D9AB: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_D9AC:;
    /* $D9AC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D9AD:;
    /* $D9AD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC0); g_cpu.A=r&0xFF; }
label_D9AF:;
    /* $D9AF: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D9B2:;
    /* $D9B2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_D9B3:;
    /* $D9B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_D9B5:;
    /* $D9B5: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_D9B7:;
    /* $D9B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC5; FLAG_NZ(g_cpu.A);
label_D9B9:;
    /* $D9B9: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D9BC:;
    /* $D9BC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_D9BD:;
    /* $D9BD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0020 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D9C0:;
    /* $D9C0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D9C3:;
    /* $D9C3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_D9C4:;
    /* $D9C4: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_D9C5:;
    /* $D9C5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D9C6:;
    /* $D9C6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_D9C8:;
    /* $D9C8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_D9C9:;
    /* $D9C9: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D9CB:;
    /* $D9CB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D9BD;
    }
label_D9CD:;
    /* $D9CD: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_D9D0:;
    /* $D9D0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_D9D3:;
    /* $D9D3: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_D9D5:;
    /* $D9D5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0405); FLAG_NZ(g_cpu.A);
label_D9D8:;
    /* $D9D8: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_D9DA:;
    /* $D9DA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFEA, -1);
label_D9DD:;
    /* $D9DD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_D9E0:;
    /* $D9E0: 85 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.A);
label_D9E2:;
    /* $D9E2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0405); FLAG_NZ(g_cpu.A);
label_D9E5:;
    /* $D9E5: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_D9E7:;
    /* $D9E7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFDE, -1);
label_D9EA:;
    /* $D9EA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_D9EC:;
    /* $D9EC: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D9EE:;
    /* $D9EE: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_D9F1:;
    /* $D9F1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_D9F3:;
    /* $D9F3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D9F6:;
    /* $D9F6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_D9F7:;
    /* $D9F7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_D9F9:;
    /* $D9F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D9FC:;
    /* $D9FC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_D9FD:;
    /* $D9FD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E5); FLAG_NZ(g_cpu.A);
label_DA00:;
    /* $DA00: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DA01:;
    /* $DA01: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DA04:;
    /* $DA04: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DA05:;
    /* $DA05: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_DA07:;
    /* $DA07: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_DA09:;
    /* $DA09: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_DA0B:;
    /* $DA0B: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_DA0D:;
    /* $DA0D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA10:;
    /* $DA10: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA11:;
    /* $DA11: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DA14:;
    /* $DA14: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA17:;
    /* $DA17: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA18:;
    /* $DA18: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_DA19:;
    /* $DA19: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DA1A:;
    /* $DA1A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_DA1C:;
    /* $DA1C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DA1D:;
    /* $DA1D: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA1F:;
    /* $DA1F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DA11;
    }
label_DA21:;
    /* $DA21: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DA23:;
    /* $DA23: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA26:;
    /* $DA26: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA27:;
    /* $DA27: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA29:;
    /* $DA29: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DA2B:;
    /* $DA2B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA2E:;
    /* $DA2E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA2F:;
    /* $DA2F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_DA31:;
    /* $DA31: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_DA33:;
    /* $DA33: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA36:;
    /* $DA36: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA37:;
    /* $DA37: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_DA39:;
    /* $DA39: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DA3C:;
    /* $DA3C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA3F:;
    /* $DA3F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA40:;
    /* $DA40: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_DA41:;
    /* $DA41: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DA42:;
    /* $DA42: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_DA44:;
    /* $DA44: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DA45:;
    /* $DA45: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA47:;
    /* $DA47: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DA39;
    }
label_DA49:;
    /* $DA49: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DA4B:;
    /* $DA4B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA4E:;
    /* $DA4E: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_DA51:;
    /* $DA51: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C04F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C04F");
#endif
label_C04F:;
    /* $C04F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x4CE4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C052:;
    /* $C052: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE4 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C054:;
    /* $C054: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E3F5(); g_code_window_base = _swb; } return;
}

void func_D05F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D05F");
#endif
label_D05F:;
    /* $D05F: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D061:;
    /* $D061: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xD0 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_D063:;
    /* $D063: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xD0; g_cpu.C=(g_cpu.Y>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_D065:;
    /* $D065: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_D066:;
    /* $D066: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x103C), -1); return; }
label_D068:;
    /* $D068: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1048), -1); return; }
label_D06A:;
    /* $D06A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x104B), -1); return; }
label_D06C:;
    /* $D06C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1058), -1); return; }
label_D06E:;
    /* $D06E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D0D0; }
label_D070:;
    /* $D070: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F26A(); g_code_window_base = _swb; }
label_D073:;
    /* $D073: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E2); FLAG_NZ(g_cpu.A);
label_D076:;
    /* $D076: 8D */ maybe_trigger_vblank(4); nes_write(0x0404, g_cpu.A);
label_D079:;
    /* $D079: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D07F:;
    /* $D07F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D080:;
    /* $D080: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F2BF(); g_code_window_base = _swb; }
label_D083:;
    /* $D083: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E2); FLAG_NZ(g_cpu.A);
label_D086:;
    /* $D086: 8D */ maybe_trigger_vblank(4); nes_write(0x0404, g_cpu.A);
label_D089:;
    /* $D089: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D08F:;
    /* $D08F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D090:;
    /* $D090: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F31B(); g_code_window_base = _swb; }
label_D093:;
    /* $D093: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E3); FLAG_NZ(g_cpu.A);
label_D096:;
    /* $D096: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D097:;
    /* $D097: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_D099:;
    /* $D099: 8D */ maybe_trigger_vblank(4); nes_write(0x0405, g_cpu.A);
label_D09C:;
    /* $D09C: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D0A2:;
    /* $D0A2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D0A3:;
    /* $D0A3: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F36B(); g_code_window_base = _swb; }
label_D0A6:;
    /* $D0A6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E3); FLAG_NZ(g_cpu.A);
label_D0A9:;
    /* $D0A9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D0AA:;
    /* $D0AA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_D0AC:;
    /* $D0AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0405, g_cpu.A);
label_D0AF:;
    /* $D0AF: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D0B5:;
    /* $D0B5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D0B6:;
    /* $D0B6: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D0BC:;
    /* $D0BC: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F3C4(); g_code_window_base = _swb; }
label_D0BF:;
    /* $D0BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D0C0:;
    /* $D0C0: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D0C6:;
    /* $D0C6: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F3DC(); g_code_window_base = _swb; }
label_D0C9:;
    /* $D0C9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D0CA:;
    /* $D0CA: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D0D0:;
    /* $D0D0: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F3F4(); g_code_window_base = _swb; }
label_D0D3:;
    /* $D0D3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D7D6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D7D6");
#endif
label_D7D6:;
    /* $D7D6: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x71) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_D7D8:;
    /* $D7D8: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x71) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_D7DA:;
    /* $D7DA: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x71) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_D7DC:;
    /* $D7DC: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D7DE:;
    /* $D7DE: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0C2E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D7E1:;
    /* $D7E1: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0C0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D7E4:;
    /* $D7E4: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0274); FLAG_NZ(g_cpu.A);
label_D7E7:;
    /* $D7E7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_D7E8:;
    /* $D7E8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_D7E9:;
    /* $D7E9: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_D7EA:;
    /* $D7EA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xD7EA); return;
}

void func_EDD8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EDD8");
#endif
label_EDD8:;
    /* $EDD8: 8D */ maybe_trigger_vblank(4); nes_write(0x03CA, g_cpu.A);
label_EDDB:;
    /* $EDDB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EDE7(); g_code_window_base = _swb; } return;
}

void func_E01F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E01F");
#endif
label_E01F:;
    /* $E01F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F2F1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F2F1");
#endif
label_F2F1:;
    /* $F2F1: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_F303; }
label_F2F3:;
    /* $F2F3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F2F4:;
    /* $F2F4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F2F7:;
    /* $F2F7: 99 */ maybe_trigger_vblank(5); nes_write((0x01FF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F2FA:;
    /* $F2FA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F2FD:;
    /* $F2FD: 99 */ maybe_trigger_vblank(5); nes_write((0x020F + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F300:;
    /* $F300: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F2E6(); g_code_window_base = _swb; } return;
label_F303:;
    /* $F303: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F304:;
    /* $F304: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F307:;
    /* $F307: 99 */ maybe_trigger_vblank(5); nes_write((0x01FF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F30A:;
    /* $F30A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F30D:;
    /* $F30D: 99 */ maybe_trigger_vblank(5); nes_write((0x020F + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F310:;
    /* $F310: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x19); FLAG_NZ(g_cpu.A);
label_F312:;
    /* $F312: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F315:;
    /* $F315: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_F317:;
    /* $F317: 99 */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F31A:;
    /* $F31A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EF01(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EF01");
#endif
label_EF01:;
    /* $EF01: 8D */ maybe_trigger_vblank(4); nes_write(0x037F, g_cpu.A);
label_EF04:;
    /* $EF04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_EF06:;
    /* $EF06: 8D */ maybe_trigger_vblank(4); nes_write(0x0383, g_cpu.A);
label_EF09:;
    /* $EF09: 8D */ maybe_trigger_vblank(4); nes_write(0x0387, g_cpu.A);
label_EF0C:;
    /* $EF0C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_EF0E:;
    /* $EF0E: 8D */ maybe_trigger_vblank(4); nes_write(0x038B, g_cpu.A);
label_EF11:;
    /* $EF11: 8D */ maybe_trigger_vblank(4); nes_write(0x038F, g_cpu.A);
label_EF14:;
    /* $EF14: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_EF16:;
    /* $EF16: 8D */ maybe_trigger_vblank(4); nes_write(0x0393, g_cpu.A);
label_EF19:;
    /* $EF19: 8D */ maybe_trigger_vblank(4); nes_write(0x0397, g_cpu.A);
label_EF1C:;
    /* $EF1C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_EF1E:;
    /* $EF1E: 8D */ maybe_trigger_vblank(4); nes_write(0x039B, g_cpu.A);
label_EF21:;
    /* $EF21: 8D */ maybe_trigger_vblank(4); nes_write(0x039F, g_cpu.A);
label_EF24:;
    /* $EF24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_EF26:;
    /* $EF26: 8D */ maybe_trigger_vblank(4); nes_write(0x03A0, g_cpu.A);
label_EF29:;
    /* $EF29: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C002(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C002");
#endif
label_C002:;
    /* $C002: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4C + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C004:;
    /* $C004: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x4CEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C007:;
    /* $C007: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC007); return;
}

void func_CAC9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CAC9");
#endif
label_CAC9:;
    /* $CAC9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC5; g_cpu.C=(g_cpu.A>=0xC5)?1:0; FLAG_NZ(r&0xFF); }
label_CACB:;
    /* $CACB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CAE6; }
label_CACD:;
    /* $CACD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048A); FLAG_NZ(g_cpu.A);
label_CAD0:;
    /* $CAD0: 8D */ maybe_trigger_vblank(4); nes_write(0x0487, g_cpu.A);
label_CAD3:;
    /* $CAD3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_CAD5:;
    /* $CAD5: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_CAD8:;
    /* $CAD8: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_CADB:;
    /* $CADB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CADD:;
    /* $CADD: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_CADF:;
    /* $CADF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CAE1:;
    /* $CAE1: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_CAE3:;
    /* $CAE3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCBAB, -1); return;
label_CAE6:;
    /* $CAE6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F1); FLAG_NZ(g_cpu.A);
label_CAE9:;
    /* $CAE9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CAF1; }
label_CAEB:;
    /* $CAEB: CE */ maybe_trigger_vblank(6); { uint16_t a=0x05F1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CAEE:;
    /* $CAEE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCBAB, -1); return;
label_CAF1:;
    /* $CAF1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_CAF3:;
    /* $CAF3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CAF8; }
label_CAF5:;
    /* $CAF5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCBAB, -1); return;
label_CAF8:;
    /* $CAF8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_CAFA:;
    /* $CAFA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x90; FLAG_NZ(g_cpu.A);
label_CAFC:;
    /* $CAFC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_CB01; }
label_CAFE:;
    /* $CAFE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCBAB, -1); return;
label_CB01:;
    /* $CB01: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048F); FLAG_NZ(g_cpu.A);
label_CB04:;
    /* $CB04: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CB5B; }
label_CB06:;
    /* $CB06: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E4); FLAG_NZ(g_cpu.A);
label_CB09:;
    /* $CB09: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_CB0B:;
    /* $CB0B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CB36; }
label_CB0D:;
    /* $CB0D: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_CB13:;
    /* $CB13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CB15:;
    /* $CB15: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_CB18:;
    /* $CB18: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048A); FLAG_NZ(g_cpu.A);
label_CB1B:;
    /* $CB1B: 8D */ maybe_trigger_vblank(4); nes_write(0x0487, g_cpu.A);
label_CB1E:;
    /* $CB1E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_CB20:;
    /* $CB20: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_CB23:;
    /* $CB23: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_CB26:;
    /* $CB26: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CB28:;
    /* $CB28: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_CB2A:;
    /* $CB2A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CB2C:;
    /* $CB2C: 8D */ maybe_trigger_vblank(4); nes_write(0x048F, g_cpu.A);
label_CB2F:;
    /* $CB2F: 85 */ maybe_trigger_vblank(3); nes_write(0xAC, g_cpu.A);
label_CB31:;
    /* $CB31: 85 */ maybe_trigger_vblank(3); nes_write(0xAD, g_cpu.A);
label_CB33:;
    /* $CB33: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCBAB, -1); return;
label_CB36:;
    /* $CB36: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_CB38:;
    /* $CB38: 8D */ maybe_trigger_vblank(4); nes_write(0x03C9, g_cpu.A);
label_CB3B:;
    /* $CB3B: 8D */ maybe_trigger_vblank(4); nes_write(0x03CA, g_cpu.A);
label_CB3E:;
    /* $CB3E: 8D */ maybe_trigger_vblank(4); nes_write(0x03CB, g_cpu.A);
label_CB41:;
    /* $CB41: 8D */ maybe_trigger_vblank(4); nes_write(0x03CC, g_cpu.A);
label_CB44:;
    /* $CB44: 8D */ maybe_trigger_vblank(4); nes_write(0x03CD, g_cpu.A);
label_CB47:;
    /* $CB47: 8D */ maybe_trigger_vblank(4); nes_write(0x03CE, g_cpu.A);
label_CB4A:;
    /* $CB4A: 8D */ maybe_trigger_vblank(4); nes_write(0x03CF, g_cpu.A);
label_CB4D:;
    /* $CB4D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CB4F:;
    /* $CB4F: 8D */ maybe_trigger_vblank(4); nes_write(0x048F, g_cpu.A);
label_CB52:;
    /* $CB52: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=3 addr=$8154 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x03; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8154_b3();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_CB58:;
    /* $CB58: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCBAB, -1); return;
label_CB5B:;
    /* $CB5B: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_CB61:;
    /* $CB61: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CB63:;
    /* $CB63: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_CB66:;
    /* $CB66: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_CB69:;
    /* $CB69: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_CB6B:;
    /* $CB6B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CB95; }
label_CB6D:;
    /* $CB6D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_CB6F:;
    /* $CB6F: 8D */ maybe_trigger_vblank(4); nes_write(0x04AB, g_cpu.A);
label_CB72:;
    /* $CB72: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CB74:;
    /* $CB74: 8D */ maybe_trigger_vblank(4); nes_write(0x04AC, g_cpu.A);
label_CB77:;
    /* $CB77: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CB79:;
    /* $CB79: 8D */ maybe_trigger_vblank(4); nes_write(0x040C, g_cpu.A);
label_CB7C:;
    /* $CB7C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_CB7E:;
    /* $CB7E: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_CB81:;
    /* $CB81: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_CB84:;
    /* $CB84: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CB86:;
    /* $CB86: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_CB88:;
    /* $CB88: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_CB8A:;
    /* $CB8A: 85 */ maybe_trigger_vblank(3); nes_write(0xBB, g_cpu.A);
label_CB8C:;
    /* $CB8C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CB8E:;
    /* $CB8E: 85 */ maybe_trigger_vblank(3); nes_write(0xBA, g_cpu.A);
label_CB90:;
    /* $CB90: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_CB92:;
    /* $CB92: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCBAB, -1); return;
label_CB95:;
    /* $CB95: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x32; FLAG_NZ(g_cpu.A);
label_CB97:;
    /* $CB97: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_CB9A:;
    /* $CB9A: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_CB9D:;
    /* $CB9D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CB9F:;
    /* $CB9F: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_CBA1:;
    /* $CBA1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_CBA3:;
    /* $CBA3: 85 */ maybe_trigger_vblank(3); nes_write(0xBB, g_cpu.A);
label_CBA5:;
    /* $CBA5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CBA7:;
    /* $CBA7: 85 */ maybe_trigger_vblank(3); nes_write(0xBA, g_cpu.A);
label_CBA9:;
    /* $CBA9: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_CBAB:;
    /* $CBAB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D9D8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9D8");
#endif
label_D9D8:;
    /* $D9D8: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_D9DA:;
    /* $D9DA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFEA, -1);
label_D9DD:;
    /* $D9DD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_D9E0:;
    /* $D9E0: 85 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.A);
label_D9E2:;
    /* $D9E2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0405); FLAG_NZ(g_cpu.A);
label_D9E5:;
    /* $D9E5: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_D9E7:;
    /* $D9E7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFDE, -1);
label_D9EA:;
    /* $D9EA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_D9EC:;
    /* $D9EC: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D9EE:;
    /* $D9EE: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_D9F1:;
    /* $D9F1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_D9F3:;
    /* $D9F3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D9F6:;
    /* $D9F6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_D9F7:;
    /* $D9F7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_D9F9:;
    /* $D9F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D9FC:;
    /* $D9FC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_D9FD:;
    /* $D9FD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E5); FLAG_NZ(g_cpu.A);
label_DA00:;
    /* $DA00: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DA01:;
    /* $DA01: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DA04:;
    /* $DA04: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DA05:;
    /* $DA05: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_DA07:;
    /* $DA07: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_DA09:;
    /* $DA09: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_DA0B:;
    /* $DA0B: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_DA0D:;
    /* $DA0D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA10:;
    /* $DA10: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA11:;
    /* $DA11: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DA14:;
    /* $DA14: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA17:;
    /* $DA17: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA18:;
    /* $DA18: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_DA19:;
    /* $DA19: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DA1A:;
    /* $DA1A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_DA1C:;
    /* $DA1C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DA1D:;
    /* $DA1D: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA1F:;
    /* $DA1F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DA11;
    }
label_DA21:;
    /* $DA21: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DA23:;
    /* $DA23: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA26:;
    /* $DA26: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA27:;
    /* $DA27: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA29:;
    /* $DA29: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DA2B:;
    /* $DA2B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA2E:;
    /* $DA2E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA2F:;
    /* $DA2F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_DA31:;
    /* $DA31: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_DA33:;
    /* $DA33: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA36:;
    /* $DA36: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA37:;
    /* $DA37: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_DA39:;
    /* $DA39: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DA3C:;
    /* $DA3C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA3F:;
    /* $DA3F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA40:;
    /* $DA40: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_DA41:;
    /* $DA41: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DA42:;
    /* $DA42: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_DA44:;
    /* $DA44: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DA45:;
    /* $DA45: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA47:;
    /* $DA47: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DA39;
    }
label_DA49:;
    /* $DA49: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DA4B:;
    /* $DA4B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA4E:;
    /* $DA4E: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_DA51:;
    /* $DA51: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DAD9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DAD9");
#endif
label_DAD9:;
    /* $DAD9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_DADB:;
    /* $DADB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DADD:;
    /* $DADD: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DAE0:;
    /* $DAE0: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DAE1:;
    /* $DAE1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_DAE3:;
    /* $DAE3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DAE6:;
    /* $DAE6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DAE7:;
    /* $DAE7: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x18); FLAG_NZ(g_cpu.Y);
label_DAE9:;
    /* $DAE9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DAEC:;
    /* $DAEC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DAEF:;
    /* $DAEF: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DAF0:;
    /* $DAF0: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DAF1:;
    /* $DAF1: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DAF3:;
    /* $DAF3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DAE9;
    }
label_DAF5:;
    /* $DAF5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DAF7:;
    /* $DAF7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DAFA:;
    /* $DAFA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DBDA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DBDA");
#endif
label_DBDA:;
    /* $DBDA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DBDC:;
    /* $DBDC: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_DBDE:;
    /* $DBDE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DBE0:;
    /* $DBE0: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_DBE2:;
    /* $DBE2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFEA, -1);
label_DBE5:;
    /* $DBE5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0404); FLAG_NZ(g_cpu.A);
label_DBE8:;
    /* $DBE8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DBE9:;
    /* $DBE9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DBEA:;
    /* $DBEA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DBEB:;
    /* $DBEB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DBEC:;
    /* $DBEC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DBED:;
    /* $DBED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DBEE:;
    /* $DBEE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_DBF0:;
    /* $DBF0: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_DBF2:;
    /* $DBF2: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_DBF5:;
    /* $DBF5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DBF7:;
    /* $DBF7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DBFA:;
    /* $DBFA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DBFB:;
    /* $DBFB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DBFD:;
    /* $DBFD: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC00:;
    /* $DC00: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC01:;
    /* $DC01: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F1); FLAG_NZ(g_cpu.A);
label_DC04:;
    /* $DC04: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DC05:;
    /* $DC05: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DC08:;
    /* $DC08: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DC09:;
    /* $DC09: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_DC0B:;
    /* $DC0B: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_DC0D:;
    /* $DC0D: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_DC0F:;
    /* $DC0F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC12:;
    /* $DC12: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC13:;
    /* $DC13: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC16:;
    /* $DC16: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC19:;
    /* $DC19: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC1A:;
    /* $DC1A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC1B:;
    /* $DC1B: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC1D:;
    /* $DC1D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DC13;
    }
label_DC1F:;
    /* $DC1F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DC21:;
    /* $DC21: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DC22:;
    /* $DC22: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_DC24:;
    /* $DC24: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_DC26:;
    /* $DC26: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DC2A; }
label_DC28:;
    /* $DC28: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC2A:;
    /* $DC2A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DC2C:;
    /* $DC2C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC2F:;
    /* $DC2F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC30:;
    /* $DC30: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DC32:;
    /* $DC32: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC35:;
    /* $DC35: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC36:;
    /* $DC36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_DC38:;
    /* $DC38: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC3B:;
    /* $DC3B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC3C:;
    /* $DC3C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x18); FLAG_NZ(g_cpu.Y);
label_DC3E:;
    /* $DC3E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC41:;
    /* $DC41: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC44:;
    /* $DC44: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC45:;
    /* $DC45: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC46:;
    /* $DC46: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC48:;
    /* $DC48: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DC3E;
    }
label_DC4A:;
    /* $DC4A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DC4C:;
    /* $DC4C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC4F:;
    /* $DC4F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_DC52:;
    /* $DC52: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EBEA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EBEA");
#endif
label_EBEA:;
    /* $EBEA: EB */ maybe_trigger_vblank(2); { uint8_t m=0xC9; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_EBEC:;
    /* $EBEC: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x05B0 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBEF:;
    /* $EBEF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_EBF1:;
    /* $EBF1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBFB(); g_code_window_base = _swb; } return;
}

void func_EFEE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EFEE");
#endif
label_EFEE:;
    /* $EFEE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EFF1:;
    /* $EFF1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_EFF3:;
    /* $EFF3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EFF7; }
label_EFF5:;
    /* $EFF5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_EFF7:;
    /* $EFF7: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_EFF9:;
    /* $EFF9: 9D */ maybe_trigger_vblank(5); nes_write((0x0368 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EFFC:;
    /* $EFFC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_EFFE:;
    /* $EFFE: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBDE(); g_code_window_base = _swb; }
label_F001:;
    /* $F001: 9D */ maybe_trigger_vblank(5); nes_write((0x0369 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F004:;
    /* $F004: 9D */ maybe_trigger_vblank(5); nes_write((0x036D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F007:;
    /* $F007: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F00A:;
    /* $F00A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F00C:;
    /* $F00C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F010; }
label_F00E:;
    /* $F00E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2D; FLAG_NZ(g_cpu.A);
label_F010:;
    /* $F010: 9D */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F013:;
    /* $F013: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F014:;
    /* $F014: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F015:;
    /* $F015: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F016:;
    /* $F016: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F017:;
    /* $F017: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_F019:;
    /* $F019: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F01A:;
    /* $F01A: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F01D:;
    /* $F01D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F020:;
    /* $F020: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EFE3(); g_code_window_base = _swb; } return;
}

void func_F00C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F00C");
#endif
label_F00C:;
    /* $F00C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F010; }
label_F00E:;
    /* $F00E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2D; FLAG_NZ(g_cpu.A);
label_F010:;
    /* $F010: 9D */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F013:;
    /* $F013: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F014:;
    /* $F014: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F015:;
    /* $F015: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F016:;
    /* $F016: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F017:;
    /* $F017: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_F019:;
    /* $F019: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F01A:;
    /* $F01A: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F01D:;
    /* $F01D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F020:;
    /* $F020: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EFE3(); g_code_window_base = _swb; } return;
}

void func_C1B1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1B1");
#endif
label_C1B1:;
    /* $C1B1: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B3:;
    /* $C1B3: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC4); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B5:;
    /* $C1B5: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B7:;
    /* $C1B7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC6); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B9:;
    /* $C1B9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1BB:;
    /* $C1BB: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x60); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1BD:;
    /* $C1BD: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8145 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8145_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C1C3:;
    /* $C1C3: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=3 addr=$8103 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x03; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8103_b3();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C1C9:;
    /* $C1C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_C1CB:;
    /* $C1CB: 8D */ maybe_trigger_vblank(4); nes_write(0x03C9, g_cpu.A);
label_C1CE:;
    /* $C1CE: 8D */ maybe_trigger_vblank(4); nes_write(0x03CA, g_cpu.A);
label_C1D1:;
    /* $C1D1: 8D */ maybe_trigger_vblank(4); nes_write(0x03CB, g_cpu.A);
label_C1D4:;
    /* $C1D4: 8D */ maybe_trigger_vblank(4); nes_write(0x03CC, g_cpu.A);
label_C1D7:;
    /* $C1D7: 8D */ maybe_trigger_vblank(4); nes_write(0x03CD, g_cpu.A);
label_C1DA:;
    /* $C1DA: 8D */ maybe_trigger_vblank(4); nes_write(0x03CE, g_cpu.A);
label_C1DD:;
    /* $C1DD: 8D */ maybe_trigger_vblank(4); nes_write(0x03CF, g_cpu.A);
label_C1E0:;
    /* $C1E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C1E2:;
    /* $C1E2: 8D */ maybe_trigger_vblank(4); nes_write(0x05E5, g_cpu.A);
label_C1E5:;
    /* $C1E5: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_C1E7:;
    /* $C1E7: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_C1EA:;
    /* $C1EA: 8D */ maybe_trigger_vblank(4); nes_write(0x052D, g_cpu.A);
label_C1ED:;
    /* $C1ED: 8D */ maybe_trigger_vblank(4); nes_write(0x052E, g_cpu.A);
label_C1F0:;
    /* $C1F0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_C1F2:;
    /* $C1F2: 8D */ maybe_trigger_vblank(4); nes_write(0x05E6, g_cpu.A);
label_C1F5:;
    /* $C1F5: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=6 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x06; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b6();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C1FB:;
    /* $C1FB: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F516(); g_code_window_base = _swb; }
label_C1FE:;
    /* $C1FE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C8C1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C8C1");
#endif
label_C8C1:;
    /* $C8C1: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x00A9); FLAG_NZ(g_cpu.A);
label_C8C4:;
    /* $C8C4: 8D */ maybe_trigger_vblank(4); nes_write(0x0405, g_cpu.A);
label_C8C7:;
    /* $C8C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_C8C9:;
    /* $C8C9: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_C8CC:;
    /* $C8CC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC8DE, -1); return;
}

void func_DAD0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DAD0");
#endif
label_DAD0:;
    /* $DAD0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C185(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C185");
#endif
label_C185:;
    /* $C185: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDA); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C187:;
    /* $C187: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDB); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C189:;
    /* $C189: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDC); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C18B:;
    /* $C18B: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C18D:;
    /* $C18D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDE); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C18F:;
    /* $C18F: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDF); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C191:;
    /* $C191: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE0); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C193:;
    /* $C193: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C195:;
    /* $C195: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE2); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C197:;
    /* $C197: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE3); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C199:;
    /* $C199: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE4); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C19B:;
    /* $C19B: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C19D:;
    /* $C19D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE6); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C19F:;
    /* $C19F: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE7); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1A1:;
    /* $C1A1: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1A3:;
    /* $C1A3: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x4F); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1A5:;
    /* $C1A5: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6C); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1A7:;
    /* $C1A7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x8C); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1A9:;
    /* $C1A9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x96); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1AB:;
    /* $C1AB: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x96); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1AD:;
    /* $C1AD: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC1); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1AF:;
    /* $C1AF: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC2); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B1:;
    /* $C1B1: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B3:;
    /* $C1B3: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC4); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B5:;
    /* $C1B5: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B7:;
    /* $C1B7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC6); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B9:;
    /* $C1B9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1BB:;
    /* $C1BB: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x60); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1BD:;
    /* $C1BD: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8145 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8145_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C1C3:;
    /* $C1C3: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=3 addr=$8103 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x03; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8103_b3();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C1C9:;
    /* $C1C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_C1CB:;
    /* $C1CB: 8D */ maybe_trigger_vblank(4); nes_write(0x03C9, g_cpu.A);
label_C1CE:;
    /* $C1CE: 8D */ maybe_trigger_vblank(4); nes_write(0x03CA, g_cpu.A);
label_C1D1:;
    /* $C1D1: 8D */ maybe_trigger_vblank(4); nes_write(0x03CB, g_cpu.A);
label_C1D4:;
    /* $C1D4: 8D */ maybe_trigger_vblank(4); nes_write(0x03CC, g_cpu.A);
label_C1D7:;
    /* $C1D7: 8D */ maybe_trigger_vblank(4); nes_write(0x03CD, g_cpu.A);
label_C1DA:;
    /* $C1DA: 8D */ maybe_trigger_vblank(4); nes_write(0x03CE, g_cpu.A);
label_C1DD:;
    /* $C1DD: 8D */ maybe_trigger_vblank(4); nes_write(0x03CF, g_cpu.A);
label_C1E0:;
    /* $C1E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C1E2:;
    /* $C1E2: 8D */ maybe_trigger_vblank(4); nes_write(0x05E5, g_cpu.A);
label_C1E5:;
    /* $C1E5: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_C1E7:;
    /* $C1E7: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_C1EA:;
    /* $C1EA: 8D */ maybe_trigger_vblank(4); nes_write(0x052D, g_cpu.A);
label_C1ED:;
    /* $C1ED: 8D */ maybe_trigger_vblank(4); nes_write(0x052E, g_cpu.A);
label_C1F0:;
    /* $C1F0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_C1F2:;
    /* $C1F2: 8D */ maybe_trigger_vblank(4); nes_write(0x05E6, g_cpu.A);
label_C1F5:;
    /* $C1F5: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=6 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x06; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b6();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C1FB:;
    /* $C1FB: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F516(); g_code_window_base = _swb; }
label_C1FE:;
    /* $C1FE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EFDB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EFDB");
#endif
label_EFDB:;
    /* $EFDB: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_EFDD:;
    /* $EFDD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E6); FLAG_NZ(g_cpu.A);
label_EFE0:;
    /* $EFE0: 8D */ maybe_trigger_vblank(4); nes_write(0x03E9, g_cpu.A);
label_EFE3:;
    /* $EFE3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_EFE6:;
    /* $EFE6: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EFE9:;
    /* $EFE9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_EFEE; }
label_EFEB:;
    /* $EFEB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F023(); g_code_window_base = _swb; } return;
label_EFEE:;
    /* $EFEE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EFF1:;
    /* $EFF1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_EFF3:;
    /* $EFF3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EFF7; }
label_EFF5:;
    /* $EFF5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_EFF7:;
    /* $EFF7: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_EFF9:;
    /* $EFF9: 9D */ maybe_trigger_vblank(5); nes_write((0x0368 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EFFC:;
    /* $EFFC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_EFFE:;
    /* $EFFE: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBDE(); g_code_window_base = _swb; }
label_F001:;
    /* $F001: 9D */ maybe_trigger_vblank(5); nes_write((0x0369 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F004:;
    /* $F004: 9D */ maybe_trigger_vblank(5); nes_write((0x036D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F007:;
    /* $F007: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F00A:;
    /* $F00A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F00C:;
    /* $F00C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F010; }
label_F00E:;
    /* $F00E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2D; FLAG_NZ(g_cpu.A);
label_F010:;
    /* $F010: 9D */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F013:;
    /* $F013: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F014:;
    /* $F014: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F015:;
    /* $F015: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F016:;
    /* $F016: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F017:;
    /* $F017: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_F019:;
    /* $F019: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F01A:;
    /* $F01A: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F01D:;
    /* $F01D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F020:;
    /* $F020: 4C */ maybe_trigger_vblank(3); goto label_EFE3;
}

void func_DC02(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DC02");
#endif
label_DC02:;
    /* $DC02: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DC04:;
    /* $DC04: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DC05:;
    /* $DC05: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DC08:;
    /* $DC08: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DC09:;
    /* $DC09: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_DC0B:;
    /* $DC0B: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_DC0D:;
    /* $DC0D: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_DC0F:;
    /* $DC0F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC12:;
    /* $DC12: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC13:;
    /* $DC13: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC16:;
    /* $DC16: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC19:;
    /* $DC19: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC1A:;
    /* $DC1A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC1B:;
    /* $DC1B: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC1D:;
    /* $DC1D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DC13;
    }
label_DC1F:;
    /* $DC1F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DC21:;
    /* $DC21: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DC22:;
    /* $DC22: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_DC24:;
    /* $DC24: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_DC26:;
    /* $DC26: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DC2A; }
label_DC28:;
    /* $DC28: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC2A:;
    /* $DC2A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DC2C:;
    /* $DC2C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC2F:;
    /* $DC2F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC30:;
    /* $DC30: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DC32:;
    /* $DC32: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC35:;
    /* $DC35: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC36:;
    /* $DC36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_DC38:;
    /* $DC38: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC3B:;
    /* $DC3B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC3C:;
    /* $DC3C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x18); FLAG_NZ(g_cpu.Y);
label_DC3E:;
    /* $DC3E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC41:;
    /* $DC41: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC44:;
    /* $DC44: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC45:;
    /* $DC45: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC46:;
    /* $DC46: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC48:;
    /* $DC48: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DC3E;
    }
label_DC4A:;
    /* $DC4A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DC4C:;
    /* $DC4C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC4F:;
    /* $DC4F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_DC52:;
    /* $DC52: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C703(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C703");
#endif
label_C703:;
    /* $C703: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xEDF0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C706:;
    /* $C706: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_C708:;
    /* $C708: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C70A:;
    /* $C70A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_C70C:;
    /* $C70C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C70E:;
    /* $C70E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_C710:;
    /* $C710: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C712:;
    /* $C712: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_C714:;
    /* $C714: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C716:;
    /* $C716: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x16; g_cpu.C=(g_cpu.A>=0x16)?1:0; FLAG_NZ(r&0xFF); }
label_C718:;
    /* $C718: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C71A:;
    /* $C71A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1C; g_cpu.C=(g_cpu.A>=0x1C)?1:0; FLAG_NZ(r&0xFF); }
label_C71C:;
    /* $C71C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C71E:;
    /* $C71E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1D; g_cpu.C=(g_cpu.A>=0x1D)?1:0; FLAG_NZ(r&0xFF); }
label_C720:;
    /* $C720: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C722:;
    /* $C722: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x21; g_cpu.C=(g_cpu.A>=0x21)?1:0; FLAG_NZ(r&0xFF); }
label_C724:;
    /* $C724: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C726:;
    /* $C726: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x32; g_cpu.C=(g_cpu.A>=0x32)?1:0; FLAG_NZ(r&0xFF); }
label_C728:;
    /* $C728: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C72A:;
    /* $C72A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x33; g_cpu.C=(g_cpu.A>=0x33)?1:0; FLAG_NZ(r&0xFF); }
label_C72C:;
    /* $C72C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C72E:;
    /* $C72E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x34; g_cpu.C=(g_cpu.A>=0x34)?1:0; FLAG_NZ(r&0xFF); }
label_C730:;
    /* $C730: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C732:;
    /* $C732: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x35; g_cpu.C=(g_cpu.A>=0x35)?1:0; FLAG_NZ(r&0xFF); }
label_C734:;
    /* $C734: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C736:;
    /* $C736: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x36; g_cpu.C=(g_cpu.A>=0x36)?1:0; FLAG_NZ(r&0xFF); }
label_C738:;
    /* $C738: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C73A:;
    /* $C73A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x37; g_cpu.C=(g_cpu.A>=0x37)?1:0; FLAG_NZ(r&0xFF); }
label_C73C:;
    /* $C73C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C73E:;
    /* $C73E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_C740:;
    /* $C740: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C742:;
    /* $C742: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_C744:;
    /* $C744: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C746:;
    /* $C746: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_C748:;
    /* $C748: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C758; }
label_C74A:;
    /* $C74A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_C74C:;
    /* $C74C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_C74E:;
    /* $C74E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C755; }
label_C750:;
    /* $C750: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C752:;
    /* $C752: 8D */ maybe_trigger_vblank(4); nes_write(0x03FC, g_cpu.A);
label_C755:;
    /* $C755: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC7CE, -1); return;
label_C758:;
    /* $C758: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_C75A:;
    /* $C75A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_C75C:;
    /* $C75C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C75E:;
    /* $C75E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FC); FLAG_NZ(g_cpu.A);
label_C761:;
    /* $C761: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_C763:;
    /* $C763: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06F3), -1); return; }
label_C765:;
    /* $C765: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_C767:;
    /* $C767: 8D */ maybe_trigger_vblank(4); nes_write(0x03FC, g_cpu.A);
label_C76A:;
    /* $C76A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0495); FLAG_NZ(g_cpu.A);
label_C76D:;
    /* $C76D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C78B; }
label_C76F:;
    /* $C76F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C771:;
    /* $C771: 8D */ maybe_trigger_vblank(4); nes_write(0x0495, g_cpu.A);
label_C774:;
    /* $C774: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_C776:;
    /* $C776: 8D */ maybe_trigger_vblank(4); nes_write(0x05F0, g_cpu.A);
label_C779:;
    /* $C779: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_C77B:;
    /* $C77B: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_C77E:;
    /* $C77E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0409); FLAG_NZ(g_cpu.A);
label_C781:;
    /* $C781: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_C783:;
    /* $C783: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E64C(); g_code_window_base = _swb; }
label_C786:;
    /* $C786: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_C788:;
    /* $C788: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC854, -1); return;
label_C78B:;
    /* $C78B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D9); FLAG_NZ(g_cpu.A);
label_C78E:;
    /* $C78E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x22; g_cpu.C=(g_cpu.A>=0x22)?1:0; FLAG_NZ(r&0xFF); }
label_C790:;
    /* $C790: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C79D; }
label_C792:;
    /* $C792: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x052E); FLAG_NZ(g_cpu.A);
label_C795:;
    /* $C795: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_C797:;
    /* $C797: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C7CE; }
label_C799:;
    /* $C799: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_C79B:;
    /* $C79B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C7CE; }
label_C79D:;
    /* $C79D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F0); FLAG_NZ(g_cpu.A);
label_C7A0:;
    /* $C7A0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C7CE; }
label_C7A2:;
    /* $C7A2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D9); FLAG_NZ(g_cpu.A);
label_C7A5:;
    /* $C7A5: 8D */ maybe_trigger_vblank(4); nes_write(0x048E, g_cpu.A);
label_C7A8:;
    /* $C7A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x15; FLAG_NZ(g_cpu.A);
label_C7AA:;
    /* $C7AA: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_C7AD:;
    /* $C7AD: 8D */ maybe_trigger_vblank(4); nes_write(0x0495, g_cpu.A);
label_C7B0:;
    /* $C7B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C7B2:;
    /* $C7B2: 8D */ maybe_trigger_vblank(4); nes_write(0x05E2, g_cpu.A);
label_C7B5:;
    /* $C7B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_C7B7:;
    /* $C7B7: 8D */ maybe_trigger_vblank(4); nes_write(0x05E3, g_cpu.A);
label_C7BA:;
    /* $C7BA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_C7BC:;
    /* $C7BC: 8D */ maybe_trigger_vblank(4); nes_write(0x05F0, g_cpu.A);
label_C7BF:;
    /* $C7BF: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C7C5:;
    /* $C7C5: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81AE */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81AE_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C7CB:;
    /* $C7CB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC854, -1); return;
label_C7CE:;
    /* $C7CE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D9); FLAG_NZ(g_cpu.A);
label_C7D1:;
    /* $C7D1: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $F573: 65 entries (bank=-1) */
switch(g_cpu.A) {
  case 0: nes_write(0x0000, 0x54); nes_write(0x0001, 0xC8); g_cpu.A = 0x54; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C854(); return;
  case 1: nes_write(0x0000, 0x55); nes_write(0x0001, 0xC8); g_cpu.A = 0x55; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C855(); return;
  case 2: nes_write(0x0000, 0x76); nes_write(0x0001, 0xC8); g_cpu.A = 0x76; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C876(); return;
  case 3: nes_write(0x0000, 0x7A); nes_write(0x0001, 0xC8); g_cpu.A = 0x7A; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C87A(); return;
  case 4: nes_write(0x0000, 0x7E); nes_write(0x0001, 0xC8); g_cpu.A = 0x7E; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C87E(); return;
  case 5: nes_write(0x0000, 0x7F); nes_write(0x0001, 0xC8); g_cpu.A = 0x7F; g_cpu.Y = 0x0C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C87F(); return;
  case 6: nes_write(0x0000, 0x80); nes_write(0x0001, 0xC8); g_cpu.A = 0x80; g_cpu.Y = 0x0E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C880(); return;
  case 7: nes_write(0x0000, 0x81); nes_write(0x0001, 0xC8); g_cpu.A = 0x81; g_cpu.Y = 0x10; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C881(); return;
  case 8: nes_write(0x0000, 0x88); nes_write(0x0001, 0xC8); g_cpu.A = 0x88; g_cpu.Y = 0x12; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C888(); return;
  case 9: nes_write(0x0000, 0xAE); nes_write(0x0001, 0xC8); g_cpu.A = 0xAE; g_cpu.Y = 0x14; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8AE(); return;
  case 10: nes_write(0x0000, 0xB5); nes_write(0x0001, 0xC8); g_cpu.A = 0xB5; g_cpu.Y = 0x16; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8B5(); return;
  case 11: nes_write(0x0000, 0xDF); nes_write(0x0001, 0xC8); g_cpu.A = 0xDF; g_cpu.Y = 0x18; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8DF(); return;
  case 12: nes_write(0x0000, 0xE5); nes_write(0x0001, 0xC8); g_cpu.A = 0xE5; g_cpu.Y = 0x1A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8E5(); return;
  case 13: nes_write(0x0000, 0xEC); nes_write(0x0001, 0xC8); g_cpu.A = 0xEC; g_cpu.Y = 0x1C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8EC(); return;
  case 14: nes_write(0x0000, 0xF3); nes_write(0x0001, 0xC8); g_cpu.A = 0xF3; g_cpu.Y = 0x1E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8F3(); return;
  case 15: nes_write(0x0000, 0xF4); nes_write(0x0001, 0xC8); g_cpu.A = 0xF4; g_cpu.Y = 0x20; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8F4(); return;
  case 16: nes_write(0x0000, 0xF5); nes_write(0x0001, 0xC8); g_cpu.A = 0xF5; g_cpu.Y = 0x22; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8F5(); return;
  case 17: nes_write(0x0000, 0xFC); nes_write(0x0001, 0xC8); g_cpu.A = 0xFC; g_cpu.Y = 0x24; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8FC(); return;
  case 18: nes_write(0x0000, 0x23); nes_write(0x0001, 0xC9); g_cpu.A = 0x23; g_cpu.Y = 0x26; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C923(); return;
  case 19: nes_write(0x0000, 0x39); nes_write(0x0001, 0xC9); g_cpu.A = 0x39; g_cpu.Y = 0x28; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C939(); return;
  case 20: nes_write(0x0000, 0x3A); nes_write(0x0001, 0xC9); g_cpu.A = 0x3A; g_cpu.Y = 0x2A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C93A(); return;
  case 21: nes_write(0x0000, 0x3B); nes_write(0x0001, 0xC9); g_cpu.A = 0x3B; g_cpu.Y = 0x2C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C93B(); return;
  case 22: nes_write(0x0000, 0x3C); nes_write(0x0001, 0xC9); g_cpu.A = 0x3C; g_cpu.Y = 0x2E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C93C(); return;
  case 23: nes_write(0x0000, 0x3D); nes_write(0x0001, 0xC9); g_cpu.A = 0x3D; g_cpu.Y = 0x30; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C93D(); return;
  case 24: nes_write(0x0000, 0x3E); nes_write(0x0001, 0xC9); g_cpu.A = 0x3E; g_cpu.Y = 0x32; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C93E(); return;
  case 25: nes_write(0x0000, 0x3F); nes_write(0x0001, 0xC9); g_cpu.A = 0x3F; g_cpu.Y = 0x34; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C93F(); return;
  case 26: nes_write(0x0000, 0x40); nes_write(0x0001, 0xC9); g_cpu.A = 0x40; g_cpu.Y = 0x36; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C940(); return;
  case 27: nes_write(0x0000, 0x47); nes_write(0x0001, 0xC9); g_cpu.A = 0x47; g_cpu.Y = 0x38; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C947(); return;
  case 28: nes_write(0x0000, 0xB0); nes_write(0x0001, 0xC9); g_cpu.A = 0xB0; g_cpu.Y = 0x3A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B0(); return;
  case 29: nes_write(0x0000, 0xB1); nes_write(0x0001, 0xC9); g_cpu.A = 0xB1; g_cpu.Y = 0x3C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B1(); return;
  case 30: nes_write(0x0000, 0xB2); nes_write(0x0001, 0xC9); g_cpu.A = 0xB2; g_cpu.Y = 0x3E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B2(); return;
  case 31: nes_write(0x0000, 0xB3); nes_write(0x0001, 0xC9); g_cpu.A = 0xB3; g_cpu.Y = 0x40; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B3(); return;
  case 32: nes_write(0x0000, 0xB4); nes_write(0x0001, 0xC9); g_cpu.A = 0xB4; g_cpu.Y = 0x42; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B4(); return;
  case 33: nes_write(0x0000, 0xB5); nes_write(0x0001, 0xC9); g_cpu.A = 0xB5; g_cpu.Y = 0x44; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B5(); return;
  case 34: nes_write(0x0000, 0xB6); nes_write(0x0001, 0xC9); g_cpu.A = 0xB6; g_cpu.Y = 0x46; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B6(); return;
  case 35: nes_write(0x0000, 0xFB); nes_write(0x0001, 0xC9); g_cpu.A = 0xFB; g_cpu.Y = 0x48; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9FB(); return;
  case 36: nes_write(0x0000, 0xFC); nes_write(0x0001, 0xC9); g_cpu.A = 0xFC; g_cpu.Y = 0x4A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9FC(); return;
  case 37: nes_write(0x0000, 0xFD); nes_write(0x0001, 0xC9); g_cpu.A = 0xFD; g_cpu.Y = 0x4C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9FD(); return;
  case 38: nes_write(0x0000, 0xFE); nes_write(0x0001, 0xC9); g_cpu.A = 0xFE; g_cpu.Y = 0x4E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9FE(); return;
  case 39: nes_write(0x0000, 0xFF); nes_write(0x0001, 0xC9); g_cpu.A = 0xFF; g_cpu.Y = 0x50; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9FF(); return;
  case 40: nes_write(0x0000, 0x00); nes_write(0x0001, 0xCA); g_cpu.A = 0x00; g_cpu.Y = 0x52; g_cpu.C = 0; g_cpu.Z = 1; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA00(); return;
  case 41: nes_write(0x0000, 0x01); nes_write(0x0001, 0xCA); g_cpu.A = 0x01; g_cpu.Y = 0x54; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA01(); return;
  case 42: nes_write(0x0000, 0x02); nes_write(0x0001, 0xCA); g_cpu.A = 0x02; g_cpu.Y = 0x56; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA02(); return;
  case 43: nes_write(0x0000, 0x03); nes_write(0x0001, 0xCA); g_cpu.A = 0x03; g_cpu.Y = 0x58; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA03(); return;
  case 44: nes_write(0x0000, 0x04); nes_write(0x0001, 0xCA); g_cpu.A = 0x04; g_cpu.Y = 0x5A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA04(); return;
  case 45: nes_write(0x0000, 0x05); nes_write(0x0001, 0xCA); g_cpu.A = 0x05; g_cpu.Y = 0x5C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA05(); return;
  case 46: nes_write(0x0000, 0x06); nes_write(0x0001, 0xCA); g_cpu.A = 0x06; g_cpu.Y = 0x5E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA06(); return;
  case 47: nes_write(0x0000, 0x07); nes_write(0x0001, 0xCA); g_cpu.A = 0x07; g_cpu.Y = 0x60; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA07(); return;
  case 48: nes_write(0x0000, 0x08); nes_write(0x0001, 0xCA); g_cpu.A = 0x08; g_cpu.Y = 0x62; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA08(); return;
  case 49: nes_write(0x0000, 0x09); nes_write(0x0001, 0xCA); g_cpu.A = 0x09; g_cpu.Y = 0x64; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA09(); return;
  case 50: nes_write(0x0000, 0x0A); nes_write(0x0001, 0xCA); g_cpu.A = 0x0A; g_cpu.Y = 0x66; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA0A(); return;
  case 51: nes_write(0x0000, 0x20); nes_write(0x0001, 0xCA); g_cpu.A = 0x20; g_cpu.Y = 0x68; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA20(); return;
  case 52: nes_write(0x0000, 0x21); nes_write(0x0001, 0xCA); g_cpu.A = 0x21; g_cpu.Y = 0x6A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA21(); return;
  case 53: nes_write(0x0000, 0x22); nes_write(0x0001, 0xCA); g_cpu.A = 0x22; g_cpu.Y = 0x6C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA22(); return;
  case 54: nes_write(0x0000, 0x23); nes_write(0x0001, 0xCA); g_cpu.A = 0x23; g_cpu.Y = 0x6E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA23(); return;
  case 55: nes_write(0x0000, 0x2A); nes_write(0x0001, 0xCA); g_cpu.A = 0x2A; g_cpu.Y = 0x70; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA2A(); return;
  case 56: nes_write(0x0000, 0x2A); nes_write(0x0001, 0xCA); g_cpu.A = 0x2A; g_cpu.Y = 0x72; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA2A(); return;
  case 57: nes_write(0x0000, 0x31); nes_write(0x0001, 0xCA); g_cpu.A = 0x31; g_cpu.Y = 0x74; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA31(); return;
  case 58: nes_write(0x0000, 0x32); nes_write(0x0001, 0xCA); g_cpu.A = 0x32; g_cpu.Y = 0x76; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA32(); return;
  case 59: nes_write(0x0000, 0x33); nes_write(0x0001, 0xCA); g_cpu.A = 0x33; g_cpu.Y = 0x78; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA33(); return;
  case 60: nes_write(0x0000, 0x34); nes_write(0x0001, 0xCA); g_cpu.A = 0x34; g_cpu.Y = 0x7A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA34(); return;
  case 61: nes_write(0x0000, 0x35); nes_write(0x0001, 0xCA); g_cpu.A = 0x35; g_cpu.Y = 0x7C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA35(); return;
  case 62: nes_write(0x0000, 0x36); nes_write(0x0001, 0xCA); g_cpu.A = 0x36; g_cpu.Y = 0x7E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA36(); return;
  case 63: nes_write(0x0000, 0x37); nes_write(0x0001, 0xCA); g_cpu.A = 0x37; g_cpu.Y = 0x80; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA37(); return;
  case 64: nes_write(0x0000, 0x60); nes_write(0x0001, 0xAD); g_cpu.A = 0x60; g_cpu.Y = 0x82; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); call_by_address_tail(0xAD60, -1); return;
  default: nes_log_inline_miss(0xC7D1, g_cpu.A); return;
}
label_C856:;
    /* $C856: 8F */ maybe_trigger_vblank(4); nes_write(0xF004, g_cpu.A & g_cpu.X); /* SAX */
label_C859:;
    /* $C859: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x20; FLAG_NZ(g_cpu.A);
label_C85B:;
    /* $C85B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF4); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_C85D:;
    /* $C85D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x57 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_C85F:;
    /* $C85F: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x4C + g_cpu.X) & 0xFF), g_cpu.A);
label_C861:;
    /* $C861: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC8 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC8); g_cpu.A=r&0xFF; }
label_C863:;
    /* $C863: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=3 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x03; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b3();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C869:;
    /* $C869: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=3 addr=$8148 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x03; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8148_b3();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C86F:;
    /* $C86F: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=6 addr=$8103 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x06; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8103_b6();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C875:;
    /* $C875: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DF01(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DF01");
#endif
label_DF01:;
    /* $DF01: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x1E90), -1); return; }
label_DF03:;
    /* $DF03: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_DF09; }
label_DF05:;
    /* $DF05: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xDF0E, -1); return;
label_DF09:;
    /* $DF09: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xD0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xD0); g_cpu.A=r&0xFF; }
label_DF0B:;
    /* $DF0B: 8D */ maybe_trigger_vblank(4); nes_write(0x0430, g_cpu.A);
label_DF0E:;
    /* $DF0E: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_DF11:;
    /* $DF11: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_DF13:;
    /* $DF13: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DF16:;
    /* $DF16: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DF17:;
    /* $DF17: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC4; FLAG_NZ(g_cpu.A);
label_DF19:;
    /* $DF19: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DF1C:;
    /* $DF1C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DF1D:;
    /* $DF1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_DF1F:;
    /* $DF1F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DF22:;
    /* $DF22: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DF23:;
    /* $DF23: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_DF26:;
    /* $DF26: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DF29:;
    /* $DF29: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DF2A:;
    /* $DF2A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0430); FLAG_NZ(g_cpu.A);
label_DF2D:;
    /* $DF2D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DF30:;
    /* $DF30: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DF31:;
    /* $DF31: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DF33:;
    /* $DF33: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DF36:;
    /* $DF36: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_DF39:;
    /* $DF39: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C6BC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C6BC");
#endif
label_C6BC:;
    /* $C6BC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6BE:;
    /* $C6BE: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_C6BF:;
    /* $C6BF: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C6C0:;
    /* $C6C0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_C6C2:;
    /* $C6C2: 8D */ maybe_trigger_vblank(4); nes_write(0x0409, g_cpu.A);
label_C6C5:;
    /* $C6C5: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F599(); g_code_window_base = _swb; }
label_C6C8:;
    /* $C6C8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048F); FLAG_NZ(g_cpu.A);
label_C6CB:;
    /* $C6CB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6CD:;
    /* $C6CD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_C6D0:;
    /* $C6D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_C6D2:;
    /* $C6D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6D4:;
    /* $C6D4: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E36F(); g_code_window_base = _swb; }
label_C6D7:;
    /* $C6D7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C6DD:;
    /* $C6DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C6DF:;
    /* $C6DF: 85 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.A);
label_C6E1:;
    /* $C6E1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E2:;
    /* $C6E2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C6E3:;
    /* $C6E3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E4:;
    /* $C6E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C6E5:;
    /* $C6E5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E6:;
    /* $C6E6: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC6E6; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EEA9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EEA9");
#endif
label_EEA9:;
    /* $EEA9: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xEE + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_EEAB:;
    /* $EEAB: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_EEAC:;
    /* $EEAC: EE */ maybe_trigger_vblank(6); { uint16_t a=0x2060; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EEAF:;
    /* $EEAF: 96 */ maybe_trigger_vblank(4); nes_write((0xEF + g_cpu.Y) & 0xFF, g_cpu.X);
label_EEB1:;
    /* $EEB1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E6F0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E6F0");
#endif
label_E6F0:;
    /* $E6F0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA085 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E6F3:;
    /* $E6F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E6F5:;
    /* $E6F5: 85 */ maybe_trigger_vblank(3); nes_write(0x61, g_cpu.A);
label_E6F7:;
    /* $E6F7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E6F9:;
    /* $E6F9: 85 */ maybe_trigger_vblank(3); nes_write(0x62, g_cpu.A);
label_E6FB:;
    /* $E6FB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C041(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C041");
#endif
label_C041:;
    /* $C041: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x8D4C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C044:;
    /* $C044: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x454C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C047:;
    /* $C047: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x4C; g_cpu.C=(g_cpu.Y>=0x4C)?1:0; FLAG_NZ(r&0xFF); }
label_C049:;
    /* $C049: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF0); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C04B:;
    /* $C04B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F171(); g_code_window_base = _swb; } return;
}

void func_C3B7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3B7");
#endif
label_C3B7:;
    /* $C3B7: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xE1; g_cpu.C=(g_cpu.Y>=0xE1)?1:0; FLAG_NZ(r&0xFF); }
label_C3B9:;
    /* $C3B9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC53, -1);
label_C3BC:;
    /* $C3BC: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C3BF:;
    /* $C3BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C3C1:;
    /* $C3C1: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C3C4:;
    /* $C3C4: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C3C7:;
    /* $C3C7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDDFE, -1);
label_C3CA:;
    /* $C3CA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDF3A, -1);
label_C3CD:;
    /* $C3CD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDEDC, -1);
label_C3D0:;
    /* $C3D0: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDE8D, -1);
label_C3D3:;
    /* $C3D3: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDE38, -1);
label_C3D6:;
    /* $C3D6: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C3D9:;
    /* $C3D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C3DB:;
    /* $C3DB: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C3DE:;
    /* $C3DE: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C3E1:;
    /* $C3E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_C3E3:;
    /* $C3E3: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_C3E5:;
    /* $C3E5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D3C5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D3C5");
#endif
label_D3C5:;
    /* $D3C5: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D3C7:;
    /* $D3C7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xD3C7); return;
}

void func_CD0E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CD0E");
#endif
label_CD0E:;
    /* $CD0E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x04A9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CD11:;
    /* $CD11: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_CD14:;
    /* $CD14: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_CD17:;
    /* $CD17: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C7EE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C7EE");
#endif
label_C7EE:;
    /* $C7EE: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF3C8); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C7F1:;
    /* $C7F1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C7F2:;
    /* $C7F2: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xC8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C7F4:;
    /* $C7F4: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xC8 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C7F6:;
    /* $C7F6: FC */ maybe_trigger_vblank(4); (void)nes_read((0x23C8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C7F9:;
    /* $C7F9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x39; g_cpu.C=(g_cpu.A>=0x39)?1:0; FLAG_NZ(r&0xFF); }
label_C7FB:;
    /* $C7FB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3A; g_cpu.C=(g_cpu.A>=0x3A)?1:0; FLAG_NZ(r&0xFF); }
label_C7FD:;
    /* $C7FD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3B; g_cpu.C=(g_cpu.A>=0x3B)?1:0; FLAG_NZ(r&0xFF); }
label_C7FF:;
    /* $C7FF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3C; g_cpu.C=(g_cpu.A>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_C801:;
    /* $C801: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3D; g_cpu.C=(g_cpu.A>=0x3D)?1:0; FLAG_NZ(r&0xFF); }
label_C803:;
    /* $C803: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3E; g_cpu.C=(g_cpu.A>=0x3E)?1:0; FLAG_NZ(r&0xFF); }
label_C805:;
    /* $C805: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3F; g_cpu.C=(g_cpu.A>=0x3F)?1:0; FLAG_NZ(r&0xFF); }
label_C807:;
    /* $C807: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x40; g_cpu.C=(g_cpu.A>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_C809:;
    /* $C809: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x47; g_cpu.C=(g_cpu.A>=0x47)?1:0; FLAG_NZ(r&0xFF); }
label_C80B:;
    /* $C80B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB0; g_cpu.C=(g_cpu.A>=0xB0)?1:0; FLAG_NZ(r&0xFF); }
label_C80D:;
    /* $C80D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB1; g_cpu.C=(g_cpu.A>=0xB1)?1:0; FLAG_NZ(r&0xFF); }
label_C80F:;
    /* $C80F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB2; g_cpu.C=(g_cpu.A>=0xB2)?1:0; FLAG_NZ(r&0xFF); }
label_C811:;
    /* $C811: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB3; g_cpu.C=(g_cpu.A>=0xB3)?1:0; FLAG_NZ(r&0xFF); }
label_C813:;
    /* $C813: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB4; g_cpu.C=(g_cpu.A>=0xB4)?1:0; FLAG_NZ(r&0xFF); }
label_C815:;
    /* $C815: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB5; g_cpu.C=(g_cpu.A>=0xB5)?1:0; FLAG_NZ(r&0xFF); }
label_C817:;
    /* $C817: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB6; g_cpu.C=(g_cpu.A>=0xB6)?1:0; FLAG_NZ(r&0xFF); }
label_C819:;
    /* $C819: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFB; g_cpu.C=(g_cpu.A>=0xFB)?1:0; FLAG_NZ(r&0xFF); }
label_C81B:;
    /* $C81B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFC; g_cpu.C=(g_cpu.A>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_C81D:;
    /* $C81D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFD; g_cpu.C=(g_cpu.A>=0xFD)?1:0; FLAG_NZ(r&0xFF); }
label_C81F:;
    /* $C81F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFE; g_cpu.C=(g_cpu.A>=0xFE)?1:0; FLAG_NZ(r&0xFF); }
label_C821:;
    /* $C821: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_C823:;
    /* $C823: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x00; g_cpu.C=(g_cpu.A>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_C825:;
    /* $C825: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C826:;
    /* $C826: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_C828:;
    /* $C828: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_C829:;
    /* $C829: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C82A:;
    /* $C82A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_C82C:;
    /* $C82C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xCA); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C82E:;
    /* $C82E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xCA); FLAG_NZ(g_cpu.A);
label_C830:;
    /* $C830: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xCA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C832:;
    /* $C832: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xCA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_C834:;
    /* $C834: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_C835:;
    /* $C835: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C836:;
    /* $C836: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xCA; FLAG_NZ(g_cpu.A);
label_C838:;
    /* $C838: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C839:;
    /* $C839: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C83A:;
    /* $C83A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x21CA, -1);
label_C83D:;
    /* $C83D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C83E:;
    /* $C83E: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_C83F:;
    /* $C83F: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C840:;
    /* $C840: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C842:;
    /* $C842: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_C843:;
    /* $C843: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C844:;
    /* $C844: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_C845:;
    /* $C845: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C846:;
    /* $C846: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xCA) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C848:;
    /* $C848: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_C849:;
    /* $C849: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C84A:;
    /* $C84A: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCA) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C84C:;
    /* $C84C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xCA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C84E:;
    /* $C84E: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xCA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_C850:;
    /* $C850: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xCA + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C852:;
    /* $C852: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0xCA + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C854:;
    /* $C854: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EF90(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EF90");
#endif
label_EF90:;
    /* $EF90: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_EF92:;
    /* $EF92: 8D */ maybe_trigger_vblank(4); nes_write(0x03A0, g_cpu.A);
label_EF95:;
    /* $EF95: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C34C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C34C");
#endif
label_C34C:;
    /* $C34C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x20 + g_cpu.X) & 0xFF), g_cpu.A);
label_C34E:;
    /* $C34E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xF4; g_cpu.C=(g_cpu.Y>=0xF4)?1:0; FLAG_NZ(r&0xFF); }
label_C350:;
    /* $C350: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C352:;
    /* $C352: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C355:;
    /* $C355: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C358:;
    /* $C358: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_C35A:;
    /* $C35A: 8D */ maybe_trigger_vblank(4); nes_write(0x05B8, g_cpu.A);
label_C35D:;
    /* $C35D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_C35F:;
    /* $C35F: 8D */ maybe_trigger_vblank(4); nes_write(0x05B9, g_cpu.A);
label_C362:;
    /* $C362: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C364:;
    /* $C364: 8D */ maybe_trigger_vblank(4); nes_write(0x05B7, g_cpu.A);
label_C367:;
    /* $C367: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_C369:;
    /* $C369: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_C36B:;
    /* $C36B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F329(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F329");
#endif
label_F329:;
    /* $F329: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E3); FLAG_NZ(g_cpu.A);
label_F32C:;
    /* $F32C: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_F32E:;
    /* $F32E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFDE, -1);
label_F331:;
    /* $F331: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_F333:;
    /* $F333: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F336:;
    /* $F336: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_F338:;
    /* $F338: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F33B:;
    /* $F33B: 85 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.A);
label_F33D:;
    /* $F33D: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F340:;
    /* $F340: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E8); FLAG_NZ(g_cpu.A);
label_F343:;
    /* $F343: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F346:;
    /* $F346: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F360; }
label_F348:;
    /* $F348: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_F34A:;
    /* $F34A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F360; }
label_F34C:;
    /* $F34C: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_F34D:;
    /* $F34D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_F34E:;
    /* $F34E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F350:;
    /* $F350: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F351:;
    /* $F351: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F354:;
    /* $F354: 99 */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F357:;
    /* $F357: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F35A:;
    /* $F35A: 99 */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F35D:;
    /* $F35D: 4C */ maybe_trigger_vblank(3); goto label_F33D;
label_F360:;
    /* $F360: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x19); FLAG_NZ(g_cpu.A);
label_F362:;
    /* $F362: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F365:;
    /* $F365: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_F367:;
    /* $F367: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F36A:;
    /* $F36A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CDB1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CDB1");
#endif
label_CDB1:;
    /* $CDB1: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x60 + g_cpu.X) & 0xFF), g_cpu.A);
label_CDB3:;
    /* $CDB3: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$810F */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810F_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_CDB9:;
    /* $CDB9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CEA0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CEA0");
#endif
label_CEA0:;
    /* $CEA0: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CEA2:;
    /* $CEA2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xCEA2); return;
}

void func_D0BF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D0BF");
#endif
label_D0BF:;
    /* $D0BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E1AD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E1AD");
#endif
label_E1AD:;
    /* $E1AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_E1AF:;
    /* $E1AF: 8D */ maybe_trigger_vblank(4); nes_write(0x03ED, g_cpu.A);
label_E1B2:;
    /* $E1B2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041C); FLAG_NZ(g_cpu.A);
label_E1B5:;
    /* $E1B5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E1B6:;
    /* $E1B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_E1B8:;
    /* $E1B8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E1B9:;
    /* $E1B9: 8D */ maybe_trigger_vblank(4); nes_write(0x041C, g_cpu.A);
label_E1BC:;
    /* $E1BC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E15B(); g_code_window_base = _swb; } return;
}

void func_C49D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C49D");
#endif
label_C49D:;
    /* $C49D: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_C49F:;
    /* $C49F: 8D */ maybe_trigger_vblank(4); nes_write(0x04A4, g_cpu.A);
label_C4A2:;
    /* $C4A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C4A4:;
    /* $C4A4: 8D */ maybe_trigger_vblank(4); nes_write(0x04A5, g_cpu.A);
label_C4A7:;
    /* $C4A7: 8D */ maybe_trigger_vblank(4); nes_write(0x04A6, g_cpu.A);
label_C4AA:;
    /* $C4AA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_C4AD:;
    /* $C4AD: 8D */ maybe_trigger_vblank(4); nes_write(0x0425, g_cpu.A);
label_C4B0:;
    /* $C4B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFB; FLAG_NZ(g_cpu.A);
label_C4B2:;
    /* $C4B2: 8D */ maybe_trigger_vblank(4); nes_write(0x0424, g_cpu.A);
label_C4B5:;
    /* $C4B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C4B7:;
    /* $C4B7: 85 */ maybe_trigger_vblank(3); nes_write(0xAC, g_cpu.A);
label_C4B9:;
    /* $C4B9: 85 */ maybe_trigger_vblank(3); nes_write(0xAD, g_cpu.A);
label_C4BB:;
    /* $C4BB: 85 */ maybe_trigger_vblank(3); nes_write(0xAA, g_cpu.A);
label_C4BD:;
    /* $C4BD: 85 */ maybe_trigger_vblank(3); nes_write(0xAB, g_cpu.A);
label_C4BF:;
    /* $C4BF: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_C4C1:;
    /* $C4C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C4C3:;
    /* $C4C3: 85 */ maybe_trigger_vblank(3); nes_write(0x9B, g_cpu.A);
label_C4C5:;
    /* $C4C5: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C4C7:;
    /* $C4C7: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C4C9:;
    /* $C4C9: 85 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.A);
label_C4CB:;
    /* $C4CB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C99F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C99F");
#endif
label_C99F:;
    /* $C99F: 8E */ maybe_trigger_vblank(4); nes_write(0x8D04, g_cpu.X);
label_C9A2:;
    /* $C9A2: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA903 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C9A5:;
    /* $C9A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC9A5); return;
}

void func_C9A0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C9A0");
#endif
label_C9A0:;
    /* $C9A0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C9A2:;
    /* $C9A2: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA903 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C9A5:;
    /* $C9A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC9A5); return;
}

void func_EDB9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EDB9");
#endif
label_EDB9:;
    /* $EDB9: 8D */ maybe_trigger_vblank(4); nes_write(0x03CB, g_cpu.A);
label_EDBC:;
    /* $EDBC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EDE7(); g_code_window_base = _swb; } return;
}

void func_CEA3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CEA3");
#endif
label_CEA3:;
    /* $CEA3: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x60 + g_cpu.X) & 0xFF), g_cpu.A);
label_CEA5:;
    /* $CEA5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E3); FLAG_NZ(g_cpu.A);
label_CEA8:;
    /* $CEA8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CEB0; }
label_CEAA:;
    /* $CEAA: CE */ maybe_trigger_vblank(6); { uint16_t a=0x05E3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CEAD:;
    /* $CEAD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCEBC, -1); return;
label_CEB0:;
    /* $CEB0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CEB2:;
    /* $CEB2: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_CEB5:;
    /* $CEB5: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_CEB8:;
    /* $CEB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CEBA:;
    /* $CEBA: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_CEBC:;
    /* $CEBC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F5BD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F5BD");
#endif
label_F5BD:;
    /* $F5BD: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCE94); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F5C0:;
    /* $F5C0: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_F5C1:;
    /* $F5C1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x15B5), -1); return; }
label_F5C3:;
    /* $F5C3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C005(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C005");
#endif
label_C005:;
    /* $C005: EB */ maybe_trigger_vblank(2); { uint8_t m=0x4C; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C007:;
    /* $C007: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC007); return;
}

void func_F290(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F290");
#endif
label_F290:;
    /* $F290: 85 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.A);
label_F292:;
    /* $F292: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F295:;
    /* $F295: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E9); FLAG_NZ(g_cpu.A);
label_F298:;
    /* $F298: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E6); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F29B:;
    /* $F29B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F2A0; }
label_F29D:;
    /* $F29D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F2B4(); g_code_window_base = _swb; } return;
label_F2A0:;
    /* $F2A0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_F2A2:;
    /* $F2A2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F2B4; }
label_F2A4:;
    /* $F2A4: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F2A5:;
    /* $F2A5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F2A8:;
    /* $F2A8: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F2AB:;
    /* $F2AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F2AE:;
    /* $F2AE: 99 */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F2B1:;
    /* $F2B1: 4C */ maybe_trigger_vblank(3); goto label_F292;
label_F2B4:;
    /* $F2B4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x19); FLAG_NZ(g_cpu.A);
label_F2B6:;
    /* $F2B6: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F2B9:;
    /* $F2B9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_F2BB:;
    /* $F2BB: 99 */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F2BE:;
    /* $F2BE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DD60(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DD60");
#endif
label_DD60:;
    /* $DD60: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xA9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DD62:;
    /* $DD62: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xDD62); return;
}

void func_E1B0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E1B0");
#endif
label_E1B0:;
    /* $E1B0: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xAD03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E1B3:;
    /* $E1B3: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1804 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E1B6:;
    /* $E1B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_E1B8:;
    /* $E1B8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E1B9:;
    /* $E1B9: 8D */ maybe_trigger_vblank(4); nes_write(0x041C, g_cpu.A);
label_E1BC:;
    /* $E1BC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E15B(); g_code_window_base = _swb; } return;
}

void func_C68F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C68F");
#endif
label_C68F:;
    /* $C68F: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_C690:;
    /* $C690: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x37; g_cpu.C=(g_cpu.A>=0x37)?1:0; FLAG_NZ(r&0xFF); }
label_C692:;
    /* $C692: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C694:;
    /* $C694: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_C696:;
    /* $C696: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C698:;
    /* $C698: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_C69A:;
    /* $C69A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C69C:;
    /* $C69C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1C; g_cpu.C=(g_cpu.A>=0x1C)?1:0; FLAG_NZ(r&0xFF); }
label_C69E:;
    /* $C69E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6A0:;
    /* $C6A0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB4); FLAG_NZ(g_cpu.A);
label_C6A2:;
    /* $C6A2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6A6; }
label_C6A4:;
    /* $C6A4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6A6:;
    /* $C6A6: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xAE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6A8:;
    /* $C6A8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6AA:;
    /* $C6AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_C6AC:;
    /* $C6AC: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_C6AE:;
    /* $C6AE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B0:;
    /* $C6B0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6B4; }
label_C6B2:;
    /* $C6B2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B4:;
    /* $C6B4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B6:;
    /* $C6B6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6B8:;
    /* $C6B8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6BA:;
    /* $C6BA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC6E7, -1);
label_C6BD:;
    /* $C6BD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xCA38, -1);
label_C6C0:;
    /* $C6C0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_C6C2:;
    /* $C6C2: 8D */ maybe_trigger_vblank(4); nes_write(0x0409, g_cpu.A);
label_C6C5:;
    /* $C6C5: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F599(); g_code_window_base = _swb; }
label_C6C8:;
    /* $C6C8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048F); FLAG_NZ(g_cpu.A);
label_C6CB:;
    /* $C6CB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6CD:;
    /* $C6CD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_C6D0:;
    /* $C6D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_C6D2:;
    /* $C6D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6D4:;
    /* $C6D4: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E36F(); g_code_window_base = _swb; }
label_C6D7:;
    /* $C6D7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C6DD:;
    /* $C6DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C6DF:;
    /* $C6DF: 85 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.A);
label_C6E1:;
    /* $C6E1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E2:;
    /* $C6E2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C6E3:;
    /* $C6E3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E4:;
    /* $C6E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C6E5:;
    /* $C6E5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E6:;
    /* $C6E6: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC6E6; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C68B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C68B");
#endif
label_C68B:;
    /* $C68B: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x36C9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C68E:;
    /* $C68E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C690:;
    /* $C690: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x37; g_cpu.C=(g_cpu.A>=0x37)?1:0; FLAG_NZ(r&0xFF); }
label_C692:;
    /* $C692: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C694:;
    /* $C694: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_C696:;
    /* $C696: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C698:;
    /* $C698: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_C69A:;
    /* $C69A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C69C:;
    /* $C69C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1C; g_cpu.C=(g_cpu.A>=0x1C)?1:0; FLAG_NZ(r&0xFF); }
label_C69E:;
    /* $C69E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6A0:;
    /* $C6A0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB4); FLAG_NZ(g_cpu.A);
label_C6A2:;
    /* $C6A2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6A6; }
label_C6A4:;
    /* $C6A4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6A6:;
    /* $C6A6: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xAE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6A8:;
    /* $C6A8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6AA:;
    /* $C6AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_C6AC:;
    /* $C6AC: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_C6AE:;
    /* $C6AE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B0:;
    /* $C6B0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6B4; }
label_C6B2:;
    /* $C6B2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B4:;
    /* $C6B4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B6:;
    /* $C6B6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6B8:;
    /* $C6B8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6BA:;
    /* $C6BA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC6E7, -1);
label_C6BD:;
    /* $C6BD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xCA38, -1);
label_C6C0:;
    /* $C6C0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_C6C2:;
    /* $C6C2: 8D */ maybe_trigger_vblank(4); nes_write(0x0409, g_cpu.A);
label_C6C5:;
    /* $C6C5: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F599(); g_code_window_base = _swb; }
label_C6C8:;
    /* $C6C8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048F); FLAG_NZ(g_cpu.A);
label_C6CB:;
    /* $C6CB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6CD:;
    /* $C6CD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_C6D0:;
    /* $C6D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_C6D2:;
    /* $C6D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6D4:;
    /* $C6D4: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E36F(); g_code_window_base = _swb; }
label_C6D7:;
    /* $C6D7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C6DD:;
    /* $C6DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C6DF:;
    /* $C6DF: 85 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.A);
label_C6E1:;
    /* $C6E1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E2:;
    /* $C6E2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C6E3:;
    /* $C6E3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E4:;
    /* $C6E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C6E5:;
    /* $C6E5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E6:;
    /* $C6E6: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC6E6; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E0CE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0CE");
#endif
label_E0CE:;
    /* $E0CE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0055), -1); return; }
label_E0D0:;
    /* $E0D0: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xA9 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_E0D2:;
    /* $E0D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE0D2); return;
}

void func_CCD0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CCD0");
#endif
label_CCD0:;
    /* $CCD0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0C5F), -1); return; }
label_CCD2:;
    /* $CCD2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_CCD3:;
    /* $CCD3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_CCD5:;
    /* $CCD5: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0C64), -1); return; }
label_CCD7:;
    /* $CCD7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA905 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CCDA:;
    /* $CCDA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CCDC:;
    /* $CCDC: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x05 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_CCDE:;
    /* $CCDE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CE20(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CE20");
#endif
label_CE20:;
    /* $CE20: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF4); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_CE22:;
    /* $CE22: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE24:;
    /* $CE24: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x60 + g_cpu.X) & 0xFF), g_cpu.A);
label_CE26:;
    /* $CE26: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E860(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E860");
#endif
label_E860:;
    /* $E860: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E862:;
    /* $E862: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_E864:;
    /* $E864: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E815(); g_code_window_base = _swb; }
label_E867:;
    /* $E867: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E869:;
    /* $E869: 8D */ maybe_trigger_vblank(4); nes_write(0x05E2, g_cpu.A);
label_E86C:;
    /* $E86C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_E86E:;
    /* $E86E: 8D */ maybe_trigger_vblank(4); nes_write(0x05E3, g_cpu.A);
label_E871:;
    /* $E871: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_E873:;
    /* $E873: 8D */ maybe_trigger_vblank(4); nes_write(0x0493, g_cpu.A);
label_E876:;
    /* $E876: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E878:;
    /* $E878: 8D */ maybe_trigger_vblank(4); nes_write(0x049A, g_cpu.A);
label_E87B:;
    /* $E87B: 8D */ maybe_trigger_vblank(4); nes_write(0x049B, g_cpu.A);
label_E87E:;
    /* $E87E: 8D */ maybe_trigger_vblank(4); nes_write(0x048F, g_cpu.A);
label_E881:;
    /* $E881: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_E883:;
    /* $E883: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E885:;
    /* $E885: 85 */ maybe_trigger_vblank(3); nes_write(0xC0, g_cpu.A);
label_E887:;
    /* $E887: 85 */ maybe_trigger_vblank(3); nes_write(0xBD, g_cpu.A);
label_E889:;
    /* $E889: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_E88B:;
    /* $E88B: 85 */ maybe_trigger_vblank(3); nes_write(0xBF, g_cpu.A);
label_E88D:;
    /* $E88D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_E88F:;
    /* $E88F: 85 */ maybe_trigger_vblank(3); nes_write(0xBC, g_cpu.A);
label_E891:;
    /* $E891: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_E893:;
    /* $E893: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E895:;
    /* $E895: 85 */ maybe_trigger_vblank(3); nes_write(0xBA, g_cpu.A);
label_E897:;
    /* $E897: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD8; FLAG_NZ(g_cpu.A);
label_E899:;
    /* $E899: 85 */ maybe_trigger_vblank(3); nes_write(0xBB, g_cpu.A);
label_E89B:;
    /* $E89B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_E89D:;
    /* $E89D: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_E89F:;
    /* $E89F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_E8A1:;
    /* $E8A1: 8D */ maybe_trigger_vblank(4); nes_write(0x0414, g_cpu.A);
label_E8A4:;
    /* $E8A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_E8A6:;
    /* $E8A6: 8D */ maybe_trigger_vblank(4); nes_write(0x0415, g_cpu.A);
label_E8A9:;
    /* $E8A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E8AB:;
    /* $E8AB: 85 */ maybe_trigger_vblank(3); nes_write(0xAA, g_cpu.A);
label_E8AD:;
    /* $E8AD: 85 */ maybe_trigger_vblank(3); nes_write(0xAB, g_cpu.A);
label_E8AF:;
    /* $E8AF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A0); FLAG_NZ(g_cpu.A);
label_E8B2:;
    /* $E8B2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E8BA; }
label_E8B4:;
    /* $E8B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E8B6:;
    /* $E8B6: 85 */ maybe_trigger_vblank(3); nes_write(0xAC, g_cpu.A);
label_E8B8:;
    /* $E8B8: 85 */ maybe_trigger_vblank(3); nes_write(0xAD, g_cpu.A);
label_E8BA:;
    /* $E8BA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_E8BD:;
    /* $E8BD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_E8BF:;
    /* $E8BF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E8C7; }
label_E8C1:;
    /* $E8C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E8C3:;
    /* $E8C3: 85 */ maybe_trigger_vblank(3); nes_write(0xAC, g_cpu.A);
label_E8C5:;
    /* $E8C5: 85 */ maybe_trigger_vblank(3); nes_write(0xAD, g_cpu.A);
label_E8C7:;
    /* $E8C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_E8C9:;
    /* $E8C9: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_E8CB:;
    /* $E8CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_E8CD:;
    /* $E8CD: 8D */ maybe_trigger_vblank(4); nes_write(0x040A, g_cpu.A);
label_E8D0:;
    /* $E8D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E8D2:;
    /* $E8D2: 8D */ maybe_trigger_vblank(4); nes_write(0x047F, g_cpu.A);
label_E8D5:;
    /* $E8D5: 8D */ maybe_trigger_vblank(4); nes_write(0x042D, g_cpu.A);
label_E8D8:;
    /* $E8D8: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_E8DB:;
    /* $E8DB: 8D */ maybe_trigger_vblank(4); nes_write(0x0427, g_cpu.A);
label_E8DE:;
    /* $E8DE: 8D */ maybe_trigger_vblank(4); nes_write(0x03FD, g_cpu.A);
label_E8E1:;
    /* $E8E1: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_E8E4:;
    /* $E8E4: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_E8E7:;
    /* $E8E7: 85 */ maybe_trigger_vblank(3); nes_write(0x63, g_cpu.A);
label_E8E9:;
    /* $E8E9: 85 */ maybe_trigger_vblank(3); nes_write(0x6C, g_cpu.A);
label_E8EB:;
    /* $E8EB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_E8ED:;
    /* $E8ED: 8D */ maybe_trigger_vblank(4); nes_write(0x03DB, g_cpu.A);
label_E8F0:;
    /* $E8F0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C991(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C991");
#endif
label_C991:;
    /* $C991: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF4); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_C993:;
    /* $C993: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x27); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C995:;
    /* $C995: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xA9 + g_cpu.X) & 0xFF), g_cpu.A);
label_C997:;
    /* $C997: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC997); return;
}

void func_E160(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E160");
#endif
label_E160:;
    /* $E160: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_E167; }
label_E162:;
    /* $E162: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E167; }
label_E164:;
    /* $E164: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E1BF(); g_code_window_base = _swb; } return;
label_E167:;
    /* $E167: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E16A:;
    /* $E16A: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_E16C:;
    /* $E16C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03EC); FLAG_NZ(g_cpu.A);
label_E16F:;
    /* $E16F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_E171:;
    /* $E171: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E172:;
    /* $E172: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_E174:;
    /* $E174: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03ED); FLAG_NZ(g_cpu.A);
label_E177:;
    /* $E177: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E178:;
    /* $E178: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E179:;
    /* $E179: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E17A:;
    /* $E17A: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E17C:;
    /* $E17C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E17D:;
    /* $E17D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03EC); FLAG_NZ(g_cpu.A);
label_E180:;
    /* $E180: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_E182:;
    /* $E182: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_E184:;
    /* $E184: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03ED); FLAG_NZ(g_cpu.A);
label_E187:;
    /* $E187: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_E189:;
    /* $E189: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E18A:;
    /* $E18A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E18B:;
    /* $E18B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E18D:;
    /* $E18D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_E18F:;
    /* $E18F: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E23E(); g_code_window_base = _swb; }
label_E192:;
    /* $E192: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E193:;
    /* $E193: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E194:;
    /* $E194: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03ED; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E197:;
    /* $E197: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03ED; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E19A:;
    /* $E19A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03ED); FLAG_NZ(g_cpu.A);
label_E19D:;
    /* $E19D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E19E:;
    /* $E19E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E1A0:;
    /* $E1A0: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E7); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E1A3:;
    /* $E1A3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x015B), -1); return; }
label_E1A5:;
    /* $E1A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x015B), -1); return; }
label_E1A7:;
    /* $E1A7: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03EC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E1AA:;
    /* $E1AA: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03EC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E1AD:;
    /* $E1AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_E1AF:;
    /* $E1AF: 8D */ maybe_trigger_vblank(4); nes_write(0x03ED, g_cpu.A);
label_E1B2:;
    /* $E1B2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041C); FLAG_NZ(g_cpu.A);
label_E1B5:;
    /* $E1B5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E1B6:;
    /* $E1B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_E1B8:;
    /* $E1B8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E1B9:;
    /* $E1B9: 8D */ maybe_trigger_vblank(4); nes_write(0x041C, g_cpu.A);
label_E1BC:;
    /* $E1BC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E15B(); g_code_window_base = _swb; } return;
}

void func_EEAC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EEAC");
#endif
label_EEAC:;
    /* $EEAC: EE */ maybe_trigger_vblank(6); { uint16_t a=0x2060; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EEAF:;
    /* $EEAF: 96 */ maybe_trigger_vblank(4); nes_write((0xEF + g_cpu.Y) & 0xFF, g_cpu.X);
label_EEB1:;
    /* $EEB1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E3B9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E3B9");
#endif
label_E3B9:;
    /* $E3B9: 96 */ maybe_trigger_vblank(4); nes_write((0x04 + g_cpu.Y) & 0xFF, g_cpu.X);
label_E3BB:;
    /* $E3BB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E3D5(); g_code_window_base = _swb; } return;
}

void func_EB96(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EB96");
#endif
label_EB96:;
    /* $EB96: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EB98:;
    /* $EB98: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EB9A:;
    /* $EB9A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EB9C:;
    /* $EB9C: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EB9E:;
    /* $EB9E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBA0:;
    /* $EBA0: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBA2:;
    /* $EBA2: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBA4:;
    /* $EBA4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBA6:;
    /* $EBA6: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBA8:;
    /* $EBA8: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBAA:;
    /* $EBAA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBAC:;
    /* $EBAC: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBAE:;
    /* $EBAE: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBB0:;
    /* $EBB0: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBB2:;
    /* $EBB2: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBB4:;
    /* $EBB4: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBB6:;
    /* $EBB6: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBB8:;
    /* $EBB8: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBBA:;
    /* $EBBA: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBBC:;
    /* $EBBC: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBBE:;
    /* $EBBE: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBC0:;
    /* $EBC0: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBC2:;
    /* $EBC2: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBC4:;
    /* $EBC4: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBC6:;
    /* $EBC6: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBC8:;
    /* $EBC8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBCA:;
    /* $EBCA: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBCC:;
    /* $EBCC: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBCE:;
    /* $EBCE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBD0:;
    /* $EBD0: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBD2:;
    /* $EBD2: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBD4:;
    /* $EBD4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBD6:;
    /* $EBD6: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBD8:;
    /* $EBD8: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBDA:;
    /* $EBDA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBDC:;
    /* $EBDC: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBDE:;
    /* $EBDE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_EBE0:;
    /* $EBE0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_EBEF; }
label_EBE2:;
    /* $EBE2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x16; g_cpu.C=(g_cpu.A>=0x16)?1:0; FLAG_NZ(r&0xFF); }
label_EBE4:;
    /* $EBE4: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_EBEB; }
label_EBE6:;
    /* $EBE6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_EBE8:;
    /* $EBE8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBFB(); g_code_window_base = _swb; } return;
label_EBEB:;
    /* $EBEB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1E; g_cpu.C=(g_cpu.A>=0x1E)?1:0; FLAG_NZ(r&0xFF); }
label_EBED:;
    /* $EBED: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_EBF4; }
label_EBEF:;
    /* $EBEF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_EBF1:;
    /* $EBF1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBFB(); g_code_window_base = _swb; } return;
label_EBF4:;
    /* $EBF4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x26; g_cpu.C=(g_cpu.A>=0x26)?1:0; FLAG_NZ(r&0xFF); }
label_EBF6:;
    /* $EBF6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EBE6;
    }
label_EBF8:;
    /* $EBF8: 4C */ maybe_trigger_vblank(3); goto label_EBEF;
}

void func_EED7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EED7");
#endif
label_EED7:;
    /* $EED7: 8D */ maybe_trigger_vblank(4); nes_write(0x036C, g_cpu.A);
label_EEDA:;
    /* $EEDA: 8D */ maybe_trigger_vblank(4); nes_write(0x0374, g_cpu.A);
label_EEDD:;
    /* $EEDD: 8D */ maybe_trigger_vblank(4); nes_write(0x037C, g_cpu.A);
label_EEE0:;
    /* $EEE0: 8D */ maybe_trigger_vblank(4); nes_write(0x0384, g_cpu.A);
label_EEE3:;
    /* $EEE3: 8D */ maybe_trigger_vblank(4); nes_write(0x038C, g_cpu.A);
label_EEE6:;
    /* $EEE6: 8D */ maybe_trigger_vblank(4); nes_write(0x0394, g_cpu.A);
label_EEE9:;
    /* $EEE9: 8D */ maybe_trigger_vblank(4); nes_write(0x039C, g_cpu.A);
label_EEEC:;
    /* $EEEC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EEEE:;
    /* $EEEE: 8D */ maybe_trigger_vblank(4); nes_write(0x036B, g_cpu.A);
label_EEF1:;
    /* $EEF1: 8D */ maybe_trigger_vblank(4); nes_write(0x036F, g_cpu.A);
label_EEF4:;
    /* $EEF4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_EEF6:;
    /* $EEF6: 8D */ maybe_trigger_vblank(4); nes_write(0x0373, g_cpu.A);
label_EEF9:;
    /* $EEF9: 8D */ maybe_trigger_vblank(4); nes_write(0x0377, g_cpu.A);
label_EEFC:;
    /* $EEFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_EEFE:;
    /* $EEFE: 8D */ maybe_trigger_vblank(4); nes_write(0x037B, g_cpu.A);
label_EF01:;
    /* $EF01: 8D */ maybe_trigger_vblank(4); nes_write(0x037F, g_cpu.A);
label_EF04:;
    /* $EF04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_EF06:;
    /* $EF06: 8D */ maybe_trigger_vblank(4); nes_write(0x0383, g_cpu.A);
label_EF09:;
    /* $EF09: 8D */ maybe_trigger_vblank(4); nes_write(0x0387, g_cpu.A);
label_EF0C:;
    /* $EF0C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_EF0E:;
    /* $EF0E: 8D */ maybe_trigger_vblank(4); nes_write(0x038B, g_cpu.A);
label_EF11:;
    /* $EF11: 8D */ maybe_trigger_vblank(4); nes_write(0x038F, g_cpu.A);
label_EF14:;
    /* $EF14: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_EF16:;
    /* $EF16: 8D */ maybe_trigger_vblank(4); nes_write(0x0393, g_cpu.A);
label_EF19:;
    /* $EF19: 8D */ maybe_trigger_vblank(4); nes_write(0x0397, g_cpu.A);
label_EF1C:;
    /* $EF1C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_EF1E:;
    /* $EF1E: 8D */ maybe_trigger_vblank(4); nes_write(0x039B, g_cpu.A);
label_EF21:;
    /* $EF21: 8D */ maybe_trigger_vblank(4); nes_write(0x039F, g_cpu.A);
label_EF24:;
    /* $EF24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_EF26:;
    /* $EF26: 8D */ maybe_trigger_vblank(4); nes_write(0x03A0, g_cpu.A);
label_EF29:;
    /* $EF29: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CE90(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CE90");
#endif
label_CE90:;
    /* $CE90: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE92:;
    /* $CE92: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x05 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE94:;
    /* $CE94: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CE96:;
    /* $CE96: 8D */ maybe_trigger_vblank(4); nes_write(0x0573, g_cpu.A);
label_CE99:;
    /* $CE99: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_CE9B:;
    /* $CE9B: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_CE9E:;
    /* $CE9E: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_CEA4:;
    /* $CEA4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CFA9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CFA9");
#endif
label_CFA9:;
    /* $CFA9: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xCEA5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CFAC:;
    /* $CFAC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_CFAE:;
    /* $CFAE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFB7; }
label_CFB0:;
    /* $CFB0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F5); FLAG_NZ(g_cpu.A);
label_CFB3:;
    /* $CFB3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_CFB5:;
    /* $CFB5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFC7; }
label_CFB7:;
    /* $CFB7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F5); FLAG_NZ(g_cpu.A);
label_CFBA:;
    /* $CFBA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFC7; }
label_CFBC:;
    /* $CFBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CFBE:;
    /* $CFBE: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFC1:;
    /* $CFC1: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03F5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CFC4:;
    /* $CFC4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFC7:;
    /* $CFC7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_CFC9:;
    /* $CFC9: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_CFCC:;
    /* $CFCC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_CFCE:;
    /* $CFCE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_CFD0:;
    /* $CFD0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D008; }
label_CFD2:;
    /* $CFD2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_CFD4:;
    /* $CFD4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFD5:;
    /* $CFD5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFDF; }
label_CFD7:;
    /* $CFD7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CFD9:;
    /* $CFD9: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFDC:;
    /* $CFDC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFDF:;
    /* $CFDF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFE0:;
    /* $CFE0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFEA; }
label_CFE2:;
    /* $CFE2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CFE4:;
    /* $CFE4: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFE7:;
    /* $CFE7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFEA:;
    /* $CFEA: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFEB:;
    /* $CFEB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFF5; }
label_CFED:;
    /* $CFED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_CFEF:;
    /* $CFEF: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFF2:;
    /* $CFF2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFF5:;
    /* $CFF5: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFF6:;
    /* $CFF6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_D000; }
label_CFF8:;
    /* $CFF8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CFFA:;
    /* $CFFA: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFFD:;
    /* $CFFD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D000:;
    /* $D000: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_D002:;
    /* $D002: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D005:;
    /* $D005: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D008:;
    /* $D008: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_D00A:;
    /* $D00A: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_D00D:;
    /* $D00D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_D00F:;
    /* $D00F: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_D012:;
    /* $D012: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D013:;
    /* $D013: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D01D; }
label_D015:;
    /* $D015: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_D017:;
    /* $D017: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D01A:;
    /* $D01A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D01D:;
    /* $D01D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D01E:;
    /* $D01E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D028; }
label_D020:;
    /* $D020: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_D022:;
    /* $D022: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D025:;
    /* $D025: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D028:;
    /* $D028: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D029:;
    /* $D029: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D033; }
label_D02B:;
    /* $D02B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_D02D:;
    /* $D02D: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D030:;
    /* $D030: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D033:;
    /* $D033: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D034:;
    /* $D034: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D03E; }
label_D036:;
    /* $D036: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_D038:;
    /* $D038: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D03B:;
    /* $D03B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D03E:;
    /* $D03E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D040:;
    /* $D040: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D043:;
    /* $D043: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D045:;
    /* $D045: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_D048:;
    /* $D048: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C5B8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C5B8");
#endif
label_C5B8:;
    /* $C5B8: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xC5; g_cpu.C=(g_cpu.Y>=0xC5)?1:0; FLAG_NZ(r&0xFF); }
label_C5BA:;
    /* $C5BA: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81C9 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81C9_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C5C0:;
    /* $C5C0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E36D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E36D");
#endif
label_E36D:;
    /* $E36D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAD60, -1);
label_E370:;
    /* $E370: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xC903 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E373:;
    /* $E373: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E375:;
    /* $E375: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x04C9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E378:;
    /* $E378: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3F4; }
label_E37A:;
    /* $E37A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_E37C:;
    /* $E37C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3F4; }
label_E37E:;
    /* $E37E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_E380:;
    /* $E380: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3F4; }
label_E382:;
    /* $E382: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_E384:;
    /* $E384: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3F4; }
label_E386:;
    /* $E386: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x36; g_cpu.C=(g_cpu.A>=0x36)?1:0; FLAG_NZ(r&0xFF); }
label_E388:;
    /* $E388: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3F4; }
label_E38A:;
    /* $E38A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x37; g_cpu.C=(g_cpu.A>=0x37)?1:0; FLAG_NZ(r&0xFF); }
label_E38C:;
    /* $E38C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3F4; }
label_E38E:;
    /* $E38E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_E390:;
    /* $E390: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3F4; }
label_E392:;
    /* $E392: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_E394:;
    /* $E394: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3F4; }
label_E396:;
    /* $E396: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1C; g_cpu.C=(g_cpu.A>=0x1C)?1:0; FLAG_NZ(r&0xFF); }
label_E398:;
    /* $E398: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3F4; }
label_E39A:;
    /* $E39A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_E39C:;
    /* $E39C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3AF; }
label_E39E:;
    /* $E39E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E3A0:;
    /* $E3A0: 8D */ maybe_trigger_vblank(4); nes_write(0x0496, g_cpu.A);
label_E3A3:;
    /* $E3A3: 8D */ maybe_trigger_vblank(4); nes_write(0x03E4, g_cpu.A);
label_E3A6:;
    /* $E3A6: 8D */ maybe_trigger_vblank(4); nes_write(0x03E7, g_cpu.A);
label_E3A9:;
    /* $E3A9: 8D */ maybe_trigger_vblank(4); nes_write(0x0497, g_cpu.A);
label_E3AC:;
    /* $E3AC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E3F4(); g_code_window_base = _swb; } return;
label_E3AF:;
    /* $E3AF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_E3B2:;
    /* $E3B2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_E3B4:;
    /* $E3B4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3BE; }
label_E3B6:;
    /* $E3B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_E3B8:;
    /* $E3B8: 8D */ maybe_trigger_vblank(4); nes_write(0x0496, g_cpu.A);
label_E3BB:;
    /* $E3BB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E3D5(); g_code_window_base = _swb; } return;
label_E3BE:;
    /* $E3BE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_E3C1:;
    /* $E3C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_E3C3:;
    /* $E3C3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3CD; }
label_E3C5:;
    /* $E3C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_E3C7:;
    /* $E3C7: 8D */ maybe_trigger_vblank(4); nes_write(0x0496, g_cpu.A);
label_E3CA:;
    /* $E3CA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E3D5(); g_code_window_base = _swb; } return;
label_E3CD:;
    /* $E3CD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E3CF:;
    /* $E3CF: 8D */ maybe_trigger_vblank(4); nes_write(0x0496, g_cpu.A);
label_E3D2:;
    /* $E3D2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E3F4(); g_code_window_base = _swb; } return;
label_E3F4:;
    /* $E3F4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EBB9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EBB9");
#endif
label_EBB9:;
    /* $EBB9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBBB:;
    /* $EBBB: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBBD:;
    /* $EBBD: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBBF:;
    /* $EBBF: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBC1:;
    /* $EBC1: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBC3:;
    /* $EBC3: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBC5:;
    /* $EBC5: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBC7:;
    /* $EBC7: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBC9:;
    /* $EBC9: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBCB:;
    /* $EBCB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBCD:;
    /* $EBCD: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBCF:;
    /* $EBCF: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBD1:;
    /* $EBD1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBD3:;
    /* $EBD3: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBD5:;
    /* $EBD5: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBD7:;
    /* $EBD7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_EBD9:;
    /* $EBD9: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBDB:;
    /* $EBDB: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EBDD:;
    /* $EBDD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC9); FLAG_NZ(g_cpu.A);
label_EBDF:;
    /* $EBDF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0B71), -1); return; }
label_EBE1:;
    /* $EBE1: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x16C9); FLAG_NZ(g_cpu.A);
label_EBE4:;
    /* $EBE4: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_EBEB; }
label_EBE6:;
    /* $EBE6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_EBE8:;
    /* $EBE8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBFB(); g_code_window_base = _swb; } return;
label_EBEB:;
    /* $EBEB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1E; g_cpu.C=(g_cpu.A>=0x1E)?1:0; FLAG_NZ(r&0xFF); }
label_EBED:;
    /* $EBED: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_EBF4; }
label_EBEF:;
    /* $EBEF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_EBF1:;
    /* $EBF1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBFB(); g_code_window_base = _swb; } return;
label_EBF4:;
    /* $EBF4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x26; g_cpu.C=(g_cpu.A>=0x26)?1:0; FLAG_NZ(r&0xFF); }
label_EBF6:;
    /* $EBF6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EBE6;
    }
label_EBF8:;
    /* $EBF8: 4C */ maybe_trigger_vblank(3); goto label_EBEF;
}

void func_E875(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E875");
#endif
label_E875:;
    /* $E875: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E877:;
    /* $E877: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE877); return;
}

void func_D077(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D077");
#endif
label_D077:;
    /* $D077: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D079:;
    /* $D079: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D07F:;
    /* $D07F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D19B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D19B");
#endif
label_D19B:;
    /* $D19B: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D19D:;
    /* $D19D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D19E:;
    /* $D19E: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_D1A0:;
    /* $D1A0: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D1A2:;
    /* $D1A2: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EDE8(); g_code_window_base = _swb; }
label_D1A5:;
    /* $D1A5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05DE); FLAG_NZ(g_cpu.A);
label_D1A8:;
    /* $D1A8: 8D */ maybe_trigger_vblank(4); nes_write(0x05DF, g_cpu.A);
label_D1AB:;
    /* $D1AB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6C); FLAG_NZ(g_cpu.A);
label_D1AD:;
    /* $D1AD: 8D */ maybe_trigger_vblank(4); nes_write(0x05E1, g_cpu.A);
label_D1B0:;
    /* $D1B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_D1B2:;
    /* $D1B2: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_D1B5:;
    /* $D1B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_D1B7:;
    /* $D1B7: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_D1BA:;
    /* $D1BA: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D1C0:;
    /* $D1C0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD2B9, -1); return;
}

void func_C222(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C222");
#endif
label_C222:;
    /* $C222: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x20E9); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_C225:;
    /* $C225: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xE8) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C227:;
    /* $C227: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E1C0(); g_code_window_base = _swb; }
label_C22A:;
    /* $C22A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC53, -1);
label_C22D:;
    /* $C22D: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C230:;
    /* $C230: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C232:;
    /* $C232: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C235:;
    /* $C235: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C238:;
    /* $C238: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$812A */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_812A_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C23E:;
    /* $C23E: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8112 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8112_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C244:;
    /* $C244: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E72F(); g_code_window_base = _swb; }
label_C247:;
    /* $C247: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C24A:;
    /* $C24A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C24C:;
    /* $C24C: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C24F:;
    /* $C24F: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C252:;
    /* $C252: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E6FC(); g_code_window_base = _swb; }
label_C255:;
    /* $C255: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C258:;
    /* $C258: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C25A:;
    /* $C25A: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C25D:;
    /* $C25D: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C260:;
    /* $C260: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E76D(); g_code_window_base = _swb; }
label_C263:;
    /* $C263: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDDFE, -1);
label_C266:;
    /* $C266: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C269:;
    /* $C269: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C26B:;
    /* $C26B: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C26E:;
    /* $C26E: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C271:;
    /* $C271: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_C273:;
    /* $C273: 8D */ maybe_trigger_vblank(4); nes_write(0x03DB, g_cpu.A);
label_C276:;
    /* $C276: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC7B, -1);
label_C279:;
    /* $C279: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C27C:;
    /* $C27C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C27E:;
    /* $C27E: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C281:;
    /* $C281: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C284:;
    /* $C284: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_C286:;
    /* $C286: 8D */ maybe_trigger_vblank(4); nes_write(0x03DB, g_cpu.A);
label_C289:;
    /* $C289: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC7B, -1);
label_C28C:;
    /* $C28C: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C28F:;
    /* $C28F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C291:;
    /* $C291: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C294:;
    /* $C294: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C297:;
    /* $C297: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_C299:;
    /* $C299: 8D */ maybe_trigger_vblank(4); nes_write(0x03DB, g_cpu.A);
label_C29C:;
    /* $C29C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC7B, -1);
label_C29F:;
    /* $C29F: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C2A2:;
    /* $C2A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C2A4:;
    /* $C2A4: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C2A7:;
    /* $C2A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C2AA:;
    /* $C2AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C2AC:;
    /* $C2AC: 8D */ maybe_trigger_vblank(4); nes_write(0x03DB, g_cpu.A);
label_C2AF:;
    /* $C2AF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC7B, -1);
label_C2B2:;
    /* $C2B2: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C2B5:;
    /* $C2B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C2B7:;
    /* $C2B7: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C2BA:;
    /* $C2BA: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C2BD:;
    /* $C2BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_C2BF:;
    /* $C2BF: 8D */ maybe_trigger_vblank(4); nes_write(0x0455, g_cpu.A);
label_C2C2:;
    /* $C2C2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D6A9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D6A9");
#endif
label_D6A9:;
    /* $D6A9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C6AD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C6AD");
#endif
label_C6AD:;
    /* $C6AD: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xABE6); FLAG_NZ(g_cpu.X);
label_C6B0:;
    /* $C6B0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6B4; }
label_C6B2:;
    /* $C6B2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B4:;
    /* $C6B4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B6:;
    /* $C6B6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6B8:;
    /* $C6B8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6BA:;
    /* $C6BA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC6E7, -1);
label_C6BD:;
    /* $C6BD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xCA38, -1);
label_C6C0:;
    /* $C6C0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_C6C2:;
    /* $C6C2: 8D */ maybe_trigger_vblank(4); nes_write(0x0409, g_cpu.A);
label_C6C5:;
    /* $C6C5: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F599(); g_code_window_base = _swb; }
label_C6C8:;
    /* $C6C8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048F); FLAG_NZ(g_cpu.A);
label_C6CB:;
    /* $C6CB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6CD:;
    /* $C6CD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_C6D0:;
    /* $C6D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_C6D2:;
    /* $C6D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6D4:;
    /* $C6D4: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E36F(); g_code_window_base = _swb; }
label_C6D7:;
    /* $C6D7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C6DD:;
    /* $C6DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C6DF:;
    /* $C6DF: 85 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.A);
label_C6E1:;
    /* $C6E1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E2:;
    /* $C6E2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C6E3:;
    /* $C6E3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E4:;
    /* $C6E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C6E5:;
    /* $C6E5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E6:;
    /* $C6E6: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC6E6; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DA21(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA21");
#endif
label_DA21:;
    /* $DA21: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DA23:;
    /* $DA23: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA26:;
    /* $DA26: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA27:;
    /* $DA27: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA29:;
    /* $DA29: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DA2B:;
    /* $DA2B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA2E:;
    /* $DA2E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA2F:;
    /* $DA2F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_DA31:;
    /* $DA31: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_DA33:;
    /* $DA33: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA36:;
    /* $DA36: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA37:;
    /* $DA37: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_DA39:;
    /* $DA39: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DA3C:;
    /* $DA3C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA3F:;
    /* $DA3F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DA40:;
    /* $DA40: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_DA41:;
    /* $DA41: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DA42:;
    /* $DA42: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_DA44:;
    /* $DA44: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DA45:;
    /* $DA45: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA47:;
    /* $DA47: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DA39;
    }
label_DA49:;
    /* $DA49: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DA4B:;
    /* $DA4B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DA4E:;
    /* $DA4E: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_DA51:;
    /* $DA51: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F6EE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F6EE");
#endif
label_F6EE:;
    /* $F6EE: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FB10(); g_code_window_base = _swb; }
label_F6F1:;
    /* $F6F1: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2002); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F6F4:;
    /* $F6F4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F6F1;
    }
label_F6F6:;
    /* $F6F6: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_F6F7:;
    /* $F6F7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x16EC), -1); return; }
label_F6F9:;
    /* $F6F9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F6FB:;
    /* $F6FB: 8D */ maybe_trigger_vblank(4); nes_write(0x4010, g_cpu.A);
label_F6FE:;
    /* $F6FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_F700:;
    /* $F700: 8D */ maybe_trigger_vblank(4); nes_write(0x4017, g_cpu.A);
label_F703:;
    /* $F703: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F705:;
    /* $F705: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_F708:;
    /* $F708: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_F70B:;
    /* $F70B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC078, -1); return;
}

void func_EE0B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE0B");
#endif
label_EE0B:;
    /* $EE0B: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x6005 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EE0E:;
    /* $EE0E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_EE10:;
    /* $EE10: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_EE12:;
    /* $EE12: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EE20; }
label_EE14:;
    /* $EE14: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x03E2); FLAG_NZ(g_cpu.Y);
label_EE17:;
    /* $EE17: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x03E3); FLAG_NZ(g_cpu.X);
label_EE1A:;
    /* $EE1A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDDB5, -1);
label_EE1D:;
    /* $EE1D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EE26(); g_code_window_base = _swb; } return;
label_EE20:;
    /* $EE20: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EE27(); g_code_window_base = _swb; }
label_EE23:;
    /* $EE23: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EE5A(); g_code_window_base = _swb; }
label_EE26:;
    /* $EE26: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F5B9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F5B9");
#endif
label_F5B9:;
    /* $F5B9: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCC35; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F5BC:;
    /* $F5BC: 95 */ maybe_trigger_vblank(4); nes_write((0xCC + g_cpu.X) & 0xFF, g_cpu.A);
label_F5BE:;
    /* $F5BE: 94 */ maybe_trigger_vblank(4); nes_write((0xCE + g_cpu.X) & 0xFF, g_cpu.Y);
label_F5C0:;
    /* $F5C0: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_F5C1:;
    /* $F5C1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x15B5), -1); return; }
label_F5C3:;
    /* $F5C3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C182(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C182");
#endif
label_C182:;
    /* $C182: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_C183:;
    /* $C183: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD9); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C185:;
    /* $C185: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDA); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C187:;
    /* $C187: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDB); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C189:;
    /* $C189: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDC); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C18B:;
    /* $C18B: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C18D:;
    /* $C18D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDE); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C18F:;
    /* $C18F: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDF); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C191:;
    /* $C191: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE0); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C193:;
    /* $C193: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C195:;
    /* $C195: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE2); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C197:;
    /* $C197: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE3); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C199:;
    /* $C199: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE4); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C19B:;
    /* $C19B: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C19D:;
    /* $C19D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE6); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C19F:;
    /* $C19F: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE7); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1A1:;
    /* $C1A1: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1A3:;
    /* $C1A3: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x4F); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1A5:;
    /* $C1A5: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6C); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1A7:;
    /* $C1A7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x8C); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1A9:;
    /* $C1A9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x96); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1AB:;
    /* $C1AB: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x96); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1AD:;
    /* $C1AD: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC1); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1AF:;
    /* $C1AF: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC2); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B1:;
    /* $C1B1: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B3:;
    /* $C1B3: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC4); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B5:;
    /* $C1B5: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B7:;
    /* $C1B7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC6); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1B9:;
    /* $C1B9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1BB:;
    /* $C1BB: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x60); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C1BD:;
    /* $C1BD: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8145 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8145_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C1C3:;
    /* $C1C3: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=3 addr=$8103 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x03; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8103_b3();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C1C9:;
    /* $C1C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_C1CB:;
    /* $C1CB: 8D */ maybe_trigger_vblank(4); nes_write(0x03C9, g_cpu.A);
label_C1CE:;
    /* $C1CE: 8D */ maybe_trigger_vblank(4); nes_write(0x03CA, g_cpu.A);
label_C1D1:;
    /* $C1D1: 8D */ maybe_trigger_vblank(4); nes_write(0x03CB, g_cpu.A);
label_C1D4:;
    /* $C1D4: 8D */ maybe_trigger_vblank(4); nes_write(0x03CC, g_cpu.A);
label_C1D7:;
    /* $C1D7: 8D */ maybe_trigger_vblank(4); nes_write(0x03CD, g_cpu.A);
label_C1DA:;
    /* $C1DA: 8D */ maybe_trigger_vblank(4); nes_write(0x03CE, g_cpu.A);
label_C1DD:;
    /* $C1DD: 8D */ maybe_trigger_vblank(4); nes_write(0x03CF, g_cpu.A);
label_C1E0:;
    /* $C1E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C1E2:;
    /* $C1E2: 8D */ maybe_trigger_vblank(4); nes_write(0x05E5, g_cpu.A);
label_C1E5:;
    /* $C1E5: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_C1E7:;
    /* $C1E7: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_C1EA:;
    /* $C1EA: 8D */ maybe_trigger_vblank(4); nes_write(0x052D, g_cpu.A);
label_C1ED:;
    /* $C1ED: 8D */ maybe_trigger_vblank(4); nes_write(0x052E, g_cpu.A);
label_C1F0:;
    /* $C1F0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_C1F2:;
    /* $C1F2: 8D */ maybe_trigger_vblank(4); nes_write(0x05E6, g_cpu.A);
label_C1F5:;
    /* $C1F5: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=6 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x06; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b6();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C1FB:;
    /* $C1FB: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F516(); g_code_window_base = _swb; }
label_C1FE:;
    /* $C1FE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D083(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D083");
#endif
label_D083:;
    /* $D083: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E2); FLAG_NZ(g_cpu.A);
label_D086:;
    /* $D086: 8D */ maybe_trigger_vblank(4); nes_write(0x0404, g_cpu.A);
label_D089:;
    /* $D089: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D08F:;
    /* $D08F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DF85(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DF85");
#endif
label_DF85:;
    /* $DF85: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_DF87:;
    /* $DF87: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_DF8A:;
    /* $DF8A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DF8D:;
    /* $DF8D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DF8E:;
    /* $DF8E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0430); FLAG_NZ(g_cpu.A);
label_DF91:;
    /* $DF91: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DF94:;
    /* $DF94: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DF95:;
    /* $DF95: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DF97:;
    /* $DF97: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DF9A:;
    /* $DF9A: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_DF9D:;
    /* $DF9D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E8C0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8C0");
#endif
label_E8C0:;
    /* $E8C0: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E8C2:;
    /* $E8C2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE8C2); return;
}

void func_E886(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E886");
#endif
label_E886:;
    /* $E886: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x85; g_cpu.C=(g_cpu.Y>=0x85)?1:0; FLAG_NZ(r&0xFF); }
label_E888:;
    /* $E888: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x20A9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E88B:;
    /* $E88B: 85 */ maybe_trigger_vblank(3); nes_write(0xBF, g_cpu.A);
label_E88D:;
    /* $E88D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_E88F:;
    /* $E88F: 85 */ maybe_trigger_vblank(3); nes_write(0xBC, g_cpu.A);
label_E891:;
    /* $E891: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_E893:;
    /* $E893: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E895:;
    /* $E895: 85 */ maybe_trigger_vblank(3); nes_write(0xBA, g_cpu.A);
label_E897:;
    /* $E897: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD8; FLAG_NZ(g_cpu.A);
label_E899:;
    /* $E899: 85 */ maybe_trigger_vblank(3); nes_write(0xBB, g_cpu.A);
label_E89B:;
    /* $E89B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_E89D:;
    /* $E89D: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_E89F:;
    /* $E89F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_E8A1:;
    /* $E8A1: 8D */ maybe_trigger_vblank(4); nes_write(0x0414, g_cpu.A);
label_E8A4:;
    /* $E8A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_E8A6:;
    /* $E8A6: 8D */ maybe_trigger_vblank(4); nes_write(0x0415, g_cpu.A);
label_E8A9:;
    /* $E8A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E8AB:;
    /* $E8AB: 85 */ maybe_trigger_vblank(3); nes_write(0xAA, g_cpu.A);
label_E8AD:;
    /* $E8AD: 85 */ maybe_trigger_vblank(3); nes_write(0xAB, g_cpu.A);
label_E8AF:;
    /* $E8AF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A0); FLAG_NZ(g_cpu.A);
label_E8B2:;
    /* $E8B2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E8BA; }
label_E8B4:;
    /* $E8B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E8B6:;
    /* $E8B6: 85 */ maybe_trigger_vblank(3); nes_write(0xAC, g_cpu.A);
label_E8B8:;
    /* $E8B8: 85 */ maybe_trigger_vblank(3); nes_write(0xAD, g_cpu.A);
label_E8BA:;
    /* $E8BA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_E8BD:;
    /* $E8BD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_E8BF:;
    /* $E8BF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E8C7; }
label_E8C1:;
    /* $E8C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E8C3:;
    /* $E8C3: 85 */ maybe_trigger_vblank(3); nes_write(0xAC, g_cpu.A);
label_E8C5:;
    /* $E8C5: 85 */ maybe_trigger_vblank(3); nes_write(0xAD, g_cpu.A);
label_E8C7:;
    /* $E8C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_E8C9:;
    /* $E8C9: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_E8CB:;
    /* $E8CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_E8CD:;
    /* $E8CD: 8D */ maybe_trigger_vblank(4); nes_write(0x040A, g_cpu.A);
label_E8D0:;
    /* $E8D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E8D2:;
    /* $E8D2: 8D */ maybe_trigger_vblank(4); nes_write(0x047F, g_cpu.A);
label_E8D5:;
    /* $E8D5: 8D */ maybe_trigger_vblank(4); nes_write(0x042D, g_cpu.A);
label_E8D8:;
    /* $E8D8: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_E8DB:;
    /* $E8DB: 8D */ maybe_trigger_vblank(4); nes_write(0x0427, g_cpu.A);
label_E8DE:;
    /* $E8DE: 8D */ maybe_trigger_vblank(4); nes_write(0x03FD, g_cpu.A);
label_E8E1:;
    /* $E8E1: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_E8E4:;
    /* $E8E4: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_E8E7:;
    /* $E8E7: 85 */ maybe_trigger_vblank(3); nes_write(0x63, g_cpu.A);
label_E8E9:;
    /* $E8E9: 85 */ maybe_trigger_vblank(3); nes_write(0x6C, g_cpu.A);
label_E8EB:;
    /* $E8EB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_E8ED:;
    /* $E8ED: 8D */ maybe_trigger_vblank(4); nes_write(0x03DB, g_cpu.A);
label_E8F0:;
    /* $E8F0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EE22(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE22");
#endif
label_EE22:;
    /* $EE22: EE */ maybe_trigger_vblank(6); { uint16_t a=0x5A20; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EE25:;
    /* $EE25: EE */ maybe_trigger_vblank(6); { uint16_t a=0x8A60; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EE28:;
    /* $EE28: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_EE29:;
    /* $EE29: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_EE2A:;
    /* $EE2A: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_EE2B:;
    /* $EE2B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_EE2E:;
    /* $EE2E: 8D */ maybe_trigger_vblank(4); nes_write(0x03EA, g_cpu.A);
label_EE31:;
    /* $EE31: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03EA); FLAG_NZ(g_cpu.A);
label_EE34:;
    /* $EE34: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E2); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EE37:;
    /* $EE37: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EE4C; }
label_EE39:;
    /* $EE39: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EE3C:;
    /* $EE3C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_EE43; }
label_EE3E:;
    /* $EE3E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EE43; }
label_EE40:;
    /* $EE40: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EE55(); g_code_window_base = _swb; } return;
label_EE43:;
    /* $EE43: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x03EA); FLAG_NZ(g_cpu.Y);
label_EE46:;
    /* $EE46: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x03E3); FLAG_NZ(g_cpu.X);
label_EE49:;
    /* $EE49: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDD6B, -1);
label_EE4C:;
    /* $EE4C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03EA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EE4F:;
    /* $EE4F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03EA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EE52:;
    /* $EE52: 4C */ maybe_trigger_vblank(3); goto label_EE31;
}

void func_DCC0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DCC0");
#endif
label_DCC0:;
    /* $DCC0: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x009D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DCC3:;
    /* $DCC3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_DCC5:;
    /* $DCC5: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_DCC7:;
    /* $DCC7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DCCA:;
    /* $DCCA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DCCD:;
    /* $DCCD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DCCE:;
    /* $DCCE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DCCF:;
    /* $DCCF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DCD1:;
    /* $DCD1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DCC7;
    }
label_DCD3:;
    /* $DCD3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DCD4:;
    /* $DCD4: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DCD5:;
    /* $DCD5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DCD7:;
    /* $DCD7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DCD8:;
    /* $DCD8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_DCDA:;
    /* $DCDA: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_DCDC:;
    /* $DCDC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DCE0; }
label_DCDE:;
    /* $DCDE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DCE0:;
    /* $DCE0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DCE2:;
    /* $DCE2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DCE5:;
    /* $DCE5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DCE6:;
    /* $DCE6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DCE8:;
    /* $DCE8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DCEB:;
    /* $DCEB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DCEC:;
    /* $DCEC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_DCEE:;
    /* $DCEE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DCF1:;
    /* $DCF1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DCF2:;
    /* $DCF2: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_DCF4:;
    /* $DCF4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DCF7:;
    /* $DCF7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DCFA:;
    /* $DCFA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DCFB:;
    /* $DCFB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DCFC:;
    /* $DCFC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DCFE:;
    /* $DCFE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DCF4;
    }
label_DD00:;
    /* $DD00: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD01:;
    /* $DD01: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD02:;
    /* $DD02: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_DD04:;
    /* $DD04: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD09; }
label_DD06:;
    /* $DD06: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xDD6A, -1); return;
label_DD09:;
    /* $DD09: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DD0B:;
    /* $DD0B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DD0C:;
    /* $DD0C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_DD0E:;
    /* $DD0E: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_DD10:;
    /* $DD10: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DD14; }
label_DD12:;
    /* $DD12: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD14:;
    /* $DD14: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DD16:;
    /* $DD16: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD19:;
    /* $DD19: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DD1A:;
    /* $DD1A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DD1C:;
    /* $DD1C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD1F:;
    /* $DD1F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DD20:;
    /* $DD20: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_DD22:;
    /* $DD22: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD25:;
    /* $DD25: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_DD27:;
    /* $DD27: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DD28:;
    /* $DD28: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD2B:;
    /* $DD2B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD2E:;
    /* $DD2E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DD2F:;
    /* $DD2F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD30:;
    /* $DD30: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD32:;
    /* $DD32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD28;
    }
label_DD34:;
    /* $DD34: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD35:;
    /* $DD35: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD36:;
    /* $DD36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DD38:;
    /* $DD38: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DD39:;
    /* $DD39: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_DD3B:;
    /* $DD3B: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_DD3D:;
    /* $DD3D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DD41; }
label_DD3F:;
    /* $DD3F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD41:;
    /* $DD41: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DD43:;
    /* $DD43: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD46:;
    /* $DD46: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DD47:;
    /* $DD47: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DD49:;
    /* $DD49: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD4C:;
    /* $DD4C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DD4D:;
    /* $DD4D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_DD4F:;
    /* $DD4F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD52:;
    /* $DD52: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_DD54:;
    /* $DD54: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DD55:;
    /* $DD55: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD58:;
    /* $DD58: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD5B:;
    /* $DD5B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DD5C:;
    /* $DD5C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD5D:;
    /* $DD5D: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD5F:;
    /* $DD5F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD55;
    }
label_DD61:;
    /* $DD61: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DD63:;
    /* $DD63: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DD66:;
    /* $DD66: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DD67:;
    /* $DD67: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DD68:;
    /* $DD68: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DD69:;
    /* $DD69: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_DD6A:;
    /* $DD6A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E087(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E087");
#endif
label_E087:;
    /* $E087: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EF88(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EF88");
#endif
label_EF88:;
    /* $EF88: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_EF8A:;
    /* $EF8A: 8D */ maybe_trigger_vblank(4); nes_write(0x0398, g_cpu.A);
label_EF8D:;
    /* $EF8D: 8D */ maybe_trigger_vblank(4); nes_write(0x039C, g_cpu.A);
label_EF90:;
    /* $EF90: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_EF92:;
    /* $EF92: 8D */ maybe_trigger_vblank(4); nes_write(0x03A0, g_cpu.A);
label_EF95:;
    /* $EF95: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C789(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C789");
#endif
label_C789:;
    /* $C789: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xC8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C78B:;
    /* $C78B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D9); FLAG_NZ(g_cpu.A);
label_C78E:;
    /* $C78E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x22; g_cpu.C=(g_cpu.A>=0x22)?1:0; FLAG_NZ(r&0xFF); }
label_C790:;
    /* $C790: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C79D; }
label_C792:;
    /* $C792: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x052E); FLAG_NZ(g_cpu.A);
label_C795:;
    /* $C795: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_C797:;
    /* $C797: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C7CE; }
label_C799:;
    /* $C799: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_C79B:;
    /* $C79B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C7CE; }
label_C79D:;
    /* $C79D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F0); FLAG_NZ(g_cpu.A);
label_C7A0:;
    /* $C7A0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C7CE; }
label_C7A2:;
    /* $C7A2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D9); FLAG_NZ(g_cpu.A);
label_C7A5:;
    /* $C7A5: 8D */ maybe_trigger_vblank(4); nes_write(0x048E, g_cpu.A);
label_C7A8:;
    /* $C7A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x15; FLAG_NZ(g_cpu.A);
label_C7AA:;
    /* $C7AA: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_C7AD:;
    /* $C7AD: 8D */ maybe_trigger_vblank(4); nes_write(0x0495, g_cpu.A);
label_C7B0:;
    /* $C7B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C7B2:;
    /* $C7B2: 8D */ maybe_trigger_vblank(4); nes_write(0x05E2, g_cpu.A);
label_C7B5:;
    /* $C7B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_C7B7:;
    /* $C7B7: 8D */ maybe_trigger_vblank(4); nes_write(0x05E3, g_cpu.A);
label_C7BA:;
    /* $C7BA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_C7BC:;
    /* $C7BC: 8D */ maybe_trigger_vblank(4); nes_write(0x05F0, g_cpu.A);
label_C7BF:;
    /* $C7BF: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C7C5:;
    /* $C7C5: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81AE */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81AE_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C7CB:;
    /* $C7CB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC854, -1); return;
label_C7CE:;
    /* $C7CE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D9); FLAG_NZ(g_cpu.A);
label_C7D1:;
    /* $C7D1: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $F573: 65 entries (bank=-1) */
switch(g_cpu.A) {
  case 0: nes_write(0x0000, 0x54); nes_write(0x0001, 0xC8); g_cpu.A = 0x54; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C854(); return;
  case 1: nes_write(0x0000, 0x55); nes_write(0x0001, 0xC8); g_cpu.A = 0x55; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C855(); return;
  case 2: nes_write(0x0000, 0x76); nes_write(0x0001, 0xC8); g_cpu.A = 0x76; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C876(); return;
  case 3: nes_write(0x0000, 0x7A); nes_write(0x0001, 0xC8); g_cpu.A = 0x7A; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C87A(); return;
  case 4: nes_write(0x0000, 0x7E); nes_write(0x0001, 0xC8); g_cpu.A = 0x7E; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C87E(); return;
  case 5: nes_write(0x0000, 0x7F); nes_write(0x0001, 0xC8); g_cpu.A = 0x7F; g_cpu.Y = 0x0C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C87F(); return;
  case 6: nes_write(0x0000, 0x80); nes_write(0x0001, 0xC8); g_cpu.A = 0x80; g_cpu.Y = 0x0E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C880(); return;
  case 7: nes_write(0x0000, 0x81); nes_write(0x0001, 0xC8); g_cpu.A = 0x81; g_cpu.Y = 0x10; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C881(); return;
  case 8: nes_write(0x0000, 0x88); nes_write(0x0001, 0xC8); g_cpu.A = 0x88; g_cpu.Y = 0x12; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C888(); return;
  case 9: nes_write(0x0000, 0xAE); nes_write(0x0001, 0xC8); g_cpu.A = 0xAE; g_cpu.Y = 0x14; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8AE(); return;
  case 10: nes_write(0x0000, 0xB5); nes_write(0x0001, 0xC8); g_cpu.A = 0xB5; g_cpu.Y = 0x16; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8B5(); return;
  case 11: nes_write(0x0000, 0xDF); nes_write(0x0001, 0xC8); g_cpu.A = 0xDF; g_cpu.Y = 0x18; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8DF(); return;
  case 12: nes_write(0x0000, 0xE5); nes_write(0x0001, 0xC8); g_cpu.A = 0xE5; g_cpu.Y = 0x1A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8E5(); return;
  case 13: nes_write(0x0000, 0xEC); nes_write(0x0001, 0xC8); g_cpu.A = 0xEC; g_cpu.Y = 0x1C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8EC(); return;
  case 14: nes_write(0x0000, 0xF3); nes_write(0x0001, 0xC8); g_cpu.A = 0xF3; g_cpu.Y = 0x1E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8F3(); return;
  case 15: nes_write(0x0000, 0xF4); nes_write(0x0001, 0xC8); g_cpu.A = 0xF4; g_cpu.Y = 0x20; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8F4(); return;
  case 16: nes_write(0x0000, 0xF5); nes_write(0x0001, 0xC8); g_cpu.A = 0xF5; g_cpu.Y = 0x22; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8F5(); return;
  case 17: nes_write(0x0000, 0xFC); nes_write(0x0001, 0xC8); g_cpu.A = 0xFC; g_cpu.Y = 0x24; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_C8FC(); return;
  case 18: nes_write(0x0000, 0x23); nes_write(0x0001, 0xC9); g_cpu.A = 0x23; g_cpu.Y = 0x26; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C923(); return;
  case 19: nes_write(0x0000, 0x39); nes_write(0x0001, 0xC9); g_cpu.A = 0x39; g_cpu.Y = 0x28; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C939(); return;
  case 20: nes_write(0x0000, 0x3A); nes_write(0x0001, 0xC9); g_cpu.A = 0x3A; g_cpu.Y = 0x2A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C93A(); return;
  case 21: nes_write(0x0000, 0x3B); nes_write(0x0001, 0xC9); g_cpu.A = 0x3B; g_cpu.Y = 0x2C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_C93B(); return;
  case 22: nes_write(0x0000, 0x3C); nes_write(0x0001, 0xC9); g_cpu.A = 0x3C; g_cpu.Y = 0x2E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C93C(); return;
  case 23: nes_write(0x0000, 0x3D); nes_write(0x0001, 0xC9); g_cpu.A = 0x3D; g_cpu.Y = 0x30; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C93D(); return;
  case 24: nes_write(0x0000, 0x3E); nes_write(0x0001, 0xC9); g_cpu.A = 0x3E; g_cpu.Y = 0x32; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C93E(); return;
  case 25: nes_write(0x0000, 0x3F); nes_write(0x0001, 0xC9); g_cpu.A = 0x3F; g_cpu.Y = 0x34; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C93F(); return;
  case 26: nes_write(0x0000, 0x40); nes_write(0x0001, 0xC9); g_cpu.A = 0x40; g_cpu.Y = 0x36; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C940(); return;
  case 27: nes_write(0x0000, 0x47); nes_write(0x0001, 0xC9); g_cpu.A = 0x47; g_cpu.Y = 0x38; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_C947(); return;
  case 28: nes_write(0x0000, 0xB0); nes_write(0x0001, 0xC9); g_cpu.A = 0xB0; g_cpu.Y = 0x3A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B0(); return;
  case 29: nes_write(0x0000, 0xB1); nes_write(0x0001, 0xC9); g_cpu.A = 0xB1; g_cpu.Y = 0x3C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B1(); return;
  case 30: nes_write(0x0000, 0xB2); nes_write(0x0001, 0xC9); g_cpu.A = 0xB2; g_cpu.Y = 0x3E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B2(); return;
  case 31: nes_write(0x0000, 0xB3); nes_write(0x0001, 0xC9); g_cpu.A = 0xB3; g_cpu.Y = 0x40; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B3(); return;
  case 32: nes_write(0x0000, 0xB4); nes_write(0x0001, 0xC9); g_cpu.A = 0xB4; g_cpu.Y = 0x42; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B4(); return;
  case 33: nes_write(0x0000, 0xB5); nes_write(0x0001, 0xC9); g_cpu.A = 0xB5; g_cpu.Y = 0x44; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B5(); return;
  case 34: nes_write(0x0000, 0xB6); nes_write(0x0001, 0xC9); g_cpu.A = 0xB6; g_cpu.Y = 0x46; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9B6(); return;
  case 35: nes_write(0x0000, 0xFB); nes_write(0x0001, 0xC9); g_cpu.A = 0xFB; g_cpu.Y = 0x48; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9FB(); return;
  case 36: nes_write(0x0000, 0xFC); nes_write(0x0001, 0xC9); g_cpu.A = 0xFC; g_cpu.Y = 0x4A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9FC(); return;
  case 37: nes_write(0x0000, 0xFD); nes_write(0x0001, 0xC9); g_cpu.A = 0xFD; g_cpu.Y = 0x4C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9FD(); return;
  case 38: nes_write(0x0000, 0xFE); nes_write(0x0001, 0xC9); g_cpu.A = 0xFE; g_cpu.Y = 0x4E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9FE(); return;
  case 39: nes_write(0x0000, 0xFF); nes_write(0x0001, 0xC9); g_cpu.A = 0xFF; g_cpu.Y = 0x50; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(52); func_C9FF(); return;
  case 40: nes_write(0x0000, 0x00); nes_write(0x0001, 0xCA); g_cpu.A = 0x00; g_cpu.Y = 0x52; g_cpu.C = 0; g_cpu.Z = 1; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA00(); return;
  case 41: nes_write(0x0000, 0x01); nes_write(0x0001, 0xCA); g_cpu.A = 0x01; g_cpu.Y = 0x54; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA01(); return;
  case 42: nes_write(0x0000, 0x02); nes_write(0x0001, 0xCA); g_cpu.A = 0x02; g_cpu.Y = 0x56; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA02(); return;
  case 43: nes_write(0x0000, 0x03); nes_write(0x0001, 0xCA); g_cpu.A = 0x03; g_cpu.Y = 0x58; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA03(); return;
  case 44: nes_write(0x0000, 0x04); nes_write(0x0001, 0xCA); g_cpu.A = 0x04; g_cpu.Y = 0x5A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA04(); return;
  case 45: nes_write(0x0000, 0x05); nes_write(0x0001, 0xCA); g_cpu.A = 0x05; g_cpu.Y = 0x5C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA05(); return;
  case 46: nes_write(0x0000, 0x06); nes_write(0x0001, 0xCA); g_cpu.A = 0x06; g_cpu.Y = 0x5E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA06(); return;
  case 47: nes_write(0x0000, 0x07); nes_write(0x0001, 0xCA); g_cpu.A = 0x07; g_cpu.Y = 0x60; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA07(); return;
  case 48: nes_write(0x0000, 0x08); nes_write(0x0001, 0xCA); g_cpu.A = 0x08; g_cpu.Y = 0x62; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA08(); return;
  case 49: nes_write(0x0000, 0x09); nes_write(0x0001, 0xCA); g_cpu.A = 0x09; g_cpu.Y = 0x64; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA09(); return;
  case 50: nes_write(0x0000, 0x0A); nes_write(0x0001, 0xCA); g_cpu.A = 0x0A; g_cpu.Y = 0x66; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA0A(); return;
  case 51: nes_write(0x0000, 0x20); nes_write(0x0001, 0xCA); g_cpu.A = 0x20; g_cpu.Y = 0x68; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA20(); return;
  case 52: nes_write(0x0000, 0x21); nes_write(0x0001, 0xCA); g_cpu.A = 0x21; g_cpu.Y = 0x6A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA21(); return;
  case 53: nes_write(0x0000, 0x22); nes_write(0x0001, 0xCA); g_cpu.A = 0x22; g_cpu.Y = 0x6C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA22(); return;
  case 54: nes_write(0x0000, 0x23); nes_write(0x0001, 0xCA); g_cpu.A = 0x23; g_cpu.Y = 0x6E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA23(); return;
  case 55: nes_write(0x0000, 0x2A); nes_write(0x0001, 0xCA); g_cpu.A = 0x2A; g_cpu.Y = 0x70; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA2A(); return;
  case 56: nes_write(0x0000, 0x2A); nes_write(0x0001, 0xCA); g_cpu.A = 0x2A; g_cpu.Y = 0x72; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA2A(); return;
  case 57: nes_write(0x0000, 0x31); nes_write(0x0001, 0xCA); g_cpu.A = 0x31; g_cpu.Y = 0x74; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA31(); return;
  case 58: nes_write(0x0000, 0x32); nes_write(0x0001, 0xCA); g_cpu.A = 0x32; g_cpu.Y = 0x76; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA32(); return;
  case 59: nes_write(0x0000, 0x33); nes_write(0x0001, 0xCA); g_cpu.A = 0x33; g_cpu.Y = 0x78; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA33(); return;
  case 60: nes_write(0x0000, 0x34); nes_write(0x0001, 0xCA); g_cpu.A = 0x34; g_cpu.Y = 0x7A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA34(); return;
  case 61: nes_write(0x0000, 0x35); nes_write(0x0001, 0xCA); g_cpu.A = 0x35; g_cpu.Y = 0x7C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA35(); return;
  case 62: nes_write(0x0000, 0x36); nes_write(0x0001, 0xCA); g_cpu.A = 0x36; g_cpu.Y = 0x7E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA36(); return;
  case 63: nes_write(0x0000, 0x37); nes_write(0x0001, 0xCA); g_cpu.A = 0x37; g_cpu.Y = 0x80; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_CA37(); return;
  case 64: nes_write(0x0000, 0x60); nes_write(0x0001, 0xAD); g_cpu.A = 0x60; g_cpu.Y = 0x82; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); call_by_address_tail(0xAD60, -1); return;
  default: nes_log_inline_miss(0xC7D1, g_cpu.A); return;
}
label_C856:;
    /* $C856: 8F */ maybe_trigger_vblank(4); nes_write(0xF004, g_cpu.A & g_cpu.X); /* SAX */
label_C859:;
    /* $C859: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x20; FLAG_NZ(g_cpu.A);
label_C85B:;
    /* $C85B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF4); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_C85D:;
    /* $C85D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x57 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_C85F:;
    /* $C85F: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x4C + g_cpu.X) & 0xFF), g_cpu.A);
label_C861:;
    /* $C861: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC8 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC8); g_cpu.A=r&0xFF; }
label_C863:;
    /* $C863: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=3 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x03; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b3();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C869:;
    /* $C869: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=3 addr=$8148 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x03; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8148_b3();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C86F:;
    /* $C86F: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=6 addr=$8103 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x06; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8103_b6();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C875:;
    /* $C875: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C220(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C220");
#endif
label_C220:;
    /* $C220: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x20; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C222:;
    /* $C222: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x20E9); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_C225:;
    /* $C225: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xE8) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C227:;
    /* $C227: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E1C0(); g_code_window_base = _swb; }
label_C22A:;
    /* $C22A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC53, -1);
label_C22D:;
    /* $C22D: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C230:;
    /* $C230: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C232:;
    /* $C232: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C235:;
    /* $C235: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C238:;
    /* $C238: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$812A */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_812A_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C23E:;
    /* $C23E: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8112 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8112_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C244:;
    /* $C244: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E72F(); g_code_window_base = _swb; }
label_C247:;
    /* $C247: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C24A:;
    /* $C24A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C24C:;
    /* $C24C: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C24F:;
    /* $C24F: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C252:;
    /* $C252: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E6FC(); g_code_window_base = _swb; }
label_C255:;
    /* $C255: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C258:;
    /* $C258: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C25A:;
    /* $C25A: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C25D:;
    /* $C25D: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C260:;
    /* $C260: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E76D(); g_code_window_base = _swb; }
label_C263:;
    /* $C263: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDDFE, -1);
label_C266:;
    /* $C266: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C269:;
    /* $C269: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C26B:;
    /* $C26B: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C26E:;
    /* $C26E: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C271:;
    /* $C271: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_C273:;
    /* $C273: 8D */ maybe_trigger_vblank(4); nes_write(0x03DB, g_cpu.A);
label_C276:;
    /* $C276: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC7B, -1);
label_C279:;
    /* $C279: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C27C:;
    /* $C27C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C27E:;
    /* $C27E: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C281:;
    /* $C281: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C284:;
    /* $C284: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_C286:;
    /* $C286: 8D */ maybe_trigger_vblank(4); nes_write(0x03DB, g_cpu.A);
label_C289:;
    /* $C289: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC7B, -1);
label_C28C:;
    /* $C28C: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C28F:;
    /* $C28F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C291:;
    /* $C291: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C294:;
    /* $C294: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C297:;
    /* $C297: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_C299:;
    /* $C299: 8D */ maybe_trigger_vblank(4); nes_write(0x03DB, g_cpu.A);
label_C29C:;
    /* $C29C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC7B, -1);
label_C29F:;
    /* $C29F: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C2A2:;
    /* $C2A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C2A4:;
    /* $C2A4: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C2A7:;
    /* $C2A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C2AA:;
    /* $C2AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C2AC:;
    /* $C2AC: 8D */ maybe_trigger_vblank(4); nes_write(0x03DB, g_cpu.A);
label_C2AF:;
    /* $C2AF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDC7B, -1);
label_C2B2:;
    /* $C2B2: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C0(); g_code_window_base = _swb; }
label_C2B5:;
    /* $C2B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C2B7:;
    /* $C2B7: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C2BA:;
    /* $C2BA: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C2BD:;
    /* $C2BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_C2BF:;
    /* $C2BF: 8D */ maybe_trigger_vblank(4); nes_write(0x0455, g_cpu.A);
label_C2C2:;
    /* $C2C2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DB8A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB8A");
#endif
label_DB8A:;
    /* $DB8A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_DB8C:;
    /* $DB8C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DB8F:;
    /* $DB8F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DB90:;
    /* $DB90: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DB91:;
    /* $DB91: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x18); FLAG_NZ(g_cpu.Y);
label_DB93:;
    /* $DB93: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB96:;
    /* $DB96: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DB99:;
    /* $DB99: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DB9A:;
    /* $DB9A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DB9B:;
    /* $DB9B: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DB9D:;
    /* $DB9D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DB93;
    }
label_DB9F:;
    /* $DB9F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DBA1:;
    /* $DBA1: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DBA4:;
    /* $DBA4: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_DBA7:;
    /* $DBA7: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DB8B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB8B");
#endif
label_DB8B:;
    /* $DB8B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x9D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DB8D:;
    /* $DB8D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xDB8D); return;
}

void func_F18B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F18B");
#endif
label_F18B:;
    /* $F18B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x117E), -1); return; }
label_F18D:;
    /* $F18D: 84 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.Y);
label_F18F:;
    /* $F18F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x96); FLAG_NZ(g_cpu.X);
label_F191:;
    /* $F191: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_F193:;
    /* $F193: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_F195:;
    /* $F195: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F196:;
    /* $F196: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E002(); g_code_window_base = _swb; }
label_F199:;
    /* $F199: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFDE, -1);
label_F19C:;
    /* $F19C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_F19E:;
    /* $F19E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1A1:;
    /* $F1A1: 8D */ maybe_trigger_vblank(4); nes_write(0x036D, g_cpu.A);
label_F1A4:;
    /* $F1A4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_F1A6:;
    /* $F1A6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F1AD; }
label_F1A8:;
    /* $F1A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_F1AA:;
    /* $F1AA: 8D */ maybe_trigger_vblank(4); nes_write(0x036D, g_cpu.A);
label_F1AD:;
    /* $F1AD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1B0:;
    /* $F1B0: 8D */ maybe_trigger_vblank(4); nes_write(0x0369, g_cpu.A);
label_F1B3:;
    /* $F1B3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_F1B5:;
    /* $F1B5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F1BC; }
label_F1B7:;
    /* $F1B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1C; FLAG_NZ(g_cpu.A);
label_F1B9:;
    /* $F1B9: 8D */ maybe_trigger_vblank(4); nes_write(0x0369, g_cpu.A);
label_F1BC:;
    /* $F1BC: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBDE(); g_code_window_base = _swb; }
label_F1BF:;
    /* $F1BF: 8D */ maybe_trigger_vblank(4); nes_write(0x036A, g_cpu.A);
label_F1C2:;
    /* $F1C2: 8D */ maybe_trigger_vblank(4); nes_write(0x036E, g_cpu.A);
label_F1C5:;
    /* $F1C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_F1C7:;
    /* $F1C7: 8D */ maybe_trigger_vblank(4); nes_write(0x036F, g_cpu.A);
label_F1CA:;
    /* $F1CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F1CC:;
    /* $F1CC: 8D */ maybe_trigger_vblank(4); nes_write(0x0368, g_cpu.A);
label_F1CF:;
    /* $F1CF: 8D */ maybe_trigger_vblank(4); nes_write(0x036B, g_cpu.A);
label_F1D2:;
    /* $F1D2: 8D */ maybe_trigger_vblank(4); nes_write(0x036C, g_cpu.A);
label_F1D5:;
    /* $F1D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_F1D7:;
    /* $F1D7: 8D */ maybe_trigger_vblank(4); nes_write(0x0370, g_cpu.A);
label_F1DA:;
    /* $F1DA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_F1DD:;
    /* $F1DD: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_F1DF:;
    /* $F1DF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_F1E2:;
    /* $F1E2: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_F1E4:;
    /* $F1E4: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F656(); g_code_window_base = _swb; }
label_F1E7:;
    /* $F1E7: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F1EA:;
    /* $F1EA: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F1ED:;
    /* $F1ED: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F183(); g_code_window_base = _swb; } return;
}

void func_C88C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C88C");
#endif
label_C88C:;
    /* $C88C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C88E:;
    /* $C88E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C8A1; }
label_C890:;
    /* $C890: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_C8A1; }
label_C892:;
    /* $C892: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C894:;
    /* $C894: 8D */ maybe_trigger_vblank(4); nes_write(0x0404, g_cpu.A);
label_C897:;
    /* $C897: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_C899:;
    /* $C899: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_C89B:;
    /* $C89B: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_C89E:;
    /* $C89E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC8AD, -1); return;
label_C8A1:;
    /* $C8A1: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E1C0(); g_code_window_base = _swb; }
label_C8A4:;
    /* $C8A4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDA52, -1);
label_C8A7:;
    /* $C8A7: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0404; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C8AA:;
    /* $C8AA: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0404; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C8AD:;
    /* $C8AD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DB8C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB8C");
#endif
label_DB8C:;
    /* $DB8C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DB8F:;
    /* $DB8F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DB90:;
    /* $DB90: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DB91:;
    /* $DB91: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x18); FLAG_NZ(g_cpu.Y);
label_DB93:;
    /* $DB93: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB96:;
    /* $DB96: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DB99:;
    /* $DB99: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DB9A:;
    /* $DB9A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DB9B:;
    /* $DB9B: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DB9D:;
    /* $DB9D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DB93;
    }
label_DB9F:;
    /* $DB9F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DBA1:;
    /* $DBA1: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DBA4:;
    /* $DBA4: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_DBA7:;
    /* $DBA7: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D098(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D098");
#endif
label_D098:;
    /* $D098: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D09A:;
    /* $D09A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_D09C:;
    /* $D09C: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D0A2:;
    /* $D0A2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EF92(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EF92");
#endif
label_EF92:;
    /* $EF92: 8D */ maybe_trigger_vblank(4); nes_write(0x03A0, g_cpu.A);
label_EF95:;
    /* $EF95: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EE62(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE62");
#endif
label_EE62:;
    /* $EE62: EB */ maybe_trigger_vblank(2); { uint8_t m=0x03; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_EE64:;
    /* $EE64: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03EB); FLAG_NZ(g_cpu.A);
label_EE67:;
    /* $EE67: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E3); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EE6A:;
    /* $EE6A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EE78; }
label_EE6C:;
    /* $EE6C: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x03E2); FLAG_NZ(g_cpu.Y);
label_EE6F:;
    /* $EE6F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x03E3); FLAG_NZ(g_cpu.X);
label_EE72:;
    /* $EE72: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDDB5, -1);
label_EE75:;
    /* $EE75: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EE8B(); g_code_window_base = _swb; } return;
label_EE78:;
    /* $EE78: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E7); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EE7B:;
    /* $EE7B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_EE82; }
label_EE7D:;
    /* $EE7D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EE82; }
label_EE7F:;
    /* $EE7F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EE94(); g_code_window_base = _swb; } return;
label_EE82:;
    /* $EE82: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x03E2); FLAG_NZ(g_cpu.Y);
label_EE85:;
    /* $EE85: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x03EB); FLAG_NZ(g_cpu.X);
label_EE88:;
    /* $EE88: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDD90, -1);
label_EE8B:;
    /* $EE8B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03EB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EE8E:;
    /* $EE8E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03EB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EE91:;
    /* $EE91: 4C */ maybe_trigger_vblank(3); goto label_EE64;
}

void func_EDED(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EDED");
#endif
label_EDED:;
    /* $EDED: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_EDEE:;
    /* $EDEE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_EDF0:;
    /* $EDF0: 8D */ maybe_trigger_vblank(4); nes_write(0x05DE, g_cpu.A);
label_EDF3:;
    /* $EDF3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EE0D(); g_code_window_base = _swb; } return;
}

void func_D0CF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D0CF");
#endif
label_D0CF:;
    /* $D0CF: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x20 + g_cpu.X) & 0xFF), g_cpu.A);
label_D0D1:;
    /* $D0D1: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D0D3:;
    /* $D0D3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D2A9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D2A9");
#endif
label_D2A9:;
    /* $D2A9: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xEEEE; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D2AC:;
    /* $D2AC: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA903 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D2AF:;
    /* $D2AF: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x8D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D2B1:;
    /* $D2B1: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8D05 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D2B4:;
    /* $D2B4: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x8D03 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D2B7:;
    /* $D2B7: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6003 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_D2BA:;
    /* $D2BA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FE); FLAG_NZ(g_cpu.A);
label_D2BD:;
    /* $D2BD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D2C5; }
label_D2BF:;
    /* $D2BF: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03FE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D2C2:;
    /* $D2C2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD2E6, -1); return;
label_D2C5:;
    /* $D2C5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xD049, -1);
label_D2C8:;
    /* $D2C8: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E1C0(); g_code_window_base = _swb; }
label_D2CB:;
    /* $D2CB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0404); FLAG_NZ(g_cpu.A);
label_D2CE:;
    /* $D2CE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D2D6; }
label_D2D0:;
    /* $D2D0: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDA52, -1);
label_D2D3:;
    /* $D2D3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD2D9, -1); return;
label_D2D6:;
    /* $D2D6: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xD8DB, -1);
label_D2D9:;
    /* $D2D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_D2DB:;
    /* $D2DB: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_D2DE:;
    /* $D2DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D2E0:;
    /* $D2E0: 8D */ maybe_trigger_vblank(4); nes_write(0x0404, g_cpu.A);
label_D2E3:;
    /* $D2E3: 8D */ maybe_trigger_vblank(4); nes_write(0x0405, g_cpu.A);
label_D2E6:;
    /* $D2E6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E69D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E69D");
#endif
label_E69D:;
    /* $E69D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69F:;
    /* $E69F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6A1:;
    /* $E6A1: 87 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A & g_cpu.X); /* SAX */
label_E6A3:;
    /* $E6A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E6A5:;
    /* $E6A5: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_E6A8:;
    /* $E6A8: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_E6AA:;
    /* $E6AA: 85 */ maybe_trigger_vblank(3); nes_write(0xA7, g_cpu.A);
label_E6AC:;
    /* $E6AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_E6AE:;
    /* $E6AE: 85 */ maybe_trigger_vblank(3); nes_write(0xA8, g_cpu.A);
label_E6B0:;
    /* $E6B0: 85 */ maybe_trigger_vblank(3); nes_write(0xA9, g_cpu.A);
label_E6B2:;
    /* $E6B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_E6B4:;
    /* $E6B4: 85 */ maybe_trigger_vblank(3); nes_write(0xA1, g_cpu.A);
label_E6B6:;
    /* $E6B6: 85 */ maybe_trigger_vblank(3); nes_write(0xA2, g_cpu.A);
label_E6B8:;
    /* $E6B8: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_E6BA:;
    /* $E6BA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E6BC:;
    /* $E6BC: 8D */ maybe_trigger_vblank(4); nes_write(0x040C, g_cpu.A);
label_E6BF:;
    /* $E6BF: 8D */ maybe_trigger_vblank(4); nes_write(0x040B, g_cpu.A);
label_E6C2:;
    /* $E6C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E6C4:;
    /* $E6C4: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_E6C7:;
    /* $E6C7: 8D */ maybe_trigger_vblank(4); nes_write(0x048F, g_cpu.A);
label_E6CA:;
    /* $E6CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_E6CC:;
    /* $E6CC: 8D */ maybe_trigger_vblank(4); nes_write(0x03C9, g_cpu.A);
label_E6CF:;
    /* $E6CF: 8D */ maybe_trigger_vblank(4); nes_write(0x03CA, g_cpu.A);
label_E6D2:;
    /* $E6D2: 8D */ maybe_trigger_vblank(4); nes_write(0x03CB, g_cpu.A);
label_E6D5:;
    /* $E6D5: 8D */ maybe_trigger_vblank(4); nes_write(0x03CC, g_cpu.A);
label_E6D8:;
    /* $E6D8: 8D */ maybe_trigger_vblank(4); nes_write(0x03CD, g_cpu.A);
label_E6DB:;
    /* $E6DB: 8D */ maybe_trigger_vblank(4); nes_write(0x03CE, g_cpu.A);
label_E6DE:;
    /* $E6DE: 8D */ maybe_trigger_vblank(4); nes_write(0x03CF, g_cpu.A);
label_E6E1:;
    /* $E6E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x35; FLAG_NZ(g_cpu.A);
label_E6E3:;
    /* $E6E3: 8D */ maybe_trigger_vblank(4); nes_write(0x0416, g_cpu.A);
label_E6E6:;
    /* $E6E6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_E6E8:;
    /* $E6E8: 8D */ maybe_trigger_vblank(4); nes_write(0x0418, g_cpu.A);
label_E6EB:;
    /* $E6EB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_E6ED:;
    /* $E6ED: 85 */ maybe_trigger_vblank(3); nes_write(0x9F, g_cpu.A);
label_E6EF:;
    /* $E6EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_E6F1:;
    /* $E6F1: 85 */ maybe_trigger_vblank(3); nes_write(0xA0, g_cpu.A);
label_E6F3:;
    /* $E6F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E6F5:;
    /* $E6F5: 85 */ maybe_trigger_vblank(3); nes_write(0x61, g_cpu.A);
label_E6F7:;
    /* $E6F7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E6F9:;
    /* $E6F9: 85 */ maybe_trigger_vblank(3); nes_write(0x62, g_cpu.A);
label_E6FB:;
    /* $E6FB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CF9D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CF9D");
#endif
label_CF9D:;
    /* $CF9D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_CF9E:;
    /* $CF9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x18); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CFA0:;
    /* $CFA0: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x0419; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CFA3:;
    /* $CFA3: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x0418; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CFA6:;
    /* $CFA6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_CFA8:;
    /* $CFA8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFC7; }
label_CFAA:;
    /* $CFAA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_CFAC:;
    /* $CFAC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_CFAE:;
    /* $CFAE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFB7; }
label_CFB0:;
    /* $CFB0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F5); FLAG_NZ(g_cpu.A);
label_CFB3:;
    /* $CFB3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_CFB5:;
    /* $CFB5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFC7; }
label_CFB7:;
    /* $CFB7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F5); FLAG_NZ(g_cpu.A);
label_CFBA:;
    /* $CFBA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFC7; }
label_CFBC:;
    /* $CFBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CFBE:;
    /* $CFBE: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFC1:;
    /* $CFC1: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03F5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CFC4:;
    /* $CFC4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFC7:;
    /* $CFC7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_CFC9:;
    /* $CFC9: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_CFCC:;
    /* $CFCC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_CFCE:;
    /* $CFCE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_CFD0:;
    /* $CFD0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D008; }
label_CFD2:;
    /* $CFD2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_CFD4:;
    /* $CFD4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFD5:;
    /* $CFD5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFDF; }
label_CFD7:;
    /* $CFD7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CFD9:;
    /* $CFD9: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFDC:;
    /* $CFDC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFDF:;
    /* $CFDF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFE0:;
    /* $CFE0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFEA; }
label_CFE2:;
    /* $CFE2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CFE4:;
    /* $CFE4: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFE7:;
    /* $CFE7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFEA:;
    /* $CFEA: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFEB:;
    /* $CFEB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFF5; }
label_CFED:;
    /* $CFED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_CFEF:;
    /* $CFEF: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFF2:;
    /* $CFF2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFF5:;
    /* $CFF5: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFF6:;
    /* $CFF6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_D000; }
label_CFF8:;
    /* $CFF8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CFFA:;
    /* $CFFA: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFFD:;
    /* $CFFD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D000:;
    /* $D000: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_D002:;
    /* $D002: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D005:;
    /* $D005: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D008:;
    /* $D008: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_D00A:;
    /* $D00A: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_D00D:;
    /* $D00D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_D00F:;
    /* $D00F: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_D012:;
    /* $D012: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D013:;
    /* $D013: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D01D; }
label_D015:;
    /* $D015: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_D017:;
    /* $D017: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D01A:;
    /* $D01A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D01D:;
    /* $D01D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D01E:;
    /* $D01E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D028; }
label_D020:;
    /* $D020: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_D022:;
    /* $D022: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D025:;
    /* $D025: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D028:;
    /* $D028: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D029:;
    /* $D029: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D033; }
label_D02B:;
    /* $D02B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_D02D:;
    /* $D02D: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D030:;
    /* $D030: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D033:;
    /* $D033: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D034:;
    /* $D034: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D03E; }
label_D036:;
    /* $D036: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_D038:;
    /* $D038: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D03B:;
    /* $D03B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D03E:;
    /* $D03E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D040:;
    /* $D040: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D043:;
    /* $D043: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D045:;
    /* $D045: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_D048:;
    /* $D048: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CF9E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CF9E");
#endif
label_CF9E:;
    /* $CF9E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x18); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CFA0:;
    /* $CFA0: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x0419; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CFA3:;
    /* $CFA3: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x0418; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CFA6:;
    /* $CFA6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_CFA8:;
    /* $CFA8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFC7; }
label_CFAA:;
    /* $CFAA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_CFAC:;
    /* $CFAC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_CFAE:;
    /* $CFAE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFB7; }
label_CFB0:;
    /* $CFB0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F5); FLAG_NZ(g_cpu.A);
label_CFB3:;
    /* $CFB3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_CFB5:;
    /* $CFB5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFC7; }
label_CFB7:;
    /* $CFB7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F5); FLAG_NZ(g_cpu.A);
label_CFBA:;
    /* $CFBA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFC7; }
label_CFBC:;
    /* $CFBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CFBE:;
    /* $CFBE: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFC1:;
    /* $CFC1: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03F5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CFC4:;
    /* $CFC4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFC7:;
    /* $CFC7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_CFC9:;
    /* $CFC9: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_CFCC:;
    /* $CFCC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_CFCE:;
    /* $CFCE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_CFD0:;
    /* $CFD0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D008; }
label_CFD2:;
    /* $CFD2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_CFD4:;
    /* $CFD4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFD5:;
    /* $CFD5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFDF; }
label_CFD7:;
    /* $CFD7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CFD9:;
    /* $CFD9: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFDC:;
    /* $CFDC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFDF:;
    /* $CFDF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFE0:;
    /* $CFE0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFEA; }
label_CFE2:;
    /* $CFE2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CFE4:;
    /* $CFE4: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFE7:;
    /* $CFE7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFEA:;
    /* $CFEA: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFEB:;
    /* $CFEB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CFF5; }
label_CFED:;
    /* $CFED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_CFEF:;
    /* $CFEF: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFF2:;
    /* $CFF2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_CFF5:;
    /* $CFF5: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CFF6:;
    /* $CFF6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_D000; }
label_CFF8:;
    /* $CFF8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CFFA:;
    /* $CFFA: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_CFFD:;
    /* $CFFD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D000:;
    /* $D000: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_D002:;
    /* $D002: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D005:;
    /* $D005: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D008:;
    /* $D008: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_D00A:;
    /* $D00A: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_D00D:;
    /* $D00D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_D00F:;
    /* $D00F: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_D012:;
    /* $D012: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D013:;
    /* $D013: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D01D; }
label_D015:;
    /* $D015: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_D017:;
    /* $D017: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D01A:;
    /* $D01A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D01D:;
    /* $D01D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D01E:;
    /* $D01E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D028; }
label_D020:;
    /* $D020: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_D022:;
    /* $D022: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D025:;
    /* $D025: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D028:;
    /* $D028: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D029:;
    /* $D029: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D033; }
label_D02B:;
    /* $D02B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_D02D:;
    /* $D02D: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D030:;
    /* $D030: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D033:;
    /* $D033: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D034:;
    /* $D034: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D03E; }
label_D036:;
    /* $D036: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_D038:;
    /* $D038: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D03B:;
    /* $D03B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD043, -1); return;
label_D03E:;
    /* $D03E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D040:;
    /* $D040: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_D043:;
    /* $D043: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D045:;
    /* $D045: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_D048:;
    /* $D048: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C80F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C80F");
#endif
label_C80F:;
    /* $C80F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB2; g_cpu.C=(g_cpu.A>=0xB2)?1:0; FLAG_NZ(r&0xFF); }
label_C811:;
    /* $C811: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB3; g_cpu.C=(g_cpu.A>=0xB3)?1:0; FLAG_NZ(r&0xFF); }
label_C813:;
    /* $C813: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB4; g_cpu.C=(g_cpu.A>=0xB4)?1:0; FLAG_NZ(r&0xFF); }
label_C815:;
    /* $C815: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB5; g_cpu.C=(g_cpu.A>=0xB5)?1:0; FLAG_NZ(r&0xFF); }
label_C817:;
    /* $C817: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB6; g_cpu.C=(g_cpu.A>=0xB6)?1:0; FLAG_NZ(r&0xFF); }
label_C819:;
    /* $C819: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFB; g_cpu.C=(g_cpu.A>=0xFB)?1:0; FLAG_NZ(r&0xFF); }
label_C81B:;
    /* $C81B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFC; g_cpu.C=(g_cpu.A>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_C81D:;
    /* $C81D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFD; g_cpu.C=(g_cpu.A>=0xFD)?1:0; FLAG_NZ(r&0xFF); }
label_C81F:;
    /* $C81F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFE; g_cpu.C=(g_cpu.A>=0xFE)?1:0; FLAG_NZ(r&0xFF); }
label_C821:;
    /* $C821: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_C823:;
    /* $C823: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x00; g_cpu.C=(g_cpu.A>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_C825:;
    /* $C825: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C826:;
    /* $C826: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_C828:;
    /* $C828: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_C829:;
    /* $C829: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C82A:;
    /* $C82A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_C82C:;
    /* $C82C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xCA); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C82E:;
    /* $C82E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xCA); FLAG_NZ(g_cpu.A);
label_C830:;
    /* $C830: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xCA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C832:;
    /* $C832: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xCA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_C834:;
    /* $C834: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_C835:;
    /* $C835: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C836:;
    /* $C836: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xCA; FLAG_NZ(g_cpu.A);
label_C838:;
    /* $C838: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C839:;
    /* $C839: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C83A:;
    /* $C83A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x21CA, -1);
label_C83D:;
    /* $C83D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C83E:;
    /* $C83E: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_C83F:;
    /* $C83F: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C840:;
    /* $C840: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C842:;
    /* $C842: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_C843:;
    /* $C843: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C844:;
    /* $C844: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_C845:;
    /* $C845: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C846:;
    /* $C846: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xCA) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C848:;
    /* $C848: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_C849:;
    /* $C849: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C84A:;
    /* $C84A: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCA) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C84C:;
    /* $C84C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xCA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C84E:;
    /* $C84E: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xCA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_C850:;
    /* $C850: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xCA + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C852:;
    /* $C852: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0xCA + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C854:;
    /* $C854: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F138(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F138");
#endif
label_F138:;
    /* $F138: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F139:;
    /* $F139: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F140; }
label_F13B:;
    /* $F13B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_F13D:;
    /* $F13D: 8D */ maybe_trigger_vblank(4); nes_write(0x036D, g_cpu.A);
label_F140:;
    /* $F140: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_F142:;
    /* $F142: 8D */ maybe_trigger_vblank(4); nes_write(0x036C, g_cpu.A);
label_F145:;
    /* $F145: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F147:;
    /* $F147: 8D */ maybe_trigger_vblank(4); nes_write(0x0368, g_cpu.A);
label_F14A:;
    /* $F14A: 8D */ maybe_trigger_vblank(4); nes_write(0x036B, g_cpu.A);
label_F14D:;
    /* $F14D: 8D */ maybe_trigger_vblank(4); nes_write(0x036F, g_cpu.A);
label_F150:;
    /* $F150: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_F152:;
    /* $F152: 8D */ maybe_trigger_vblank(4); nes_write(0x0370, g_cpu.A);
label_F155:;
    /* $F155: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_F158:;
    /* $F158: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_F15A:;
    /* $F15A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_F15D:;
    /* $F15D: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_F15F:;
    /* $F15F: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F656(); g_code_window_base = _swb; }
label_F162:;
    /* $F162: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F165:;
    /* $F165: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F168:;
    /* $F168: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F0F9(); g_code_window_base = _swb; } return;
}

void func_F4CE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F4CE");
#endif
label_F4CE:;
    /* $F4CE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x68A8, -1);
label_F4D1:;
    /* $F4D1: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_F4D4:;
    /* $F4D4: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_F4D6:;
    /* $F4D6: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F4D7:;
    /* $F4D7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_F4E9; }
label_F4D9:;
    /* $F4D9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_F4DB:;
    /* $F4DB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x14A1), -1); return; }
label_F4DD:;
    /* $F4DD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_F4DF:;
    /* $F4DF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F4E0:;
    /* $F4E0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE1); FLAG_NZ(g_cpu.A);
label_F4E2:;
    /* $F4E2: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_F4E4:;
    /* $F4E4: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_F4E7:;
    /* $F4E7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F4EF; }
label_F4E9:;
    /* $F4E9: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F4EA:;
    /* $F4EA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE1); FLAG_NZ(g_cpu.A);
label_F4EC:;
    /* $F4EC: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_F4EF:;
    /* $F4EF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F4F0:;
    /* $F4F0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_F4F3:;
    /* $F4F3: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_F4F4:;
    /* $F4F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F4EF;
    }
label_F4F6:;
    /* $F4F6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C9(); g_code_window_base = _swb; } return;
}

void func_C4A3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C4A3");
#endif
label_C4A3:;
    /* $C4A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_C4A5:;
    /* $C4A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_C4A7:;
    /* $C4A7: 8D */ maybe_trigger_vblank(4); nes_write(0x04A6, g_cpu.A);
label_C4AA:;
    /* $C4AA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_C4AD:;
    /* $C4AD: 8D */ maybe_trigger_vblank(4); nes_write(0x0425, g_cpu.A);
label_C4B0:;
    /* $C4B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFB; FLAG_NZ(g_cpu.A);
label_C4B2:;
    /* $C4B2: 8D */ maybe_trigger_vblank(4); nes_write(0x0424, g_cpu.A);
label_C4B5:;
    /* $C4B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C4B7:;
    /* $C4B7: 85 */ maybe_trigger_vblank(3); nes_write(0xAC, g_cpu.A);
label_C4B9:;
    /* $C4B9: 85 */ maybe_trigger_vblank(3); nes_write(0xAD, g_cpu.A);
label_C4BB:;
    /* $C4BB: 85 */ maybe_trigger_vblank(3); nes_write(0xAA, g_cpu.A);
label_C4BD:;
    /* $C4BD: 85 */ maybe_trigger_vblank(3); nes_write(0xAB, g_cpu.A);
label_C4BF:;
    /* $C4BF: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_C4C1:;
    /* $C4C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C4C3:;
    /* $C4C3: 85 */ maybe_trigger_vblank(3); nes_write(0x9B, g_cpu.A);
label_C4C5:;
    /* $C4C5: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C4C7:;
    /* $C4C7: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C4C9:;
    /* $C4C9: 85 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.A);
label_C4CB:;
    /* $C4CB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C5A3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C5A3");
#endif
label_C5A3:;
    /* $C5A3: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x06 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C5A5:;
    /* $C5A5: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x2081); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C5A8:;
    /* $C5A8: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xF5 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C5AA:;
    /* $C5AA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D9); FLAG_NZ(g_cpu.A);
label_C5AD:;
    /* $C5AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_C5AF:;
    /* $C5AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C5BA; }
label_C5B1:;
    /* $C5B1: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81C3 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81C3_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C5B7:;
    /* $C5B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC5C0, -1); return;
label_C5BA:;
    /* $C5BA: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81C9 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81C9_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C5C0:;
    /* $C5C0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C7A3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C7A3");
#endif
label_C7A3:;
    /* $C7A3: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8D03 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C7A6:;
    /* $C7A6: 8E */ maybe_trigger_vblank(4); nes_write(0xA904, g_cpu.X);
label_C7A9:;
    /* $C7A9: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x8D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_C7AB:;
    /* $C7AB: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8D03 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C7AE:;
    /* $C7AE: 95 */ maybe_trigger_vblank(4); nes_write((0x04 + g_cpu.X) & 0xFF, g_cpu.A);
label_C7B0:;
    /* $C7B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C7B2:;
    /* $C7B2: 8D */ maybe_trigger_vblank(4); nes_write(0x05E2, g_cpu.A);
label_C7B5:;
    /* $C7B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_C7B7:;
    /* $C7B7: 8D */ maybe_trigger_vblank(4); nes_write(0x05E3, g_cpu.A);
label_C7BA:;
    /* $C7BA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_C7BC:;
    /* $C7BC: 8D */ maybe_trigger_vblank(4); nes_write(0x05F0, g_cpu.A);
label_C7BF:;
    /* $C7BF: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C7C5:;
    /* $C7C5: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81AE */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81AE_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C7CB:;
    /* $C7CB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC854, -1); return;
}

void func_E8F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8F8");
#endif
label_E8F8:;
    /* $E8F8: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xA0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E8FA:;
    /* $E8FA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE8FA); return;
}

void func_E880(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E880");
#endif
label_E880:;
    /* $E880: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x85); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E882:;
    /* $E882: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xA9 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_E884:;
    /* $E884: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE884); return;
}

void func_EC08(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EC08");
#endif
label_EC08:;
    /* $EC08: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_EC0F; }
label_EC0A:;
    /* $EC0A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EC0F; }
label_EC0C:;
    /* $EC0C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EC46(); g_code_window_base = _swb; } return;
label_EC0F:;
    /* $EC0F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_EC12:;
    /* $EC12: 8D */ maybe_trigger_vblank(4); nes_write(0x03E9, g_cpu.A);
label_EC15:;
    /* $EC15: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E8); FLAG_NZ(g_cpu.A);
label_EC18:;
    /* $EC18: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_EC19:;
    /* $EC19: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_EC1A:;
    /* $EC1A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_EC1B:;
    /* $EC1B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_EC1C:;
    /* $EC1C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_EC1D:;
    /* $EC1D: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E9); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_EC20:;
    /* $EC20: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_EC21:;
    /* $EC21: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EC24:;
    /* $EC24: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_EC26:;
    /* $EC26: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EC30; }
label_EC28:;
    /* $EC28: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_EC2A:;
    /* $EC2A: 8D */ maybe_trigger_vblank(4); nes_write(0x03F4, g_cpu.A);
label_EC2D:;
    /* $EC2D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EC46(); g_code_window_base = _swb; } return;
label_EC30:;
    /* $EC30: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EC33:;
    /* $EC33: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EC36:;
    /* $EC36: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E9); FLAG_NZ(g_cpu.A);
label_EC39:;
    /* $EC39: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFE; g_cpu.C=(g_cpu.A>=0xFE)?1:0; FLAG_NZ(r&0xFF); }
label_EC3B:;
    /* $EC3B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EC15;
    }
label_EC3D:;
    /* $EC3D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EC40:;
    /* $EC40: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EC43:;
    /* $EC43: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EC02(); g_code_window_base = _swb; } return;
}

void func_C1F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1F8");
#endif
label_C1F8:;
    /* $C1F8: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C1FA:;
    /* $C1FA: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x20 + g_cpu.X) & 0xFF), g_cpu.A);
label_C1FC:;
    /* $C1FC: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xF5 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C1FE:;
    /* $C1FE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C0F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C0F8");
#endif
label_C0F8:;
    /* $C0F8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C0FA:;
    /* $C0FA: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xA904); FLAG_NZ(g_cpu.Y);
label_C0FD:;
    /* $C0FD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_C0FF:;
    /* $C0FF: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA903 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C102:;
    /* $C102: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC102); return;
}

void func_C077(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C077");
#endif
label_C077:;
    /* $C077: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA9 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C079:;
    /* $C079: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC079); return;
}

void func_C076(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C076");
#endif
label_C076:;
    /* $C076: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xA9F5; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C079:;
    /* $C079: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC079); return;
}

void func_C0E8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C0E8");
#endif
label_C0E8:;
    /* $C0E8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C0EA:;
    /* $C0EA: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x8D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_C0EC:;
    /* $C0EC: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C0EE:;
    /* $C0EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C0F0:;
    /* $C0F0: 8D */ maybe_trigger_vblank(4); nes_write(0x040F, g_cpu.A);
label_C0F3:;
    /* $C0F3: 8D */ maybe_trigger_vblank(4); nes_write(0x0410, g_cpu.A);
label_C0F6:;
    /* $C0F6: 8D */ maybe_trigger_vblank(4); nes_write(0x04AB, g_cpu.A);
label_C0F9:;
    /* $C0F9: 8D */ maybe_trigger_vblank(4); nes_write(0x04AC, g_cpu.A);
label_C0FC:;
    /* $C0FC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C0FE:;
    /* $C0FE: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_C101:;
    /* $C101: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C103:;
    /* $C103: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_C106:;
    /* $C106: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F497(); g_code_window_base = _swb; }
label_C109:;
    /* $C109: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F485(); g_code_window_base = _swb; }
label_C10C:;
    /* $C10C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC136, -1);
label_C10F:;
    /* $C10F: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F54B(); g_code_window_base = _swb; }
label_C112:;
    /* $C112: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C114:;
    /* $C114: 85 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.A);
label_C116:;
    /* $C116: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D9); FLAG_NZ(g_cpu.A);
label_C119:;
    /* $C119: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_C11B:;
    /* $C11B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C124; }
label_C11D:;
    /* $C11D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_C11F:;
    /* $C11F: 85 */ maybe_trigger_vblank(3); nes_write(0xE0, g_cpu.A);
label_C121:;
    /* $C121: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC12B, -1); return;
label_C124:;
    /* $C124: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x32; g_cpu.C=(g_cpu.A>=0x32)?1:0; FLAG_NZ(r&0xFF); }
label_C126:;
    /* $C126: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C11D;
    }
label_C128:;
    /* $C128: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F480(); g_code_window_base = _swb; }
label_C12B:;
    /* $C12B: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F48D(); g_code_window_base = _swb; }
label_C12E:;
    /* $C12E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03DA); FLAG_NZ(g_cpu.A);
label_C131:;
    /* $C131: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C12E;
    }
label_C133:;
    /* $C133: 4C */ maybe_trigger_vblank(3); goto label_C101;
}

void func_C1E8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1E8");
#endif
label_C1E8:;
    /* $C1E8: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8D03 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C1EB:;
    /* $C1EB: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x8D05); FLAG_NZ(g_cpu.A);
label_C1EE:;
    /* $C1EE: 2E */ maybe_trigger_vblank(6); { uint16_t a=0xA905; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C1F1:;
    /* $C1F1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0180), -1); return; }
label_C1F3:;
    /* $C1F3: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C1F5:;
    /* $C1F5: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=6 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x06; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b6();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C1FB:;
    /* $C1FB: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F516(); g_code_window_base = _swb; }
label_C1FE:;
    /* $C1FE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E0F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0F8");
#endif
label_E0F8:;
    /* $E0F8: 9D */ maybe_trigger_vblank(5); nes_write((0x03A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E0FB:;
    /* $E0FB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_E0FC:;
    /* $E0FC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x15; g_cpu.C=(g_cpu.X>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_E0FE:;
    /* $E0FE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E0F8;
    }
label_E100:;
    /* $E100: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_E102:;
    /* $E102: 8D */ maybe_trigger_vblank(4); nes_write(0x03A1, g_cpu.A);
label_E105:;
    /* $E105: 8D */ maybe_trigger_vblank(4); nes_write(0x03A5, g_cpu.A);
label_E108:;
    /* $E108: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_E10B:;
    /* $E10B: 8D */ maybe_trigger_vblank(4); nes_write(0x03AD, g_cpu.A);
label_E10E:;
    /* $E10E: 8D */ maybe_trigger_vblank(4); nes_write(0x03B1, g_cpu.A);
label_E111:;
    /* $E111: 8D */ maybe_trigger_vblank(4); nes_write(0x03B5, g_cpu.A);
label_E114:;
    /* $E114: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E115:;
    /* $E115: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E116:;
    /* $E116: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E3F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E3F8");
#endif
label_E3F8:;
    /* $E3F8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_E3FA:;
    /* $E3FA: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E3FB:;
    /* $E3FB: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_E3FD:;
    /* $E3FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E3FF:;
    /* $E3FF: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_E401:;
    /* $E401: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_E403:;
    /* $E403: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E406:;
    /* $E406: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E407:;
    /* $E407: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E408:;
    /* $E408: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E409:;
    /* $E409: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E40A:;
    /* $E40A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E40B:;
    /* $E40B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E40E:;
    /* $E40E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_E410:;
    /* $E410: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E414; }
label_E412:;
    /* $E412: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xB5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E414:;
    /* $E414: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E415:;
    /* $E415: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E416:;
    /* $E416: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E418:;
    /* $E418: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E40B;
    }
label_E41A:;
    /* $E41A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E41B:;
    /* $E41B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E41C:;
    /* $E41C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F3F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F3F8");
#endif
label_F3F8:;
    /* $F3F8: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F3FA:;
    /* $F3FA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_F405; }
label_F3FC:;
    /* $F3FC: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E2; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F3FF:;
    /* $F3FF: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E2; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F402:;
    /* $F402: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F40B(); g_code_window_base = _swb; } return;
label_F405:;
    /* $F405: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_F408:;
    /* $F408: 8D */ maybe_trigger_vblank(4); nes_write(0x03E2, g_cpu.A);
label_F40B:;
    /* $F40B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E3A4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E3A4");
#endif
label_E3A4:;
    /* $E3A4: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E3A6:;
    /* $E3A6: 8D */ maybe_trigger_vblank(4); nes_write(0x03E7, g_cpu.A);
label_E3A9:;
    /* $E3A9: 8D */ maybe_trigger_vblank(4); nes_write(0x0497, g_cpu.A);
label_E3AC:;
    /* $E3AC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E3F4(); g_code_window_base = _swb; } return;
}

void func_E2A6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E2A6");
#endif
label_E2A6:;
    /* $E2A6: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E2A8:;
    /* $E2A8: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0005 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E2AB:;
    /* $E2AB: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_E2AE:;
    /* $E2AE: 85 */ maybe_trigger_vblank(3); nes_write(0xE1, g_cpu.A);
label_E2B0:;
    /* $E2B0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F3A4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F3A4");
#endif
label_F3A4:;
    /* $F3A4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F3A7:;
    /* $F3A7: 99 */ maybe_trigger_vblank(5); nes_write((0x01F1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F3AA:;
    /* $F3AA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F38C(); g_code_window_base = _swb; } return;
}

void func_C2E7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2E7");
#endif
label_C2E7:;
    /* $C2E7: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0276), -1); return; }
label_C2E9:;
    /* $C2E9: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x05 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_C2EB:;
    /* $C2EB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C2ED:;
    /* $C2ED: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C2F0:;
    /* $C2F0: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81C6 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81C6_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C2F6:;
    /* $C2F6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E9F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E9F8");
#endif
label_E9F8:;
    /* $E9F8: 99 */ maybe_trigger_vblank(5); nes_write((0x03A5 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E9FB:;
    /* $E9FB: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_E9FD:;
    /* $E9FD: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E49F(); g_code_window_base = _swb; }
label_EA00:;
    /* $EA00: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_EA02:;
    /* $EA02: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_EA04:;
    /* $EA04: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EA06:;
    /* $EA06: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_EA09:;
    /* $EA09: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_EA0B:;
    /* $EA0B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_EA11; }
label_EA0D:;
    /* $EA0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_EA0F:;
    /* $EA0F: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_EA11:;
    /* $EA11: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_EA13:;
    /* $EA13: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EA15:;
    /* $EA15: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EA1F; }
label_EA17:;
    /* $EA17: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_EA19:;
    /* $EA19: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_EA1B:;
    /* $EA1B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_EA1D:;
    /* $EA1D: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_EA1F:;
    /* $EA1F: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8127 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8127_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_EA25:;
    /* $EA25: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xE0; FLAG_NZ(g_cpu.Y);
label_EA27:;
    /* $EA27: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_EA29:;
    /* $EA29: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EA2C:;
    /* $EA2C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_EA2E:;
    /* $EA2E: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EA31:;
    /* $EA31: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_EA33:;
    /* $EA33: 99 */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EA36:;
    /* $EA36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_EA38:;
    /* $EA38: 99 */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EA3B:;
    /* $EA3B: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EA3D:;
    /* $EA3D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_EA3F:;
    /* $EA3F: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_EA41:;
    /* $EA41: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EA43:;
    /* $EA43: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE2; FLAG_NZ(g_cpu.A);
label_EA45:;
    /* $EA45: 8D */ maybe_trigger_vblank(4); nes_write(0x041C, g_cpu.A);
label_EA48:;
    /* $EA48: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_EA4A:;
    /* $EA4A: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EA4C:;
    /* $EA4C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EA57; }
label_EA4E:;
    /* $EA4E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041C); FLAG_NZ(g_cpu.A);
label_EA51:;
    /* $EA51: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_EA53:;
    /* $EA53: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_EA55:;
    /* $EA55: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_EA57:;
    /* $EA57: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8127 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8127_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_EA5D:;
    /* $EA5D: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x041C); FLAG_NZ(g_cpu.Y);
label_EA60:;
    /* $EA60: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x01FE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EA63:;
    /* $EA63: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x91); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EA65:;
    /* $EA65: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EA57;
    }
label_EA67:;
    /* $EA67: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_EA69:;
    /* $EA69: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EA6C:;
    /* $EA6C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_EA6E:;
    /* $EA6E: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EA71:;
    /* $EA71: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_EA73:;
    /* $EA73: 99 */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EA76:;
    /* $EA76: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_EA78:;
    /* $EA78: 99 */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EA7B:;
    /* $EA7B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_EA7C:;
    /* $EA7C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_EA7D:;
    /* $EA7D: 8C */ maybe_trigger_vblank(4); nes_write(0x041C, g_cpu.Y);
label_EA80:;
    /* $EA80: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EA82:;
    /* $EA82: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EA84:;
    /* $EA84: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EA48;
    }
label_EA86:;
    /* $EA86: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_EA88:;
    /* $EA88: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_EA8A:;
    /* $EA8A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_EA8C:;
    /* $EA8C: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_EA8E:;
    /* $EA8E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EA90:;
    /* $EA90: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_EA92:;
    /* $EA92: 8D */ maybe_trigger_vblank(4); nes_write(0x041C, g_cpu.A);
label_EA95:;
    /* $EA95: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_EA97:;
    /* $EA97: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_EA99:;
    /* $EA99: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_EA9B:;
    /* $EA9B: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EA9D:;
    /* $EA9D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EAA8; }
label_EA9F:;
    /* $EA9F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041C); FLAG_NZ(g_cpu.A);
label_EAA2:;
    /* $EAA2: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_EAA4:;
    /* $EAA4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_EAA6:;
    /* $EAA6: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_EAA8:;
    /* $EAA8: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8127 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8127_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_EAAE:;
    /* $EAAE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041C); FLAG_NZ(g_cpu.A);
label_EAB1:;
    /* $EAB1: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_EAB2:;
    /* $EAB2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_EAB4:;
    /* $EAB4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EABD; }
label_EAB6:;
    /* $EAB6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x01FE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EAB9:;
    /* $EAB9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x91); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EABB:;
    /* $EABB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EAA8;
    }
label_EABD:;
    /* $EABD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0220 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EAC0:;
    /* $EAC0: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x91); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EAC2:;
    /* $EAC2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EAA8;
    }
label_EAC4:;
    /* $EAC4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_EAC6:;
    /* $EAC6: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EAC9:;
    /* $EAC9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_EACB:;
    /* $EACB: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EACE:;
    /* $EACE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_EAD0:;
    /* $EAD0: 99 */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EAD3:;
    /* $EAD3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_EAD5:;
    /* $EAD5: 99 */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EAD8:;
    /* $EAD8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_EAD9:;
    /* $EAD9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_EADA:;
    /* $EADA: 8C */ maybe_trigger_vblank(4); nes_write(0x041C, g_cpu.Y);
label_EADD:;
    /* $EADD: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EADF:;
    /* $EADF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EAE1:;
    /* $EAE1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EA99;
    }
label_EAE3:;
    /* $EAE3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_EAE5:;
    /* $EAE5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_EAE6:;
    /* $EAE6: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x20; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_EAE8:;
    /* $EAE8: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_EAEA:;
    /* $EAEA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EAEC:;
    /* $EAEC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EA90;
    }
label_EAEE:;
    /* $EAEE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_EAF1:;
    /* $EAF1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_EAF3:;
    /* $EAF3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_EB0B; }
label_EAF5:;
    /* $EAF5: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x05); FLAG_NZ(g_cpu.Y);
label_EAF7:;
    /* $EAF7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_EAF9:;
    /* $EAF9: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EAFC:;
    /* $EAFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_EAFE:;
    /* $EAFE: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EB01:;
    /* $EB01: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_EB03:;
    /* $EB03: 99 */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EB06:;
    /* $EB06: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_EB08:;
    /* $EB08: 99 */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EB0B:;
    /* $EB0B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C2E9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2E9");
#endif
label_C2E9:;
    /* $C2E9: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x05 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_C2EB:;
    /* $C2EB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C2ED:;
    /* $C2ED: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C2F0:;
    /* $C2F0: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81C6 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81C6_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C2F6:;
    /* $C2F6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DDF8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DDF8");
#endif
label_DDF8:;
    /* $DDF8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x68); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DDFA:;
    /* $DDFA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DDFB:;
    /* $DDFB: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DDFC:;
    /* $DDFC: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_DDFD:;
    /* $DDFD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EAF8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EAF8");
#endif
label_EAF8:;
    /* $EAF8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_EAF9:;
    /* $EAF9: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EAFC:;
    /* $EAFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_EAFE:;
    /* $EAFE: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EB01:;
    /* $EB01: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_EB03:;
    /* $EB03: 99 */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EB06:;
    /* $EB06: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_EB08:;
    /* $EB08: 99 */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EB0B:;
    /* $EB0B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C2EA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2EA");
#endif
label_C2EA:;
    /* $C2EA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_C2EC:;
    /* $C2EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC2EC); return;
}

void func_ECEC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ECEC");
#endif
label_ECEC:;
    /* $ECEC: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_ECEE:;
    /* $ECEE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ECEF:;
    /* $ECEF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ECF0:;
    /* $ECF0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ECF1:;
    /* $ECF1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ECF2:;
    /* $ECF2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ECF3:;
    /* $ECF3: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E9); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ECF6:;
    /* $ECF6: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ECF7:;
    /* $ECF7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ECFA:;
    /* $ECFA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_ECFC:;
    /* $ECFC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_ED08; }
label_ECFE:;
    /* $ECFE: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_ECFF:;
    /* $ECFF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ED00:;
    /* $ED00: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_ED02:;
    /* $ED02: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ED03:;
    /* $ED03: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_ED2A; }
label_ED05:;
    /* $ED05: 4C */ maybe_trigger_vblank(3); goto label_ECF7;
label_ED08:;
    /* $ED08: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_ED09:;
    /* $ED09: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ED0A:;
    /* $ED0A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_ED0C:;
    /* $ED0C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_ED2A; }
label_ED0E:;
    /* $ED0E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ED11:;
    /* $ED11: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_ED13:;
    /* $ED13: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_ED14:;
    /* $ED14: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ED15:;
    /* $ED15: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_ED17:;
    /* $ED17: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ED18:;
    /* $ED18: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ED1B:;
    /* $ED1B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_ED1D:;
    /* $ED1D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ED23; }
label_ED1F:;
    /* $ED1F: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_ED21:;
    /* $ED21: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_ED39; }
label_ED23:;
    /* $ED23: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_ED24:;
    /* $ED24: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ED25:;
    /* $ED25: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_ED27:;
    /* $ED27: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ED28:;
    /* $ED28: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ED18;
    }
label_ED2A:;
    /* $ED2A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x6C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ED2C:;
    /* $ED2C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x6C); FLAG_NZ(g_cpu.Y);
label_ED2E:;
    /* $ED2E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E9); FLAG_NZ(g_cpu.A);
label_ED31:;
    /* $ED31: 99 */ maybe_trigger_vblank(5); nes_write((0x006C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ED34:;
    /* $ED34: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_ED36:;
    /* $ED36: 8D */ maybe_trigger_vblank(4); nes_write(0x03F4, g_cpu.A);
label_ED39:;
    /* $ED39: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E9); FLAG_NZ(g_cpu.A);
label_ED3C:;
    /* $ED3C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ED3D:;
    /* $ED3D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_ED3F:;
    /* $ED3F: 8D */ maybe_trigger_vblank(4); nes_write(0x03E9, g_cpu.A);
label_ED42:;
    /* $ED42: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_ECDE(); g_code_window_base = _swb; } return;
}

void func_F402(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F402");
#endif
label_F402:;
    /* $F402: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F40B(); g_code_window_base = _swb; } return;
}

void func_D8F4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D8F4");
#endif
label_D8F4:;
    /* $D8F4: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x9D; g_cpu.C=(g_cpu.Y>=0x9D)?1:0; FLAG_NZ(r&0xFF); }
label_D8F6:;
    /* $D8F6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xD8F6); return;
}

void func_D8FC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D8FC");
#endif
label_D8FC:;
    /* $D8FC: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xA9 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_D8FE:;
    /* $D8FE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D900:;
    /* $D900: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xD900); return;
}

void func_E0EC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0EC");
#endif
label_E0EC:;
    /* $E0EC: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_E0ED:;
    /* $E0ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_E0EF:;
    /* $E0EF: 8D */ maybe_trigger_vblank(4); nes_write(0x0370, g_cpu.A);
label_E0F2:;
    /* $E0F2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E0FC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0FC");
#endif
label_E0FC:;
    /* $E0FC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x15; g_cpu.C=(g_cpu.X>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_E0FE:;
    /* $E0FE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x00F8), -1); return; }
label_E100:;
    /* $E100: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_E102:;
    /* $E102: 8D */ maybe_trigger_vblank(4); nes_write(0x03A1, g_cpu.A);
label_E105:;
    /* $E105: 8D */ maybe_trigger_vblank(4); nes_write(0x03A5, g_cpu.A);
label_E108:;
    /* $E108: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_E10B:;
    /* $E10B: 8D */ maybe_trigger_vblank(4); nes_write(0x03AD, g_cpu.A);
label_E10E:;
    /* $E10E: 8D */ maybe_trigger_vblank(4); nes_write(0x03B1, g_cpu.A);
label_E111:;
    /* $E111: 8D */ maybe_trigger_vblank(4); nes_write(0x03B5, g_cpu.A);
label_E114:;
    /* $E114: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E115:;
    /* $E115: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E116:;
    /* $E116: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C8F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C8F8");
#endif
label_C8F8:;
    /* $C8F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_C8FA:;
    /* $C8FA: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x60 + g_cpu.X) & 0xFF), g_cpu.A);
label_C8FC:;
    /* $C8FC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0404); FLAG_NZ(g_cpu.A);
label_C8FF:;
    /* $C8FF: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C902:;
    /* $C902: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C916; }
label_C904:;
    /* $C904: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_C916; }
label_C906:;
    /* $C906: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C908:;
    /* $C908: 8D */ maybe_trigger_vblank(4); nes_write(0x0404, g_cpu.A);
label_C90B:;
    /* $C90B: 8D */ maybe_trigger_vblank(4); nes_write(0x0405, g_cpu.A);
label_C90E:;
    /* $C90E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_C910:;
    /* $C910: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_C913:;
    /* $C913: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC922, -1); return;
label_C916:;
    /* $C916: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E1C0(); g_code_window_base = _swb; }
label_C919:;
    /* $C919: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDBA8, -1);
label_C91C:;
    /* $C91C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0404; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C91F:;
    /* $C91F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0404; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C922:;
    /* $C922: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C9F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C9F8");
#endif
label_C9F8:;
    /* $C9F8: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x6005; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C9FB:;
    /* $C9FB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C3F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3F8");
#endif
label_C3F8:;
    /* $C3F8: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xA981 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C3FB:;
    /* $C3FB: 80 */ maybe_trigger_vblank(2); /* NOP */
label_C3FD:;
    /* $C3FD: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x05 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_C3FF:;
    /* $C3FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C401:;
    /* $C401: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C404:;
    /* $C404: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_C407:;
    /* $C407: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C42E; }
label_C409:;
    /* $C409: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C40B:;
    /* $C40B: 8D */ maybe_trigger_vblank(4); nes_write(0x05EA, g_cpu.A);
label_C40E:;
    /* $C40E: 8D */ maybe_trigger_vblank(4); nes_write(0x05EB, g_cpu.A);
label_C411:;
    /* $C411: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_C413:;
    /* $C413: 8D */ maybe_trigger_vblank(4); nes_write(0x05EC, g_cpu.A);
label_C416:;
    /* $C416: 8D */ maybe_trigger_vblank(4); nes_write(0x05EF, g_cpu.A);
label_C419:;
    /* $C419: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C41B:;
    /* $C41B: 8D */ maybe_trigger_vblank(4); nes_write(0x05E9, g_cpu.A);
label_C41E:;
    /* $C41E: 8D */ maybe_trigger_vblank(4); nes_write(0x05ED, g_cpu.A);
label_C421:;
    /* $C421: 8D */ maybe_trigger_vblank(4); nes_write(0x05EE, g_cpu.A);
label_C424:;
    /* $C424: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_C426:;
    /* $C426: 8D */ maybe_trigger_vblank(4); nes_write(0x05E8, g_cpu.A);
label_C429:;
    /* $C429: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_C42B:;
    /* $C42B: 8D */ maybe_trigger_vblank(4); nes_write(0x05E7, g_cpu.A);
label_C42E:;
    /* $C42E: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C434:;
    /* $C434: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D0EC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D0EC");
#endif
label_D0EC:;
    /* $D0EC: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_D0EF:;
    /* $D0EF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D0FC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D0FC");
#endif
label_D0FC:;
    /* $D0FC: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D0FE:;
    /* $D0FE: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D0FF:;
    /* $D0FF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_D101:;
    /* $D101: 8D */ maybe_trigger_vblank(4); nes_write(0x0429, g_cpu.A);
label_D104:;
    /* $D104: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x63); FLAG_NZ(g_cpu.A);
label_D106:;
    /* $D106: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_D108:;
    /* $D108: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0480); FLAG_NZ(g_cpu.A);
label_D10B:;
    /* $D10B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D110; }
label_D10D:;
    /* $D10D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x047F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D110:;
    /* $D110: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0480; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D113:;
    /* $D113: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E41D(); g_code_window_base = _swb; }
label_D116:;
    /* $D116: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E3F5(); g_code_window_base = _swb; }
label_D119:;
    /* $D119: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D11B:;
    /* $D11B: 85 */ maybe_trigger_vblank(3); nes_write(0x7B, g_cpu.A);
label_D11D:;
    /* $D11D: 8D */ maybe_trigger_vblank(4); nes_write(0x045C, g_cpu.A);
label_D120:;
    /* $D120: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_D122:;
    /* $D122: 8D */ maybe_trigger_vblank(4); nes_write(0x0494, g_cpu.A);
label_D125:;
    /* $D125: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D127:;
    /* $D127: 8D */ maybe_trigger_vblank(4); nes_write(0x045B, g_cpu.A);
label_D12A:;
    /* $D12A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_D12C:;
    /* $D12C: 8D */ maybe_trigger_vblank(4); nes_write(0x045D, g_cpu.A);
label_D12F:;
    /* $D12F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_D131:;
    /* $D131: 85 */ maybe_trigger_vblank(3); nes_write(0xB3, g_cpu.A);
label_D133:;
    /* $D133: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_D136:;
    /* $D136: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D137:;
    /* $D137: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_D139:;
    /* $D139: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EDE8(); g_code_window_base = _swb; }
label_D13C:;
    /* $D13C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05DE); FLAG_NZ(g_cpu.A);
label_D13F:;
    /* $D13F: 8D */ maybe_trigger_vblank(4); nes_write(0x05DF, g_cpu.A);
label_D142:;
    /* $D142: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x63); FLAG_NZ(g_cpu.A);
label_D144:;
    /* $D144: 8D */ maybe_trigger_vblank(4); nes_write(0x05E1, g_cpu.A);
label_D147:;
    /* $D147: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_D149:;
    /* $D149: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_D14C:;
    /* $D14C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_D14E:;
    /* $D14E: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_D151:;
    /* $D151: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D157:;
    /* $D157: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD2B9, -1); return;
}

void func_C8F0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C8F0");
#endif
label_C8F0:;
    /* $C8F0: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x81 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_C8F2:;
    /* $C8F2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CBF0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CBF0");
#endif
label_CBF0:;
    /* $CBF0: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x03 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBF2:;
    /* $CBF2: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x6081 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBF5:;
    /* $CBF5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F6E8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F6E8");
#endif
label_F6E8:;
    /* $F6E8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F6EA:;
    /* $F6EA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_F6EC:;
    /* $F6EC: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2002); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F6EF:;
    /* $F6EF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F6EC;
    }
label_F6F1:;
    /* $F6F1: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2002); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F6F4:;
    /* $F6F4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F6F1;
    }
label_F6F6:;
    /* $F6F6: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_F6F7:;
    /* $F6F7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F6EC;
    }
label_F6F9:;
    /* $F6F9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F6FB:;
    /* $F6FB: 8D */ maybe_trigger_vblank(4); nes_write(0x4010, g_cpu.A);
label_F6FE:;
    /* $F6FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_F700:;
    /* $F700: 8D */ maybe_trigger_vblank(4); nes_write(0x4017, g_cpu.A);
label_F703:;
    /* $F703: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F705:;
    /* $F705: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_F708:;
    /* $F708: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_F70B:;
    /* $F70B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC078, -1); return;
}

void func_EEE0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EEE0");
#endif
label_EEE0:;
    /* $EEE0: 8D */ maybe_trigger_vblank(4); nes_write(0x0384, g_cpu.A);
label_EEE3:;
    /* $EEE3: 8D */ maybe_trigger_vblank(4); nes_write(0x038C, g_cpu.A);
label_EEE6:;
    /* $EEE6: 8D */ maybe_trigger_vblank(4); nes_write(0x0394, g_cpu.A);
label_EEE9:;
    /* $EEE9: 8D */ maybe_trigger_vblank(4); nes_write(0x039C, g_cpu.A);
label_EEEC:;
    /* $EEEC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EEEE:;
    /* $EEEE: 8D */ maybe_trigger_vblank(4); nes_write(0x036B, g_cpu.A);
label_EEF1:;
    /* $EEF1: 8D */ maybe_trigger_vblank(4); nes_write(0x036F, g_cpu.A);
label_EEF4:;
    /* $EEF4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_EEF6:;
    /* $EEF6: 8D */ maybe_trigger_vblank(4); nes_write(0x0373, g_cpu.A);
label_EEF9:;
    /* $EEF9: 8D */ maybe_trigger_vblank(4); nes_write(0x0377, g_cpu.A);
label_EEFC:;
    /* $EEFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_EEFE:;
    /* $EEFE: 8D */ maybe_trigger_vblank(4); nes_write(0x037B, g_cpu.A);
label_EF01:;
    /* $EF01: 8D */ maybe_trigger_vblank(4); nes_write(0x037F, g_cpu.A);
label_EF04:;
    /* $EF04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_EF06:;
    /* $EF06: 8D */ maybe_trigger_vblank(4); nes_write(0x0383, g_cpu.A);
label_EF09:;
    /* $EF09: 8D */ maybe_trigger_vblank(4); nes_write(0x0387, g_cpu.A);
label_EF0C:;
    /* $EF0C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_EF0E:;
    /* $EF0E: 8D */ maybe_trigger_vblank(4); nes_write(0x038B, g_cpu.A);
label_EF11:;
    /* $EF11: 8D */ maybe_trigger_vblank(4); nes_write(0x038F, g_cpu.A);
label_EF14:;
    /* $EF14: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_EF16:;
    /* $EF16: 8D */ maybe_trigger_vblank(4); nes_write(0x0393, g_cpu.A);
label_EF19:;
    /* $EF19: 8D */ maybe_trigger_vblank(4); nes_write(0x0397, g_cpu.A);
label_EF1C:;
    /* $EF1C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_EF1E:;
    /* $EF1E: 8D */ maybe_trigger_vblank(4); nes_write(0x039B, g_cpu.A);
label_EF21:;
    /* $EF21: 8D */ maybe_trigger_vblank(4); nes_write(0x039F, g_cpu.A);
label_EF24:;
    /* $EF24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_EF26:;
    /* $EF26: 8D */ maybe_trigger_vblank(4); nes_write(0x03A0, g_cpu.A);
label_EF29:;
    /* $EF29: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EFE0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EFE0");
#endif
label_EFE0:;
    /* $EFE0: 8D */ maybe_trigger_vblank(4); nes_write(0x03E9, g_cpu.A);
label_EFE3:;
    /* $EFE3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_EFE6:;
    /* $EFE6: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EFE9:;
    /* $EFE9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_EFEE; }
label_EFEB:;
    /* $EFEB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F023(); g_code_window_base = _swb; } return;
label_EFEE:;
    /* $EFEE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EFF1:;
    /* $EFF1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_EFF3:;
    /* $EFF3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EFF7; }
label_EFF5:;
    /* $EFF5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_EFF7:;
    /* $EFF7: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_EFF9:;
    /* $EFF9: 9D */ maybe_trigger_vblank(5); nes_write((0x0368 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EFFC:;
    /* $EFFC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_EFFE:;
    /* $EFFE: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBDE(); g_code_window_base = _swb; }
label_F001:;
    /* $F001: 9D */ maybe_trigger_vblank(5); nes_write((0x0369 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F004:;
    /* $F004: 9D */ maybe_trigger_vblank(5); nes_write((0x036D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F007:;
    /* $F007: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F00A:;
    /* $F00A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F00C:;
    /* $F00C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F010; }
label_F00E:;
    /* $F00E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2D; FLAG_NZ(g_cpu.A);
label_F010:;
    /* $F010: 9D */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F013:;
    /* $F013: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F014:;
    /* $F014: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F015:;
    /* $F015: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F016:;
    /* $F016: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F017:;
    /* $F017: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_F019:;
    /* $F019: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F01A:;
    /* $F01A: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F01D:;
    /* $F01D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F020:;
    /* $F020: 4C */ maybe_trigger_vblank(3); goto label_EFE3;
}

void func_F4E8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F4E8");
#endif
label_F4E8:;
    /* $F4E8: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F4EA:;
    /* $F4EA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE1); FLAG_NZ(g_cpu.A);
label_F4EC:;
    /* $F4EC: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_F4EF:;
    /* $F4EF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F4F0:;
    /* $F4F0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_F4F3:;
    /* $F4F3: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_F4F4:;
    /* $F4F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F4EF;
    }
label_F4F6:;
    /* $F4F6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F4C9(); g_code_window_base = _swb; } return;
}

void func_F1F4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F1F4");
#endif
label_F1F4:;
    /* $F1F4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x60); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F1F6:;
    /* $F1F6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F1F8:;
    /* $F1F8: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_F1FA:;
    /* $F1FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_F1FC:;
    /* $F1FC: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_F1FE:;
    /* $F1FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_F200:;
    /* $F200: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_F202:;
    /* $F202: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_F205:;
    /* $F205: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F206:;
    /* $F206: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_F208:;
    /* $F208: 8D */ maybe_trigger_vblank(4); nes_write(0x03E8, g_cpu.A);
label_F20B:;
    /* $F20B: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x03E8); FLAG_NZ(g_cpu.Y);
label_F20E:;
    /* $F20E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x10; g_cpu.C=(g_cpu.Y>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_F210:;
    /* $F210: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F215; }
label_F212:;
    /* $F212: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F264(); g_code_window_base = _swb; } return;
label_F215:;
    /* $F215: 84 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.Y);
label_F217:;
    /* $F217: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6D); FLAG_NZ(g_cpu.A);
label_F219:;
    /* $F219: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_F21B:;
    /* $F21B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F21C:;
    /* $F21C: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E002(); g_code_window_base = _swb; }
label_F21F:;
    /* $F21F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFDE, -1);
label_F222:;
    /* $F222: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_F224:;
    /* $F224: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F227:;
    /* $F227: 8D */ maybe_trigger_vblank(4); nes_write(0x036D, g_cpu.A);
label_F22A:;
    /* $F22A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F22D:;
    /* $F22D: 8D */ maybe_trigger_vblank(4); nes_write(0x0369, g_cpu.A);
label_F230:;
    /* $F230: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBDE(); g_code_window_base = _swb; }
label_F233:;
    /* $F233: 8D */ maybe_trigger_vblank(4); nes_write(0x036A, g_cpu.A);
label_F236:;
    /* $F236: 8D */ maybe_trigger_vblank(4); nes_write(0x036E, g_cpu.A);
label_F239:;
    /* $F239: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_F23B:;
    /* $F23B: 8D */ maybe_trigger_vblank(4); nes_write(0x036F, g_cpu.A);
label_F23E:;
    /* $F23E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F240:;
    /* $F240: 8D */ maybe_trigger_vblank(4); nes_write(0x0368, g_cpu.A);
label_F243:;
    /* $F243: 8D */ maybe_trigger_vblank(4); nes_write(0x036B, g_cpu.A);
label_F246:;
    /* $F246: 8D */ maybe_trigger_vblank(4); nes_write(0x036C, g_cpu.A);
label_F249:;
    /* $F249: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_F24B:;
    /* $F24B: 8D */ maybe_trigger_vblank(4); nes_write(0x0370, g_cpu.A);
label_F24E:;
    /* $F24E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_F251:;
    /* $F251: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_F253:;
    /* $F253: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_F256:;
    /* $F256: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_F258:;
    /* $F258: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F656(); g_code_window_base = _swb; }
label_F25B:;
    /* $F25B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F25E:;
    /* $F25E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F261:;
    /* $F261: 4C */ maybe_trigger_vblank(3); goto label_F20B;
}

void func_D9F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9F8");
#endif
label_D9F8:;
    /* $D9F8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C4AB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C4AB");
#endif
label_C4AB:;
    /* $C4AB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_C4AD:;
    /* $C4AD: 8D */ maybe_trigger_vblank(4); nes_write(0x0425, g_cpu.A);
label_C4B0:;
    /* $C4B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFB; FLAG_NZ(g_cpu.A);
label_C4B2:;
    /* $C4B2: 8D */ maybe_trigger_vblank(4); nes_write(0x0424, g_cpu.A);
label_C4B5:;
    /* $C4B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C4B7:;
    /* $C4B7: 85 */ maybe_trigger_vblank(3); nes_write(0xAC, g_cpu.A);
label_C4B9:;
    /* $C4B9: 85 */ maybe_trigger_vblank(3); nes_write(0xAD, g_cpu.A);
label_C4BB:;
    /* $C4BB: 85 */ maybe_trigger_vblank(3); nes_write(0xAA, g_cpu.A);
label_C4BD:;
    /* $C4BD: 85 */ maybe_trigger_vblank(3); nes_write(0xAB, g_cpu.A);
label_C4BF:;
    /* $C4BF: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_C4C1:;
    /* $C4C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C4C3:;
    /* $C4C3: 85 */ maybe_trigger_vblank(3); nes_write(0x9B, g_cpu.A);
label_C4C5:;
    /* $C4C5: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C4C7:;
    /* $C4C7: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C4C9:;
    /* $C4C9: 85 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.A);
label_C4CB:;
    /* $C4CB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D8D8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D8D8");
#endif
label_D8D8:;
    /* $D8D8: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_D8DA:;
    /* $D8DA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E8F6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8F6");
#endif
label_E8F6:;
    /* $E8F6: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_E8F7:;
    /* $E8F7: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_E8F9:;
    /* $E8F9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E8FB:;
    /* $E8FB: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E8FD:;
    /* $E8FD: 99 */ maybe_trigger_vblank(5); nes_write((0x0020 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E900:;
    /* $E900: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E901:;
    /* $E901: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_E903:;
    /* $E903: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E8FB;
    }
label_E905:;
    /* $E905: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DBD8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DBD8");
#endif
label_DBD8:;
    /* $DBD8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xAD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DBDA:;
    /* $DBDA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DBDC:;
    /* $DBDC: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_DBDE:;
    /* $DBDE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DBE0:;
    /* $DBE0: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_DBE2:;
    /* $DBE2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFEA, -1);
label_DBE5:;
    /* $DBE5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0404); FLAG_NZ(g_cpu.A);
label_DBE8:;
    /* $DBE8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DBE9:;
    /* $DBE9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DBEA:;
    /* $DBEA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DBEB:;
    /* $DBEB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DBEC:;
    /* $DBEC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DBED:;
    /* $DBED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DBEE:;
    /* $DBEE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_DBF0:;
    /* $DBF0: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_DBF2:;
    /* $DBF2: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_DBF5:;
    /* $DBF5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DBF7:;
    /* $DBF7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DBFA:;
    /* $DBFA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DBFB:;
    /* $DBFB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DBFD:;
    /* $DBFD: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC00:;
    /* $DC00: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC01:;
    /* $DC01: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F1); FLAG_NZ(g_cpu.A);
label_DC04:;
    /* $DC04: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DC05:;
    /* $DC05: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DC08:;
    /* $DC08: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DC09:;
    /* $DC09: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_DC0B:;
    /* $DC0B: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_DC0D:;
    /* $DC0D: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_DC0F:;
    /* $DC0F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC12:;
    /* $DC12: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC13:;
    /* $DC13: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC16:;
    /* $DC16: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC19:;
    /* $DC19: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC1A:;
    /* $DC1A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC1B:;
    /* $DC1B: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC1D:;
    /* $DC1D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DC13;
    }
label_DC1F:;
    /* $DC1F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DC21:;
    /* $DC21: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DC22:;
    /* $DC22: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_DC24:;
    /* $DC24: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_DC26:;
    /* $DC26: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DC2A; }
label_DC28:;
    /* $DC28: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC2A:;
    /* $DC2A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_DC2C:;
    /* $DC2C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC2F:;
    /* $DC2F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC30:;
    /* $DC30: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_DC32:;
    /* $DC32: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC35:;
    /* $DC35: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC36:;
    /* $DC36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_DC38:;
    /* $DC38: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC3B:;
    /* $DC3B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC3C:;
    /* $DC3C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x18); FLAG_NZ(g_cpu.Y);
label_DC3E:;
    /* $DC3E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC41:;
    /* $DC41: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC44:;
    /* $DC44: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC45:;
    /* $DC45: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC46:;
    /* $DC46: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC48:;
    /* $DC48: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DC3E;
    }
label_DC4A:;
    /* $DC4A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DC4C:;
    /* $DC4C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC4F:;
    /* $DC4F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_DC52:;
    /* $DC52: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E2F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E2F8");
#endif
label_E2F8:;
    /* $E2F8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x00A9, -1);
label_E2FB:;
    /* $E2FB: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E2FE:;
    /* $E2FE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0180); FLAG_NZ(g_cpu.A);
label_E301:;
    /* $E301: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E304:;
    /* $E304: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0181); FLAG_NZ(g_cpu.A);
label_E307:;
    /* $E307: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E30A:;
    /* $E30A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0182); FLAG_NZ(g_cpu.A);
label_E30D:;
    /* $E30D: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E310:;
    /* $E310: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0183); FLAG_NZ(g_cpu.A);
label_E313:;
    /* $E313: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E316:;
    /* $E316: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0184); FLAG_NZ(g_cpu.A);
label_E319:;
    /* $E319: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E31C:;
    /* $E31C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0185); FLAG_NZ(g_cpu.A);
label_E31F:;
    /* $E31F: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E322:;
    /* $E322: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0186); FLAG_NZ(g_cpu.A);
label_E325:;
    /* $E325: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E328:;
    /* $E328: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0187); FLAG_NZ(g_cpu.A);
label_E32B:;
    /* $E32B: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E32E:;
    /* $E32E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0188); FLAG_NZ(g_cpu.A);
label_E331:;
    /* $E331: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E334:;
    /* $E334: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0189); FLAG_NZ(g_cpu.A);
label_E337:;
    /* $E337: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E33A:;
    /* $E33A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018A); FLAG_NZ(g_cpu.A);
label_E33D:;
    /* $E33D: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E340:;
    /* $E340: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018B); FLAG_NZ(g_cpu.A);
label_E343:;
    /* $E343: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E346:;
    /* $E346: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018C); FLAG_NZ(g_cpu.A);
label_E349:;
    /* $E349: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E34C:;
    /* $E34C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018D); FLAG_NZ(g_cpu.A);
label_E34F:;
    /* $E34F: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E352:;
    /* $E352: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018E); FLAG_NZ(g_cpu.A);
label_E355:;
    /* $E355: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E358:;
    /* $E358: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018F); FLAG_NZ(g_cpu.A);
label_E35B:;
    /* $E35B: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E35E:;
    /* $E35E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_E360:;
    /* $E360: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E363:;
    /* $E363: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E365:;
    /* $E365: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E368:;
    /* $E368: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E36B:;
    /* $E36B: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E36E:;
    /* $E36E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E180(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E180");
#endif
label_E180:;
    /* $E180: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_E182:;
    /* $E182: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_E184:;
    /* $E184: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03ED); FLAG_NZ(g_cpu.A);
label_E187:;
    /* $E187: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_E189:;
    /* $E189: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E18A:;
    /* $E18A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E18B:;
    /* $E18B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E18D:;
    /* $E18D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_E18F:;
    /* $E18F: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E23E(); g_code_window_base = _swb; }
label_E192:;
    /* $E192: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E193:;
    /* $E193: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E194:;
    /* $E194: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03ED; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E197:;
    /* $E197: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03ED; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E19A:;
    /* $E19A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03ED); FLAG_NZ(g_cpu.A);
label_E19D:;
    /* $E19D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E19E:;
    /* $E19E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E1A0:;
    /* $E1A0: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E7); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E1A3:;
    /* $E1A3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x015B), -1); return; }
label_E1A5:;
    /* $E1A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x015B), -1); return; }
label_E1A7:;
    /* $E1A7: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03EC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E1AA:;
    /* $E1AA: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03EC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E1AD:;
    /* $E1AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_E1AF:;
    /* $E1AF: 8D */ maybe_trigger_vblank(4); nes_write(0x03ED, g_cpu.A);
label_E1B2:;
    /* $E1B2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041C); FLAG_NZ(g_cpu.A);
label_E1B5:;
    /* $E1B5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E1B6:;
    /* $E1B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_E1B8:;
    /* $E1B8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E1B9:;
    /* $E1B9: 8D */ maybe_trigger_vblank(4); nes_write(0x041C, g_cpu.A);
label_E1BC:;
    /* $E1BC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E15B(); g_code_window_base = _swb; } return;
}

void func_FFF0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FFF0");
#endif
label_FFF0:;
    /* $FFF0: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x00DB; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_FFF3:;
    /* $FFF3: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_FFF5:;
    /* $FFF5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FFF7:;
    /* $FFF7: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x9401; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FFFA:;
    /* $FFFA: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_FFFB:;
    /* $FFFB: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FFFD:;
    /* $FFFD: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xE7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FFFF:;
    /* $FFFF: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_0000:;
    /* $0000: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0003:;
    /* $0003: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0006:;
    /* $0006: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0009:;
    /* $0009: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_000C:;
    /* $000C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_000F:;
    /* $000F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0012:;
    /* $0012: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0015:;
    /* $0015: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0018:;
    /* $0018: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_001B:;
    /* $001B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_001E:;
    /* $001E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0021:;
    /* $0021: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0024:;
    /* $0024: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0027:;
    /* $0027: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_002A:;
    /* $002A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_002D:;
    /* $002D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0030:;
    /* $0030: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0033:;
    /* $0033: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0036:;
    /* $0036: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0039:;
    /* $0039: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_003C:;
    /* $003C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_003F:;
    /* $003F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0042:;
    /* $0042: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0045:;
    /* $0045: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0048:;
    /* $0048: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_004B:;
    /* $004B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_004E:;
    /* $004E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0051:;
    /* $0051: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0054:;
    /* $0054: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0057:;
    /* $0057: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_005A:;
    /* $005A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_005D:;
    /* $005D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0060:;
    /* $0060: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0063:;
    /* $0063: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0066:;
    /* $0066: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0069:;
    /* $0069: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_006C:;
    /* $006C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_006F:;
    /* $006F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0072:;
    /* $0072: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0075:;
    /* $0075: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0078:;
    /* $0078: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_007B:;
    /* $007B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_007E:;
    /* $007E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0081:;
    /* $0081: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0084:;
    /* $0084: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0087:;
    /* $0087: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_008A:;
    /* $008A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_008D:;
    /* $008D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0090:;
    /* $0090: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0093:;
    /* $0093: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0096:;
    /* $0096: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0099:;
    /* $0099: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_009C:;
    /* $009C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_009F:;
    /* $009F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00A2:;
    /* $00A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00A5:;
    /* $00A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00A8:;
    /* $00A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00AB:;
    /* $00AB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00AE:;
    /* $00AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00B1:;
    /* $00B1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00B4:;
    /* $00B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00B7:;
    /* $00B7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00BA:;
    /* $00BA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00BD:;
    /* $00BD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00C0:;
    /* $00C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00C3:;
    /* $00C3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00C6:;
    /* $00C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00C9:;
    /* $00C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00CC:;
    /* $00CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00CF:;
    /* $00CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00D2:;
    /* $00D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00D5:;
    /* $00D5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00D8:;
    /* $00D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00DB:;
    /* $00DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00DE:;
    /* $00DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00E1:;
    /* $00E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00E4:;
    /* $00E4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00E7:;
    /* $00E7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00EA:;
    /* $00EA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00ED:;
    /* $00ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00F0:;
    /* $00F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00F3:;
    /* $00F3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00F6:;
    /* $00F6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00F9:;
    /* $00F9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00FC:;
    /* $00FC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_00FF:;
    /* $00FF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0102:;
    /* $0102: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0105:;
    /* $0105: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0108:;
    /* $0108: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_010B:;
    /* $010B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_010E:;
    /* $010E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0111:;
    /* $0111: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0114:;
    /* $0114: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0117:;
    /* $0117: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_011A:;
    /* $011A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_011D:;
    /* $011D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0120:;
    /* $0120: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0123:;
    /* $0123: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0126:;
    /* $0126: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0129:;
    /* $0129: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_012C:;
    /* $012C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_012F:;
    /* $012F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0132:;
    /* $0132: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0135:;
    /* $0135: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0138:;
    /* $0138: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_013B:;
    /* $013B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_013E:;
    /* $013E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0141:;
    /* $0141: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0144:;
    /* $0144: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0147:;
    /* $0147: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_014A:;
    /* $014A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_014D:;
    /* $014D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0150:;
    /* $0150: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0153:;
    /* $0153: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0156:;
    /* $0156: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0159:;
    /* $0159: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_015C:;
    /* $015C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_015F:;
    /* $015F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0162:;
    /* $0162: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0165:;
    /* $0165: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0168:;
    /* $0168: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_016B:;
    /* $016B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_016E:;
    /* $016E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0171:;
    /* $0171: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0174:;
    /* $0174: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0177:;
    /* $0177: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_017A:;
    /* $017A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_017D:;
    /* $017D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0180:;
    /* $0180: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0183:;
    /* $0183: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0186:;
    /* $0186: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0189:;
    /* $0189: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_018C:;
    /* $018C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_018F:;
    /* $018F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0192:;
    /* $0192: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0195:;
    /* $0195: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0198:;
    /* $0198: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_019B:;
    /* $019B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_019E:;
    /* $019E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01A1:;
    /* $01A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01A4:;
    /* $01A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01A7:;
    /* $01A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01AA:;
    /* $01AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01AD:;
    /* $01AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01B0:;
    /* $01B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01B3:;
    /* $01B3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01B6:;
    /* $01B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01B9:;
    /* $01B9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01BC:;
    /* $01BC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01BF:;
    /* $01BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01C2:;
    /* $01C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01C5:;
    /* $01C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01C8:;
    /* $01C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01CB:;
    /* $01CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01CE:;
    /* $01CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01D1:;
    /* $01D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01D4:;
    /* $01D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01D7:;
    /* $01D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01DA:;
    /* $01DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01DD:;
    /* $01DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01E0:;
    /* $01E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01E3:;
    /* $01E3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01E6:;
    /* $01E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01E9:;
    /* $01E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01EC:;
    /* $01EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01EF:;
    /* $01EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01F2:;
    /* $01F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01F5:;
    /* $01F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01F8:;
    /* $01F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01FB:;
    /* $01FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_01FE:;
    /* $01FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0201:;
    /* $0201: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0204:;
    /* $0204: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0207:;
    /* $0207: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_020A:;
    /* $020A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_020D:;
    /* $020D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0210:;
    /* $0210: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0213:;
    /* $0213: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0216:;
    /* $0216: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0219:;
    /* $0219: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_021C:;
    /* $021C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_021F:;
    /* $021F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0222:;
    /* $0222: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0225:;
    /* $0225: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0228:;
    /* $0228: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_022B:;
    /* $022B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_022E:;
    /* $022E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0231:;
    /* $0231: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0234:;
    /* $0234: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0237:;
    /* $0237: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_023A:;
    /* $023A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_023D:;
    /* $023D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0240:;
    /* $0240: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0243:;
    /* $0243: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0246:;
    /* $0246: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0249:;
    /* $0249: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_024C:;
    /* $024C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_024F:;
    /* $024F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0252:;
    /* $0252: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0255:;
    /* $0255: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0258:;
    /* $0258: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_025B:;
    /* $025B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_025E:;
    /* $025E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0261:;
    /* $0261: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0264:;
    /* $0264: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0267:;
    /* $0267: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_026A:;
    /* $026A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_026D:;
    /* $026D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0270:;
    /* $0270: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0273:;
    /* $0273: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0276:;
    /* $0276: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0279:;
    /* $0279: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_027C:;
    /* $027C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_027F:;
    /* $027F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0282:;
    /* $0282: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0285:;
    /* $0285: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0288:;
    /* $0288: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_028B:;
    /* $028B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_028E:;
    /* $028E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0291:;
    /* $0291: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0294:;
    /* $0294: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0297:;
    /* $0297: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_029A:;
    /* $029A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_029D:;
    /* $029D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02A0:;
    /* $02A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02A3:;
    /* $02A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02A6:;
    /* $02A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02A9:;
    /* $02A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02AC:;
    /* $02AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02AF:;
    /* $02AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02B2:;
    /* $02B2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02B5:;
    /* $02B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02B8:;
    /* $02B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02BB:;
    /* $02BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02BE:;
    /* $02BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02C1:;
    /* $02C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02C4:;
    /* $02C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02C7:;
    /* $02C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02CA:;
    /* $02CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02CD:;
    /* $02CD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02D0:;
    /* $02D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02D3:;
    /* $02D3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02D6:;
    /* $02D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02D9:;
    /* $02D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02DC:;
    /* $02DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02DF:;
    /* $02DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02E2:;
    /* $02E2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02E5:;
    /* $02E5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02E8:;
    /* $02E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02EB:;
    /* $02EB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02EE:;
    /* $02EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02F1:;
    /* $02F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02F4:;
    /* $02F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02F7:;
    /* $02F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02FA:;
    /* $02FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_02FD:;
    /* $02FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0300:;
    /* $0300: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0303:;
    /* $0303: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0306:;
    /* $0306: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0309:;
    /* $0309: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_030C:;
    /* $030C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_030F:;
    /* $030F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0312:;
    /* $0312: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0315:;
    /* $0315: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0318:;
    /* $0318: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_031B:;
    /* $031B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_031E:;
    /* $031E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0321:;
    /* $0321: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0324:;
    /* $0324: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0327:;
    /* $0327: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_032A:;
    /* $032A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_032D:;
    /* $032D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0330:;
    /* $0330: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0333:;
    /* $0333: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0336:;
    /* $0336: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0339:;
    /* $0339: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_033C:;
    /* $033C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_033F:;
    /* $033F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0342:;
    /* $0342: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0345:;
    /* $0345: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0348:;
    /* $0348: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_034B:;
    /* $034B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_034E:;
    /* $034E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0351:;
    /* $0351: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0354:;
    /* $0354: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0357:;
    /* $0357: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_035A:;
    /* $035A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_035D:;
    /* $035D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0360:;
    /* $0360: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0363:;
    /* $0363: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0366:;
    /* $0366: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0369:;
    /* $0369: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_036C:;
    /* $036C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_036F:;
    /* $036F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0372:;
    /* $0372: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0375:;
    /* $0375: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0378:;
    /* $0378: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_037B:;
    /* $037B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_037E:;
    /* $037E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0381:;
    /* $0381: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0384:;
    /* $0384: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0387:;
    /* $0387: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_038A:;
    /* $038A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_038D:;
    /* $038D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0390:;
    /* $0390: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0393:;
    /* $0393: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0396:;
    /* $0396: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0399:;
    /* $0399: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_039C:;
    /* $039C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_039F:;
    /* $039F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03A2:;
    /* $03A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03A5:;
    /* $03A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03A8:;
    /* $03A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03AB:;
    /* $03AB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03AE:;
    /* $03AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03B1:;
    /* $03B1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03B4:;
    /* $03B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03B7:;
    /* $03B7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03BA:;
    /* $03BA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03BD:;
    /* $03BD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03C0:;
    /* $03C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03C3:;
    /* $03C3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03C6:;
    /* $03C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03C9:;
    /* $03C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03CC:;
    /* $03CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03CF:;
    /* $03CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03D2:;
    /* $03D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03D5:;
    /* $03D5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03D8:;
    /* $03D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03DB:;
    /* $03DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03DE:;
    /* $03DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03E1:;
    /* $03E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03E4:;
    /* $03E4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03E7:;
    /* $03E7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03EA:;
    /* $03EA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03ED:;
    /* $03ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03F0:;
    /* $03F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03F3:;
    /* $03F3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03F6:;
    /* $03F6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03F9:;
    /* $03F9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03FC:;
    /* $03FC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_03FF:;
    /* $03FF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0402:;
    /* $0402: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0405:;
    /* $0405: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0408:;
    /* $0408: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_040B:;
    /* $040B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_040E:;
    /* $040E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0411:;
    /* $0411: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0414:;
    /* $0414: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0417:;
    /* $0417: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_041A:;
    /* $041A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_041D:;
    /* $041D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0420:;
    /* $0420: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0423:;
    /* $0423: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0426:;
    /* $0426: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0429:;
    /* $0429: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_042C:;
    /* $042C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_042F:;
    /* $042F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0432:;
    /* $0432: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0435:;
    /* $0435: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0438:;
    /* $0438: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_043B:;
    /* $043B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_043E:;
    /* $043E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0441:;
    /* $0441: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0444:;
    /* $0444: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0447:;
    /* $0447: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_044A:;
    /* $044A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_044D:;
    /* $044D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0450:;
    /* $0450: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0453:;
    /* $0453: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0456:;
    /* $0456: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0459:;
    /* $0459: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_045C:;
    /* $045C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_045F:;
    /* $045F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0462:;
    /* $0462: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0465:;
    /* $0465: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0468:;
    /* $0468: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_046B:;
    /* $046B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_046E:;
    /* $046E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0471:;
    /* $0471: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0474:;
    /* $0474: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0477:;
    /* $0477: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_047A:;
    /* $047A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_047D:;
    /* $047D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0480:;
    /* $0480: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0483:;
    /* $0483: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0486:;
    /* $0486: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0489:;
    /* $0489: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_048C:;
    /* $048C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_048F:;
    /* $048F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0492:;
    /* $0492: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0495:;
    /* $0495: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0498:;
    /* $0498: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_049B:;
    /* $049B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_049E:;
    /* $049E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04A1:;
    /* $04A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04A4:;
    /* $04A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04A7:;
    /* $04A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04AA:;
    /* $04AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04AD:;
    /* $04AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04B0:;
    /* $04B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04B3:;
    /* $04B3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04B6:;
    /* $04B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04B9:;
    /* $04B9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04BC:;
    /* $04BC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04BF:;
    /* $04BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04C2:;
    /* $04C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04C5:;
    /* $04C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04C8:;
    /* $04C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04CB:;
    /* $04CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04CE:;
    /* $04CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04D1:;
    /* $04D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04D4:;
    /* $04D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04D7:;
    /* $04D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04DA:;
    /* $04DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04DD:;
    /* $04DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04E0:;
    /* $04E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04E3:;
    /* $04E3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04E6:;
    /* $04E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04E9:;
    /* $04E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04EC:;
    /* $04EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04EF:;
    /* $04EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04F2:;
    /* $04F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04F5:;
    /* $04F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04F8:;
    /* $04F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04FB:;
    /* $04FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_04FE:;
    /* $04FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0501:;
    /* $0501: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0504:;
    /* $0504: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0507:;
    /* $0507: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_050A:;
    /* $050A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_050D:;
    /* $050D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0510:;
    /* $0510: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0513:;
    /* $0513: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0516:;
    /* $0516: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0519:;
    /* $0519: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_051C:;
    /* $051C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_051F:;
    /* $051F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0522:;
    /* $0522: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0525:;
    /* $0525: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0528:;
    /* $0528: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_052B:;
    /* $052B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_052E:;
    /* $052E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0531:;
    /* $0531: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0534:;
    /* $0534: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0537:;
    /* $0537: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_053A:;
    /* $053A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_053D:;
    /* $053D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0540:;
    /* $0540: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0543:;
    /* $0543: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0546:;
    /* $0546: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0549:;
    /* $0549: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_054C:;
    /* $054C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_054F:;
    /* $054F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0552:;
    /* $0552: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0555:;
    /* $0555: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0558:;
    /* $0558: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_055B:;
    /* $055B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_055E:;
    /* $055E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0561:;
    /* $0561: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0564:;
    /* $0564: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0567:;
    /* $0567: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_056A:;
    /* $056A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_056D:;
    /* $056D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0570:;
    /* $0570: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0573:;
    /* $0573: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0576:;
    /* $0576: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0579:;
    /* $0579: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_057C:;
    /* $057C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_057F:;
    /* $057F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0582:;
    /* $0582: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0585:;
    /* $0585: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0588:;
    /* $0588: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_058B:;
    /* $058B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_058E:;
    /* $058E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0591:;
    /* $0591: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0594:;
    /* $0594: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0597:;
    /* $0597: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_059A:;
    /* $059A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_059D:;
    /* $059D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05A0:;
    /* $05A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05A3:;
    /* $05A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05A6:;
    /* $05A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05A9:;
    /* $05A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05AC:;
    /* $05AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05AF:;
    /* $05AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05B2:;
    /* $05B2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05B5:;
    /* $05B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05B8:;
    /* $05B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05BB:;
    /* $05BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05BE:;
    /* $05BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05C1:;
    /* $05C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05C4:;
    /* $05C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05C7:;
    /* $05C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05CA:;
    /* $05CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05CD:;
    /* $05CD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05D0:;
    /* $05D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05D3:;
    /* $05D3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05D6:;
    /* $05D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05D9:;
    /* $05D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05DC:;
    /* $05DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05DF:;
    /* $05DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05E2:;
    /* $05E2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05E5:;
    /* $05E5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05E8:;
    /* $05E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05EB:;
    /* $05EB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05EE:;
    /* $05EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05F1:;
    /* $05F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05F4:;
    /* $05F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05F7:;
    /* $05F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05FA:;
    /* $05FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_05FD:;
    /* $05FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0600:;
    /* $0600: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0603:;
    /* $0603: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0606:;
    /* $0606: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0609:;
    /* $0609: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_060C:;
    /* $060C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_060F:;
    /* $060F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0612:;
    /* $0612: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0615:;
    /* $0615: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0618:;
    /* $0618: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_061B:;
    /* $061B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_061E:;
    /* $061E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0621:;
    /* $0621: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0624:;
    /* $0624: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0627:;
    /* $0627: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_062A:;
    /* $062A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_062D:;
    /* $062D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0630:;
    /* $0630: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0633:;
    /* $0633: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0636:;
    /* $0636: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0639:;
    /* $0639: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_063C:;
    /* $063C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_063F:;
    /* $063F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0642:;
    /* $0642: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0645:;
    /* $0645: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0648:;
    /* $0648: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_064B:;
    /* $064B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_064E:;
    /* $064E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0651:;
    /* $0651: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0654:;
    /* $0654: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0657:;
    /* $0657: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_065A:;
    /* $065A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_065D:;
    /* $065D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0660:;
    /* $0660: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0663:;
    /* $0663: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0666:;
    /* $0666: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0669:;
    /* $0669: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_066C:;
    /* $066C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_066F:;
    /* $066F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0672:;
    /* $0672: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0675:;
    /* $0675: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0678:;
    /* $0678: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_067B:;
    /* $067B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_067E:;
    /* $067E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0681:;
    /* $0681: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0684:;
    /* $0684: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0687:;
    /* $0687: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_068A:;
    /* $068A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_068D:;
    /* $068D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0690:;
    /* $0690: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0693:;
    /* $0693: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0696:;
    /* $0696: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0699:;
    /* $0699: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_069C:;
    /* $069C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_069F:;
    /* $069F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06A2:;
    /* $06A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06A5:;
    /* $06A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06A8:;
    /* $06A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06AB:;
    /* $06AB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06AE:;
    /* $06AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06B1:;
    /* $06B1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06B4:;
    /* $06B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06B7:;
    /* $06B7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06BA:;
    /* $06BA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06BD:;
    /* $06BD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06C0:;
    /* $06C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06C3:;
    /* $06C3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06C6:;
    /* $06C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06C9:;
    /* $06C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06CC:;
    /* $06CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06CF:;
    /* $06CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06D2:;
    /* $06D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06D5:;
    /* $06D5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06D8:;
    /* $06D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06DB:;
    /* $06DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06DE:;
    /* $06DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06E1:;
    /* $06E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06E4:;
    /* $06E4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06E7:;
    /* $06E7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06EA:;
    /* $06EA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06ED:;
    /* $06ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06F0:;
    /* $06F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06F3:;
    /* $06F3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06F6:;
    /* $06F6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06F9:;
    /* $06F9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06FC:;
    /* $06FC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_06FF:;
    /* $06FF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0702:;
    /* $0702: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0705:;
    /* $0705: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0708:;
    /* $0708: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_070B:;
    /* $070B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_070E:;
    /* $070E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0711:;
    /* $0711: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0714:;
    /* $0714: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0717:;
    /* $0717: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_071A:;
    /* $071A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_071D:;
    /* $071D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0720:;
    /* $0720: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0723:;
    /* $0723: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0726:;
    /* $0726: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0729:;
    /* $0729: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_072C:;
    /* $072C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_072F:;
    /* $072F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0732:;
    /* $0732: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0735:;
    /* $0735: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0738:;
    /* $0738: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_073B:;
    /* $073B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_073E:;
    /* $073E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0741:;
    /* $0741: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0744:;
    /* $0744: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0747:;
    /* $0747: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_074A:;
    /* $074A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_074D:;
    /* $074D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0750:;
    /* $0750: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0753:;
    /* $0753: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0756:;
    /* $0756: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0759:;
    /* $0759: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_075C:;
    /* $075C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_075F:;
    /* $075F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0762:;
    /* $0762: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0765:;
    /* $0765: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0768:;
    /* $0768: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_076B:;
    /* $076B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_076E:;
    /* $076E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0771:;
    /* $0771: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0774:;
    /* $0774: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0777:;
    /* $0777: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_077A:;
    /* $077A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_077D:;
    /* $077D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0780:;
    /* $0780: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0783:;
    /* $0783: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0786:;
    /* $0786: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0789:;
    /* $0789: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_078C:;
    /* $078C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_078F:;
    /* $078F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0792:;
    /* $0792: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0795:;
    /* $0795: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0798:;
    /* $0798: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_079B:;
    /* $079B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_079E:;
    /* $079E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07A1:;
    /* $07A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07A4:;
    /* $07A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07A7:;
    /* $07A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07AA:;
    /* $07AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07AD:;
    /* $07AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07B0:;
    /* $07B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07B3:;
    /* $07B3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07B6:;
    /* $07B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07B9:;
    /* $07B9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07BC:;
    /* $07BC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07BF:;
    /* $07BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07C2:;
    /* $07C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07C5:;
    /* $07C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07C8:;
    /* $07C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07CB:;
    /* $07CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07CE:;
    /* $07CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07D1:;
    /* $07D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07D4:;
    /* $07D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07D7:;
    /* $07D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07DA:;
    /* $07DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07DD:;
    /* $07DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07E0:;
    /* $07E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07E3:;
    /* $07E3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07E6:;
    /* $07E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07E9:;
    /* $07E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07EC:;
    /* $07EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07EF:;
    /* $07EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07F2:;
    /* $07F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07F5:;
    /* $07F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07F8:;
    /* $07F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07FB:;
    /* $07FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_07FE:;
    /* $07FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0801:;
    /* $0801: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0804:;
    /* $0804: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0807:;
    /* $0807: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_080A:;
    /* $080A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_080D:;
    /* $080D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0810:;
    /* $0810: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0813:;
    /* $0813: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0816:;
    /* $0816: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0819:;
    /* $0819: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_081C:;
    /* $081C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_081F:;
    /* $081F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0822:;
    /* $0822: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0825:;
    /* $0825: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0828:;
    /* $0828: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_082B:;
    /* $082B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_082E:;
    /* $082E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0831:;
    /* $0831: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0834:;
    /* $0834: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0837:;
    /* $0837: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_083A:;
    /* $083A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_083D:;
    /* $083D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0840:;
    /* $0840: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0843:;
    /* $0843: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0846:;
    /* $0846: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0849:;
    /* $0849: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_084C:;
    /* $084C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_084F:;
    /* $084F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0852:;
    /* $0852: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0855:;
    /* $0855: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0858:;
    /* $0858: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_085B:;
    /* $085B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_085E:;
    /* $085E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0861:;
    /* $0861: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0864:;
    /* $0864: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0867:;
    /* $0867: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_086A:;
    /* $086A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_086D:;
    /* $086D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0870:;
    /* $0870: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0873:;
    /* $0873: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0876:;
    /* $0876: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0879:;
    /* $0879: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_087C:;
    /* $087C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_087F:;
    /* $087F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0882:;
    /* $0882: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0885:;
    /* $0885: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0888:;
    /* $0888: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_088B:;
    /* $088B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_088E:;
    /* $088E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0891:;
    /* $0891: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0894:;
    /* $0894: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0897:;
    /* $0897: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_089A:;
    /* $089A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_089D:;
    /* $089D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08A0:;
    /* $08A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08A3:;
    /* $08A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08A6:;
    /* $08A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08A9:;
    /* $08A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08AC:;
    /* $08AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08AF:;
    /* $08AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08B2:;
    /* $08B2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08B5:;
    /* $08B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08B8:;
    /* $08B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08BB:;
    /* $08BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08BE:;
    /* $08BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08C1:;
    /* $08C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08C4:;
    /* $08C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08C7:;
    /* $08C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08CA:;
    /* $08CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08CD:;
    /* $08CD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08D0:;
    /* $08D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08D3:;
    /* $08D3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08D6:;
    /* $08D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08D9:;
    /* $08D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08DC:;
    /* $08DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08DF:;
    /* $08DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08E2:;
    /* $08E2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08E5:;
    /* $08E5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08E8:;
    /* $08E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08EB:;
    /* $08EB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08EE:;
    /* $08EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08F1:;
    /* $08F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08F4:;
    /* $08F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08F7:;
    /* $08F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08FA:;
    /* $08FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_08FD:;
    /* $08FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0900:;
    /* $0900: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0903:;
    /* $0903: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0906:;
    /* $0906: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0909:;
    /* $0909: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_090C:;
    /* $090C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_090F:;
    /* $090F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0912:;
    /* $0912: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0915:;
    /* $0915: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0918:;
    /* $0918: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_091B:;
    /* $091B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_091E:;
    /* $091E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0921:;
    /* $0921: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0924:;
    /* $0924: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0927:;
    /* $0927: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_092A:;
    /* $092A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_092D:;
    /* $092D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0930:;
    /* $0930: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0933:;
    /* $0933: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0936:;
    /* $0936: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0939:;
    /* $0939: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_093C:;
    /* $093C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_093F:;
    /* $093F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0942:;
    /* $0942: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0945:;
    /* $0945: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0948:;
    /* $0948: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_094B:;
    /* $094B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_094E:;
    /* $094E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0951:;
    /* $0951: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0954:;
    /* $0954: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0957:;
    /* $0957: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_095A:;
    /* $095A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_095D:;
    /* $095D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0960:;
    /* $0960: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0963:;
    /* $0963: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0966:;
    /* $0966: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0969:;
    /* $0969: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_096C:;
    /* $096C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_096F:;
    /* $096F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0972:;
    /* $0972: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0975:;
    /* $0975: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0978:;
    /* $0978: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_097B:;
    /* $097B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_097E:;
    /* $097E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0981:;
    /* $0981: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0984:;
    /* $0984: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0987:;
    /* $0987: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_098A:;
    /* $098A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_098D:;
    /* $098D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0990:;
    /* $0990: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0993:;
    /* $0993: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0996:;
    /* $0996: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0999:;
    /* $0999: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_099C:;
    /* $099C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_099F:;
    /* $099F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09A2:;
    /* $09A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09A5:;
    /* $09A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09A8:;
    /* $09A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09AB:;
    /* $09AB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09AE:;
    /* $09AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09B1:;
    /* $09B1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09B4:;
    /* $09B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09B7:;
    /* $09B7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09BA:;
    /* $09BA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09BD:;
    /* $09BD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09C0:;
    /* $09C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09C3:;
    /* $09C3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09C6:;
    /* $09C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09C9:;
    /* $09C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09CC:;
    /* $09CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09CF:;
    /* $09CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09D2:;
    /* $09D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09D5:;
    /* $09D5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09D8:;
    /* $09D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09DB:;
    /* $09DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09DE:;
    /* $09DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09E1:;
    /* $09E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09E4:;
    /* $09E4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09E7:;
    /* $09E7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09EA:;
    /* $09EA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09ED:;
    /* $09ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09F0:;
    /* $09F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09F3:;
    /* $09F3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09F6:;
    /* $09F6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09F9:;
    /* $09F9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09FC:;
    /* $09FC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_09FF:;
    /* $09FF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A02:;
    /* $0A02: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A05:;
    /* $0A05: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A08:;
    /* $0A08: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A0B:;
    /* $0A0B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A0E:;
    /* $0A0E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A11:;
    /* $0A11: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A14:;
    /* $0A14: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A17:;
    /* $0A17: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A1A:;
    /* $0A1A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A1D:;
    /* $0A1D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A20:;
    /* $0A20: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A23:;
    /* $0A23: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A26:;
    /* $0A26: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A29:;
    /* $0A29: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A2C:;
    /* $0A2C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A2F:;
    /* $0A2F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A32:;
    /* $0A32: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A35:;
    /* $0A35: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A38:;
    /* $0A38: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A3B:;
    /* $0A3B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A3E:;
    /* $0A3E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A41:;
    /* $0A41: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A44:;
    /* $0A44: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A47:;
    /* $0A47: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A4A:;
    /* $0A4A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A4D:;
    /* $0A4D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A50:;
    /* $0A50: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A53:;
    /* $0A53: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A56:;
    /* $0A56: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A59:;
    /* $0A59: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A5C:;
    /* $0A5C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A5F:;
    /* $0A5F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A62:;
    /* $0A62: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A65:;
    /* $0A65: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A68:;
    /* $0A68: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A6B:;
    /* $0A6B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A6E:;
    /* $0A6E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A71:;
    /* $0A71: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A74:;
    /* $0A74: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A77:;
    /* $0A77: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A7A:;
    /* $0A7A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A7D:;
    /* $0A7D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A80:;
    /* $0A80: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A83:;
    /* $0A83: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A86:;
    /* $0A86: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A89:;
    /* $0A89: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A8C:;
    /* $0A8C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A8F:;
    /* $0A8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A92:;
    /* $0A92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A95:;
    /* $0A95: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A98:;
    /* $0A98: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A9B:;
    /* $0A9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0A9E:;
    /* $0A9E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AA1:;
    /* $0AA1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AA4:;
    /* $0AA4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AA7:;
    /* $0AA7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AAA:;
    /* $0AAA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AAD:;
    /* $0AAD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AB0:;
    /* $0AB0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AB3:;
    /* $0AB3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AB6:;
    /* $0AB6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AB9:;
    /* $0AB9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ABC:;
    /* $0ABC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ABF:;
    /* $0ABF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AC2:;
    /* $0AC2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AC5:;
    /* $0AC5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AC8:;
    /* $0AC8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ACB:;
    /* $0ACB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ACE:;
    /* $0ACE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AD1:;
    /* $0AD1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AD4:;
    /* $0AD4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AD7:;
    /* $0AD7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ADA:;
    /* $0ADA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ADD:;
    /* $0ADD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AE0:;
    /* $0AE0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AE3:;
    /* $0AE3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AE6:;
    /* $0AE6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AE9:;
    /* $0AE9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AEC:;
    /* $0AEC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AEF:;
    /* $0AEF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AF2:;
    /* $0AF2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AF5:;
    /* $0AF5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AF8:;
    /* $0AF8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AFB:;
    /* $0AFB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0AFE:;
    /* $0AFE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B01:;
    /* $0B01: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B04:;
    /* $0B04: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B07:;
    /* $0B07: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B0A:;
    /* $0B0A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B0D:;
    /* $0B0D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B10:;
    /* $0B10: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B13:;
    /* $0B13: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B16:;
    /* $0B16: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B19:;
    /* $0B19: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B1C:;
    /* $0B1C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B1F:;
    /* $0B1F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B22:;
    /* $0B22: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B25:;
    /* $0B25: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B28:;
    /* $0B28: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B2B:;
    /* $0B2B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B2E:;
    /* $0B2E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B31:;
    /* $0B31: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B34:;
    /* $0B34: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B37:;
    /* $0B37: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B3A:;
    /* $0B3A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B3D:;
    /* $0B3D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B40:;
    /* $0B40: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B43:;
    /* $0B43: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B46:;
    /* $0B46: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B49:;
    /* $0B49: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B4C:;
    /* $0B4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B4F:;
    /* $0B4F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B52:;
    /* $0B52: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B55:;
    /* $0B55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B58:;
    /* $0B58: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B5B:;
    /* $0B5B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B5E:;
    /* $0B5E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B61:;
    /* $0B61: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B64:;
    /* $0B64: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B67:;
    /* $0B67: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B6A:;
    /* $0B6A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B6D:;
    /* $0B6D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B70:;
    /* $0B70: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B73:;
    /* $0B73: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B76:;
    /* $0B76: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B79:;
    /* $0B79: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B7C:;
    /* $0B7C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B7F:;
    /* $0B7F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B82:;
    /* $0B82: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B85:;
    /* $0B85: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B88:;
    /* $0B88: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B8B:;
    /* $0B8B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B8E:;
    /* $0B8E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B91:;
    /* $0B91: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B94:;
    /* $0B94: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B97:;
    /* $0B97: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B9A:;
    /* $0B9A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0B9D:;
    /* $0B9D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BA0:;
    /* $0BA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BA3:;
    /* $0BA3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BA6:;
    /* $0BA6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BA9:;
    /* $0BA9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BAC:;
    /* $0BAC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BAF:;
    /* $0BAF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BB2:;
    /* $0BB2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BB5:;
    /* $0BB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BB8:;
    /* $0BB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BBB:;
    /* $0BBB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BBE:;
    /* $0BBE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BC1:;
    /* $0BC1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BC4:;
    /* $0BC4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BC7:;
    /* $0BC7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BCA:;
    /* $0BCA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BCD:;
    /* $0BCD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BD0:;
    /* $0BD0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BD3:;
    /* $0BD3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BD6:;
    /* $0BD6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BD9:;
    /* $0BD9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BDC:;
    /* $0BDC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BDF:;
    /* $0BDF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BE2:;
    /* $0BE2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BE5:;
    /* $0BE5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BE8:;
    /* $0BE8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BEB:;
    /* $0BEB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BEE:;
    /* $0BEE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BF1:;
    /* $0BF1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BF4:;
    /* $0BF4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BF7:;
    /* $0BF7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BFA:;
    /* $0BFA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0BFD:;
    /* $0BFD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C00:;
    /* $0C00: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C03:;
    /* $0C03: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C06:;
    /* $0C06: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C09:;
    /* $0C09: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C0C:;
    /* $0C0C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C0F:;
    /* $0C0F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C12:;
    /* $0C12: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C15:;
    /* $0C15: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C18:;
    /* $0C18: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C1B:;
    /* $0C1B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C1E:;
    /* $0C1E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C21:;
    /* $0C21: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C24:;
    /* $0C24: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C27:;
    /* $0C27: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C2A:;
    /* $0C2A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C2D:;
    /* $0C2D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C30:;
    /* $0C30: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C33:;
    /* $0C33: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C36:;
    /* $0C36: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C39:;
    /* $0C39: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C3C:;
    /* $0C3C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C3F:;
    /* $0C3F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C42:;
    /* $0C42: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C45:;
    /* $0C45: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C48:;
    /* $0C48: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C4B:;
    /* $0C4B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C4E:;
    /* $0C4E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C51:;
    /* $0C51: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C54:;
    /* $0C54: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C57:;
    /* $0C57: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C5A:;
    /* $0C5A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C5D:;
    /* $0C5D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C60:;
    /* $0C60: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C63:;
    /* $0C63: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C66:;
    /* $0C66: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C69:;
    /* $0C69: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C6C:;
    /* $0C6C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C6F:;
    /* $0C6F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C72:;
    /* $0C72: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C75:;
    /* $0C75: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C78:;
    /* $0C78: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C7B:;
    /* $0C7B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C7E:;
    /* $0C7E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C81:;
    /* $0C81: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C84:;
    /* $0C84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C87:;
    /* $0C87: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C8A:;
    /* $0C8A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C8D:;
    /* $0C8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C90:;
    /* $0C90: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C93:;
    /* $0C93: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C96:;
    /* $0C96: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C99:;
    /* $0C99: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C9C:;
    /* $0C9C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0C9F:;
    /* $0C9F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CA2:;
    /* $0CA2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CA5:;
    /* $0CA5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CA8:;
    /* $0CA8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CAB:;
    /* $0CAB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CAE:;
    /* $0CAE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CB1:;
    /* $0CB1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CB4:;
    /* $0CB4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CB7:;
    /* $0CB7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CBA:;
    /* $0CBA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CBD:;
    /* $0CBD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CC0:;
    /* $0CC0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CC3:;
    /* $0CC3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CC6:;
    /* $0CC6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CC9:;
    /* $0CC9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CCC:;
    /* $0CCC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CCF:;
    /* $0CCF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CD2:;
    /* $0CD2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CD5:;
    /* $0CD5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CD8:;
    /* $0CD8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CDB:;
    /* $0CDB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CDE:;
    /* $0CDE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CE1:;
    /* $0CE1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CE4:;
    /* $0CE4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CE7:;
    /* $0CE7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CEA:;
    /* $0CEA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CED:;
    /* $0CED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CF0:;
    /* $0CF0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CF3:;
    /* $0CF3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CF6:;
    /* $0CF6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CF9:;
    /* $0CF9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CFC:;
    /* $0CFC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0CFF:;
    /* $0CFF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D02:;
    /* $0D02: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D05:;
    /* $0D05: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D08:;
    /* $0D08: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D0B:;
    /* $0D0B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D0E:;
    /* $0D0E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D11:;
    /* $0D11: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D14:;
    /* $0D14: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D17:;
    /* $0D17: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D1A:;
    /* $0D1A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D1D:;
    /* $0D1D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D20:;
    /* $0D20: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D23:;
    /* $0D23: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D26:;
    /* $0D26: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D29:;
    /* $0D29: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D2C:;
    /* $0D2C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D2F:;
    /* $0D2F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D32:;
    /* $0D32: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D35:;
    /* $0D35: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D38:;
    /* $0D38: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D3B:;
    /* $0D3B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D3E:;
    /* $0D3E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D41:;
    /* $0D41: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D44:;
    /* $0D44: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D47:;
    /* $0D47: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D4A:;
    /* $0D4A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D4D:;
    /* $0D4D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D50:;
    /* $0D50: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D53:;
    /* $0D53: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D56:;
    /* $0D56: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D59:;
    /* $0D59: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D5C:;
    /* $0D5C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D5F:;
    /* $0D5F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D62:;
    /* $0D62: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D65:;
    /* $0D65: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D68:;
    /* $0D68: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D6B:;
    /* $0D6B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D6E:;
    /* $0D6E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D71:;
    /* $0D71: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D74:;
    /* $0D74: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D77:;
    /* $0D77: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D7A:;
    /* $0D7A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D7D:;
    /* $0D7D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D80:;
    /* $0D80: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D83:;
    /* $0D83: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D86:;
    /* $0D86: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D89:;
    /* $0D89: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D8C:;
    /* $0D8C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D8F:;
    /* $0D8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D92:;
    /* $0D92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D95:;
    /* $0D95: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D98:;
    /* $0D98: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D9B:;
    /* $0D9B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0D9E:;
    /* $0D9E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DA1:;
    /* $0DA1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DA4:;
    /* $0DA4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DA7:;
    /* $0DA7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DAA:;
    /* $0DAA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DAD:;
    /* $0DAD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DB0:;
    /* $0DB0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DB3:;
    /* $0DB3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DB6:;
    /* $0DB6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DB9:;
    /* $0DB9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DBC:;
    /* $0DBC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DBF:;
    /* $0DBF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DC2:;
    /* $0DC2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DC5:;
    /* $0DC5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DC8:;
    /* $0DC8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DCB:;
    /* $0DCB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DCE:;
    /* $0DCE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DD1:;
    /* $0DD1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DD4:;
    /* $0DD4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DD7:;
    /* $0DD7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DDA:;
    /* $0DDA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DDD:;
    /* $0DDD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DE0:;
    /* $0DE0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DE3:;
    /* $0DE3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DE6:;
    /* $0DE6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DE9:;
    /* $0DE9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DEC:;
    /* $0DEC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DEF:;
    /* $0DEF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DF2:;
    /* $0DF2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DF5:;
    /* $0DF5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DF8:;
    /* $0DF8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DFB:;
    /* $0DFB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0DFE:;
    /* $0DFE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E01:;
    /* $0E01: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E04:;
    /* $0E04: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E07:;
    /* $0E07: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E0A:;
    /* $0E0A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E0D:;
    /* $0E0D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E10:;
    /* $0E10: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E13:;
    /* $0E13: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E16:;
    /* $0E16: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E19:;
    /* $0E19: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E1C:;
    /* $0E1C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E1F:;
    /* $0E1F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E22:;
    /* $0E22: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E25:;
    /* $0E25: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E28:;
    /* $0E28: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E2B:;
    /* $0E2B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E2E:;
    /* $0E2E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E31:;
    /* $0E31: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E34:;
    /* $0E34: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E37:;
    /* $0E37: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E3A:;
    /* $0E3A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E3D:;
    /* $0E3D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E40:;
    /* $0E40: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E43:;
    /* $0E43: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E46:;
    /* $0E46: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E49:;
    /* $0E49: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E4C:;
    /* $0E4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E4F:;
    /* $0E4F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E52:;
    /* $0E52: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E55:;
    /* $0E55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E58:;
    /* $0E58: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E5B:;
    /* $0E5B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E5E:;
    /* $0E5E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E61:;
    /* $0E61: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E64:;
    /* $0E64: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E67:;
    /* $0E67: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E6A:;
    /* $0E6A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E6D:;
    /* $0E6D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E70:;
    /* $0E70: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E73:;
    /* $0E73: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E76:;
    /* $0E76: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E79:;
    /* $0E79: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E7C:;
    /* $0E7C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E7F:;
    /* $0E7F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E82:;
    /* $0E82: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E85:;
    /* $0E85: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E88:;
    /* $0E88: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E8B:;
    /* $0E8B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E8E:;
    /* $0E8E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E91:;
    /* $0E91: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E94:;
    /* $0E94: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E97:;
    /* $0E97: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E9A:;
    /* $0E9A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0E9D:;
    /* $0E9D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EA0:;
    /* $0EA0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EA3:;
    /* $0EA3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EA6:;
    /* $0EA6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EA9:;
    /* $0EA9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EAC:;
    /* $0EAC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EAF:;
    /* $0EAF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EB2:;
    /* $0EB2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EB5:;
    /* $0EB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EB8:;
    /* $0EB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EBB:;
    /* $0EBB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EBE:;
    /* $0EBE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EC1:;
    /* $0EC1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EC4:;
    /* $0EC4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EC7:;
    /* $0EC7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ECA:;
    /* $0ECA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ECD:;
    /* $0ECD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ED0:;
    /* $0ED0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ED3:;
    /* $0ED3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ED6:;
    /* $0ED6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0ED9:;
    /* $0ED9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EDC:;
    /* $0EDC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EDF:;
    /* $0EDF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EE2:;
    /* $0EE2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EE5:;
    /* $0EE5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EE8:;
    /* $0EE8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EEB:;
    /* $0EEB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EEE:;
    /* $0EEE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EF1:;
    /* $0EF1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EF4:;
    /* $0EF4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EF7:;
    /* $0EF7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EFA:;
    /* $0EFA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0EFD:;
    /* $0EFD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F00:;
    /* $0F00: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F03:;
    /* $0F03: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F06:;
    /* $0F06: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F09:;
    /* $0F09: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F0C:;
    /* $0F0C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F0F:;
    /* $0F0F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F12:;
    /* $0F12: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F15:;
    /* $0F15: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F18:;
    /* $0F18: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F1B:;
    /* $0F1B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F1E:;
    /* $0F1E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F21:;
    /* $0F21: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F24:;
    /* $0F24: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F27:;
    /* $0F27: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F2A:;
    /* $0F2A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F2D:;
    /* $0F2D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F30:;
    /* $0F30: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F33:;
    /* $0F33: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F36:;
    /* $0F36: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F39:;
    /* $0F39: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F3C:;
    /* $0F3C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F3F:;
    /* $0F3F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F42:;
    /* $0F42: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F45:;
    /* $0F45: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F48:;
    /* $0F48: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F4B:;
    /* $0F4B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F4E:;
    /* $0F4E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F51:;
    /* $0F51: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F54:;
    /* $0F54: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F57:;
    /* $0F57: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F5A:;
    /* $0F5A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F5D:;
    /* $0F5D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F60:;
    /* $0F60: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F63:;
    /* $0F63: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F66:;
    /* $0F66: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F69:;
    /* $0F69: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F6C:;
    /* $0F6C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F6F:;
    /* $0F6F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F72:;
    /* $0F72: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F75:;
    /* $0F75: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F78:;
    /* $0F78: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F7B:;
    /* $0F7B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F7E:;
    /* $0F7E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F81:;
    /* $0F81: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F84:;
    /* $0F84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F87:;
    /* $0F87: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F8A:;
    /* $0F8A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F8D:;
    /* $0F8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F90:;
    /* $0F90: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F93:;
    /* $0F93: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F96:;
    /* $0F96: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F99:;
    /* $0F99: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F9C:;
    /* $0F9C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0F9F:;
    /* $0F9F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FA2:;
    /* $0FA2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FA5:;
    /* $0FA5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FA8:;
    /* $0FA8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FAB:;
    /* $0FAB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FAE:;
    /* $0FAE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FB1:;
    /* $0FB1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FB4:;
    /* $0FB4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FB7:;
    /* $0FB7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FBA:;
    /* $0FBA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FBD:;
    /* $0FBD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FC0:;
    /* $0FC0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FC3:;
    /* $0FC3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FC6:;
    /* $0FC6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FC9:;
    /* $0FC9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FCC:;
    /* $0FCC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FCF:;
    /* $0FCF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FD2:;
    /* $0FD2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FD5:;
    /* $0FD5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FD8:;
    /* $0FD8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FDB:;
    /* $0FDB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FDE:;
    /* $0FDE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FE1:;
    /* $0FE1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FE4:;
    /* $0FE4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FE7:;
    /* $0FE7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FEA:;
    /* $0FEA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FED:;
    /* $0FED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FF0:;
    /* $0FF0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FF3:;
    /* $0FF3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FF6:;
    /* $0FF6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FF9:;
    /* $0FF9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FFC:;
    /* $0FFC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_0FFF:;
    /* $0FFF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1002:;
    /* $1002: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1005:;
    /* $1005: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1008:;
    /* $1008: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_100B:;
    /* $100B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_100E:;
    /* $100E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1011:;
    /* $1011: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1014:;
    /* $1014: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1017:;
    /* $1017: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_101A:;
    /* $101A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_101D:;
    /* $101D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1020:;
    /* $1020: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1023:;
    /* $1023: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1026:;
    /* $1026: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1029:;
    /* $1029: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_102C:;
    /* $102C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_102F:;
    /* $102F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1032:;
    /* $1032: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1035:;
    /* $1035: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1038:;
    /* $1038: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_103B:;
    /* $103B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_103E:;
    /* $103E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1041:;
    /* $1041: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1044:;
    /* $1044: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1047:;
    /* $1047: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_104A:;
    /* $104A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_104D:;
    /* $104D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1050:;
    /* $1050: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1053:;
    /* $1053: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1056:;
    /* $1056: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1059:;
    /* $1059: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_105C:;
    /* $105C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_105F:;
    /* $105F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1062:;
    /* $1062: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1065:;
    /* $1065: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1068:;
    /* $1068: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_106B:;
    /* $106B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_106E:;
    /* $106E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1071:;
    /* $1071: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1074:;
    /* $1074: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1077:;
    /* $1077: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_107A:;
    /* $107A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_107D:;
    /* $107D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1080:;
    /* $1080: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1083:;
    /* $1083: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1086:;
    /* $1086: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1089:;
    /* $1089: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_108C:;
    /* $108C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_108F:;
    /* $108F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1092:;
    /* $1092: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1095:;
    /* $1095: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1098:;
    /* $1098: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_109B:;
    /* $109B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_109E:;
    /* $109E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10A1:;
    /* $10A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10A4:;
    /* $10A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10A7:;
    /* $10A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10AA:;
    /* $10AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10AD:;
    /* $10AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10B0:;
    /* $10B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10B3:;
    /* $10B3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10B6:;
    /* $10B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10B9:;
    /* $10B9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10BC:;
    /* $10BC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10BF:;
    /* $10BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10C2:;
    /* $10C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10C5:;
    /* $10C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10C8:;
    /* $10C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10CB:;
    /* $10CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10CE:;
    /* $10CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10D1:;
    /* $10D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10D4:;
    /* $10D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10D7:;
    /* $10D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10DA:;
    /* $10DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10DD:;
    /* $10DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10E0:;
    /* $10E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10E3:;
    /* $10E3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10E6:;
    /* $10E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10E9:;
    /* $10E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10EC:;
    /* $10EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10EF:;
    /* $10EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10F2:;
    /* $10F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10F5:;
    /* $10F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10F8:;
    /* $10F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10FB:;
    /* $10FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_10FE:;
    /* $10FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1101:;
    /* $1101: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1104:;
    /* $1104: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1107:;
    /* $1107: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_110A:;
    /* $110A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_110D:;
    /* $110D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1110:;
    /* $1110: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1113:;
    /* $1113: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1116:;
    /* $1116: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1119:;
    /* $1119: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_111C:;
    /* $111C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_111F:;
    /* $111F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1122:;
    /* $1122: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1125:;
    /* $1125: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1128:;
    /* $1128: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_112B:;
    /* $112B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_112E:;
    /* $112E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1131:;
    /* $1131: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1134:;
    /* $1134: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1137:;
    /* $1137: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_113A:;
    /* $113A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_113D:;
    /* $113D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1140:;
    /* $1140: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1143:;
    /* $1143: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1146:;
    /* $1146: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1149:;
    /* $1149: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_114C:;
    /* $114C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_114F:;
    /* $114F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1152:;
    /* $1152: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1155:;
    /* $1155: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1158:;
    /* $1158: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_115B:;
    /* $115B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_115E:;
    /* $115E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1161:;
    /* $1161: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1164:;
    /* $1164: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1167:;
    /* $1167: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_116A:;
    /* $116A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_116D:;
    /* $116D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1170:;
    /* $1170: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1173:;
    /* $1173: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1176:;
    /* $1176: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1179:;
    /* $1179: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_117C:;
    /* $117C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_117F:;
    /* $117F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1182:;
    /* $1182: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1185:;
    /* $1185: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1188:;
    /* $1188: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_118B:;
    /* $118B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_118E:;
    /* $118E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1191:;
    /* $1191: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1194:;
    /* $1194: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1197:;
    /* $1197: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_119A:;
    /* $119A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_119D:;
    /* $119D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11A0:;
    /* $11A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11A3:;
    /* $11A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11A6:;
    /* $11A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11A9:;
    /* $11A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11AC:;
    /* $11AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11AF:;
    /* $11AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11B2:;
    /* $11B2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11B5:;
    /* $11B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11B8:;
    /* $11B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11BB:;
    /* $11BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11BE:;
    /* $11BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11C1:;
    /* $11C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11C4:;
    /* $11C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11C7:;
    /* $11C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11CA:;
    /* $11CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11CD:;
    /* $11CD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11D0:;
    /* $11D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11D3:;
    /* $11D3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11D6:;
    /* $11D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11D9:;
    /* $11D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11DC:;
    /* $11DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11DF:;
    /* $11DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11E2:;
    /* $11E2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11E5:;
    /* $11E5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11E8:;
    /* $11E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11EB:;
    /* $11EB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11EE:;
    /* $11EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11F1:;
    /* $11F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11F4:;
    /* $11F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11F7:;
    /* $11F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11FA:;
    /* $11FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_11FD:;
    /* $11FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1200:;
    /* $1200: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1203:;
    /* $1203: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1206:;
    /* $1206: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1209:;
    /* $1209: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_120C:;
    /* $120C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_120F:;
    /* $120F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1212:;
    /* $1212: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1215:;
    /* $1215: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1218:;
    /* $1218: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_121B:;
    /* $121B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_121E:;
    /* $121E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1221:;
    /* $1221: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1224:;
    /* $1224: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1227:;
    /* $1227: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_122A:;
    /* $122A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_122D:;
    /* $122D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1230:;
    /* $1230: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1233:;
    /* $1233: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1236:;
    /* $1236: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1239:;
    /* $1239: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_123C:;
    /* $123C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_123F:;
    /* $123F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1242:;
    /* $1242: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1245:;
    /* $1245: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1248:;
    /* $1248: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_124B:;
    /* $124B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_124E:;
    /* $124E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1251:;
    /* $1251: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1254:;
    /* $1254: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1257:;
    /* $1257: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_125A:;
    /* $125A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_125D:;
    /* $125D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1260:;
    /* $1260: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1263:;
    /* $1263: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1266:;
    /* $1266: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1269:;
    /* $1269: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_126C:;
    /* $126C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_126F:;
    /* $126F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1272:;
    /* $1272: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1275:;
    /* $1275: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1278:;
    /* $1278: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_127B:;
    /* $127B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_127E:;
    /* $127E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1281:;
    /* $1281: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1284:;
    /* $1284: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1287:;
    /* $1287: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_128A:;
    /* $128A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_128D:;
    /* $128D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1290:;
    /* $1290: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1293:;
    /* $1293: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1296:;
    /* $1296: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1299:;
    /* $1299: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_129C:;
    /* $129C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_129F:;
    /* $129F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12A2:;
    /* $12A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12A5:;
    /* $12A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12A8:;
    /* $12A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12AB:;
    /* $12AB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12AE:;
    /* $12AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12B1:;
    /* $12B1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12B4:;
    /* $12B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12B7:;
    /* $12B7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12BA:;
    /* $12BA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12BD:;
    /* $12BD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12C0:;
    /* $12C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12C3:;
    /* $12C3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12C6:;
    /* $12C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12C9:;
    /* $12C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12CC:;
    /* $12CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12CF:;
    /* $12CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12D2:;
    /* $12D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12D5:;
    /* $12D5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12D8:;
    /* $12D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12DB:;
    /* $12DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12DE:;
    /* $12DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12E1:;
    /* $12E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12E4:;
    /* $12E4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12E7:;
    /* $12E7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12EA:;
    /* $12EA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12ED:;
    /* $12ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12F0:;
    /* $12F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12F3:;
    /* $12F3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12F6:;
    /* $12F6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12F9:;
    /* $12F9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12FC:;
    /* $12FC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_12FF:;
    /* $12FF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1302:;
    /* $1302: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1305:;
    /* $1305: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1308:;
    /* $1308: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_130B:;
    /* $130B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_130E:;
    /* $130E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1311:;
    /* $1311: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1314:;
    /* $1314: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1317:;
    /* $1317: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_131A:;
    /* $131A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_131D:;
    /* $131D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1320:;
    /* $1320: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1323:;
    /* $1323: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1326:;
    /* $1326: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1329:;
    /* $1329: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_132C:;
    /* $132C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_132F:;
    /* $132F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1332:;
    /* $1332: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1335:;
    /* $1335: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1338:;
    /* $1338: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_133B:;
    /* $133B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_133E:;
    /* $133E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1341:;
    /* $1341: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1344:;
    /* $1344: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1347:;
    /* $1347: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_134A:;
    /* $134A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_134D:;
    /* $134D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1350:;
    /* $1350: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1353:;
    /* $1353: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1356:;
    /* $1356: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1359:;
    /* $1359: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_135C:;
    /* $135C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_135F:;
    /* $135F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1362:;
    /* $1362: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1365:;
    /* $1365: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1368:;
    /* $1368: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_136B:;
    /* $136B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_136E:;
    /* $136E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1371:;
    /* $1371: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1374:;
    /* $1374: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1377:;
    /* $1377: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_137A:;
    /* $137A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_137D:;
    /* $137D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1380:;
    /* $1380: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1383:;
    /* $1383: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1386:;
    /* $1386: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1389:;
    /* $1389: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_138C:;
    /* $138C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_138F:;
    /* $138F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1392:;
    /* $1392: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1395:;
    /* $1395: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1398:;
    /* $1398: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_139B:;
    /* $139B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_139E:;
    /* $139E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13A1:;
    /* $13A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13A4:;
    /* $13A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13A7:;
    /* $13A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13AA:;
    /* $13AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13AD:;
    /* $13AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13B0:;
    /* $13B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13B3:;
    /* $13B3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13B6:;
    /* $13B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13B9:;
    /* $13B9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13BC:;
    /* $13BC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13BF:;
    /* $13BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13C2:;
    /* $13C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13C5:;
    /* $13C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13C8:;
    /* $13C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13CB:;
    /* $13CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13CE:;
    /* $13CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13D1:;
    /* $13D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13D4:;
    /* $13D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13D7:;
    /* $13D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13DA:;
    /* $13DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13DD:;
    /* $13DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13E0:;
    /* $13E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13E3:;
    /* $13E3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13E6:;
    /* $13E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13E9:;
    /* $13E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13EC:;
    /* $13EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13EF:;
    /* $13EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13F2:;
    /* $13F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13F5:;
    /* $13F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13F8:;
    /* $13F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13FB:;
    /* $13FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_13FE:;
    /* $13FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1401:;
    /* $1401: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1404:;
    /* $1404: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1407:;
    /* $1407: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_140A:;
    /* $140A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_140D:;
    /* $140D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1410:;
    /* $1410: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1413:;
    /* $1413: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1416:;
    /* $1416: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1419:;
    /* $1419: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_141C:;
    /* $141C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_141F:;
    /* $141F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1422:;
    /* $1422: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1425:;
    /* $1425: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1428:;
    /* $1428: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_142B:;
    /* $142B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_142E:;
    /* $142E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1431:;
    /* $1431: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1434:;
    /* $1434: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1437:;
    /* $1437: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_143A:;
    /* $143A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_143D:;
    /* $143D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1440:;
    /* $1440: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1443:;
    /* $1443: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1446:;
    /* $1446: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1449:;
    /* $1449: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_144C:;
    /* $144C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_144F:;
    /* $144F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1452:;
    /* $1452: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1455:;
    /* $1455: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1458:;
    /* $1458: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_145B:;
    /* $145B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_145E:;
    /* $145E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1461:;
    /* $1461: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1464:;
    /* $1464: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1467:;
    /* $1467: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_146A:;
    /* $146A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_146D:;
    /* $146D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1470:;
    /* $1470: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1473:;
    /* $1473: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1476:;
    /* $1476: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1479:;
    /* $1479: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_147C:;
    /* $147C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_147F:;
    /* $147F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1482:;
    /* $1482: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1485:;
    /* $1485: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1488:;
    /* $1488: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_148B:;
    /* $148B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_148E:;
    /* $148E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1491:;
    /* $1491: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1494:;
    /* $1494: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1497:;
    /* $1497: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_149A:;
    /* $149A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_149D:;
    /* $149D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14A0:;
    /* $14A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14A3:;
    /* $14A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14A6:;
    /* $14A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14A9:;
    /* $14A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14AC:;
    /* $14AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14AF:;
    /* $14AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14B2:;
    /* $14B2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14B5:;
    /* $14B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14B8:;
    /* $14B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14BB:;
    /* $14BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14BE:;
    /* $14BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14C1:;
    /* $14C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14C4:;
    /* $14C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14C7:;
    /* $14C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14CA:;
    /* $14CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14CD:;
    /* $14CD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14D0:;
    /* $14D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14D3:;
    /* $14D3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14D6:;
    /* $14D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14D9:;
    /* $14D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14DC:;
    /* $14DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14DF:;
    /* $14DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14E2:;
    /* $14E2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14E5:;
    /* $14E5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14E8:;
    /* $14E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14EB:;
    /* $14EB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14EE:;
    /* $14EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14F1:;
    /* $14F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14F4:;
    /* $14F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14F7:;
    /* $14F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14FA:;
    /* $14FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_14FD:;
    /* $14FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1500:;
    /* $1500: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1503:;
    /* $1503: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1506:;
    /* $1506: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1509:;
    /* $1509: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_150C:;
    /* $150C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_150F:;
    /* $150F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1512:;
    /* $1512: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1515:;
    /* $1515: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1518:;
    /* $1518: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_151B:;
    /* $151B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_151E:;
    /* $151E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1521:;
    /* $1521: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1524:;
    /* $1524: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1527:;
    /* $1527: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_152A:;
    /* $152A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_152D:;
    /* $152D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1530:;
    /* $1530: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1533:;
    /* $1533: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1536:;
    /* $1536: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1539:;
    /* $1539: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_153C:;
    /* $153C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_153F:;
    /* $153F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1542:;
    /* $1542: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1545:;
    /* $1545: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1548:;
    /* $1548: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_154B:;
    /* $154B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_154E:;
    /* $154E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1551:;
    /* $1551: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1554:;
    /* $1554: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1557:;
    /* $1557: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_155A:;
    /* $155A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_155D:;
    /* $155D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1560:;
    /* $1560: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1563:;
    /* $1563: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1566:;
    /* $1566: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1569:;
    /* $1569: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_156C:;
    /* $156C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_156F:;
    /* $156F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1572:;
    /* $1572: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1575:;
    /* $1575: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1578:;
    /* $1578: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_157B:;
    /* $157B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_157E:;
    /* $157E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1581:;
    /* $1581: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1584:;
    /* $1584: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1587:;
    /* $1587: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_158A:;
    /* $158A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_158D:;
    /* $158D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1590:;
    /* $1590: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1593:;
    /* $1593: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1596:;
    /* $1596: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1599:;
    /* $1599: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_159C:;
    /* $159C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_159F:;
    /* $159F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15A2:;
    /* $15A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15A5:;
    /* $15A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15A8:;
    /* $15A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15AB:;
    /* $15AB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15AE:;
    /* $15AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15B1:;
    /* $15B1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15B4:;
    /* $15B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15B7:;
    /* $15B7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15BA:;
    /* $15BA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15BD:;
    /* $15BD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15C0:;
    /* $15C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15C3:;
    /* $15C3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15C6:;
    /* $15C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15C9:;
    /* $15C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15CC:;
    /* $15CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15CF:;
    /* $15CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15D2:;
    /* $15D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15D5:;
    /* $15D5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15D8:;
    /* $15D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15DB:;
    /* $15DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15DE:;
    /* $15DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15E1:;
    /* $15E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15E4:;
    /* $15E4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15E7:;
    /* $15E7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15EA:;
    /* $15EA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15ED:;
    /* $15ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15F0:;
    /* $15F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15F3:;
    /* $15F3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15F6:;
    /* $15F6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15F9:;
    /* $15F9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15FC:;
    /* $15FC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_15FF:;
    /* $15FF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1602:;
    /* $1602: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1605:;
    /* $1605: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1608:;
    /* $1608: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_160B:;
    /* $160B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_160E:;
    /* $160E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1611:;
    /* $1611: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1614:;
    /* $1614: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1617:;
    /* $1617: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_161A:;
    /* $161A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_161D:;
    /* $161D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1620:;
    /* $1620: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1623:;
    /* $1623: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1626:;
    /* $1626: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1629:;
    /* $1629: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_162C:;
    /* $162C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_162F:;
    /* $162F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1632:;
    /* $1632: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1635:;
    /* $1635: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1638:;
    /* $1638: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_163B:;
    /* $163B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_163E:;
    /* $163E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1641:;
    /* $1641: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1644:;
    /* $1644: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1647:;
    /* $1647: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_164A:;
    /* $164A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_164D:;
    /* $164D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1650:;
    /* $1650: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1653:;
    /* $1653: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1656:;
    /* $1656: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1659:;
    /* $1659: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_165C:;
    /* $165C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_165F:;
    /* $165F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1662:;
    /* $1662: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1665:;
    /* $1665: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1668:;
    /* $1668: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_166B:;
    /* $166B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_166E:;
    /* $166E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1671:;
    /* $1671: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1674:;
    /* $1674: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1677:;
    /* $1677: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_167A:;
    /* $167A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_167D:;
    /* $167D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1680:;
    /* $1680: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1683:;
    /* $1683: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1686:;
    /* $1686: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1689:;
    /* $1689: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_168C:;
    /* $168C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_168F:;
    /* $168F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1692:;
    /* $1692: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1695:;
    /* $1695: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1698:;
    /* $1698: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_169B:;
    /* $169B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_169E:;
    /* $169E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16A1:;
    /* $16A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16A4:;
    /* $16A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16A7:;
    /* $16A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16AA:;
    /* $16AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16AD:;
    /* $16AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16B0:;
    /* $16B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16B3:;
    /* $16B3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16B6:;
    /* $16B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16B9:;
    /* $16B9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16BC:;
    /* $16BC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16BF:;
    /* $16BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16C2:;
    /* $16C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16C5:;
    /* $16C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16C8:;
    /* $16C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16CB:;
    /* $16CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16CE:;
    /* $16CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16D1:;
    /* $16D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16D4:;
    /* $16D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16D7:;
    /* $16D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16DA:;
    /* $16DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16DD:;
    /* $16DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16E0:;
    /* $16E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16E3:;
    /* $16E3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16E6:;
    /* $16E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16E9:;
    /* $16E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16EC:;
    /* $16EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16EF:;
    /* $16EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16F2:;
    /* $16F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16F5:;
    /* $16F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16F8:;
    /* $16F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16FB:;
    /* $16FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_16FE:;
    /* $16FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1701:;
    /* $1701: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1704:;
    /* $1704: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1707:;
    /* $1707: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_170A:;
    /* $170A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_170D:;
    /* $170D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1710:;
    /* $1710: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1713:;
    /* $1713: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1716:;
    /* $1716: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1719:;
    /* $1719: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_171C:;
    /* $171C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_171F:;
    /* $171F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1722:;
    /* $1722: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1725:;
    /* $1725: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1728:;
    /* $1728: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_172B:;
    /* $172B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_172E:;
    /* $172E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1731:;
    /* $1731: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1734:;
    /* $1734: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1737:;
    /* $1737: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_173A:;
    /* $173A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_173D:;
    /* $173D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1740:;
    /* $1740: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1743:;
    /* $1743: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1746:;
    /* $1746: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1749:;
    /* $1749: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_174C:;
    /* $174C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_174F:;
    /* $174F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1752:;
    /* $1752: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1755:;
    /* $1755: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1758:;
    /* $1758: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_175B:;
    /* $175B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_175E:;
    /* $175E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1761:;
    /* $1761: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1764:;
    /* $1764: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1767:;
    /* $1767: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_176A:;
    /* $176A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_176D:;
    /* $176D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1770:;
    /* $1770: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1773:;
    /* $1773: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1776:;
    /* $1776: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1779:;
    /* $1779: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_177C:;
    /* $177C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_177F:;
    /* $177F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1782:;
    /* $1782: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1785:;
    /* $1785: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1788:;
    /* $1788: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_178B:;
    /* $178B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_178E:;
    /* $178E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1791:;
    /* $1791: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1794:;
    /* $1794: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_1797:;
    /* $1797: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_179A:;
    /* $179A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_179D:;
    /* $179D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17A0:;
    /* $17A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17A3:;
    /* $17A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17A6:;
    /* $17A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17A9:;
    /* $17A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17AC:;
    /* $17AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17AF:;
    /* $17AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17B2:;
    /* $17B2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17B5:;
    /* $17B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17B8:;
    /* $17B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17BB:;
    /* $17BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17BE:;
    /* $17BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17C1:;
    /* $17C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17C4:;
    /* $17C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17C7:;
    /* $17C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17CA:;
    /* $17CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17CD:;
    /* $17CD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17D0:;
    /* $17D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17D3:;
    /* $17D3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17D6:;
    /* $17D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17D9:;
    /* $17D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17DC:;
    /* $17DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17DF:;
    /* $17DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17E2:;
    /* $17E2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_17E5:;
    /* $17E5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
}

void func_F1D8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F1D8");
#endif
label_F1D8:;
    /* $F1D8: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_F1DD; }
label_F1DA:;
    /* $F1DA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_F1DD:;
    /* $F1DD: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_F1DF:;
    /* $F1DF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_F1E2:;
    /* $F1E2: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_F1E4:;
    /* $F1E4: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F656(); g_code_window_base = _swb; }
label_F1E7:;
    /* $F1E7: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F1EA:;
    /* $F1EA: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F1ED:;
    /* $F1ED: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F183(); g_code_window_base = _swb; } return;
}

void func_E3D0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E3D0");
#endif
label_E3D0:;
    /* $E3D0: 96 */ maybe_trigger_vblank(4); nes_write((0x04 + g_cpu.Y) & 0xFF, g_cpu.X);
label_E3D2:;
    /* $E3D2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E3F4(); g_code_window_base = _swb; } return;
}

void func_F3D8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F3D8");
#endif
label_F3D8:;
    /* $F3D8: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F3DB:;
    /* $F3DB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F6D8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F6D8");
#endif
label_F6D8:;
    /* $F6D8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F6D9:;
    /* $F6D9: 99 */ maybe_trigger_vblank(5); nes_write((0x8000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F6DC:;
    /* $F6DC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F380(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F380");
#endif
label_F380:;
    /* $F380: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_F382:;
    /* $F382: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F385:;
    /* $F385: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_F387:;
    /* $F387: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F38A:;
    /* $F38A: 85 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.A);
label_F38C:;
    /* $F38C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F38F:;
    /* $F38F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E8); FLAG_NZ(g_cpu.A);
label_F392:;
    /* $F392: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F395:;
    /* $F395: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F399; }
label_F397:;
    /* $F397: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F3AD; }
label_F399:;
    /* $F399: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_F39A:;
    /* $F39A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F39B:;
    /* $F39B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_F39D:;
    /* $F39D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F39E:;
    /* $F39E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F3A1:;
    /* $F3A1: 99 */ maybe_trigger_vblank(5); nes_write((0x01F0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F3A4:;
    /* $F3A4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F3A7:;
    /* $F3A7: 99 */ maybe_trigger_vblank(5); nes_write((0x01F1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F3AA:;
    /* $F3AA: 4C */ maybe_trigger_vblank(3); goto label_F38C;
label_F3AD:;
    /* $F3AD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F3B0:;
    /* $F3B0: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F3B3:;
    /* $F3B3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0211 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F3B6:;
    /* $F3B6: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F3B9:;
    /* $F3B9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x19); FLAG_NZ(g_cpu.A);
label_F3BB:;
    /* $F3BB: 99 */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F3BE:;
    /* $F3BE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_F3C0:;
    /* $F3C0: 99 */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F3C3:;
    /* $F3C3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EFF3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EFF3");
#endif
label_EFF3:;
    /* $EFF3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EFF7; }
label_EFF5:;
    /* $EFF5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_EFF7:;
    /* $EFF7: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_EFF9:;
    /* $EFF9: 9D */ maybe_trigger_vblank(5); nes_write((0x0368 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EFFC:;
    /* $EFFC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_EFFE:;
    /* $EFFE: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBDE(); g_code_window_base = _swb; }
label_F001:;
    /* $F001: 9D */ maybe_trigger_vblank(5); nes_write((0x0369 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F004:;
    /* $F004: 9D */ maybe_trigger_vblank(5); nes_write((0x036D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F007:;
    /* $F007: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F00A:;
    /* $F00A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_F00C:;
    /* $F00C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F010; }
label_F00E:;
    /* $F00E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2D; FLAG_NZ(g_cpu.A);
label_F010:;
    /* $F010: 9D */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F013:;
    /* $F013: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F014:;
    /* $F014: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F015:;
    /* $F015: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_F016:;
    /* $F016: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F017:;
    /* $F017: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_F019:;
    /* $F019: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F01A:;
    /* $F01A: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F01D:;
    /* $F01D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F020:;
    /* $F020: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EFE3(); g_code_window_base = _swb; } return;
}

void func_F1F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F1F8");
#endif
label_F1F8:;
    /* $F1F8: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_F1FA:;
    /* $F1FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_F1FC:;
    /* $F1FC: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_F1FE:;
    /* $F1FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_F200:;
    /* $F200: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_F202:;
    /* $F202: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_F205:;
    /* $F205: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F206:;
    /* $F206: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_F208:;
    /* $F208: 8D */ maybe_trigger_vblank(4); nes_write(0x03E8, g_cpu.A);
label_F20B:;
    /* $F20B: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x03E8); FLAG_NZ(g_cpu.Y);
label_F20E:;
    /* $F20E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x10; g_cpu.C=(g_cpu.Y>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_F210:;
    /* $F210: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F215; }
label_F212:;
    /* $F212: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F264(); g_code_window_base = _swb; } return;
label_F215:;
    /* $F215: 84 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.Y);
label_F217:;
    /* $F217: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6D); FLAG_NZ(g_cpu.A);
label_F219:;
    /* $F219: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_F21B:;
    /* $F21B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F21C:;
    /* $F21C: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E002(); g_code_window_base = _swb; }
label_F21F:;
    /* $F21F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFDE, -1);
label_F222:;
    /* $F222: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_F224:;
    /* $F224: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F227:;
    /* $F227: 8D */ maybe_trigger_vblank(4); nes_write(0x036D, g_cpu.A);
label_F22A:;
    /* $F22A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F22D:;
    /* $F22D: 8D */ maybe_trigger_vblank(4); nes_write(0x0369, g_cpu.A);
label_F230:;
    /* $F230: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBDE(); g_code_window_base = _swb; }
label_F233:;
    /* $F233: 8D */ maybe_trigger_vblank(4); nes_write(0x036A, g_cpu.A);
label_F236:;
    /* $F236: 8D */ maybe_trigger_vblank(4); nes_write(0x036E, g_cpu.A);
label_F239:;
    /* $F239: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_F23B:;
    /* $F23B: 8D */ maybe_trigger_vblank(4); nes_write(0x036F, g_cpu.A);
label_F23E:;
    /* $F23E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F240:;
    /* $F240: 8D */ maybe_trigger_vblank(4); nes_write(0x0368, g_cpu.A);
label_F243:;
    /* $F243: 8D */ maybe_trigger_vblank(4); nes_write(0x036B, g_cpu.A);
label_F246:;
    /* $F246: 8D */ maybe_trigger_vblank(4); nes_write(0x036C, g_cpu.A);
label_F249:;
    /* $F249: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_F24B:;
    /* $F24B: 8D */ maybe_trigger_vblank(4); nes_write(0x0370, g_cpu.A);
label_F24E:;
    /* $F24E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_F251:;
    /* $F251: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_F253:;
    /* $F253: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_F256:;
    /* $F256: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_F258:;
    /* $F258: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F656(); g_code_window_base = _swb; }
label_F25B:;
    /* $F25B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F25E:;
    /* $F25E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F261:;
    /* $F261: 4C */ maybe_trigger_vblank(3); goto label_F20B;
}

void func_E1F3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E1F3");
#endif
label_E1F3:;
    /* $E1F3: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x4A03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E1F6:;
    /* $E1F6: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E1F7:;
    /* $E1F7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E1F8:;
    /* $E1F8: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E1FA:;
    /* $E1FA: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E1FB:;
    /* $E1FB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03EC); FLAG_NZ(g_cpu.A);
label_E1FE:;
    /* $E1FE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_E200:;
    /* $E200: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_E202:;
    /* $E202: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03ED); FLAG_NZ(g_cpu.A);
label_E205:;
    /* $E205: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_E207:;
    /* $E207: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E208:;
    /* $E208: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E209:;
    /* $E209: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E20B:;
    /* $E20B: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_E20D:;
    /* $E20D: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E23E(); g_code_window_base = _swb; }
label_E210:;
    /* $E210: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E211:;
    /* $E211: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E212:;
    /* $E212: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03ED; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E215:;
    /* $E215: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03ED; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E218:;
    /* $E218: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03ED); FLAG_NZ(g_cpu.A);
label_E21B:;
    /* $E21B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E21C:;
    /* $E21C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E21E:;
    /* $E21E: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E7); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E221:;
    /* $E221: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x01D9), -1); return; }
label_E223:;
    /* $E223: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x01D9), -1); return; }
label_E225:;
    /* $E225: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03EC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E228:;
    /* $E228: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03EC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E22B:;
    /* $E22B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_E22D:;
    /* $E22D: 8D */ maybe_trigger_vblank(4); nes_write(0x03ED, g_cpu.A);
label_E230:;
    /* $E230: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041C); FLAG_NZ(g_cpu.A);
label_E233:;
    /* $E233: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E234:;
    /* $E234: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_E236:;
    /* $E236: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E237:;
    /* $E237: 8D */ maybe_trigger_vblank(4); nes_write(0x041C, g_cpu.A);
label_E23A:;
    /* $E23A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E1D9(); g_code_window_base = _swb; } return;
}

void func_F1FB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F1FB");
#endif
label_F1FB:;
    /* $F1FB: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F1FC:;
    /* $F1FC: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_F1FE:;
    /* $F1FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_F200:;
    /* $F200: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_F202:;
    /* $F202: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_F205:;
    /* $F205: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F206:;
    /* $F206: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_F208:;
    /* $F208: 8D */ maybe_trigger_vblank(4); nes_write(0x03E8, g_cpu.A);
label_F20B:;
    /* $F20B: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x03E8); FLAG_NZ(g_cpu.Y);
label_F20E:;
    /* $F20E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x10; g_cpu.C=(g_cpu.Y>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_F210:;
    /* $F210: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F215; }
label_F212:;
    /* $F212: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F264(); g_code_window_base = _swb; } return;
label_F215:;
    /* $F215: 84 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.Y);
label_F217:;
    /* $F217: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6D); FLAG_NZ(g_cpu.A);
label_F219:;
    /* $F219: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_F21B:;
    /* $F21B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F21C:;
    /* $F21C: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E002(); g_code_window_base = _swb; }
label_F21F:;
    /* $F21F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xDFDE, -1);
label_F222:;
    /* $F222: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x1D); FLAG_NZ(g_cpu.Y);
label_F224:;
    /* $F224: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F227:;
    /* $F227: 8D */ maybe_trigger_vblank(4); nes_write(0x036D, g_cpu.A);
label_F22A:;
    /* $F22A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F22D:;
    /* $F22D: 8D */ maybe_trigger_vblank(4); nes_write(0x0369, g_cpu.A);
label_F230:;
    /* $F230: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EBDE(); g_code_window_base = _swb; }
label_F233:;
    /* $F233: 8D */ maybe_trigger_vblank(4); nes_write(0x036A, g_cpu.A);
label_F236:;
    /* $F236: 8D */ maybe_trigger_vblank(4); nes_write(0x036E, g_cpu.A);
label_F239:;
    /* $F239: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_F23B:;
    /* $F23B: 8D */ maybe_trigger_vblank(4); nes_write(0x036F, g_cpu.A);
label_F23E:;
    /* $F23E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F240:;
    /* $F240: 8D */ maybe_trigger_vblank(4); nes_write(0x0368, g_cpu.A);
label_F243:;
    /* $F243: 8D */ maybe_trigger_vblank(4); nes_write(0x036B, g_cpu.A);
label_F246:;
    /* $F246: 8D */ maybe_trigger_vblank(4); nes_write(0x036C, g_cpu.A);
label_F249:;
    /* $F249: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_F24B:;
    /* $F24B: 8D */ maybe_trigger_vblank(4); nes_write(0x0370, g_cpu.A);
label_F24E:;
    /* $F24E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_F251:;
    /* $F251: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_F253:;
    /* $F253: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_F256:;
    /* $F256: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_F258:;
    /* $F258: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F656(); g_code_window_base = _swb; }
label_F25B:;
    /* $F25B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F25E:;
    /* $F25E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F261:;
    /* $F261: 4C */ maybe_trigger_vblank(3); goto label_F20B;
}

void func_E3F0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E3F0");
#endif
label_E3F0:;
    /* $E3F0: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_E3F2:;
    /* $E3F2: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x6081 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E3F5:;
    /* $E3F5: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_E3F6:;
    /* $E3F6: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_E3F7:;
    /* $E3F7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_E3FA:;
    /* $E3FA: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E3FB:;
    /* $E3FB: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_E3FD:;
    /* $E3FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E3FF:;
    /* $E3FF: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_E401:;
    /* $E401: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_E403:;
    /* $E403: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E406:;
    /* $E406: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E407:;
    /* $E407: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E408:;
    /* $E408: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E409:;
    /* $E409: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E40A:;
    /* $E40A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E40B:;
    /* $E40B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E40E:;
    /* $E40E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_E410:;
    /* $E410: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E414; }
label_E412:;
    /* $E412: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xB5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E414:;
    /* $E414: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E415:;
    /* $E415: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E416:;
    /* $E416: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E418:;
    /* $E418: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E40B;
    }
label_E41A:;
    /* $E41A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E41B:;
    /* $E41B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E41C:;
    /* $E41C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E3F3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E3F3");
#endif
label_E3F3:;
    /* $E3F3: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x60 + g_cpu.X) & 0xFF), g_cpu.A);
label_E3F5:;
    /* $E3F5: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_E3F6:;
    /* $E3F6: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_E3F7:;
    /* $E3F7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_E3FA:;
    /* $E3FA: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E3FB:;
    /* $E3FB: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_E3FD:;
    /* $E3FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E3FF:;
    /* $E3FF: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_E401:;
    /* $E401: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_E403:;
    /* $E403: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E406:;
    /* $E406: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E407:;
    /* $E407: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E408:;
    /* $E408: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E409:;
    /* $E409: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E40A:;
    /* $E40A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E40B:;
    /* $E40B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E40E:;
    /* $E40E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_E410:;
    /* $E410: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E414; }
label_E412:;
    /* $E412: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xB5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E414:;
    /* $E414: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E415:;
    /* $E415: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E416:;
    /* $E416: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E418:;
    /* $E418: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E40B;
    }
label_E41A:;
    /* $E41A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E41B:;
    /* $E41B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E41C:;
    /* $E41C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E2F3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E2F3");
#endif
label_E2F3:;
    /* $E2F3: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x3FA9, -1);
label_E2F6:;
    /* $E2F6: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E2F9:;
    /* $E2F9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E2FB:;
    /* $E2FB: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E2FE:;
    /* $E2FE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0180); FLAG_NZ(g_cpu.A);
label_E301:;
    /* $E301: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E304:;
    /* $E304: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0181); FLAG_NZ(g_cpu.A);
label_E307:;
    /* $E307: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E30A:;
    /* $E30A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0182); FLAG_NZ(g_cpu.A);
label_E30D:;
    /* $E30D: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E310:;
    /* $E310: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0183); FLAG_NZ(g_cpu.A);
label_E313:;
    /* $E313: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E316:;
    /* $E316: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0184); FLAG_NZ(g_cpu.A);
label_E319:;
    /* $E319: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E31C:;
    /* $E31C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0185); FLAG_NZ(g_cpu.A);
label_E31F:;
    /* $E31F: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E322:;
    /* $E322: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0186); FLAG_NZ(g_cpu.A);
label_E325:;
    /* $E325: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E328:;
    /* $E328: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0187); FLAG_NZ(g_cpu.A);
label_E32B:;
    /* $E32B: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E32E:;
    /* $E32E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0188); FLAG_NZ(g_cpu.A);
label_E331:;
    /* $E331: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E334:;
    /* $E334: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0189); FLAG_NZ(g_cpu.A);
label_E337:;
    /* $E337: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E33A:;
    /* $E33A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018A); FLAG_NZ(g_cpu.A);
label_E33D:;
    /* $E33D: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E340:;
    /* $E340: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018B); FLAG_NZ(g_cpu.A);
label_E343:;
    /* $E343: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E346:;
    /* $E346: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018C); FLAG_NZ(g_cpu.A);
label_E349:;
    /* $E349: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E34C:;
    /* $E34C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018D); FLAG_NZ(g_cpu.A);
label_E34F:;
    /* $E34F: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E352:;
    /* $E352: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018E); FLAG_NZ(g_cpu.A);
label_E355:;
    /* $E355: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E358:;
    /* $E358: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x018F); FLAG_NZ(g_cpu.A);
label_E35B:;
    /* $E35B: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E35E:;
    /* $E35E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_E360:;
    /* $E360: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E363:;
    /* $E363: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E365:;
    /* $E365: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E368:;
    /* $E368: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E36B:;
    /* $E36B: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E36E:;
    /* $E36E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F3FB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F3FB");
#endif
label_F3FB:;
    /* $F3FB: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xEE; FLAG_NZ(g_cpu.A);
label_F3FD:;
    /* $F3FD: E2 */ maybe_trigger_vblank(2); /* NOP */
label_F3FF:;
    /* $F3FF: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E2; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F402:;
    /* $F402: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F40B(); g_code_window_base = _swb; } return;
}

void func_F2FB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F2FB");
#endif
label_F2FB:;
    /* $F2FB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x12FF), -1); return; }
label_F2FD:;
    /* $F2FD: 99 */ maybe_trigger_vblank(5); nes_write((0x020F + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F300:;
    /* $F300: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F2E6(); g_code_window_base = _swb; } return;
label_F303:; return;
label_F304:; return;
label_F307:; return;
label_F30A:; return;
label_F30D:; return;
label_F310:; return;
label_F312:; return;
label_F315:; return;
label_F317:; return;
label_F31A:; return;
label_F31B:; return;
label_F31E:; return;
label_F321:; return;
label_F323:; return;
label_F324:; return;
label_F327:; return;
label_F329:; return;
label_F32C:; return;
label_F32E:; return;
label_F331:; return;
label_F333:; return;
label_F336:; return;
label_F338:; return;
label_F33B:; return;
label_F33D:; return;
label_F340:; return;
label_F343:; return;
label_F346:; return;
label_F348:; return;
label_F34A:; return;
label_F34C:; return;
label_F34D:; return;
label_F34E:; return;
label_F350:; return;
label_F351:; return;
label_F354:; return;
label_F357:; return;
label_F35A:; return;
label_F35D:; return;
label_F360:; return;
label_F362:; return;
label_F365:; return;
label_F367:; return;
label_F36A:; return;
label_F36B:; return;
label_F36E:; return;
label_F371:; return;
label_F373:; return;
label_F376:; return;
label_F378:; return;
label_F37B:; return;
label_F37D:; return;
label_F380:; return;
label_F382:; return;
label_F385:; return;
label_F387:; return;
label_F38A:; return;
label_F38C:; return;
label_F38F:; return;
label_F392:; return;
label_F395:; return;
label_F397:; return;
label_F399:; return;
label_F39A:; return;
label_F39B:; return;
label_F39D:; return;
label_F39E:; return;
label_F3A1:; return;
label_F3A4:; return;
label_F3A7:; return;
label_F3AA:; return;
label_F3AD:; return;
label_F3B0:; return;
label_F3B3:; return;
label_F3B6:; return;
label_F3B9:; return;
label_F3BB:; return;
label_F3BE:; return;
label_F3C0:; return;
label_F3C3:; return;
label_F3C4:; return;
label_F3C7:; return;
label_F3CA:; return;
label_F3CC:; return;
label_F3CF:; return;
label_F3D2:; return;
label_F3D5:; return;
label_F3D8:; return;
label_F3DB:; return;
label_F3DC:; return;
label_F3DF:; return;
label_F3E2:; return;
label_F3E4:; return;
label_F3E7:; return;
label_F3EA:; return;
label_F3ED:; return;
label_F3F0:; return;
label_F3F3:; return;
label_F3F4:; return;
label_F3F7:; return;
label_F3FA:; return;
label_F3FC:; return;
label_F3FF:; return;
label_F402:; return;
label_F405:; return;
label_F408:; return;
label_F40B:; return;
label_F40C:; return;
label_F40F:; return;
label_F412:; return;
label_F414:; return;
label_F417:; return;
label_F41A:; return;
label_F41D:; return;
label_F420:; return;
label_F423:; return;
label_F424:; return;
label_F426:; return;
label_F428:; return;
label_F429:; return;
label_F42B:; return;
label_F42C:; return;
label_F42E:; return;
label_F430:; return;
label_F432:; return;
label_F433:; return;
label_F435:; return;
label_F437:; return;
label_F439:; return;
label_F43B:; return;
label_F43D:; return;
label_F43E:; return;
label_F440:; return;
label_F441:; return;
label_F443:; return;
label_F445:; return;
label_F447:; return;
label_F448:; return;
label_F44A:; return;
label_F44C:; return;
label_F44D:; return;
label_F44F:; return;
label_F451:; return;
label_F454:; return;
label_F455:; return;
label_F457:; return;
label_F45A:; return;
label_F45C:; return;
label_F45E:; return;
label_F461:; return;
label_F463:; return;
label_F464:; return;
label_F467:; return;
label_F469:; return;
label_F46A:; return;
label_F46D:; return;
label_F46F:; return;
label_F472:; return;
label_F473:; return;
label_F476:; return;
label_F478:; return;
label_F479:; return;
label_F47C:; return;
label_F47F:; return;
label_F480:; return;
label_F482:; return;
label_F484:; return;
label_F485:; return;
label_F487:; return;
label_F48A:; return;
label_F48C:; return;
label_F48D:; return;
label_F48F:; return;
label_F491:; return;
label_F494:; return;
label_F496:; return;
label_F497:; return;
label_F499:; return;
label_F49B:; return;
label_F49E:; return;
label_F4A0:; return;
label_F4A1:; return;
label_F4A3:; return;
label_F4A4:; return;
label_F4A6:; return;
label_F4A9:; return;
label_F4AA:; return;
label_F4AB:; return;
label_F4AE:; return;
label_F4B1:; return;
label_F4B3:; return;
label_F4B5:; return;
label_F4B7:; return;
label_F4BA:; return;
label_F4BB:; return;
label_F4BD:; return;
label_F4C0:; return;
label_F4C1:; return;
label_F4C3:; return;
label_F4C5:; return;
label_F4C6:; return;
label_F4C9:; return;
label_F4CA:; return;
label_F4CC:; return;
label_F4CF:; return;
label_F4D0:; return;
label_F4D1:; return;
label_F4D4:; return;
label_F4D6:; return;
label_F4D7:; return;
label_F4D9:; return;
label_F4DB:; return;
label_F4DD:; return;
label_F4DF:; return;
label_F4E0:; return;
label_F4E2:; return;
label_F4E4:; return;
label_F4E7:; return;
label_F4E9:; return;
label_F4EA:; return;
label_F4EC:; return;
label_F4EF:; return;
label_F4F0:; return;
label_F4F3:; return;
label_F4F4:; return;
label_F4F6:; return;
label_F4F9:; return;
label_F4FB:; return;
label_F4FC:; return;
label_F4FE:; return;
label_F500:; return;
label_F503:; return;
label_F504:; return;
label_F507:; return;
label_F509:; return;
label_F50C:; return;
label_F50E:; return;
label_F510:; return;
label_F512:; return;
label_F514:; return;
label_F516:; return;
label_F518:; return;
label_F519:; return;
label_F51C:; return;
label_F51E:; return;
label_F521:; return;
label_F524:; return;
label_F527:; return;
label_F52A:; return;
label_F52B:; return;
label_F52D:; return;
label_F52F:; return;
label_F531:; return;
label_F534:; return;
label_F536:; return;
label_F539:; return;
label_F53C:; return;
label_F53F:; return;
label_F540:; return;
label_F542:; return;
label_F544:; return;
label_F547:; return;
label_F548:; return;
label_F54A:; return;
label_F54B:; return;
label_F54E:; return;
label_F550:; return;
label_F553:; return;
label_F555:; return;
label_F558:; return;
label_F55A:; return;
label_F55C:; return;
label_F55E:; return;
label_F560:; return;
label_F562:; return;
label_F563:; return;
label_F565:; return;
label_F567:; return;
label_F569:; return;
label_F56B:; return;
label_F56D:; return;
label_F570:; return;
label_F572:; return;
label_F573:; return;
label_F574:; return;
label_F575:; return;
label_F576:; return;
label_F577:; return;
label_F579:; return;
label_F57A:; return;
label_F57C:; return;
label_F57E:; return;
label_F57F:; return;
label_F580:; return;
label_F582:; return;
label_F584:; return;
label_F585:; return;
label_F587:; return;
label_F58A:; return;
label_F58C:; return;
label_F58E:; return;
label_F590:; return;
label_F592:; return;
label_F594:; return;
label_F596:; return;
label_F598:; return;
label_F599:; return;
label_F59B:; return;
label_F59D:; return;
label_F59F:; return;
label_F5A1:; return;
label_F5A3:; return;
label_F5A6:; return;
label_F5A7:; return;
label_F5A8:; return;
label_F5A9:; return;
label_F5AA:; return;
label_F5AC:; return;
label_F5AD:; return;
label_F5B0:; return;
label_F5B3:; return;
label_F5B5:; return;
label_F5B7:; return;
label_F5B8:; return;
label_F5BA:; return;
label_F5BC:; return;
label_F5BE:; return;
label_F5C0:; return;
label_F5C1:; return;
label_F5C3:; return;
label_F5C4:; return;
label_F5C6:; return;
label_F5C7:; return;
label_F5CA:; return;
label_F5CB:; return;
label_F5CE:; return;
label_F5D0:; return;
label_F5D3:; return;
label_F5D4:; return;
label_F5D6:; return;
label_F5D7:; return;
label_F5D9:; return;
label_F5DC:; return;
label_F5DD:; return;
label_F5DF:; return;
label_F5E0:; return;
label_F5E2:; return;
label_F5E3:; return;
label_F5E5:; return;
label_F5E6:; return;
label_F5E8:; return;
label_F5EA:; return;
label_F5EC:; return;
label_F5EE:; return;
label_F5F0:; return;
label_F5F2:; return;
label_F5F3:; return;
label_F5F5:; return;
label_F5F7:; return;
label_F5F9:; return;
label_F5FC:; return;
label_F5FE:; return;
label_F600:; return;
label_F602:; return;
label_F605:; return;
label_F607:; return;
label_F609:; return;
label_F60B:; return;
label_F60E:; return;
label_F610:; return;
label_F612:; return;
label_F615:; return;
label_F617:; return;
label_F61A:; return;
label_F61C:; return;
label_F61F:; return;
label_F621:; return;
label_F623:; return;
label_F625:; return;
label_F627:; return;
label_F629:; return;
label_F62B:; return;
label_F62E:; return;
label_F62F:; return;
label_F631:; return;
label_F632:; return;
label_F634:; return;
label_F636:; return;
label_F638:; return;
label_F63A:; return;
label_F63C:; return;
label_F63E:; return;
label_F641:; return;
label_F643:; return;
label_F646:; return;
label_F648:; return;
label_F64B:; return;
label_F64C:; return;
label_F64E:; return;
label_F650:; return;
label_F652:; return;
label_F655:; return;
label_F656:; return;
label_F658:; return;
label_F65A:; return;
label_F65C:; return;
label_F65E:; return;
label_F65F:; return;
label_F660:; return;
label_F662:; return;
label_F664:; return;
label_F665:; return;
label_F667:; return;
label_F669:; return;
label_F66B:; return;
label_F66D:; return;
label_F66E:; return;
label_F670:; return;
label_F672:; return;
label_F673:; return;
label_F674:; return;
label_F675:; return;
label_F676:; return;
label_F678:; return;
label_F67A:; return;
label_F67C:; return;
label_F67D:; return;
label_F67F:; return;
label_F680:; return;
label_F682:; return;
label_F685:; return;
label_F686:; return;
label_F688:; return;
label_F68B:; return;
label_F68C:; return;
label_F68E:; return;
label_F690:; return;
label_F692:; return;
label_F695:; return;
label_F697:; return;
label_F699:; return;
label_F69C:; return;
label_F69F:; return;
label_F6A0:; return;
label_F6A2:; return;
label_F6A3:; return;
label_F6A5:; return;
label_F6A7:; return;
label_F6A9:; return;
label_F6AB:; return;
label_F6AD:; return;
label_F6AF:; return;
label_F6B1:; return;
label_F6B3:; return;
label_F6B6:; return;
label_F6B7:; return;
label_F6BA:; return;
label_F6BB:; return;
label_F6BC:; return;
label_F6BD:; return;
label_F6BE:; return;
label_F6C0:; return;
label_F6C1:; return;
label_F6C4:; return;
label_F6C5:; return;
label_F6C6:; return;
label_F6C9:; return;
label_F6CB:; return;
label_F6CD:; return;
label_F6CE:; return;
label_F6CF:; return;
label_F6D2:; return;
label_F6D3:; return;
label_F6D5:; return;
label_F6D7:; return;
label_F6D8:; return;
label_F6D9:; return;
label_F6DC:; return;
label_F6DD:; return;
label_F6DE:; return;
label_F6DF:; return;
label_F6E1:; return;
label_F6E2:; return;
label_F6E4:; return;
label_F6E7:; return;
label_F6EA:; return;
label_F6EC:; return;
label_F6EF:; return;
label_F6F1:; return;
label_F6F4:; return;
label_F6F6:; return;
label_F6F7:; return;
label_F6F9:; return;
label_F6FB:; return;
label_F6FE:; return;
label_F700:; return;
label_F703:; return;
label_F705:; return;
label_F708:; return;
label_F70B:; return;
label_F70E:; return;
label_F70F:; return;
label_F710:; return;
label_F711:; return;
label_F712:; return;
label_F713:; return;
label_F714:; return;
label_F715:; return;
label_F716:; return;
label_F717:; return;
label_F718:; return;
label_F719:; return;
label_F71A:; return;
label_F71B:; return;
label_F71C:; return;
label_F71D:; return;
label_F71E:; return;
label_F71F:; return;
label_F720:; return;
label_F721:; return;
label_F722:; return;
label_F723:; return;
label_F724:; return;
label_F725:; return;
label_F726:; return;
label_F727:; return;
label_F728:; return;
label_F729:; return;
label_F72A:; return;
label_F72B:; return;
label_F72C:; return;
label_F72D:; return;
label_F72E:; return;
label_F72F:; return;
label_F730:; return;
label_F731:; return;
label_F732:; return;
label_F733:; return;
label_F734:; return;
label_F735:; return;
label_F736:; return;
label_F737:; return;
label_F738:; return;
label_F739:; return;
label_F73A:; return;
label_F73B:; return;
label_F73C:; return;
label_F73D:; return;
label_F73E:; return;
label_F73F:; return;
label_F740:; return;
label_F741:; return;
label_F742:; return;
label_F743:; return;
label_F744:; return;
label_F745:; return;
label_F746:; return;
label_F747:; return;
label_F748:; return;
label_F749:; return;
label_F74A:; return;
label_F74B:; return;
label_F74C:; return;
label_F74D:; return;
label_F74E:; return;
label_F74F:; return;
label_F750:; return;
label_F751:; return;
label_F752:; return;
label_F753:; return;
label_F754:; return;
label_F755:; return;
label_F756:; return;
label_F757:; return;
label_F758:; return;
label_F759:; return;
label_F75A:; return;
label_F75B:; return;
label_F75C:; return;
label_F75D:; return;
label_F75E:; return;
label_F75F:; return;
label_F760:; return;
label_F761:; return;
label_F762:; return;
label_F763:; return;
label_F764:; return;
label_F765:; return;
label_F766:; return;
label_F767:; return;
label_F768:; return;
label_F769:; return;
label_F76A:; return;
label_F76B:; return;
label_F76C:; return;
label_F76D:; return;
label_F76E:; return;
label_F76F:; return;
label_F770:; return;
label_F771:; return;
label_F772:; return;
label_F773:; return;
label_F774:; return;
label_F775:; return;
label_F776:; return;
label_F777:; return;
label_F778:; return;
label_F779:; return;
label_F77A:; return;
label_F77B:; return;
label_F77C:; return;
label_F77D:; return;
label_F77E:; return;
label_F77F:; return;
label_F780:; return;
label_F781:; return;
label_F782:; return;
label_F783:; return;
label_F784:; return;
label_F785:; return;
label_F786:; return;
label_F787:; return;
label_F788:; return;
label_F789:; return;
label_F78A:; return;
label_F78B:; return;
label_F78C:; return;
label_F78D:; return;
label_F78E:; return;
label_F78F:; return;
label_F790:; return;
label_F791:; return;
label_F792:; return;
label_F793:; return;
label_F794:; return;
label_F795:; return;
label_F796:; return;
label_F797:; return;
label_F798:; return;
label_F799:; return;
label_F79A:; return;
label_F79B:; return;
label_F79C:; return;
label_F79D:; return;
label_F79E:; return;
label_F79F:; return;
label_F7A0:; return;
label_F7A1:; return;
label_F7A2:; return;
label_F7A3:; return;
label_F7A4:; return;
label_F7A5:; return;
label_F7A6:; return;
label_F7A7:; return;
label_F7A8:; return;
label_F7A9:; return;
label_F7AA:; return;
label_F7AB:; return;
label_F7AC:; return;
label_F7AD:; return;
label_F7AE:; return;
label_F7AF:; return;
label_F7B0:; return;
label_F7B1:; return;
label_F7B2:; return;
label_F7B3:; return;
label_F7B4:; return;
label_F7B5:; return;
label_F7B6:; return;
label_F7B7:; return;
label_F7B8:; return;
label_F7B9:; return;
label_F7BA:; return;
label_F7BB:; return;
label_F7BC:; return;
label_F7BD:; return;
label_F7BE:; return;
label_F7BF:; return;
label_F7C0:; return;
label_F7C1:; return;
label_F7C2:; return;
label_F7C3:; return;
label_F7C4:; return;
label_F7C5:; return;
label_F7C6:; return;
label_F7C7:; return;
label_F7C8:; return;
label_F7C9:; return;
label_F7CA:; return;
label_F7CB:; return;
label_F7CC:; return;
label_F7CD:; return;
label_F7CE:; return;
label_F7CF:; return;
label_F7D0:; return;
label_F7D1:; return;
label_F7D2:; return;
label_F7D3:; return;
label_F7D4:; return;
label_F7D5:; return;
label_F7D6:; return;
label_F7D7:; return;
label_F7D8:; return;
label_F7D9:; return;
label_F7DA:; return;
label_F7DB:; return;
label_F7DC:; return;
label_F7DD:; return;
label_F7DE:; return;
label_F7DF:; return;
label_F7E0:; return;
label_F7E1:; return;
label_F7E2:; return;
label_F7E3:; return;
label_F7E4:; return;
label_F7E5:; return;
label_F7E6:; return;
label_F7E7:; return;
label_F7E8:; return;
label_F7E9:; return;
label_F7EA:; return;
label_F7EB:; return;
label_F7EC:; return;
label_F7ED:; return;
label_F7EE:; return;
label_F7EF:; return;
label_F7F0:; return;
label_F7F1:; return;
label_F7F2:; return;
label_F7F3:; return;
label_F7F4:; return;
label_F7F5:; return;
label_F7F6:; return;
label_F7F7:; return;
label_F7F8:; return;
label_F7F9:; return;
label_F7FA:; return;
label_F7FB:; return;
label_F7FC:; return;
label_F7FD:; return;
label_F7FE:; return;
label_F7FF:; return;
label_F800:; return;
label_F801:; return;
label_F802:; return;
label_F803:; return;
label_F804:; return;
label_F805:; return;
label_F806:; return;
label_F807:; return;
label_F808:; return;
label_F809:; return;
label_F80A:; return;
label_F80B:; return;
label_F80C:; return;
label_F80D:; return;
label_F80E:; return;
label_F80F:; return;
label_F810:; return;
label_F811:; return;
label_F812:; return;
label_F813:; return;
label_F814:; return;
label_F815:; return;
label_F816:; return;
label_F817:; return;
label_F818:; return;
label_F819:; return;
label_F81A:; return;
label_F81B:; return;
label_F81C:; return;
label_F81D:; return;
label_F81E:; return;
label_F81F:; return;
label_F820:; return;
label_F821:; return;
label_F822:; return;
label_F823:; return;
label_F824:; return;
label_F825:; return;
label_F826:; return;
label_F827:; return;
label_F828:; return;
label_F829:; return;
label_F82A:; return;
label_F82B:; return;
label_F82C:; return;
label_F82D:; return;
label_F82E:; return;
label_F82F:; return;
label_F830:; return;
label_F831:; return;
label_F832:; return;
label_F833:; return;
label_F834:; return;
label_F835:; return;
label_F836:; return;
label_F837:; return;
label_F838:; return;
label_F839:; return;
label_F83A:; return;
label_F83B:; return;
label_F83C:; return;
label_F83D:; return;
label_F83E:; return;
label_F83F:; return;
label_F840:; return;
label_F841:; return;
label_F842:; return;
label_F843:; return;
label_F844:; return;
label_F845:; return;
label_F846:; return;
label_F847:; return;
label_F848:; return;
label_F849:; return;
label_F84A:; return;
label_F84B:; return;
label_F84C:; return;
label_F84D:; return;
label_F84E:; return;
label_F84F:; return;
label_F850:; return;
label_F851:; return;
label_F852:; return;
label_F853:; return;
label_F854:; return;
label_F855:; return;
label_F856:; return;
label_F857:; return;
label_F858:; return;
label_F859:; return;
label_F85A:; return;
label_F85B:; return;
label_F85C:; return;
label_F85D:; return;
label_F85E:; return;
label_F85F:; return;
label_F860:; return;
label_F861:; return;
label_F862:; return;
label_F863:; return;
label_F864:; return;
label_F865:; return;
label_F866:; return;
label_F867:; return;
label_F868:; return;
label_F869:; return;
label_F86A:; return;
label_F86B:; return;
label_F86C:; return;
label_F86D:; return;
label_F86E:; return;
label_F86F:; return;
label_F870:; return;
label_F871:; return;
label_F872:; return;
label_F873:; return;
label_F874:; return;
label_F875:; return;
label_F876:; return;
label_F877:; return;
label_F878:; return;
label_F879:; return;
label_F87A:; return;
label_F87B:; return;
label_F87C:; return;
label_F87D:; return;
label_F87E:; return;
label_F87F:; return;
label_F880:; return;
label_F881:; return;
label_F882:; return;
label_F883:; return;
label_F884:; return;
label_F885:; return;
label_F886:; return;
label_F887:; return;
label_F888:; return;
label_F889:; return;
label_F88A:; return;
label_F88B:; return;
label_F88C:; return;
label_F88D:; return;
label_F88E:; return;
label_F88F:; return;
label_F890:; return;
label_F891:; return;
label_F892:; return;
label_F893:; return;
label_F894:; return;
label_F895:; return;
label_F896:; return;
label_F897:; return;
label_F898:; return;
label_F899:; return;
label_F89A:; return;
label_F89B:; return;
label_F89C:; return;
label_F89D:; return;
label_F89E:; return;
label_F89F:; return;
label_F8A0:; return;
label_F8A1:; return;
label_F8A2:; return;
label_F8A3:; return;
label_F8A4:; return;
label_F8A5:; return;
label_F8A6:; return;
label_F8A7:; return;
label_F8A8:; return;
label_F8A9:; return;
label_F8AA:; return;
label_F8AB:; return;
label_F8AC:; return;
label_F8AD:; return;
label_F8AE:; return;
label_F8AF:; return;
label_F8B0:; return;
label_F8B1:; return;
label_F8B2:; return;
label_F8B3:; return;
label_F8B4:; return;
label_F8B5:; return;
label_F8B6:; return;
label_F8B7:; return;
label_F8B8:; return;
label_F8B9:; return;
label_F8BA:; return;
label_F8BB:; return;
label_F8BC:; return;
label_F8BD:; return;
label_F8BE:; return;
label_F8BF:; return;
label_F8C0:; return;
label_F8C1:; return;
label_F8C2:; return;
label_F8C3:; return;
label_F8C4:; return;
label_F8C5:; return;
label_F8C6:; return;
label_F8C7:; return;
label_F8C8:; return;
label_F8C9:; return;
label_F8CA:; return;
label_F8CB:; return;
label_F8CC:; return;
label_F8CD:; return;
label_F8CE:; return;
label_F8CF:; return;
label_F8D0:; return;
label_F8D1:; return;
label_F8D2:; return;
label_F8D3:; return;
label_F8D4:; return;
label_F8D5:; return;
label_F8D6:; return;
label_F8D7:; return;
label_F8D8:; return;
label_F8D9:; return;
label_F8DA:; return;
label_F8DB:; return;
label_F8DC:; return;
label_F8DD:; return;
label_F8DE:; return;
label_F8DF:; return;
label_F8E0:; return;
label_F8E1:; return;
label_F8E2:; return;
label_F8E3:; return;
label_F8E4:; return;
label_F8E5:; return;
label_F8E6:; return;
label_F8E7:; return;
label_F8E8:; return;
label_F8E9:; return;
label_F8EA:; return;
label_F8EB:; return;
label_F8EC:; return;
label_F8ED:; return;
label_F8EE:; return;
label_F8EF:; return;
label_F8F0:; return;
label_F8F1:; return;
label_F8F2:; return;
label_F8F3:; return;
label_F8F4:; return;
label_F8F5:; return;
label_F8F6:; return;
label_F8F7:; return;
label_F8F8:; return;
label_F8F9:; return;
label_F8FA:; return;
label_F8FB:; return;
label_F8FC:; return;
label_F8FD:; return;
label_F8FE:; return;
label_F8FF:; return;
label_F900:; return;
label_F901:; return;
label_F902:; return;
label_F903:; return;
label_F904:; return;
label_F905:; return;
label_F906:; return;
label_F907:; return;
label_F908:; return;
label_F909:; return;
label_F90A:; return;
label_F90B:; return;
label_F90C:; return;
label_F90D:; return;
label_F90E:; return;
label_F90F:; return;
label_F910:; return;
label_F911:; return;
label_F912:; return;
label_F913:; return;
label_F914:; return;
label_F915:; return;
label_F916:; return;
label_F917:; return;
label_F918:; return;
label_F919:; return;
label_F91A:; return;
label_F91B:; return;
label_F91C:; return;
label_F91D:; return;
label_F91E:; return;
label_F91F:; return;
label_F920:; return;
label_F921:; return;
label_F922:; return;
label_F923:; return;
label_F924:; return;
label_F925:; return;
label_F926:; return;
label_F927:; return;
label_F928:; return;
label_F929:; return;
label_F92A:; return;
label_F92B:; return;
label_F92C:; return;
label_F92D:; return;
label_F92E:; return;
label_F92F:; return;
label_F930:; return;
label_F931:; return;
label_F932:; return;
label_F933:; return;
label_F934:; return;
label_F935:; return;
label_F936:; return;
label_F937:; return;
label_F938:; return;
label_F939:; return;
label_F93A:; return;
label_F93B:; return;
label_F93C:; return;
label_F93D:; return;
label_F93E:; return;
label_F93F:; return;
label_F940:; return;
label_F941:; return;
label_F942:; return;
label_F943:; return;
label_F944:; return;
label_F945:; return;
label_F946:; return;
label_F947:; return;
label_F948:; return;
label_F949:; return;
label_F94A:; return;
label_F94B:; return;
label_F94C:; return;
label_F94D:; return;
label_F94E:; return;
label_F94F:; return;
label_F950:; return;
label_F951:; return;
label_F952:; return;
label_F953:; return;
label_F954:; return;
label_F955:; return;
label_F956:; return;
label_F957:; return;
label_F958:; return;
label_F959:; return;
label_F95A:; return;
label_F95B:; return;
label_F95C:; return;
label_F95D:; return;
label_F95E:; return;
label_F95F:; return;
label_F960:; return;
label_F961:; return;
label_F962:; return;
label_F963:; return;
label_F964:; return;
label_F965:; return;
label_F966:; return;
label_F967:; return;
label_F968:; return;
label_F969:; return;
label_F96A:; return;
label_F96B:; return;
label_F96C:; return;
label_F96D:; return;
label_F96E:; return;
label_F96F:; return;
label_F970:; return;
label_F971:; return;
label_F972:; return;
label_F973:; return;
label_F974:; return;
label_F975:; return;
label_F976:; return;
label_F977:; return;
label_F978:; return;
label_F979:; return;
label_F97A:; return;
label_F97B:; return;
label_F97C:; return;
label_F97D:; return;
label_F97E:; return;
label_F97F:; return;
label_F980:; return;
label_F981:; return;
label_F982:; return;
label_F983:; return;
label_F984:; return;
label_F985:; return;
label_F986:; return;
label_F987:; return;
label_F988:; return;
label_F989:; return;
label_F98A:; return;
label_F98B:; return;
label_F98C:; return;
label_F98D:; return;
label_F98E:; return;
label_F98F:; return;
label_F990:; return;
label_F991:; return;
label_F992:; return;
label_F993:; return;
label_F994:; return;
label_F995:; return;
label_F996:; return;
label_F997:; return;
label_F998:; return;
label_F999:; return;
label_F99A:; return;
label_F99B:; return;
label_F99C:; return;
label_F99D:; return;
label_F99E:; return;
label_F99F:; return;
label_F9A0:; return;
label_F9A1:; return;
label_F9A2:; return;
label_F9A3:; return;
label_F9A4:; return;
label_F9A5:; return;
label_F9A6:; return;
label_F9A7:; return;
label_F9A8:; return;
label_F9A9:; return;
label_F9AA:; return;
label_F9AB:; return;
label_F9AC:; return;
label_F9AD:; return;
label_F9AE:; return;
label_F9AF:; return;
label_F9B0:; return;
label_F9B1:; return;
label_F9B2:; return;
label_F9B3:; return;
label_F9B4:; return;
label_F9B5:; return;
label_F9B6:; return;
label_F9B7:; return;
label_F9B8:; return;
label_F9B9:; return;
label_F9BA:; return;
label_F9BB:; return;
label_F9BC:; return;
label_F9BD:; return;
label_F9BE:; return;
label_F9BF:; return;
label_F9C0:; return;
label_F9C1:; return;
label_F9C2:; return;
label_F9C3:; return;
label_F9C4:; return;
label_F9C5:; return;
label_F9C6:; return;
label_F9C7:; return;
label_F9C8:; return;
label_F9C9:; return;
label_F9CA:; return;
label_F9CB:; return;
label_F9CC:; return;
label_F9CD:; return;
label_F9CE:; return;
label_F9CF:; return;
label_F9D0:; return;
label_F9D1:; return;
label_F9D2:; return;
label_F9D3:; return;
label_F9D4:; return;
label_F9D5:; return;
label_F9D6:; return;
label_F9D7:; return;
label_F9D8:; return;
label_F9D9:; return;
label_F9DA:; return;
label_F9DB:; return;
label_F9DC:; return;
label_F9DD:; return;
label_F9DE:; return;
label_F9DF:; return;
label_F9E0:; return;
label_F9E1:; return;
label_F9E2:; return;
label_F9E3:; return;
label_F9E4:; return;
label_F9E5:; return;
label_F9E6:; return;
label_F9E7:; return;
label_F9E8:; return;
label_F9E9:; return;
label_F9EA:; return;
label_F9EB:; return;
label_F9EC:; return;
label_F9ED:; return;
label_F9EE:; return;
label_F9EF:; return;
label_F9F0:; return;
label_F9F1:; return;
label_F9F2:; return;
label_F9F3:; return;
label_F9F4:; return;
label_F9F5:; return;
label_F9F6:; return;
label_F9F7:; return;
label_F9F8:; return;
label_F9F9:; return;
label_F9FA:; return;
label_F9FB:; return;
label_F9FC:; return;
label_F9FD:; return;
label_F9FE:; return;
label_F9FF:; return;
label_FA00:; return;
label_FA01:; return;
label_FA02:; return;
label_FA03:; return;
label_FA04:; return;
label_FA05:; return;
label_FA06:; return;
label_FA07:; return;
label_FA08:; return;
label_FA09:; return;
label_FA0A:; return;
label_FA0B:; return;
label_FA0C:; return;
label_FA0D:; return;
label_FA0E:; return;
label_FA0F:; return;
label_FA10:; return;
label_FA11:; return;
label_FA12:; return;
label_FA13:; return;
label_FA14:; return;
label_FA15:; return;
label_FA16:; return;
label_FA17:; return;
label_FA18:; return;
label_FA19:; return;
label_FA1A:; return;
label_FA1B:; return;
label_FA1C:; return;
label_FA1D:; return;
label_FA1E:; return;
label_FA1F:; return;
label_FA20:; return;
label_FA21:; return;
label_FA22:; return;
label_FA23:; return;
label_FA24:; return;
label_FA25:; return;
label_FA26:; return;
label_FA27:; return;
label_FA28:; return;
label_FA29:; return;
label_FA2A:; return;
label_FA2B:; return;
label_FA2C:; return;
label_FA2D:; return;
label_FA2E:; return;
label_FA2F:; return;
label_FA30:; return;
label_FA31:; return;
label_FA32:; return;
label_FA33:; return;
label_FA34:; return;
label_FA35:; return;
label_FA36:; return;
label_FA37:; return;
label_FA38:; return;
label_FA39:; return;
label_FA3A:; return;
label_FA3B:; return;
label_FA3C:; return;
label_FA3D:; return;
label_FA3E:; return;
label_FA3F:; return;
label_FA40:; return;
label_FA41:; return;
label_FA42:; return;
label_FA43:; return;
label_FA44:; return;
label_FA45:; return;
label_FA46:; return;
label_FA47:; return;
label_FA48:; return;
label_FA49:; return;
label_FA4A:; return;
label_FA4B:; return;
label_FA4C:; return;
label_FA4D:; return;
label_FA4E:; return;
label_FA4F:; return;
label_FA50:; return;
label_FA51:; return;
label_FA52:; return;
label_FA53:; return;
label_FA54:; return;
label_FA55:; return;
label_FA56:; return;
label_FA57:; return;
label_FA58:; return;
label_FA59:; return;
label_FA5A:; return;
label_FA5B:; return;
label_FA5C:; return;
label_FA5D:; return;
label_FA5E:; return;
label_FA5F:; return;
label_FA60:; return;
label_FA61:; return;
label_FA62:; return;
label_FA63:; return;
label_FA64:; return;
label_FA65:; return;
label_FA66:; return;
label_FA67:; return;
label_FA68:; return;
label_FA69:; return;
label_FA6A:; return;
label_FA6B:; return;
label_FA6C:; return;
label_FA6D:; return;
label_FA6E:; return;
label_FA6F:; return;
label_FA70:; return;
label_FA71:; return;
label_FA72:; return;
label_FA73:; return;
label_FA74:; return;
label_FA75:; return;
label_FA76:; return;
label_FA77:; return;
label_FA78:; return;
label_FA79:; return;
label_FA7A:; return;
label_FA7B:; return;
label_FA7C:; return;
label_FA7D:; return;
label_FA7E:; return;
label_FA7F:; return;
label_FA80:; return;
label_FA81:; return;
label_FA82:; return;
label_FA83:; return;
label_FA84:; return;
label_FA85:; return;
label_FA86:; return;
label_FA87:; return;
label_FA88:; return;
label_FA89:; return;
label_FA8A:; return;
label_FA8B:; return;
label_FA8C:; return;
label_FA8D:; return;
label_FA8E:; return;
label_FA8F:; return;
label_FA90:; return;
label_FA91:; return;
label_FA92:; return;
label_FA93:; return;
label_FA94:; return;
label_FA95:; return;
label_FA96:; return;
label_FA97:; return;
label_FA98:; return;
label_FA99:; return;
label_FA9A:; return;
label_FA9B:; return;
label_FA9C:; return;
label_FA9D:; return;
label_FA9E:; return;
label_FA9F:; return;
label_FAA0:; return;
label_FAA1:; return;
label_FAA2:; return;
label_FAA3:; return;
label_FAA4:; return;
label_FAA5:; return;
label_FAA6:; return;
label_FAA7:; return;
label_FAA8:; return;
label_FAA9:; return;
label_FAAA:; return;
label_FAAB:; return;
label_FAAC:; return;
label_FAAD:; return;
label_FAAE:; return;
label_FAAF:; return;
label_FAB0:; return;
label_FAB1:; return;
label_FAB2:; return;
label_FAB3:; return;
label_FAB4:; return;
label_FAB5:; return;
label_FAB6:; return;
label_FAB7:; return;
label_FAB8:; return;
label_FAB9:; return;
label_FABA:; return;
label_FABB:; return;
label_FABC:; return;
label_FABD:; return;
label_FABE:; return;
label_FABF:; return;
label_FAC0:; return;
label_FAC1:; return;
label_FAC2:; return;
label_FAC3:; return;
label_FAC4:; return;
label_FAC5:; return;
label_FAC6:; return;
label_FAC7:; return;
label_FAC8:; return;
label_FAC9:; return;
label_FACA:; return;
label_FACB:; return;
label_FACC:; return;
label_FACD:; return;
label_FACE:; return;
label_FACF:; return;
label_FAD0:; return;
label_FAD1:; return;
label_FAD2:; return;
label_FAD3:; return;
label_FAD4:; return;
label_FAD5:; return;
label_FAD6:; return;
label_FAD7:; return;
label_FAD8:; return;
label_FAD9:; return;
label_FADA:; return;
label_FADB:; return;
label_FADC:; return;
label_FADD:; return;
label_FADE:; return;
label_FADF:; return;
label_FAE0:; return;
label_FAE1:; return;
label_FAE2:; return;
label_FAE3:; return;
label_FAE4:; return;
label_FAE5:; return;
label_FAE6:; return;
label_FAE7:; return;
label_FAE8:; return;
label_FAE9:; return;
label_FAEA:; return;
label_FAEB:; return;
label_FAEC:; return;
label_FAED:; return;
label_FAEE:; return;
label_FAEF:; return;
label_FAF0:; return;
label_FAF1:; return;
label_FAF2:; return;
label_FAF3:; return;
label_FAF4:; return;
label_FAF5:; return;
label_FAF6:; return;
label_FAF7:; return;
label_FAF8:; return;
label_FAF9:; return;
label_FAFA:; return;
label_FAFB:; return;
label_FAFC:; return;
label_FAFD:; return;
label_FAFE:; return;
label_FAFF:; return;
label_FB00:; return;
label_FB01:; return;
label_FB02:; return;
label_FB03:; return;
label_FB04:; return;
label_FB05:; return;
label_FB06:; return;
label_FB07:; return;
label_FB08:; return;
label_FB09:; return;
label_FB0A:; return;
label_FB0B:; return;
label_FB0C:; return;
label_FB0D:; return;
label_FB0E:; return;
label_FB0F:; return;
label_FB10:; return;
label_FB11:; return;
label_FB12:; return;
label_FB13:; return;
label_FB14:; return;
label_FB15:; return;
label_FB16:; return;
label_FB17:; return;
label_FB18:; return;
label_FB19:; return;
label_FB1A:; return;
label_FB1B:; return;
label_FB1C:; return;
label_FB1D:; return;
label_FB1E:; return;
label_FB1F:; return;
label_FB20:; return;
label_FB21:; return;
label_FB22:; return;
label_FB23:; return;
label_FB24:; return;
label_FB25:; return;
label_FB26:; return;
label_FB27:; return;
label_FB28:; return;
label_FB29:; return;
label_FB2A:; return;
label_FB2B:; return;
label_FB2C:; return;
label_FB2D:; return;
label_FB2E:; return;
label_FB2F:; return;
label_FB30:; return;
label_FB31:; return;
label_FB32:; return;
label_FB33:; return;
label_FB34:; return;
label_FB35:; return;
label_FB36:; return;
label_FB37:; return;
label_FB38:; return;
label_FB39:; return;
label_FB3A:; return;
label_FB3B:; return;
label_FB3C:; return;
label_FB3D:; return;
label_FB3E:; return;
label_FB3F:; return;
label_FB40:; return;
label_FB41:; return;
label_FB42:; return;
label_FB43:; return;
label_FB44:; return;
label_FB45:; return;
label_FB46:; return;
label_FB47:; return;
label_FB48:; return;
label_FB49:; return;
label_FB4A:; return;
label_FB4B:; return;
label_FB4C:; return;
label_FB4D:; return;
label_FB4E:; return;
label_FB4F:; return;
label_FB50:; return;
label_FB51:; return;
label_FB52:; return;
label_FB53:; return;
label_FB54:; return;
label_FB55:; return;
label_FB56:; return;
label_FB57:; return;
label_FB58:; return;
label_FB59:; return;
label_FB5A:; return;
label_FB5B:; return;
label_FB5C:; return;
label_FB5D:; return;
label_FB5E:; return;
label_FB5F:; return;
label_FB60:; return;
label_FB61:; return;
label_FB62:; return;
label_FB63:; return;
label_FB64:; return;
label_FB65:; return;
label_FB66:; return;
label_FB67:; return;
label_FB68:; return;
label_FB69:; return;
label_FB6A:; return;
label_FB6B:; return;
label_FB6C:; return;
label_FB6D:; return;
label_FB6E:; return;
label_FB6F:; return;
label_FB70:; return;
label_FB71:; return;
label_FB72:; return;
label_FB73:; return;
label_FB74:; return;
label_FB75:; return;
label_FB76:; return;
label_FB77:; return;
label_FB78:; return;
label_FB79:; return;
label_FB7A:; return;
label_FB7B:; return;
label_FB7C:; return;
label_FB7D:; return;
label_FB7E:; return;
label_FB7F:; return;
label_FB80:; return;
label_FB81:; return;
label_FB82:; return;
label_FB83:; return;
label_FB84:; return;
label_FB85:; return;
label_FB86:; return;
label_FB87:; return;
label_FB88:; return;
label_FB89:; return;
label_FB8A:; return;
label_FB8B:; return;
label_FB8C:; return;
label_FB8D:; return;
label_FB8E:; return;
label_FB8F:; return;
label_FB90:; return;
label_FB91:; return;
label_FB92:; return;
label_FB93:; return;
label_FB94:; return;
label_FB95:; return;
label_FB96:; return;
label_FB97:; return;
label_FB98:; return;
label_FB99:; return;
label_FB9A:; return;
label_FB9B:; return;
label_FB9C:; return;
label_FB9D:; return;
label_FB9E:; return;
label_FB9F:; return;
label_FBA0:; return;
label_FBA1:; return;
label_FBA2:; return;
label_FBA3:; return;
label_FBA4:; return;
label_FBA5:; return;
label_FBA6:; return;
label_FBA7:; return;
label_FBA8:; return;
label_FBA9:; return;
label_FBAA:; return;
label_FBAB:; return;
label_FBAC:; return;
label_FBAD:; return;
label_FBAE:; return;
label_FBAF:; return;
label_FBB0:; return;
label_FBB1:; return;
label_FBB2:; return;
label_FBB3:; return;
label_FBB4:; return;
label_FBB5:; return;
label_FBB6:; return;
label_FBB7:; return;
label_FBB8:; return;
label_FBB9:; return;
label_FBBA:; return;
label_FBBB:; return;
label_FBBC:; return;
label_FBBD:; return;
label_FBBE:; return;
label_FBBF:; return;
label_FBC0:; return;
label_FBC1:; return;
label_FBC2:; return;
label_FBC3:; return;
label_FBC4:; return;
label_FBC5:; return;
label_FBC6:; return;
label_FBC7:; return;
label_FBC8:; return;
label_FBC9:; return;
label_FBCA:; return;
label_FBCB:; return;
label_FBCC:; return;
label_FBCD:; return;
label_FBCE:; return;
label_FBCF:; return;
label_FBD0:; return;
label_FBD1:; return;
label_FBD2:; return;
label_FBD3:; return;
label_FBD4:; return;
label_FBD5:; return;
label_FBD6:; return;
label_FBD7:; return;
label_FBD8:; return;
label_FBD9:; return;
label_FBDA:; return;
label_FBDB:; return;
label_FBDC:; return;
label_FBDD:; return;
label_FBDE:; return;
label_FBDF:; return;
label_FBE0:; return;
label_FBE1:; return;
label_FBE2:; return;
label_FBE3:; return;
label_FBE4:; return;
label_FBE5:; return;
label_FBE6:; return;
label_FBE7:; return;
label_FBE8:; return;
label_FBE9:; return;
label_FBEA:; return;
label_FBEB:; return;
label_FBEC:; return;
label_FBED:; return;
label_FBEE:; return;
label_FBEF:; return;
label_FBF0:; return;
label_FBF1:; return;
label_FBF2:; return;
label_FBF3:; return;
label_FBF4:; return;
label_FBF5:; return;
label_FBF6:; return;
label_FBF7:; return;
label_FBF8:; return;
label_FBF9:; return;
label_FBFA:; return;
label_FBFB:; return;
label_FBFC:; return;
label_FBFD:; return;
label_FBFE:; return;
label_FBFF:; return;
label_FC00:; return;
label_FC01:; return;
label_FC02:; return;
label_FC03:; return;
label_FC04:; return;
label_FC05:; return;
label_FC06:; return;
label_FC07:; return;
label_FC08:; return;
label_FC09:; return;
label_FC0A:; return;
label_FC0B:; return;
label_FC0C:; return;
label_FC0D:; return;
label_FC0E:; return;
label_FC0F:; return;
label_FC10:; return;
label_FC11:; return;
label_FC12:; return;
label_FC13:; return;
label_FC14:; return;
label_FC15:; return;
label_FC16:; return;
label_FC17:; return;
label_FC18:; return;
label_FC19:; return;
label_FC1A:; return;
label_FC1B:; return;
label_FC1C:; return;
label_FC1D:; return;
label_FC1E:; return;
label_FC1F:; return;
label_FC20:; return;
label_FC21:; return;
label_FC22:; return;
label_FC23:; return;
label_FC24:; return;
label_FC25:; return;
label_FC26:; return;
label_FC27:; return;
label_FC28:; return;
label_FC29:; return;
label_FC2A:; return;
label_FC2B:; return;
label_FC2C:; return;
label_FC2D:; return;
label_FC2E:; return;
label_FC2F:; return;
label_FC30:; return;
label_FC31:; return;
label_FC32:; return;
label_FC33:; return;
label_FC34:; return;
label_FC35:; return;
label_FC36:; return;
label_FC37:; return;
label_FC38:; return;
label_FC39:; return;
label_FC3A:; return;
label_FC3B:; return;
label_FC3C:; return;
label_FC3D:; return;
label_FC3E:; return;
label_FC3F:; return;
label_FC40:; return;
label_FC41:; return;
label_FC42:; return;
label_FC43:; return;
label_FC44:; return;
label_FC45:; return;
label_FC46:; return;
label_FC47:; return;
label_FC48:; return;
label_FC49:; return;
label_FC4A:; return;
label_FC4B:; return;
label_FC4C:; return;
label_FC4D:; return;
label_FC4E:; return;
label_FC4F:; return;
label_FC50:; return;
label_FC51:; return;
label_FC52:; return;
label_FC53:; return;
label_FC54:; return;
label_FC55:; return;
label_FC56:; return;
label_FC57:; return;
label_FC58:; return;
label_FC59:; return;
label_FC5A:; return;
label_FC5B:; return;
label_FC5C:; return;
label_FC5D:; return;
label_FC5E:; return;
label_FC5F:; return;
label_FC60:; return;
label_FC61:; return;
label_FC62:; return;
label_FC63:; return;
label_FC64:; return;
label_FC65:; return;
label_FC66:; return;
label_FC67:; return;
label_FC68:; return;
label_FC69:; return;
label_FC6A:; return;
label_FC6B:; return;
label_FC6C:; return;
label_FC6D:; return;
label_FC6E:; return;
label_FC6F:; return;
label_FC70:; return;
label_FC71:; return;
label_FC72:; return;
label_FC73:; return;
label_FC74:; return;
label_FC75:; return;
label_FC76:; return;
label_FC77:; return;
label_FC78:; return;
label_FC79:; return;
label_FC7A:; return;
label_FC7B:; return;
label_FC7C:; return;
label_FC7D:; return;
label_FC7E:; return;
label_FC7F:; return;
label_FC80:; return;
label_FC81:; return;
label_FC82:; return;
label_FC83:; return;
label_FC84:; return;
label_FC85:; return;
label_FC86:; return;
label_FC87:; return;
label_FC88:; return;
label_FC89:; return;
label_FC8A:; return;
label_FC8B:; return;
label_FC8C:; return;
label_FC8D:; return;
label_FC8E:; return;
label_FC8F:; return;
label_FC90:; return;
label_FC91:; return;
label_FC92:; return;
label_FC93:; return;
label_FC94:; return;
label_FC95:; return;
label_FC96:; return;
label_FC97:; return;
label_FC98:; return;
label_FC99:; return;
label_FC9A:; return;
label_FC9B:; return;
label_FC9C:; return;
label_FC9D:; return;
label_FC9E:; return;
label_FC9F:; return;
label_FCA0:; return;
label_FCA1:; return;
label_FCA2:; return;
label_FCA3:; return;
label_FCA4:; return;
label_FCA5:; return;
label_FCA6:; return;
label_FCA7:; return;
label_FCA8:; return;
label_FCA9:; return;
label_FCAA:; return;
label_FCAB:; return;
label_FCAC:; return;
label_FCAD:; return;
label_FCAE:; return;
label_FCAF:; return;
label_FCB0:; return;
label_FCB1:; return;
label_FCB2:; return;
label_FCB3:; return;
label_FCB4:; return;
label_FCB5:; return;
label_FCB6:; return;
label_FCB7:; return;
label_FCB8:; return;
label_FCB9:; return;
label_FCBA:; return;
label_FCBB:; return;
label_FCBC:; return;
label_FCBD:; return;
label_FCBE:; return;
label_FCBF:; return;
label_FCC0:; return;
label_FCC1:; return;
label_FCC2:; return;
label_FCC3:; return;
label_FCC4:; return;
label_FCC5:; return;
label_FCC6:; return;
label_FCC7:; return;
label_FCC8:; return;
label_FCC9:; return;
label_FCCA:; return;
label_FCCB:; return;
label_FCCC:; return;
label_FCCD:; return;
label_FCCE:; return;
label_FCCF:; return;
label_FCD0:; return;
label_FCD1:; return;
label_FCD2:; return;
label_FCD3:; return;
label_FCD4:; return;
label_FCD5:; return;
label_FCD6:; return;
label_FCD7:; return;
label_FCD8:; return;
label_FCD9:; return;
label_FCDA:; return;
label_FCDB:; return;
label_FCDC:; return;
label_FCDD:; return;
label_FCDE:; return;
label_FCDF:; return;
label_FCE0:; return;
label_FCE1:; return;
label_FCE2:; return;
label_FCE3:; return;
label_FCE4:; return;
label_FCE5:; return;
label_FCE6:; return;
label_FCE7:; return;
label_FCE8:; return;
label_FCE9:; return;
label_FCEA:; return;
label_FCEB:; return;
label_FCEC:; return;
label_FCED:; return;
label_FCEE:; return;
label_FCEF:; return;
label_FCF0:; return;
label_FCF1:; return;
label_FCF2:; return;
label_FCF3:; return;
label_FCF4:; return;
label_FCF5:; return;
label_FCF6:; return;
label_FCF7:; return;
label_FCF8:; return;
label_FCF9:; return;
label_FCFA:; return;
label_FCFB:; return;
label_FCFC:; return;
label_FCFD:; return;
label_FCFE:; return;
label_FCFF:; return;
label_FD00:; return;
label_FD01:; return;
label_FD02:; return;
label_FD03:; return;
label_FD04:; return;
label_FD05:; return;
label_FD06:; return;
label_FD07:; return;
label_FD08:; return;
label_FD09:; return;
label_FD0A:; return;
label_FD0B:; return;
label_FD0C:; return;
label_FD0D:; return;
label_FD0E:; return;
label_FD0F:; return;
label_FD10:; return;
label_FD11:; return;
label_FD12:; return;
label_FD13:; return;
label_FD14:; return;
label_FD15:; return;
label_FD16:; return;
}

void func_CD7C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CD7C");
#endif
label_CD7C:;
    /* $CD7C: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x02C9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CD7F:;
    /* $CD7F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CD97; }
label_CD81:;
    /* $CD81: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0563); FLAG_NZ(g_cpu.A);
label_CD84:;
    /* $CD84: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CD92; }
label_CD86:;
    /* $CD86: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=4 addr=$811E */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x04; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_811E_b4();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_CD8C:;
    /* $CD8C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x05F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CD8F:;
    /* $CD8F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCDAB, -1); return;
label_CD92:;
    /* $CD92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CD94:;
    /* $CD94: 8D */ maybe_trigger_vblank(4); nes_write(0x05F0, g_cpu.A);
label_CD97:;
    /* $CD97: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_CD99:;
    /* $CD99: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CDAB; }
label_CD9B:;
    /* $CD9B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0564); FLAG_NZ(g_cpu.A);
label_CD9E:;
    /* $CD9E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CDA6; }
label_CDA0:;
    /* $CDA0: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=4 addr=$8121 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x04; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8121_b4();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_CDA6:;
    /* $CDA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CDA8:;
    /* $CDA8: 8D */ maybe_trigger_vblank(4); nes_write(0x05F0, g_cpu.A);
label_CDAB:;
    /* $CDAB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EC15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EC15");
#endif
label_EC15:;
    /* $EC15: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E8); FLAG_NZ(g_cpu.A);
label_EC18:;
    /* $EC18: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_EC19:;
    /* $EC19: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_EC1A:;
    /* $EC1A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_EC1B:;
    /* $EC1B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_EC1C:;
    /* $EC1C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_EC1D:;
    /* $EC1D: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E9); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_EC20:;
    /* $EC20: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_EC21:;
    /* $EC21: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EC24:;
    /* $EC24: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_EC26:;
    /* $EC26: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EC30; }
label_EC28:;
    /* $EC28: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_EC2A:;
    /* $EC2A: 8D */ maybe_trigger_vblank(4); nes_write(0x03F4, g_cpu.A);
label_EC2D:;
    /* $EC2D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EC46(); g_code_window_base = _swb; } return;
label_EC30:;
    /* $EC30: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EC33:;
    /* $EC33: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03E9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EC36:;
    /* $EC36: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E9); FLAG_NZ(g_cpu.A);
label_EC39:;
    /* $EC39: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFE; g_cpu.C=(g_cpu.A>=0xFE)?1:0; FLAG_NZ(r&0xFF); }
label_EC3B:;
    /* $EC3B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EC15;
    }
label_EC3D:;
    /* $EC3D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EC40:;
    /* $EC40: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EC43:;
    /* $EC43: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EC02(); g_code_window_base = _swb; } return;
}

void func_C636(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C636");
#endif
label_C636:;
    /* $C636: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD3) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C638:;
    /* $C638: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E264(); g_code_window_base = _swb; }
label_C63B:;
    /* $C63B: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5AD(); g_code_window_base = _swb; }
label_C63E:;
    /* $C63E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C640:;
    /* $C640: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_C643:;
    /* $C643: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_C646:;
    /* $C646: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A0); FLAG_NZ(g_cpu.A);
label_C649:;
    /* $C649: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C65A; }
label_C64B:;
    /* $C64B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_C64D:;
    /* $C64D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C65A; }
label_C64F:;
    /* $C64F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_C651:;
    /* $C651: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x90; FLAG_NZ(g_cpu.A);
label_C653:;
    /* $C653: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C65A; }
label_C655:;
    /* $C655: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_C657:;
    /* $C657: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_C65A:;
    /* $C65A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_C65C:;
    /* $C65C: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_C65E:;
    /* $C65E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_C661:;
    /* $C661: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_C663:;
    /* $C663: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C665:;
    /* $C665: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D9); FLAG_NZ(g_cpu.A);
label_C668:;
    /* $C668: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_C66A:;
    /* $C66A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C66C:;
    /* $C66C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_C66E:;
    /* $C66E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C670:;
    /* $C670: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_C672:;
    /* $C672: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C674:;
    /* $C674: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_C676:;
    /* $C676: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C678:;
    /* $C678: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_C67A:;
    /* $C67A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C67C:;
    /* $C67C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_C67E:;
    /* $C67E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C680:;
    /* $C680: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x32; g_cpu.C=(g_cpu.A>=0x32)?1:0; FLAG_NZ(r&0xFF); }
label_C682:;
    /* $C682: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C684:;
    /* $C684: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x33; g_cpu.C=(g_cpu.A>=0x33)?1:0; FLAG_NZ(r&0xFF); }
label_C686:;
    /* $C686: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C688:;
    /* $C688: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x34; g_cpu.C=(g_cpu.A>=0x34)?1:0; FLAG_NZ(r&0xFF); }
label_C68A:;
    /* $C68A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C68C:;
    /* $C68C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x36; g_cpu.C=(g_cpu.A>=0x36)?1:0; FLAG_NZ(r&0xFF); }
label_C68E:;
    /* $C68E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C690:;
    /* $C690: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x37; g_cpu.C=(g_cpu.A>=0x37)?1:0; FLAG_NZ(r&0xFF); }
label_C692:;
    /* $C692: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C694:;
    /* $C694: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_C696:;
    /* $C696: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C698:;
    /* $C698: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_C69A:;
    /* $C69A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C69C:;
    /* $C69C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1C; g_cpu.C=(g_cpu.A>=0x1C)?1:0; FLAG_NZ(r&0xFF); }
label_C69E:;
    /* $C69E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6A0:;
    /* $C6A0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB4); FLAG_NZ(g_cpu.A);
label_C6A2:;
    /* $C6A2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6A6; }
label_C6A4:;
    /* $C6A4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6A6:;
    /* $C6A6: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xAE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6A8:;
    /* $C6A8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6AA:;
    /* $C6AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_C6AC:;
    /* $C6AC: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_C6AE:;
    /* $C6AE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B0:;
    /* $C6B0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6B4; }
label_C6B2:;
    /* $C6B2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B4:;
    /* $C6B4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6B6:;
    /* $C6B6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6BA; }
label_C6B8:;
    /* $C6B8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C6BA:;
    /* $C6BA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC6E7, -1);
label_C6BD:;
    /* $C6BD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xCA38, -1);
label_C6C0:;
    /* $C6C0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_C6C2:;
    /* $C6C2: 8D */ maybe_trigger_vblank(4); nes_write(0x0409, g_cpu.A);
label_C6C5:;
    /* $C6C5: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F599(); g_code_window_base = _swb; }
label_C6C8:;
    /* $C6C8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048F); FLAG_NZ(g_cpu.A);
label_C6CB:;
    /* $C6CB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6CD:;
    /* $C6CD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_C6D0:;
    /* $C6D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_C6D2:;
    /* $C6D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C6D7; }
label_C6D4:;
    /* $C6D4: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E36F(); g_code_window_base = _swb; }
label_C6D7:;
    /* $C6D7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_C6DD:;
    /* $C6DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C6DF:;
    /* $C6DF: 85 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.A);
label_C6E1:;
    /* $C6E1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E2:;
    /* $C6E2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C6E3:;
    /* $C6E3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E4:;
    /* $C6E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C6E5:;
    /* $C6E5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C6E6:;
    /* $C6E6: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC6E6; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CDB0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CDB0");
#endif
label_CDB0:;
    /* $CDB0: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x81) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CDB2:;
    /* $CDB2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E055(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E055");
#endif
label_E055:;
    /* $E055: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FB10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FB10");
#endif
label_FB10:;
    /* $FB10: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xFB10); return;
}

void func_F2FF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F2FF");
#endif
label_F2FF:;
    /* $F2FF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F300:;
    /* $F300: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F2E6(); g_code_window_base = _swb; } return;
}

void func_D0C8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D0C8");
#endif
label_D0C8:;
    /* $D0C8: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x60) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_D0CA:;
    /* $D0CA: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_D0D0:;
    /* $D0D0: 20 */ maybe_trigger_vblank(6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F3F4(); g_code_window_base = _swb; }
label_D0D3:;
    /* $D0D3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

