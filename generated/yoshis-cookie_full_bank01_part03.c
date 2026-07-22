/* yoshis-cookie_full_bank01_part03.c — PRG bank 1 function bodies (sub-part 3).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella yoshis-cookie_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "yoshis-cookie_full_decls.h"

void func_B1E1_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1E1_b1");
#endif
label_B1E1:;
    /* $B1E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B1E3:;
    /* $B1E3: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_B1E5:;
    /* $B1E5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x045B); FLAG_NZ(g_cpu.A);
label_B1E8:;
    /* $B1E8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1F0; }
label_B1EA:;
    /* $B1EA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8897, 1);
label_B1ED:;
    /* $B1ED: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x90F0, 1);
label_B1F0:;
    /* $B1F0: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1F7, 1);
label_B1F3:;
    /* $B1F3: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB21D, 1);
label_B1F6:;
    /* $B1F6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1F7_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1F7_b1");
#endif
label_B1F7:;
    /* $B1F7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x045D); FLAG_NZ(g_cpu.A);
label_B1FA:;
    /* $B1FA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_B21C; }
label_B1FC:;
    /* $B1FC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_B1FE:;
    /* $B1FE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B209; }
label_B200:;
    /* $B200: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x84E3, 1);
label_B203:;
    /* $B203: CE */ maybe_trigger_vblank(6); { uint16_t a=0x045D; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B206:;
    /* $B206: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB21C, 1); return;
label_B209:;
    /* $B209: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B20B:;
    /* $B20B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B216; }
label_B20D:;
    /* $B20D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8556, 1);
label_B210:;
    /* $B210: CE */ maybe_trigger_vblank(6); { uint16_t a=0x045D; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B213:;
    /* $B213: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB21C, 1); return;
label_B216:;
    /* $B216: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x85D5, 1);
label_B219:;
    /* $B219: CE */ maybe_trigger_vblank(6); { uint16_t a=0x045D; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B21C:;
    /* $B21C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B21D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B21D_b1");
#endif
label_B21D:;
    /* $B21D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x045E); FLAG_NZ(g_cpu.A);
label_B220:;
    /* $B220: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B242; }
label_B222:;
    /* $B222: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_B224:;
    /* $B224: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B22F; }
label_B226:;
    /* $B226: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x82F1, 1);
label_B229:;
    /* $B229: CE */ maybe_trigger_vblank(6); { uint16_t a=0x045E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B22C:;
    /* $B22C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB242, 1); return;
label_B22F:;
    /* $B22F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B231:;
    /* $B231: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B23C; }
label_B233:;
    /* $B233: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x835E, 1);
label_B236:;
    /* $B236: CE */ maybe_trigger_vblank(6); { uint16_t a=0x045E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B239:;
    /* $B239: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB242, 1); return;
label_B23C:;
    /* $B23C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x83D7, 1);
label_B23F:;
    /* $B23F: CE */ maybe_trigger_vblank(6); { uint16_t a=0x045E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B242:;
    /* $B242: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C54_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C54_b1");
#endif
label_8C54:;
    /* $8C54: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_8C56:;
    /* $8C56: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C5B; }
label_8C58:;
    /* $8C58: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CF7, 1); return;
label_8C5B:;
    /* $8C5B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7C); FLAG_NZ(g_cpu.A);
label_8C5D:;
    /* $8C5D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C6E; }
label_8C5F:;
    /* $8C5F: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x7C; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C61:;
    /* $8C61: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x045C); FLAG_NZ(g_cpu.A);
label_8C64:;
    /* $8C64: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C6B; }
label_8C66:;
    /* $8C66: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0408); FLAG_NZ(g_cpu.A);
label_8C69:;
    /* $8C69: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_8C6B:;
    /* $8C6B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CE9, 1); return;
label_8C6E:;
    /* $8C6E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_8C71:;
    /* $8C71: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_8C73:;
    /* $8C73: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8CD5; }
label_8C75:;
    /* $8C75: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8739, 1);
label_8C78:;
    /* $8C78: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x045C); FLAG_NZ(g_cpu.A);
label_8C7B:;
    /* $8C7B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C89; }
label_8C7D:;
    /* $8C7D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x045C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C80:;
    /* $8C80: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x87F2, 1);
label_8C83:;
    /* $8C83: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC04B, 1);
label_8C86:;
    /* $8C86: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CBD, 1); return;
label_8C89:;
    /* $8C89: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$811B */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_811B_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8C8F:;
    /* $8C8F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C91:;
    /* $8C91: 8D */ maybe_trigger_vblank(4); nes_write(0x045C, g_cpu.A);
label_8C94:;
    /* $8C94: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x96); FLAG_NZ(g_cpu.Y);
label_8C96:;
    /* $8C96: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x006C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C99:;
    /* $8C99: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8C9A:;
    /* $8C9A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_8C9C:;
    /* $8C9C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8C9D:;
    /* $8C9D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8C9E:;
    /* $8C9E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8C9F:;
    /* $8C9F: 8D */ maybe_trigger_vblank(4); nes_write(0x03C8, g_cpu.A);
label_8CA2:;
    /* $8CA2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_8CA4:;
    /* $8CA4: 8D */ maybe_trigger_vblank(4); nes_write(0x03C7, g_cpu.A);
label_8CA7:;
    /* $8CA7: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0433; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CAA:;
    /* $8CAA: EE */ maybe_trigger_vblank(6); { uint16_t a=0x043A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CAD:;
    /* $8CAD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x88E2, 1);
label_8CB0:;
    /* $8CB0: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8906, 1);
label_8CB3:;
    /* $8CB3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x045B); FLAG_NZ(g_cpu.A);
label_8CB6:;
    /* $8CB6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CBD; }
label_8CB8:;
    /* $8CB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8CBA:;
    /* $8CBA: 8D */ maybe_trigger_vblank(4); nes_write(0x045B, g_cpu.A);
label_8CBD:;
    /* $8CBD: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8CBF:;
    /* $8CBF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CC2:;
    /* $8CC2: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0429); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8CC5:;
    /* $8CC5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CE5; }
label_8CC7:;
    /* $8CC7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x864F, 1);
label_8CCA:;
    /* $8CCA: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0429; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CCD:;
    /* $8CCD: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0429; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CD0:;
    /* $8CD0: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x95; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CD2:;
    /* $8CD2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CE5, 1); return;
label_8CD5:;
    /* $8CD5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_8CD7:;
    /* $8CD7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CE9; }
label_8CD9:;
    /* $8CD9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8CDB:;
    /* $8CDB: 85 */ maybe_trigger_vblank(3); nes_write(0x7A, g_cpu.A);
label_8CDD:;
    /* $8CDD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8CDF:;
    /* $8CDF: 8D */ maybe_trigger_vblank(4); nes_write(0x0494, g_cpu.A);
label_8CE2:;
    /* $8CE2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CE9, 1); return;
label_8CE5:;
    /* $8CE5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8CE7:;
    /* $8CE7: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_8CE9:;
    /* $8CE9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x045B); FLAG_NZ(g_cpu.A);
label_8CEC:;
    /* $8CEC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CF4; }
label_8CEE:;
    /* $8CEE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8854, 1);
label_8CF1:;
    /* $8CF1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x90F0, 1);
label_8CF4:;
    /* $8CF4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8C2E, 1);
label_8CF7:;
    /* $8CF7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8CFD:;
    /* $8CFD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8459_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8459_b1");
#endif
label_8459:;
    /* $8459: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_845A:;
    /* $845A: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_845B:;
    /* $845B: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00C, 1);
label_845E:;
    /* $845E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8460:;
    /* $8460: 8D */ maybe_trigger_vblank(4); nes_write(0x03A1, g_cpu.A);
label_8463:;
    /* $8463: 8D */ maybe_trigger_vblank(4); nes_write(0x03A4, g_cpu.A);
label_8466:;
    /* $8466: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8468:;
    /* $8468: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_846B:;
    /* $846B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_846D:;
    /* $846D: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_8470:;
    /* $8470: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8472:;
    /* $8472: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8474:;
    /* $8474: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_8476:;
    /* $8476: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8478:;
    /* $8478: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_847A:;
    /* $847A: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_847C:;
    /* $847C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_847E:;
    /* $847E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8481:;
    /* $8481: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8482:;
    /* $8482: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_8484:;
    /* $8484: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8485:;
    /* $8485: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8486:;
    /* $8486: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8487:;
    /* $8487: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8489:;
    /* $8489: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_848B:;
    /* $848B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_848C:;
    /* $848C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_848D:;
    /* $848D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_848E:;
    /* $848E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8490:;
    /* $8490: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8493:;
    /* $8493: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8494:;
    /* $8494: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8495:;
    /* $8495: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8553_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8553_b1");
#endif
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8496_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8496_b1");
#endif
label_8496:;
    /* $8496: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8497:;
    /* $8497: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8498:;
    /* $8498: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00C, 1);
label_849B:;
    /* $849B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_849D:;
    /* $849D: 8D */ maybe_trigger_vblank(4); nes_write(0x03A1, g_cpu.A);
label_84A0:;
    /* $84A0: 8D */ maybe_trigger_vblank(4); nes_write(0x03A4, g_cpu.A);
label_84A3:;
    /* $84A3: 8D */ maybe_trigger_vblank(4); nes_write(0x03A8, g_cpu.A);
label_84A6:;
    /* $84A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_84A8:;
    /* $84A8: 8D */ maybe_trigger_vblank(4); nes_write(0x03A5, g_cpu.A);
label_84AB:;
    /* $84AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_84AD:;
    /* $84AD: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_84B0:;
    /* $84B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_84B2:;
    /* $84B2: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_84B5:;
    /* $84B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_84B7:;
    /* $84B7: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_84BA:;
    /* $84BA: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_84BD:;
    /* $84BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_84BF:;
    /* $84BF: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_84C1:;
    /* $84C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_84C3:;
    /* $84C3: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_84C5:;
    /* $84C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_84C7:;
    /* $84C7: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_84C9:;
    /* $84C9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_84CB:;
    /* $84CB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84CE:;
    /* $84CE: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_84CF:;
    /* $84CF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_84D1:;
    /* $84D1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_84D2:;
    /* $84D2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_84D3:;
    /* $84D3: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_84D4:;
    /* $84D4: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_84D6:;
    /* $84D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_84D8:;
    /* $84D8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_84D9:;
    /* $84D9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_84DA:;
    /* $84DA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_84DB:;
    /* $84DB: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_84DD:;
    /* $84DD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_84E0:;
    /* $84E0: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84E1:;
    /* $84E1: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_84E2:;
    /* $84E2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85D2_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85D2_b1");
#endif
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ACD5_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACD5_b1");
#endif
label_ACD5:;
    /* $ACD5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ACD6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACD6_b1");
#endif
label_ACD6:;
    /* $ACD6: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xACE7, 1);
label_ACD9:;
    /* $ACD9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ACDA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACDA_b1");
#endif
label_ACDA:;
    /* $ACDA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAD0D, 1);
label_ACDD:;
    /* $ACDD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ACE2_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACE2_b1");
#endif
label_ACE2:;
    /* $ACE2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAD80, 1);
label_ACE5:;
    /* $ACE5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ACE6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACE6_b1");
#endif
label_ACE6:;
    /* $ACE6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA13_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA13_b1");
#endif
label_AA13:;
    /* $AA13: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_AA16:;
    /* $AA16: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_AA18:;
    /* $AA18: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA21; }
label_AA1A:;
    /* $AA1A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_AA1C:;
    /* $AA1C: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA1E:;
    /* $AA1E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA53, 1); return;
label_AA21:;
    /* $AA21: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_AA24:;
    /* $AA24: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_AA26:;
    /* $AA26: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AA1A;
    }
label_AA28:;
    /* $AA28: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_AA2A:;
    /* $AA2A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA2C:;
    /* $AA2C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_AA2F:;
    /* $AA2F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_AA31:;
    /* $AA31: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA3A; }
label_AA33:;
    /* $AA33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_AA35:;
    /* $AA35: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA37:;
    /* $AA37: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA53, 1); return;
label_AA3A:;
    /* $AA3A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AA3C:;
    /* $AA3C: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA3E:;
    /* $AA3E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA53, 1); return;
label_AA41:;
    /* $AA41: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_AA44:;
    /* $AA44: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_AA46:;
    /* $AA46: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA4F; }
label_AA48:;
    /* $AA48: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AA4A:;
    /* $AA4A: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA4C:;
    /* $AA4C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA53, 1); return;
label_AA4F:;
    /* $AA4F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_AA51:;
    /* $AA51: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA53:;
    /* $AA53: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA68_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA68_b1");
#endif
label_AA68:;
    /* $AA68: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA69_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA69_b1");
#endif
label_AA69:;
    /* $AA69: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAA7A, 1);
label_AA6C:;
    /* $AA6C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA6D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA6D_b1");
#endif
label_AA6D:;
    /* $AA6D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAAFF, 1);
label_AA70:;
    /* $AA70: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA71_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA71_b1");
#endif
label_AA71:;
    /* $AA71: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAB80, 1);
label_AA74:;
    /* $AA74: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA75_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA75_b1");
#endif
label_AA75:;
    /* $AA75: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAC75, 1);
label_AA78:;
    /* $AA78: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA79_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA79_b1");
#endif
label_AA79:;
    /* $AA79: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88E5_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88E5_b1");
#endif
label_88E5:;
    /* $88E5: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x01; g_cpu.C=(g_cpu.Y>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_88E7:;
    /* $88E7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88F9; }
label_88E9:;
    /* $88E9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0432 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88EC:;
    /* $88EC: 99 */ maybe_trigger_vblank(5); nes_write((0x0433 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_88EF:;
    /* $88EF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0439 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88F2:;
    /* $88F2: 99 */ maybe_trigger_vblank(5); nes_write((0x043A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_88F5:;
    /* $88F5: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_88F6:;
    /* $88F6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88E5, 1); return;
label_88F9:;
    /* $88F9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_88FC:;
    /* $88FC: 99 */ maybe_trigger_vblank(5); nes_write((0x0433 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_88FF:;
    /* $88FF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_8902:;
    /* $8902: 99 */ maybe_trigger_vblank(5); nes_write((0x043A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8905:;
    /* $8905: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8906:; return;
label_8907:; return;
label_8908:; return;
label_890B:; return;
label_890C:; return;
label_890D:; return;
label_890E:; return;
label_8910:; return;
label_8912:; return;
label_8915:; return;
label_8918:; return;
label_891B:; return;
label_891E:; return;
label_8921:; return;
label_8924:; return;
label_8927:; return;
label_892A:; return;
label_892B:; return;
label_892C:; return;
label_892D:; return;
label_892E:; return;
label_8931:; return;
label_8933:; return;
label_8936:; return;
label_8938:; return;
label_893B:; return;
label_893D:; return;
label_8940:; return;
label_8942:; return;
label_8945:; return;
label_8946:; return;
label_8947:; return;
label_8948:; return;
label_894A:; return;
label_894D:; return;
label_894E:; return;
label_8951:; return;
label_8954:; return;
label_8957:; return;
label_895A:; return;
label_895D:; return;
label_8960:; return;
label_8963:; return;
label_8966:; return;
label_8967:; return;
label_8968:; return;
label_896A:; return;
label_896C:; return;
label_896D:; return;
label_8970:; return;
label_8972:; return;
label_8975:; return;
label_8977:; return;
label_8979:; return;
label_897C:; return;
label_897E:; return;
label_8980:; return;
label_8982:; return;
label_8984:; return;
label_8986:; return;
label_8989:; return;
label_898B:; return;
label_898E:; return;
label_8991:; return;
label_8994:; return;
label_8997:; return;
label_899A:; return;
label_899D:; return;
label_89A0:; return;
label_89A3:; return;
label_89A5:; return;
label_89A6:; return;
label_89A8:; return;
label_89AA:; return;
label_89AD:; return;
label_89AF:; return;
label_89B1:; return;
label_89B3:; return;
label_89B5:; return;
label_89B8:; return;
label_89BB:; return;
label_89BE:; return;
label_89C1:; return;
label_89C4:; return;
label_89C7:; return;
label_89C9:; return;
label_89CC:; return;
label_89CF:; return;
label_89D1:; return;
label_89D4:; return;
label_89D7:; return;
label_89DA:; return;
label_89DD:; return;
label_89E0:; return;
label_89E3:; return;
label_89E5:; return;
label_89E8:; return;
label_89EB:; return;
label_89EC:; return;
label_89EF:; return;
label_89F1:; return;
label_89F3:; return;
label_89F6:; return;
label_89F8:; return;
label_89FA:; return;
label_89FC:; return;
label_89FE:; return;
label_8A00:; return;
label_8A02:; return;
label_8A05:; return;
label_8A07:; return;
label_8A09:; return;
label_8A0C:; return;
label_8A0F:; return;
label_8A12:; return;
label_8A15:; return;
label_8A17:; return;
label_8A19:; return;
label_8A1C:; return;
label_8A1D:; return;
label_8A1F:; return;
label_8A22:; return;
label_8A23:; return;
label_8A24:; return;
label_8A25:; return;
label_8A26:; return;
label_8A27:; return;
label_8A2A:; return;
label_8A2B:; return;
label_8A2D:; return;
label_8A30:; return;
label_8A32:; return;
label_8A35:; return;
label_8A38:; return;
label_8A3B:; return;
label_8A3E:; return;
label_8A41:; return;
label_8A44:; return;
label_8A47:; return;
label_8A49:; return;
label_8A4C:; return;
label_8A4F:; return;
label_8A52:; return;
label_8A55:; return;
label_8A57:; return;
label_8A59:; return;
label_8A5A:; return;
label_8A5C:; return;
label_8A5E:; return;
label_8A60:; return;
label_8A62:; return;
label_8A65:; return;
label_8A68:; return;
label_8A6A:; return;
label_8A6C:; return;
label_8A6F:; return;
label_8A71:; return;
label_8A74:; return;
label_8A75:; return;
label_8A76:; return;
label_8A77:; return;
label_8A79:; return;
label_8A7C:; return;
label_8A7D:; return;
label_8A7F:; return;
label_8A82:; return;
label_8A83:; return;
label_8A86:; return;
label_8A89:; return;
label_8A8A:; return;
label_8A8C:; return;
label_8A8F:; return;
label_8A90:; return;
label_8A92:; return;
label_8A95:; return;
label_8A96:; return;
label_8A98:; return;
label_8A9A:; return;
label_8A9D:; return;
label_8A9E:; return;
label_8AA0:; return;
label_8AA3:; return;
label_8AA4:; return;
label_8AA6:; return;
label_8AA9:; return;
label_8AAC:; return;
label_8AAD:; return;
label_8AB0:; return;
label_8AB3:; return;
label_8AB4:; return;
label_8AB6:; return;
label_8AB9:; return;
label_8ABA:; return;
label_8ABD:; return;
label_8ABE:; return;
label_8AC0:; return;
label_8AC3:; return;
label_8AC4:; return;
label_8AC6:; return;
label_8AC8:; return;
label_8ACB:; return;
label_8ACC:; return;
label_8ACE:; return;
label_8AD1:; return;
label_8AD2:; return;
label_8AD5:; return;
label_8AD8:; return;
label_8AD9:; return;
label_8ADC:; return;
label_8ADF:; return;
label_8AE0:; return;
label_8AE2:; return;
label_8AE5:; return;
label_8AE6:; return;
label_8AE9:; return;
label_8AEA:; return;
label_8AED:; return;
label_8AF0:; return;
label_8AF1:; return;
label_8AF3:; return;
label_8AF5:; return;
label_8AF8:; return;
label_8AFA:; return;
label_8AFC:; return;
label_8AFE:; return;
label_8B01:; return;
label_8B03:; return;
label_8B06:; return;
label_8B08:; return;
label_8B0B:; return;
label_8B0E:; return;
label_8B10:; return;
label_8B13:; return;
label_8B16:; return;
label_8B18:; return;
label_8B1B:; return;
label_8B1E:; return;
label_8B21:; return;
label_8B24:; return;
label_8B2A:; return;
label_8B2C:; return;
label_8B2F:; return;
label_8B31:; return;
label_8B34:; return;
label_8B35:; return;
label_8B37:; return;
label_8B38:; return;
label_8B39:; return;
label_8B3A:; return;
label_8B3D:; return;
label_8B3F:; return;
label_8B42:; return;
label_8B45:; return;
label_8B48:; return;
label_8B4B:; return;
label_8B4E:; return;
label_8B51:; return;
label_8B53:; return;
label_8B55:; return;
label_8B58:; return;
label_8B5A:; return;
label_8B5C:; return;
label_8B5D:; return;
label_8B60:; return;
label_8B63:; return;
label_8B65:; return;
label_8B68:; return;
label_8B6B:; return;
label_8B6E:; return;
label_8B70:; return;
label_8B73:; return;
label_8B75:; return;
label_8B77:; return;
label_8B79:; return;
label_8B7B:; return;
label_8B7D:; return;
label_8B80:; return;
label_8B83:; return;
label_8B85:; return;
label_8B87:; return;
label_8B8A:; return;
label_8B8C:; return;
label_8B8F:; return;
label_8B92:; return;
label_8B95:; return;
label_8B9B:; return;
label_8B9C:; return;
label_8B9F:; return;
label_8BA1:; return;
label_8BA3:; return;
label_8BA5:; return;
label_8BA7:; return;
label_8BA9:; return;
label_8BAC:; return;
label_8BAF:; return;
label_8BB2:; return;
label_8BB4:; return;
label_8BB6:; return;
label_8BB8:; return;
label_8BBA:; return;
label_8BBD:; return;
label_8BC0:; return;
label_8BC3:; return;
label_8BC5:; return;
label_8BC7:; return;
label_8BCA:; return;
label_8BCD:; return;
label_8BCF:; return;
label_8BD1:; return;
label_8BD2:; return;
label_8BD5:; return;
label_8BD7:; return;
label_8BD9:; return;
label_8BDB:; return;
label_8BDD:; return;
label_8BDF:; return;
label_8BE2:; return;
label_8BE5:; return;
label_8BE8:; return;
label_8BEA:; return;
label_8BEC:; return;
label_8BEE:; return;
label_8BF0:; return;
label_8BF3:; return;
label_8BF6:; return;
label_8BF9:; return;
label_8BFB:; return;
label_8BFD:; return;
label_8C00:; return;
label_8C03:; return;
label_8C05:; return;
label_8C07:; return;
label_8C08:; return;
label_8C0B:; return;
label_8C0D:; return;
label_8C0F:; return;
label_8C11:; return;
label_8C14:; return;
label_8C17:; return;
label_8C1A:; return;
label_8C1C:; return;
label_8C1E:; return;
label_8C21:; return;
label_8C24:; return;
label_8C27:; return;
label_8C2A:; return;
label_8C2D:; return;
label_8C2E:; return;
label_8C31:; return;
label_8C33:; return;
label_8C35:; return;
label_8C37:; return;
label_8C3A:; return;
label_8C3D:; return;
label_8C40:; return;
label_8C42:; return;
label_8C44:; return;
label_8C47:; return;
label_8C4A:; return;
label_8C4D:; return;
label_8C50:; return;
label_8C53:; return;
label_8C54:; return;
label_8C56:; return;
label_8C58:; return;
label_8C5B:; return;
label_8C5D:; return;
label_8C5F:; return;
label_8C61:; return;
label_8C64:; return;
label_8C66:; return;
label_8C69:; return;
label_8C6B:; return;
label_8C6E:; return;
label_8C71:; return;
label_8C73:; return;
label_8C75:; return;
label_8C78:; return;
label_8C7B:; return;
label_8C7D:; return;
label_8C80:; return;
label_8C83:; return;
label_8C86:; return;
label_8C89:; return;
label_8C8F:; return;
label_8C91:; return;
label_8C94:; return;
label_8C96:; return;
label_8C99:; return;
label_8C9A:; return;
label_8C9C:; return;
label_8C9D:; return;
label_8C9E:; return;
label_8C9F:; return;
label_8CA2:; return;
label_8CA4:; return;
label_8CA7:; return;
label_8CAA:; return;
label_8CAD:; return;
label_8CB0:; return;
label_8CB3:; return;
label_8CB6:; return;
label_8CB8:; return;
label_8CBA:; return;
label_8CBD:; return;
label_8CBF:; return;
label_8CC2:; return;
label_8CC5:; return;
label_8CC7:; return;
label_8CCA:; return;
label_8CCD:; return;
label_8CD0:; return;
label_8CD2:; return;
label_8CD5:; return;
label_8CD7:; return;
label_8CD9:; return;
label_8CDB:; return;
label_8CDD:; return;
label_8CDF:; return;
label_8CE2:; return;
label_8CE5:; return;
label_8CE7:; return;
label_8CE9:; return;
label_8CEC:; return;
label_8CEE:; return;
label_8CF1:; return;
label_8CF4:; return;
label_8CF7:; return;
label_8CFD:; return;
label_8CFE:; return;
label_8D00:; return;
label_8D11:; return;
label_8D12:; return;
label_8D15:; return;
label_8D16:; return;
label_8D17:; return;
label_8D18:; return;
label_8D19:; return;
label_8D1C:; return;
label_8D1F:; return;
label_8D20:; return;
label_8D22:; return;
label_8D25:; return;
label_8D2B:; return;
label_8D2E:; return;
label_8D31:; return;
label_8D34:; return;
label_8D37:; return;
label_8D3A:; return;
label_8D3D:; return;
label_8D3F:; return;
label_8D42:; return;
label_8D45:; return;
label_8D48:; return;
label_8D4A:; return;
label_8D4C:; return;
label_8D4E:; return;
label_8D51:; return;
label_8D54:; return;
label_8D57:; return;
label_8D59:; return;
label_8D5B:; return;
label_8D5E:; return;
label_8D60:; return;
label_8D62:; return;
label_8D65:; return;
label_8D68:; return;
label_8D6A:; return;
label_8D6D:; return;
label_8D70:; return;
label_8D73:; return;
label_8D75:; return;
label_8D77:; return;
label_8D7A:; return;
label_8D7D:; return;
label_8D7F:; return;
label_8D82:; return;
label_8D83:; return;
label_8D85:; return;
label_8D88:; return;
label_8D89:; return;
label_8D8B:; return;
label_8D8E:; return;
label_8D8F:; return;
label_8D91:; return;
label_8D93:; return;
label_8D95:; return;
label_8D98:; return;
label_8D9B:; return;
label_8D9C:; return;
label_8D9D:; return;
label_8D9E:; return;
label_8DA0:; return;
label_8DA1:; return;
label_8DA3:; return;
label_8DA5:; return;
label_8DA8:; return;
label_8DAB:; return;
label_8DAD:; return;
label_8DAF:; return;
label_8DB1:; return;
label_8DB3:; return;
label_8DB5:; return;
label_8DB8:; return;
label_8DBB:; return;
label_8DBC:; return;
label_8DBE:; return;
label_8DBF:; return;
label_8DC2:; return;
label_8DC5:; return;
label_8DC8:; return;
label_8DC9:; return;
label_8DCC:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD1:; return;
label_8DD4:; return;
label_8DD6:; return;
label_8DD9:; return;
label_8DDA:; return;
label_8DDC:; return;
label_8DDF:; return;
label_8DE0:; return;
label_8DE3:; return;
label_8DE5:; return;
label_8DE8:; return;
label_8DE9:; return;
label_8DEC:; return;
label_8DED:; return;
label_8DEF:; return;
label_8DF1:; return;
label_8DF3:; return;
label_8DF6:; return;
label_8DF7:; return;
label_8DF9:; return;
label_8DFB:; return;
label_8DFD:; return;
label_8DFF:; return;
label_8E02:; return;
label_8E03:; return;
label_8E04:; return;
label_8E05:; return;
label_8E06:; return;
label_8E07:; return;
label_8E0A:; return;
label_8E0D:; return;
label_8E0E:; return;
label_8E0F:; return;
label_8E10:; return;
label_8E12:; return;
label_8E13:; return;
label_8E15:; return;
label_8E17:; return;
label_8E19:; return;
label_8E1C:; return;
label_8E1D:; return;
label_8E1F:; return;
label_8E21:; return;
label_8E24:; return;
label_8E25:; return;
label_8E28:; return;
label_8E2A:; return;
label_8E2D:; return;
label_8E2E:; return;
label_8E31:; return;
label_8E32:; return;
label_8E34:; return;
label_8E36:; return;
label_8E38:; return;
label_8E3B:; return;
label_8E3C:; return;
label_8E3E:; return;
label_8E40:; return;
label_8E42:; return;
label_8E44:; return;
label_8E47:; return;
label_8E48:; return;
label_8E49:; return;
label_8E4A:; return;
label_8E4B:; return;
label_8E4C:; return;
label_8E4D:; return;
label_8E50:; return;
label_8E53:; return;
label_8E54:; return;
label_8E55:; return;
label_8E56:; return;
label_8E58:; return;
label_8E59:; return;
label_8E5B:; return;
label_8E5D:; return;
label_8E5F:; return;
label_8E62:; return;
label_8E65:; return;
label_8E67:; return;
label_8E6A:; return;
label_8E6B:; return;
label_8E6D:; return;
label_8E7E:; return;
label_8E7F:; return;
label_8E82:; return;
label_8E83:; return;
label_8E84:; return;
label_8E85:; return;
label_8E86:; return;
label_8E89:; return;
label_8E8C:; return;
label_8E8D:; return;
label_8E8F:; return;
label_8E92:; return;
label_8E98:; return;
label_8E9B:; return;
label_8E9E:; return;
label_8EA1:; return;
label_8EA4:; return;
label_8EA7:; return;
label_8EAA:; return;
label_8EAC:; return;
label_8EAF:; return;
label_8EB2:; return;
label_8EB5:; return;
label_8EB7:; return;
label_8EB9:; return;
label_8EBB:; return;
label_8EBE:; return;
label_8EC1:; return;
label_8EC3:; return;
label_8EC5:; return;
label_8EC7:; return;
label_8ECA:; return;
label_8ECC:; return;
label_8ECE:; return;
label_8ED1:; return;
label_8ED4:; return;
label_8ED6:; return;
label_8ED8:; return;
label_8EDA:; return;
label_8EDD:; return;
label_8EE0:; return;
label_8EE3:; return;
label_8EE6:; return;
label_8EE9:; return;
label_8EEB:; return;
label_8EEE:; return;
label_8EEF:; return;
label_8EF1:; return;
label_8EF4:; return;
label_8EF5:; return;
label_8EF7:; return;
label_8EFA:; return;
label_8EFB:; return;
label_8EFD:; return;
label_8EFF:; return;
label_8F01:; return;
label_8F04:; return;
label_8F07:; return;
label_8F08:; return;
label_8F09:; return;
label_8F0B:; return;
label_8F0D:; return;
label_8F10:; return;
label_8F11:; return;
label_8F13:; return;
label_8F16:; return;
label_8F19:; return;
label_8F1A:; return;
label_8F1D:; return;
label_8F1E:; return;
label_8F20:; return;
label_8F22:; return;
label_8F24:; return;
label_8F27:; return;
label_8F28:; return;
label_8F2A:; return;
label_8F2D:; return;
label_8F2E:; return;
label_8F31:; return;
label_8F34:; return;
label_8F35:; return;
label_8F37:; return;
label_8F39:; return;
label_8F3B:; return;
label_8F3E:; return;
label_8F41:; return;
label_8F42:; return;
label_8F43:; return;
label_8F45:; return;
label_8F47:; return;
label_8F4A:; return;
label_8F4B:; return;
label_8F4D:; return;
label_8F4F:; return;
label_8F51:; return;
label_8F54:; return;
label_8F55:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5B:; return;
label_8F5E:; return;
label_8F5F:; return;
label_8F61:; return;
label_8F64:; return;
label_8F65:; return;
label_8F68:; return;
label_8F6B:; return;
label_8F6C:; return;
label_8F6E:; return;
label_8F70:; return;
label_8F72:; return;
label_8F75:; return;
label_8F78:; return;
label_8F79:; return;
label_8F7A:; return;
label_8F7C:; return;
label_8F7E:; return;
label_8F81:; return;
label_8F82:; return;
label_8F84:; return;
label_8F86:; return;
label_8F88:; return;
label_8F8B:; return;
label_8F8C:; return;
label_8F8E:; return;
label_8F90:; return;
label_8F93:; return;
label_8F96:; return;
label_8F98:; return;
label_8F9B:; return;
label_8F9C:; return;
label_8F9E:; return;
label_8FA0:; return;
label_8FA3:; return;
label_8FA5:; return;
label_8FA7:; return;
label_8FA9:; return;
label_8FAC:; return;
label_8FAE:; return;
label_8FB1:; return;
label_8FB3:; return;
label_8FB6:; return;
label_8FB9:; return;
label_8FBB:; return;
label_8FBE:; return;
label_8FC1:; return;
label_8FC3:; return;
label_8FC6:; return;
label_8FC9:; return;
label_8FCC:; return;
label_8FCF:; return;
label_8FD5:; return;
label_8FD7:; return;
label_8FDA:; return;
label_8FDC:; return;
label_8FDF:; return;
label_8FE0:; return;
label_8FE2:; return;
label_8FE3:; return;
label_8FE4:; return;
label_8FE5:; return;
label_8FE8:; return;
label_8FEA:; return;
label_8FED:; return;
label_8FF0:; return;
label_8FF3:; return;
label_8FF6:; return;
label_8FF9:; return;
label_8FFC:; return;
label_8FFE:; return;
label_9000:; return;
label_9003:; return;
label_9006:; return;
label_9008:; return;
label_900B:; return;
label_900E:; return;
label_9010:; return;
label_9016:; return;
label_9019:; return;
label_901B:; return;
label_901D:; return;
label_9020:; return;
label_9022:; return;
label_9024:; return;
label_9027:; return;
label_902A:; return;
label_902B:; return;
label_902E:; return;
label_902F:; return;
label_9031:; return;
label_9034:; return;
label_9037:; return;
label_903A:; return;
label_903C:; return;
label_903F:; return;
label_9041:; return;
label_9043:; return;
label_9046:; return;
label_9048:; return;
label_904B:; return;
label_904D:; return;
label_9050:; return;
label_9052:; return;
label_9054:; return;
label_9057:; return;
label_905A:; return;
label_905D:; return;
label_9064:; return;
label_9067:; return;
label_9069:; return;
label_906C:; return;
label_906F:; return;
label_9072:; return;
label_9078:; return;
label_9079:; return;
label_907C:; return;
label_907F:; return;
label_9082:; return;
label_9085:; return;
label_9087:; return;
label_908A:; return;
label_908D:; return;
label_9090:; return;
label_9092:; return;
label_9094:; return;
label_9096:; return;
label_9097:; return;
label_909A:; return;
label_909B:; return;
label_909D:; return;
label_90A0:; return;
label_90A1:; return;
label_90A3:; return;
label_90A5:; return;
label_90A7:; return;
label_90AA:; return;
label_90AD:; return;
label_90AF:; return;
label_90B1:; return;
label_90B4:; return;
label_90B6:; return;
label_90B9:; return;
label_90BC:; return;
label_90BE:; return;
label_90C1:; return;
label_90C4:; return;
label_90C6:; return;
label_90C9:; return;
label_90CA:; return;
label_90CC:; return;
label_90CF:; return;
label_90D0:; return;
label_90D1:; return;
label_90D4:; return;
label_90D7:; return;
label_90DA:; return;
label_90DD:; return;
label_90E0:; return;
label_90E3:; return;
label_90E6:; return;
label_90E9:; return;
label_90EA:; return;
label_90EB:; return;
label_90EC:; return;
label_90ED:; return;
label_90EF:; return;
label_90F0:; return;
label_90F3:; return;
label_90F5:; return;
label_90F8:; return;
label_90FA:; return;
label_90FC:; return;
label_90FE:; return;
label_9101:; return;
label_9104:; return;
label_9106:; return;
label_9109:; return;
label_910C:; return;
label_910F:; return;
label_9112:; return;
label_9114:; return;
label_9117:; return;
label_911A:; return;
label_911D:; return;
label_9120:; return;
label_9122:; return;
label_9123:; return;
label_9124:; return;
label_9125:; return;
label_9128:; return;
label_912B:; return;
label_912D:; return;
label_912F:; return;
label_9131:; return;
label_9134:; return;
label_9136:; return;
label_9139:; return;
label_913B:; return;
label_913E:; return;
label_9140:; return;
label_9143:; return;
label_9146:; return;
label_9149:; return;
label_914C:; return;
label_914F:; return;
label_9152:; return;
label_9155:; return;
label_9158:; return;
label_915B:; return;
label_915E:; return;
label_9160:; return;
label_9163:; return;
label_9166:; return;
label_9169:; return;
label_916C:; return;
label_916E:; return;
label_9170:; return;
label_9172:; return;
label_9174:; return;
label_9176:; return;
label_9178:; return;
label_917A:; return;
label_917B:; return;
label_917E:; return;
label_9180:; return;
label_9183:; return;
label_9185:; return;
label_9188:; return;
label_918A:; return;
label_918D:; return;
label_918E:; return;
label_9191:; return;
label_9193:; return;
label_9196:; return;
label_9198:; return;
label_919A:; return;
label_919C:; return;
label_919E:; return;
label_91A0:; return;
label_91A3:; return;
label_91A6:; return;
label_91A9:; return;
label_91AB:; return;
label_91AD:; return;
label_91B0:; return;
label_91B2:; return;
label_91B4:; return;
label_91B5:; return;
label_91B6:; return;
label_91B7:; return;
label_91B8:; return;
label_91B9:; return;
label_91BC:; return;
label_91BE:; return;
label_91BF:; return;
label_91C0:; return;
label_91C3:; return;
label_91C6:; return;
label_91C9:; return;
label_91CC:; return;
label_91CD:; return;
label_91CF:; return;
label_91D2:; return;
label_91D5:; return;
label_91D6:; return;
label_91D8:; return;
label_91DB:; return;
label_91DC:; return;
label_91DE:; return;
label_91DF:; return;
label_91E0:; return;
label_91E1:; return;
label_91E2:; return;
label_91E3:; return;
label_91E5:; return;
label_91E7:; return;
label_91E9:; return;
label_91EB:; return;
label_91EC:; return;
label_91EE:; return;
label_91EF:; return;
label_91F0:; return;
label_91F1:; return;
label_91F2:; return;
label_91F5:; return;
label_91F6:; return;
label_91F8:; return;
label_91FB:; return;
label_91FD:; return;
label_91FF:; return;
label_9201:; return;
label_9203:; return;
label_9204:; return;
label_9206:; return;
label_9208:; return;
label_920A:; return;
label_920C:; return;
label_920F:; return;
label_9212:; return;
label_9214:; return;
label_9216:; return;
label_9218:; return;
label_921B:; return;
label_921D:; return;
label_921E:; return;
label_9221:; return;
label_9224:; return;
label_9227:; return;
label_9228:; return;
label_922B:; return;
label_922E:; return;
label_922F:; return;
label_9231:; return;
label_9234:; return;
label_9235:; return;
label_9236:; return;
label_9239:; return;
label_923A:; return;
label_923B:; return;
label_923D:; return;
label_9240:; return;
label_9241:; return;
label_9243:; return;
label_9246:; return;
label_9249:; return;
label_924C:; return;
label_924D:; return;
label_924F:; return;
label_9252:; return;
label_9255:; return;
label_9256:; return;
label_9258:; return;
label_925B:; return;
label_925C:; return;
label_925D:; return;
label_925E:; return;
label_925F:; return;
label_9260:; return;
label_9263:; return;
label_9265:; return;
label_9267:; return;
label_926A:; return;
label_926B:; return;
label_926C:; return;
label_926D:; return;
label_926E:; return;
label_926F:; return;
label_9272:; return;
label_9273:; return;
label_9275:; return;
label_9278:; return;
label_927A:; return;
label_927D:; return;
label_927F:; return;
label_9282:; return;
label_9284:; return;
label_9287:; return;
label_9289:; return;
label_928C:; return;
label_928F:; return;
label_9292:; return;
label_9295:; return;
label_9296:; return;
label_9298:; return;
label_929A:; return;
label_929C:; return;
label_929F:; return;
label_92A2:; return;
label_92A5:; return;
label_92A7:; return;
label_92AA:; return;
label_92AD:; return;
label_92B0:; return;
label_92B3:; return;
label_92B4:; return;
label_92B7:; return;
label_92B9:; return;
label_92BB:; return;
label_92BD:; return;
label_92C0:; return;
label_92C1:; return;
label_92C2:; return;
label_92C3:; return;
label_92C4:; return;
label_92C5:; return;
label_92C8:; return;
label_92CB:; return;
label_92CD:; return;
label_92CF:; return;
label_92D2:; return;
label_92D3:; return;
label_92D5:; return;
label_92D8:; return;
label_92DA:; return;
label_92DD:; return;
label_92DF:; return;
label_92E2:; return;
label_92E4:; return;
label_92E7:; return;
label_92E9:; return;
label_92EC:; return;
label_92EF:; return;
label_92F2:; return;
label_92F5:; return;
label_92F6:; return;
label_92F8:; return;
label_92FA:; return;
label_92FC:; return;
label_92FF:; return;
label_9302:; return;
label_9304:; return;
label_9306:; return;
label_9308:; return;
label_930A:; return;
label_930D:; return;
label_930E:; return;
label_9311:; return;
label_9312:; return;
label_9314:; return;
label_9315:; return;
label_9317:; return;
label_931A:; return;
label_931C:; return;
label_931E:; return;
label_9321:; return;
label_9323:; return;
label_9325:; return;
label_9327:; return;
label_9329:; return;
label_932C:; return;
label_932E:; return;
label_9331:; return;
label_9332:; return;
label_9334:; return;
label_9337:; return;
label_9338:; return;
label_933A:; return;
label_933C:; return;
label_933F:; return;
label_9340:; return;
label_9342:; return;
label_9345:; return;
label_9348:; return;
label_9349:; return;
label_934A:; return;
label_934C:; return;
label_934E:; return;
label_9351:; return;
label_9353:; return;
label_9356:; return;
label_9359:; return;
label_935C:; return;
label_935F:; return;
label_9360:; return;
label_9362:; return;
label_9364:; return;
label_9367:; return;
label_9369:; return;
label_936C:; return;
label_936F:; return;
label_9372:; return;
label_9374:; return;
label_9377:; return;
label_9379:; return;
label_937C:; return;
label_937E:; return;
label_9381:; return;
label_9383:; return;
label_9385:; return;
label_9387:; return;
label_9389:; return;
label_938C:; return;
label_938E:; return;
label_9391:; return;
label_9393:; return;
label_9396:; return;
label_9398:; return;
label_939B:; return;
label_939E:; return;
label_93A0:; return;
label_93A2:; return;
label_93A4:; return;
label_93A6:; return;
label_93A8:; return;
label_93AA:; return;
label_93AC:; return;
label_93AF:; return;
label_93B0:; return;
label_93B2:; return;
label_93B3:; return;
label_93B4:; return;
label_93B5:; return;
label_93B7:; return;
label_93B9:; return;
label_93BB:; return;
label_93BE:; return;
label_93C0:; return;
label_93C3:; return;
label_93C4:; return;
label_93C7:; return;
label_93C9:; return;
label_93CC:; return;
label_93CE:; return;
label_93D0:; return;
label_93D3:; return;
label_93D5:; return;
label_93D7:; return;
label_93D9:; return;
label_93DB:; return;
label_93DD:; return;
label_93DF:; return;
label_93E2:; return;
label_93E4:; return;
label_93E7:; return;
label_93EA:; return;
label_93ED:; return;
label_93F0:; return;
label_93F3:; return;
label_93F6:; return;
label_93F9:; return;
label_93FC:; return;
label_93FE:; return;
label_93FF:; return;
label_9401:; return;
label_9403:; return;
label_9406:; return;
label_9408:; return;
label_940A:; return;
label_940C:; return;
label_940E:; return;
label_9411:; return;
label_9414:; return;
label_9417:; return;
label_941A:; return;
label_941D:; return;
label_9420:; return;
label_9422:; return;
label_9425:; return;
label_9428:; return;
label_942B:; return;
label_942E:; return;
label_9430:; return;
label_9432:; return;
label_9435:; return;
label_9438:; return;
label_943B:; return;
label_943E:; return;
label_9441:; return;
label_9444:; return;
label_9446:; return;
label_9449:; return;
label_944C:; return;
label_944D:; return;
label_9450:; return;
label_9452:; return;
label_9454:; return;
label_9457:; return;
label_9459:; return;
label_945B:; return;
label_945D:; return;
label_945F:; return;
label_9461:; return;
label_9463:; return;
label_9466:; return;
label_9468:; return;
label_946A:; return;
label_946D:; return;
label_9470:; return;
label_9473:; return;
label_9476:; return;
label_9478:; return;
label_947A:; return;
label_947D:; return;
label_947E:; return;
label_9480:; return;
label_9482:; return;
label_9484:; return;
label_9486:; return;
label_9489:; return;
label_948A:; return;
label_948D:; return;
label_948E:; return;
label_9490:; return;
label_9492:; return;
label_9494:; return;
label_9497:; return;
label_949A:; return;
label_949B:; return;
label_949E:; return;
label_94A0:; return;
label_94A2:; return;
label_94A4:; return;
label_94A7:; return;
label_94AA:; return;
label_94AB:; return;
label_94AE:; return;
label_94AF:; return;
label_94B1:; return;
label_94B3:; return;
label_94B5:; return;
label_94B8:; return;
label_94BA:; return;
label_94BC:; return;
label_94BF:; return;
label_94C1:; return;
label_94C2:; return;
label_94C4:; return;
label_94C6:; return;
label_94C8:; return;
label_94CA:; return;
label_94CC:; return;
label_94CE:; return;
label_94D0:; return;
label_94D3:; return;
label_94D6:; return;
label_94D8:; return;
label_94D9:; return;
label_94DB:; return;
label_94DD:; return;
label_94DF:; return;
label_94E1:; return;
label_94E3:; return;
label_94E5:; return;
label_94E7:; return;
label_94EA:; return;
label_94ED:; return;
label_94EE:; return;
label_94F1:; return;
label_94F3:; return;
label_94F5:; return;
label_94F8:; return;
label_94FB:; return;
label_94FD:; return;
label_94FF:; return;
label_9501:; return;
label_9503:; return;
label_9505:; return;
label_9508:; return;
label_950B:; return;
label_950C:; return;
label_950F:; return;
label_9510:; return;
label_9512:; return;
label_9514:; return;
label_9517:; return;
label_9519:; return;
label_951B:; return;
label_951D:; return;
label_951E:; return;
label_9520:; return;
label_9522:; return;
label_9524:; return;
label_9526:; return;
label_9529:; return;
label_952B:; return;
label_952D:; return;
label_952F:; return;
label_9530:; return;
label_9532:; return;
label_9534:; return;
label_9536:; return;
label_9538:; return;
label_953B:; return;
label_953D:; return;
label_953F:; return;
label_9541:; return;
label_9543:; return;
label_9545:; return;
label_9548:; return;
label_954B:; return;
label_954D:; return;
label_954E:; return;
label_9550:; return;
label_9552:; return;
label_9554:; return;
label_9556:; return;
label_9558:; return;
label_955A:; return;
label_955C:; return;
label_955F:; return;
label_9562:; return;
label_9564:; return;
label_9565:; return;
label_9567:; return;
label_9569:; return;
label_956B:; return;
label_956D:; return;
label_956F:; return;
label_9571:; return;
label_9574:; return;
label_9576:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957D:; return;
label_957F:; return;
label_9581:; return;
label_9583:; return;
label_9586:; return;
label_9587:; return;
label_958A:; return;
label_958C:; return;
label_958E:; return;
label_9591:; return;
label_9594:; return;
label_9596:; return;
label_9598:; return;
label_959A:; return;
label_959D:; return;
label_95A0:; return;
label_95A1:; return;
label_95A3:; return;
label_95A6:; return;
label_95A9:; return;
label_95AA:; return;
label_95AD:; return;
label_95AE:; return;
label_95B0:; return;
label_95B2:; return;
label_95B5:; return;
label_95B8:; return;
label_95BA:; return;
label_95BC:; return;
label_95BE:; return;
label_95C1:; return;
label_95C2:; return;
label_95C4:; return;
label_95C7:; return;
label_95C8:; return;
label_95CB:; return;
label_95CE:; return;
label_95CF:; return;
label_95D1:; return;
label_95D3:; return;
label_95D5:; return;
label_95D8:; return;
label_95DB:; return;
label_95DC:; return;
label_95DD:; return;
label_95DF:; return;
label_95E1:; return;
label_95E4:; return;
label_95E5:; return;
label_95E7:; return;
label_95E9:; return;
label_95EB:; return;
label_95ED:; return;
label_95F0:; return;
label_95F1:; return;
label_95F3:; return;
label_95F5:; return;
label_95F8:; return;
label_95FA:; return;
label_95FB:; return;
label_95FD:; return;
label_95FF:; return;
label_9601:; return;
label_9603:; return;
label_9605:; return;
label_9608:; return;
label_9609:; return;
label_960B:; return;
label_960E:; return;
label_960F:; return;
label_9612:; return;
label_9615:; return;
label_9616:; return;
label_9618:; return;
label_961A:; return;
label_961C:; return;
label_961F:; return;
label_9622:; return;
label_9623:; return;
label_9624:; return;
label_9626:; return;
label_9628:; return;
label_962B:; return;
label_962C:; return;
label_962E:; return;
label_9630:; return;
label_9632:; return;
label_9634:; return;
label_9637:; return;
label_9638:; return;
label_963A:; return;
label_963C:; return;
label_963F:; return;
label_9642:; return;
label_9643:; return;
label_9646:; return;
label_9648:; return;
label_964B:; return;
label_964C:; return;
label_964E:; return;
label_9651:; return;
label_9652:; return;
label_9654:; return;
label_9657:; return;
label_9658:; return;
label_965A:; return;
label_965D:; return;
label_965E:; return;
label_9660:; return;
label_9662:; return;
label_9664:; return;
label_9667:; return;
label_966A:; return;
label_966B:; return;
label_966E:; return;
label_9670:; return;
label_9673:; return;
label_9674:; return;
label_9676:; return;
label_9679:; return;
label_967A:; return;
label_967C:; return;
label_967F:; return;
label_9680:; return;
label_9683:; return;
label_9686:; return;
label_9689:; return;
label_968A:; return;
label_968B:; return;
label_968D:; return;
label_968F:; return;
label_9691:; return;
label_9694:; return;
label_9697:; return;
label_9698:; return;
label_969A:; return;
label_969D:; return;
label_969F:; return;
label_96A1:; return;
label_96A4:; return;
label_96A5:; return;
label_96A8:; return;
label_96A9:; return;
label_96AB:; return;
label_96AD:; return;
label_96AF:; return;
label_96B2:; return;
label_96B5:; return;
label_96B6:; return;
label_96B9:; return;
label_96BB:; return;
label_96BD:; return;
label_96BF:; return;
label_96C1:; return;
label_96C3:; return;
label_96C5:; return;
label_96C8:; return;
label_96CB:; return;
label_96CE:; return;
label_96D0:; return;
label_96D2:; return;
label_96D4:; return;
label_96D6:; return;
label_96D9:; return;
label_96DC:; return;
label_96DF:; return;
label_96E1:; return;
label_96E3:; return;
label_96E5:; return;
label_96E8:; return;
label_96EB:; return;
label_96EC:; return;
label_96EF:; return;
label_96F1:; return;
label_96F3:; return;
label_96F5:; return;
label_96F7:; return;
label_96F9:; return;
label_96FC:; return;
label_96FF:; return;
label_9702:; return;
label_9703:; return;
label_9705:; return;
label_9708:; return;
label_970A:; return;
label_970C:; return;
label_970E:; return;
label_9711:; return;
label_9714:; return;
label_9715:; return;
label_9717:; return;
label_9719:; return;
label_971B:; return;
label_971D:; return;
label_9720:; return;
label_9721:; return;
label_9724:; return;
label_9725:; return;
label_9727:; return;
label_9728:; return;
label_972A:; return;
label_972D:; return;
label_9730:; return;
label_9733:; return;
label_9735:; return;
label_9738:; return;
label_9739:; return;
label_973A:; return;
label_973C:; return;
label_973E:; return;
label_9740:; return;
label_9742:; return;
label_9744:; return;
label_9746:; return;
label_9747:; return;
label_9748:; return;
label_974B:; return;
label_974D:; return;
label_9750:; return;
label_9751:; return;
label_9752:; return;
label_9753:; return;
label_9755:; return;
label_9758:; return;
label_9759:; return;
label_975B:; return;
label_975D:; return;
label_9760:; return;
label_9761:; return;
label_9764:; return;
label_9767:; return;
label_9768:; return;
label_9769:; return;
label_976B:; return;
label_976D:; return;
label_976F:; return;
label_9772:; return;
label_9775:; return;
label_9776:; return;
label_9779:; return;
label_977A:; return;
label_977C:; return;
label_977E:; return;
label_9780:; return;
label_9782:; return;
label_9785:; return;
label_9786:; return;
label_9789:; return;
label_978A:; return;
label_978C:; return;
label_978D:; return;
label_978F:; return;
label_9792:; return;
label_9795:; return;
label_9798:; return;
label_979A:; return;
label_979D:; return;
label_979F:; return;
label_97A1:; return;
label_97A2:; return;
label_97A3:; return;
label_97A4:; return;
label_97A5:; return;
label_97A7:; return;
label_97A9:; return;
label_97AB:; return;
label_97AC:; return;
label_97AD:; return;
label_97AE:; return;
label_97B0:; return;
label_97B1:; return;
label_97B4:; return;
label_97B6:; return;
label_97B9:; return;
label_97BA:; return;
label_97BB:; return;
label_97BC:; return;
label_97BE:; return;
label_97C1:; return;
label_97C2:; return;
label_97C4:; return;
label_97C7:; return;
label_97C8:; return;
label_97CA:; return;
label_97CC:; return;
label_97CF:; return;
label_97D2:; return;
label_97D3:; return;
label_97D4:; return;
label_97D5:; return;
label_97D7:; return;
label_97D8:; return;
label_97DA:; return;
label_97DC:; return;
label_97DE:; return;
label_97E1:; return;
label_97E4:; return;
label_97E5:; return;
label_97E7:; return;
label_97E9:; return;
label_97EC:; return;
label_97ED:; return;
label_97F0:; return;
label_97F3:; return;
label_97F4:; return;
label_97F7:; return;
label_97F8:; return;
label_97FA:; return;
label_97FD:; return;
label_97FE:; return;
label_9800:; return;
label_9802:; return;
label_9805:; return;
label_9806:; return;
label_9809:; return;
label_980C:; return;
label_980D:; return;
label_9810:; return;
label_9812:; return;
label_9814:; return;
label_9816:; return;
label_9818:; return;
label_981A:; return;
label_981C:; return;
label_981F:; return;
label_9820:; return;
label_9823:; return;
label_9826:; return;
label_9829:; return;
label_982C:; return;
label_982E:; return;
label_9830:; return;
label_9832:; return;
label_9835:; return;
label_9836:; return;
label_9839:; return;
label_983C:; return;
label_983F:; return;
label_9842:; return;
label_9844:; return;
label_9846:; return;
label_9849:; return;
label_984A:; return;
label_984D:; return;
label_9850:; return;
label_9851:; return;
label_9854:; return;
label_9856:; return;
label_9858:; return;
label_985A:; return;
label_985C:; return;
label_985F:; return;
label_9861:; return;
label_9864:; return;
label_9865:; return;
label_9868:; return;
label_986B:; return;
label_986E:; return;
label_9871:; return;
label_9872:; return;
label_9874:; return;
label_9877:; return;
label_9879:; return;
label_987B:; return;
label_987E:; return;
label_987F:; return;
label_9882:; return;
label_9885:; return;
label_9886:; return;
label_9889:; return;
label_9896:; return;
label_9897:; return;
label_989A:; return;
label_989D:; return;
label_98A0:; return;
label_98A3:; return;
label_98A6:; return;
label_98A7:; return;
label_98AA:; return;
label_98AC:; return;
label_98AE:; return;
label_98B0:; return;
label_98B2:; return;
label_98B4:; return;
label_98B7:; return;
label_98B9:; return;
label_98BC:; return;
label_98BE:; return;
label_98C1:; return;
label_98C4:; return;
label_98C7:; return;
label_98C9:; return;
label_98CB:; return;
label_98CE:; return;
label_98D1:; return;
label_98D3:; return;
label_98D6:; return;
label_98D9:; return;
label_98DC:; return;
label_98DF:; return;
label_98E1:; return;
label_98E4:; return;
label_98E7:; return;
label_98E9:; return;
label_98EC:; return;
label_98EF:; return;
label_98F1:; return;
label_98F4:; return;
label_98F7:; return;
label_98FA:; return;
label_98FD:; return;
label_9900:; return;
label_9902:; return;
label_9905:; return;
label_9907:; return;
label_990A:; return;
label_990D:; return;
label_990F:; return;
label_9912:; return;
label_9915:; return;
label_9918:; return;
label_991B:; return;
label_991E:; return;
label_9921:; return;
label_9924:; return;
label_9927:; return;
label_992A:; return;
label_992D:; return;
label_9930:; return;
label_9931:; return;
label_9934:; return;
label_9937:; return;
label_993A:; return;
label_993D:; return;
label_9940:; return;
label_9942:; return;
label_9944:; return;
label_9946:; return;
label_9949:; return;
label_994C:; return;
label_994D:; return;
label_9950:; return;
label_9953:; return;
label_9956:; return;
label_9957:; return;
label_995A:; return;
label_995C:; return;
label_995F:; return;
label_9961:; return;
label_9964:; return;
label_9967:; return;
label_9969:; return;
label_996B:; return;
label_996D:; return;
label_9970:; return;
label_9972:; return;
label_9975:; return;
label_9978:; return;
label_997A:; return;
label_997C:; return;
label_997E:; return;
label_9980:; return;
label_9982:; return;
label_9985:; return;
label_9988:; return;
label_998B:; return;
label_998D:; return;
label_998F:; return;
label_9991:; return;
label_9993:; return;
label_9996:; return;
label_9997:; return;
label_9999:; return;
label_999C:; return;
label_999E:; return;
label_99A0:; return;
label_99A3:; return;
label_99A6:; return;
label_99A8:; return;
label_99AA:; return;
label_99AC:; return;
label_99AE:; return;
label_99B0:; return;
label_99B2:; return;
label_99B5:; return;
label_99B8:; return;
label_99BE:; return;
label_99C1:; return;
label_99C4:; return;
label_99C7:; return;
label_99C9:; return;
label_99CB:; return;
label_99CD:; return;
label_99D0:; return;
label_99D2:; return;
label_99D5:; return;
label_99D8:; return;
label_99DA:; return;
label_99DD:; return;
label_99E0:; return;
label_99E3:; return;
label_99E5:; return;
label_99E7:; return;
label_99E9:; return;
label_99EC:; return;
label_99EE:; return;
label_99F1:; return;
label_99F4:; return;
label_99F6:; return;
label_99F8:; return;
label_99FB:; return;
label_99FE:; return;
label_9A00:; return;
label_9A02:; return;
label_9A04:; return;
label_9A07:; return;
label_9A0A:; return;
label_9A0B:; return;
label_9A0D:; return;
label_9A10:; return;
label_9A11:; return;
label_9A14:; return;
label_9A17:; return;
label_9A19:; return;
label_9A1C:; return;
label_9A1E:; return;
label_9A20:; return;
label_9A23:; return;
label_9A25:; return;
label_9A27:; return;
label_9A2A:; return;
label_9A2C:; return;
label_9A2E:; return;
label_9A30:; return;
label_9A32:; return;
label_9A35:; return;
label_9A38:; return;
label_9A3B:; return;
label_9A3C:; return;
label_9A3E:; return;
label_9A41:; return;
label_9A43:; return;
label_9A45:; return;
label_9A48:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4F:; return;
label_9A52:; return;
label_9A55:; return;
label_9A56:; return;
label_9A59:; return;
label_9A5A:; return;
label_9A5B:; return;
label_9A5E:; return;
label_9A61:; return;
label_9A62:; return;
label_9A65:; return;
label_9A68:; return;
label_9A69:; return;
label_9A6C:; return;
label_9A6F:; return;
label_9A70:; return;
label_9A73:; return;
label_9A76:; return;
label_9A77:; return;
label_9A7A:; return;
label_9A7D:; return;
label_9A80:; return;
label_9A83:; return;
label_9A86:; return;
label_9A87:; return;
label_9A8A:; return;
label_9A8D:; return;
label_9A90:; return;
label_9A93:; return;
label_9A94:; return;
label_9A97:; return;
label_9A99:; return;
label_9A9C:; return;
label_9A9D:; return;
label_9A9F:; return;
label_9AA2:; return;
label_9AA3:; return;
label_9AA5:; return;
label_9AA7:; return;
label_9AAA:; return;
label_9AAB:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB6:; return;
label_9AB7:; return;
label_9AB9:; return;
label_9ABB:; return;
label_9ABD:; return;
label_9AC0:; return;
label_9AC3:; return;
label_9AC4:; return;
label_9AC7:; return;
label_9AC8:; return;
label_9ACA:; return;
label_9ACC:; return;
label_9ACE:; return;
label_9AD0:; return;
label_9AD3:; return;
label_9AD6:; return;
label_9AD7:; return;
label_9ADA:; return;
label_9ADB:; return;
label_9ADD:; return;
label_9ADF:; return;
label_9AE2:; return;
label_9AE3:; return;
label_9AE6:; return;
label_9AE9:; return;
label_9AEA:; return;
label_9AED:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF2:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AFA:; return;
label_9AFD:; return;
label_9AFE:; return;
label_9B01:; return;
label_9B02:; return;
label_9B04:; return;
label_9B06:; return;
label_9B09:; return;
label_9B0B:; return;
label_9B0D:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B14:; return;
label_9B16:; return;
label_9B18:; return;
label_9B1A:; return;
label_9B1D:; return;
label_9B1E:; return;
label_9B21:; return;
label_9B24:; return;
}

void func_890E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_890E_b1");
#endif
label_890E:;
    /* $890E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8910:;
    /* $8910: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8931; }
label_8912:;
    /* $8912: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8915:;
    /* $8915: 99 */ maybe_trigger_vblank(5); nes_write((0x0462 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8918:;
    /* $8918: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_891B:;
    /* $891B: 99 */ maybe_trigger_vblank(5); nes_write((0x0461 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_891E:;
    /* $891E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8921:;
    /* $8921: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8924:;
    /* $8924: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8927:;
    /* $8927: 99 */ maybe_trigger_vblank(5); nes_write((0x045F + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_892A:;
    /* $892A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_892B:;
    /* $892B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_892C:;
    /* $892C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_892D:;
    /* $892D: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_892E:;
    /* $892E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x890E, 1); return;
label_8931:;
    /* $8931: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7D); FLAG_NZ(g_cpu.A);
label_8933:;
    /* $8933: 99 */ maybe_trigger_vblank(5); nes_write((0x045F + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8936:;
    /* $8936: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_8938:;
    /* $8938: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_893B:;
    /* $893B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7F); FLAG_NZ(g_cpu.A);
label_893D:;
    /* $893D: 99 */ maybe_trigger_vblank(5); nes_write((0x0461 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8940:;
    /* $8940: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x80); FLAG_NZ(g_cpu.A);
label_8942:;
    /* $8942: 99 */ maybe_trigger_vblank(5); nes_write((0x0462 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8945:;
    /* $8945: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8946:;
    /* $8946: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8947:;
    /* $8947: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8948:; return;
label_894A:; return;
label_894D:; return;
label_894E:; return;
label_8951:; return;
label_8954:; return;
label_8957:; return;
label_895A:; return;
label_895D:; return;
label_8960:; return;
label_8963:; return;
label_8966:; return;
label_8967:; return;
label_8968:; return;
label_896A:; return;
label_896C:; return;
label_896D:; return;
label_8970:; return;
label_8972:; return;
label_8975:; return;
label_8977:; return;
label_8979:; return;
label_897C:; return;
label_897E:; return;
label_8980:; return;
label_8982:; return;
label_8984:; return;
label_8986:; return;
label_8989:; return;
label_898B:; return;
label_898E:; return;
label_8991:; return;
label_8994:; return;
label_8997:; return;
label_899A:; return;
label_899D:; return;
label_89A0:; return;
label_89A3:; return;
label_89A5:; return;
label_89A6:; return;
label_89A8:; return;
label_89AA:; return;
label_89AD:; return;
label_89AF:; return;
label_89B1:; return;
label_89B3:; return;
label_89B5:; return;
label_89B8:; return;
label_89BB:; return;
label_89BE:; return;
label_89C1:; return;
label_89C4:; return;
label_89C7:; return;
label_89C9:; return;
label_89CC:; return;
label_89CF:; return;
label_89D1:; return;
label_89D4:; return;
label_89D7:; return;
label_89DA:; return;
label_89DD:; return;
label_89E0:; return;
label_89E3:; return;
label_89E5:; return;
label_89E8:; return;
label_89EB:; return;
label_89EC:; return;
label_89EF:; return;
label_89F1:; return;
label_89F3:; return;
label_89F6:; return;
label_89F8:; return;
label_89FA:; return;
label_89FC:; return;
label_89FE:; return;
label_8A00:; return;
label_8A02:; return;
label_8A05:; return;
label_8A07:; return;
label_8A09:; return;
label_8A0C:; return;
label_8A0F:; return;
label_8A12:; return;
label_8A15:; return;
label_8A17:; return;
label_8A19:; return;
label_8A1C:; return;
label_8A1D:; return;
label_8A1F:; return;
label_8A22:; return;
label_8A23:; return;
label_8A24:; return;
label_8A25:; return;
label_8A26:; return;
label_8A27:; return;
label_8A2A:; return;
label_8A2B:; return;
label_8A2D:; return;
label_8A30:; return;
label_8A32:; return;
label_8A35:; return;
label_8A38:; return;
label_8A3B:; return;
label_8A3E:; return;
label_8A41:; return;
label_8A44:; return;
label_8A47:; return;
label_8A49:; return;
label_8A4C:; return;
label_8A4F:; return;
label_8A52:; return;
label_8A55:; return;
label_8A57:; return;
label_8A59:; return;
label_8A5A:; return;
label_8A5C:; return;
label_8A5E:; return;
label_8A60:; return;
label_8A62:; return;
label_8A65:; return;
label_8A68:; return;
label_8A6A:; return;
label_8A6C:; return;
label_8A6F:; return;
label_8A71:; return;
label_8A74:; return;
label_8A75:; return;
label_8A76:; return;
label_8A77:; return;
label_8A79:; return;
label_8A7C:; return;
label_8A7D:; return;
label_8A7F:; return;
label_8A82:; return;
label_8A83:; return;
label_8A86:; return;
label_8A89:; return;
label_8A8A:; return;
label_8A8C:; return;
label_8A8F:; return;
label_8A90:; return;
label_8A92:; return;
label_8A95:; return;
label_8A96:; return;
label_8A98:; return;
label_8A9A:; return;
label_8A9D:; return;
label_8A9E:; return;
label_8AA0:; return;
label_8AA3:; return;
label_8AA4:; return;
label_8AA6:; return;
label_8AA9:; return;
label_8AAC:; return;
label_8AAD:; return;
label_8AB0:; return;
label_8AB3:; return;
label_8AB4:; return;
label_8AB6:; return;
label_8AB9:; return;
label_8ABA:; return;
label_8ABD:; return;
label_8ABE:; return;
label_8AC0:; return;
label_8AC3:; return;
label_8AC4:; return;
label_8AC6:; return;
label_8AC8:; return;
label_8ACB:; return;
label_8ACC:; return;
label_8ACE:; return;
label_8AD1:; return;
label_8AD2:; return;
label_8AD5:; return;
label_8AD8:; return;
label_8AD9:; return;
label_8ADC:; return;
label_8ADF:; return;
label_8AE0:; return;
label_8AE2:; return;
label_8AE5:; return;
label_8AE6:; return;
label_8AE9:; return;
label_8AEA:; return;
label_8AED:; return;
label_8AF0:; return;
label_8AF1:; return;
label_8AF3:; return;
label_8AF5:; return;
label_8AF8:; return;
label_8AFA:; return;
label_8AFC:; return;
label_8AFE:; return;
label_8B01:; return;
label_8B03:; return;
label_8B06:; return;
label_8B08:; return;
label_8B0B:; return;
label_8B0E:; return;
label_8B10:; return;
label_8B13:; return;
label_8B16:; return;
label_8B18:; return;
label_8B1B:; return;
label_8B1E:; return;
label_8B21:; return;
label_8B24:; return;
label_8B2A:; return;
label_8B2C:; return;
label_8B2F:; return;
label_8B31:; return;
label_8B34:; return;
label_8B35:; return;
label_8B37:; return;
label_8B38:; return;
label_8B39:; return;
label_8B3A:; return;
label_8B3D:; return;
label_8B3F:; return;
label_8B42:; return;
label_8B45:; return;
label_8B48:; return;
label_8B4B:; return;
label_8B4E:; return;
label_8B51:; return;
label_8B53:; return;
label_8B55:; return;
label_8B58:; return;
label_8B5A:; return;
label_8B5C:; return;
label_8B5D:; return;
label_8B60:; return;
label_8B63:; return;
label_8B65:; return;
label_8B68:; return;
label_8B6B:; return;
label_8B6E:; return;
label_8B70:; return;
label_8B73:; return;
label_8B75:; return;
label_8B77:; return;
label_8B79:; return;
label_8B7B:; return;
label_8B7D:; return;
label_8B80:; return;
label_8B83:; return;
label_8B85:; return;
label_8B87:; return;
label_8B8A:; return;
label_8B8C:; return;
label_8B8F:; return;
label_8B92:; return;
label_8B95:; return;
label_8B9B:; return;
label_8B9C:; return;
label_8B9F:; return;
label_8BA1:; return;
label_8BA3:; return;
label_8BA5:; return;
label_8BA7:; return;
label_8BA9:; return;
label_8BAC:; return;
label_8BAF:; return;
label_8BB2:; return;
label_8BB4:; return;
label_8BB6:; return;
label_8BB8:; return;
label_8BBA:; return;
label_8BBD:; return;
label_8BC0:; return;
label_8BC3:; return;
label_8BC5:; return;
label_8BC7:; return;
label_8BCA:; return;
label_8BCD:; return;
label_8BCF:; return;
label_8BD1:; return;
label_8BD2:; return;
label_8BD5:; return;
label_8BD7:; return;
label_8BD9:; return;
label_8BDB:; return;
label_8BDD:; return;
label_8BDF:; return;
label_8BE2:; return;
label_8BE5:; return;
label_8BE8:; return;
label_8BEA:; return;
label_8BEC:; return;
label_8BEE:; return;
label_8BF0:; return;
label_8BF3:; return;
label_8BF6:; return;
label_8BF9:; return;
label_8BFB:; return;
label_8BFD:; return;
label_8C00:; return;
label_8C03:; return;
label_8C05:; return;
label_8C07:; return;
label_8C08:; return;
label_8C0B:; return;
label_8C0D:; return;
label_8C0F:; return;
label_8C11:; return;
label_8C14:; return;
label_8C17:; return;
label_8C1A:; return;
label_8C1C:; return;
label_8C1E:; return;
label_8C21:; return;
label_8C24:; return;
label_8C27:; return;
label_8C2A:; return;
label_8C2D:; return;
label_8C2E:; return;
label_8C31:; return;
label_8C33:; return;
label_8C35:; return;
label_8C37:; return;
label_8C3A:; return;
label_8C3D:; return;
label_8C40:; return;
label_8C42:; return;
label_8C44:; return;
label_8C47:; return;
label_8C4A:; return;
label_8C4D:; return;
label_8C50:; return;
label_8C53:; return;
label_8C54:; return;
label_8C56:; return;
label_8C58:; return;
label_8C5B:; return;
label_8C5D:; return;
label_8C5F:; return;
label_8C61:; return;
label_8C64:; return;
label_8C66:; return;
label_8C69:; return;
label_8C6B:; return;
label_8C6E:; return;
label_8C71:; return;
label_8C73:; return;
label_8C75:; return;
label_8C78:; return;
label_8C7B:; return;
label_8C7D:; return;
label_8C80:; return;
label_8C83:; return;
label_8C86:; return;
label_8C89:; return;
label_8C8F:; return;
label_8C91:; return;
label_8C94:; return;
label_8C96:; return;
label_8C99:; return;
label_8C9A:; return;
label_8C9C:; return;
label_8C9D:; return;
label_8C9E:; return;
label_8C9F:; return;
label_8CA2:; return;
label_8CA4:; return;
label_8CA7:; return;
label_8CAA:; return;
label_8CAD:; return;
label_8CB0:; return;
label_8CB3:; return;
label_8CB6:; return;
label_8CB8:; return;
label_8CBA:; return;
label_8CBD:; return;
label_8CBF:; return;
label_8CC2:; return;
label_8CC5:; return;
label_8CC7:; return;
label_8CCA:; return;
label_8CCD:; return;
label_8CD0:; return;
label_8CD2:; return;
label_8CD5:; return;
label_8CD7:; return;
label_8CD9:; return;
label_8CDB:; return;
label_8CDD:; return;
label_8CDF:; return;
label_8CE2:; return;
label_8CE5:; return;
label_8CE7:; return;
label_8CE9:; return;
label_8CEC:; return;
label_8CEE:; return;
label_8CF1:; return;
label_8CF4:; return;
label_8CF7:; return;
label_8CFD:; return;
label_8CFE:; return;
label_8D00:; return;
label_8D11:; return;
label_8D12:; return;
label_8D15:; return;
label_8D16:; return;
label_8D17:; return;
label_8D18:; return;
label_8D19:; return;
label_8D1C:; return;
label_8D1F:; return;
label_8D20:; return;
label_8D22:; return;
label_8D25:; return;
label_8D2B:; return;
label_8D2E:; return;
label_8D31:; return;
label_8D34:; return;
label_8D37:; return;
label_8D3A:; return;
label_8D3D:; return;
label_8D3F:; return;
label_8D42:; return;
label_8D45:; return;
label_8D48:; return;
label_8D4A:; return;
label_8D4C:; return;
label_8D4E:; return;
label_8D51:; return;
label_8D54:; return;
label_8D57:; return;
label_8D59:; return;
label_8D5B:; return;
label_8D5E:; return;
label_8D60:; return;
label_8D62:; return;
label_8D65:; return;
label_8D68:; return;
label_8D6A:; return;
label_8D6D:; return;
label_8D70:; return;
label_8D73:; return;
label_8D75:; return;
label_8D77:; return;
label_8D7A:; return;
label_8D7D:; return;
label_8D7F:; return;
label_8D82:; return;
label_8D83:; return;
label_8D85:; return;
label_8D88:; return;
label_8D89:; return;
label_8D8B:; return;
label_8D8E:; return;
label_8D8F:; return;
label_8D91:; return;
label_8D93:; return;
label_8D95:; return;
label_8D98:; return;
label_8D9B:; return;
label_8D9C:; return;
label_8D9D:; return;
label_8D9E:; return;
label_8DA0:; return;
label_8DA1:; return;
label_8DA3:; return;
label_8DA5:; return;
label_8DA8:; return;
label_8DAB:; return;
label_8DAD:; return;
label_8DAF:; return;
label_8DB1:; return;
label_8DB3:; return;
label_8DB5:; return;
label_8DB8:; return;
label_8DBB:; return;
label_8DBC:; return;
label_8DBE:; return;
label_8DBF:; return;
label_8DC2:; return;
label_8DC5:; return;
label_8DC8:; return;
label_8DC9:; return;
label_8DCC:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD1:; return;
label_8DD4:; return;
label_8DD6:; return;
label_8DD9:; return;
label_8DDA:; return;
label_8DDC:; return;
label_8DDF:; return;
label_8DE0:; return;
label_8DE3:; return;
label_8DE5:; return;
label_8DE8:; return;
label_8DE9:; return;
label_8DEC:; return;
label_8DED:; return;
label_8DEF:; return;
label_8DF1:; return;
label_8DF3:; return;
label_8DF6:; return;
label_8DF7:; return;
label_8DF9:; return;
label_8DFB:; return;
label_8DFD:; return;
label_8DFF:; return;
label_8E02:; return;
label_8E03:; return;
label_8E04:; return;
label_8E05:; return;
label_8E06:; return;
label_8E07:; return;
label_8E0A:; return;
label_8E0D:; return;
label_8E0E:; return;
label_8E0F:; return;
label_8E10:; return;
label_8E12:; return;
label_8E13:; return;
label_8E15:; return;
label_8E17:; return;
label_8E19:; return;
label_8E1C:; return;
label_8E1D:; return;
label_8E1F:; return;
label_8E21:; return;
label_8E24:; return;
label_8E25:; return;
label_8E28:; return;
label_8E2A:; return;
label_8E2D:; return;
label_8E2E:; return;
label_8E31:; return;
label_8E32:; return;
label_8E34:; return;
label_8E36:; return;
label_8E38:; return;
label_8E3B:; return;
label_8E3C:; return;
label_8E3E:; return;
label_8E40:; return;
label_8E42:; return;
label_8E44:; return;
label_8E47:; return;
label_8E48:; return;
label_8E49:; return;
label_8E4A:; return;
label_8E4B:; return;
label_8E4C:; return;
label_8E4D:; return;
label_8E50:; return;
label_8E53:; return;
label_8E54:; return;
label_8E55:; return;
label_8E56:; return;
label_8E58:; return;
label_8E59:; return;
label_8E5B:; return;
label_8E5D:; return;
label_8E5F:; return;
label_8E62:; return;
label_8E65:; return;
label_8E67:; return;
label_8E6A:; return;
label_8E6B:; return;
label_8E6D:; return;
label_8E7E:; return;
label_8E7F:; return;
label_8E82:; return;
label_8E83:; return;
label_8E84:; return;
label_8E85:; return;
label_8E86:; return;
label_8E89:; return;
label_8E8C:; return;
label_8E8D:; return;
label_8E8F:; return;
label_8E92:; return;
label_8E98:; return;
label_8E9B:; return;
label_8E9E:; return;
label_8EA1:; return;
label_8EA4:; return;
label_8EA7:; return;
label_8EAA:; return;
label_8EAC:; return;
label_8EAF:; return;
label_8EB2:; return;
label_8EB5:; return;
label_8EB7:; return;
label_8EB9:; return;
label_8EBB:; return;
label_8EBE:; return;
label_8EC1:; return;
label_8EC3:; return;
label_8EC5:; return;
label_8EC7:; return;
label_8ECA:; return;
label_8ECC:; return;
label_8ECE:; return;
label_8ED1:; return;
label_8ED4:; return;
label_8ED6:; return;
label_8ED8:; return;
label_8EDA:; return;
label_8EDD:; return;
label_8EE0:; return;
label_8EE3:; return;
label_8EE6:; return;
label_8EE9:; return;
label_8EEB:; return;
label_8EEE:; return;
label_8EEF:; return;
label_8EF1:; return;
label_8EF4:; return;
label_8EF5:; return;
label_8EF7:; return;
label_8EFA:; return;
label_8EFB:; return;
label_8EFD:; return;
label_8EFF:; return;
label_8F01:; return;
label_8F04:; return;
label_8F07:; return;
label_8F08:; return;
label_8F09:; return;
label_8F0B:; return;
label_8F0D:; return;
label_8F10:; return;
label_8F11:; return;
label_8F13:; return;
label_8F16:; return;
label_8F19:; return;
label_8F1A:; return;
label_8F1D:; return;
label_8F1E:; return;
label_8F20:; return;
label_8F22:; return;
label_8F24:; return;
label_8F27:; return;
label_8F28:; return;
label_8F2A:; return;
label_8F2D:; return;
label_8F2E:; return;
label_8F31:; return;
label_8F34:; return;
label_8F35:; return;
label_8F37:; return;
label_8F39:; return;
label_8F3B:; return;
label_8F3E:; return;
label_8F41:; return;
label_8F42:; return;
label_8F43:; return;
label_8F45:; return;
label_8F47:; return;
label_8F4A:; return;
label_8F4B:; return;
label_8F4D:; return;
label_8F4F:; return;
label_8F51:; return;
label_8F54:; return;
label_8F55:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5B:; return;
label_8F5E:; return;
label_8F5F:; return;
label_8F61:; return;
label_8F64:; return;
label_8F65:; return;
label_8F68:; return;
label_8F6B:; return;
label_8F6C:; return;
label_8F6E:; return;
label_8F70:; return;
label_8F72:; return;
label_8F75:; return;
label_8F78:; return;
label_8F79:; return;
label_8F7A:; return;
label_8F7C:; return;
label_8F7E:; return;
label_8F81:; return;
label_8F82:; return;
label_8F84:; return;
label_8F86:; return;
label_8F88:; return;
label_8F8B:; return;
label_8F8C:; return;
label_8F8E:; return;
label_8F90:; return;
label_8F93:; return;
label_8F96:; return;
label_8F98:; return;
label_8F9B:; return;
label_8F9C:; return;
label_8F9E:; return;
label_8FA0:; return;
label_8FA3:; return;
label_8FA5:; return;
label_8FA7:; return;
label_8FA9:; return;
label_8FAC:; return;
label_8FAE:; return;
label_8FB1:; return;
label_8FB3:; return;
label_8FB6:; return;
label_8FB9:; return;
label_8FBB:; return;
label_8FBE:; return;
label_8FC1:; return;
label_8FC3:; return;
label_8FC6:; return;
label_8FC9:; return;
label_8FCC:; return;
label_8FCF:; return;
label_8FD5:; return;
label_8FD7:; return;
label_8FDA:; return;
label_8FDC:; return;
label_8FDF:; return;
label_8FE0:; return;
label_8FE2:; return;
label_8FE3:; return;
label_8FE4:; return;
label_8FE5:; return;
label_8FE8:; return;
label_8FEA:; return;
label_8FED:; return;
label_8FF0:; return;
label_8FF3:; return;
label_8FF6:; return;
label_8FF9:; return;
label_8FFC:; return;
label_8FFE:; return;
label_9000:; return;
label_9003:; return;
label_9006:; return;
label_9008:; return;
label_900B:; return;
label_900E:; return;
label_9010:; return;
label_9016:; return;
label_9019:; return;
label_901B:; return;
label_901D:; return;
label_9020:; return;
label_9022:; return;
label_9024:; return;
label_9027:; return;
label_902A:; return;
label_902B:; return;
label_902E:; return;
label_902F:; return;
label_9031:; return;
label_9034:; return;
label_9037:; return;
label_903A:; return;
label_903C:; return;
label_903F:; return;
label_9041:; return;
label_9043:; return;
label_9046:; return;
label_9048:; return;
label_904B:; return;
label_904D:; return;
label_9050:; return;
label_9052:; return;
label_9054:; return;
label_9057:; return;
label_905A:; return;
label_905D:; return;
label_9064:; return;
label_9067:; return;
label_9069:; return;
label_906C:; return;
label_906F:; return;
label_9072:; return;
label_9078:; return;
label_9079:; return;
label_907C:; return;
label_907F:; return;
label_9082:; return;
label_9085:; return;
label_9087:; return;
label_908A:; return;
label_908D:; return;
label_9090:; return;
label_9092:; return;
label_9094:; return;
label_9096:; return;
label_9097:; return;
label_909A:; return;
label_909B:; return;
label_909D:; return;
label_90A0:; return;
label_90A1:; return;
label_90A3:; return;
label_90A5:; return;
label_90A7:; return;
label_90AA:; return;
label_90AD:; return;
label_90AF:; return;
label_90B1:; return;
label_90B4:; return;
label_90B6:; return;
label_90B9:; return;
label_90BC:; return;
label_90BE:; return;
label_90C1:; return;
label_90C4:; return;
label_90C6:; return;
label_90C9:; return;
label_90CA:; return;
label_90CC:; return;
label_90CF:; return;
label_90D0:; return;
label_90D1:; return;
label_90D4:; return;
label_90D7:; return;
label_90DA:; return;
label_90DD:; return;
label_90E0:; return;
label_90E3:; return;
label_90E6:; return;
label_90E9:; return;
label_90EA:; return;
label_90EB:; return;
label_90EC:; return;
label_90ED:; return;
label_90EF:; return;
label_90F0:; return;
label_90F3:; return;
label_90F5:; return;
label_90F8:; return;
label_90FA:; return;
label_90FC:; return;
label_90FE:; return;
label_9101:; return;
label_9104:; return;
label_9106:; return;
label_9109:; return;
label_910C:; return;
label_910F:; return;
label_9112:; return;
label_9114:; return;
label_9117:; return;
label_911A:; return;
label_911D:; return;
label_9120:; return;
label_9122:; return;
label_9123:; return;
label_9124:; return;
label_9125:; return;
label_9128:; return;
label_912B:; return;
label_912D:; return;
label_912F:; return;
label_9131:; return;
label_9134:; return;
label_9136:; return;
label_9139:; return;
label_913B:; return;
label_913E:; return;
label_9140:; return;
label_9143:; return;
label_9146:; return;
label_9149:; return;
label_914C:; return;
label_914F:; return;
label_9152:; return;
label_9155:; return;
label_9158:; return;
label_915B:; return;
label_915E:; return;
label_9160:; return;
label_9163:; return;
label_9166:; return;
label_9169:; return;
label_916C:; return;
label_916E:; return;
label_9170:; return;
label_9172:; return;
label_9174:; return;
label_9176:; return;
label_9178:; return;
label_917A:; return;
label_917B:; return;
label_917E:; return;
label_9180:; return;
label_9183:; return;
label_9185:; return;
label_9188:; return;
label_918A:; return;
label_918D:; return;
label_918E:; return;
label_9191:; return;
label_9193:; return;
label_9196:; return;
label_9198:; return;
label_919A:; return;
label_919C:; return;
label_919E:; return;
label_91A0:; return;
label_91A3:; return;
label_91A6:; return;
label_91A9:; return;
label_91AB:; return;
label_91AD:; return;
label_91B0:; return;
label_91B2:; return;
label_91B4:; return;
label_91B5:; return;
label_91B6:; return;
label_91B7:; return;
label_91B8:; return;
label_91B9:; return;
label_91BC:; return;
label_91BE:; return;
label_91BF:; return;
label_91C0:; return;
label_91C3:; return;
label_91C6:; return;
label_91C9:; return;
label_91CC:; return;
label_91CD:; return;
label_91CF:; return;
label_91D2:; return;
label_91D5:; return;
label_91D6:; return;
label_91D8:; return;
label_91DB:; return;
label_91DC:; return;
label_91DE:; return;
label_91DF:; return;
label_91E0:; return;
label_91E1:; return;
label_91E2:; return;
label_91E3:; return;
label_91E5:; return;
label_91E7:; return;
label_91E9:; return;
label_91EB:; return;
label_91EC:; return;
label_91EE:; return;
label_91EF:; return;
label_91F0:; return;
label_91F1:; return;
label_91F2:; return;
label_91F5:; return;
label_91F6:; return;
label_91F8:; return;
label_91FB:; return;
label_91FD:; return;
label_91FF:; return;
label_9201:; return;
label_9203:; return;
label_9204:; return;
label_9206:; return;
label_9208:; return;
label_920A:; return;
label_920C:; return;
label_920F:; return;
label_9212:; return;
label_9214:; return;
label_9216:; return;
label_9218:; return;
label_921B:; return;
label_921D:; return;
label_921E:; return;
label_9221:; return;
label_9224:; return;
label_9227:; return;
label_9228:; return;
label_922B:; return;
label_922E:; return;
label_922F:; return;
label_9231:; return;
label_9234:; return;
label_9235:; return;
label_9236:; return;
label_9239:; return;
label_923A:; return;
label_923B:; return;
label_923D:; return;
label_9240:; return;
label_9241:; return;
label_9243:; return;
label_9246:; return;
label_9249:; return;
label_924C:; return;
label_924D:; return;
label_924F:; return;
label_9252:; return;
label_9255:; return;
label_9256:; return;
label_9258:; return;
label_925B:; return;
label_925C:; return;
label_925D:; return;
label_925E:; return;
label_925F:; return;
label_9260:; return;
label_9263:; return;
label_9265:; return;
label_9267:; return;
label_926A:; return;
label_926B:; return;
label_926C:; return;
label_926D:; return;
label_926E:; return;
label_926F:; return;
label_9272:; return;
label_9273:; return;
label_9275:; return;
label_9278:; return;
label_927A:; return;
label_927D:; return;
label_927F:; return;
label_9282:; return;
label_9284:; return;
label_9287:; return;
label_9289:; return;
label_928C:; return;
label_928F:; return;
label_9292:; return;
label_9295:; return;
label_9296:; return;
label_9298:; return;
label_929A:; return;
label_929C:; return;
label_929F:; return;
label_92A2:; return;
label_92A5:; return;
label_92A7:; return;
label_92AA:; return;
label_92AD:; return;
label_92B0:; return;
label_92B3:; return;
label_92B4:; return;
label_92B7:; return;
label_92B9:; return;
label_92BB:; return;
label_92BD:; return;
label_92C0:; return;
label_92C1:; return;
label_92C2:; return;
label_92C3:; return;
label_92C4:; return;
label_92C5:; return;
label_92C8:; return;
label_92CB:; return;
label_92CD:; return;
label_92CF:; return;
label_92D2:; return;
label_92D3:; return;
label_92D5:; return;
label_92D8:; return;
label_92DA:; return;
label_92DD:; return;
label_92DF:; return;
label_92E2:; return;
label_92E4:; return;
label_92E7:; return;
label_92E9:; return;
label_92EC:; return;
label_92EF:; return;
label_92F2:; return;
label_92F5:; return;
label_92F6:; return;
label_92F8:; return;
label_92FA:; return;
label_92FC:; return;
label_92FF:; return;
label_9302:; return;
label_9304:; return;
label_9306:; return;
label_9308:; return;
label_930A:; return;
label_930D:; return;
label_930E:; return;
label_9311:; return;
label_9312:; return;
label_9314:; return;
label_9315:; return;
label_9317:; return;
label_931A:; return;
label_931C:; return;
label_931E:; return;
label_9321:; return;
label_9323:; return;
label_9325:; return;
label_9327:; return;
label_9329:; return;
label_932C:; return;
label_932E:; return;
label_9331:; return;
label_9332:; return;
label_9334:; return;
label_9337:; return;
label_9338:; return;
label_933A:; return;
label_933C:; return;
label_933F:; return;
label_9340:; return;
label_9342:; return;
label_9345:; return;
label_9348:; return;
label_9349:; return;
label_934A:; return;
label_934C:; return;
label_934E:; return;
label_9351:; return;
label_9353:; return;
label_9356:; return;
label_9359:; return;
label_935C:; return;
label_935F:; return;
label_9360:; return;
label_9362:; return;
label_9364:; return;
label_9367:; return;
label_9369:; return;
label_936C:; return;
label_936F:; return;
label_9372:; return;
label_9374:; return;
label_9377:; return;
label_9379:; return;
label_937C:; return;
label_937E:; return;
label_9381:; return;
label_9383:; return;
label_9385:; return;
label_9387:; return;
label_9389:; return;
label_938C:; return;
label_938E:; return;
label_9391:; return;
label_9393:; return;
label_9396:; return;
label_9398:; return;
label_939B:; return;
label_939E:; return;
label_93A0:; return;
label_93A2:; return;
label_93A4:; return;
label_93A6:; return;
label_93A8:; return;
label_93AA:; return;
label_93AC:; return;
label_93AF:; return;
label_93B0:; return;
label_93B2:; return;
label_93B3:; return;
label_93B4:; return;
label_93B5:; return;
label_93B7:; return;
label_93B9:; return;
label_93BB:; return;
label_93BE:; return;
label_93C0:; return;
label_93C3:; return;
label_93C4:; return;
label_93C7:; return;
label_93C9:; return;
label_93CC:; return;
label_93CE:; return;
label_93D0:; return;
label_93D3:; return;
label_93D5:; return;
label_93D7:; return;
label_93D9:; return;
label_93DB:; return;
label_93DD:; return;
label_93DF:; return;
label_93E2:; return;
label_93E4:; return;
label_93E7:; return;
label_93EA:; return;
label_93ED:; return;
label_93F0:; return;
label_93F3:; return;
label_93F6:; return;
label_93F9:; return;
label_93FC:; return;
label_93FE:; return;
label_93FF:; return;
label_9401:; return;
label_9403:; return;
label_9406:; return;
label_9408:; return;
label_940A:; return;
label_940C:; return;
label_940E:; return;
label_9411:; return;
label_9414:; return;
label_9417:; return;
label_941A:; return;
label_941D:; return;
label_9420:; return;
label_9422:; return;
label_9425:; return;
label_9428:; return;
label_942B:; return;
label_942E:; return;
label_9430:; return;
label_9432:; return;
label_9435:; return;
label_9438:; return;
label_943B:; return;
label_943E:; return;
label_9441:; return;
label_9444:; return;
label_9446:; return;
label_9449:; return;
label_944C:; return;
label_944D:; return;
label_9450:; return;
label_9452:; return;
label_9454:; return;
label_9457:; return;
label_9459:; return;
label_945B:; return;
label_945D:; return;
label_945F:; return;
label_9461:; return;
label_9463:; return;
label_9466:; return;
label_9468:; return;
label_946A:; return;
label_946D:; return;
label_9470:; return;
label_9473:; return;
label_9476:; return;
label_9478:; return;
label_947A:; return;
label_947D:; return;
label_947E:; return;
label_9480:; return;
label_9482:; return;
label_9484:; return;
label_9486:; return;
label_9489:; return;
label_948A:; return;
label_948D:; return;
label_948E:; return;
label_9490:; return;
label_9492:; return;
label_9494:; return;
label_9497:; return;
label_949A:; return;
label_949B:; return;
label_949E:; return;
label_94A0:; return;
label_94A2:; return;
label_94A4:; return;
label_94A7:; return;
label_94AA:; return;
label_94AB:; return;
label_94AE:; return;
label_94AF:; return;
label_94B1:; return;
label_94B3:; return;
label_94B5:; return;
label_94B8:; return;
label_94BA:; return;
label_94BC:; return;
label_94BF:; return;
label_94C1:; return;
label_94C2:; return;
label_94C4:; return;
label_94C6:; return;
label_94C8:; return;
label_94CA:; return;
label_94CC:; return;
label_94CE:; return;
label_94D0:; return;
label_94D3:; return;
label_94D6:; return;
label_94D8:; return;
label_94D9:; return;
label_94DB:; return;
label_94DD:; return;
label_94DF:; return;
label_94E1:; return;
label_94E3:; return;
label_94E5:; return;
label_94E7:; return;
label_94EA:; return;
label_94ED:; return;
label_94EE:; return;
label_94F1:; return;
label_94F3:; return;
label_94F5:; return;
label_94F8:; return;
label_94FB:; return;
label_94FD:; return;
label_94FF:; return;
label_9501:; return;
label_9503:; return;
label_9505:; return;
label_9508:; return;
label_950B:; return;
label_950C:; return;
label_950F:; return;
label_9510:; return;
label_9512:; return;
label_9514:; return;
label_9517:; return;
label_9519:; return;
label_951B:; return;
label_951D:; return;
label_951E:; return;
label_9520:; return;
label_9522:; return;
label_9524:; return;
label_9526:; return;
label_9529:; return;
label_952B:; return;
label_952D:; return;
label_952F:; return;
label_9530:; return;
label_9532:; return;
label_9534:; return;
label_9536:; return;
label_9538:; return;
label_953B:; return;
label_953D:; return;
label_953F:; return;
label_9541:; return;
label_9543:; return;
label_9545:; return;
label_9548:; return;
label_954B:; return;
label_954D:; return;
label_954E:; return;
label_9550:; return;
label_9552:; return;
label_9554:; return;
label_9556:; return;
label_9558:; return;
label_955A:; return;
label_955C:; return;
label_955F:; return;
label_9562:; return;
label_9564:; return;
label_9565:; return;
label_9567:; return;
label_9569:; return;
label_956B:; return;
label_956D:; return;
label_956F:; return;
label_9571:; return;
label_9574:; return;
label_9576:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957D:; return;
label_957F:; return;
label_9581:; return;
label_9583:; return;
label_9586:; return;
label_9587:; return;
label_958A:; return;
label_958C:; return;
label_958E:; return;
label_9591:; return;
label_9594:; return;
label_9596:; return;
label_9598:; return;
label_959A:; return;
label_959D:; return;
label_95A0:; return;
label_95A1:; return;
label_95A3:; return;
label_95A6:; return;
label_95A9:; return;
label_95AA:; return;
label_95AD:; return;
label_95AE:; return;
label_95B0:; return;
label_95B2:; return;
label_95B5:; return;
label_95B8:; return;
label_95BA:; return;
label_95BC:; return;
label_95BE:; return;
label_95C1:; return;
label_95C2:; return;
label_95C4:; return;
label_95C7:; return;
label_95C8:; return;
label_95CB:; return;
label_95CE:; return;
label_95CF:; return;
label_95D1:; return;
label_95D3:; return;
label_95D5:; return;
label_95D8:; return;
label_95DB:; return;
label_95DC:; return;
label_95DD:; return;
label_95DF:; return;
label_95E1:; return;
label_95E4:; return;
label_95E5:; return;
label_95E7:; return;
label_95E9:; return;
label_95EB:; return;
label_95ED:; return;
label_95F0:; return;
label_95F1:; return;
label_95F3:; return;
label_95F5:; return;
label_95F8:; return;
label_95FA:; return;
label_95FB:; return;
label_95FD:; return;
label_95FF:; return;
label_9601:; return;
label_9603:; return;
label_9605:; return;
label_9608:; return;
label_9609:; return;
label_960B:; return;
label_960E:; return;
label_960F:; return;
label_9612:; return;
label_9615:; return;
label_9616:; return;
label_9618:; return;
label_961A:; return;
label_961C:; return;
label_961F:; return;
label_9622:; return;
label_9623:; return;
label_9624:; return;
label_9626:; return;
label_9628:; return;
label_962B:; return;
label_962C:; return;
label_962E:; return;
label_9630:; return;
label_9632:; return;
label_9634:; return;
label_9637:; return;
label_9638:; return;
label_963A:; return;
label_963C:; return;
label_963F:; return;
label_9642:; return;
label_9643:; return;
label_9646:; return;
label_9648:; return;
label_964B:; return;
label_964C:; return;
label_964E:; return;
label_9651:; return;
label_9652:; return;
label_9654:; return;
label_9657:; return;
label_9658:; return;
label_965A:; return;
label_965D:; return;
label_965E:; return;
label_9660:; return;
label_9662:; return;
label_9664:; return;
label_9667:; return;
label_966A:; return;
label_966B:; return;
label_966E:; return;
label_9670:; return;
label_9673:; return;
label_9674:; return;
label_9676:; return;
label_9679:; return;
label_967A:; return;
label_967C:; return;
label_967F:; return;
label_9680:; return;
label_9683:; return;
label_9686:; return;
label_9689:; return;
label_968A:; return;
label_968B:; return;
label_968D:; return;
label_968F:; return;
label_9691:; return;
label_9694:; return;
label_9697:; return;
label_9698:; return;
label_969A:; return;
label_969D:; return;
label_969F:; return;
label_96A1:; return;
label_96A4:; return;
label_96A5:; return;
label_96A8:; return;
label_96A9:; return;
label_96AB:; return;
label_96AD:; return;
label_96AF:; return;
label_96B2:; return;
label_96B5:; return;
label_96B6:; return;
label_96B9:; return;
label_96BB:; return;
label_96BD:; return;
label_96BF:; return;
label_96C1:; return;
label_96C3:; return;
label_96C5:; return;
label_96C8:; return;
label_96CB:; return;
label_96CE:; return;
label_96D0:; return;
label_96D2:; return;
label_96D4:; return;
label_96D6:; return;
label_96D9:; return;
label_96DC:; return;
label_96DF:; return;
label_96E1:; return;
label_96E3:; return;
label_96E5:; return;
label_96E8:; return;
label_96EB:; return;
label_96EC:; return;
label_96EF:; return;
label_96F1:; return;
label_96F3:; return;
label_96F5:; return;
label_96F7:; return;
label_96F9:; return;
label_96FC:; return;
label_96FF:; return;
label_9702:; return;
label_9703:; return;
label_9705:; return;
label_9708:; return;
label_970A:; return;
label_970C:; return;
label_970E:; return;
label_9711:; return;
label_9714:; return;
label_9715:; return;
label_9717:; return;
label_9719:; return;
label_971B:; return;
label_971D:; return;
label_9720:; return;
label_9721:; return;
label_9724:; return;
label_9725:; return;
label_9727:; return;
label_9728:; return;
label_972A:; return;
label_972D:; return;
label_9730:; return;
label_9733:; return;
label_9735:; return;
label_9738:; return;
label_9739:; return;
label_973A:; return;
label_973C:; return;
label_973E:; return;
label_9740:; return;
label_9742:; return;
label_9744:; return;
label_9746:; return;
label_9747:; return;
label_9748:; return;
label_974B:; return;
label_974D:; return;
label_9750:; return;
label_9751:; return;
label_9752:; return;
label_9753:; return;
label_9755:; return;
label_9758:; return;
label_9759:; return;
label_975B:; return;
label_975D:; return;
label_9760:; return;
label_9761:; return;
label_9764:; return;
label_9767:; return;
label_9768:; return;
label_9769:; return;
label_976B:; return;
label_976D:; return;
label_976F:; return;
label_9772:; return;
label_9775:; return;
label_9776:; return;
label_9779:; return;
label_977A:; return;
label_977C:; return;
label_977E:; return;
label_9780:; return;
label_9782:; return;
label_9785:; return;
label_9786:; return;
label_9789:; return;
label_978A:; return;
label_978C:; return;
label_978D:; return;
label_978F:; return;
label_9792:; return;
label_9795:; return;
label_9798:; return;
label_979A:; return;
label_979D:; return;
label_979F:; return;
label_97A1:; return;
label_97A2:; return;
label_97A3:; return;
label_97A4:; return;
label_97A5:; return;
label_97A7:; return;
label_97A9:; return;
label_97AB:; return;
label_97AC:; return;
label_97AD:; return;
label_97AE:; return;
label_97B0:; return;
label_97B1:; return;
label_97B4:; return;
label_97B6:; return;
label_97B9:; return;
label_97BA:; return;
label_97BB:; return;
label_97BC:; return;
label_97BE:; return;
label_97C1:; return;
label_97C2:; return;
label_97C4:; return;
label_97C7:; return;
label_97C8:; return;
label_97CA:; return;
label_97CC:; return;
label_97CF:; return;
label_97D2:; return;
label_97D3:; return;
label_97D4:; return;
label_97D5:; return;
label_97D7:; return;
label_97D8:; return;
label_97DA:; return;
label_97DC:; return;
label_97DE:; return;
label_97E1:; return;
label_97E4:; return;
label_97E5:; return;
label_97E7:; return;
label_97E9:; return;
label_97EC:; return;
label_97ED:; return;
label_97F0:; return;
label_97F3:; return;
label_97F4:; return;
label_97F7:; return;
label_97F8:; return;
label_97FA:; return;
label_97FD:; return;
label_97FE:; return;
label_9800:; return;
label_9802:; return;
label_9805:; return;
label_9806:; return;
label_9809:; return;
label_980C:; return;
label_980D:; return;
label_9810:; return;
label_9812:; return;
label_9814:; return;
label_9816:; return;
label_9818:; return;
label_981A:; return;
label_981C:; return;
label_981F:; return;
label_9820:; return;
label_9823:; return;
label_9826:; return;
label_9829:; return;
label_982C:; return;
label_982E:; return;
label_9830:; return;
label_9832:; return;
label_9835:; return;
label_9836:; return;
label_9839:; return;
label_983C:; return;
label_983F:; return;
label_9842:; return;
label_9844:; return;
label_9846:; return;
label_9849:; return;
label_984A:; return;
label_984D:; return;
label_9850:; return;
label_9851:; return;
label_9854:; return;
label_9856:; return;
label_9858:; return;
label_985A:; return;
label_985C:; return;
label_985F:; return;
label_9861:; return;
label_9864:; return;
label_9865:; return;
label_9868:; return;
label_986B:; return;
label_986E:; return;
label_9871:; return;
label_9872:; return;
label_9874:; return;
label_9877:; return;
label_9879:; return;
label_987B:; return;
label_987E:; return;
label_987F:; return;
label_9882:; return;
label_9885:; return;
label_9886:; return;
label_9889:; return;
label_9896:; return;
label_9897:; return;
label_989A:; return;
label_989D:; return;
label_98A0:; return;
label_98A3:; return;
label_98A6:; return;
label_98A7:; return;
label_98AA:; return;
label_98AC:; return;
label_98AE:; return;
label_98B0:; return;
label_98B2:; return;
label_98B4:; return;
label_98B7:; return;
label_98B9:; return;
label_98BC:; return;
label_98BE:; return;
label_98C1:; return;
label_98C4:; return;
label_98C7:; return;
label_98C9:; return;
label_98CB:; return;
label_98CE:; return;
label_98D1:; return;
label_98D3:; return;
label_98D6:; return;
label_98D9:; return;
label_98DC:; return;
label_98DF:; return;
label_98E1:; return;
label_98E4:; return;
label_98E7:; return;
label_98E9:; return;
label_98EC:; return;
label_98EF:; return;
label_98F1:; return;
label_98F4:; return;
label_98F7:; return;
label_98FA:; return;
label_98FD:; return;
label_9900:; return;
label_9902:; return;
label_9905:; return;
label_9907:; return;
label_990A:; return;
label_990D:; return;
label_990F:; return;
label_9912:; return;
label_9915:; return;
label_9918:; return;
label_991B:; return;
label_991E:; return;
label_9921:; return;
label_9924:; return;
label_9927:; return;
label_992A:; return;
label_992D:; return;
label_9930:; return;
label_9931:; return;
label_9934:; return;
label_9937:; return;
label_993A:; return;
label_993D:; return;
label_9940:; return;
label_9942:; return;
label_9944:; return;
label_9946:; return;
label_9949:; return;
label_994C:; return;
label_994D:; return;
label_9950:; return;
label_9953:; return;
label_9956:; return;
label_9957:; return;
label_995A:; return;
label_995C:; return;
label_995F:; return;
label_9961:; return;
label_9964:; return;
label_9967:; return;
label_9969:; return;
label_996B:; return;
label_996D:; return;
label_9970:; return;
label_9972:; return;
label_9975:; return;
label_9978:; return;
label_997A:; return;
label_997C:; return;
label_997E:; return;
label_9980:; return;
label_9982:; return;
label_9985:; return;
label_9988:; return;
label_998B:; return;
label_998D:; return;
label_998F:; return;
label_9991:; return;
label_9993:; return;
label_9996:; return;
label_9997:; return;
label_9999:; return;
label_999C:; return;
label_999E:; return;
label_99A0:; return;
label_99A3:; return;
label_99A6:; return;
label_99A8:; return;
label_99AA:; return;
label_99AC:; return;
label_99AE:; return;
label_99B0:; return;
label_99B2:; return;
label_99B5:; return;
label_99B8:; return;
label_99BE:; return;
label_99C1:; return;
label_99C4:; return;
label_99C7:; return;
label_99C9:; return;
label_99CB:; return;
label_99CD:; return;
label_99D0:; return;
label_99D2:; return;
label_99D5:; return;
label_99D8:; return;
label_99DA:; return;
label_99DD:; return;
label_99E0:; return;
label_99E3:; return;
label_99E5:; return;
label_99E7:; return;
label_99E9:; return;
label_99EC:; return;
label_99EE:; return;
label_99F1:; return;
label_99F4:; return;
label_99F6:; return;
label_99F8:; return;
label_99FB:; return;
label_99FE:; return;
label_9A00:; return;
label_9A02:; return;
label_9A04:; return;
label_9A07:; return;
label_9A0A:; return;
label_9A0B:; return;
label_9A0D:; return;
label_9A10:; return;
label_9A11:; return;
label_9A14:; return;
label_9A17:; return;
label_9A19:; return;
label_9A1C:; return;
label_9A1E:; return;
label_9A20:; return;
label_9A23:; return;
label_9A25:; return;
label_9A27:; return;
label_9A2A:; return;
label_9A2C:; return;
label_9A2E:; return;
label_9A30:; return;
label_9A32:; return;
label_9A35:; return;
label_9A38:; return;
label_9A3B:; return;
label_9A3C:; return;
label_9A3E:; return;
label_9A41:; return;
label_9A43:; return;
label_9A45:; return;
label_9A48:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4F:; return;
label_9A52:; return;
label_9A55:; return;
label_9A56:; return;
label_9A59:; return;
label_9A5A:; return;
label_9A5B:; return;
label_9A5E:; return;
label_9A61:; return;
label_9A62:; return;
label_9A65:; return;
label_9A68:; return;
label_9A69:; return;
label_9A6C:; return;
label_9A6F:; return;
label_9A70:; return;
label_9A73:; return;
label_9A76:; return;
label_9A77:; return;
label_9A7A:; return;
label_9A7D:; return;
label_9A80:; return;
label_9A83:; return;
label_9A86:; return;
label_9A87:; return;
label_9A8A:; return;
label_9A8D:; return;
label_9A90:; return;
label_9A93:; return;
label_9A94:; return;
label_9A97:; return;
label_9A99:; return;
label_9A9C:; return;
label_9A9D:; return;
label_9A9F:; return;
label_9AA2:; return;
label_9AA3:; return;
label_9AA5:; return;
label_9AA7:; return;
label_9AAA:; return;
label_9AAB:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB6:; return;
label_9AB7:; return;
label_9AB9:; return;
label_9ABB:; return;
label_9ABD:; return;
label_9AC0:; return;
label_9AC3:; return;
label_9AC4:; return;
label_9AC7:; return;
label_9AC8:; return;
label_9ACA:; return;
label_9ACC:; return;
label_9ACE:; return;
label_9AD0:; return;
label_9AD3:; return;
label_9AD6:; return;
label_9AD7:; return;
label_9ADA:; return;
label_9ADB:; return;
label_9ADD:; return;
label_9ADF:; return;
label_9AE2:; return;
label_9AE3:; return;
label_9AE6:; return;
label_9AE9:; return;
label_9AEA:; return;
label_9AED:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF2:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AFA:; return;
label_9AFD:; return;
label_9AFE:; return;
label_9B01:; return;
label_9B02:; return;
label_9B04:; return;
label_9B06:; return;
label_9B09:; return;
label_9B0B:; return;
label_9B0D:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B14:; return;
label_9B16:; return;
label_9B18:; return;
label_9B1A:; return;
label_9B1D:; return;
label_9B1E:; return;
label_9B21:; return;
label_9B24:; return;
label_9B27:; return;
label_9B29:; return;
label_9B2B:; return;
label_9B2D:; return;
label_9B30:; return;
label_9B31:; return;
label_9B34:; return;
label_9B37:; return;
label_9B38:; return;
label_9B3B:; return;
label_9B3D:; return;
label_9B3F:; return;
label_9B42:; return;
label_9B45:; return;
label_9B46:; return;
label_9B48:; return;
label_9B4A:; return;
label_9B4D:; return;
label_9B4F:; return;
}

void func_A4E3_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4E3_b1");
#endif
label_A4E3:;
    /* $A4E3: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0DF0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4E6:;
    /* $A4E6: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A4E7:;
    /* $A4E7: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4E9:;
    /* $A4E9: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A4EB:;
    /* $A4EB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A4ED:;
    /* $A4ED: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A4F3; }
label_A4EF:;
    /* $A4EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A4F1:;
    /* $A4F1: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A4F3:;
    /* $A4F3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A4F5:;
    /* $A4F5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4F6:;
    /* $A4F6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4F7:;
    /* $A4F7: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4F9:;
    /* $A4F9: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4FB:;
    /* $A4FB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A4FC:;
    /* $A4FC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA9CD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4FF:;
    /* $A4FF: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A501:;
    /* $A501: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A503:;
    /* $A503: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A505:;
    /* $A505: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A507:;
    /* $A507: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A509:;
    /* $A509: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A512; }
label_A50B:;
    /* $A50B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A50D:;
    /* $A50D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A50E:;
    /* $A50E: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A510:;
    /* $A510: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A512:;
    /* $A512: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_A515:;
    /* $A515: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A516:;
    /* $A516: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A517:;
    /* $A517: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A518:;
    /* $A518: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A519:;
    /* $A519: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A51A:;
    /* $A51A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_A51D:;
    /* $A51D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A51E:;
    /* $A51E: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A521:;
    /* $A521: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A522:;
    /* $A522: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_A524:;
    /* $A524: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A525:;
    /* $A525: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A527:;
    /* $A527: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A529:;
    /* $A529: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9FE4, 1);
label_A52C:;
    /* $A52C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A52F:;
    /* $A52F: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x91); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A531:;
    /* $A531: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A570; }
label_A533:;
    /* $A533: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A536:;
    /* $A536: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A537:;
    /* $A537: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A538:;
    /* $A538: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A539:;
    /* $A539: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0424); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A53C:;
    /* $A53C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A53D:;
    /* $A53D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x11 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x11); g_cpu.A=r&0xFF; }
label_A53F:;
    /* $A53F: 8D */ maybe_trigger_vblank(4); nes_write(0x0424, g_cpu.A);
label_A542:;
    /* $A542: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A544:;
    /* $A544: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A555; }
label_A546:;
    /* $A546: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_A548:;
    /* $A548: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A54A:;
    /* $A54A: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_A54C:;
    /* $A54C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A54E:;
    /* $A54E: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A550:;
    /* $A550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 1);
label_A553:;
    /* $A553: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A555:;
    /* $A555: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A556:;
    /* $A556: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A558:;
    /* $A558: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_A55A:;
    /* $A55A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A570; }
label_A55C:;
    /* $A55C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A55E:;
    /* $A55E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A566; }
label_A560:;
    /* $A560: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9FE4, 1);
label_A563:;
    /* $A563: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA570, 1); return;
label_A566:;
    /* $A566: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9FE4, 1);
label_A569:;
    /* $A569: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A56C:;
    /* $A56C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x91); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A56E:;
    /* $A56E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A566;
    }
label_A570:;
    /* $A570: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_A572:;
    /* $A572: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A57B; }
label_A574:;
    /* $A574: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02FE + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A579:;
    /* $A579: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A529;
    }
label_A57B:;
    /* $A57B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A57D:;
    /* $A57D: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A580:;
    /* $A580: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: 99 */ maybe_trigger_vblank(5); nes_write((0x0301 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A585:;
    /* $A585: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_A587:;
    /* $A587: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A58A:;
    /* $A58A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_A58C:;
    /* $A58C: 99 */ maybe_trigger_vblank(5); nes_write((0x0311 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A58F:;
    /* $A58F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A590:;
    /* $A590: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A591:;
    /* $A591: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A592:;
    /* $A592: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A593:;
    /* $A593: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A595:;
    /* $A595: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A529;
    }
label_A597:;
    /* $A597: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0455); FLAG_NZ(g_cpu.A);
label_A59A:;
    /* $A59A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A59C:;
    /* $A59C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5A1; }
label_A59E:;
    /* $A59E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA5F1, 1); return;
label_A5A1:;
    /* $A5A1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0455); FLAG_NZ(g_cpu.A);
label_A5A4:;
    /* $A5A4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A5A6:;
    /* $A5A6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5F1; }
label_A5A8:;
    /* $A5A8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA1A8, 1);
label_A5AB:;
    /* $A5AB: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x14; g_cpu.C=(g_cpu.Y>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_A5AD:;
    /* $A5AD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A5F1; }
label_A5AF:;
    /* $A5AF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_A5B2:;
    /* $A5B2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5B3:;
    /* $A5B3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5D8; }
label_A5B5:;
    /* $A5B5: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0455); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5B8:;
    /* $A5B8: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A5C0; }
label_A5BA:;
    /* $A5BA: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0455); FLAG_NZ(g_cpu.Y);
label_A5BD:;
    /* $A5BD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA5D8, 1); return;
label_A5C0:;
    /* $A5C0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A5C3:;
    /* $A5C3: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_A5C5:;
    /* $A5C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A5C7:;
    /* $A5C7: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_A5C9:;
    /* $A5C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_A5CC:;
    /* $A5CC: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A5CE:;
    /* $A5CE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 1);
label_A5D1:;
    /* $A5D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_A5D3:;
    /* $A5D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5D4:;
    /* $A5D4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A5D5:;
    /* $A5D5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A5D8; }
label_A5D7:;
    /* $A5D7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A5D8:;
    /* $A5D8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A5DA:;
    /* $A5DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5DD:;
    /* $A5DD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_A5DF:;
    /* $A5DF: 99 */ maybe_trigger_vblank(5); nes_write((0x0301 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5E2:;
    /* $A5E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_A5E4:;
    /* $A5E4: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5E7:;
    /* $A5E7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0311 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5EC:;
    /* $A5EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A5EE:;
    /* $A5EE: 8D */ maybe_trigger_vblank(4); nes_write(0x0455, g_cpu.A);
label_A5F1:;
    /* $A5F1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5F3:;
    /* $A5F3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A5F4:;
    /* $A5F4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A5F5:;
    /* $A5F5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B21C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B21C_b1");
#endif
label_B21C:;
    /* $B21C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CF7_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF7_b1");
#endif
label_8CF7:;
    /* $8CF7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8CFD:;
    /* $8CFD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CE9_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CE9_b1");
#endif
label_8CE9:;
    /* $8CE9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x045B); FLAG_NZ(g_cpu.A);
label_8CEC:;
    /* $8CEC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CF4; }
label_8CEE:;
    /* $8CEE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8854, 1);
label_8CF1:;
    /* $8CF1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x90F0, 1);
label_8CF4:;
    /* $8CF4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8C2E, 1);
label_8CF7:;
    /* $8CF7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8CFD:;
    /* $8CFD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CBD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CBD_b1");
#endif
label_8CBD:;
    /* $8CBD: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8CBF:;
    /* $8CBF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CC2:;
    /* $8CC2: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0429); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8CC5:;
    /* $8CC5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CE5; }
label_8CC7:;
    /* $8CC7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x864F, 1);
label_8CCA:;
    /* $8CCA: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0429; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CCD:;
    /* $8CCD: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0429; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CD0:;
    /* $8CD0: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x95; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CD2:;
    /* $8CD2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CE5, 1); return;
label_8CE5:;
    /* $8CE5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8CE7:;
    /* $8CE7: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_8CE9:;
    /* $8CE9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x045B); FLAG_NZ(g_cpu.A);
label_8CEC:;
    /* $8CEC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CF4; }
label_8CEE:;
    /* $8CEE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8854, 1);
label_8CF1:;
    /* $8CF1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x90F0, 1);
label_8CF4:;
    /* $8CF4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8C2E, 1);
label_8CF7:;
    /* $8CF7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8CFD:;
    /* $8CFD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_864F_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_86E1;
        case 2: goto label_8728;
        case 3: goto label_86E8;
    }
label_864F:;
    /* $864F: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8651:;
    /* $8651: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8654:;
    /* $8654: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8655:;
    /* $8655: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8656:;
    /* $8656: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8657:;
    /* $8657: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8658:;
    /* $8658: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8659:;
    /* $8659: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_865B:;
    /* $865B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_865E:;
    /* $865E: 99 */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8661:;
    /* $8661: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8664:;
    /* $8664: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_8666:;
    /* $8666: 99 */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8669:;
    /* $8669: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0211 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_866C:;
    /* $866C: 99 */ maybe_trigger_vblank(5); nes_write((0x0213 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_866F:;
    /* $866F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8672:;
    /* $8672: 99 */ maybe_trigger_vblank(5); nes_write((0x0212 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8675:;
    /* $8675: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8677:;
    /* $8677: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_867A:;
    /* $867A: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_867D:;
    /* $867D: 99 */ maybe_trigger_vblank(5); nes_write((0x0210 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8680:;
    /* $8680: 99 */ maybe_trigger_vblank(5); nes_write((0x0211 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8683:;
    /* $8683: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8685:;
    /* $8685: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8688:;
    /* $8688: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8689:;
    /* $8689: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_868B:;
    /* $868B: 85 */ maybe_trigger_vblank(3); nes_write(0x1B, g_cpu.A);
label_868D:;
    /* $868D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_868F:;
    /* $868F: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_8691:;
    /* $8691: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02D, 1);
label_8694:;
    /* $8694: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC030, 1);
label_8697:;
    /* $8697: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1B); FLAG_NZ(g_cpu.A);
label_8699:;
    /* $8699: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_869B:;
    /* $869B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_869C:;
    /* $869C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_869D:;
    /* $869D: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_869E:;
    /* $869E: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_86A1:;
    /* $86A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_86A3:;
    /* $86A3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86A6:;
    /* $86A6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86A7:;
    /* $86A7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_86A8:;
    /* $86A8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_86A9:;
    /* $86A9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC0); g_cpu.A=r&0xFF; }
label_86AB:;
    /* $86AB: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86AE:;
    /* $86AE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86AF:;
    /* $86AF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_86B1:;
    /* $86B1: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86B4:;
    /* $86B4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86B5:;
    /* $86B5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0020 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86B8:;
    /* $86B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86BB:;
    /* $86BB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86BC:;
    /* $86BC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1B); FLAG_NZ(g_cpu.A);
label_86BE:;
    /* $86BE: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_86C0:;
    /* $86C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_86C2:;
    /* $86C2: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_86C4:;
    /* $86C4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC01B, 1);
label_86C7:;
    /* $86C7: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x77); FLAG_NZ(g_cpu.Y);
label_86C9:;
    /* $86C9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_86CB:;
    /* $86CB: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86CE:;
    /* $86CE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86CF:;
    /* $86CF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_86D1:;
    /* $86D1: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86D4:;
    /* $86D4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86D5:;
    /* $86D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_86D7:;
    /* $86D7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86DA:;
    /* $86DA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86DB:;
    /* $86DB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86DE:;
    /* $86DE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86E1:;
    /* $86E1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86E2:;
    /* $86E2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86E5:;
    /* $86E5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86E8:;
    /* $86E8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86E9:;
    /* $86E9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0202 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86EC:;
    /* $86EC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86EF:;
    /* $86EF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86F0:;
    /* $86F0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0203 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86F3:;
    /* $86F3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86F6:;
    /* $86F6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_86F7:;
    /* $86F7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_86F9:;
    /* $86F9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_86FA:;
    /* $86FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_86FC:;
    /* $86FC: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_86FE:;
    /* $86FE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8702; }
label_8700:;
    /* $8700: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8702:;
    /* $8702: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_8704:;
    /* $8704: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8707:;
    /* $8707: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8708:;
    /* $8708: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_870A:;
    /* $870A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_870D:;
    /* $870D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_870E:;
    /* $870E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8710:;
    /* $8710: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8713:;
    /* $8713: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8714:;
    /* $8714: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0210 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8717:;
    /* $8717: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_871A:;
    /* $871A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_871B:;
    /* $871B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0211 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_871E:;
    /* $871E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8721:;
    /* $8721: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8722:;
    /* $8722: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0212 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8725:;
    /* $8725: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8728:;
    /* $8728: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8729:;
    /* $8729: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0213 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_872C:;
    /* $872C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_872F:;
    /* $872F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8730:;
    /* $8730: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8732:;
    /* $8732: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8735:;
    /* $8735: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_8738:;
    /* $8738: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_864F_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_864F_b1");
#endif
    func_864F_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_86E1_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86E1_b1");
#endif
    func_864F_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8728_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8728_b1");
#endif
    func_864F_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_86E8_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86E8_b1");
#endif
    func_864F_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CE5_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CE5_b1");
#endif
label_8CE5:;
    /* $8CE5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8CE7:;
    /* $8CE7: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_8CE9:;
    /* $8CE9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x045B); FLAG_NZ(g_cpu.A);
label_8CEC:;
    /* $8CEC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CF4; }
label_8CEE:;
    /* $8CEE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8854, 1);
label_8CF1:;
    /* $8CF1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x90F0, 1);
label_8CF4:;
    /* $8CF4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8C2E, 1);
label_8CF7:;
    /* $8CF7: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$810C */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_810C_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8CFD:;
    /* $8CFD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ACE7_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACE7_b1");
#endif
label_ACE7:;
    /* $ACE7: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_ACEA:;
    /* $ACEA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xAF); FLAG_NZ(g_cpu.A);
label_ACEC:;
    /* $ACEC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACEF:;
    /* $ACEF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ACF0:;
    /* $ACF0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_ACF2:;
    /* $ACF2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACF5:;
    /* $ACF5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ACF6:;
    /* $ACF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_ACF8:;
    /* $ACF8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACFB:;
    /* $ACFB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ACFC:;
    /* $ACFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_ACFE:;
    /* $ACFE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD01:;
    /* $AD01: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD02:;
    /* $AD02: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD05:;
    /* $AD05: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD06:;
    /* $AD06: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD09:;
    /* $AD09: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AD0C:;
    /* $AD0C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD0D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD0D_b1");
#endif
label_AD0D:;
    /* $AD0D: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_AD10:;
    /* $AD10: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xAF); FLAG_NZ(g_cpu.A);
label_AD12:;
    /* $AD12: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD15:;
    /* $AD15: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD16:;
    /* $AD16: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_AD18:;
    /* $AD18: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD1B:;
    /* $AD1B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD1C:;
    /* $AD1C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_AD1E:;
    /* $AD1E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD21:;
    /* $AD21: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD22:;
    /* $AD22: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AD24:;
    /* $AD24: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD27:;
    /* $AD27: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD28:;
    /* $AD28: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD2B:;
    /* $AD2B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD2C:;
    /* $AD2C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD2F:;
    /* $AD2F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AD32:;
    /* $AD32: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD80_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD80_b1");
#endif
label_AD80:;
    /* $AD80: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_AD83:;
    /* $AD83: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xAF); FLAG_NZ(g_cpu.A);
label_AD85:;
    /* $AD85: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD88:;
    /* $AD88: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD89:;
    /* $AD89: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_AD8B:;
    /* $AD8B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD8E:;
    /* $AD8E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD8F:;
    /* $AD8F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AD91:;
    /* $AD91: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD94:;
    /* $AD94: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD95:;
    /* $AD95: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AD97:;
    /* $AD97: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD9A:;
    /* $AD9A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD9B:;
    /* $AD9B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD9E:;
    /* $AD9E: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_ADA1:;
    /* $ADA1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA7A_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA7A_b1");
#endif
label_AA7A:;
    /* $AA7A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_AA7C:;
    /* $AA7C: 85 */ maybe_trigger_vblank(3); nes_write(0x1B, g_cpu.A);
label_AA7E:;
    /* $AA7E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_AA81:;
    /* $AA81: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_AA83:;
    /* $AA83: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA85:;
    /* $AA85: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02D, 1);
label_AA88:;
    /* $AA88: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_AA8B:;
    /* $AA8B: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AA8D:;
    /* $AA8D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC030, 1);
label_AA90:;
    /* $AA90: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AA91:;
    /* $AA91: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AA92:;
    /* $AA92: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA94:;
    /* $AA94: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02D, 1);
label_AA97:;
    /* $AA97: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_AA9A:;
    /* $AA9A: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AA9C:;
    /* $AA9C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC030, 1);
label_AA9F:;
    /* $AA9F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_AAA2:;
    /* $AAA2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_AAA4:;
    /* $AAA4: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAA7:;
    /* $AAA7: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AAA8:;
    /* $AAA8: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AAA9:;
    /* $AAA9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AAAA:;
    /* $AAAA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC0); g_cpu.A=r&0xFF; }
label_AAAC:;
    /* $AAAC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAAF:;
    /* $AAAF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AAB0:;
    /* $AAB0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AAB2:;
    /* $AAB2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAB5:;
    /* $AAB5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AAB6:;
    /* $AAB6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0020 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAB9:;
    /* $AAB9: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AABC:;
    /* $AABC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AABD:;
    /* $AABD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0021 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAC0:;
    /* $AAC0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAC3:;
    /* $AAC3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AAC4:;
    /* $AAC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_AAC6:;
    /* $AAC6: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_AAC8:;
    /* $AAC8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_AACB:;
    /* $AACB: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_AACD:;
    /* $AACD: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AACF:;
    /* $AACF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC01B, 1);
label_AAD2:;
    /* $AAD2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_AAD4:;
    /* $AAD4: 85 */ maybe_trigger_vblank(3); nes_write(0xAF, g_cpu.A);
label_AAD6:;
    /* $AAD6: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAD9:;
    /* $AAD9: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AADA:;
    /* $AADA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_AADC:;
    /* $AADC: 85 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.A);
label_AADE:;
    /* $AADE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAE1:;
    /* $AAE1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AAE2:;
    /* $AAE2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AAE4:;
    /* $AAE4: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAE7:;
    /* $AAE7: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AAE8:;
    /* $AAE8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0342); FLAG_NZ(g_cpu.A);
label_AAEB:;
    /* $AAEB: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAEE:;
    /* $AAEE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AAEF:;
    /* $AAEF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0343); FLAG_NZ(g_cpu.A);
label_AAF2:;
    /* $AAF2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAF5:;
    /* $AAF5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AAF6:;
    /* $AAF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AAF8:;
    /* $AAF8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAFB:;
    /* $AAFB: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AAFE:;
    /* $AAFE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AAFF_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AAFF_b1");
#endif
label_AAFF:;
    /* $AAFF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_AB02:;
    /* $AB02: 85 */ maybe_trigger_vblank(3); nes_write(0x1B, g_cpu.A);
label_AB04:;
    /* $AB04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_AB06:;
    /* $AB06: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_AB08:;
    /* $AB08: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02D, 1);
label_AB0B:;
    /* $AB0B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_AB0E:;
    /* $AB0E: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AB10:;
    /* $AB10: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC030, 1);
label_AB13:;
    /* $AB13: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AB14:;
    /* $AB14: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AB15:;
    /* $AB15: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB17:;
    /* $AB17: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02D, 1);
label_AB1A:;
    /* $AB1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_AB1D:;
    /* $AB1D: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AB1F:;
    /* $AB1F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC030, 1);
label_AB22:;
    /* $AB22: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_AB25:;
    /* $AB25: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_AB27:;
    /* $AB27: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB2A:;
    /* $AB2A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB2B:;
    /* $AB2B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AB2C:;
    /* $AB2C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AB2D:;
    /* $AB2D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC0); g_cpu.A=r&0xFF; }
label_AB2F:;
    /* $AB2F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB32:;
    /* $AB32: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB33:;
    /* $AB33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC2; FLAG_NZ(g_cpu.A);
label_AB35:;
    /* $AB35: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB38:;
    /* $AB38: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB39:;
    /* $AB39: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0020 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB3C:;
    /* $AB3C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB3F:;
    /* $AB3F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB40:;
    /* $AB40: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0028 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB43:;
    /* $AB43: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB46:;
    /* $AB46: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB47:;
    /* $AB47: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_AB4A:;
    /* $AB4A: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_AB4C:;
    /* $AB4C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_AB4E:;
    /* $AB4E: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_AB50:;
    /* $AB50: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC01B, 1);
label_AB53:;
    /* $AB53: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_AB55:;
    /* $AB55: 85 */ maybe_trigger_vblank(3); nes_write(0xAF, g_cpu.A);
label_AB57:;
    /* $AB57: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB5A:;
    /* $AB5A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB5B:;
    /* $AB5B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_AB5D:;
    /* $AB5D: 85 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.A);
label_AB5F:;
    /* $AB5F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB62:;
    /* $AB62: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB63:;
    /* $AB63: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_AB65:;
    /* $AB65: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB68:;
    /* $AB68: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB69:;
    /* $AB69: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_AB6C:;
    /* $AB6C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB6F:;
    /* $AB6F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB70:;
    /* $AB70: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0342); FLAG_NZ(g_cpu.A);
label_AB73:;
    /* $AB73: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB76:;
    /* $AB76: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB77:;
    /* $AB77: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB79:;
    /* $AB79: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB7C:;
    /* $AB7C: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AB7F:;
    /* $AB7F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AB80_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB80_b1");
#endif
label_AB80:;
    /* $AB80: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_AB83:;
    /* $AB83: 85 */ maybe_trigger_vblank(3); nes_write(0x1B, g_cpu.A);
label_AB85:;
    /* $AB85: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_AB88:;
    /* $AB88: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_AB8A:;
    /* $AB8A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB8C:;
    /* $AB8C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02D, 1);
label_AB8F:;
    /* $AB8F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_AB92:;
    /* $AB92: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AB94:;
    /* $AB94: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC030, 1);
label_AB97:;
    /* $AB97: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AB98:;
    /* $AB98: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AB99:;
    /* $AB99: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB9B:;
    /* $AB9B: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02D, 1);
label_AB9E:;
    /* $AB9E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_ABA1:;
    /* $ABA1: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_ABA3:;
    /* $ABA3: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC030, 1);
label_ABA6:;
    /* $ABA6: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABA8:;
    /* $ABA8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABAA:;
    /* $ABAA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02D, 1);
label_ABAD:;
    /* $ABAD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_ABB0:;
    /* $ABB0: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_ABB2:;
    /* $ABB2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC030, 1);
label_ABB5:;
    /* $ABB5: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABB7:;
    /* $ABB7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02D, 1);
label_ABBA:;
    /* $ABBA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_ABBD:;
    /* $ABBD: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_ABBF:;
    /* $ABBF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC030, 1);
label_ABC2:;
    /* $ABC2: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_ABC5:;
    /* $ABC5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_ABC7:;
    /* $ABC7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABCA:;
    /* $ABCA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABCB:;
    /* $ABCB: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_ABCC:;
    /* $ABCC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ABCD:;
    /* $ABCD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC0); g_cpu.A=r&0xFF; }
label_ABCF:;
    /* $ABCF: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABD2:;
    /* $ABD2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABD3:;
    /* $ABD3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_ABD5:;
    /* $ABD5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABD8:;
    /* $ABD8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABD9:;
    /* $ABD9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0020 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABDC:;
    /* $ABDC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABDF:;
    /* $ABDF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABE0:;
    /* $ABE0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0021 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABE3:;
    /* $ABE3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABE6:;
    /* $ABE6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABE7:;
    /* $ABE7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_ABE8:;
    /* $ABE8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ABE9:;
    /* $ABE9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_ABEB:;
    /* $ABEB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ABEC:;
    /* $ABEC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_ABEE:;
    /* $ABEE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABF1:;
    /* $ABF1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABF2:;
    /* $ABF2: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_ABF3:;
    /* $ABF3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ABF4:;
    /* $ABF4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC0); g_cpu.A=r&0xFF; }
label_ABF6:;
    /* $ABF6: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABF9:;
    /* $ABF9: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABFA:;
    /* $ABFA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_ABFC:;
    /* $ABFC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABFF:;
    /* $ABFF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC00:;
    /* $AC00: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0020 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC03:;
    /* $AC03: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC06:;
    /* $AC06: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC07:;
    /* $AC07: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0021 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC0A:;
    /* $AC0A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC0D:;
    /* $AC0D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC0E:;
    /* $AC0E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_AC11:;
    /* $AC11: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_AC13:;
    /* $AC13: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_AC16:;
    /* $AC16: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_AC18:;
    /* $AC18: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC1A:;
    /* $AC1A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC01B, 1);
label_AC1D:;
    /* $AC1D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_AC1F:;
    /* $AC1F: 85 */ maybe_trigger_vblank(3); nes_write(0xAF, g_cpu.A);
label_AC21:;
    /* $AC21: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC24:;
    /* $AC24: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC25:;
    /* $AC25: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_AC27:;
    /* $AC27: 85 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.A);
label_AC29:;
    /* $AC29: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC2C:;
    /* $AC2C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC2D:;
    /* $AC2D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AC2F:;
    /* $AC2F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC32:;
    /* $AC32: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC33:;
    /* $AC33: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_AC36:;
    /* $AC36: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC39:;
    /* $AC39: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC3A:;
    /* $AC3A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0341); FLAG_NZ(g_cpu.A);
label_AC3D:;
    /* $AC3D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC40:;
    /* $AC40: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC41:;
    /* $AC41: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_AC43:;
    /* $AC43: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AC44:;
    /* $AC44: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_AC46:;
    /* $AC46: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_AC48:;
    /* $AC48: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AC4C; }
label_AC4A:;
    /* $AC4A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC4C:;
    /* $AC4C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_AC4E:;
    /* $AC4E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC51:;
    /* $AC51: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC52:;
    /* $AC52: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_AC54:;
    /* $AC54: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC57:;
    /* $AC57: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC58:;
    /* $AC58: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AC5A:;
    /* $AC5A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC5D:;
    /* $AC5D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC5E:;
    /* $AC5E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0342); FLAG_NZ(g_cpu.A);
label_AC61:;
    /* $AC61: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC64:;
    /* $AC64: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC65:;
    /* $AC65: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0343); FLAG_NZ(g_cpu.A);
label_AC68:;
    /* $AC68: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC6B:;
    /* $AC6B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC6C:;
    /* $AC6C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AC6E:;
    /* $AC6E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC71:;
    /* $AC71: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AC74:;
    /* $AC74: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AC75_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC75_b1");
#endif
label_AC75:;
    /* $AC75: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x14; FLAG_NZ(g_cpu.X);
label_AC77:;
    /* $AC77: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AC79:;
    /* $AC79: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_AC7B:;
    /* $AC7B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_AC7E:;
    /* $AC7E: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AC80:;
    /* $AC80: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC030, 1);
label_AC83:;
    /* $AC83: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_AC86:;
    /* $AC86: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_AC88:;
    /* $AC88: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC8B:;
    /* $AC8B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC8C:;
    /* $AC8C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD4; FLAG_NZ(g_cpu.A);
label_AC8E:;
    /* $AC8E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC91:;
    /* $AC91: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC92:;
    /* $AC92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AC94:;
    /* $AC94: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC97:;
    /* $AC97: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC98:;
    /* $AC98: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x34); FLAG_NZ(g_cpu.A);
label_AC9A:;
    /* $AC9A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC9D:;
    /* $AC9D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC9E:;
    /* $AC9E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_ACA0:;
    /* $ACA0: 85 */ maybe_trigger_vblank(3); nes_write(0xAF, g_cpu.A);
label_ACA2:;
    /* $ACA2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACA5:;
    /* $ACA5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ACA6:;
    /* $ACA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x51; FLAG_NZ(g_cpu.A);
label_ACA8:;
    /* $ACA8: 85 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.A);
label_ACAA:;
    /* $ACAA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACAD:;
    /* $ACAD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ACAE:;
    /* $ACAE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_ACB0:;
    /* $ACB0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACB3:;
    /* $ACB3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ACB4:;
    /* $ACB4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0342); FLAG_NZ(g_cpu.A);
label_ACB7:;
    /* $ACB7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACBA:;
    /* $ACBA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ACBB:;
    /* $ACBB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_ACBD:;
    /* $ACBD: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACC0:;
    /* $ACC0: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_ACC3:;
    /* $ACC3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8039_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8039_b1");
#endif
label_8039:;
    /* $8039: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8039); return;
}

void func_A039_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A039_b1");
#endif
label_A039:;
    /* $A039: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x04 + g_cpu.X) & 0xFF), g_cpu.A);
label_A03B:;
    /* $A03B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A03D:;
    /* $A03D: 99 */ maybe_trigger_vblank(5); nes_write((0x0481 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A040:;
    /* $A040: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A042:;
    /* $A042: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0020), 1); return; }
label_A044:;
    /* $A044: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_803C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803C_b1");
#endif
label_803C:;
    /* $803C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x803C); return;
}

void func_A03C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A03C_b1");
#endif
label_A03C:;
    /* $A03C: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x99) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A03E:;
    /* $A03E: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x04 + g_cpu.X) & 0xFF), g_cpu.A);
label_A040:;
    /* $A040: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A042:;
    /* $A042: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0020), 1); return; }
label_A044:;
    /* $A044: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8066_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8066_b1");
#endif
label_8066:;
    /* $8066: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8066); return;
}

void func_A066_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A066_b1");
#endif
label_A066:;
    /* $A066: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A067:;
    /* $A067: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A06A:;
    /* $A06A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA9EE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A06D:;
    /* $A06D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A06E:;
    /* $A06E: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0481); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A071:;
    /* $A071: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A072:;
    /* $A072: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A094; }
label_A074:;
    /* $A074: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9FCA, 1);
label_A077:;
    /* $A077: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0481); FLAG_NZ(g_cpu.Y);
label_A07A:;
    /* $A07A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A086; }
label_A07C:;
    /* $A07C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0481 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x91); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A081:;
    /* $A081: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A074;
    }
label_A083:;
    /* $A083: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A084:;
    /* $A084: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A07C;
    }
label_A086:;
    /* $A086: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0481; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A089:;
    /* $A089: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0481); FLAG_NZ(g_cpu.Y);
label_A08C:;
    /* $A08C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: 99 */ maybe_trigger_vblank(5); nes_write((0x0481 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A091:;
    /* $A091: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A092:;
    /* $A092: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A074;
    }
label_A094:;
    /* $A094: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A095:;
    /* $A095: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A096:;
    /* $A096: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A097:;
    /* $A097: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A098:;
    /* $A098: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8069_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8069_b1");
#endif
label_8069:;
    /* $8069: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8069); return;
}

void func_80B9_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B9_b1");
#endif
label_80B9:;
    /* $80B9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80B9); return;
}

void func_A9E6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E6_b1");
#endif
label_A9E6:;
    /* $A9E6: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_AA18; }
label_A9E8:;
    /* $A9E8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x1010, -1);
label_A9EB:;
    /* $A9EB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9EB); return;
label_A9EC:;
    /* $A9EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9EC); return;
label_A9ED:;
    /* $A9ED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9ED); return;
label_A9EE:;
    /* $A9EE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9EE); return;
label_A9EF:;
    /* $A9EF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9F1:;
    /* $A9F1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9F3:;
    /* $A9F3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A9F5:;
    /* $A9F5: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A9F7:;
    /* $A9F7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A9F9:;
    /* $A9F9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9F9); return;
label_A9FA:;
    /* $A9FA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9FB:;
    /* $A9FB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x1B) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9FE:;
    /* $A9FE: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AA00:;
    /* $AA00: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AA02:;
    /* $AA02: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x57; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AA04:;
    /* $AA04: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA04); return;
label_AA05:;
    /* $AA05: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA08:;
    /* $AA08: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA09:;
    /* $AA09: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA0B:;
    /* $AA0B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0A2D), 1); return; }
label_AA0D:;
    /* $AA0D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xAC); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AA0F:;
    /* $AA0F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAA54, 1);
label_AA12:;
    /* $AA12: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA13:;
    /* $AA13: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_AA16:;
    /* $AA16: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_AA18:;
    /* $AA18: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA21; }
label_AA1A:;
    /* $AA1A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_AA1C:;
    /* $AA1C: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA1E:;
    /* $AA1E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA53, 1); return;
label_AA21:;
    /* $AA21: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_AA24:;
    /* $AA24: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_AA26:;
    /* $AA26: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AA1A;
    }
label_AA28:;
    /* $AA28: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_AA2A:;
    /* $AA2A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA2C:;
    /* $AA2C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_AA2F:;
    /* $AA2F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_AA31:;
    /* $AA31: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA3A; }
label_AA33:;
    /* $AA33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_AA35:;
    /* $AA35: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA37:;
    /* $AA37: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA53, 1); return;
label_AA3A:;
    /* $AA3A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AA3C:;
    /* $AA3C: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA3E:;
    /* $AA3E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA53, 1); return;
label_AA41:;
    /* $AA41: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_AA44:;
    /* $AA44: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_AA46:;
    /* $AA46: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA4F; }
label_AA48:;
    /* $AA48: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AA4A:;
    /* $AA4A: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA4C:;
    /* $AA4C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA53, 1); return;
label_AA4F:;
    /* $AA4F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_AA51:;
    /* $AA51: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA53:;
    /* $AA53: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA54:; return;
label_AA57:; return;
label_AA59:; return;
label_AA68:; return;
label_AA69:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA70:; return;
label_AA71:; return;
label_AA74:; return;
label_AA75:; return;
label_AA78:; return;
label_AA79:; return;
label_AA7A:; return;
label_AA7C:; return;
label_AA7E:; return;
label_AA81:; return;
label_AA83:; return;
label_AA85:; return;
label_AA88:; return;
label_AA8B:; return;
label_AA8D:; return;
label_AA90:; return;
label_AA91:; return;
label_AA92:; return;
label_AA94:; return;
label_AA97:; return;
label_AA9A:; return;
label_AA9C:; return;
label_AA9F:; return;
label_AAA2:; return;
label_AAA4:; return;
label_AAA7:; return;
label_AAA8:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAC:; return;
label_AAAF:; return;
label_AAB0:; return;
label_AAB2:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB9:; return;
label_AABC:; return;
label_AABD:; return;
label_AAC0:; return;
label_AAC3:; return;
label_AAC4:; return;
label_AAC6:; return;
label_AAC8:; return;
label_AACB:; return;
label_AACD:; return;
label_AACF:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD6:; return;
label_AAD9:; return;
label_AADA:; return;
label_AADC:; return;
label_AADE:; return;
label_AAE1:; return;
label_AAE2:; return;
label_AAE4:; return;
label_AAE7:; return;
label_AAE8:; return;
label_AAEB:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF2:; return;
label_AAF5:; return;
label_AAF6:; return;
label_AAF8:; return;
label_AAFB:; return;
label_AAFE:; return;
label_AAFF:; return;
label_AB02:; return;
label_AB04:; return;
label_AB06:; return;
label_AB08:; return;
label_AB0B:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB13:; return;
label_AB14:; return;
label_AB15:; return;
label_AB17:; return;
label_AB1A:; return;
label_AB1D:; return;
label_AB1F:; return;
label_AB22:; return;
label_AB25:; return;
label_AB27:; return;
label_AB2A:; return;
label_AB2B:; return;
label_AB2C:; return;
label_AB2D:; return;
label_AB2F:; return;
label_AB32:; return;
label_AB33:; return;
label_AB35:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3C:; return;
label_AB3F:; return;
label_AB40:; return;
label_AB43:; return;
label_AB46:; return;
label_AB47:; return;
label_AB4A:; return;
label_AB4C:; return;
label_AB4E:; return;
label_AB50:; return;
label_AB53:; return;
label_AB55:; return;
label_AB57:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5D:; return;
label_AB5F:; return;
label_AB62:; return;
label_AB63:; return;
label_AB65:; return;
label_AB68:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6F:; return;
label_AB70:; return;
label_AB73:; return;
label_AB76:; return;
label_AB77:; return;
label_AB79:; return;
label_AB7C:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB83:; return;
label_AB85:; return;
label_AB88:; return;
label_AB8A:; return;
label_AB8C:; return;
label_AB8F:; return;
label_AB92:; return;
label_AB94:; return;
label_AB97:; return;
label_AB98:; return;
label_AB99:; return;
label_AB9B:; return;
label_AB9E:; return;
label_ABA1:; return;
label_ABA3:; return;
label_ABA6:; return;
label_ABA8:; return;
label_ABAA:; return;
label_ABAD:; return;
label_ABB0:; return;
label_ABB2:; return;
label_ABB5:; return;
label_ABB7:; return;
label_ABBA:; return;
label_ABBD:; return;
label_ABBF:; return;
label_ABC2:; return;
label_ABC5:; return;
label_ABC7:; return;
label_ABCA:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCF:; return;
label_ABD2:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD8:; return;
label_ABD9:; return;
label_ABDC:; return;
label_ABDF:; return;
label_ABE0:; return;
label_ABE3:; return;
label_ABE6:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEB:; return;
label_ABEC:; return;
label_ABEE:; return;
label_ABF1:; return;
label_ABF2:; return;
label_ABF3:; return;
label_ABF4:; return;
label_ABF6:; return;
label_ABF9:; return;
label_ABFA:; return;
label_ABFC:; return;
label_ABFF:; return;
label_AC00:; return;
label_AC03:; return;
label_AC06:; return;
label_AC07:; return;
label_AC0A:; return;
label_AC0D:; return;
label_AC0E:; return;
label_AC11:; return;
label_AC13:; return;
label_AC16:; return;
label_AC18:; return;
label_AC1A:; return;
label_AC1D:; return;
label_AC1F:; return;
label_AC21:; return;
label_AC24:; return;
label_AC25:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2C:; return;
label_AC2D:; return;
label_AC2F:; return;
label_AC32:; return;
label_AC33:; return;
label_AC36:; return;
label_AC39:; return;
label_AC3A:; return;
label_AC3D:; return;
label_AC40:; return;
label_AC41:; return;
label_AC43:; return;
label_AC44:; return;
label_AC46:; return;
label_AC48:; return;
label_AC4A:; return;
label_AC4C:; return;
label_AC4E:; return;
label_AC51:; return;
label_AC52:; return;
label_AC54:; return;
label_AC57:; return;
label_AC58:; return;
label_AC5A:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC61:; return;
label_AC64:; return;
label_AC65:; return;
label_AC68:; return;
label_AC6B:; return;
label_AC6C:; return;
label_AC6E:; return;
label_AC71:; return;
label_AC74:; return;
label_AC75:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7B:; return;
label_AC7E:; return;
label_AC80:; return;
label_AC83:; return;
label_AC86:; return;
label_AC88:; return;
label_AC8B:; return;
label_AC8C:; return;
label_AC8E:; return;
label_AC91:; return;
label_AC92:; return;
label_AC94:; return;
label_AC97:; return;
label_AC98:; return;
label_AC9A:; return;
label_AC9D:; return;
label_AC9E:; return;
label_ACA0:; return;
label_ACA2:; return;
label_ACA5:; return;
label_ACA6:; return;
label_ACA8:; return;
label_ACAA:; return;
label_ACAD:; return;
label_ACAE:; return;
label_ACB0:; return;
label_ACB3:; return;
label_ACB4:; return;
label_ACB7:; return;
label_ACBA:; return;
label_ACBB:; return;
label_ACBD:; return;
label_ACC0:; return;
label_ACC3:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD9:; return;
label_ACDA:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACE1:; return;
label_ACE2:; return;
label_ACE5:; return;
label_ACE6:; return;
label_ACE7:; return;
label_ACEA:; return;
label_ACEC:; return;
label_ACEF:; return;
label_ACF0:; return;
label_ACF2:; return;
label_ACF5:; return;
label_ACF6:; return;
label_ACF8:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFE:; return;
label_AD01:; return;
label_AD02:; return;
label_AD05:; return;
label_AD06:; return;
label_AD09:; return;
label_AD0C:; return;
label_AD0D:; return;
label_AD10:; return;
label_AD12:; return;
label_AD15:; return;
label_AD16:; return;
label_AD18:; return;
label_AD1B:; return;
label_AD1C:; return;
label_AD1E:; return;
label_AD21:; return;
label_AD22:; return;
label_AD24:; return;
label_AD27:; return;
label_AD28:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2F:; return;
label_AD32:; return;
label_AD33:; return;
label_AD36:; return;
label_AD38:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3E:; return;
label_AD41:; return;
label_AD42:; return;
label_AD44:; return;
label_AD47:; return;
label_AD48:; return;
label_AD4A:; return;
label_AD4D:; return;
label_AD4E:; return;
label_AD51:; return;
label_AD52:; return;
label_AD54:; return;
label_AD55:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5B:; return;
label_AD5D:; return;
label_AD5F:; return;
label_AD62:; return;
label_AD63:; return;
label_AD65:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6B:; return;
label_AD6E:; return;
label_AD6F:; return;
label_AD71:; return;
label_AD74:; return;
label_AD75:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7C:; return;
label_AD7F:; return;
label_AD80:; return;
label_AD83:; return;
label_AD85:; return;
label_AD88:; return;
label_AD89:; return;
label_AD8B:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD91:; return;
label_AD94:; return;
label_AD95:; return;
label_AD97:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9E:; return;
label_ADA1:; return;
label_ADA2:; return;
label_ADA5:; return;
label_ADA7:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAE:; return;
label_ADB0:; return;
label_ADB3:; return;
label_ADB9:; return;
label_ADBB:; return;
label_ADBE:; return;
label_ADC0:; return;
label_ADC3:; return;
label_ADC6:; return;
label_ADC8:; return;
label_ADCB:; return;
label_ADCE:; return;
label_ADD1:; return;
label_ADD3:; return;
label_ADD5:; return;
label_ADD8:; return;
label_ADD9:; return;
label_ADDB:; return;
label_ADDE:; return;
label_ADE1:; return;
label_ADE4:; return;
label_ADF9:; return;
label_ADFA:; return;
label_ADFD:; return;
label_ADFE:; return;
label_AE01:; return;
label_AE02:; return;
label_AE05:; return;
label_AE06:; return;
label_AE09:; return;
label_AE0A:; return;
label_AE0D:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE12:; return;
label_AE15:; return;
label_AE16:; return;
label_AE19:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE20:; return;
label_AE22:; return;
label_AE24:; return;
label_AE26:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2D:; return;
label_AE2F:; return;
label_AE32:; return;
label_AE33:; return;
label_AE35:; return;
label_AE37:; return;
label_AE39:; return;
label_AE3B:; return;
label_AE3D:; return;
label_AE3F:; return;
label_AE41:; return;
label_AE43:; return;
label_AE46:; return;
label_AE48:; return;
label_AE4B:; return;
label_AE4C:; return;
label_AE4E:; return;
label_AE50:; return;
label_AE52:; return;
label_AE54:; return;
label_AE56:; return;
label_AE58:; return;
label_AE5A:; return;
label_AE5C:; return;
label_AE5F:; return;
label_AE61:; return;
label_AE64:; return;
label_AE65:; return;
label_AE67:; return;
label_AE69:; return;
label_AE6B:; return;
label_AE6D:; return;
label_AE6F:; return;
label_AE71:; return;
label_AE73:; return;
label_AE75:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7D:; return;
label_AE7E:; return;
label_AE80:; return;
label_AE82:; return;
label_AE84:; return;
label_AE86:; return;
label_AE88:; return;
label_AE8A:; return;
label_AE8C:; return;
label_AE8E:; return;
label_AE91:; return;
label_AE93:; return;
label_AE96:; return;
label_AE97:; return;
label_AE99:; return;
label_AE9B:; return;
label_AE9D:; return;
label_AE9F:; return;
label_AEA1:; return;
label_AEA3:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEAA:; return;
label_AEAC:; return;
label_AEAF:; return;
label_AEB0:; return;
label_AEB2:; return;
label_AEB4:; return;
label_AEB6:; return;
label_AEB8:; return;
label_AEBA:; return;
label_AEBC:; return;
label_AEBE:; return;
label_AEC0:; return;
label_AEC3:; return;
label_AEC5:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECB:; return;
label_AECD:; return;
label_AECF:; return;
label_AED1:; return;
label_AED3:; return;
label_AED5:; return;
label_AED7:; return;
label_AED9:; return;
label_AEDC:; return;
label_AEDE:; return;
label_AEE1:; return;
label_AEE2:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEE:; return;
label_AEF1:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AF39:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF41:; return;
label_AF44:; return;
label_AF46:; return;
label_AF49:; return;
label_AF4C:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF52:; return;
label_AF55:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF70:; return;
label_AF71:; return;
label_AF74:; return;
label_AF75:; return;
label_AF78:; return;
label_AF79:; return;
label_AF7C:; return;
label_AF7D:; return;
label_AF80:; return;
label_AF81:; return;
label_AF84:; return;
label_AF85:; return;
label_AF88:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8D:; return;
label_AF90:; return;
label_AF91:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9B:; return;
label_AF9D:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA6:; return;
label_AFA9:; return;
label_AFAA:; return;
label_AFAC:; return;
label_AFAE:; return;
label_AFB0:; return;
label_AFB2:; return;
label_AFB4:; return;
label_AFB6:; return;
label_AFB8:; return;
label_AFBA:; return;
label_AFBD:; return;
label_AFBF:; return;
label_AFC2:; return;
label_AFC3:; return;
label_AFC5:; return;
label_AFC7:; return;
label_AFC9:; return;
label_AFCB:; return;
label_AFCD:; return;
label_AFCF:; return;
label_AFD1:; return;
label_AFD3:; return;
label_AFD6:; return;
label_AFD8:; return;
label_AFDB:; return;
label_AFDC:; return;
label_AFDE:; return;
label_AFE0:; return;
label_AFE2:; return;
label_AFE4:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEA:; return;
label_AFEC:; return;
label_AFEF:; return;
label_AFF1:; return;
label_AFF4:; return;
label_AFF5:; return;
label_AFF7:; return;
label_AFF9:; return;
label_AFFB:; return;
label_AFFD:; return;
label_AFFF:; return;
label_B001:; return;
label_B003:; return;
label_B005:; return;
label_B008:; return;
label_B00A:; return;
label_B00D:; return;
label_B00E:; return;
label_B010:; return;
label_B012:; return;
label_B014:; return;
label_B016:; return;
label_B018:; return;
label_B01A:; return;
label_B01C:; return;
label_B01E:; return;
label_B021:; return;
label_B023:; return;
label_B026:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02D:; return;
label_B02F:; return;
label_B031:; return;
label_B033:; return;
label_B035:; return;
label_B037:; return;
label_B03A:; return;
label_B03C:; return;
label_B03F:; return;
label_B040:; return;
label_B042:; return;
label_B044:; return;
label_B046:; return;
label_B048:; return;
label_B04A:; return;
label_B04C:; return;
label_B04E:; return;
label_B050:; return;
label_B053:; return;
label_B055:; return;
label_B058:; return;
label_B059:; return;
label_B05B:; return;
label_B070:; return;
label_B072:; return;
label_B075:; return;
label_B078:; return;
label_B07A:; return;
label_B07C:; return;
label_B07E:; return;
label_B081:; return;
label_B083:; return;
label_B085:; return;
label_B087:; return;
label_B089:; return;
label_B08B:; return;
label_B08E:; return;
label_B090:; return;
label_B093:; return;
label_B095:; return;
label_B098:; return;
label_B099:; return;
label_B09B:; return;
label_B09E:; return;
label_B0A1:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A7:; return;
label_B0AA:; return;
label_B0AB:; return;
label_B0AE:; return;
label_B0B0:; return;
label_B0B2:; return;
label_B0B4:; return;
label_B0B7:; return;
label_B0B9:; return;
label_B0BC:; return;
label_B0BE:; return;
label_B0C1:; return;
label_B0C4:; return;
label_B0C6:; return;
label_B0C9:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0D1:; return;
label_B0D2:; return;
label_B0D3:; return;
label_B0D6:; return;
label_B0D9:; return;
label_B0DA:; return;
label_B0DD:; return;
label_B0E0:; return;
label_B0E3:; return;
label_B0E6:; return;
label_B0E9:; return;
label_B0EC:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F4:; return;
label_B0F6:; return;
label_B0F8:; return;
label_B0FA:; return;
label_B0FC:; return;
label_B0FF:; return;
label_B102:; return;
label_B104:; return;
label_B106:; return;
label_B108:; return;
label_B10B:; return;
label_B10D:; return;
label_B110:; return;
label_B113:; return;
label_B116:; return;
label_B118:; return;
label_B11B:; return;
label_B11E:; return;
label_B120:; return;
label_B121:; return;
label_B124:; return;
label_B127:; return;
label_B12A:; return;
label_B12C:; return;
label_B12F:; return;
label_B132:; return;
label_B134:; return;
label_B136:; return;
label_B138:; return;
label_B13A:; return;
label_B13D:; return;
label_B140:; return;
label_B143:; return;
label_B145:; return;
label_B147:; return;
label_B14A:; return;
label_B14C:; return;
label_B14F:; return;
label_B152:; return;
label_B155:; return;
label_B157:; return;
label_B15A:; return;
label_B15D:; return;
label_B15F:; return;
label_B162:; return;
label_B163:; return;
label_B165:; return;
label_B167:; return;
label_B169:; return;
label_B16C:; return;
label_B16E:; return;
label_B171:; return;
label_B173:; return;
label_B176:; return;
label_B179:; return;
label_B17B:; return;
label_B17D:; return;
label_B17F:; return;
label_B181:; return;
label_B184:; return;
label_B187:; return;
label_B18A:; return;
label_B18C:; return;
label_B18E:; return;
label_B190:; return;
label_B193:; return;
label_B195:; return;
label_B198:; return;
label_B19B:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1A9:; return;
label_B1AA:; return;
label_B1AB:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B3:; return;
label_B1B6:; return;
label_B1B9:; return;
label_B1BC:; return;
label_B1BF:; return;
label_B1C2:; return;
label_B1C4:; return;
label_B1C6:; return;
label_B1C9:; return;
label_B1CB:; return;
label_B1CE:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D7:; return;
label_B1DA:; return;
label_B1DC:; return;
label_B1DE:; return;
label_B1E1:; return;
label_B1E3:; return;
label_B1E5:; return;
label_B1E8:; return;
label_B1EA:; return;
label_B1ED:; return;
label_B1F0:; return;
label_B1F3:; return;
label_B1F6:; return;
label_B1F7:; return;
label_B1FA:; return;
label_B1FC:; return;
label_B1FE:; return;
label_B200:; return;
label_B203:; return;
label_B206:; return;
label_B209:; return;
label_B20B:; return;
label_B20D:; return;
label_B210:; return;
label_B213:; return;
label_B216:; return;
label_B219:; return;
label_B21C:; return;
label_B21D:; return;
label_B220:; return;
label_B222:; return;
label_B224:; return;
label_B226:; return;
label_B229:; return;
label_B22C:; return;
label_B22F:; return;
label_B231:; return;
label_B233:; return;
label_B236:; return;
label_B239:; return;
label_B23C:; return;
label_B23F:; return;
label_B242:; return;
label_B243:; return;
label_B245:; return;
label_B247:; return;
label_B249:; return;
label_B24A:; return;
label_B24B:; return;
label_B24C:; return;
label_B24D:; return;
label_B24E:; return;
label_B250:; return;
label_B251:; return;
label_B254:; return;
label_B257:; return;
label_B25A:; return;
label_B25D:; return;
label_B260:; return;
label_B263:; return;
label_B266:; return;
label_B269:; return;
label_B26A:; return;
label_B26B:; return;
label_B26D:; return;
label_B26F:; return;
label_B271:; return;
label_B273:; return;
label_B276:; return;
label_B279:; return;
label_B27C:; return;
label_B27F:; return;
label_B282:; return;
label_B285:; return;
label_B287:; return;
label_B289:; return;
label_B28C:; return;
label_B28E:; return;
label_B291:; return;
label_B294:; return;
label_B295:; return;
label_B297:; return;
label_B299:; return;
label_B29B:; return;
label_B29C:; return;
label_B29D:; return;
label_B29E:; return;
label_B29F:; return;
label_B2A0:; return;
label_B2A2:; return;
label_B2A3:; return;
label_B2A6:; return;
label_B2A9:; return;
label_B2AC:; return;
label_B2AF:; return;
label_B2B2:; return;
label_B2B5:; return;
label_B2B8:; return;
label_B2BB:; return;
label_B2BC:; return;
label_B2BD:; return;
label_B2BF:; return;
label_B2C1:; return;
label_B2C3:; return;
label_B2C5:; return;
label_B2C8:; return;
label_B2CB:; return;
label_B2CE:; return;
label_B2D1:; return;
label_B2D4:; return;
label_B2D7:; return;
label_B2D9:; return;
label_B2DB:; return;
label_B2DE:; return;
label_B2E0:; return;
label_B2E3:; return;
label_B2E6:; return;
label_B2E7:; return;
label_B2E9:; return;
label_B2EC:; return;
label_B2EE:; return;
label_B2EF:; return;
label_B2F2:; return;
label_B2F3:; return;
label_B2F4:; return;
label_B2F5:; return;
label_B2F8:; return;
label_B2FB:; return;
label_B2FD:; return;
label_B300:; return;
label_B303:; return;
label_B304:; return;
label_B305:; return;
label_B307:; return;
label_B309:; return;
label_B30A:; return;
label_B30D:; return;
label_B310:; return;
label_B313:; return;
label_B315:; return;
label_B318:; return;
label_B31A:; return;
label_B31C:; return;
label_B31D:; return;
label_B320:; return;
label_B321:; return;
label_B322:; return;
label_B324:; return;
label_B325:; return;
label_B327:; return;
label_B32A:; return;
label_B32C:; return;
label_B32F:; return;
label_B332:; return;
label_B334:; return;
label_B337:; return;
label_B33A:; return;
label_B33C:; return;
label_B33F:; return;
label_B342:; return;
label_B343:; return;
label_B346:; return;
label_B349:; return;
label_B34A:; return;
label_B34C:; return;
label_B34D:; return;
label_B350:; return;
label_B351:; return;
label_B352:; return;
label_B354:; return;
label_B355:; return;
label_B357:; return;
label_B35A:; return;
label_B35B:; return;
label_B35E:; return;
label_B361:; return;
label_B364:; return;
label_B366:; return;
label_B368:; return;
label_B36A:; return;
label_B36C:; return;
label_B36E:; return;
label_B36F:; return;
label_B372:; return;
label_B373:; return;
label_B375:; return;
label_B376:; return;
label_B377:; return;
label_B37A:; return;
label_B37D:; return;
label_B37E:; return;
label_B37F:; return;
label_B381:; return;
label_B382:; return;
label_B383:; return;
label_B385:; return;
label_B388:; return;
label_B38B:; return;
label_B38E:; return;
label_B391:; return;
label_B394:; return;
label_B397:; return;
label_B399:; return;
label_B39C:; return;
label_B39F:; return;
label_B3A2:; return;
label_B3A3:; return;
label_B3A6:; return;
label_B3A9:; return;
label_B3AA:; return;
label_B3AB:; return;
label_B3AD:; return;
label_B3AE:; return;
label_B3B0:; return;
label_B3B3:; return;
label_B3B4:; return;
label_B3B7:; return;
label_B3BA:; return;
label_B3BD:; return;
label_B3BF:; return;
label_B3C1:; return;
label_B3C3:; return;
label_B3C6:; return;
label_B3C8:; return;
label_B3CA:; return;
label_B3CC:; return;
label_B3CF:; return;
label_B3D0:; return;
label_B3D2:; return;
label_B3D3:; return;
label_B3D6:; return;
label_B3D7:; return;
label_B3D8:; return;
label_B3DB:; return;
label_B3DD:; return;
label_B3E0:; return;
label_B3E2:; return;
label_B3E5:; return;
label_B3E8:; return;
label_B3EA:; return;
label_B3ED:; return;
label_B3F0:; return;
label_B3F1:; return;
label_B3F4:; return;
label_B3F7:; return;
label_B3F8:; return;
label_B3F9:; return;
label_B3FC:; return;
label_B3FF:; return;
label_B400:; return;
label_B402:; return;
label_B403:; return;
label_B406:; return;
label_B407:; return;
label_B408:; return;
label_B40B:; return;
label_B40D:; return;
label_B410:; return;
label_B411:; return;
label_B414:; return;
label_B417:; return;
label_B41A:; return;
label_B41C:; return;
label_B41D:; return;
label_B420:; return;
label_B423:; return;
label_B426:; return;
label_B427:; return;
label_B429:; return;
label_B42B:; return;
label_B42C:; return;
label_B42E:; return;
label_B431:; return;
label_B433:; return;
label_B434:; return;
label_B437:; return;
label_B438:; return;
label_B439:; return;
label_B43B:; return;
label_B43C:; return;
label_B43E:; return;
label_B441:; return;
label_B444:; return;
label_B445:; return;
label_B447:; return;
label_B449:; return;
label_B44B:; return;
label_B44D:; return;
label_B44F:; return;
label_B451:; return;
label_B453:; return;
label_B455:; return;
label_B458:; return;
label_B45A:; return;
label_B45C:; return;
label_B45F:; return;
label_B462:; return;
label_B465:; return;
label_B468:; return;
label_B46B:; return;
label_B46E:; return;
label_B46F:; return;
label_B472:; return;
label_B474:; return;
label_B475:; return;
label_B477:; return;
label_B47A:; return;
label_B47D:; return;
label_B480:; return;
label_B481:; return;
label_B482:; return;
label_B484:; return;
label_B485:; return;
label_B487:; return;
label_B48A:; return;
label_B48C:; return;
label_B48E:; return;
label_B48F:; return;
label_B492:; return;
label_B495:; return;
label_B498:; return;
label_B49A:; return;
label_B49D:; return;
label_B4A0:; return;
label_B4A1:; return;
label_B4A3:; return;
label_B4A5:; return;
label_B4A6:; return;
label_B4A9:; return;
label_B4AA:; return;
label_B4AB:; return;
label_B4AD:; return;
label_B4AE:; return;
label_B4B0:; return;
label_B4B1:; return;
label_B4B2:; return;
label_B4B3:; return;
label_B4B6:; return;
label_B4B8:; return;
label_B4B9:; return;
label_B4BC:; return;
label_B4BD:; return;
label_B4C0:; return;
label_B4C1:; return;
label_B4C4:; return;
label_B4C5:; return;
label_B4C8:; return;
label_B4C9:; return;
label_B4CC:; return;
label_B4CD:; return;
label_B4CE:; return;
label_B4D0:; return;
label_B4D1:; return;
label_B4D2:; return;
label_B4D3:; return;
label_B4D5:; return;
label_B4D6:; return;
label_B4D9:; return;
label_B4DA:; return;
label_B4DB:; return;
label_B4DD:; return;
label_B4DE:; return;
label_B4E0:; return;
label_B4E1:; return;
label_B4E2:; return;
label_B4E4:; return;
label_B4E7:; return;
label_B4E9:; return;
label_B4EB:; return;
label_B4ED:; return;
label_B4EF:; return;
label_B4F1:; return;
label_B4F3:; return;
label_B4F5:; return;
label_B4F7:; return;
label_B4FA:; return;
label_B4FC:; return;
label_B4FE:; return;
label_B4FF:; return;
label_B502:; return;
label_B503:; return;
label_B505:; return;
label_B506:; return;
label_B507:; return;
label_B509:; return;
label_B50B:; return;
label_B50C:; return;
label_B50F:; return;
label_B510:; return;
label_B511:; return;
label_B514:; return;
label_B517:; return;
label_B519:; return;
label_B51C:; return;
label_B51D:; return;
label_B51E:; return;
label_B521:; return;
label_B524:; return;
label_B525:; return;
label_B526:; return;
label_B528:; return;
label_B529:; return;
label_B52B:; return;
label_B52C:; return;
label_B52D:; return;
label_B52E:; return;
label_B530:; return;
label_B532:; return;
label_B535:; return;
label_B536:; return;
label_B538:; return;
label_B53A:; return;
label_B53C:; return;
label_B53E:; return;
label_B540:; return;
label_B542:; return;
label_B544:; return;
label_B546:; return;
label_B547:; return;
label_B548:; return;
label_B549:; return;
label_B54B:; return;
label_B54C:; return;
label_B54D:; return;
label_B54E:; return;
label_B550:; return;
label_B551:; return;
label_B554:; return;
label_B555:; return;
label_B556:; return;
label_B558:; return;
label_B559:; return;
label_B55B:; return;
label_B55C:; return;
label_B55D:; return;
label_B55E:; return;
label_B561:; return;
label_B564:; return;
label_B567:; return;
label_B568:; return;
label_B56B:; return;
label_B56C:; return;
label_B56F:; return;
label_B570:; return;
label_B571:; return;
label_B573:; return;
label_B575:; return;
label_B576:; return;
label_B577:; return;
label_B57A:; return;
label_B57D:; return;
label_B57E:; return;
label_B57F:; return;
label_B581:; return;
label_B582:; return;
label_B583:; return;
label_B585:; return;
label_B587:; return;
label_B588:; return;
label_B589:; return;
label_B58B:; return;
label_B58E:; return;
label_B591:; return;
label_B593:; return;
label_B595:; return;
label_B597:; return;
label_B599:; return;
label_B59B:; return;
label_B59D:; return;
label_B59E:; return;
label_B5A0:; return;
label_B5A1:; return;
label_B5A2:; return;
label_B5A3:; return;
label_B5A6:; return;
label_B5A9:; return;
label_B5AA:; return;
label_B5AB:; return;
label_B5AD:; return;
label_B5AE:; return;
label_B5B0:; return;
label_B5B1:; return;
label_B5B2:; return;
label_B5B4:; return;
label_B5B5:; return;
label_B5B8:; return;
label_B5B9:; return;
label_B5BC:; return;
label_B5BD:; return;
label_B5C0:; return;
label_B5C1:; return;
label_B5C4:; return;
label_B5C5:; return;
label_B5C6:; return;
label_B5C8:; return;
label_B5CA:; return;
label_B5CB:; return;
label_B5CC:; return;
label_B5CF:; return;
label_B5D2:; return;
label_B5D3:; return;
label_B5D4:; return;
label_B5D7:; return;
label_B5D9:; return;
label_B5DA:; return;
label_B5DB:; return;
label_B5DC:; return;
label_B5DE:; return;
label_B5E0:; return;
label_B5E3:; return;
label_B5E4:; return;
label_B5E6:; return;
label_B5E8:; return;
label_B5EA:; return;
label_B5EC:; return;
label_B5ED:; return;
label_B5EE:; return;
label_B5F0:; return;
label_B5F3:; return;
label_B5F4:; return;
label_B5F5:; return;
label_B5F6:; return;
label_B5F7:; return;
label_B5F9:; return;
label_B5FA:; return;
label_B5FB:; return;
label_B5FC:; return;
label_B5FE:; return;
label_B5FF:; return;
label_B602:; return;
label_B603:; return;
label_B604:; return;
label_B607:; return;
label_B609:; return;
label_B60A:; return;
label_B60B:; return;
label_B60C:; return;
label_B60F:; return;
label_B612:; return;
label_B615:; return;
label_B616:; return;
label_B619:; return;
label_B61A:; return;
label_B61D:; return;
label_B61E:; return;
label_B61F:; return;
label_B621:; return;
label_B623:; return;
label_B625:; return;
label_B627:; return;
label_B629:; return;
label_B62B:; return;
label_B62D:; return;
label_B62F:; return;
label_B631:; return;
label_B634:; return;
label_B636:; return;
label_B637:; return;
label_B638:; return;
label_B639:; return;
label_B63A:; return;
label_B63B:; return;
label_B63C:; return;
label_B63F:; return;
label_B640:; return;
label_B641:; return;
label_B643:; return;
label_B644:; return;
label_B646:; return;
label_B647:; return;
label_B648:; return;
label_B649:; return;
label_B64B:; return;
label_B64E:; return;
label_B64F:; return;
label_B652:; return;
label_B653:; return;
label_B656:; return;
label_B657:; return;
label_B65A:; return;
label_B65B:; return;
label_B65E:; return;
label_B65F:; return;
label_B662:; return;
label_B664:; return;
label_B667:; return;
label_B668:; return;
label_B66B:; return;
label_B66C:; return;
label_B66F:; return;
label_B670:; return;
label_B673:; return;
label_B674:; return;
label_B677:; return;
label_B678:; return;
label_B67B:; return;
label_B67C:; return;
label_B67D:; return;
label_B67F:; return;
label_B680:; return;
label_B681:; return;
label_B682:; return;
label_B685:; return;
label_B688:; return;
label_B689:; return;
label_B68A:; return;
label_B68B:; return;
label_B68C:; return;
label_B68D:; return;
label_B68F:; return;
label_B690:; return;
label_B691:; return;
label_B692:; return;
label_B695:; return;
label_B698:; return;
label_B69A:; return;
label_B69C:; return;
label_B69D:; return;
label_B6A0:; return;
label_B6A1:; return;
label_B6A3:; return;
label_B6A5:; return;
label_B6A7:; return;
label_B6A9:; return;
label_B6AB:; return;
label_B6AD:; return;
label_B6AF:; return;
label_B6B1:; return;
label_B6B3:; return;
label_B6B6:; return;
label_B6B8:; return;
label_B6B9:; return;
label_B6BA:; return;
label_B6BB:; return;
label_B6BC:; return;
label_B6BD:; return;
label_B6BE:; return;
label_B6C1:; return;
label_B6C2:; return;
label_B6C3:; return;
label_B6C5:; return;
label_B6C6:; return;
label_B6C8:; return;
label_B6C9:; return;
label_B6CA:; return;
label_B6CB:; return;
label_B6CD:; return;
label_B6D0:; return;
label_B6D1:; return;
label_B6D4:; return;
label_B6D5:; return;
label_B6D8:; return;
label_B6D9:; return;
label_B6DC:; return;
label_B6DD:; return;
label_B6E0:; return;
label_B6E1:; return;
label_B6E4:; return;
label_B6E6:; return;
label_B6E7:; return;
label_B6E9:; return;
label_B6EA:; return;
label_B6ED:; return;
label_B6EE:; return;
label_B6EF:; return;
label_B6F1:; return;
label_B6F2:; return;
label_B6F4:; return;
label_B6F5:; return;
label_B6F6:; return;
label_B6F7:; return;
label_B6F8:; return;
label_B6FA:; return;
label_B6FC:; return;
label_B6FD:; return;
label_B6FE:; return;
label_B6FF:; return;
label_B700:; return;
label_B701:; return;
label_B702:; return;
label_B703:; return;
label_B704:; return;
label_B705:; return;
label_B706:; return;
label_B707:; return;
label_B708:; return;
label_B709:; return;
label_B70A:; return;
label_B70B:; return;
label_B70C:; return;
label_B70D:; return;
label_B70E:; return;
label_B70F:; return;
label_B710:; return;
label_B711:; return;
label_B712:; return;
label_B713:; return;
label_B714:; return;
label_B715:; return;
label_B716:; return;
label_B717:; return;
label_B718:; return;
label_B719:; return;
label_B71A:; return;
label_B71B:; return;
label_B71C:; return;
label_B71D:; return;
label_B71E:; return;
label_B71F:; return;
label_B720:; return;
label_B721:; return;
label_B722:; return;
label_B723:; return;
label_B724:; return;
label_B725:; return;
label_B726:; return;
label_B727:; return;
label_B728:; return;
label_B729:; return;
label_B72A:; return;
label_B72B:; return;
label_B72C:; return;
label_B72D:; return;
label_B72E:; return;
label_B72F:; return;
label_B730:; return;
label_B731:; return;
label_B732:; return;
label_B733:; return;
label_B734:; return;
label_B735:; return;
label_B736:; return;
label_B737:; return;
label_B738:; return;
label_B739:; return;
label_B73A:; return;
label_B73B:; return;
label_B73C:; return;
label_B73D:; return;
label_B73E:; return;
label_B73F:; return;
label_B740:; return;
label_B741:; return;
label_B742:; return;
label_B743:; return;
label_B744:; return;
label_B745:; return;
label_B746:; return;
label_B747:; return;
label_B748:; return;
label_B749:; return;
label_B74A:; return;
label_B74B:; return;
label_B74C:; return;
label_B74D:; return;
label_B74E:; return;
label_B74F:; return;
label_B750:; return;
label_B751:; return;
label_B752:; return;
label_B753:; return;
label_B754:; return;
label_B755:; return;
label_B756:; return;
label_B757:; return;
label_B758:; return;
label_B759:; return;
label_B75A:; return;
label_B75B:; return;
label_B75C:; return;
label_B75D:; return;
label_B75E:; return;
label_B75F:; return;
label_B760:; return;
label_B761:; return;
label_B762:; return;
label_B763:; return;
label_B764:; return;
label_B765:; return;
label_B766:; return;
label_B767:; return;
label_B768:; return;
label_B769:; return;
label_B76A:; return;
label_B76B:; return;
label_B76C:; return;
label_B76D:; return;
label_B76E:; return;
label_B76F:; return;
label_B770:; return;
label_B771:; return;
label_B772:; return;
label_B773:; return;
label_B774:; return;
label_B775:; return;
label_B776:; return;
label_B777:; return;
label_B778:; return;
label_B779:; return;
label_B77A:; return;
label_B77B:; return;
label_B77C:; return;
label_B77D:; return;
label_B77E:; return;
label_B77F:; return;
label_B780:; return;
label_B781:; return;
label_B782:; return;
label_B783:; return;
label_B784:; return;
label_B785:; return;
label_B786:; return;
label_B787:; return;
label_B788:; return;
label_B789:; return;
label_B78A:; return;
label_B78B:; return;
label_B78C:; return;
label_B78D:; return;
label_B78E:; return;
label_B78F:; return;
label_B790:; return;
label_B791:; return;
label_B792:; return;
label_B793:; return;
label_B794:; return;
label_B795:; return;
label_B796:; return;
label_B797:; return;
label_B798:; return;
label_B799:; return;
label_B79A:; return;
label_B79B:; return;
label_B79C:; return;
label_B79D:; return;
label_B79E:; return;
label_B79F:; return;
label_B7A0:; return;
label_B7A1:; return;
label_B7A2:; return;
label_B7A3:; return;
label_B7A4:; return;
label_B7A5:; return;
label_B7A6:; return;
label_B7A7:; return;
label_B7A8:; return;
label_B7A9:; return;
label_B7AA:; return;
label_B7AB:; return;
label_B7AC:; return;
label_B7AD:; return;
label_B7AE:; return;
label_B7AF:; return;
label_B7B0:; return;
label_B7B1:; return;
label_B7B2:; return;
label_B7B3:; return;
label_B7B4:; return;
label_B7B5:; return;
label_B7B6:; return;
label_B7B7:; return;
label_B7B8:; return;
label_B7B9:; return;
label_B7BA:; return;
label_B7BB:; return;
label_B7BC:; return;
label_B7BD:; return;
label_B7BE:; return;
label_B7BF:; return;
label_B7C0:; return;
label_B7C1:; return;
label_B7C2:; return;
label_B7C3:; return;
label_B7C4:; return;
label_B7C5:; return;
label_B7C6:; return;
label_B7C7:; return;
label_B7C8:; return;
label_B7C9:; return;
label_B7CA:; return;
label_B7CB:; return;
label_B7CC:; return;
label_B7CD:; return;
label_B7CE:; return;
label_B7CF:; return;
label_B7D0:; return;
label_B7D1:; return;
label_B7D2:; return;
label_B7D3:; return;
label_B7D4:; return;
label_B7D5:; return;
label_B7D6:; return;
label_B7D7:; return;
label_B7D8:; return;
label_B7D9:; return;
label_B7DA:; return;
label_B7DB:; return;
label_B7DC:; return;
label_B7DD:; return;
label_B7DE:; return;
label_B7DF:; return;
label_B7E0:; return;
label_B7E1:; return;
label_B7E2:; return;
label_B7E3:; return;
label_B7E4:; return;
label_B7E5:; return;
label_B7E6:; return;
label_B7E7:; return;
label_B7E8:; return;
label_B7E9:; return;
label_B7EA:; return;
label_B7EB:; return;
label_B7EC:; return;
label_B7ED:; return;
label_B7EE:; return;
label_B7EF:; return;
label_B7F0:; return;
label_B7F1:; return;
label_B7F2:; return;
label_B7F3:; return;
label_B7F4:; return;
label_B7F5:; return;
label_B7F6:; return;
label_B7F7:; return;
label_B7F8:; return;
label_B7F9:; return;
label_B7FA:; return;
label_B7FB:; return;
label_B7FC:; return;
label_B7FD:; return;
label_B7FE:; return;
label_B7FF:; return;
label_B800:; return;
label_B801:; return;
label_B802:; return;
label_B803:; return;
label_B804:; return;
label_B805:; return;
label_B806:; return;
label_B807:; return;
label_B808:; return;
label_B809:; return;
label_B80A:; return;
label_B80B:; return;
label_B80C:; return;
label_B80D:; return;
label_B80E:; return;
label_B80F:; return;
label_B810:; return;
label_B811:; return;
label_B812:; return;
label_B813:; return;
label_B814:; return;
label_B815:; return;
label_B816:; return;
label_B817:; return;
label_B818:; return;
label_B819:; return;
label_B81A:; return;
label_B81B:; return;
label_B81C:; return;
label_B81D:; return;
label_B81E:; return;
label_B81F:; return;
label_B820:; return;
label_B821:; return;
label_B822:; return;
label_B823:; return;
label_B824:; return;
label_B825:; return;
label_B826:; return;
label_B827:; return;
label_B828:; return;
label_B829:; return;
label_B82A:; return;
label_B82B:; return;
label_B82C:; return;
label_B82D:; return;
label_B82E:; return;
label_B82F:; return;
label_B830:; return;
label_B831:; return;
label_B832:; return;
label_B833:; return;
label_B834:; return;
label_B835:; return;
label_B836:; return;
label_B837:; return;
label_B838:; return;
label_B839:; return;
label_B83A:; return;
label_B83B:; return;
label_B83C:; return;
label_B83D:; return;
label_B83E:; return;
label_B83F:; return;
label_B840:; return;
label_B841:; return;
label_B842:; return;
label_B843:; return;
label_B844:; return;
label_B845:; return;
label_B846:; return;
label_B847:; return;
label_B848:; return;
label_B849:; return;
label_B84A:; return;
label_B84B:; return;
label_B84C:; return;
label_B84D:; return;
label_B84E:; return;
label_B84F:; return;
label_B850:; return;
label_B851:; return;
label_B852:; return;
label_B853:; return;
label_B854:; return;
label_B855:; return;
label_B856:; return;
label_B857:; return;
label_B858:; return;
label_B859:; return;
label_B85A:; return;
label_B85B:; return;
label_B85C:; return;
label_B85D:; return;
label_B85E:; return;
label_B85F:; return;
label_B860:; return;
label_B861:; return;
label_B862:; return;
label_B863:; return;
label_B864:; return;
label_B865:; return;
label_B866:; return;
label_B867:; return;
label_B868:; return;
label_B869:; return;
label_B86A:; return;
label_B86B:; return;
label_B86C:; return;
label_B86D:; return;
label_B86E:; return;
label_B86F:; return;
label_B870:; return;
label_B871:; return;
label_B872:; return;
label_B873:; return;
label_B874:; return;
label_B875:; return;
label_B876:; return;
label_B877:; return;
label_B878:; return;
label_B879:; return;
label_B87A:; return;
label_B87B:; return;
label_B87C:; return;
label_B87D:; return;
label_B87E:; return;
label_B87F:; return;
label_B880:; return;
label_B881:; return;
label_B882:; return;
label_B883:; return;
label_B884:; return;
label_B885:; return;
label_B886:; return;
label_B887:; return;
label_B888:; return;
label_B889:; return;
label_B88A:; return;
label_B88B:; return;
label_B88C:; return;
label_B88D:; return;
label_B88E:; return;
label_B88F:; return;
label_B890:; return;
label_B891:; return;
label_B892:; return;
label_B893:; return;
label_B894:; return;
label_B895:; return;
label_B896:; return;
label_B897:; return;
label_B898:; return;
label_B899:; return;
label_B89A:; return;
label_B89B:; return;
label_B89C:; return;
label_B89D:; return;
label_B89E:; return;
label_B89F:; return;
label_B8A0:; return;
label_B8A1:; return;
label_B8A2:; return;
label_B8A3:; return;
label_B8A4:; return;
label_B8A5:; return;
label_B8A6:; return;
label_B8A7:; return;
label_B8A8:; return;
label_B8A9:; return;
label_B8AA:; return;
label_B8AB:; return;
label_B8AC:; return;
label_B8AD:; return;
label_B8AE:; return;
label_B8AF:; return;
label_B8B0:; return;
label_B8B1:; return;
label_B8B2:; return;
label_B8B3:; return;
label_B8B4:; return;
label_B8B5:; return;
label_B8B6:; return;
label_B8B7:; return;
label_B8B8:; return;
label_B8B9:; return;
label_B8BA:; return;
label_B8BB:; return;
label_B8BC:; return;
label_B8BD:; return;
label_B8BE:; return;
label_B8BF:; return;
label_B8C0:; return;
label_B8C1:; return;
label_B8C2:; return;
label_B8C3:; return;
label_B8C4:; return;
label_B8C5:; return;
label_B8C6:; return;
label_B8C7:; return;
label_B8C8:; return;
label_B8C9:; return;
label_B8CA:; return;
label_B8CB:; return;
label_B8CC:; return;
label_B8CD:; return;
label_B8CE:; return;
label_B8CF:; return;
label_B8D0:; return;
label_B8D1:; return;
label_B8D2:; return;
label_B8D3:; return;
label_B8D4:; return;
label_B8D5:; return;
label_B8D6:; return;
label_B8D7:; return;
label_B8D8:; return;
label_B8D9:; return;
label_B8DA:; return;
label_B8DB:; return;
label_B8DC:; return;
label_B8DD:; return;
label_B8DE:; return;
label_B8DF:; return;
label_B8E0:; return;
label_B8E1:; return;
label_B8E2:; return;
label_B8E3:; return;
label_B8E4:; return;
label_B8E5:; return;
label_B8E6:; return;
label_B8E7:; return;
label_B8E8:; return;
label_B8E9:; return;
label_B8EA:; return;
label_B8EB:; return;
label_B8EC:; return;
label_B8ED:; return;
label_B8EE:; return;
label_B8EF:; return;
label_B8F0:; return;
label_B8F1:; return;
label_B8F2:; return;
label_B8F3:; return;
label_B8F4:; return;
label_B8F5:; return;
}

void func_AA2D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA2D_b1");
#endif
label_AA2D:;
    /* $AA2D: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA2F:;
    /* $AA2F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_AA31:;
    /* $AA31: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA3A; }
label_AA33:;
    /* $AA33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_AA35:;
    /* $AA35: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA37:;
    /* $AA37: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA53, 1); return;
label_AA3A:;
    /* $AA3A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AA3C:;
    /* $AA3C: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_AA3E:;
    /* $AA3E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA53, 1); return;
}

void func_B003_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B003_b1");
#endif
label_B003:;
    /* $B003: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_B005:;
    /* $B005: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05B9); FLAG_NZ(g_cpu.A);
label_B008:;
    /* $B008: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_B00A:;
    /* $B00A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_B00D:;
    /* $B00D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A53A_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A53A_b1");
#endif
label_A53A:;
    /* $A53A: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A53C:;
    /* $A53C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A53D:;
    /* $A53D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x11 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x11); g_cpu.A=r&0xFF; }
label_A53F:;
    /* $A53F: 8D */ maybe_trigger_vblank(4); nes_write(0x0424, g_cpu.A);
label_A542:;
    /* $A542: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A544:;
    /* $A544: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A555; }
label_A546:;
    /* $A546: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_A548:;
    /* $A548: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A54A:;
    /* $A54A: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_A54C:;
    /* $A54C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A54E:;
    /* $A54E: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A550:;
    /* $A550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 1);
label_A553:;
    /* $A553: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A555:;
    /* $A555: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A556:;
    /* $A556: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A558:;
    /* $A558: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_A55A:;
    /* $A55A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A570; }
label_A55C:;
    /* $A55C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A55E:;
    /* $A55E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A566; }
label_A560:;
    /* $A560: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9FE4, 1);
label_A563:;
    /* $A563: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA570, 1); return;
label_A566:;
    /* $A566: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9FE4, 1);
label_A569:;
    /* $A569: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A56C:;
    /* $A56C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x91); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A56E:;
    /* $A56E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A566;
    }
label_A570:;
    /* $A570: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_A572:;
    /* $A572: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A57B; }
label_A574:;
    /* $A574: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02FE + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A579:;
    /* $A579: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0529), 1); return; }
label_A57B:;
    /* $A57B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A57D:;
    /* $A57D: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A580:;
    /* $A580: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: 99 */ maybe_trigger_vblank(5); nes_write((0x0301 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A585:;
    /* $A585: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_A587:;
    /* $A587: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A58A:;
    /* $A58A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_A58C:;
    /* $A58C: 99 */ maybe_trigger_vblank(5); nes_write((0x0311 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A58F:;
    /* $A58F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A590:;
    /* $A590: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A591:;
    /* $A591: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A592:;
    /* $A592: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A593:;
    /* $A593: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A595:;
    /* $A595: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0529), 1); return; }
label_A597:;
    /* $A597: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0455); FLAG_NZ(g_cpu.A);
label_A59A:;
    /* $A59A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A59C:;
    /* $A59C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5A1; }
label_A59E:;
    /* $A59E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA5F1, 1); return;
label_A5A1:;
    /* $A5A1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0455); FLAG_NZ(g_cpu.A);
label_A5A4:;
    /* $A5A4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A5A6:;
    /* $A5A6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5F1; }
label_A5A8:;
    /* $A5A8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA1A8, 1);
label_A5AB:;
    /* $A5AB: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x14; g_cpu.C=(g_cpu.Y>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_A5AD:;
    /* $A5AD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A5F1; }
label_A5AF:;
    /* $A5AF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_A5B2:;
    /* $A5B2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5B3:;
    /* $A5B3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5D8; }
label_A5B5:;
    /* $A5B5: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0455); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5B8:;
    /* $A5B8: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A5C0; }
label_A5BA:;
    /* $A5BA: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0455); FLAG_NZ(g_cpu.Y);
label_A5BD:;
    /* $A5BD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA5D8, 1); return;
label_A5C0:;
    /* $A5C0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A5C3:;
    /* $A5C3: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_A5C5:;
    /* $A5C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A5C7:;
    /* $A5C7: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_A5C9:;
    /* $A5C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_A5CC:;
    /* $A5CC: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A5CE:;
    /* $A5CE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 1);
label_A5D1:;
    /* $A5D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_A5D3:;
    /* $A5D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5D4:;
    /* $A5D4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A5D5:;
    /* $A5D5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A5D8; }
label_A5D7:;
    /* $A5D7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A5D8:;
    /* $A5D8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A5DA:;
    /* $A5DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5DD:;
    /* $A5DD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_A5DF:;
    /* $A5DF: 99 */ maybe_trigger_vblank(5); nes_write((0x0301 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5E2:;
    /* $A5E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_A5E4:;
    /* $A5E4: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5E7:;
    /* $A5E7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0311 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5EC:;
    /* $A5EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A5EE:;
    /* $A5EE: 8D */ maybe_trigger_vblank(4); nes_write(0x0455, g_cpu.A);
label_A5F1:;
    /* $A5F1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5F3:;
    /* $A5F3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A5F4:;
    /* $A5F4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A5F5:;
    /* $A5F5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8577_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8577_b1");
#endif
label_8577:;
    /* $8577: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_857A:;
    /* $857A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_857C:;
    /* $857C: 8D */ maybe_trigger_vblank(4); nes_write(0x03A8, g_cpu.A);
label_857F:;
    /* $857F: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_8582:;
    /* $8582: 8D */ maybe_trigger_vblank(4); nes_write(0x03AD, g_cpu.A);
label_8585:;
    /* $8585: 8D */ maybe_trigger_vblank(4); nes_write(0x03B0, g_cpu.A);
label_8588:;
    /* $8588: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_858A:;
    /* $858A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_858D:;
    /* $858D: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8590:;
    /* $8590: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_8592:;
    /* $8592: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_8595:;
    /* $8595: 8D */ maybe_trigger_vblank(4); nes_write(0x03AE, g_cpu.A);
label_8598:;
    /* $8598: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_859A:;
    /* $859A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_859D:;
    /* $859D: 8D */ maybe_trigger_vblank(4); nes_write(0x03AF, g_cpu.A);
label_85A0:;
    /* $85A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_85A2:;
    /* $85A2: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_85A5:;
    /* $85A5: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8575_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8575_b1");
#endif
label_8575:;
    /* $8575: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_8577:;
    /* $8577: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_857A:;
    /* $857A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_857C:;
    /* $857C: 8D */ maybe_trigger_vblank(4); nes_write(0x03A8, g_cpu.A);
label_857F:;
    /* $857F: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_8582:;
    /* $8582: 8D */ maybe_trigger_vblank(4); nes_write(0x03AD, g_cpu.A);
label_8585:;
    /* $8585: 8D */ maybe_trigger_vblank(4); nes_write(0x03B0, g_cpu.A);
label_8588:;
    /* $8588: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_858A:;
    /* $858A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_858D:;
    /* $858D: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8590:;
    /* $8590: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_8592:;
    /* $8592: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_8595:;
    /* $8595: 8D */ maybe_trigger_vblank(4); nes_write(0x03AE, g_cpu.A);
label_8598:;
    /* $8598: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_859A:;
    /* $859A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_859D:;
    /* $859D: 8D */ maybe_trigger_vblank(4); nes_write(0x03AF, g_cpu.A);
label_85A0:;
    /* $85A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_85A2:;
    /* $85A2: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_85A5:;
    /* $85A5: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A902_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A902_b1");
#endif
label_A902:;
    /* $A902: 97 */ maybe_trigger_vblank(4); nes_write((0xAD + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A904:;
    /* $A904: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A906:;
    /* $A906: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A907:;
    /* $A907: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A90A:;
    /* $A90A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90B:;
    /* $A90B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_A90D:;
    /* $A90D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A90E:;
    /* $A90E: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A910:;
    /* $A910: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A913:;
    /* $A913: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A917:;
    /* $A917: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A91C:;
    /* $A91C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A926; }
label_A91E:;
    /* $A91E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A922:;
    /* $A922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A926:;
    /* $A926: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A92B:;
    /* $A92B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A92D:;
    /* $A92D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A92F:;
    /* $A92F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A93E; }
label_A931:;
    /* $A931: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A932:;
    /* $A932: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A934:;
    /* $A934: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A936:;
    /* $A936: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A938:;
    /* $A938: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A93A:;
    /* $A93A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A93C:;
    /* $A93C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A93E:;
    /* $A93E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A943:;
    /* $A943: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_A945:;
    /* $A945: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A94B; }
label_A947:;
    /* $A947: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A94B:;
    /* $A94B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A94E:;
    /* $A94E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A950:;
    /* $A950: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_A953:;
    /* $A953: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A955:;
    /* $A955: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A956:;
    /* $A956: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x77); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A958:;
    /* $A958: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A95A:;
    /* $A95A: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A95C:;
    /* $A95C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95E:;
    /* $A95E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A965; }
label_A960:;
    /* $A960: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A962:;
    /* $A962: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA96B, 1); return;
label_A965:;
    /* $A965: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A966:;
    /* $A966: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A96A:;
    /* $A96A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A96B:;
    /* $A96B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A96C:;
    /* $A96C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A96E:;
    /* $A96E: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A970:;
    /* $A970: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A975:;
    /* $A975: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9C); FLAG_NZ(g_cpu.A);
label_A977:;
    /* $A977: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A979:;
    /* $A979: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_A97B:;
    /* $A97B: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A97D:;
    /* $A97D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA9A0, 1);
label_A980:;
    /* $A980: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A983:;
    /* $A983: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A985:;
    /* $A985: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A987:;
    /* $A987: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A988:;
    /* $A988: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A98A:;
    /* $A98A: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A98C:;
    /* $A98C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A995; }
label_A98E:;
    /* $A98E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A990:;
    /* $A990: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A992:;
    /* $A992: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA99F, 1); return;
label_A995:;
    /* $A995: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A99F; }
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A99F:;
    /* $A99F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8516_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8516_b1");
#endif
label_8516:;
    /* $8516: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8519:;
    /* $8519: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_851B:;
    /* $851B: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_851E:;
    /* $851E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8520:;
    /* $8520: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_8523:;
    /* $8523: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_8526:;
    /* $8526: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_8529:;
    /* $8529: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_852B:;
    /* $852B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_852D:;
    /* $852D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_852F:;
    /* $852F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8531:;
    /* $8531: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8533:;
    /* $8533: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8535:;
    /* $8535: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8537:;
    /* $8537: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_853A:;
    /* $853A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_853B:;
    /* $853B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853E:;
    /* $853E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853F:;
    /* $853F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8542:;
    /* $8542: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8545:;
    /* $8545: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8546:;
    /* $8546: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8548:;
    /* $8548: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A91B_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A91B_b1");
#endif
label_A91B:;
    /* $A91B: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A91D:;
    /* $A91D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A91E:;
    /* $A91E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A922:;
    /* $A922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A926:;
    /* $A926: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A92B:;
    /* $A92B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A92D:;
    /* $A92D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A92F:;
    /* $A92F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A93E; }
label_A931:;
    /* $A931: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A932:;
    /* $A932: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A934:;
    /* $A934: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A936:;
    /* $A936: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A938:;
    /* $A938: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A93A:;
    /* $A93A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A93C:;
    /* $A93C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A93E:;
    /* $A93E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A943:;
    /* $A943: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_A945:;
    /* $A945: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A94B; }
label_A947:;
    /* $A947: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A94B:;
    /* $A94B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A94E:;
    /* $A94E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A950:;
    /* $A950: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_A953:;
    /* $A953: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A955:;
    /* $A955: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A956:;
    /* $A956: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x77); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A958:;
    /* $A958: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A95A:;
    /* $A95A: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A95C:;
    /* $A95C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95E:;
    /* $A95E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A965; }
label_A960:;
    /* $A960: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A962:;
    /* $A962: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA96B, 1); return;
label_A965:;
    /* $A965: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A966:;
    /* $A966: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A96A:;
    /* $A96A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A96B:;
    /* $A96B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A96C:;
    /* $A96C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A96E:;
    /* $A96E: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A970:;
    /* $A970: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A975:;
    /* $A975: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9C); FLAG_NZ(g_cpu.A);
label_A977:;
    /* $A977: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A979:;
    /* $A979: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_A97B:;
    /* $A97B: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A97D:;
    /* $A97D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA9A0, 1);
label_A980:;
    /* $A980: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A983:;
    /* $A983: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A985:;
    /* $A985: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A987:;
    /* $A987: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A988:;
    /* $A988: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A98A:;
    /* $A98A: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A98C:;
    /* $A98C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A995; }
label_A98E:;
    /* $A98E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A990:;
    /* $A990: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A992:;
    /* $A992: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA99F, 1); return;
label_A995:;
    /* $A995: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A99F; }
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A99F:;
    /* $A99F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8502_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8502_b1");
#endif
label_8502:;
    /* $8502: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_8504:;
    /* $8504: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8506:;
    /* $8506: 8D */ maybe_trigger_vblank(4); nes_write(0x03A8, g_cpu.A);
label_8509:;
    /* $8509: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_850C:;
    /* $850C: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_850F:;
    /* $850F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8511:;
    /* $8511: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8519:;
    /* $8519: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_851B:;
    /* $851B: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_851E:;
    /* $851E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8520:;
    /* $8520: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_8523:;
    /* $8523: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_8526:;
    /* $8526: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_8529:;
    /* $8529: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_852B:;
    /* $852B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_852D:;
    /* $852D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_852F:;
    /* $852F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8531:;
    /* $8531: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8533:;
    /* $8533: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8535:;
    /* $8535: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8537:;
    /* $8537: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_853A:;
    /* $853A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_853B:;
    /* $853B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853E:;
    /* $853E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853F:;
    /* $853F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8542:;
    /* $8542: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8545:;
    /* $8545: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8546:;
    /* $8546: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8548:;
    /* $8548: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD1C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD1C_b1");
#endif
label_AD1C:;
    /* $AD1C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_AD1E:;
    /* $AD1E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD21:;
    /* $AD21: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD22:;
    /* $AD22: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AD24:;
    /* $AD24: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD27:;
    /* $AD27: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD28:;
    /* $AD28: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD2B:;
    /* $AD2B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD2C:;
    /* $AD2C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD2F:;
    /* $AD2F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AD32:;
    /* $AD32: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A51F_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A51F_b1");
#endif
label_A51F:;
    /* $A51F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A521:;
    /* $A521: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A522:;
    /* $A522: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_A524:;
    /* $A524: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A525:;
    /* $A525: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A527:;
    /* $A527: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A529:;
    /* $A529: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9FE4, 1);
label_A52C:;
    /* $A52C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A52F:;
    /* $A52F: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x91); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A531:;
    /* $A531: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A570; }
label_A533:;
    /* $A533: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A536:;
    /* $A536: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A537:;
    /* $A537: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A538:;
    /* $A538: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A539:;
    /* $A539: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0424); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A53C:;
    /* $A53C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A53D:;
    /* $A53D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x11 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x11); g_cpu.A=r&0xFF; }
label_A53F:;
    /* $A53F: 8D */ maybe_trigger_vblank(4); nes_write(0x0424, g_cpu.A);
label_A542:;
    /* $A542: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A544:;
    /* $A544: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A555; }
label_A546:;
    /* $A546: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_A548:;
    /* $A548: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A54A:;
    /* $A54A: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_A54C:;
    /* $A54C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A54E:;
    /* $A54E: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A550:;
    /* $A550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 1);
label_A553:;
    /* $A553: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A555:;
    /* $A555: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A556:;
    /* $A556: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A558:;
    /* $A558: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_A55A:;
    /* $A55A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A570; }
label_A55C:;
    /* $A55C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A55E:;
    /* $A55E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A566; }
label_A560:;
    /* $A560: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9FE4, 1);
label_A563:;
    /* $A563: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA570, 1); return;
label_A566:;
    /* $A566: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9FE4, 1);
label_A569:;
    /* $A569: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A56C:;
    /* $A56C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x91); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A56E:;
    /* $A56E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A566;
    }
label_A570:;
    /* $A570: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_A572:;
    /* $A572: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A57B; }
label_A574:;
    /* $A574: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02FE + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A579:;
    /* $A579: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A529;
    }
label_A57B:;
    /* $A57B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A57D:;
    /* $A57D: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A580:;
    /* $A580: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: 99 */ maybe_trigger_vblank(5); nes_write((0x0301 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A585:;
    /* $A585: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_A587:;
    /* $A587: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A58A:;
    /* $A58A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_A58C:;
    /* $A58C: 99 */ maybe_trigger_vblank(5); nes_write((0x0311 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A58F:;
    /* $A58F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A590:;
    /* $A590: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A591:;
    /* $A591: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A592:;
    /* $A592: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A593:;
    /* $A593: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A595:;
    /* $A595: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A529;
    }
label_A597:;
    /* $A597: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0455); FLAG_NZ(g_cpu.A);
label_A59A:;
    /* $A59A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A59C:;
    /* $A59C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5A1; }
label_A59E:;
    /* $A59E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA5F1, 1); return;
label_A5A1:;
    /* $A5A1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0455); FLAG_NZ(g_cpu.A);
label_A5A4:;
    /* $A5A4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A5A6:;
    /* $A5A6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5F1; }
label_A5A8:;
    /* $A5A8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA1A8, 1);
label_A5AB:;
    /* $A5AB: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x14; g_cpu.C=(g_cpu.Y>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_A5AD:;
    /* $A5AD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A5F1; }
label_A5AF:;
    /* $A5AF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_A5B2:;
    /* $A5B2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5B3:;
    /* $A5B3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5D8; }
label_A5B5:;
    /* $A5B5: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0455); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5B8:;
    /* $A5B8: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A5C0; }
label_A5BA:;
    /* $A5BA: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0455); FLAG_NZ(g_cpu.Y);
label_A5BD:;
    /* $A5BD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA5D8, 1); return;
label_A5C0:;
    /* $A5C0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A5C3:;
    /* $A5C3: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_A5C5:;
    /* $A5C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A5C7:;
    /* $A5C7: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_A5C9:;
    /* $A5C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_A5CC:;
    /* $A5CC: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A5CE:;
    /* $A5CE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 1);
label_A5D1:;
    /* $A5D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_A5D3:;
    /* $A5D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5D4:;
    /* $A5D4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A5D5:;
    /* $A5D5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A5D8; }
label_A5D7:;
    /* $A5D7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A5D8:;
    /* $A5D8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A5DA:;
    /* $A5DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5DD:;
    /* $A5DD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_A5DF:;
    /* $A5DF: 99 */ maybe_trigger_vblank(5); nes_write((0x0301 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5E2:;
    /* $A5E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_A5E4:;
    /* $A5E4: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5E7:;
    /* $A5E7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0311 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5EC:;
    /* $A5EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A5EE:;
    /* $A5EE: 8D */ maybe_trigger_vblank(4); nes_write(0x0455, g_cpu.A);
label_A5F1:;
    /* $A5F1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5F3:;
    /* $A5F3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A5F4:;
    /* $A5F4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A5F5:;
    /* $A5F5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A915_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A915_b1");
#endif
label_A915:;
    /* $A915: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A917:;
    /* $A917: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A91C:;
    /* $A91C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A926; }
label_A91E:;
    /* $A91E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A922:;
    /* $A922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A926:;
    /* $A926: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A92B:;
    /* $A92B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A92D:;
    /* $A92D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A92F:;
    /* $A92F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A93E; }
label_A931:;
    /* $A931: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A932:;
    /* $A932: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A934:;
    /* $A934: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A936:;
    /* $A936: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A938:;
    /* $A938: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A93A:;
    /* $A93A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A93C:;
    /* $A93C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A93E:;
    /* $A93E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A943:;
    /* $A943: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_A945:;
    /* $A945: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A94B; }
label_A947:;
    /* $A947: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A94B:;
    /* $A94B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A94E:;
    /* $A94E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A950:;
    /* $A950: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_A953:;
    /* $A953: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A955:;
    /* $A955: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A956:;
    /* $A956: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x77); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A958:;
    /* $A958: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A95A:;
    /* $A95A: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A95C:;
    /* $A95C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95E:;
    /* $A95E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A965; }
label_A960:;
    /* $A960: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A962:;
    /* $A962: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA96B, 1); return;
label_A965:;
    /* $A965: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A966:;
    /* $A966: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A96A:;
    /* $A96A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A96B:;
    /* $A96B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A96C:;
    /* $A96C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A96E:;
    /* $A96E: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A970:;
    /* $A970: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A975:;
    /* $A975: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9C); FLAG_NZ(g_cpu.A);
label_A977:;
    /* $A977: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A979:;
    /* $A979: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_A97B:;
    /* $A97B: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A97D:;
    /* $A97D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA9A0, 1);
label_A980:;
    /* $A980: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A983:;
    /* $A983: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A985:;
    /* $A985: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A987:;
    /* $A987: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A988:;
    /* $A988: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A98A:;
    /* $A98A: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A98C:;
    /* $A98C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A995; }
label_A98E:;
    /* $A98E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A990:;
    /* $A990: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A992:;
    /* $A992: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA99F, 1); return;
label_A995:;
    /* $A995: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A99F; }
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A99F:;
    /* $A99F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D8D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D8D_b1");
#endif
label_8D8D:;
    /* $8D8D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D8F:;
    /* $8D8F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x18; FLAG_NZ(g_cpu.Y);
label_8D91:;
    /* $8D91: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8D93:;
    /* $8D93: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_8D95:;
    /* $8D95: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0020 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D98:;
    /* $8D98: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8D9B:;
    /* $8D9B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8D9C:;
    /* $8D9C: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8D9D:;
    /* $8D9D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8D9E:;
    /* $8D9E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_8DA0:;
    /* $8DA0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8DA1:;
    /* $8DA1: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA3:;
    /* $8DA3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8D95;
    }
label_8DA5:;
    /* $8DA5: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_8DA8:;
    /* $8DA8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_8DAB:;
    /* $8DAB: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_8DAD:;
    /* $8DAD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DAF:;
    /* $8DAF: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DB1:;
    /* $8DB1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8DB3:;
    /* $8DB3: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_8DB5:;
    /* $8DB5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC01B, 1);
label_8DB8:;
    /* $8DB8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E5); FLAG_NZ(g_cpu.A);
label_8DBB:;
    /* $8DBB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8DBC:;
    /* $8DBC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_8DBE:;
    /* $8DBE: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8DBF:;
    /* $8DBF: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0414); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DC2:;
    /* $8DC2: 8D */ maybe_trigger_vblank(4); nes_write(0x0429, g_cpu.A);
label_8DC5:;
    /* $8DC5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E5); FLAG_NZ(g_cpu.A);
label_8DC8:;
    /* $8DC8: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8DC9:;
    /* $8DC9: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DCC:;
    /* $8DCC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8DCD:;
    /* $8DCD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_8DCF:;
    /* $8DCF: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_8DD1:;
    /* $8DD1: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_8DD4:;
    /* $8DD4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_8DD6:;
    /* $8DD6: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8DD9:;
    /* $8DD9: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8DDA:;
    /* $8DDA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8DDC:;
    /* $8DDC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8DDF:;
    /* $8DDF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8DE0:;
    /* $8DE0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_8DE3:;
    /* $8DE3: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8DE5:;
    /* $8DE5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8DE8:;
    /* $8DE8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8DE9:;
    /* $8DE9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_8DEC:;
    /* $8DEC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8DED:;
    /* $8DED: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DEF:;
    /* $8DEF: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_8DF1:;
    /* $8DF1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8DF3:;
    /* $8DF3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8DF6:;
    /* $8DF6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8DF7:;
    /* $8DF7: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DF9:;
    /* $8DF9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DF3;
    }
label_8DFB:;
    /* $8DFB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_8DFD:;
    /* $8DFD: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_8DFF:;
    /* $8DFF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_8E02:;
    /* $8E02: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8E03:;
    /* $8E03: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8E04:;
    /* $8E04: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8E05:;
    /* $8E05: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8E06:;
    /* $8E06: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8E07:;
    /* $8E07: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8E0A:;
    /* $8E0A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8E0D:;
    /* $8E0D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E0E:;
    /* $8E0E: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8E0F:;
    /* $8E0F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8E10:;
    /* $8E10: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_8E12:;
    /* $8E12: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8E13:;
    /* $8E13: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E15:;
    /* $8E15: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E07;
    }
label_8E17:;
    /* $8E17: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_8E19:;
    /* $8E19: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8E1C:;
    /* $8E1C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E1D:;
    /* $8E1D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E1F:;
    /* $8E1F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8E21:;
    /* $8E21: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8E24:;
    /* $8E24: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E25:;
    /* $8E25: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_8E28:;
    /* $8E28: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8E2A:;
    /* $8E2A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8E2D:;
    /* $8E2D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E2E:;
    /* $8E2E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_8E31:;
    /* $8E31: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8E32:;
    /* $8E32: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8E34:;
    /* $8E34: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_8E36:;
    /* $8E36: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8E38:;
    /* $8E38: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8E3B:;
    /* $8E3B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E3C:;
    /* $8E3C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E3E:;
    /* $8E3E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E38;
    }
label_8E40:;
    /* $8E40: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_8E42:;
    /* $8E42: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_8E44:;
    /* $8E44: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_8E47:;
    /* $8E47: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8E48:;
    /* $8E48: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8E49:;
    /* $8E49: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8E4A:;
    /* $8E4A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8E4B:;
    /* $8E4B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8E4C:;
    /* $8E4C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8E4D:;
    /* $8E4D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8E50:;
    /* $8E50: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8E53:;
    /* $8E53: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E54:;
    /* $8E54: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8E55:;
    /* $8E55: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8E56:;
    /* $8E56: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_8E58:;
    /* $8E58: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8E59:;
    /* $8E59: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E5B:;
    /* $8E5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E4D;
    }
label_8E5D:;
    /* $8E5D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8E5F:;
    /* $8E5F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8E62:;
    /* $8E62: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_8E65:;
    /* $8E65: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8E67:;
    /* $8E67: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_8E6A:;
    /* $8E6A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A904_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b1");
#endif
label_A904:;
    /* $A904: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A906:;
    /* $A906: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A907:;
    /* $A907: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A90A:;
    /* $A90A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90B:;
    /* $A90B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_A90D:;
    /* $A90D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A90E:;
    /* $A90E: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A910:;
    /* $A910: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A913:;
    /* $A913: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A917:;
    /* $A917: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A91C:;
    /* $A91C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A926; }
label_A91E:;
    /* $A91E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A922:;
    /* $A922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A926:;
    /* $A926: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A92B:;
    /* $A92B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A92D:;
    /* $A92D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A92F:;
    /* $A92F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A93E; }
label_A931:;
    /* $A931: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A932:;
    /* $A932: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A934:;
    /* $A934: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A936:;
    /* $A936: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A938:;
    /* $A938: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A93A:;
    /* $A93A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A93C:;
    /* $A93C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A93E:;
    /* $A93E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A943:;
    /* $A943: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_A945:;
    /* $A945: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A94B; }
label_A947:;
    /* $A947: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A94B:;
    /* $A94B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A94E:;
    /* $A94E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A950:;
    /* $A950: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_A953:;
    /* $A953: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A955:;
    /* $A955: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A956:;
    /* $A956: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x77); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A958:;
    /* $A958: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A95A:;
    /* $A95A: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A95C:;
    /* $A95C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95E:;
    /* $A95E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A965; }
label_A960:;
    /* $A960: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A962:;
    /* $A962: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA96B, 1); return;
label_A965:;
    /* $A965: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A966:;
    /* $A966: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A96A:;
    /* $A96A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A96B:;
    /* $A96B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A96C:;
    /* $A96C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A96E:;
    /* $A96E: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A970:;
    /* $A970: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A975:;
    /* $A975: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9C); FLAG_NZ(g_cpu.A);
label_A977:;
    /* $A977: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A979:;
    /* $A979: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_A97B:;
    /* $A97B: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A97D:;
    /* $A97D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA9A0, 1);
label_A980:;
    /* $A980: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A983:;
    /* $A983: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A985:;
    /* $A985: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A987:;
    /* $A987: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A988:;
    /* $A988: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A98A:;
    /* $A98A: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A98C:;
    /* $A98C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A995; }
label_A98E:;
    /* $A98E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A990:;
    /* $A990: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A992:;
    /* $A992: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA99F, 1); return;
label_A995:;
    /* $A995: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A99F; }
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A99F:;
    /* $A99F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9BC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9BC_b1");
#endif
label_A9BC:;
    /* $A9BC: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A9BE:;
    /* $A9BE: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BF:;
    /* $A9BF: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A9C1:;
    /* $A9C1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9C5, 1); return;
}

void func_A500_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A500_b1");
#endif
label_A500:;
    /* $A500: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA9 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A502:;
    /* $A502: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA502); return;
}

void func_8863_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8863_b1");
#endif
label_8863:;
    /* $8863: 7A */ maybe_trigger_vblank(2); /* NOP */
label_8864:;
    /* $8864: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8866:;
    /* $8866: 85 */ maybe_trigger_vblank(3); nes_write(0x8F, g_cpu.A);
label_8868:;
    /* $8868: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8896, 1); return;
}

void func_859A_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_859A_b1");
#endif
label_859A:;
    /* $859A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_859D:;
    /* $859D: 8D */ maybe_trigger_vblank(4); nes_write(0x03AF, g_cpu.A);
label_85A0:;
    /* $85A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_85A2:;
    /* $85A2: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_85A5:;
    /* $85A5: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A575_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A575_b1");
#endif
label_A575:;
    /* $A575: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xD9) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A577:;
    /* $A577: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A57A:;
    /* $A57A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x91A5); FLAG_NZ(g_cpu.X);
label_A57D:;
    /* $A57D: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A580:;
    /* $A580: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: 99 */ maybe_trigger_vblank(5); nes_write((0x0301 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A585:;
    /* $A585: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_A587:;
    /* $A587: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A58A:;
    /* $A58A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_A58C:;
    /* $A58C: 99 */ maybe_trigger_vblank(5); nes_write((0x0311 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A58F:;
    /* $A58F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A590:;
    /* $A590: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A591:;
    /* $A591: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A592:;
    /* $A592: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A593:;
    /* $A593: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A595:;
    /* $A595: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0529), 1); return; }
label_A597:;
    /* $A597: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0455); FLAG_NZ(g_cpu.A);
label_A59A:;
    /* $A59A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A59C:;
    /* $A59C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5A1; }
label_A59E:;
    /* $A59E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA5F1, 1); return;
label_A5A1:;
    /* $A5A1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0455); FLAG_NZ(g_cpu.A);
label_A5A4:;
    /* $A5A4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A5A6:;
    /* $A5A6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5F1; }
label_A5A8:;
    /* $A5A8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA1A8, 1);
label_A5AB:;
    /* $A5AB: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x14; g_cpu.C=(g_cpu.Y>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_A5AD:;
    /* $A5AD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A5F1; }
label_A5AF:;
    /* $A5AF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_A5B2:;
    /* $A5B2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5B3:;
    /* $A5B3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5D8; }
label_A5B5:;
    /* $A5B5: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0455); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5B8:;
    /* $A5B8: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A5C0; }
label_A5BA:;
    /* $A5BA: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0455); FLAG_NZ(g_cpu.Y);
label_A5BD:;
    /* $A5BD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA5D8, 1); return;
label_A5C0:;
    /* $A5C0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A5C3:;
    /* $A5C3: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_A5C5:;
    /* $A5C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A5C7:;
    /* $A5C7: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_A5C9:;
    /* $A5C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_A5CC:;
    /* $A5CC: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A5CE:;
    /* $A5CE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 1);
label_A5D1:;
    /* $A5D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_A5D3:;
    /* $A5D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5D4:;
    /* $A5D4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A5D5:;
    /* $A5D5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A5D8; }
label_A5D7:;
    /* $A5D7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A5D8:;
    /* $A5D8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x91); FLAG_NZ(g_cpu.A);
label_A5DA:;
    /* $A5DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5DD:;
    /* $A5DD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_A5DF:;
    /* $A5DF: 99 */ maybe_trigger_vblank(5); nes_write((0x0301 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5E2:;
    /* $A5E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x93); FLAG_NZ(g_cpu.A);
label_A5E4:;
    /* $A5E4: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5E7:;
    /* $A5E7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x94); FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0311 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5EC:;
    /* $A5EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A5EE:;
    /* $A5EE: 8D */ maybe_trigger_vblank(4); nes_write(0x0455, g_cpu.A);
label_A5F1:;
    /* $A5F1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A5F3:;
    /* $A5F3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A5F4:;
    /* $A5F4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A5F5:;
    /* $A5F5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85AC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AC_b1");
#endif
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A900_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A900_b1");
#endif
label_A900:;
    /* $A900: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A901:;
    /* $A901: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A903:;
    /* $A903: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E5); FLAG_NZ(g_cpu.A);
label_A906:;
    /* $A906: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A907:;
    /* $A907: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A90A:;
    /* $A90A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90B:;
    /* $A90B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_A90D:;
    /* $A90D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A90E:;
    /* $A90E: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A910:;
    /* $A910: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A913:;
    /* $A913: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A917:;
    /* $A917: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A91C:;
    /* $A91C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A926; }
label_A91E:;
    /* $A91E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A922:;
    /* $A922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A926:;
    /* $A926: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A92B:;
    /* $A92B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A92D:;
    /* $A92D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A92F:;
    /* $A92F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A93E; }
label_A931:;
    /* $A931: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A932:;
    /* $A932: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A934:;
    /* $A934: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A936:;
    /* $A936: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A938:;
    /* $A938: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A93A:;
    /* $A93A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A93C:;
    /* $A93C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A93E:;
    /* $A93E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A943:;
    /* $A943: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_A945:;
    /* $A945: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A94B; }
label_A947:;
    /* $A947: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A94B:;
    /* $A94B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A94E:;
    /* $A94E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A950:;
    /* $A950: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_A953:;
    /* $A953: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A955:;
    /* $A955: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A956:;
    /* $A956: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x77); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A958:;
    /* $A958: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A95A:;
    /* $A95A: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A95C:;
    /* $A95C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95E:;
    /* $A95E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A965; }
label_A960:;
    /* $A960: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A962:;
    /* $A962: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA96B, 1); return;
label_A965:;
    /* $A965: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A966:;
    /* $A966: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A96A:;
    /* $A96A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A96B:;
    /* $A96B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A96C:;
    /* $A96C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A96E:;
    /* $A96E: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A970:;
    /* $A970: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A975:;
    /* $A975: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9C); FLAG_NZ(g_cpu.A);
label_A977:;
    /* $A977: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A979:;
    /* $A979: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_A97B:;
    /* $A97B: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A97D:;
    /* $A97D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA9A0, 1);
label_A980:;
    /* $A980: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A983:;
    /* $A983: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A985:;
    /* $A985: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A987:;
    /* $A987: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A988:;
    /* $A988: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A98A:;
    /* $A98A: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A98C:;
    /* $A98C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A995; }
label_A98E:;
    /* $A98E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A990:;
    /* $A990: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A992:;
    /* $A992: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA99F, 1); return;
label_A995:;
    /* $A995: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A99F; }
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A99F:;
    /* $A99F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85B2_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85B2_b1");
#endif
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A901_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A901_b1");
#endif
label_A901:;
    /* $A901: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A903:;
    /* $A903: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E5); FLAG_NZ(g_cpu.A);
label_A906:;
    /* $A906: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A907:;
    /* $A907: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A90A:;
    /* $A90A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90B:;
    /* $A90B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_A90D:;
    /* $A90D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A90E:;
    /* $A90E: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A910:;
    /* $A910: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A913:;
    /* $A913: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A917:;
    /* $A917: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A91C:;
    /* $A91C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A926; }
label_A91E:;
    /* $A91E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A922:;
    /* $A922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A926:;
    /* $A926: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A92B:;
    /* $A92B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A92D:;
    /* $A92D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A92F:;
    /* $A92F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A93E; }
label_A931:;
    /* $A931: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A932:;
    /* $A932: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A934:;
    /* $A934: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A936:;
    /* $A936: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A938:;
    /* $A938: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A93A:;
    /* $A93A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A93C:;
    /* $A93C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A93E:;
    /* $A93E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A943:;
    /* $A943: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_A945:;
    /* $A945: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A94B; }
label_A947:;
    /* $A947: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A94B:;
    /* $A94B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A94E:;
    /* $A94E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A950:;
    /* $A950: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_A953:;
    /* $A953: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A955:;
    /* $A955: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A956:;
    /* $A956: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x77); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A958:;
    /* $A958: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A95A:;
    /* $A95A: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A95C:;
    /* $A95C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95E:;
    /* $A95E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A965; }
label_A960:;
    /* $A960: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A962:;
    /* $A962: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA96B, 1); return;
label_A965:;
    /* $A965: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A966:;
    /* $A966: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A96A:;
    /* $A96A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A96B:;
    /* $A96B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A96C:;
    /* $A96C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A96E:;
    /* $A96E: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A970:;
    /* $A970: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A975:;
    /* $A975: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9C); FLAG_NZ(g_cpu.A);
label_A977:;
    /* $A977: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A979:;
    /* $A979: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_A97B:;
    /* $A97B: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A97D:;
    /* $A97D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA9A0, 1);
label_A980:;
    /* $A980: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A983:;
    /* $A983: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A985:;
    /* $A985: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A987:;
    /* $A987: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A988:;
    /* $A988: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A98A:;
    /* $A98A: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A98C:;
    /* $A98C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A995; }
label_A98E:;
    /* $A98E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A990:;
    /* $A990: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A992:;
    /* $A992: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA99F, 1); return;
label_A995:;
    /* $A995: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A99F; }
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A99F:;
    /* $A99F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8548_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8548_b1");
#endif
label_8548:;
    /* $8548: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85B4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85B4_b1");
#endif
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8559_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8559_b1");
#endif
label_8559:;
    /* $8559: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x04 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_855B:;
    /* $855B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_855D:;
    /* $855D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D2; }
label_855F:;
    /* $855F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_8561:;
    /* $8561: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8569; }
label_8563:;
    /* $8563: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8496, 1);
label_8566:;
    /* $8566: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x85D2, 1); return;
label_8569:;
    /* $8569: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00C, 1);
label_856C:;
    /* $856C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_856E:;
    /* $856E: 8D */ maybe_trigger_vblank(4); nes_write(0x03A1, g_cpu.A);
label_8571:;
    /* $8571: 8D */ maybe_trigger_vblank(4); nes_write(0x03A4, g_cpu.A);
label_8574:;
    /* $8574: 8D */ maybe_trigger_vblank(4); nes_write(0x03A5, g_cpu.A);
label_8577:;
    /* $8577: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_857A:;
    /* $857A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_857C:;
    /* $857C: 8D */ maybe_trigger_vblank(4); nes_write(0x03A8, g_cpu.A);
label_857F:;
    /* $857F: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_8582:;
    /* $8582: 8D */ maybe_trigger_vblank(4); nes_write(0x03AD, g_cpu.A);
label_8585:;
    /* $8585: 8D */ maybe_trigger_vblank(4); nes_write(0x03B0, g_cpu.A);
label_8588:;
    /* $8588: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_858A:;
    /* $858A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_858D:;
    /* $858D: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8590:;
    /* $8590: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_8592:;
    /* $8592: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_8595:;
    /* $8595: 8D */ maybe_trigger_vblank(4); nes_write(0x03AE, g_cpu.A);
label_8598:;
    /* $8598: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_859A:;
    /* $859A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_859D:;
    /* $859D: 8D */ maybe_trigger_vblank(4); nes_write(0x03AF, g_cpu.A);
label_85A0:;
    /* $85A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_85A2:;
    /* $85A2: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_85A5:;
    /* $85A5: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85A2_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A2_b1");
#endif
label_85A2:;
    /* $85A2: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_85A5:;
    /* $85A5: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85FB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85FB_b1");
#endif
label_85FB:;
    /* $85FB: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC01B, 1);
label_85FE:;
    /* $85FE: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_8601:;
    /* $8601: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_8606:;
    /* $8606: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_864C; }
label_8608:;
    /* $8608: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_860A:;
    /* $860A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8628; }
label_860C:;
    /* $860C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_860E:;
    /* $860E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8611:;
    /* $8611: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8612:;
    /* $8612: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8614:;
    /* $8614: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8617:;
    /* $8617: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8618:;
    /* $8618: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_861A:;
    /* $861A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_861D:;
    /* $861D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_861E:;
    /* $861E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8620:;
    /* $8620: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8623:;
    /* $8623: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8624:;
    /* $8624: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8627:;
    /* $8627: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8628:;
    /* $8628: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_862A:;
    /* $862A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_862D:;
    /* $862D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_862E:;
    /* $862E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8630:;
    /* $8630: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8632:;
    /* $8632: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8635:;
    /* $8635: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8636:;
    /* $8636: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_8638:;
    /* $8638: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_863B:;
    /* $863B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_863C:;
    /* $863C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_863E:;
    /* $863E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8641:;
    /* $8641: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8642:;
    /* $8642: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8645:;
    /* $8645: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8646:;
    /* $8646: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8649:;
    /* $8649: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_864C:;
    /* $864C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_864D:;
    /* $864D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_864E:;
    /* $864E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8520_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8520_b1");
#endif
label_8520:;
    /* $8520: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_8523:;
    /* $8523: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_8526:;
    /* $8526: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_8529:;
    /* $8529: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_852B:;
    /* $852B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_852D:;
    /* $852D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_852F:;
    /* $852F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8531:;
    /* $8531: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8533:;
    /* $8533: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8535:;
    /* $8535: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8537:;
    /* $8537: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_853A:;
    /* $853A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_853B:;
    /* $853B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853E:;
    /* $853E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853F:;
    /* $853F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8542:;
    /* $8542: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8545:;
    /* $8545: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8546:;
    /* $8546: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8548:;
    /* $8548: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85B6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85B6_b1");
#endif
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8561_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8561_b1");
#endif
label_8561:;
    /* $8561: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8569; }
label_8563:;
    /* $8563: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8496, 1);
label_8566:;
    /* $8566: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x85D2, 1); return;
label_8569:;
    /* $8569: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00C, 1);
label_856C:;
    /* $856C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_856E:;
    /* $856E: 8D */ maybe_trigger_vblank(4); nes_write(0x03A1, g_cpu.A);
label_8571:;
    /* $8571: 8D */ maybe_trigger_vblank(4); nes_write(0x03A4, g_cpu.A);
label_8574:;
    /* $8574: 8D */ maybe_trigger_vblank(4); nes_write(0x03A5, g_cpu.A);
label_8577:;
    /* $8577: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_857A:;
    /* $857A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_857C:;
    /* $857C: 8D */ maybe_trigger_vblank(4); nes_write(0x03A8, g_cpu.A);
label_857F:;
    /* $857F: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_8582:;
    /* $8582: 8D */ maybe_trigger_vblank(4); nes_write(0x03AD, g_cpu.A);
label_8585:;
    /* $8585: 8D */ maybe_trigger_vblank(4); nes_write(0x03B0, g_cpu.A);
label_8588:;
    /* $8588: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_858A:;
    /* $858A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_858D:;
    /* $858D: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8590:;
    /* $8590: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_8592:;
    /* $8592: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_8595:;
    /* $8595: 8D */ maybe_trigger_vblank(4); nes_write(0x03AE, g_cpu.A);
label_8598:;
    /* $8598: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_859A:;
    /* $859A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_859D:;
    /* $859D: 8D */ maybe_trigger_vblank(4); nes_write(0x03AF, g_cpu.A);
label_85A0:;
    /* $85A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_85A2:;
    /* $85A2: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_85A5:;
    /* $85A5: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85AD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AD_b1");
#endif
label_85AD:;
    /* $85AD: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_85AF:;
    /* $85AF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85AF); return;
}

void func_85AA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AA_b1");
#endif
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85AB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AB_b1");
#endif
label_85AB:;
    /* $85AB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_85AD:;
    /* $85AD: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_85AF:;
    /* $85AF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85AF); return;
}

void func_A9AE_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9AE_b1");
#endif
label_A9AE:;
    /* $A9AE: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B0:;
    /* $A9B0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A9B2:;
    /* $A9B2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A9B3:;
    /* $A9B3: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x97); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9B5:;
    /* $A9B5: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A9B6:;
    /* $A9B6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A9B8:;
    /* $A9B8: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x98); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9BA:;
    /* $A9BA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A9C4; }
label_A9BC:;
    /* $A9BC: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A9BE:;
    /* $A9BE: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BF:;
    /* $A9BF: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A9C1:;
    /* $A9C1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9C5, 1); return;
label_A9C4:;
    /* $A9C4: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9C5:;
    /* $A9C5: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A9C6:;
    /* $A9C6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x09A8), 1); return; }
label_A9C8:;
    /* $A9C8: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x9A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CA:;
    /* $A9CA: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x99; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CC:;
    /* $A9CC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C85_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C85_b1");
#endif
label_9C85:;
    /* $9C85: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9C87:;
    /* $9C87: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x15); FLAG_NZ(g_cpu.A);
label_9C89:;
    /* $9C89: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_9C8B:;
    /* $9C8B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C8E:;
    /* $9C8E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9C8F:;
    /* $9C8F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9C91:;
    /* $9C91: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C94:;
    /* $9C94: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9C95:;
    /* $9C95: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C97:;
    /* $9C97: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C91;
    }
label_9C99:;
    /* $9C99: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C9C:;
    /* $9C9C: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_9C9F:;
    /* $9C9F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A90B_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A90B_b1");
#endif
label_A90B:;
    /* $A90B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_A90D:;
    /* $A90D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A90E:;
    /* $A90E: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A910:;
    /* $A910: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A913:;
    /* $A913: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A917:;
    /* $A917: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A91C:;
    /* $A91C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A926; }
label_A91E:;
    /* $A91E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A922:;
    /* $A922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A926:;
    /* $A926: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A92B:;
    /* $A92B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A92D:;
    /* $A92D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A92F:;
    /* $A92F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A93E; }
label_A931:;
    /* $A931: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A932:;
    /* $A932: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A934:;
    /* $A934: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A936:;
    /* $A936: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A938:;
    /* $A938: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A93A:;
    /* $A93A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A93C:;
    /* $A93C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A93E:;
    /* $A93E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A943:;
    /* $A943: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_A945:;
    /* $A945: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A94B; }
label_A947:;
    /* $A947: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A94B:;
    /* $A94B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A94E:;
    /* $A94E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A950:;
    /* $A950: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_A953:;
    /* $A953: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A955:;
    /* $A955: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A956:;
    /* $A956: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x77); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A958:;
    /* $A958: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A95A:;
    /* $A95A: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A95C:;
    /* $A95C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95E:;
    /* $A95E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A965; }
label_A960:;
    /* $A960: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A962:;
    /* $A962: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA96B, 1); return;
label_A965:;
    /* $A965: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A966:;
    /* $A966: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A96A:;
    /* $A96A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A96B:;
    /* $A96B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A96C:;
    /* $A96C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A96E:;
    /* $A96E: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A970:;
    /* $A970: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A975:;
    /* $A975: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9C); FLAG_NZ(g_cpu.A);
label_A977:;
    /* $A977: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A979:;
    /* $A979: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_A97B:;
    /* $A97B: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A97D:;
    /* $A97D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA9A0, 1);
label_A980:;
    /* $A980: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A983:;
    /* $A983: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A985:;
    /* $A985: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A987:;
    /* $A987: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A988:;
    /* $A988: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A98A:;
    /* $A98A: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A98C:;
    /* $A98C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A995; }
label_A98E:;
    /* $A98E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A990:;
    /* $A990: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A992:;
    /* $A992: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA99F, 1); return;
label_A995:;
    /* $A995: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A99F; }
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A99F:;
    /* $A99F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85E9_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85E9_b1");
#endif
label_85E9:;
    /* $85E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0323 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_85EC:;
    /* $85EC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85EE:;
    /* $85EE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85F1:;
    /* $85F1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85F2:;
    /* $85F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85F4:;
    /* $85F4: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_85F6:;
    /* $85F6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85F9:;
    /* $85F9: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_85FB:;
    /* $85FB: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC01B, 1);
label_85FE:;
    /* $85FE: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_8601:;
    /* $8601: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_8606:;
    /* $8606: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_864C; }
label_8608:;
    /* $8608: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_860A:;
    /* $860A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8628; }
label_860C:;
    /* $860C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_860E:;
    /* $860E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8611:;
    /* $8611: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8612:;
    /* $8612: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8614:;
    /* $8614: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8617:;
    /* $8617: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8618:;
    /* $8618: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_861A:;
    /* $861A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_861D:;
    /* $861D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_861E:;
    /* $861E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8620:;
    /* $8620: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8623:;
    /* $8623: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8624:;
    /* $8624: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8627:;
    /* $8627: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8628:;
    /* $8628: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_862A:;
    /* $862A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_862D:;
    /* $862D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_862E:;
    /* $862E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8630:;
    /* $8630: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8632:;
    /* $8632: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8635:;
    /* $8635: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8636:;
    /* $8636: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_8638:;
    /* $8638: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_863B:;
    /* $863B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_863C:;
    /* $863C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_863E:;
    /* $863E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8641:;
    /* $8641: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8642:;
    /* $8642: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8645:;
    /* $8645: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8646:;
    /* $8646: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8649:;
    /* $8649: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_864C:;
    /* $864C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_864D:;
    /* $864D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_864E:;
    /* $864E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85D3_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85D3_b1");
#endif
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8509_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8509_b1");
#endif
label_8509:;
    /* $8509: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_850C:;
    /* $850C: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_850F:;
    /* $850F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8511:;
    /* $8511: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8519:;
    /* $8519: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_851B:;
    /* $851B: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_851E:;
    /* $851E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8520:;
    /* $8520: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_8523:;
    /* $8523: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_8526:;
    /* $8526: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_8529:;
    /* $8529: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_852B:;
    /* $852B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_852D:;
    /* $852D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_852F:;
    /* $852F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8531:;
    /* $8531: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8533:;
    /* $8533: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8535:;
    /* $8535: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8537:;
    /* $8537: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_853A:;
    /* $853A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_853B:;
    /* $853B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853E:;
    /* $853E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853F:;
    /* $853F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8542:;
    /* $8542: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8545:;
    /* $8545: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8546:;
    /* $8546: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8548:;
    /* $8548: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85D4_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85D4_b1");
#endif
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8549_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8549_b1");
#endif
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8569_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8569_b1");
#endif
label_8569:;
    /* $8569: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00C, 1);
label_856C:;
    /* $856C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_856E:;
    /* $856E: 8D */ maybe_trigger_vblank(4); nes_write(0x03A1, g_cpu.A);
label_8571:;
    /* $8571: 8D */ maybe_trigger_vblank(4); nes_write(0x03A4, g_cpu.A);
label_8574:;
    /* $8574: 8D */ maybe_trigger_vblank(4); nes_write(0x03A5, g_cpu.A);
label_8577:;
    /* $8577: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_857A:;
    /* $857A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_857C:;
    /* $857C: 8D */ maybe_trigger_vblank(4); nes_write(0x03A8, g_cpu.A);
label_857F:;
    /* $857F: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_8582:;
    /* $8582: 8D */ maybe_trigger_vblank(4); nes_write(0x03AD, g_cpu.A);
label_8585:;
    /* $8585: 8D */ maybe_trigger_vblank(4); nes_write(0x03B0, g_cpu.A);
label_8588:;
    /* $8588: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_858A:;
    /* $858A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_858D:;
    /* $858D: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8590:;
    /* $8590: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_8592:;
    /* $8592: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_8595:;
    /* $8595: 8D */ maybe_trigger_vblank(4); nes_write(0x03AE, g_cpu.A);
label_8598:;
    /* $8598: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_859A:;
    /* $859A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_859D:;
    /* $859D: 8D */ maybe_trigger_vblank(4); nes_write(0x03AF, g_cpu.A);
label_85A0:;
    /* $85A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_85A2:;
    /* $85A2: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_85A5:;
    /* $85A5: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_853C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_853C_b1");
#endif
label_853C:;
    /* $853C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853D:;
    /* $853D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853E:;
    /* $853E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853F:;
    /* $853F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8542:;
    /* $8542: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8545:;
    /* $8545: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8546:;
    /* $8546: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8548:;
    /* $8548: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B04A_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B04A_b1");
#endif
label_B04A:;
    /* $B04A: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_B04C:;
    /* $B04C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_B04E:;
    /* $B04E: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_B050:;
    /* $B050: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05B9); FLAG_NZ(g_cpu.A);
label_B053:;
    /* $B053: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_B055:;
    /* $B055: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_B058:;
    /* $B058: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8598_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8598_b1");
#endif
label_8598:;
    /* $8598: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_859A:;
    /* $859A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_859D:;
    /* $859D: 8D */ maybe_trigger_vblank(4); nes_write(0x03AF, g_cpu.A);
label_85A0:;
    /* $85A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_85A2:;
    /* $85A2: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_85A5:;
    /* $85A5: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_852C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_852C_b1");
#endif
label_852C:;
    /* $852C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_852E:;
    /* $852E: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8530:;
    /* $8530: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8530); return;
}

void func_85E6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85E6_b1");
#endif
label_85E6:;
    /* $85E6: 99 */ maybe_trigger_vblank(5); nes_write((0x0322 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_85E9:;
    /* $85E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0323 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_85EC:;
    /* $85EC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85EE:;
    /* $85EE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85F1:;
    /* $85F1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85F2:;
    /* $85F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85F4:;
    /* $85F4: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_85F6:;
    /* $85F6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85F9:;
    /* $85F9: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_85FB:;
    /* $85FB: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC01B, 1);
label_85FE:;
    /* $85FE: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_8601:;
    /* $8601: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_8606:;
    /* $8606: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_864C; }
label_8608:;
    /* $8608: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_860A:;
    /* $860A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8628; }
label_860C:;
    /* $860C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_860E:;
    /* $860E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8611:;
    /* $8611: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8612:;
    /* $8612: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8614:;
    /* $8614: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8617:;
    /* $8617: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8618:;
    /* $8618: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_861A:;
    /* $861A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_861D:;
    /* $861D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_861E:;
    /* $861E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8620:;
    /* $8620: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8623:;
    /* $8623: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8624:;
    /* $8624: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8627:;
    /* $8627: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8628:;
    /* $8628: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_862A:;
    /* $862A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_862D:;
    /* $862D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_862E:;
    /* $862E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8630:;
    /* $8630: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8632:;
    /* $8632: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8635:;
    /* $8635: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8636:;
    /* $8636: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_8638:;
    /* $8638: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_863B:;
    /* $863B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_863C:;
    /* $863C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_863E:;
    /* $863E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8641:;
    /* $8641: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8642:;
    /* $8642: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8645:;
    /* $8645: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8646:;
    /* $8646: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8649:;
    /* $8649: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_864C:;
    /* $864C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_864D:;
    /* $864D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_864E:;
    /* $864E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_850C_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_850C_b1");
#endif
label_850C:;
    /* $850C: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_850F:;
    /* $850F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8511:;
    /* $8511: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8519:;
    /* $8519: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_851B:;
    /* $851B: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_851E:;
    /* $851E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8520:;
    /* $8520: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_8523:;
    /* $8523: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_8526:;
    /* $8526: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_8529:;
    /* $8529: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_852B:;
    /* $852B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_852D:;
    /* $852D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_852F:;
    /* $852F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8531:;
    /* $8531: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8533:;
    /* $8533: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8535:;
    /* $8535: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8537:;
    /* $8537: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_853A:;
    /* $853A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_853B:;
    /* $853B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853E:;
    /* $853E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853F:;
    /* $853F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8542:;
    /* $8542: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8545:;
    /* $8545: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8546:;
    /* $8546: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8548:;
    /* $8548: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B11F_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B11F_b1");
#endif
label_B11F:;
    /* $B11F: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x60 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B121:;
    /* $B121: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_B124:;
    /* $B124: 8D */ maybe_trigger_vblank(4); nes_write(0x0404, g_cpu.A);
label_B127:;
    /* $B127: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x90CA, 1);
label_B12A:;
    /* $B12A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x64); FLAG_NZ(g_cpu.A);
label_B12C:;
    /* $B12C: 8D */ maybe_trigger_vblank(4); nes_write(0x03E8, g_cpu.A);
label_B12F:;
    /* $B12F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x93C4, 1);
label_B132:;
    /* $B132: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B134:;
    /* $B134: 85 */ maybe_trigger_vblank(3); nes_write(0x63, g_cpu.A);
label_B136:;
    /* $B136: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_B138:;
    /* $B138: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B13A:;
    /* $B13A: 8D */ maybe_trigger_vblank(4); nes_write(0x047F, g_cpu.A);
label_B13D:;
    /* $B13D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E5); FLAG_NZ(g_cpu.A);
label_B140:;
    /* $B140: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B143:;
    /* $B143: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B155; }
label_B145:;
    /* $B145: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_B147:;
    /* $B147: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_B14A:;
    /* $B14A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B14C:;
    /* $B14C: 8D */ maybe_trigger_vblank(4); nes_write(0x0404, g_cpu.A);
label_B14F:;
    /* $B14F: 8D */ maybe_trigger_vblank(4); nes_write(0x0405, g_cpu.A);
label_B152:;
    /* $B152: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB162, 1); return;
label_B155:;
    /* $B155: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B157:;
    /* $B157: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_B15A:;
    /* $B15A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9CEA, 1);
label_B15D:;
    /* $B15D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_B15F:;
    /* $B15F: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_B162:;
    /* $B162: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8504_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8504_b1");
#endif
label_8504:;
    /* $8504: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8506:;
    /* $8506: 8D */ maybe_trigger_vblank(4); nes_write(0x03A8, g_cpu.A);
label_8509:;
    /* $8509: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_850C:;
    /* $850C: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_850F:;
    /* $850F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8511:;
    /* $8511: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8519:;
    /* $8519: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_851B:;
    /* $851B: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_851E:;
    /* $851E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8520:;
    /* $8520: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_8523:;
    /* $8523: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_8526:;
    /* $8526: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_8529:;
    /* $8529: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_852B:;
    /* $852B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_852D:;
    /* $852D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_852F:;
    /* $852F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8531:;
    /* $8531: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8533:;
    /* $8533: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8535:;
    /* $8535: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8537:;
    /* $8537: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_853A:;
    /* $853A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_853B:;
    /* $853B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853E:;
    /* $853E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853F:;
    /* $853F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8542:;
    /* $8542: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8545:;
    /* $8545: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8546:;
    /* $8546: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8548:;
    /* $8548: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85A6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A6_b1");
#endif
label_85A6:;
    /* $85A6: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x03; FLAG_NZ(g_cpu.A);
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9A7_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9A7_b1");
#endif
label_A9A7:;
    /* $A9A7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A9CF; }
label_A9A9:;
    /* $A9A9: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A9AA:;
    /* $A9AA: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x99; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AC:;
    /* $A9AC: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AE:;
    /* $A9AE: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B0:;
    /* $A9B0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A9B2:;
    /* $A9B2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A9B3:;
    /* $A9B3: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x97); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9B5:;
    /* $A9B5: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A9B6:;
    /* $A9B6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A9B8:;
    /* $A9B8: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x98); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9BA:;
    /* $A9BA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A9C4; }
label_A9BC:;
    /* $A9BC: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A9BE:;
    /* $A9BE: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BF:;
    /* $A9BF: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A9C1:;
    /* $A9C1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9C5, 1); return;
label_A9C4:;
    /* $A9C4: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9C5:;
    /* $A9C5: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A9C6:;
    /* $A9C6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x09A8), 1); return; }
label_A9C8:;
    /* $A9C8: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x9A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CA:;
    /* $A9CA: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x99; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CC:;
    /* $A9CC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A9CD:;
    /* $A9CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CD); return;
label_A9CE:;
    /* $A9CE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CE); return;
label_A9CF:;
    /* $A9CF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CF); return;
}

void func_8582_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8582_b1");
#endif
label_8582:;
    /* $8582: 8D */ maybe_trigger_vblank(4); nes_write(0x03AD, g_cpu.A);
label_8585:;
    /* $8585: 8D */ maybe_trigger_vblank(4); nes_write(0x03B0, g_cpu.A);
label_8588:;
    /* $8588: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_858A:;
    /* $858A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_858D:;
    /* $858D: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8590:;
    /* $8590: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_8592:;
    /* $8592: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_8595:;
    /* $8595: 8D */ maybe_trigger_vblank(4); nes_write(0x03AE, g_cpu.A);
label_8598:;
    /* $8598: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_859A:;
    /* $859A: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_859D:;
    /* $859D: 8D */ maybe_trigger_vblank(4); nes_write(0x03AF, g_cpu.A);
label_85A0:;
    /* $85A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_85A2:;
    /* $85A2: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_85A5:;
    /* $85A5: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85A8_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A8_b1");
#endif
label_85A8:;
    /* $85A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85AC:;
    /* $85AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85B0:;
    /* $85B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85B2:;
    /* $85B2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85B4:;
    /* $85B4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B9:;
    /* $85B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85BA:;
    /* $85BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9A9_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9A9_b1");
#endif
label_A9A9:;
    /* $A9A9: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A9AA:;
    /* $A9AA: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x99; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AC:;
    /* $A9AC: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AE:;
    /* $A9AE: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B0:;
    /* $A9B0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A9B2:;
    /* $A9B2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A9B3:;
    /* $A9B3: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x97); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9B5:;
    /* $A9B5: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A9B6:;
    /* $A9B6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A9B8:;
    /* $A9B8: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x98); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9BA:;
    /* $A9BA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A9C4; }
label_A9BC:;
    /* $A9BC: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A9BE:;
    /* $A9BE: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BF:;
    /* $A9BF: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A9C1:;
    /* $A9C1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9C5, 1); return;
label_A9C4:;
    /* $A9C4: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9C5:;
    /* $A9C5: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A9C6:;
    /* $A9C6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x09A8), 1); return; }
label_A9C8:;
    /* $A9C8: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x9A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CA:;
    /* $A9CA: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x99; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CC:;
    /* $A9CC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85BC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85BC_b1");
#endif
label_85BC:;
    /* $85BC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BD:;
    /* $85BD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85BF:;
    /* $85BF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85C1:;
    /* $85C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C5:;
    /* $85C5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:;
    /* $85C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_85C8:;
    /* $85C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85CA:;
    /* $85CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CB:;
    /* $85CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_85CD:;
    /* $85CD: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85CF:;
    /* $85CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_85D2:;
    /* $85D2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85D3:;
    /* $85D3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85D4:;
    /* $85D4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9B9_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B9_b1");
#endif
label_A9B9:;
    /* $A9B9: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A9C4; }
label_A9BC:;
    /* $A9BC: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A9BE:;
    /* $A9BE: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BF:;
    /* $A9BF: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A9C1:;
    /* $A9C1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9C5, 1); return;
label_A9C4:;
    /* $A9C4: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9C5:;
    /* $A9C5: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A9C6:;
    /* $A9C6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x09A8), 1); return; }
label_A9C8:;
    /* $A9C8: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x9A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CA:;
    /* $A9CA: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x99; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CC:;
    /* $A9CC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8501_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8501_b1");
#endif
label_8501:;
    /* $8501: 8D */ maybe_trigger_vblank(4); nes_write(0x03A5, g_cpu.A);
label_8504:;
    /* $8504: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8506:;
    /* $8506: 8D */ maybe_trigger_vblank(4); nes_write(0x03A8, g_cpu.A);
label_8509:;
    /* $8509: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_850C:;
    /* $850C: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_850F:;
    /* $850F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8511:;
    /* $8511: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8519:;
    /* $8519: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_851B:;
    /* $851B: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_851E:;
    /* $851E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8520:;
    /* $8520: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_8523:;
    /* $8523: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_8526:;
    /* $8526: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_8529:;
    /* $8529: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_852B:;
    /* $852B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_852D:;
    /* $852D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_852F:;
    /* $852F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8531:;
    /* $8531: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8533:;
    /* $8533: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8535:;
    /* $8535: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8537:;
    /* $8537: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_853A:;
    /* $853A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_853B:;
    /* $853B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853E:;
    /* $853E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853F:;
    /* $853F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8542:;
    /* $8542: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8545:;
    /* $8545: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8546:;
    /* $8546: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8548:;
    /* $8548: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9BA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9BA_b1");
#endif
label_A9BA:;
    /* $A9BA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A9C4; }
label_A9BC:;
    /* $A9BC: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A9BE:;
    /* $A9BE: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BF:;
    /* $A9BF: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A9C1:;
    /* $A9C1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9C5, 1); return;
label_A9C4:;
    /* $A9C4: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9C5:;
    /* $A9C5: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A9C6:;
    /* $A9C6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x09A8), 1); return; }
label_A9C8:;
    /* $A9C8: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x9A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CA:;
    /* $A9CA: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x99; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CC:;
    /* $A9CC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9BB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9BB_b1");
#endif
label_A9BB:;
    /* $A9BB: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A9BC:;
    /* $A9BC: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A9BE:;
    /* $A9BE: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BF:;
    /* $A9BF: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A9C1:;
    /* $A9C1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9C5, 1); return;
}

void func_8505_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8505_b1");
#endif
label_8505:;
    /* $8505: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8506:;
    /* $8506: 8D */ maybe_trigger_vblank(4); nes_write(0x03A8, g_cpu.A);
label_8509:;
    /* $8509: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_850C:;
    /* $850C: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_850F:;
    /* $850F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8511:;
    /* $8511: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8519:;
    /* $8519: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_851B:;
    /* $851B: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_851E:;
    /* $851E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8520:;
    /* $8520: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_8523:;
    /* $8523: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_8526:;
    /* $8526: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_8529:;
    /* $8529: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_852B:;
    /* $852B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_852D:;
    /* $852D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_852F:;
    /* $852F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8531:;
    /* $8531: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8533:;
    /* $8533: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8535:;
    /* $8535: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8537:;
    /* $8537: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_853A:;
    /* $853A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_853B:;
    /* $853B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853E:;
    /* $853E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_853F:;
    /* $853F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8542:;
    /* $8542: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_8545:;
    /* $8545: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8546:;
    /* $8546: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8548:;
    /* $8548: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8549:;
    /* $8549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854D:;
    /* $854D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_854E:;
    /* $854E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8550:;
    /* $8550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 1);
label_8553:;
    /* $8553: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8554:;
    /* $8554: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8555:;
    /* $8555: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A986_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A986_b1");
#endif
label_A986:;
    /* $A986: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A988:;
    /* $A988: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A98A:;
    /* $A98A: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A98C:;
    /* $A98C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A995; }
label_A98E:;
    /* $A98E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A990:;
    /* $A990: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A992:;
    /* $A992: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA99F, 1); return;
label_A995:;
    /* $A995: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A99F; }
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A99F:;
    /* $A99F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D08_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D08_b1");
#endif
label_8D08:;
    /* $8D08: 8D */ maybe_trigger_vblank(4); nes_write(0x8D17, g_cpu.A);
label_8D0B:;
    /* $8D0B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8D0C:;
    /* $8D0C: 8D */ maybe_trigger_vblank(4); nes_write(0x8D19, g_cpu.A);
label_8D0F:;
    /* $8D0F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x608D, -1);
label_8D12:;
    /* $8D12: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8C54, 1);
label_8D15:;
    /* $8D15: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A903_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A903_b1");
#endif
label_A903:;
    /* $A903: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E5); FLAG_NZ(g_cpu.A);
label_A906:;
    /* $A906: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A907:;
    /* $A907: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A90A:;
    /* $A90A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90B:;
    /* $A90B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_A90D:;
    /* $A90D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A90E:;
    /* $A90E: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A910:;
    /* $A910: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A913:;
    /* $A913: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A917:;
    /* $A917: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A91C:;
    /* $A91C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A926; }
label_A91E:;
    /* $A91E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A922:;
    /* $A922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A926:;
    /* $A926: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A92B:;
    /* $A92B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A92D:;
    /* $A92D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A92F:;
    /* $A92F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A93E; }
label_A931:;
    /* $A931: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A932:;
    /* $A932: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A934:;
    /* $A934: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A936:;
    /* $A936: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A938:;
    /* $A938: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A93E; }
label_A93A:;
    /* $A93A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A93C:;
    /* $A93C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A93E:;
    /* $A93E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A943:;
    /* $A943: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_A945:;
    /* $A945: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A94B; }
label_A947:;
    /* $A947: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A94B:;
    /* $A94B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A94E:;
    /* $A94E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A950:;
    /* $A950: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_A953:;
    /* $A953: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A955:;
    /* $A955: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A956:;
    /* $A956: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x77); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A958:;
    /* $A958: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A95A:;
    /* $A95A: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A95C:;
    /* $A95C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A95E:;
    /* $A95E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A965; }
label_A960:;
    /* $A960: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A962:;
    /* $A962: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA96B, 1); return;
label_A965:;
    /* $A965: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A966:;
    /* $A966: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_A96A:;
    /* $A96A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A96B:;
    /* $A96B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A96C:;
    /* $A96C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x78); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A96E:;
    /* $A96E: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A970:;
    /* $A970: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC02A, 1);
label_A975:;
    /* $A975: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9C); FLAG_NZ(g_cpu.A);
label_A977:;
    /* $A977: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_A979:;
    /* $A979: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_A97B:;
    /* $A97B: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A97D:;
    /* $A97D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA9A0, 1);
label_A980:;
    /* $A980: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_A982:;
    /* $A982: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A983:;
    /* $A983: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x9E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A985:;
    /* $A985: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x76); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A987:;
    /* $A987: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A988:;
    /* $A988: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A98A:;
    /* $A98A: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A98C:;
    /* $A98C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A995; }
label_A98E:;
    /* $A98E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A990:;
    /* $A990: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A992:;
    /* $A992: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA99F, 1); return;
label_A995:;
    /* $A995: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A99F; }
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A99F:;
    /* $A99F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D0E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D0E_b1");
#endif
label_8D0E:;
    /* $8D0E: 8D */ maybe_trigger_vblank(4); nes_write(0x8D20, g_cpu.A);
label_8D11:;
    /* $8D11: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8600_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8600_b1");
#endif
label_8600:;
    /* $8600: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xAD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8602:;
    /* $8602: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x04 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_8606:;
    /* $8606: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_864C; }
label_8608:;
    /* $8608: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_860A:;
    /* $860A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8628; }
label_860C:;
    /* $860C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_860E:;
    /* $860E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8611:;
    /* $8611: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8612:;
    /* $8612: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8614:;
    /* $8614: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8617:;
    /* $8617: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8618:;
    /* $8618: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_861A:;
    /* $861A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_861D:;
    /* $861D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_861E:;
    /* $861E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8620:;
    /* $8620: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8623:;
    /* $8623: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8624:;
    /* $8624: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8627:;
    /* $8627: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8628:;
    /* $8628: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_862A:;
    /* $862A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_862D:;
    /* $862D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_862E:;
    /* $862E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8630:;
    /* $8630: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8632:;
    /* $8632: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8635:;
    /* $8635: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8636:;
    /* $8636: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_8638:;
    /* $8638: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_863B:;
    /* $863B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_863C:;
    /* $863C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_863E:;
    /* $863E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8641:;
    /* $8641: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8642:;
    /* $8642: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8645:;
    /* $8645: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8646:;
    /* $8646: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8649:;
    /* $8649: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_864C:;
    /* $864C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_864D:;
    /* $864D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_864E:;
    /* $864E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8401_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8401_b1");
#endif
label_8401:;
    /* $8401: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xAD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8403:;
    /* $8403: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8405:;
    /* $8405: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8407:;
    /* $8407: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8456; }
label_8409:;
    /* $8409: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_840B:;
    /* $840B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8429; }
label_840D:;
    /* $840D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_840F:;
    /* $840F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8412:;
    /* $8412: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8413:;
    /* $8413: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8415:;
    /* $8415: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8418:;
    /* $8418: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8419:;
    /* $8419: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_841B:;
    /* $841B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_841E:;
    /* $841E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_841F:;
    /* $841F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8421:;
    /* $8421: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8424:;
    /* $8424: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8425:;
    /* $8425: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8428:;
    /* $8428: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8429:;
    /* $8429: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_842B:;
    /* $842B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_842C:;
    /* $842C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_842E:;
    /* $842E: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_8430:;
    /* $8430: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8434; }
label_8432:;
    /* $8432: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8434:;
    /* $8434: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_8436:;
    /* $8436: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8439:;
    /* $8439: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_843A:;
    /* $843A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_843C:;
    /* $843C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_843F:;
    /* $843F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8440:;
    /* $8440: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8442:;
    /* $8442: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8445:;
    /* $8445: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8446:;
    /* $8446: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8448:;
    /* $8448: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_844B:;
    /* $844B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_844C:;
    /* $844C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_844F:;
    /* $844F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8450:;
    /* $8450: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8453:;
    /* $8453: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_8456:;
    /* $8456: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8457:;
    /* $8457: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8458:;
    /* $8458: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD02_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD02_b1");
#endif
label_AD02:;
    /* $AD02: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD05:;
    /* $AD05: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD06:;
    /* $AD06: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD09:;
    /* $AD09: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AD0C:;
    /* $AD0C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_90C8_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90C8_b1");
#endif
label_90C8:;
    /* $90C8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x60 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_90CA:;
    /* $90CA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x63); FLAG_NZ(g_cpu.Y);
label_90CC:;
    /* $90CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90CF:;
    /* $90CF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_90D0:;
    /* $90D0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_90D1:;
    /* $90D1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x031C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90D4:;
    /* $90D4: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90D7:;
    /* $90D7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x031D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90DA:;
    /* $90DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0321 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90DD:;
    /* $90DD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x031E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90E0:;
    /* $90E0: 99 */ maybe_trigger_vblank(5); nes_write((0x0322 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90E3:;
    /* $90E3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x031F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90E6:;
    /* $90E6: 99 */ maybe_trigger_vblank(5); nes_write((0x0323 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90E9:;
    /* $90E9: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_90EA:;
    /* $90EA: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_90EB:;
    /* $90EB: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_90EC:;
    /* $90EC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_90ED:;
    /* $90ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_90D1;
    }
label_90EF:;
    /* $90EF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B0C8_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0C8_b1");
#endif
label_B0C8:;
    /* $B0C8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B0CA:;
    /* $B0CA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B0CB:;
    /* $B0CB: 85 */ maybe_trigger_vblank(3); nes_write(0xB6, g_cpu.A);
label_B0CD:;
    /* $B0CD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

