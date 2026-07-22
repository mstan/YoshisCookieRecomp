/* yoshis-cookie_full_bank03_part03.c — PRG bank 3 function bodies (sub-part 3).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella yoshis-cookie_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "yoshis-cookie_full_decls.h"

void func_8C2A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C2A_b3");
#endif
label_8C2A:;
    /* $8C2A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8C2C:;
    /* $8C2C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8C2F:;
    /* $8C2F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B022_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B035;
    }
label_B022:;
    /* $B022: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB00A, 3);
label_B025:;
    /* $B025: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0491); FLAG_NZ(g_cpu.A);
label_B028:;
    /* $B028: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $F573: 5 entries (bank=3) */
switch(g_cpu.A) {
  case 0: nes_write(0x0000, 0x35); nes_write(0x0001, 0xB0); g_cpu.A = 0x35; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_B035_b3(); return;
  case 1: nes_write(0x0000, 0x36); nes_write(0x0001, 0xB0); g_cpu.A = 0x36; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_B036_b3(); return;
  case 2: nes_write(0x0000, 0x56); nes_write(0x0001, 0xB0); g_cpu.A = 0x56; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_B056_b3(); return;
  case 3: nes_write(0x0000, 0x6A); nes_write(0x0001, 0xB0); g_cpu.A = 0x6A; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_B06A_b3(); return;
  case 4: nes_write(0x0000, 0x84); nes_write(0x0001, 0xB0); g_cpu.A = 0x84; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_B084_b3(); return;
  default: nes_log_inline_miss(0xB028, g_cpu.A); return;
}
label_B035:;
    /* $B035: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B022_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B022_b3");
#endif
    func_B022_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B035_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B035_b3");
#endif
    func_B022_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9022_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9022_b3");
#endif
label_9022:;
    /* $9022: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9024:;
    /* $9024: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9026:;
    /* $9026: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A9); FLAG_NZ(g_cpu.A);
label_9029:;
    /* $9029: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_902B:;
    /* $902B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9036; }
label_902D:;
    /* $902D: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9033:;
    /* $9033: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_9036:;
    /* $9036: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9038:;
    /* $9038: 8D */ maybe_trigger_vblank(4); nes_write(0x04A9, g_cpu.A);
label_903B:;
    /* $903B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
}

void func_B1E9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1E9_b3");
#endif
label_B1E9:;
    /* $B1E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2B; FLAG_NZ(g_cpu.A);
label_B1EB:;
    /* $B1EB: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B1ED:;
    /* $B1ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_B1EF:;
    /* $B1EF: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1F1:;
    /* $B1F1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1F4:;
    /* $B1F4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_91E9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91E9_b3");
#endif
label_91E9:;
    /* $91E9: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_91EB:;
    /* $91EB: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0229; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91EE:;
    /* $91EE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9207; }
label_91F0:;
    /* $91F0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_91F2:;
    /* $91F2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9204; }
label_91F4:;
    /* $91F4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA6; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91F6:;
    /* $91F6: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91F8:;
    /* $91F8: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FA:;
    /* $91FA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FC:;
    /* $91FC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FE:;
    /* $91FE: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9204:;
    /* $9204: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9223, 3); return;
label_9207:;
    /* $9207: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9209:;
    /* $9209: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_920B:;
    /* $920B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9223; }
label_920D:;
    /* $920D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_920F:;
    /* $920F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9211:;
    /* $9211: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9223; }
label_9213:;
    /* $9213: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA6; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9215:;
    /* $9215: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9217:;
    /* $9217: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9219:;
    /* $9219: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_921B:;
    /* $921B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_921D:;
    /* $921D: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9223:;
    /* $9223: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCD); FLAG_NZ(g_cpu.A);
label_9225:;
    /* $9225: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_924B; }
label_9227:;
    /* $9227: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F6); FLAG_NZ(g_cpu.A);
label_922A:;
    /* $922A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9232; }
label_922C:;
    /* $922C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03F6; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_922F:;
    /* $922F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_9232:;
    /* $9232: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9234:;
    /* $9234: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_9237:;
    /* $9237: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9239:;
    /* $9239: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_923B:;
    /* $923B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_926D; }
label_923D:;
    /* $923D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_923F:;
    /* $923F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9241:;
    /* $9241: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9256; }
label_9243:;
    /* $9243: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9245:;
    /* $9245: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_9248:;
    /* $9248: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_924B:;
    /* $924B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_924D:;
    /* $924D: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_9250:;
    /* $9250: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9252:;
    /* $9252: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9254:;
    /* $9254: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_926D; }
label_9256:;
    /* $9256: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9258:;
    /* $9258: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9289; }
label_925A:;
    /* $925A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_925C:;
    /* $925C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_925E:;
    /* $925E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9260:;
    /* $9260: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9262:;
    /* $9262: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9264:;
    /* $9264: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_926A:;
    /* $926A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_926D:;
    /* $926D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_926F:;
    /* $926F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9271:;
    /* $9271: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9289; }
label_9273:;
    /* $9273: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9275:;
    /* $9275: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9277:;
    /* $9277: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9289; }
label_9279:;
    /* $9279: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA7; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_927B:;
    /* $927B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_927D:;
    /* $927D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_927F:;
    /* $927F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9281:;
    /* $9281: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9283:;
    /* $9283: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9289:;
    /* $9289: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8181_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8183;
        case 2: goto label_8185;
    }
label_8181:;
    /* $8181: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8183:;
    /* $8183: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8185:;
    /* $8185: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_8187:;
    /* $8187: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8189:;
    /* $8189: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_818B:;
    /* $818B: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_818D:;
    /* $818D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_818F:;
    /* $818F: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8191:;
    /* $8191: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_8193:;
    /* $8193: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8195:;
    /* $8195: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8198:;
    /* $8198: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8181_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8181_b3");
#endif
    func_8181_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8183_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8183_b3");
#endif
    func_8181_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8185_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8185_b3");
#endif
    func_8181_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8169_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8180;
    }
label_8169:;
    /* $8169: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_816B:;
    /* $816B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_816D:;
    /* $816D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x92; FLAG_NZ(g_cpu.A);
label_816F:;
    /* $816F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8171:;
    /* $8171: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_8173:;
    /* $8173: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8175:;
    /* $8175: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_8177:;
    /* $8177: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8179:;
    /* $8179: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_817B:;
    /* $817B: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_817D:;
    /* $817D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8180:;
    /* $8180: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8169_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8169_b3");
#endif
    func_8169_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8180_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8180_b3");
#endif
    func_8169_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8D29_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D29_b3");
#endif
label_8D29:;
    /* $8D29: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8D2B:;
    /* $8D2B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D2D:;
    /* $8D2D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D42; }
label_8D2F:;
    /* $8D2F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D32:;
    /* $8D32: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D34:;
    /* $8D34: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D7C; }
label_8D36:;
    /* $8D36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D38:;
    /* $8D38: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D3B:;
    /* $8D3B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D3D:;
    /* $8D3D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8D3F:;
    /* $8D3F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D79, 3); return;
label_8D42:;
    /* $8D42: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D44:;
    /* $8D44: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8D46:;
    /* $8D46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D5B; }
label_8D48:;
    /* $8D48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D4B:;
    /* $8D4B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8D4D:;
    /* $8D4D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D7C; }
label_8D4F:;
    /* $8D4F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D51:;
    /* $8D51: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D54:;
    /* $8D54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8D56:;
    /* $8D56: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8D58:;
    /* $8D58: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D79, 3); return;
label_8D5B:;
    /* $8D5B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D5D:;
    /* $8D5D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8D5F:;
    /* $8D5F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D69; }
label_8D61:;
    /* $8D61: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8D63:;
    /* $8D63: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D66:;
    /* $8D66: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
label_8D69:;
    /* $8D69: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D6C:;
    /* $8D6C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8D6E:;
    /* $8D6E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D7C; }
label_8D70:;
    /* $8D70: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D72:;
    /* $8D72: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D75:;
    /* $8D75: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8D77:;
    /* $8D77: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8D79:;
    /* $8D79: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8EAE, 3);
label_8D7C:;
    /* $8D7C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8E38, 3);
label_8D7F:;
    /* $8D7F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8D89, 3);
label_8D82:;
    /* $8D82: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8DE5, 3);
label_8D85:;
    /* $8D85: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9390, 3);
label_8D88:;
    /* $8D88: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D7C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D7C_b3");
#endif
label_8D7C:;
    /* $8D7C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8E38, 3);
label_8D7F:;
    /* $8D7F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8D89, 3);
label_8D82:;
    /* $8D82: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8DE5, 3);
label_8D85:;
    /* $8D85: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9390, 3);
label_8D88:;
    /* $8D88: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CFC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CFC_b3");
#endif
label_8CFC:;
    /* $8CFC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8CFE:;
    /* $8CFE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_8D00:;
    /* $8D00: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D29; }
label_8D02:;
    /* $8D02: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D05:;
    /* $8D05: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_8D07:;
    /* $8D07: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0CF9), 3); return; }
label_8D09:;
    /* $8D09: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D0B:;
    /* $8D0B: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D0E:;
    /* $8D0E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x04A8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D11:;
    /* $8D11: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A8); FLAG_NZ(g_cpu.A);
label_8D14:;
    /* $8D14: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8D16:;
    /* $8D16: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8D21; }
label_8D18:;
    /* $8D18: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8D1E:;
    /* $8D1E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CF9, 3); return;
label_8D21:;
    /* $8D21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8D23:;
    /* $8D23: 8D */ maybe_trigger_vblank(4); nes_write(0x04A8, g_cpu.A);
label_8D26:;
    /* $8D26: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
label_8D29:;
    /* $8D29: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8D2B:;
    /* $8D2B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D2D:;
    /* $8D2D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D42; }
label_8D2F:;
    /* $8D2F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D32:;
    /* $8D32: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D34:;
    /* $8D34: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D7C; }
label_8D36:;
    /* $8D36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D38:;
    /* $8D38: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D3B:;
    /* $8D3B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D3D:;
    /* $8D3D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8D3F:;
    /* $8D3F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D79, 3); return;
label_8D42:;
    /* $8D42: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D44:;
    /* $8D44: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8D46:;
    /* $8D46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D5B; }
label_8D48:;
    /* $8D48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D4B:;
    /* $8D4B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8D4D:;
    /* $8D4D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D7C; }
label_8D4F:;
    /* $8D4F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D51:;
    /* $8D51: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D54:;
    /* $8D54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8D56:;
    /* $8D56: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8D58:;
    /* $8D58: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D79, 3); return;
label_8D5B:;
    /* $8D5B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D5D:;
    /* $8D5D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8D5F:;
    /* $8D5F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D69; }
label_8D61:;
    /* $8D61: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8D63:;
    /* $8D63: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D66:;
    /* $8D66: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
label_8D69:;
    /* $8D69: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D6C:;
    /* $8D6C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8D6E:;
    /* $8D6E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D7C; }
label_8D70:;
    /* $8D70: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D72:;
    /* $8D72: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D75:;
    /* $8D75: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8D77:;
    /* $8D77: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8D79:;
    /* $8D79: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8EAE, 3);
label_8D7C:;
    /* $8D7C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8E38, 3);
label_8D7F:;
    /* $8D7F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8D89, 3);
label_8D82:;
    /* $8D82: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8DE5, 3);
label_8D85:;
    /* $8D85: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9390, 3);
label_8D88:;
    /* $8D88: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CF9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF9_b3");
#endif
label_8CF9:;
    /* $8CF9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
}

void func_8CF4_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CF4_b3");
#endif
label_8CF4:;
    /* $8CF4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8CF6:;
    /* $8CF6: 8D */ maybe_trigger_vblank(4); nes_write(0x04A8, g_cpu.A);
label_8CF9:;
    /* $8CF9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
}

void func_8D21_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D21_b3");
#endif
label_8D21:;
    /* $8D21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8D23:;
    /* $8D23: 8D */ maybe_trigger_vblank(4); nes_write(0x04A8, g_cpu.A);
label_8D26:;
    /* $8D26: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
}

void func_8D79_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D79_b3");
#endif
label_8D79:;
    /* $8D79: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8EAE, 3);
label_8D7C:;
    /* $8D7C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8E38, 3);
label_8D7F:;
    /* $8D7F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8D89, 3);
label_8D82:;
    /* $8D82: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8DE5, 3);
label_8D85:;
    /* $8D85: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9390, 3);
label_8D88:;
    /* $8D88: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8EAE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8EAE_b3");
#endif
label_8EAE:;
    /* $8EAE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A8); FLAG_NZ(g_cpu.A);
label_8EB1:;
    /* $8EB1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8EB3:;
    /* $8EB3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8EB8; }
label_8EB5:;
    /* $8EB5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8F47, 3); return;
label_8EB8:;
    /* $8EB8: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8EBE:;
    /* $8EBE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8EC0:;
    /* $8EC0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8EC2:;
    /* $8EC2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8EC8; }
label_8EC4:;
    /* $8EC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8EC6:;
    /* $8EC6: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8EC8:;
    /* $8EC8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_8ECB:;
    /* $8ECB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8ECC:;
    /* $8ECC: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8ECE:;
    /* $8ECE: 8D */ maybe_trigger_vblank(4); nes_write(0x040B, g_cpu.A);
label_8ED1:;
    /* $8ED1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8EEC; }
label_8ED3:;
    /* $8ED3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_8ED5:;
    /* $8ED5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8EE4; }
label_8ED7:;
    /* $8ED7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x63; FLAG_NZ(g_cpu.A);
label_8ED9:;
    /* $8ED9: 8D */ maybe_trigger_vblank(4); nes_write(0x040B, g_cpu.A);
label_8EDC:;
    /* $8EDC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8EDE:;
    /* $8EDE: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_8EE1:;
    /* $8EE1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8EE4:;
    /* $8EE4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8EE6:;
    /* $8EE6: 8D */ maybe_trigger_vblank(4); nes_write(0x040B, g_cpu.A);
label_8EE9:;
    /* $8EE9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8EEC:;
    /* $8EEC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8EEE:;
    /* $8EEE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8EF0:;
    /* $8EF0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8F01; }
label_8EF2:;
    /* $8EF2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_8EF5:;
    /* $8EF5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_8EF7:;
    /* $8EF7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8EFE; }
label_8EF9:;
    /* $8EF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8EFB:;
    /* $8EFB: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_8EFE:;
    /* $8EFE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8F01:;
    /* $8F01: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_8F04:;
    /* $8F04: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x64; g_cpu.C=(g_cpu.A>=0x64)?1:0; FLAG_NZ(r&0xFF); }
label_8F06:;
    /* $8F06: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8F3A; }
label_8F08:;
    /* $8F08: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_8F0A:;
    /* $8F0A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8F0F; }
label_8F0C:;
    /* $8F0C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8F0F:;
    /* $8F0F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_8F11:;
    /* $8F11: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8F1B; }
label_8F13:;
    /* $8F13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8F15:;
    /* $8F15: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_8F18:;
    /* $8F18: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8F1B:;
    /* $8F1B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA1); FLAG_NZ(g_cpu.A);
label_8F1D:;
    /* $8F1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8F1F:;
    /* $8F1F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8F3F; }
label_8F21:;
    /* $8F21: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8F24:;
    /* $8F24: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8F26:;
    /* $8F26: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8F3F; }
label_8F28:;
    /* $8F28: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8F2A:;
    /* $8F2A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8F2C:;
    /* $8F2C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8F3F; }
label_8F2E:;
    /* $8F2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8F30:;
    /* $8F30: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8F32:;
    /* $8F32: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8F34:;
    /* $8F34: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_8F37:;
    /* $8F37: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8F3A:;
    /* $8F3A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8F3C:;
    /* $8F3C: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_8F3F:;
    /* $8F3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8F41:;
    /* $8F41: 8D */ maybe_trigger_vblank(4); nes_write(0x040B, g_cpu.A);
label_8F44:;
    /* $8F44: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
}

void func_8E38_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E38_b3");
#endif
label_8E38:;
    /* $8E38: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8E3A:;
    /* $8E3A: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8E3C:;
    /* $8E3C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x65; FLAG_NZ(g_cpu.A);
label_8E3E:;
    /* $8E3E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8E40:;
    /* $8E40: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8E; FLAG_NZ(g_cpu.A);
label_8E42:;
    /* $8E42: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8E44:;
    /* $8E44: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_8E46:;
    /* $8E46: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8E48:;
    /* $8E48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A8); FLAG_NZ(g_cpu.A);
label_8E4B:;
    /* $8E4B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8E4D:;
    /* $8E4D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E54; }
label_8E4F:;
    /* $8E4F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_8E51:;
    /* $8E51: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E5F, 3); return;
label_8E54:;
    /* $8E54: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8E56:;
    /* $8E56: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E5D; }
label_8E58:;
    /* $8E58: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_8E5A:;
    /* $8E5A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E5F, 3); return;
label_8E5D:;
    /* $8E5D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_8E5F:;
    /* $8E5F: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8E61:;
    /* $8E61: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8E64:;
    /* $8E64: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D89_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8DAB;
    }
label_8D89:;
    /* $8D89: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8D8B:;
    /* $8D8B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8D8D:;
    /* $8D8D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x63; FLAG_NZ(g_cpu.A);
label_8D8F:;
    /* $8D8F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8D91:;
    /* $8D91: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_8D93:;
    /* $8D93: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8D95:;
    /* $8D95: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x74; FLAG_NZ(g_cpu.A);
label_8D97:;
    /* $8D97: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8D99:;
    /* $8D99: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA1); FLAG_NZ(g_cpu.A);
label_8D9B:;
    /* $8D9B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8D9D:;
    /* $8D9D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DB4; }
label_8D9F:;
    /* $8D9F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x64; FLAG_NZ(g_cpu.A);
label_8DA1:;
    /* $8DA1: 85 */ maybe_trigger_vblank(3); nes_write(0x9B, g_cpu.A);
label_8DA3:;
    /* $8DA3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8DA5:;
    /* $8DA5: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_8DA7:;
    /* $8DA7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x46; FLAG_NZ(g_cpu.A);
label_8DA9:;
    /* $8DA9: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_8DAB:;
    /* $8DAB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8DAD:;
    /* $8DAD: 85 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.A);
label_8DAF:;
    /* $8DAF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_8DB1:;
    /* $8DB1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8DDF, 3); return;
label_8DB4:;
    /* $8DB4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8DB6:;
    /* $8DB6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DCD; }
label_8DB8:;
    /* $8DB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x64; FLAG_NZ(g_cpu.A);
label_8DBA:;
    /* $8DBA: 85 */ maybe_trigger_vblank(3); nes_write(0x9B, g_cpu.A);
label_8DBC:;
    /* $8DBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8DBE:;
    /* $8DBE: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_8DC0:;
    /* $8DC0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x46; FLAG_NZ(g_cpu.A);
label_8DC2:;
    /* $8DC2: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_8DC4:;
    /* $8DC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8DC6:;
    /* $8DC6: 85 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.A);
label_8DC8:;
    /* $8DC8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_8DCA:;
    /* $8DCA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8DDF, 3); return;
label_8DCD:;
    /* $8DCD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x64; FLAG_NZ(g_cpu.A);
label_8DCF:;
    /* $8DCF: 85 */ maybe_trigger_vblank(3); nes_write(0x9B, g_cpu.A);
label_8DD1:;
    /* $8DD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8DD3:;
    /* $8DD3: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_8DD5:;
    /* $8DD5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x46; FLAG_NZ(g_cpu.A);
label_8DD7:;
    /* $8DD7: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_8DD9:;
    /* $8DD9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8DDB:;
    /* $8DDB: 85 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.A);
label_8DDD:;
    /* $8DDD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCC; FLAG_NZ(g_cpu.A);
label_8DDF:;
    /* $8DDF: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8DE1:;
    /* $8DE1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8DE4:;
    /* $8DE4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D89_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D89_b3");
#endif
    func_8D89_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8DAB_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DAB_b3");
#endif
    func_8D89_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8DE5_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8E10;
        case 2: goto label_8E37;
    }
label_8DE5:;
    /* $8DE5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8DE7:;
    /* $8DE7: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8DE9:;
    /* $8DE9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_8DEB:;
    /* $8DEB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8DED:;
    /* $8DED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_8DEF:;
    /* $8DEF: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8DF1:;
    /* $8DF1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8C; FLAG_NZ(g_cpu.A);
label_8DF3:;
    /* $8DF3: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8DF5:;
    /* $8DF5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8DF8:;
    /* $8DF8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8DFA:;
    /* $8DFA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8E01; }
label_8DFC:;
    /* $8DFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_8DFE:;
    /* $8DFE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E15, 3); return;
label_8E01:;
    /* $8E01: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8E03:;
    /* $8E03: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E0A; }
label_8E05:;
    /* $8E05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_8E07:;
    /* $8E07: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E15, 3); return;
label_8E0A:;
    /* $8E0A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8E0C:;
    /* $8E0C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E13; }
label_8E0E:;
    /* $8E0E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_8E10:;
    /* $8E10: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E15, 3); return;
label_8E13:;
    /* $8E13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC8; FLAG_NZ(g_cpu.A);
label_8E15:;
    /* $8E15: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8E17:;
    /* $8E17: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8E1A:;
    /* $8E1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8E1D:;
    /* $8E1D: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0488); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E20:;
    /* $8E20: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E37; }
label_8E22:;
    /* $8E22: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_8E25:;
    /* $8E25: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8E2B:;
    /* $8E2B: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8112 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8112_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8E31:;
    /* $8E31: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8E37:;
    /* $8E37: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8DE5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DE5_b3");
#endif
    func_8DE5_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8E10_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E10_b3");
#endif
    func_8DE5_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8E37_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E37_b3");
#endif
    func_8DE5_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9390_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9393;
    }
label_9390:;
    /* $9390: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_9393:;
    /* $9393: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_9395:;
    /* $9395: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9398:;
    /* $9398: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9399:;
    /* $9399: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4F; FLAG_NZ(g_cpu.A);
label_939B:;
    /* $939B: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_939E:;
    /* $939E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_939F:;
    /* $939F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_93A1:;
    /* $93A1: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_93A4:;
    /* $93A4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_93A5:;
    /* $93A5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_93A8:;
    /* $93A8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_93AA:;
    /* $93AA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_93BC; }
label_93AC:;
    /* $93AC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_93AD:;
    /* $93AD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x30 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x30); g_cpu.A=r&0xFF; }
label_93AF:;
    /* $93AF: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_93B2:;
    /* $93B2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_93B3:;
    /* $93B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_93B5:;
    /* $93B5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_93B8:;
    /* $93B8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_93B9:;
    /* $93B9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x93F1, 3); return;
label_93BC:;
    /* $93BC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_93BF:;
    /* $93BF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_93C1:;
    /* $93C1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_93E5; }
label_93C3:;
    /* $93C3: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_93C5:;
    /* $93C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_93C7:;
    /* $93C7: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_93C9:;
    /* $93C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_93CB:;
    /* $93CB: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_93CD:;
    /* $93CD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 3);
label_93D0:;
    /* $93D0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_93D2:;
    /* $93D2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_93D3:;
    /* $93D3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x30 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x30); g_cpu.A=r&0xFF; }
label_93D5:;
    /* $93D5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_93D8:;
    /* $93D8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_93D9:;
    /* $93D9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_93DB:;
    /* $93DB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_93DC:;
    /* $93DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x30 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x30); g_cpu.A=r&0xFF; }
label_93DE:;
    /* $93DE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_93E1:;
    /* $93E1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_93E2:;
    /* $93E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x93F1, 3); return;
label_93E5:;
    /* $93E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x31; FLAG_NZ(g_cpu.A);
label_93E7:;
    /* $93E7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_93EA:;
    /* $93EA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_93EB:;
    /* $93EB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_93ED:;
    /* $93ED: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_93F0:;
    /* $93F0: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_93F1:;
    /* $93F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_93F3:;
    /* $93F3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_93F6:;
    /* $93F6: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_93F9:;
    /* $93F9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9390_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9390_b3");
#endif
    func_9390_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9393_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9393_b3");
#endif
    func_9390_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1F5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1F5_b3");
#endif
label_B1F5:;
    /* $B1F5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC5; FLAG_NZ(g_cpu.A);
label_B1F7:;
    /* $B1F7: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B1F9:;
    /* $B1F9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1FB:;
    /* $B1FB: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1FD:;
    /* $B1FD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B200:;
    /* $B200: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_91F5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91F5_b3");
#endif
label_91F5:;
    /* $91F5: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xC6); FLAG_NZ(g_cpu.X);
label_91F7:;
    /* $91F7: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_91F8:;
    /* $91F8: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FA:;
    /* $91FA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FC:;
    /* $91FC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FE:;
    /* $91FE: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9204:;
    /* $9204: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9223, 3); return;
}

void func_8A58_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8A81;
    }
label_8A58:;
    /* $8A58: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_8A5A:;
    /* $8A5A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8A5B:;
    /* $8A5B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8A63; }
label_8A5D:;
    /* $8A5D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x88E4, 3);
label_8A60:;
    /* $8A60: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A66, 3); return;
label_8A63:;
    /* $8A63: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8941, 3);
label_8A66:;
    /* $8A66: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8A68:;
    /* $8A68: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A6F; }
label_8A6A:;
    /* $8A6A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6C:;
    /* $8A6C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A81, 3); return;
label_8A6F:;
    /* $8A6F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8A71:;
    /* $8A71: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8A73:;
    /* $8A73: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8A7B; }
label_8A75:;
    /* $8A75: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A77:;
    /* $8A77: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A79:;
    /* $8A79: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A7B:;
    /* $8A7B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8A7D:;
    /* $8A7D: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_8A7F:;
    /* $8A7F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A81:;
    /* $8A81: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8A58_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A58_b3");
#endif
    func_8A58_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A81_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A81_b3");
#endif
    func_8A58_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8199_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_81AD;
    }
label_8199:;
    /* $8199: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_819B:;
    /* $819B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_819D:;
    /* $819D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x69; FLAG_NZ(g_cpu.A);
label_819F:;
    /* $819F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_81A1:;
    /* $81A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_81A3:;
    /* $81A3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_81A5:;
    /* $81A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_81A7:;
    /* $81A7: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_81A9:;
    /* $81A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_81AB:;
    /* $81AB: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_81AD:;
    /* $81AD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_81B0:;
    /* $81B0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8199_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8199_b3");
#endif
    func_8199_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81AD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81AD_b3");
#endif
    func_8199_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81B1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81B1_b3");
#endif
label_81B1:;
    /* $81B1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E2); FLAG_NZ(g_cpu.A);
label_81B4:;
    /* $81B4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_81B5:;
    /* $81B5: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_81CE; }
label_81B7:;
    /* $81B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81B9:;
    /* $81B9: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_81BB:;
    /* $81BB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF6; FLAG_NZ(g_cpu.A);
label_81BD:;
    /* $81BD: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_81BF:;
    /* $81BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_81C1:;
    /* $81C1: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_81C3:;
    /* $81C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_81C5:;
    /* $81C5: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_81C7:;
    /* $81C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_81C9:;
    /* $81C9: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_81CB:;
    /* $81CB: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_81CE:;
    /* $81CE: CE */ maybe_trigger_vblank(6); { uint16_t a=0x05E3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81D1:;
    /* $81D1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_81DB; }
label_81D3:;
    /* $81D3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_81D5:;
    /* $81D5: 8D */ maybe_trigger_vblank(4); nes_write(0x05E3, g_cpu.A);
label_81D8:;
    /* $81D8: EE */ maybe_trigger_vblank(6); { uint16_t a=0x05E2; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81DB:;
    /* $81DB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_900A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_900A_b3");
#endif
label_900A:;
    /* $900A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_900C:;
    /* $900C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_900E:;
    /* $900E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
}

void func_B362_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B362_b3");
#endif
label_B362:;
    /* $B362: 8D */ maybe_trigger_vblank(4); nes_write(0x8F8E, g_cpu.A);
label_B365:;
    /* $B365: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x76 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B367:;
    /* $B367: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_B369:;
    /* $B369: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_B36A:;
    /* $B36A: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_B36D:;
    /* $B36D: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B36F:;
    /* $B36F: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B371:;
    /* $B371: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x99AD); FLAG_NZ(g_cpu.Y);
label_B374:;
    /* $B374: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x2100); FLAG_NZ(g_cpu.A);
label_B377:;
    /* $B377: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x07 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B379:;
    /* $B379: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_B37A:;
    /* $B37A: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B37D:;
    /* $B37D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x00BF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_B380:;
    /* $B380: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B382:;
    /* $B382: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xCA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B384:;
    /* $B384: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB384); return;
}

void func_8DDF_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DDF_b3");
#endif
label_8DDF:;
    /* $8DDF: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8DE1:;
    /* $8DE1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8DE4:;
    /* $8DE4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8ADA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8ADA_b3");
#endif
label_8ADA:;
    /* $8ADA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_8ADC:;
    /* $8ADC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8ADD:;
    /* $8ADD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8AE5; }
label_8ADF:;
    /* $8ADF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x88E4, 3);
label_8AE2:;
    /* $8AE2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8AE8, 3); return;
label_8AE5:;
    /* $8AE5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8941, 3);
label_8AE8:;
    /* $8AE8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8AEA:;
    /* $8AEA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8AEC:;
    /* $8AEC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8AEE; }
label_8AEE:;
    /* $8AEE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8AF0:;
    /* $8AF0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AF7; }
label_8AF2:;
    /* $8AF2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AF4:;
    /* $8AF4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8B2D, 3); return;
label_8AF7:;
    /* $8AF7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8AF9:;
    /* $8AF9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8AFB:;
    /* $8AFB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_8B03; }
label_8AFD:;
    /* $8AFD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AFF:;
    /* $8AFF: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B01:;
    /* $8B01: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B03:;
    /* $8B03: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8B05:;
    /* $8B05: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_8B07:;
    /* $8B07: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B09:;
    /* $8B09: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8B2D, 3); return;
}

void func_81DC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81DC_b3");
#endif
label_81DC:;
    /* $81DC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E2); FLAG_NZ(g_cpu.A);
label_81DF:;
    /* $81DF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_81E0:;
    /* $81E0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_81F9; }
label_81E2:;
    /* $81E2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81E4:;
    /* $81E4: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_81E6:;
    /* $81E6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_81E8:;
    /* $81E8: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_81EA:;
    /* $81EA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_81EC:;
    /* $81EC: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_81EE:;
    /* $81EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6C; FLAG_NZ(g_cpu.A);
label_81F0:;
    /* $81F0: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_81F2:;
    /* $81F2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_81F4:;
    /* $81F4: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_81F6:;
    /* $81F6: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_81F9:;
    /* $81F9: CE */ maybe_trigger_vblank(6); { uint16_t a=0x05E3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81FC:;
    /* $81FC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8206; }
label_81FE:;
    /* $81FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_8200:;
    /* $8200: 8D */ maybe_trigger_vblank(4); nes_write(0x05E3, g_cpu.A);
label_8203:;
    /* $8203: EE */ maybe_trigger_vblank(6); { uint16_t a=0x05E2; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8206:;
    /* $8206: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8207_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8207_b3");
#endif
label_8207:;
    /* $8207: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8209:;
    /* $8209: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_820B:;
    /* $820B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05AF); FLAG_NZ(g_cpu.A);
label_820E:;
    /* $820E: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_8210:;
    /* $8210: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_8212:;
    /* $8212: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8221; }
label_8214:;
    /* $8214: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_8216:;
    /* $8216: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8218:;
    /* $8218: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_821A:;
    /* $821A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_821C:;
    /* $821C: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_821E:;
    /* $821E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 3);
label_8221:;
    /* $8221: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8223:;
    /* $8223: 8D */ maybe_trigger_vblank(4); nes_write(0x036A, g_cpu.A);
label_8226:;
    /* $8226: 8D */ maybe_trigger_vblank(4); nes_write(0x036E, g_cpu.A);
label_8229:;
    /* $8229: 8D */ maybe_trigger_vblank(4); nes_write(0x0372, g_cpu.A);
label_822C:;
    /* $822C: 8D */ maybe_trigger_vblank(4); nes_write(0x0376, g_cpu.A);
label_822F:;
    /* $822F: 8D */ maybe_trigger_vblank(4); nes_write(0x037A, g_cpu.A);
label_8232:;
    /* $8232: 8D */ maybe_trigger_vblank(4); nes_write(0x037E, g_cpu.A);
label_8235:;
    /* $8235: 8D */ maybe_trigger_vblank(4); nes_write(0x0382, g_cpu.A);
label_8238:;
    /* $8238: 8D */ maybe_trigger_vblank(4); nes_write(0x0386, g_cpu.A);
label_823B:;
    /* $823B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_823D:;
    /* $823D: 8D */ maybe_trigger_vblank(4); nes_write(0x0368, g_cpu.A);
label_8240:;
    /* $8240: 8D */ maybe_trigger_vblank(4); nes_write(0x036B, g_cpu.A);
label_8243:;
    /* $8243: 8D */ maybe_trigger_vblank(4); nes_write(0x036F, g_cpu.A);
label_8246:;
    /* $8246: 8D */ maybe_trigger_vblank(4); nes_write(0x0370, g_cpu.A);
label_8249:;
    /* $8249: 8D */ maybe_trigger_vblank(4); nes_write(0x0378, g_cpu.A);
label_824C:;
    /* $824C: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_824F:;
    /* $824F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8251:;
    /* $8251: 8D */ maybe_trigger_vblank(4); nes_write(0x036C, g_cpu.A);
label_8254:;
    /* $8254: 8D */ maybe_trigger_vblank(4); nes_write(0x0373, g_cpu.A);
label_8257:;
    /* $8257: 8D */ maybe_trigger_vblank(4); nes_write(0x0374, g_cpu.A);
label_825A:;
    /* $825A: 8D */ maybe_trigger_vblank(4); nes_write(0x0377, g_cpu.A);
label_825D:;
    /* $825D: 8D */ maybe_trigger_vblank(4); nes_write(0x037C, g_cpu.A);
label_8260:;
    /* $8260: 8D */ maybe_trigger_vblank(4); nes_write(0x0384, g_cpu.A);
label_8263:;
    /* $8263: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_8265:;
    /* $8265: 8D */ maybe_trigger_vblank(4); nes_write(0x037B, g_cpu.A);
label_8268:;
    /* $8268: 8D */ maybe_trigger_vblank(4); nes_write(0x037F, g_cpu.A);
label_826B:;
    /* $826B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_826D:;
    /* $826D: 8D */ maybe_trigger_vblank(4); nes_write(0x0383, g_cpu.A);
label_8270:;
    /* $8270: 8D */ maybe_trigger_vblank(4); nes_write(0x0387, g_cpu.A);
label_8273:;
    /* $8273: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_8275:;
    /* $8275: 8D */ maybe_trigger_vblank(4); nes_write(0x0388, g_cpu.A);
label_8278:;
    /* $8278: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_827A:;
    /* $827A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_827C:;
    /* $827C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_828F; }
label_827E:;
    /* $827E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_827F:;
    /* $827F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x66 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x66); g_cpu.A=r&0xFF; }
label_8281:;
    /* $8281: 99 */ maybe_trigger_vblank(5); nes_write((0x0368 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8284:;
    /* $8284: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8285:;
    /* $8285: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_8287:;
    /* $8287: 99 */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_828A:;
    /* $828A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_828B:;
    /* $828B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_828C:;
    /* $828C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_828E:;
    /* $828E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_828F:;
    /* $828F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_8291:;
    /* $8291: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8292:;
    /* $8292: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x66 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x66); g_cpu.A=r&0xFF; }
label_8294:;
    /* $8294: 99 */ maybe_trigger_vblank(5); nes_write((0x0368 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8297:;
    /* $8297: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8298:;
    /* $8298: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_829A:;
    /* $829A: 99 */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_829D:;
    /* $829D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_829E:;
    /* $829E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_829F:;
    /* $829F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_82A1:;
    /* $82A1: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_82A2:;
    /* $82A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_82A4:;
    /* $82A4: 99 */ maybe_trigger_vblank(5); nes_write((0x0368 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82A7:;
    /* $82A7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x91; FLAG_NZ(g_cpu.A);
label_82A9:;
    /* $82A9: 99 */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82AC:;
    /* $82AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_82AE:;
    /* $82AE: 99 */ maybe_trigger_vblank(5); nes_write((0x0370 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82B1:;
    /* $82B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x95; FLAG_NZ(g_cpu.A);
label_82B3:;
    /* $82B3: 99 */ maybe_trigger_vblank(5); nes_write((0x0374 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82B6:;
    /* $82B6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_82B8:;
    /* $82B8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_82BA:;
    /* $82BA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82D8; }
label_82BC:;
    /* $82BC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_82BE:;
    /* $82BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_82BF:;
    /* $82BF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_82C0:;
    /* $82C0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x82FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82C3:;
    /* $82C3: 99 */ maybe_trigger_vblank(5); nes_write((0x0368 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82C6:;
    /* $82C6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82C7:;
    /* $82C7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_82C9:;
    /* $82C9: 99 */ maybe_trigger_vblank(5); nes_write((0x036C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82CC:;
    /* $82CC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x82FE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82CF:;
    /* $82CF: 99 */ maybe_trigger_vblank(5); nes_write((0x0370 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82D2:;
    /* $82D2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82D3:;
    /* $82D3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_82D5:;
    /* $82D5: 99 */ maybe_trigger_vblank(5); nes_write((0x0374 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82D8:;
    /* $82D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_82DA:;
    /* $82DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0377 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82DD:;
    /* $82DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_82DF:;
    /* $82DF: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_82E1:;
    /* $82E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_82E3:;
    /* $82E3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_82E5:;
    /* $82E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x74; FLAG_NZ(g_cpu.A);
label_82E7:;
    /* $82E7: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_82E9:;
    /* $82E9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_82EB:;
    /* $82EB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82F1; }
label_82ED:;
    /* $82ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_82EF:;
    /* $82EF: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_82F1:;
    /* $82F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_82F3:;
    /* $82F3: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_82F5:;
    /* $82F5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_82F7:;
    /* $82F7: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_82F9:;
    /* $82F9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_82FC:;
    /* $82FC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D14_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D14_b3");
#endif
label_9D14:;
    /* $9D14: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9D14); return;
}

void func_BD14_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD14_b3");
#endif
label_BD14:;
    /* $BD14: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD14); return;
}

void func_9D6A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D6A_b3");
#endif
label_9D6A:;
    /* $9D6A: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9D6B:;
    /* $9D6B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9D6D:;
    /* $9D6D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1DA7), 3); return; }
label_9D6F:;
    /* $9D6F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9D71:;
    /* $9D71: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9D72:;
    /* $9D72: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9D73:;
    /* $9D73: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9D75:;
    /* $9D75: 80 */ maybe_trigger_vblank(2); /* NOP */
label_9D77:;
    /* $9D77: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x55); FLAG_NZ(g_cpu.A);
label_9D79:;
    /* $9D79: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x05 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D7B:;
    /* $9D7B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D7D:;
    /* $9D7D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x50 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D7F:;
    /* $9D7F: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x55 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9D81:;
    /* $9D81: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D83:;
    /* $9D83: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D85:;
    /* $9D85: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D87:;
    /* $9D87: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D89:;
    /* $9D89: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x54) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D8B:;
    /* $9D8B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D8D:;
    /* $9D8D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D8F:;
    /* $9D8F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D91:;
    /* $9D91: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D93:;
    /* $9D93: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D95:;
    /* $9D95: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D97:;
    /* $9D97: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D99:;
    /* $9D99: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D9B:;
    /* $9D9B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D9D:;
    /* $9D9D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D9F:;
    /* $9D9F: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xAFAF); FLAG_NZ(g_cpu.A);
label_9DA2:;
    /* $9DA2: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xAFAF); FLAG_NZ(g_cpu.A);
label_9DA5:;
    /* $9DA5: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xAAAA); FLAG_NZ(g_cpu.A);
label_9DA8:;
    /* $9DA8: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DA9:;
    /* $9DA9: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DAA:;
    /* $9DAA: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DAB:;
    /* $9DAB: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DAC:;
    /* $9DAC: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DAD:;
    /* $9DAD: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DAE:;
    /* $9DAE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DAF:;
    /* $9DAF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB0:;
    /* $9DB0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB1:;
    /* $9DB1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB2:;
    /* $9DB2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB3:;
    /* $9DB3: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB4:;
    /* $9DB4: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB5:;
    /* $9DB5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB6:;
    /* $9DB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9DB6); return;
label_9DB7:; return;
label_9DB8:; return;
label_9DB9:; return;
label_9DBA:; return;
label_9DBB:; return;
label_9DBD:; return;
label_9DBE:; return;
label_9DBF:; return;
label_9DC0:; return;
label_9DC2:; return;
label_9DC4:; return;
label_9DC5:; return;
label_9DC6:; return;
label_9DC7:; return;
label_9DC8:; return;
label_9DC9:; return;
label_9DCA:; return;
label_9DCB:; return;
label_9DCC:; return;
label_9DCD:; return;
label_9DCE:; return;
label_9DCF:; return;
label_9DD0:; return;
label_9DD1:; return;
label_9DD2:; return;
label_9DD3:; return;
label_9DD4:; return;
label_9DD5:; return;
label_9DD6:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DD9:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDC:; return;
label_9DDD:; return;
label_9DDE:; return;
label_9DDF:; return;
label_9DE0:; return;
label_9DE1:; return;
label_9DE2:; return;
label_9DE3:; return;
label_9DE4:; return;
label_9DE5:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEA:; return;
label_9DEB:; return;
label_9DEC:; return;
label_9DED:; return;
label_9DEF:; return;
label_9DF2:; return;
label_9DF5:; return;
label_9DF8:; return;
label_9DF9:; return;
label_9DFA:; return;
label_9DFB:; return;
label_9DFC:; return;
label_9DFD:; return;
label_9DFE:; return;
label_9DFF:; return;
label_9E00:; return;
label_9E01:; return;
label_9E02:; return;
label_9E03:; return;
label_9E04:; return;
label_9E05:; return;
label_9E06:; return;
label_9E07:; return;
label_9E08:; return;
label_9E09:; return;
label_9E0A:; return;
label_9E0B:; return;
label_9E0C:; return;
label_9E0D:; return;
label_9E0E:; return;
label_9E0F:; return;
label_9E10:; return;
label_9E11:; return;
label_9E12:; return;
label_9E13:; return;
label_9E14:; return;
label_9E15:; return;
label_9E16:; return;
label_9E17:; return;
label_9E18:; return;
label_9E19:; return;
label_9E1A:; return;
label_9E1B:; return;
label_9E1C:; return;
label_9E1D:; return;
label_9E1E:; return;
label_9E1F:; return;
label_9E20:; return;
label_9E21:; return;
label_9E22:; return;
label_9E23:; return;
label_9E24:; return;
label_9E25:; return;
label_9E26:; return;
label_9E27:; return;
label_9E28:; return;
label_9E29:; return;
label_9E2A:; return;
label_9E2B:; return;
label_9E2C:; return;
label_9E2D:; return;
label_9E2E:; return;
label_9E2F:; return;
label_9E30:; return;
label_9E31:; return;
label_9E32:; return;
label_9E33:; return;
label_9E34:; return;
label_9E35:; return;
label_9E36:; return;
label_9E37:; return;
label_9E38:; return;
label_9E3A:; return;
label_9E3C:; return;
label_9E3E:; return;
label_9E40:; return;
label_9E42:; return;
label_9E44:; return;
label_9E46:; return;
label_9E48:; return;
label_9E4A:; return;
label_9E4C:; return;
label_9E4E:; return;
label_9E50:; return;
label_9E52:; return;
label_9E54:; return;
label_9E56:; return;
label_9E57:; return;
label_9E59:; return;
label_9E5B:; return;
label_9E5D:; return;
label_9E5F:; return;
label_9E61:; return;
label_9E64:; return;
label_9E67:; return;
label_9E6A:; return;
label_9E6C:; return;
label_9E6E:; return;
label_9E70:; return;
label_9E73:; return;
label_9E74:; return;
label_9E76:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7B:; return;
label_9E7D:; return;
label_9E7F:; return;
label_9E81:; return;
label_9E83:; return;
label_9E85:; return;
label_9E87:; return;
label_9E8A:; return;
label_9E8C:; return;
label_9E8E:; return;
label_9E90:; return;
label_9E91:; return;
label_9E94:; return;
label_9E96:; return;
label_9E98:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9D:; return;
label_9E9F:; return;
label_9EA1:; return;
label_9EA4:; return;
label_9EA7:; return;
label_9EAA:; return;
label_9EAC:; return;
label_9EAE:; return;
label_9EB0:; return;
label_9EB2:; return;
label_9EB5:; return;
label_9EB7:; return;
label_9EB9:; return;
label_9EBB:; return;
label_9EBD:; return;
label_9EBF:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC5:; return;
label_9EC7:; return;
label_9ECA:; return;
label_9ECC:; return;
label_9ECE:; return;
label_9ED0:; return;
label_9ED2:; return;
label_9ED4:; return;
label_9ED6:; return;
label_9ED8:; return;
label_9EDA:; return;
label_9EDB:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE1:; return;
label_9EE4:; return;
label_9EE7:; return;
label_9EEA:; return;
label_9EEC:; return;
label_9EEE:; return;
label_9EF0:; return;
label_9EF2:; return;
label_9EF4:; return;
label_9EF6:; return;
label_9EF7:; return;
label_9EF9:; return;
label_9EFB:; return;
label_9EFD:; return;
label_9EFF:; return;
label_9F01:; return;
label_9F03:; return;
label_9F05:; return;
label_9F07:; return;
label_9F09:; return;
label_9F0B:; return;
label_9F0D:; return;
label_9F0E:; return;
label_9F10:; return;
label_9F12:; return;
label_9F15:; return;
label_9F16:; return;
label_9F17:; return;
label_9F18:; return;
label_9F1A:; return;
label_9F1C:; return;
label_9F1E:; return;
label_9F20:; return;
label_9F22:; return;
label_9F24:; return;
label_9F26:; return;
label_9F28:; return;
label_9F2A:; return;
label_9F2C:; return;
label_9F2E:; return;
label_9F30:; return;
label_9F32:; return;
label_9F34:; return;
label_9F36:; return;
label_9F37:; return;
label_9F38:; return;
label_9F39:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3C:; return;
label_9F3D:; return;
label_9F3E:; return;
label_9F3F:; return;
label_9F42:; return;
label_9F45:; return;
label_9F48:; return;
label_9F4B:; return;
label_9F4E:; return;
label_9F4F:; return;
label_9F50:; return;
label_9F51:; return;
label_9F52:; return;
label_9F53:; return;
label_9F54:; return;
label_9F55:; return;
label_9F56:; return;
label_9F57:; return;
label_9F58:; return;
label_9F59:; return;
label_9F5A:; return;
label_9F5B:; return;
label_9F5E:; return;
label_9F61:; return;
label_9F62:; return;
label_9F65:; return;
label_9F68:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6F:; return;
label_9F72:; return;
label_9F73:; return;
label_9F74:; return;
label_9F75:; return;
label_9F76:; return;
label_9F78:; return;
label_9F7A:; return;
label_9F7D:; return;
label_9F7F:; return;
label_9F82:; return;
label_9F85:; return;
label_9F86:; return;
label_9F87:; return;
label_9F88:; return;
label_9F89:; return;
label_9F8C:; return;
label_9F8F:; return;
label_9F92:; return;
label_9F94:; return;
label_9F96:; return;
label_9F98:; return;
label_9F9A:; return;
label_9F9C:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA3:; return;
label_9FA4:; return;
label_9FA5:; return;
label_9FA6:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAB:; return;
label_9FAE:; return;
label_9FB1:; return;
label_9FB3:; return;
label_9FB5:; return;
label_9FB7:; return;
label_9FB8:; return;
label_9FB9:; return;
label_9FBA:; return;
label_9FBB:; return;
label_9FBC:; return;
label_9FBF:; return;
label_9FC0:; return;
label_9FC1:; return;
label_9FC4:; return;
label_9FC5:; return;
label_9FC6:; return;
label_9FC7:; return;
label_9FC8:; return;
label_9FC9:; return;
label_9FCA:; return;
label_9FCB:; return;
label_9FCD:; return;
label_9FD0:; return;
label_9FD1:; return;
label_9FD2:; return;
label_9FD3:; return;
label_9FD4:; return;
label_9FD5:; return;
label_9FD6:; return;
label_9FD8:; return;
label_9FD9:; return;
label_9FDA:; return;
label_9FDB:; return;
label_9FDC:; return;
label_9FDD:; return;
label_9FDE:; return;
label_9FDF:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE4:; return;
label_9FE5:; return;
label_9FE6:; return;
label_9FE7:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEA:; return;
label_9FEB:; return;
label_9FEC:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FEF:; return;
label_9FF0:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF3:; return;
label_9FF5:; return;
label_9FF7:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFB:; return;
label_9FFC:; return;
label_9FFD:; return;
label_9FFE:; return;
label_9FFF:; return;
label_A000:; return;
label_A001:; return;
label_A002:; return;
label_A003:; return;
label_A004:; return;
label_A005:; return;
label_A006:; return;
label_A007:; return;
label_A008:; return;
label_A009:; return;
label_A00A:; return;
label_A00B:; return;
label_A00C:; return;
label_A00D:; return;
label_A00E:; return;
label_A00F:; return;
label_A010:; return;
label_A011:; return;
label_A012:; return;
label_A013:; return;
label_A015:; return;
label_A017:; return;
label_A018:; return;
label_A019:; return;
label_A01A:; return;
label_A01B:; return;
label_A01C:; return;
label_A01D:; return;
label_A01E:; return;
label_A01F:; return;
label_A020:; return;
label_A021:; return;
label_A022:; return;
label_A023:; return;
label_A024:; return;
label_A025:; return;
label_A026:; return;
label_A027:; return;
label_A028:; return;
label_A029:; return;
label_A02A:; return;
label_A02B:; return;
label_A02C:; return;
label_A02D:; return;
label_A02E:; return;
label_A02F:; return;
label_A030:; return;
label_A031:; return;
label_A032:; return;
label_A033:; return;
label_A034:; return;
label_A035:; return;
label_A036:; return;
label_A037:; return;
label_A038:; return;
label_A039:; return;
label_A03A:; return;
label_A03B:; return;
label_A03C:; return;
label_A03D:; return;
label_A03E:; return;
label_A03F:; return;
label_A040:; return;
label_A041:; return;
label_A042:; return;
label_A043:; return;
label_A044:; return;
label_A045:; return;
label_A046:; return;
label_A047:; return;
label_A048:; return;
label_A049:; return;
label_A04A:; return;
label_A04B:; return;
label_A04C:; return;
label_A04D:; return;
label_A04E:; return;
label_A04F:; return;
label_A050:; return;
label_A051:; return;
label_A052:; return;
label_A053:; return;
label_A054:; return;
label_A055:; return;
label_A056:; return;
label_A057:; return;
label_A058:; return;
label_A059:; return;
label_A05A:; return;
label_A05B:; return;
label_A05C:; return;
label_A05D:; return;
label_A05E:; return;
label_A05F:; return;
label_A060:; return;
label_A061:; return;
label_A062:; return;
label_A063:; return;
label_A064:; return;
label_A065:; return;
label_A066:; return;
label_A067:; return;
label_A068:; return;
label_A069:; return;
label_A06A:; return;
label_A06B:; return;
label_A06C:; return;
label_A06D:; return;
label_A06E:; return;
label_A06F:; return;
label_A070:; return;
label_A071:; return;
label_A072:; return;
label_A073:; return;
label_A074:; return;
label_A075:; return;
label_A076:; return;
label_A079:; return;
label_A07C:; return;
label_A07F:; return;
label_A082:; return;
label_A085:; return;
label_A088:; return;
label_A08B:; return;
label_A08E:; return;
label_A091:; return;
label_A094:; return;
label_A097:; return;
label_A09A:; return;
label_A09D:; return;
label_A0A0:; return;
label_A0A2:; return;
label_A0A5:; return;
label_A0A8:; return;
label_A0AB:; return;
label_A0AD:; return;
label_A0AF:; return;
label_A0B1:; return;
label_A0B3:; return;
label_A0B5:; return;
label_A0B8:; return;
label_A0BA:; return;
label_A0BD:; return;
label_A0BF:; return;
label_A0C2:; return;
label_A0C4:; return;
label_A0C6:; return;
label_A0C8:; return;
label_A0CA:; return;
label_A0CD:; return;
label_A0CF:; return;
label_A0D1:; return;
label_A0D3:; return;
label_A0D6:; return;
label_A0D8:; return;
label_A0D9:; return;
label_A0DB:; return;
label_A0DD:; return;
label_A0DF:; return;
label_A0E1:; return;
label_A0E3:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0E9:; return;
label_A0EB:; return;
label_A0ED:; return;
label_A0EF:; return;
label_A0F1:; return;
label_A0F3:; return;
label_A0F5:; return;
label_A0F7:; return;
label_A0F8:; return;
label_A0FA:; return;
label_A0FC:; return;
label_A0FF:; return;
label_A102:; return;
label_A104:; return;
label_A106:; return;
label_A108:; return;
label_A10A:; return;
label_A10C:; return;
label_A10E:; return;
label_A110:; return;
label_A112:; return;
label_A114:; return;
label_A117:; return;
label_A119:; return;
label_A11B:; return;
label_A11C:; return;
label_A11E:; return;
label_A120:; return;
label_A123:; return;
label_A125:; return;
label_A127:; return;
label_A129:; return;
label_A12B:; return;
label_A12D:; return;
label_A12F:; return;
label_A131:; return;
label_A134:; return;
label_A137:; return;
label_A139:; return;
label_A13B:; return;
label_A13D:; return;
label_A13F:; return;
label_A141:; return;
label_A143:; return;
label_A145:; return;
label_A147:; return;
label_A149:; return;
label_A14B:; return;
label_A14D:; return;
label_A14F:; return;
label_A151:; return;
label_A153:; return;
label_A155:; return;
label_A157:; return;
label_A159:; return;
label_A15B:; return;
label_A15D:; return;
label_A15F:; return;
label_A161:; return;
label_A163:; return;
label_A165:; return;
label_A167:; return;
label_A169:; return;
label_A16B:; return;
label_A16D:; return;
label_A16F:; return;
label_A171:; return;
label_A173:; return;
label_A175:; return;
label_A177:; return;
label_A179:; return;
label_A17B:; return;
label_A17D:; return;
label_A17F:; return;
label_A181:; return;
label_A183:; return;
label_A185:; return;
label_A187:; return;
label_A189:; return;
label_A18B:; return;
label_A18D:; return;
label_A18F:; return;
label_A191:; return;
label_A193:; return;
label_A195:; return;
label_A197:; return;
label_A199:; return;
label_A19B:; return;
label_A19D:; return;
label_A19F:; return;
label_A1A1:; return;
label_A1A3:; return;
label_A1A5:; return;
label_A1A7:; return;
label_A1A9:; return;
label_A1AB:; return;
label_A1AD:; return;
label_A1AF:; return;
label_A1B1:; return;
label_A1B3:; return;
label_A1B5:; return;
label_A1B7:; return;
label_A1B9:; return;
label_A1BB:; return;
label_A1BD:; return;
label_A1BF:; return;
label_A1C0:; return;
label_A1C1:; return;
label_A1C2:; return;
label_A1C3:; return;
label_A1C4:; return;
label_A1C5:; return;
label_A1C7:; return;
label_A1C9:; return;
label_A1CB:; return;
label_A1CD:; return;
label_A1CF:; return;
label_A1D1:; return;
label_A1D3:; return;
label_A1D5:; return;
label_A1D7:; return;
label_A1D9:; return;
label_A1DB:; return;
label_A1DD:; return;
label_A1DF:; return;
label_A1E2:; return;
label_A1E5:; return;
label_A1E8:; return;
label_A1E9:; return;
label_A1EA:; return;
label_A1EB:; return;
label_A1EC:; return;
label_A1ED:; return;
label_A1EE:; return;
label_A1EF:; return;
label_A1F0:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F3:; return;
label_A1F4:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F8:; return;
label_A1FA:; return;
label_A1FC:; return;
label_A1FE:; return;
label_A200:; return;
label_A202:; return;
label_A204:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20C:; return;
label_A20E:; return;
label_A210:; return;
label_A212:; return;
label_A214:; return;
label_A216:; return;
label_A218:; return;
label_A21A:; return;
label_A21C:; return;
label_A21E:; return;
label_A220:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22C:; return;
label_A22E:; return;
label_A230:; return;
label_A232:; return;
label_A234:; return;
label_A236:; return;
label_A237:; return;
label_A238:; return;
label_A239:; return;
label_A23A:; return;
label_A23B:; return;
label_A23C:; return;
label_A23D:; return;
label_A23E:; return;
label_A23F:; return;
label_A240:; return;
label_A241:; return;
label_A242:; return;
label_A243:; return;
label_A244:; return;
label_A245:; return;
label_A246:; return;
label_A247:; return;
label_A248:; return;
label_A249:; return;
label_A24B:; return;
label_A24D:; return;
label_A24F:; return;
label_A251:; return;
label_A252:; return;
label_A253:; return;
label_A254:; return;
label_A255:; return;
label_A256:; return;
label_A257:; return;
label_A258:; return;
label_A259:; return;
label_A25A:; return;
label_A25B:; return;
label_A25C:; return;
label_A25D:; return;
label_A25E:; return;
label_A25F:; return;
label_A260:; return;
label_A261:; return;
label_A262:; return;
label_A263:; return;
label_A264:; return;
label_A265:; return;
label_A266:; return;
label_A267:; return;
label_A268:; return;
label_A269:; return;
label_A26A:; return;
label_A26C:; return;
label_A26D:; return;
label_A26E:; return;
label_A26F:; return;
label_A271:; return;
label_A272:; return;
label_A273:; return;
label_A274:; return;
label_A275:; return;
label_A276:; return;
label_A277:; return;
label_A278:; return;
label_A279:; return;
label_A27A:; return;
label_A27B:; return;
label_A27C:; return;
label_A27D:; return;
label_A27E:; return;
label_A280:; return;
label_A282:; return;
label_A284:; return;
label_A286:; return;
label_A287:; return;
label_A289:; return;
label_A28B:; return;
label_A28E:; return;
label_A290:; return;
label_A291:; return;
label_A292:; return;
label_A293:; return;
label_A294:; return;
label_A295:; return;
label_A296:; return;
label_A297:; return;
label_A298:; return;
label_A299:; return;
label_A29A:; return;
label_A29B:; return;
label_A29C:; return;
label_A29D:; return;
label_A29E:; return;
label_A2A0:; return;
label_A2A1:; return;
label_A2A3:; return;
label_A2A5:; return;
label_A2A7:; return;
label_A2AA:; return;
label_A2AD:; return;
label_A2B0:; return;
label_A2B1:; return;
label_A2B2:; return;
label_A2B3:; return;
label_A2B4:; return;
label_A2B5:; return;
label_A2B6:; return;
label_A2B7:; return;
label_A2B8:; return;
label_A2B9:; return;
label_A2BA:; return;
label_A2BB:; return;
label_A2BC:; return;
label_A2BD:; return;
label_A2BE:; return;
label_A2C0:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C7:; return;
label_A2C9:; return;
label_A2CB:; return;
label_A2CE:; return;
label_A2D0:; return;
label_A2D1:; return;
label_A2D2:; return;
label_A2D3:; return;
label_A2D4:; return;
label_A2D5:; return;
label_A2D6:; return;
label_A2D7:; return;
label_A2D8:; return;
label_A2D9:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DC:; return;
label_A2DD:; return;
label_A2DE:; return;
label_A2E0:; return;
label_A2E1:; return;
label_A2E3:; return;
label_A2E5:; return;
label_A2E7:; return;
label_A2EA:; return;
label_A2ED:; return;
label_A2F0:; return;
label_A2F1:; return;
label_A2F2:; return;
label_A2F3:; return;
label_A2F4:; return;
label_A2F5:; return;
label_A2F6:; return;
label_A2F7:; return;
label_A2F8:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A300:; return;
label_A302:; return;
label_A304:; return;
label_A306:; return;
label_A308:; return;
label_A30A:; return;
label_A30C:; return;
label_A30E:; return;
label_A310:; return;
label_A312:; return;
label_A314:; return;
label_A315:; return;
label_A316:; return;
label_A317:; return;
label_A318:; return;
label_A31A:; return;
label_A31B:; return;
label_A31D:; return;
label_A31F:; return;
label_A321:; return;
label_A323:; return;
label_A325:; return;
label_A327:; return;
label_A329:; return;
label_A32B:; return;
label_A32D:; return;
label_A32F:; return;
label_A331:; return;
label_A333:; return;
label_A334:; return;
label_A335:; return;
label_A336:; return;
label_A337:; return;
label_A338:; return;
label_A33A:; return;
label_A33C:; return;
label_A33F:; return;
label_A341:; return;
label_A343:; return;
label_A345:; return;
label_A347:; return;
label_A349:; return;
label_A34B:; return;
label_A34D:; return;
label_A34F:; return;
label_A351:; return;
label_A353:; return;
label_A354:; return;
label_A355:; return;
label_A356:; return;
label_A357:; return;
label_A358:; return;
label_A35A:; return;
label_A35B:; return;
label_A35D:; return;
label_A35F:; return;
label_A361:; return;
label_A363:; return;
label_A365:; return;
label_A367:; return;
label_A369:; return;
label_A36B:; return;
label_A36D:; return;
label_A36F:; return;
label_A371:; return;
label_A373:; return;
label_A374:; return;
label_A375:; return;
label_A376:; return;
label_A377:; return;
label_A378:; return;
label_A37A:; return;
label_A37C:; return;
label_A37D:; return;
label_A37F:; return;
label_A381:; return;
label_A383:; return;
label_A385:; return;
label_A387:; return;
label_A389:; return;
label_A38B:; return;
label_A38D:; return;
label_A38F:; return;
label_A391:; return;
label_A393:; return;
label_A394:; return;
label_A395:; return;
label_A396:; return;
label_A397:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39F:; return;
label_A3A1:; return;
label_A3A3:; return;
label_A3A5:; return;
label_A3A8:; return;
label_A3AA:; return;
label_A3AD:; return;
label_A3AF:; return;
label_A3B1:; return;
label_A3B3:; return;
label_A3B4:; return;
label_A3B5:; return;
label_A3B6:; return;
label_A3B7:; return;
label_A3B8:; return;
label_A3BA:; return;
label_A3BB:; return;
label_A3BD:; return;
label_A3BF:; return;
label_A3C1:; return;
label_A3C3:; return;
label_A3C5:; return;
label_A3C7:; return;
label_A3C9:; return;
label_A3CB:; return;
label_A3CD:; return;
label_A3CF:; return;
label_A3D1:; return;
label_A3D3:; return;
label_A3D4:; return;
label_A3D5:; return;
label_A3D6:; return;
label_A3D7:; return;
label_A3D8:; return;
label_A3DA:; return;
label_A3DC:; return;
label_A3DD:; return;
label_A3DF:; return;
label_A3E1:; return;
label_A3E3:; return;
label_A3E5:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EB:; return;
label_A3ED:; return;
label_A3EF:; return;
label_A3F1:; return;
label_A3F3:; return;
label_A3F4:; return;
label_A3F5:; return;
label_A3F6:; return;
label_A3F7:; return;
label_A3F8:; return;
label_A3FA:; return;
label_A3FC:; return;
label_A3FE:; return;
label_A3FF:; return;
label_A400:; return;
label_A402:; return;
label_A404:; return;
label_A406:; return;
label_A408:; return;
label_A40A:; return;
label_A40C:; return;
label_A40E:; return;
label_A411:; return;
label_A413:; return;
label_A414:; return;
label_A415:; return;
label_A416:; return;
label_A417:; return;
label_A418:; return;
label_A41A:; return;
label_A41B:; return;
label_A41D:; return;
label_A41E:; return;
label_A421:; return;
label_A423:; return;
label_A425:; return;
label_A427:; return;
label_A429:; return;
label_A42B:; return;
label_A42D:; return;
label_A42F:; return;
label_A431:; return;
label_A433:; return;
label_A434:; return;
label_A435:; return;
label_A436:; return;
label_A437:; return;
label_A438:; return;
label_A43A:; return;
label_A43C:; return;
label_A43D:; return;
label_A43F:; return;
label_A441:; return;
label_A443:; return;
label_A445:; return;
label_A447:; return;
label_A449:; return;
label_A44B:; return;
label_A44D:; return;
label_A44F:; return;
label_A451:; return;
label_A453:; return;
label_A454:; return;
label_A455:; return;
label_A456:; return;
label_A457:; return;
label_A458:; return;
label_A45A:; return;
label_A45C:; return;
label_A45E:; return;
label_A460:; return;
label_A462:; return;
label_A464:; return;
label_A466:; return;
label_A468:; return;
label_A46A:; return;
label_A46C:; return;
label_A46E:; return;
label_A470:; return;
label_A472:; return;
label_A474:; return;
label_A475:; return;
label_A476:; return;
label_A477:; return;
label_A478:; return;
label_A47A:; return;
label_A47D:; return;
label_A480:; return;
label_A483:; return;
label_A486:; return;
label_A489:; return;
label_A48C:; return;
label_A48F:; return;
label_A492:; return;
label_A495:; return;
label_A496:; return;
label_A497:; return;
label_A498:; return;
label_A499:; return;
label_A49A:; return;
label_A49C:; return;
label_A49E:; return;
label_A4A0:; return;
label_A4A2:; return;
label_A4A4:; return;
label_A4A6:; return;
label_A4A8:; return;
label_A4AA:; return;
label_A4AC:; return;
label_A4AE:; return;
label_A4B0:; return;
label_A4B2:; return;
label_A4B3:; return;
label_A4B4:; return;
label_A4B5:; return;
label_A4B6:; return;
label_A4B7:; return;
label_A4B8:; return;
label_A4B9:; return;
label_A4BA:; return;
label_A4BC:; return;
label_A4BE:; return;
label_A4C0:; return;
label_A4C2:; return;
label_A4C4:; return;
label_A4C7:; return;
label_A4C8:; return;
label_A4CA:; return;
label_A4CC:; return;
label_A4CE:; return;
label_A4D0:; return;
label_A4D2:; return;
label_A4D3:; return;
label_A4D4:; return;
label_A4D5:; return;
label_A4D6:; return;
label_A4D7:; return;
label_A4D8:; return;
label_A4D9:; return;
label_A4DA:; return;
label_A4DC:; return;
label_A4DE:; return;
label_A4E0:; return;
label_A4E2:; return;
label_A4E4:; return;
label_A4E6:; return;
label_A4E7:; return;
label_A4E9:; return;
label_A4EB:; return;
label_A4ED:; return;
label_A4EF:; return;
label_A4F1:; return;
label_A4F2:; return;
label_A4F3:; return;
label_A4F4:; return;
label_A4F5:; return;
label_A4F6:; return;
label_A4F7:; return;
label_A4F8:; return;
label_A4F9:; return;
label_A4FA:; return;
label_A4FC:; return;
label_A4FE:; return;
label_A500:; return;
label_A502:; return;
label_A504:; return;
label_A506:; return;
label_A507:; return;
label_A509:; return;
label_A50B:; return;
label_A50D:; return;
label_A50F:; return;
label_A511:; return;
label_A512:; return;
label_A513:; return;
label_A514:; return;
label_A515:; return;
label_A516:; return;
label_A517:; return;
label_A518:; return;
label_A519:; return;
label_A51A:; return;
label_A51C:; return;
label_A51E:; return;
label_A520:; return;
label_A522:; return;
label_A524:; return;
label_A526:; return;
label_A527:; return;
label_A529:; return;
label_A52B:; return;
label_A52D:; return;
label_A52F:; return;
label_A531:; return;
label_A532:; return;
label_A533:; return;
label_A534:; return;
label_A535:; return;
label_A536:; return;
label_A538:; return;
label_A53A:; return;
label_A53C:; return;
label_A53E:; return;
label_A540:; return;
label_A542:; return;
label_A544:; return;
label_A546:; return;
label_A548:; return;
label_A54A:; return;
label_A54C:; return;
label_A54E:; return;
label_A550:; return;
label_A552:; return;
label_A554:; return;
label_A556:; return;
label_A558:; return;
label_A55A:; return;
label_A55C:; return;
label_A55E:; return;
label_A560:; return;
label_A562:; return;
label_A564:; return;
label_A566:; return;
label_A568:; return;
label_A56A:; return;
label_A56C:; return;
label_A56E:; return;
label_A570:; return;
label_A572:; return;
label_A574:; return;
label_A576:; return;
label_A578:; return;
label_A57A:; return;
label_A57C:; return;
label_A57E:; return;
label_A580:; return;
label_A582:; return;
label_A584:; return;
label_A586:; return;
label_A588:; return;
label_A58A:; return;
label_A58C:; return;
label_A58E:; return;
label_A590:; return;
label_A592:; return;
label_A594:; return;
label_A596:; return;
label_A598:; return;
label_A59A:; return;
label_A59C:; return;
label_A59E:; return;
label_A5A0:; return;
label_A5A2:; return;
label_A5A4:; return;
label_A5A6:; return;
label_A5A8:; return;
label_A5AA:; return;
label_A5AC:; return;
label_A5AE:; return;
label_A5B0:; return;
label_A5B2:; return;
label_A5B4:; return;
label_A5B6:; return;
label_A5B7:; return;
label_A5B8:; return;
label_A5B9:; return;
label_A5BA:; return;
label_A5BB:; return;
label_A5BD:; return;
label_A5BE:; return;
label_A5BF:; return;
label_A5C0:; return;
label_A5C2:; return;
label_A5C4:; return;
label_A5C5:; return;
label_A5C6:; return;
label_A5C7:; return;
label_A5C8:; return;
label_A5C9:; return;
label_A5CA:; return;
label_A5CB:; return;
label_A5CC:; return;
label_A5CD:; return;
label_A5CE:; return;
label_A5CF:; return;
label_A5D0:; return;
label_A5D1:; return;
label_A5D2:; return;
label_A5D3:; return;
label_A5D4:; return;
label_A5D5:; return;
label_A5D6:; return;
label_A5D7:; return;
label_A5D8:; return;
label_A5D9:; return;
label_A5DA:; return;
label_A5DB:; return;
label_A5DC:; return;
label_A5DD:; return;
label_A5DE:; return;
label_A5DF:; return;
label_A5E0:; return;
label_A5E1:; return;
label_A5E2:; return;
label_A5E3:; return;
label_A5E4:; return;
label_A5E5:; return;
label_A5E6:; return;
label_A5E8:; return;
label_A5E9:; return;
label_A5EA:; return;
label_A5EB:; return;
label_A5EC:; return;
label_A5ED:; return;
label_A5EF:; return;
label_A5F2:; return;
label_A5F5:; return;
label_A5F8:; return;
label_A5FA:; return;
label_A5FC:; return;
label_A5FE:; return;
label_A600:; return;
label_A602:; return;
label_A604:; return;
label_A606:; return;
label_A608:; return;
label_A60A:; return;
label_A60C:; return;
label_A60E:; return;
label_A610:; return;
label_A612:; return;
label_A614:; return;
label_A616:; return;
label_A618:; return;
label_A61A:; return;
label_A61C:; return;
label_A61E:; return;
label_A620:; return;
label_A622:; return;
label_A624:; return;
label_A626:; return;
label_A628:; return;
label_A62A:; return;
label_A62C:; return;
label_A62E:; return;
label_A630:; return;
label_A632:; return;
label_A634:; return;
label_A636:; return;
label_A637:; return;
label_A638:; return;
label_A639:; return;
label_A63A:; return;
label_A63B:; return;
label_A63C:; return;
label_A63D:; return;
label_A63E:; return;
label_A63F:; return;
label_A640:; return;
label_A641:; return;
label_A642:; return;
label_A643:; return;
label_A644:; return;
label_A645:; return;
label_A646:; return;
label_A647:; return;
label_A648:; return;
label_A649:; return;
label_A64B:; return;
label_A64D:; return;
label_A64F:; return;
label_A651:; return;
label_A652:; return;
label_A653:; return;
label_A654:; return;
label_A655:; return;
label_A656:; return;
label_A657:; return;
label_A658:; return;
label_A659:; return;
label_A65A:; return;
label_A65B:; return;
label_A65C:; return;
label_A65D:; return;
label_A65E:; return;
label_A65F:; return;
label_A660:; return;
label_A661:; return;
label_A662:; return;
label_A663:; return;
label_A664:; return;
label_A665:; return;
label_A666:; return;
label_A667:; return;
label_A668:; return;
label_A669:; return;
label_A66A:; return;
label_A66C:; return;
label_A66D:; return;
label_A66E:; return;
label_A66F:; return;
label_A671:; return;
label_A672:; return;
label_A673:; return;
label_A674:; return;
label_A675:; return;
label_A676:; return;
label_A677:; return;
label_A678:; return;
label_A679:; return;
label_A67A:; return;
label_A67B:; return;
label_A67C:; return;
label_A67D:; return;
label_A67E:; return;
label_A680:; return;
label_A682:; return;
label_A684:; return;
label_A686:; return;
label_A687:; return;
label_A689:; return;
label_A68B:; return;
label_A68E:; return;
label_A690:; return;
label_A691:; return;
label_A692:; return;
label_A693:; return;
label_A694:; return;
label_A695:; return;
label_A696:; return;
label_A697:; return;
label_A698:; return;
label_A699:; return;
label_A69A:; return;
label_A69B:; return;
label_A69C:; return;
label_A69D:; return;
label_A69E:; return;
label_A6A0:; return;
label_A6A1:; return;
label_A6A3:; return;
label_A6A5:; return;
label_A6A7:; return;
label_A6AA:; return;
label_A6AD:; return;
label_A6B0:; return;
label_A6B1:; return;
label_A6B2:; return;
label_A6B3:; return;
label_A6B4:; return;
label_A6B5:; return;
label_A6B6:; return;
label_A6B7:; return;
label_A6B8:; return;
label_A6B9:; return;
label_A6BA:; return;
label_A6BB:; return;
label_A6BC:; return;
label_A6BD:; return;
label_A6BE:; return;
label_A6C0:; return;
label_A6C2:; return;
label_A6C4:; return;
label_A6C6:; return;
label_A6C7:; return;
label_A6C9:; return;
label_A6CB:; return;
label_A6CE:; return;
label_A6D0:; return;
label_A6D1:; return;
label_A6D2:; return;
label_A6D3:; return;
label_A6D4:; return;
label_A6D5:; return;
label_A6D6:; return;
label_A6D7:; return;
label_A6D8:; return;
label_A6D9:; return;
label_A6DA:; return;
label_A6DB:; return;
label_A6DC:; return;
label_A6DD:; return;
label_A6DE:; return;
label_A6E0:; return;
label_A6E1:; return;
label_A6E3:; return;
label_A6E5:; return;
label_A6E7:; return;
label_A6EA:; return;
label_A6ED:; return;
label_A6F0:; return;
label_A6F1:; return;
label_A6F2:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F6:; return;
label_A6F7:; return;
label_A6F8:; return;
label_A6FA:; return;
label_A6FC:; return;
label_A6FE:; return;
label_A700:; return;
label_A702:; return;
label_A704:; return;
label_A706:; return;
label_A708:; return;
label_A70A:; return;
label_A70C:; return;
label_A70E:; return;
label_A710:; return;
label_A712:; return;
label_A714:; return;
label_A715:; return;
label_A716:; return;
label_A717:; return;
label_A718:; return;
label_A71A:; return;
label_A71B:; return;
label_A71D:; return;
label_A71F:; return;
label_A721:; return;
label_A723:; return;
label_A726:; return;
label_A728:; return;
label_A72A:; return;
label_A72C:; return;
label_A72E:; return;
label_A730:; return;
label_A732:; return;
label_A734:; return;
label_A735:; return;
label_A736:; return;
label_A737:; return;
label_A738:; return;
label_A73A:; return;
label_A73C:; return;
label_A73F:; return;
label_A741:; return;
label_A743:; return;
label_A745:; return;
label_A748:; return;
label_A74A:; return;
label_A74D:; return;
label_A74F:; return;
label_A751:; return;
label_A753:; return;
label_A754:; return;
label_A755:; return;
label_A756:; return;
label_A757:; return;
label_A758:; return;
label_A75A:; return;
label_A75B:; return;
label_A75D:; return;
label_A75F:; return;
label_A761:; return;
label_A763:; return;
label_A766:; return;
label_A768:; return;
label_A76A:; return;
label_A76C:; return;
label_A76E:; return;
label_A770:; return;
label_A772:; return;
label_A774:; return;
label_A775:; return;
label_A776:; return;
label_A777:; return;
label_A778:; return;
label_A77A:; return;
label_A77C:; return;
label_A77D:; return;
label_A77F:; return;
label_A781:; return;
label_A783:; return;
label_A785:; return;
label_A787:; return;
label_A789:; return;
label_A78B:; return;
label_A78D:; return;
label_A78F:; return;
label_A791:; return;
label_A793:; return;
label_A794:; return;
label_A795:; return;
label_A796:; return;
label_A797:; return;
label_A798:; return;
label_A79A:; return;
label_A79C:; return;
label_A79E:; return;
label_A7A0:; return;
label_A7A3:; return;
label_A7A6:; return;
label_A7A8:; return;
label_A7AA:; return;
label_A7AC:; return;
label_A7AE:; return;
label_A7AF:; return;
label_A7B1:; return;
label_A7B3:; return;
label_A7B4:; return;
label_A7B5:; return;
label_A7B6:; return;
label_A7B7:; return;
label_A7B8:; return;
label_A7BA:; return;
label_A7BC:; return;
label_A7BF:; return;
label_A7C2:; return;
label_A7C4:; return;
label_A7C6:; return;
label_A7C8:; return;
label_A7CA:; return;
label_A7CC:; return;
label_A7CF:; return;
label_A7D1:; return;
label_A7D3:; return;
label_A7D4:; return;
label_A7D5:; return;
label_A7D6:; return;
label_A7D7:; return;
label_A7D8:; return;
label_A7DA:; return;
label_A7DC:; return;
label_A7DE:; return;
label_A7E0:; return;
label_A7E3:; return;
label_A7E6:; return;
label_A7E8:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7F0:; return;
label_A7F2:; return;
label_A7F4:; return;
label_A7F5:; return;
label_A7F6:; return;
label_A7F7:; return;
label_A7F8:; return;
label_A7FA:; return;
label_A7FB:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A801:; return;
label_A803:; return;
label_A805:; return;
label_A807:; return;
label_A809:; return;
label_A80B:; return;
label_A80D:; return;
label_A80F:; return;
label_A811:; return;
label_A813:; return;
label_A814:; return;
label_A815:; return;
label_A816:; return;
label_A817:; return;
label_A818:; return;
label_A81A:; return;
label_A81C:; return;
label_A81E:; return;
label_A81F:; return;
label_A820:; return;
label_A822:; return;
label_A824:; return;
label_A826:; return;
label_A828:; return;
label_A82A:; return;
label_A82C:; return;
label_A82E:; return;
label_A831:; return;
label_A833:; return;
label_A834:; return;
label_A835:; return;
label_A836:; return;
label_A837:; return;
label_A838:; return;
label_A83A:; return;
label_A83B:; return;
label_A83D:; return;
label_A83E:; return;
label_A841:; return;
label_A843:; return;
label_A845:; return;
label_A847:; return;
label_A849:; return;
label_A84B:; return;
label_A84D:; return;
label_A84F:; return;
label_A851:; return;
label_A853:; return;
label_A854:; return;
label_A855:; return;
label_A856:; return;
label_A857:; return;
label_A858:; return;
label_A85A:; return;
label_A85C:; return;
label_A85D:; return;
label_A85F:; return;
label_A861:; return;
label_A863:; return;
label_A865:; return;
label_A867:; return;
label_A869:; return;
label_A86B:; return;
label_A86D:; return;
label_A86F:; return;
label_A871:; return;
label_A873:; return;
label_A874:; return;
label_A875:; return;
label_A876:; return;
label_A877:; return;
label_A878:; return;
label_A87A:; return;
label_A87D:; return;
label_A880:; return;
label_A883:; return;
label_A886:; return;
label_A889:; return;
label_A88C:; return;
label_A88F:; return;
label_A892:; return;
label_A895:; return;
label_A896:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89C:; return;
label_A89E:; return;
label_A8A0:; return;
label_A8A2:; return;
label_A8A4:; return;
label_A8A6:; return;
label_A8A8:; return;
label_A8AA:; return;
label_A8AC:; return;
label_A8AE:; return;
label_A8B0:; return;
label_A8B2:; return;
label_A8B3:; return;
label_A8B4:; return;
label_A8B5:; return;
label_A8B6:; return;
label_A8B7:; return;
label_A8B8:; return;
label_A8B9:; return;
label_A8BA:; return;
label_A8BC:; return;
label_A8BE:; return;
label_A8C0:; return;
label_A8C2:; return;
label_A8C4:; return;
label_A8C7:; return;
label_A8C8:; return;
label_A8CA:; return;
label_A8CC:; return;
label_A8CE:; return;
label_A8D0:; return;
label_A8D2:; return;
label_A8D3:; return;
label_A8D4:; return;
label_A8D5:; return;
label_A8D6:; return;
label_A8D7:; return;
label_A8D8:; return;
label_A8D9:; return;
label_A8DA:; return;
label_A8DC:; return;
label_A8DE:; return;
label_A8E0:; return;
label_A8E2:; return;
label_A8E4:; return;
label_A8E6:; return;
label_A8E7:; return;
label_A8E9:; return;
label_A8EB:; return;
label_A8ED:; return;
label_A8EF:; return;
label_A8F1:; return;
label_A8F2:; return;
label_A8F3:; return;
label_A8F4:; return;
label_A8F5:; return;
label_A8F6:; return;
label_A8F7:; return;
label_A8F8:; return;
label_A8F9:; return;
label_A8FA:; return;
label_A8FC:; return;
label_A8FE:; return;
label_A900:; return;
label_A902:; return;
label_A904:; return;
label_A906:; return;
label_A907:; return;
label_A909:; return;
label_A90B:; return;
label_A90D:; return;
label_A90F:; return;
label_A911:; return;
label_A912:; return;
label_A913:; return;
label_A914:; return;
label_A915:; return;
label_A916:; return;
label_A917:; return;
label_A918:; return;
label_A919:; return;
label_A91A:; return;
label_A91C:; return;
label_A91E:; return;
label_A920:; return;
label_A922:; return;
label_A924:; return;
label_A926:; return;
label_A927:; return;
label_A929:; return;
label_A92B:; return;
label_A92D:; return;
label_A92F:; return;
label_A931:; return;
label_A932:; return;
label_A933:; return;
label_A934:; return;
label_A935:; return;
label_A936:; return;
label_A938:; return;
label_A93A:; return;
label_A93C:; return;
label_A93E:; return;
label_A940:; return;
label_A942:; return;
label_A944:; return;
label_A946:; return;
label_A948:; return;
label_A94A:; return;
label_A94C:; return;
label_A94E:; return;
label_A950:; return;
label_A952:; return;
label_A954:; return;
label_A956:; return;
label_A958:; return;
label_A95A:; return;
label_A95C:; return;
label_A95E:; return;
label_A960:; return;
label_A962:; return;
label_A964:; return;
label_A966:; return;
label_A968:; return;
label_A96A:; return;
label_A96C:; return;
label_A96E:; return;
label_A970:; return;
label_A972:; return;
label_A974:; return;
label_A976:; return;
label_A978:; return;
label_A97A:; return;
label_A97C:; return;
label_A97E:; return;
label_A980:; return;
label_A982:; return;
label_A984:; return;
label_A986:; return;
label_A988:; return;
label_A98A:; return;
label_A98C:; return;
label_A98E:; return;
label_A990:; return;
label_A992:; return;
label_A994:; return;
label_A996:; return;
label_A998:; return;
label_A99A:; return;
label_A99C:; return;
label_A99E:; return;
label_A9A0:; return;
label_A9A2:; return;
label_A9A4:; return;
label_A9A6:; return;
label_A9A8:; return;
label_A9AA:; return;
label_A9AC:; return;
label_A9AE:; return;
label_A9B0:; return;
label_A9B2:; return;
label_A9B4:; return;
label_A9B6:; return;
label_A9B7:; return;
label_A9B8:; return;
label_A9B9:; return;
label_A9BA:; return;
label_A9BB:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C2:; return;
label_A9C4:; return;
label_A9C5:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C8:; return;
label_A9C9:; return;
label_A9CA:; return;
label_A9CB:; return;
label_A9CC:; return;
label_A9CD:; return;
label_A9CE:; return;
label_A9CF:; return;
label_A9D0:; return;
label_A9D1:; return;
label_A9D2:; return;
label_A9D3:; return;
label_A9D4:; return;
label_A9D5:; return;
label_A9D6:; return;
label_A9D7:; return;
label_A9D8:; return;
label_A9D9:; return;
label_A9DA:; return;
label_A9DB:; return;
label_A9DC:; return;
label_A9DD:; return;
label_A9DE:; return;
label_A9DF:; return;
label_A9E0:; return;
label_A9E1:; return;
label_A9E2:; return;
label_A9E3:; return;
label_A9E4:; return;
label_A9E5:; return;
label_A9E6:; return;
label_A9E8:; return;
label_A9E9:; return;
label_A9EA:; return;
label_A9EB:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9EF:; return;
label_A9F2:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FA:; return;
label_A9FB:; return;
label_A9FD:; return;
label_AA00:; return;
label_AA02:; return;
label_AA03:; return;
label_AA05:; return;
label_AA06:; return;
label_AA08:; return;
label_AA0A:; return;
label_AA0C:; return;
label_AA0E:; return;
label_AA10:; return;
label_AA12:; return;
label_AA14:; return;
label_AA16:; return;
label_AA18:; return;
label_AA1A:; return;
label_AA1C:; return;
label_AA1E:; return;
label_AA20:; return;
label_AA22:; return;
label_AA25:; return;
label_AA27:; return;
label_AA28:; return;
label_AA2A:; return;
label_AA2D:; return;
label_AA2F:; return;
label_AA31:; return;
label_AA33:; return;
label_AA35:; return;
label_AA37:; return;
label_AA39:; return;
label_AA3B:; return;
label_AA3D:; return;
label_AA3F:; return;
label_AA41:; return;
label_AA44:; return;
label_AA45:; return;
label_AA47:; return;
label_AA48:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4D:; return;
label_AA5A:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5F:; return;
}

void func_BD6A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD6A_b3");
#endif
label_BD6A:;
    /* $BD6A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD6A); return;
}

void func_87E9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87E9_b3");
#endif
label_87E9:;
    /* $87E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x26; FLAG_NZ(g_cpu.A);
label_87EB:;
    /* $87EB: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_87ED:;
    /* $87ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAB; FLAG_NZ(g_cpu.A);
label_87EF:;
    /* $87EF: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_87F1:;
    /* $87F1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_87F4:;
    /* $87F4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_87F6:;
    /* $87F6: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_87F9:;
    /* $87F9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_87FB:;
    /* $87FB: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_87FE:;
    /* $87FE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_87FF:;
    /* $87FF: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_8801:;
    /* $8801: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8803:;
    /* $8803: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_8806:;
    /* $8806: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8807:;
    /* $8807: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8801;
    }
label_8809:;
    /* $8809: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_880B:;
    /* $880B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_880C:;
    /* $880C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8801;
    }
label_880E:;
    /* $880E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8812, 3);
label_8811:;
    /* $8811: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A35_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A35_b3");
#endif
label_9A35:;
    /* $9A35: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_9A37:;
    /* $9A37: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A39:;
    /* $9A39: 99 */ maybe_trigger_vblank(5); nes_write((0x0180 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A3C:;
    /* $9A3C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A3D:;
    /* $9A3D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A37;
    }
label_9A3F:;
    /* $9A3F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8BAA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BAA_b3");
#endif
label_8BAA:;
    /* $8BAA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9901, 3);
label_8BAD:;
    /* $8BAD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9A29, 3);
label_8BB0:;
    /* $8BB0: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x988B, 3);
label_8BB3:;
    /* $8BB3: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x99D1, 3);
label_8BB6:;
    /* $8BB6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8BB8:;
    /* $8BB8: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_8BBB:;
    /* $8BBB: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8BBE:;
    /* $8BBE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8BBF_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BBF_b3");
#endif
label_8BBF:;
    /* $8BBF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9901, 3);
label_8BC2:;
    /* $8BC2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9A29, 3);
label_8BC5:;
    /* $8BC5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x988B, 3);
label_8BC8:;
    /* $8BC8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x99F7, 3);
label_8BCB:;
    /* $8BCB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8BCD:;
    /* $8BCD: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_8BD0:;
    /* $8BD0: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8BD3:;
    /* $8BD3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8311_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8313;
        case 2: goto label_8383;
    }
label_8311:;
    /* $8311: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC9; FLAG_NZ(g_cpu.A);
label_8313:;
    /* $8313: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8315:;
    /* $8315: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_8317:;
    /* $8317: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8319:;
    /* $8319: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9A35, 3);
label_831C:;
    /* $831C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x988B, 3);
label_831F:;
    /* $831F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE9; FLAG_NZ(g_cpu.A);
label_8321:;
    /* $8321: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8323:;
    /* $8323: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_8325:;
    /* $8325: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_8327:;
    /* $8327: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_832A:;
    /* $832A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_832C:;
    /* $832C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_832F:;
    /* $832F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8331:;
    /* $8331: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_8334:;
    /* $8334: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8335:;
    /* $8335: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_8337:;
    /* $8337: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8339:;
    /* $8339: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_833C:;
    /* $833C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_833D:;
    /* $833D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8337;
    }
label_833F:;
    /* $833F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8341:;
    /* $8341: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8342:;
    /* $8342: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8337;
    }
label_8344:;
    /* $8344: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE1; FLAG_NZ(g_cpu.A);
label_8346:;
    /* $8346: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8348:;
    /* $8348: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05B0); FLAG_NZ(g_cpu.A);
label_834B:;
    /* $834B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_834D:;
    /* $834D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8353; }
label_834F:;
    /* $834F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE2; FLAG_NZ(g_cpu.A);
label_8351:;
    /* $8351: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8353:;
    /* $8353: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_8356:;
    /* $8356: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_8358:;
    /* $8358: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_835B:;
    /* $835B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_835D:;
    /* $835D: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_8360:;
    /* $8360: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8362:;
    /* $8362: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_8365:;
    /* $8365: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8366:;
    /* $8366: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_8368:;
    /* $8368: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_836A:;
    /* $836A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_836C:;
    /* $836C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_836F:;
    /* $836F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_8371:;
    /* $8371: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_8374:;
    /* $8374: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8376:;
    /* $8376: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_8379:;
    /* $8379: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_837C:;
    /* $837C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_837E:;
    /* $837E: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_8381:;
    /* $8381: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8D; FLAG_NZ(g_cpu.A);
label_8383:;
    /* $8383: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_8386:;
    /* $8386: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05B0); FLAG_NZ(g_cpu.A);
label_8389:;
    /* $8389: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_838A:;
    /* $838A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xE0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xE0); g_cpu.A=r&0xFF; }
label_838C:;
    /* $838C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_838F:;
    /* $838F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_8391:;
    /* $8391: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8393:;
    /* $8393: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_8395:;
    /* $8395: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_8398:;
    /* $8398: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAD; FLAG_NZ(g_cpu.A);
label_839A:;
    /* $839A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_839D:;
    /* $839D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_839F:;
    /* $839F: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_83A2:;
    /* $83A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_83A4:;
    /* $83A4: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_83A7:;
    /* $83A7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x92; FLAG_NZ(g_cpu.A);
label_83A9:;
    /* $83A9: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_83AC:;
    /* $83AC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05B3); FLAG_NZ(g_cpu.A);
label_83AF:;
    /* $83AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_83B0:;
    /* $83B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xE0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xE0); g_cpu.A=r&0xFF; }
label_83B2:;
    /* $83B2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_83B5:;
    /* $83B5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_83B7:;
    /* $83B7: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_83B9:;
    /* $83B9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_83BB:;
    /* $83BB: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_83BE:;
    /* $83BE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_83C0:;
    /* $83C0: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_83C3:;
    /* $83C3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_83C5:;
    /* $83C5: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_83C8:;
    /* $83C8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8311_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8311_b3");
#endif
    func_8311_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8313_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8313_b3");
#endif
    func_8311_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8383_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8383_b3");
#endif
    func_8311_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_96BE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_96BE_b3");
#endif
label_96BE:;
    /* $96BE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_96C1:;
    /* $96C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_96C3:;
    /* $96C3: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_96C6:;
    /* $96C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_96C8:;
    /* $96C8: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_96CB:;
    /* $96CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_96CD:;
    /* $96CD: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_96D0:;
    /* $96D0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_96D3:;
    /* $96D3: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_96D6:;
    /* $96D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDA; FLAG_NZ(g_cpu.A);
label_96D8:;
    /* $96D8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_96DB:;
    /* $96DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDB; FLAG_NZ(g_cpu.A);
label_96DD:;
    /* $96DD: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_96E0:;
    /* $96E0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_96BD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_96BD_b3");
#endif
label_96BD:;
    /* $96BD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_97F9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_97F9_b3");
#endif
label_97F9:;
    /* $97F9: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_97FC:;
    /* $97FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_97FE:;
    /* $97FE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9801:;
    /* $9801: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9802:;
    /* $9802: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_9804:;
    /* $9804: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9807:;
    /* $9807: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9808:;
    /* $9808: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x15); FLAG_NZ(g_cpu.A);
label_980A:;
    /* $980A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_980D:;
    /* $980D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_980E:;
    /* $980E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_9810:;
    /* $9810: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9813:;
    /* $9813: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9814:;
    /* $9814: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9816:;
    /* $9816: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9810;
    }
label_9818:;
    /* $9818: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_981A:;
    /* $981A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_981D:;
    /* $981D: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_9820:;
    /* $9820: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9785_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9785_b3");
#endif
label_9785:;
    /* $9785: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AD2_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AD2_b3");
#endif
label_9AD2:;
    /* $9AD2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1AD5), 3); return; }
label_9AD4:;
    /* $9AD4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1ADE), 3); return; }
label_9AD6:;
    /* $9AD6: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AD8:;
    /* $9AD8: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9AD9:;
    /* $9AD9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9AFB; }
label_9ADB:;
    /* $9ADB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x30 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9ADD:;
    /* $9ADD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_9B00; }
label_9ADF:;
    /* $9ADF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x38 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9AE1:;
    /* $9AE1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1AF5), 3); return; }
label_9AE3:;
    /* $9AE3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x50 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9AE5:;
    /* $9AE5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9AFA; }
label_9AE7:;
    /* $9AE7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x58 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9AE9:;
    /* $9AE9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9AEA:;
    /* $9AEA: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_9AEB:;
    /* $9AEB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x50 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9AED:;
    /* $9AED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9AEE:;
    /* $9AEE: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9AF0:;
    /* $9AF0: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_9AF1:;
    /* $9AF1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x021A, -1);
label_9AF4:;
    /* $9AF4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x1B20, -1);
label_9AF7:;
    /* $9AF7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9AF8:;
    /* $9AF8: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9AF9:;
    /* $9AF9: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9AFA:;
    /* $9AFA: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9AFB:;
    /* $9AFB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9AFC:;
    /* $9AFC: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2B28, -1);
label_9AFF:;
    /* $9AFF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9B00:;
    /* $9B00: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9B01:;
    /* $9B01: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x0218, -1);
label_9B04:;
    /* $9B04: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_9B26; }
label_9B06:;
    /* $9B06: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7802 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B09:;
    /* $9B09: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9B0A:;
    /* $9B0A: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9B0B:;
    /* $9B0B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9B0C:;
    /* $9B0C: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_9B36; }
label_9B0E:;
    /* $9B0E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9B10:;
    /* $9B10: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_9B11:;
    /* $9B11: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9B12:;
    /* $9B12: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B14:;
    /* $9B14: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_9B15:;
    /* $9B15: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9B16:;
    /* $9B16: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9B18:;
    /* $9B18: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B19:;
    /* $9B19: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9B41; }
label_9B1B:;
    /* $9B1B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9B1C:;
    /* $9B1C: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_9B1D:;
    /* $9B1D: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1B46), 3); return; }
label_9B1F:;
    /* $9B1F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9B20:;
    /* $9B20: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B21:;
    /* $9B21: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9B22:;
    /* $9B22: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9B24:;
    /* $9B24: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9B25:;
    /* $9B25: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9B26:;
    /* $9B26: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9B28:;
    /* $9B28: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x9B28; g_rti_bank = 3; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B29:;
    /* $9B29: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x9B29; g_rti_bank = 3; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B2A:;
    /* $9B2A: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9B2C:;
    /* $9B2C: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9B2D:;
    /* $9B2D: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x9B2D; g_rti_bank = 3; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B2E:;
    /* $9B2E: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_9B30:;
    /* $9B30: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x9B30; g_rti_bank = 3; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B31:;
    /* $9B31: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x9B31; g_rti_bank = 3; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B32:;
    /* $9B32: 1A */ maybe_trigger_vblank(2); /* NOP */
label_9B33:;
    /* $9B33: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9B34:;
    /* $9B34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9B34); return;
label_9B35:;
    /* $9B35: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x9B35; g_rti_bank = 3; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B36:;
    /* $9B36: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0802 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9B39:;
    /* $9B39: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9B3A:;
    /* $9B3A: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9B3B:;
    /* $9B3B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9B3C:;
    /* $9B3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9B3C); return;
label_9B3D:;
    /* $9B3D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9B3E:;
    /* $9B3E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9B40:;
    /* $9B40: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9B41:;
    /* $9B41: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_9B55; }
label_9B43:;
    /* $9B43: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9B45:;
    /* $9B45: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_9B5A; }
label_9B47:;
    /* $9B47: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x30 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9B49:;
    /* $9B49: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_9B4A:;
    /* $9B4A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_9B4B:;
    /* $9B4B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9B4D:;
    /* $9B4D: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_9B4E:;
    /* $9B4E: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9B50:;
    /* $9B50: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9AD2;
    }
label_9B52:;
    /* $9B52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9B52); return;
label_9B53:;
    /* $9B53: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9B55:;
    /* $9B55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9B55); return;
label_9B56:;
    /* $9B56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9B56); return;
label_9B57:;
    /* $9B57: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9B59:;
    /* $9B59: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9B5A:;
    /* $9B5A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9B5B:;
    /* $9B5B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9B5D:;
    /* $9B5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9B5D); return;
label_9B5E:; return;
label_9B5F:; return;
label_9B61:; return;
label_9B62:; return;
label_9B64:; return;
label_9B66:; return;
label_9B67:; return;
label_9B69:; return;
label_9B6B:; return;
label_9B6C:; return;
label_9B6E:; return;
label_9B70:; return;
label_9B71:; return;
label_9B73:; return;
label_9B74:; return;
label_9B75:; return;
label_9B77:; return;
label_9B79:; return;
label_9B7A:; return;
label_9B7C:; return;
label_9B7D:; return;
label_9B7E:; return;
label_9B7F:; return;
label_9B81:; return;
label_9B82:; return;
label_9B84:; return;
label_9B86:; return;
label_9B87:; return;
label_9B88:; return;
label_9B8A:; return;
label_9B8B:; return;
label_9B8D:; return;
label_9B8E:; return;
label_9B8F:; return;
label_9B90:; return;
label_9B92:; return;
label_9B93:; return;
label_9B95:; return;
label_9B96:; return;
label_9B97:; return;
label_9B98:; return;
label_9B99:; return;
label_9B9B:; return;
label_9B9C:; return;
label_9B9E:; return;
label_9B9F:; return;
label_9BA0:; return;
label_9BA1:; return;
label_9BA2:; return;
label_9BA3:; return;
label_9BA4:; return;
label_9BA6:; return;
label_9BA7:; return;
label_9BA8:; return;
label_9BA9:; return;
label_9BAA:; return;
label_9BAC:; return;
label_9BAD:; return;
label_9BAF:; return;
label_9BB0:; return;
label_9BB1:; return;
label_9BB2:; return;
label_9BB3:; return;
label_9BB4:; return;
label_9BB5:; return;
label_9BB7:; return;
label_9BB8:; return;
label_9BB9:; return;
label_9BBA:; return;
label_9BBB:; return;
label_9BBD:; return;
label_9BBE:; return;
label_9BC0:; return;
label_9BC1:; return;
label_9BC2:; return;
label_9BC3:; return;
label_9BC4:; return;
label_9BC5:; return;
label_9BC6:; return;
label_9BC8:; return;
label_9BC9:; return;
label_9BCA:; return;
label_9BCB:; return;
label_9BCC:; return;
label_9BCD:; return;
label_9BCE:; return;
label_9BCF:; return;
label_9BD1:; return;
label_9BD2:; return;
label_9BD3:; return;
label_9BD4:; return;
label_9BD5:; return;
label_9BD6:; return;
label_9BD7:; return;
label_9BD9:; return;
label_9BDB:; return;
label_9BDC:; return;
label_9BDD:; return;
label_9BDF:; return;
label_9BE0:; return;
label_9BE2:; return;
label_9BE4:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BE8:; return;
label_9BEA:; return;
label_9BED:; return;
label_9BEF:; return;
label_9BF1:; return;
label_9BF2:; return;
label_9BF3:; return;
label_9BF5:; return;
label_9BF7:; return;
label_9BFA:; return;
label_9BFC:; return;
label_9BFD:; return;
label_9BFE:; return;
label_9BFF:; return;
label_9C02:; return;
label_9C04:; return;
label_9C07:; return;
label_9C08:; return;
label_9C0B:; return;
label_9C0D:; return;
label_9C0E:; return;
label_9C0F:; return;
label_9C10:; return;
label_9C13:; return;
label_9C15:; return;
label_9C16:; return;
label_9C17:; return;
label_9C18:; return;
label_9C19:; return;
label_9C1C:; return;
label_9C1E:; return;
label_9C1F:; return;
label_9C20:; return;
label_9C21:; return;
label_9C22:; return;
label_9C23:; return;
label_9C24:; return;
label_9C26:; return;
label_9C27:; return;
label_9C28:; return;
label_9C29:; return;
label_9C2A:; return;
label_9C2D:; return;
label_9C2F:; return;
label_9C30:; return;
label_9C31:; return;
label_9C32:; return;
label_9C33:; return;
label_9C34:; return;
label_9C35:; return;
label_9C37:; return;
label_9C38:; return;
label_9C39:; return;
label_9C3A:; return;
label_9C3B:; return;
label_9C3D:; return;
label_9C3E:; return;
label_9C40:; return;
label_9C41:; return;
label_9C42:; return;
label_9C43:; return;
label_9C44:; return;
label_9C45:; return;
label_9C46:; return;
label_9C48:; return;
label_9C49:; return;
label_9C4A:; return;
label_9C4B:; return;
label_9C4C:; return;
label_9C4D:; return;
label_9C4E:; return;
label_9C4F:; return;
label_9C51:; return;
label_9C52:; return;
label_9C53:; return;
label_9C54:; return;
label_9C55:; return;
label_9C56:; return;
label_9C57:; return;
label_9C59:; return;
label_9C5C:; return;
label_9C5D:; return;
label_9C5F:; return;
label_9C60:; return;
label_9C62:; return;
label_9C64:; return;
label_9C65:; return;
label_9C67:; return;
label_9C68:; return;
label_9C6A:; return;
label_9C6B:; return;
label_9C6D:; return;
label_9C6F:; return;
label_9C71:; return;
label_9C72:; return;
label_9C73:; return;
label_9C75:; return;
label_9C77:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7C:; return;
label_9C7D:; return;
label_9C7E:; return;
label_9C7F:; return;
label_9C81:; return;
label_9C82:; return;
label_9C84:; return;
label_9C86:; return;
label_9C87:; return;
label_9C88:; return;
label_9C8A:; return;
label_9C8B:; return;
label_9C8D:; return;
label_9C8E:; return;
label_9C8F:; return;
label_9C90:; return;
label_9C92:; return;
label_9C93:; return;
label_9C95:; return;
label_9C96:; return;
label_9C97:; return;
label_9C98:; return;
label_9C99:; return;
label_9C9A:; return;
label_9C9B:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9C9F:; return;
label_9CA0:; return;
label_9CA1:; return;
label_9CA2:; return;
label_9CA3:; return;
label_9CA4:; return;
label_9CA6:; return;
label_9CA7:; return;
label_9CA8:; return;
label_9CA9:; return;
label_9CAA:; return;
label_9CAC:; return;
label_9CAD:; return;
label_9CAF:; return;
label_9CB0:; return;
label_9CB1:; return;
label_9CB2:; return;
label_9CB3:; return;
label_9CB4:; return;
label_9CB5:; return;
label_9CB7:; return;
label_9CB8:; return;
label_9CB9:; return;
label_9CBA:; return;
label_9CBB:; return;
label_9CBD:; return;
label_9CBE:; return;
label_9CC0:; return;
label_9CC1:; return;
label_9CC2:; return;
label_9CC3:; return;
label_9CC4:; return;
label_9CC5:; return;
label_9CC6:; return;
label_9CC8:; return;
label_9CC9:; return;
label_9CCA:; return;
label_9CCB:; return;
label_9CCC:; return;
label_9CCE:; return;
label_9CCF:; return;
label_9CD1:; return;
label_9CD2:; return;
label_9CD3:; return;
label_9CD4:; return;
label_9CD5:; return;
label_9CD6:; return;
label_9CD7:; return;
label_9CD9:; return;
label_9CDB:; return;
label_9CDC:; return;
label_9CDD:; return;
label_9CDF:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE4:; return;
label_9CE5:; return;
label_9CE7:; return;
label_9CE8:; return;
label_9CEA:; return;
label_9CED:; return;
label_9CEF:; return;
label_9CF1:; return;
label_9CF2:; return;
label_9CF3:; return;
label_9CF5:; return;
label_9CF7:; return;
label_9CFA:; return;
label_9CFC:; return;
label_9CFD:; return;
label_9CFE:; return;
label_9CFF:; return;
label_9D02:; return;
label_9D04:; return;
label_9D07:; return;
label_9D08:; return;
label_9D0B:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D0F:; return;
label_9D10:; return;
label_9D13:; return;
label_9D15:; return;
label_9D16:; return;
label_9D17:; return;
label_9D18:; return;
label_9D19:; return;
label_9D1C:; return;
label_9D1E:; return;
label_9D1F:; return;
label_9D20:; return;
label_9D21:; return;
label_9D22:; return;
label_9D23:; return;
label_9D24:; return;
label_9D26:; return;
label_9D27:; return;
label_9D28:; return;
label_9D29:; return;
label_9D2A:; return;
label_9D3B:; return;
label_9D3E:; return;
label_9D40:; return;
label_9D41:; return;
label_9D42:; return;
label_9D43:; return;
label_9D44:; return;
label_9D45:; return;
label_9D46:; return;
label_9D48:; return;
label_9D49:; return;
label_9D4A:; return;
label_9D4B:; return;
label_9D4C:; return;
label_9D4F:; return;
label_9D51:; return;
label_9D52:; return;
label_9D53:; return;
label_9D54:; return;
label_9D55:; return;
label_9D56:; return;
label_9D57:; return;
label_9D59:; return;
label_9D5C:; return;
label_9D5D:; return;
label_9D5F:; return;
label_9D60:; return;
label_9D62:; return;
label_9D64:; return;
label_9D65:; return;
label_9D67:; return;
label_9D68:; return;
label_9D6A:; return;
label_9D6B:; return;
label_9D6D:; return;
label_9D6F:; return;
label_9D71:; return;
label_9D72:; return;
label_9D73:; return;
label_9D75:; return;
label_9D77:; return;
label_9D79:; return;
label_9D7B:; return;
label_9D7D:; return;
label_9D7F:; return;
label_9D81:; return;
label_9D83:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8B:; return;
label_9D8D:; return;
label_9D8F:; return;
label_9D91:; return;
label_9D93:; return;
label_9D95:; return;
label_9D97:; return;
label_9D99:; return;
label_9D9B:; return;
label_9D9D:; return;
label_9D9F:; return;
label_9DA2:; return;
label_9DA5:; return;
label_9DA8:; return;
label_9DA9:; return;
label_9DAA:; return;
label_9DAB:; return;
label_9DAC:; return;
label_9DAD:; return;
label_9DAE:; return;
label_9DAF:; return;
label_9DB0:; return;
label_9DB1:; return;
label_9DB2:; return;
label_9DB3:; return;
label_9DB4:; return;
label_9DB5:; return;
label_9DB6:; return;
label_9DB7:; return;
label_9DB8:; return;
label_9DB9:; return;
label_9DBA:; return;
label_9DBB:; return;
label_9DBD:; return;
label_9DBE:; return;
label_9DBF:; return;
label_9DC0:; return;
label_9DC2:; return;
label_9DC4:; return;
label_9DC5:; return;
label_9DC6:; return;
label_9DC7:; return;
label_9DC8:; return;
label_9DC9:; return;
label_9DCA:; return;
label_9DCB:; return;
label_9DCC:; return;
label_9DCD:; return;
label_9DCE:; return;
label_9DCF:; return;
label_9DD0:; return;
label_9DD1:; return;
label_9DD2:; return;
label_9DD3:; return;
label_9DD4:; return;
label_9DD5:; return;
label_9DD6:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DD9:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDC:; return;
label_9DDD:; return;
label_9DDE:; return;
label_9DDF:; return;
label_9DE0:; return;
label_9DE1:; return;
label_9DE2:; return;
label_9DE3:; return;
label_9DE4:; return;
label_9DE5:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEA:; return;
label_9DEB:; return;
label_9DEC:; return;
label_9DED:; return;
label_9DEF:; return;
label_9DF2:; return;
label_9DF5:; return;
label_9DF8:; return;
label_9DF9:; return;
label_9DFA:; return;
label_9DFB:; return;
label_9DFC:; return;
label_9DFD:; return;
label_9DFE:; return;
label_9DFF:; return;
label_9E00:; return;
label_9E01:; return;
label_9E02:; return;
label_9E03:; return;
label_9E04:; return;
label_9E05:; return;
label_9E06:; return;
label_9E07:; return;
label_9E08:; return;
label_9E09:; return;
label_9E0A:; return;
label_9E0B:; return;
label_9E0C:; return;
label_9E0D:; return;
label_9E0E:; return;
label_9E0F:; return;
label_9E10:; return;
label_9E11:; return;
label_9E12:; return;
label_9E13:; return;
label_9E14:; return;
label_9E15:; return;
label_9E16:; return;
label_9E17:; return;
label_9E18:; return;
label_9E19:; return;
label_9E1A:; return;
label_9E1B:; return;
label_9E1C:; return;
label_9E1D:; return;
label_9E1E:; return;
label_9E1F:; return;
label_9E20:; return;
label_9E21:; return;
label_9E22:; return;
label_9E23:; return;
label_9E24:; return;
label_9E25:; return;
label_9E26:; return;
label_9E27:; return;
label_9E28:; return;
label_9E29:; return;
label_9E2A:; return;
label_9E2B:; return;
label_9E2C:; return;
label_9E2D:; return;
label_9E2E:; return;
label_9E2F:; return;
label_9E30:; return;
label_9E31:; return;
label_9E32:; return;
label_9E33:; return;
label_9E34:; return;
label_9E35:; return;
label_9E36:; return;
label_9E37:; return;
label_9E38:; return;
label_9E3A:; return;
label_9E3C:; return;
label_9E3E:; return;
label_9E40:; return;
label_9E42:; return;
label_9E44:; return;
label_9E46:; return;
label_9E48:; return;
label_9E4A:; return;
label_9E4C:; return;
label_9E4E:; return;
label_9E50:; return;
label_9E52:; return;
label_9E54:; return;
label_9E56:; return;
label_9E57:; return;
label_9E59:; return;
label_9E5B:; return;
label_9E5D:; return;
label_9E5F:; return;
label_9E61:; return;
label_9E64:; return;
label_9E67:; return;
label_9E6A:; return;
label_9E6C:; return;
label_9E6E:; return;
label_9E70:; return;
label_9E73:; return;
label_9E74:; return;
label_9E76:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7B:; return;
label_9E7D:; return;
label_9E7F:; return;
label_9E81:; return;
label_9E83:; return;
label_9E85:; return;
label_9E87:; return;
label_9E8A:; return;
label_9E8C:; return;
label_9E8E:; return;
label_9E90:; return;
label_9E91:; return;
label_9E94:; return;
label_9E96:; return;
label_9E98:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9D:; return;
label_9E9F:; return;
label_9EA1:; return;
label_9EA4:; return;
label_9EA7:; return;
label_9EAA:; return;
label_9EAC:; return;
label_9EAE:; return;
label_9EB0:; return;
label_9EB2:; return;
label_9EB5:; return;
label_9EB7:; return;
label_9EB9:; return;
label_9EBB:; return;
label_9EBD:; return;
label_9EBF:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC5:; return;
label_9EC7:; return;
label_9ECA:; return;
label_9ECC:; return;
label_9ECE:; return;
label_9ED0:; return;
label_9ED2:; return;
label_9ED4:; return;
label_9ED6:; return;
label_9ED8:; return;
label_9EDA:; return;
label_9EDB:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE1:; return;
label_9EE4:; return;
label_9EE7:; return;
label_9EEA:; return;
label_9EEC:; return;
label_9EEE:; return;
label_9EF0:; return;
label_9EF2:; return;
label_9EF4:; return;
label_9EF6:; return;
label_9EF7:; return;
label_9EF9:; return;
label_9EFB:; return;
label_9EFD:; return;
label_9EFF:; return;
label_9F01:; return;
label_9F03:; return;
label_9F05:; return;
label_9F07:; return;
label_9F09:; return;
label_9F0B:; return;
label_9F0D:; return;
label_9F0E:; return;
label_9F10:; return;
label_9F12:; return;
label_9F15:; return;
label_9F16:; return;
label_9F17:; return;
label_9F18:; return;
label_9F1A:; return;
label_9F1C:; return;
label_9F1E:; return;
label_9F20:; return;
label_9F22:; return;
label_9F24:; return;
label_9F26:; return;
label_9F28:; return;
label_9F2A:; return;
label_9F2C:; return;
label_9F2E:; return;
label_9F30:; return;
label_9F32:; return;
label_9F34:; return;
label_9F36:; return;
label_9F37:; return;
label_9F38:; return;
label_9F39:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3C:; return;
label_9F3D:; return;
label_9F3E:; return;
label_9F3F:; return;
label_9F42:; return;
label_9F45:; return;
label_9F48:; return;
label_9F4B:; return;
label_9F4E:; return;
label_9F4F:; return;
label_9F50:; return;
label_9F51:; return;
label_9F52:; return;
label_9F53:; return;
label_9F54:; return;
label_9F55:; return;
label_9F56:; return;
label_9F57:; return;
label_9F58:; return;
label_9F59:; return;
label_9F5A:; return;
label_9F5B:; return;
label_9F5E:; return;
label_9F61:; return;
label_9F62:; return;
label_9F65:; return;
label_9F68:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6F:; return;
label_9F72:; return;
label_9F73:; return;
label_9F74:; return;
label_9F75:; return;
label_9F76:; return;
label_9F78:; return;
label_9F7A:; return;
label_9F7D:; return;
label_9F7F:; return;
label_9F82:; return;
label_9F85:; return;
label_9F86:; return;
label_9F87:; return;
label_9F88:; return;
label_9F89:; return;
label_9F8C:; return;
label_9F8F:; return;
label_9F92:; return;
label_9F94:; return;
label_9F96:; return;
label_9F98:; return;
label_9F9A:; return;
label_9F9C:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA3:; return;
label_9FA4:; return;
label_9FA5:; return;
label_9FA6:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAB:; return;
label_9FAE:; return;
label_9FB1:; return;
label_9FB3:; return;
label_9FB5:; return;
label_9FB7:; return;
label_9FB8:; return;
label_9FB9:; return;
label_9FBA:; return;
label_9FBB:; return;
label_9FBC:; return;
label_9FBF:; return;
label_9FC0:; return;
label_9FC1:; return;
label_9FC4:; return;
label_9FC5:; return;
label_9FC6:; return;
label_9FC7:; return;
label_9FC8:; return;
label_9FC9:; return;
label_9FCA:; return;
label_9FCB:; return;
label_9FCD:; return;
label_9FD0:; return;
label_9FD1:; return;
label_9FD2:; return;
label_9FD3:; return;
label_9FD4:; return;
label_9FD5:; return;
label_9FD6:; return;
label_9FD8:; return;
label_9FD9:; return;
label_9FDA:; return;
label_9FDB:; return;
label_9FDC:; return;
label_9FDD:; return;
label_9FDE:; return;
label_9FDF:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE4:; return;
label_9FE5:; return;
label_9FE6:; return;
label_9FE7:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEA:; return;
label_9FEB:; return;
label_9FEC:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FEF:; return;
label_9FF0:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF3:; return;
label_9FF5:; return;
label_9FF7:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFB:; return;
label_9FFC:; return;
label_9FFD:; return;
label_9FFE:; return;
label_9FFF:; return;
label_A000:; return;
label_A001:; return;
label_A002:; return;
label_A003:; return;
label_A004:; return;
label_A005:; return;
label_A006:; return;
label_A007:; return;
label_A008:; return;
label_A009:; return;
label_A00A:; return;
label_A00B:; return;
label_A00C:; return;
label_A00D:; return;
label_A00E:; return;
label_A00F:; return;
label_A010:; return;
label_A011:; return;
label_A012:; return;
label_A013:; return;
label_A015:; return;
label_A017:; return;
label_A018:; return;
label_A019:; return;
label_A01A:; return;
label_A01B:; return;
label_A01C:; return;
label_A01D:; return;
label_A01E:; return;
label_A01F:; return;
label_A020:; return;
label_A021:; return;
label_A022:; return;
label_A023:; return;
label_A024:; return;
label_A025:; return;
label_A026:; return;
label_A027:; return;
label_A028:; return;
label_A029:; return;
label_A02A:; return;
label_A02B:; return;
label_A02C:; return;
label_A02D:; return;
label_A02E:; return;
label_A02F:; return;
label_A030:; return;
label_A031:; return;
label_A032:; return;
label_A033:; return;
label_A034:; return;
label_A035:; return;
label_A036:; return;
label_A037:; return;
label_A038:; return;
label_A039:; return;
label_A03A:; return;
label_A03B:; return;
label_A03C:; return;
label_A03D:; return;
label_A03E:; return;
label_A03F:; return;
label_A040:; return;
label_A041:; return;
label_A042:; return;
label_A043:; return;
label_A044:; return;
label_A045:; return;
label_A046:; return;
label_A047:; return;
label_A048:; return;
label_A049:; return;
label_A04A:; return;
label_A04B:; return;
label_A04C:; return;
label_A04D:; return;
label_A04E:; return;
label_A04F:; return;
label_A050:; return;
label_A051:; return;
label_A052:; return;
label_A053:; return;
label_A054:; return;
label_A055:; return;
label_A056:; return;
label_A057:; return;
label_A058:; return;
label_A059:; return;
label_A05A:; return;
label_A05B:; return;
label_A05C:; return;
label_A05D:; return;
label_A05E:; return;
label_A05F:; return;
label_A060:; return;
label_A061:; return;
label_A062:; return;
label_A063:; return;
label_A064:; return;
label_A065:; return;
label_A066:; return;
label_A067:; return;
label_A068:; return;
label_A069:; return;
label_A06A:; return;
label_A06B:; return;
label_A06C:; return;
label_A06D:; return;
label_A06E:; return;
label_A06F:; return;
label_A070:; return;
label_A071:; return;
label_A072:; return;
label_A073:; return;
label_A074:; return;
label_A075:; return;
label_A076:; return;
label_A079:; return;
label_A07C:; return;
label_A07F:; return;
label_A082:; return;
label_A085:; return;
label_A088:; return;
label_A08B:; return;
label_A08E:; return;
label_A091:; return;
label_A094:; return;
label_A097:; return;
label_A09A:; return;
label_A09D:; return;
label_A0A0:; return;
label_A0A2:; return;
label_A0A5:; return;
label_A0A8:; return;
label_A0AB:; return;
label_A0AD:; return;
label_A0AF:; return;
label_A0B1:; return;
label_A0B3:; return;
label_A0B5:; return;
label_A0B8:; return;
label_A0BA:; return;
label_A0BD:; return;
label_A0BF:; return;
label_A0C2:; return;
label_A0C4:; return;
label_A0C6:; return;
label_A0C8:; return;
label_A0CA:; return;
label_A0CD:; return;
label_A0CF:; return;
label_A0D1:; return;
label_A0D3:; return;
label_A0D6:; return;
label_A0D8:; return;
label_A0D9:; return;
label_A0DB:; return;
label_A0DD:; return;
label_A0DF:; return;
label_A0E1:; return;
label_A0E3:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0E9:; return;
label_A0EB:; return;
label_A0ED:; return;
label_A0EF:; return;
label_A0F1:; return;
label_A0F3:; return;
label_A0F5:; return;
label_A0F7:; return;
label_A0F8:; return;
label_A0FA:; return;
label_A0FC:; return;
label_A0FF:; return;
label_A102:; return;
label_A104:; return;
label_A106:; return;
label_A108:; return;
label_A10A:; return;
label_A10C:; return;
label_A10E:; return;
label_A110:; return;
label_A112:; return;
label_A114:; return;
label_A117:; return;
label_A119:; return;
label_A11B:; return;
label_A11C:; return;
label_A11E:; return;
label_A120:; return;
label_A123:; return;
label_A125:; return;
label_A127:; return;
label_A129:; return;
label_A12B:; return;
label_A12D:; return;
label_A12F:; return;
label_A131:; return;
label_A134:; return;
label_A137:; return;
label_A139:; return;
label_A13B:; return;
label_A13D:; return;
label_A13F:; return;
label_A141:; return;
label_A143:; return;
label_A145:; return;
label_A147:; return;
label_A149:; return;
label_A14B:; return;
label_A14D:; return;
label_A14F:; return;
label_A151:; return;
label_A153:; return;
label_A155:; return;
label_A157:; return;
label_A159:; return;
label_A15B:; return;
label_A15D:; return;
label_A15F:; return;
label_A161:; return;
label_A163:; return;
label_A165:; return;
label_A167:; return;
label_A169:; return;
label_A16B:; return;
label_A16D:; return;
label_A16F:; return;
label_A171:; return;
label_A173:; return;
label_A175:; return;
label_A177:; return;
label_A179:; return;
label_A17B:; return;
label_A17D:; return;
label_A17F:; return;
label_A181:; return;
label_A183:; return;
label_A185:; return;
label_A187:; return;
label_A189:; return;
label_A18B:; return;
label_A18D:; return;
label_A18F:; return;
label_A191:; return;
label_A193:; return;
label_A195:; return;
label_A197:; return;
label_A199:; return;
label_A19B:; return;
label_A19D:; return;
label_A19F:; return;
label_A1A1:; return;
label_A1A3:; return;
label_A1A5:; return;
label_A1A7:; return;
label_A1A9:; return;
label_A1AB:; return;
label_A1AD:; return;
label_A1AF:; return;
label_A1B1:; return;
label_A1B3:; return;
label_A1B5:; return;
label_A1B7:; return;
label_A1B9:; return;
label_A1BB:; return;
label_A1BD:; return;
label_A1BF:; return;
label_A1C0:; return;
label_A1C1:; return;
label_A1C2:; return;
label_A1C3:; return;
label_A1C4:; return;
label_A1C5:; return;
label_A1C7:; return;
label_A1C9:; return;
label_A1CB:; return;
label_A1CD:; return;
label_A1CF:; return;
label_A1D1:; return;
label_A1D3:; return;
label_A1D5:; return;
label_A1D7:; return;
label_A1D9:; return;
label_A1DB:; return;
label_A1DD:; return;
label_A1DF:; return;
label_A1E2:; return;
label_A1E5:; return;
label_A1E8:; return;
label_A1E9:; return;
label_A1EA:; return;
label_A1EB:; return;
label_A1EC:; return;
label_A1ED:; return;
label_A1EE:; return;
label_A1EF:; return;
label_A1F0:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F3:; return;
label_A1F4:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F8:; return;
label_A1FA:; return;
label_A1FC:; return;
label_A1FE:; return;
label_A200:; return;
label_A202:; return;
label_A204:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20C:; return;
label_A20E:; return;
label_A210:; return;
label_A212:; return;
label_A214:; return;
label_A216:; return;
label_A218:; return;
label_A21A:; return;
label_A21C:; return;
label_A21E:; return;
label_A220:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22C:; return;
label_A22E:; return;
label_A230:; return;
label_A232:; return;
label_A234:; return;
label_A236:; return;
label_A237:; return;
label_A238:; return;
label_A239:; return;
label_A23A:; return;
label_A23B:; return;
label_A23C:; return;
label_A23D:; return;
label_A23E:; return;
label_A23F:; return;
label_A240:; return;
label_A241:; return;
label_A242:; return;
label_A243:; return;
label_A244:; return;
label_A245:; return;
label_A246:; return;
label_A247:; return;
label_A248:; return;
label_A249:; return;
label_A24B:; return;
label_A24D:; return;
label_A24F:; return;
label_A251:; return;
label_A252:; return;
label_A253:; return;
label_A254:; return;
label_A255:; return;
label_A256:; return;
label_A257:; return;
label_A258:; return;
label_A259:; return;
label_A25A:; return;
label_A25B:; return;
label_A25C:; return;
label_A25D:; return;
label_A25E:; return;
label_A25F:; return;
label_A260:; return;
label_A261:; return;
label_A262:; return;
label_A263:; return;
label_A264:; return;
label_A265:; return;
label_A266:; return;
label_A267:; return;
label_A268:; return;
label_A269:; return;
label_A26A:; return;
label_A26C:; return;
label_A26D:; return;
label_A26E:; return;
label_A26F:; return;
label_A271:; return;
label_A272:; return;
label_A273:; return;
label_A274:; return;
label_A275:; return;
label_A276:; return;
label_A277:; return;
label_A278:; return;
label_A279:; return;
label_A27A:; return;
label_A27B:; return;
label_A27C:; return;
label_A27D:; return;
label_A27E:; return;
label_A280:; return;
label_A282:; return;
label_A284:; return;
label_A286:; return;
label_A287:; return;
label_A289:; return;
label_A28B:; return;
label_A28E:; return;
label_A290:; return;
label_A291:; return;
label_A292:; return;
label_A293:; return;
label_A294:; return;
label_A295:; return;
label_A296:; return;
label_A297:; return;
label_A298:; return;
label_A299:; return;
label_A29A:; return;
label_A29B:; return;
label_A29C:; return;
label_A29D:; return;
label_A29E:; return;
label_A2A0:; return;
label_A2A1:; return;
label_A2A3:; return;
label_A2A5:; return;
label_A2A7:; return;
label_A2AA:; return;
label_A2AD:; return;
label_A2B0:; return;
label_A2B1:; return;
label_A2B2:; return;
label_A2B3:; return;
label_A2B4:; return;
label_A2B5:; return;
label_A2B6:; return;
label_A2B7:; return;
label_A2B8:; return;
label_A2B9:; return;
label_A2BA:; return;
label_A2BB:; return;
label_A2BC:; return;
label_A2BD:; return;
label_A2BE:; return;
label_A2C0:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C7:; return;
label_A2C9:; return;
label_A2CB:; return;
label_A2CE:; return;
label_A2D0:; return;
label_A2D1:; return;
label_A2D2:; return;
label_A2D3:; return;
label_A2D4:; return;
label_A2D5:; return;
label_A2D6:; return;
label_A2D7:; return;
label_A2D8:; return;
label_A2D9:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DC:; return;
label_A2DD:; return;
label_A2DE:; return;
label_A2E0:; return;
label_A2E1:; return;
label_A2E3:; return;
label_A2E5:; return;
label_A2E7:; return;
label_A2EA:; return;
label_A2ED:; return;
label_A2F0:; return;
label_A2F1:; return;
label_A2F2:; return;
label_A2F3:; return;
label_A2F4:; return;
label_A2F5:; return;
label_A2F6:; return;
label_A2F7:; return;
label_A2F8:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A300:; return;
label_A302:; return;
label_A304:; return;
label_A306:; return;
label_A308:; return;
label_A30A:; return;
label_A30C:; return;
label_A30E:; return;
label_A310:; return;
label_A312:; return;
label_A314:; return;
label_A315:; return;
label_A316:; return;
label_A317:; return;
label_A318:; return;
label_A31A:; return;
label_A31B:; return;
label_A31D:; return;
label_A31F:; return;
label_A321:; return;
label_A323:; return;
label_A325:; return;
label_A327:; return;
label_A329:; return;
label_A32B:; return;
label_A32D:; return;
label_A32F:; return;
label_A331:; return;
label_A333:; return;
label_A334:; return;
label_A335:; return;
label_A336:; return;
label_A337:; return;
label_A338:; return;
label_A33A:; return;
label_A33C:; return;
label_A33F:; return;
label_A341:; return;
label_A343:; return;
label_A345:; return;
label_A347:; return;
label_A349:; return;
label_A34B:; return;
label_A34D:; return;
label_A34F:; return;
label_A351:; return;
label_A353:; return;
label_A354:; return;
label_A355:; return;
label_A356:; return;
label_A357:; return;
label_A358:; return;
label_A35A:; return;
label_A35B:; return;
label_A35D:; return;
label_A35F:; return;
label_A361:; return;
label_A363:; return;
label_A365:; return;
label_A367:; return;
label_A369:; return;
label_A36B:; return;
label_A36D:; return;
label_A36F:; return;
label_A371:; return;
label_A373:; return;
label_A374:; return;
label_A375:; return;
label_A376:; return;
label_A377:; return;
label_A378:; return;
label_A37A:; return;
label_A37C:; return;
label_A37D:; return;
label_A37F:; return;
label_A381:; return;
label_A383:; return;
label_A385:; return;
label_A387:; return;
label_A389:; return;
label_A38B:; return;
label_A38D:; return;
label_A38F:; return;
label_A391:; return;
label_A393:; return;
label_A394:; return;
label_A395:; return;
label_A396:; return;
label_A397:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39F:; return;
label_A3A1:; return;
label_A3A3:; return;
label_A3A5:; return;
label_A3A8:; return;
label_A3AA:; return;
label_A3AD:; return;
label_A3AF:; return;
label_A3B1:; return;
label_A3B3:; return;
label_A3B4:; return;
label_A3B5:; return;
label_A3B6:; return;
label_A3B7:; return;
label_A3B8:; return;
label_A3BA:; return;
label_A3BB:; return;
label_A3BD:; return;
label_A3BF:; return;
label_A3C1:; return;
label_A3C3:; return;
label_A3C5:; return;
label_A3C7:; return;
label_A3C9:; return;
label_A3CB:; return;
label_A3CD:; return;
label_A3CF:; return;
label_A3D1:; return;
label_A3D3:; return;
label_A3D4:; return;
label_A3D5:; return;
label_A3D6:; return;
label_A3D7:; return;
label_A3D8:; return;
label_A3DA:; return;
label_A3DC:; return;
label_A3DD:; return;
label_A3DF:; return;
label_A3E1:; return;
label_A3E3:; return;
label_A3E5:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EB:; return;
label_A3ED:; return;
label_A3EF:; return;
label_A3F1:; return;
label_A3F3:; return;
label_A3F4:; return;
label_A3F5:; return;
label_A3F6:; return;
label_A3F7:; return;
label_A3F8:; return;
label_A3FA:; return;
label_A3FC:; return;
label_A3FE:; return;
label_A3FF:; return;
label_A400:; return;
label_A402:; return;
label_A404:; return;
label_A406:; return;
label_A408:; return;
label_A40A:; return;
label_A40C:; return;
label_A40E:; return;
label_A411:; return;
label_A413:; return;
label_A414:; return;
label_A415:; return;
label_A416:; return;
label_A417:; return;
label_A418:; return;
label_A41A:; return;
label_A41B:; return;
label_A41D:; return;
label_A41E:; return;
label_A421:; return;
label_A423:; return;
label_A425:; return;
label_A427:; return;
label_A429:; return;
label_A42B:; return;
label_A42D:; return;
label_A42F:; return;
label_A431:; return;
label_A433:; return;
label_A434:; return;
label_A435:; return;
label_A436:; return;
label_A437:; return;
label_A438:; return;
label_A43A:; return;
label_A43C:; return;
label_A43D:; return;
label_A43F:; return;
label_A441:; return;
label_A443:; return;
label_A445:; return;
label_A447:; return;
label_A449:; return;
label_A44B:; return;
label_A44D:; return;
label_A44F:; return;
label_A451:; return;
label_A453:; return;
label_A454:; return;
label_A455:; return;
label_A456:; return;
label_A457:; return;
label_A458:; return;
label_A45A:; return;
label_A45C:; return;
label_A45E:; return;
label_A460:; return;
label_A462:; return;
label_A464:; return;
label_A466:; return;
label_A468:; return;
label_A46A:; return;
label_A46C:; return;
label_A46E:; return;
label_A470:; return;
label_A472:; return;
label_A474:; return;
label_A475:; return;
label_A476:; return;
label_A477:; return;
label_A478:; return;
label_A47A:; return;
label_A47D:; return;
label_A480:; return;
label_A483:; return;
label_A486:; return;
label_A489:; return;
label_A48C:; return;
label_A48F:; return;
label_A492:; return;
label_A495:; return;
label_A496:; return;
label_A497:; return;
label_A498:; return;
label_A499:; return;
label_A49A:; return;
label_A49C:; return;
label_A49E:; return;
label_A4A0:; return;
label_A4A2:; return;
label_A4A4:; return;
label_A4A6:; return;
label_A4A8:; return;
label_A4AA:; return;
label_A4AC:; return;
label_A4AE:; return;
label_A4B0:; return;
label_A4B2:; return;
label_A4B3:; return;
label_A4B4:; return;
label_A4B5:; return;
label_A4B6:; return;
label_A4B7:; return;
label_A4B8:; return;
label_A4B9:; return;
label_A4BA:; return;
label_A4BC:; return;
label_A4BE:; return;
label_A4C0:; return;
label_A4C2:; return;
label_A4C4:; return;
label_A4C7:; return;
label_A4C8:; return;
label_A4CA:; return;
label_A4CC:; return;
label_A4CE:; return;
label_A4D0:; return;
label_A4D2:; return;
label_A4D3:; return;
label_A4D4:; return;
label_A4D5:; return;
label_A4D6:; return;
label_A4D7:; return;
label_A4D8:; return;
label_A4D9:; return;
label_A4DA:; return;
label_A4DC:; return;
label_A4DE:; return;
label_A4E0:; return;
label_A4E2:; return;
label_A4E4:; return;
label_A4E6:; return;
label_A4E7:; return;
label_A4E9:; return;
label_A4EB:; return;
label_A4ED:; return;
label_A4EF:; return;
label_A4F1:; return;
label_A4F2:; return;
label_A4F3:; return;
label_A4F4:; return;
label_A4F5:; return;
label_A4F6:; return;
label_A4F7:; return;
label_A4F8:; return;
label_A4F9:; return;
label_A4FA:; return;
label_A4FC:; return;
label_A4FE:; return;
label_A500:; return;
label_A502:; return;
label_A504:; return;
label_A506:; return;
label_A507:; return;
label_A509:; return;
label_A50B:; return;
label_A50D:; return;
label_A50F:; return;
label_A511:; return;
label_A512:; return;
label_A513:; return;
label_A514:; return;
label_A515:; return;
label_A516:; return;
label_A517:; return;
label_A518:; return;
label_A519:; return;
label_A51A:; return;
label_A51C:; return;
label_A51E:; return;
label_A520:; return;
label_A522:; return;
label_A524:; return;
label_A526:; return;
label_A527:; return;
label_A529:; return;
label_A52B:; return;
label_A52D:; return;
label_A52F:; return;
label_A531:; return;
label_A532:; return;
label_A533:; return;
label_A534:; return;
label_A535:; return;
label_A536:; return;
label_A538:; return;
label_A53A:; return;
label_A53C:; return;
label_A53E:; return;
label_A540:; return;
label_A542:; return;
label_A544:; return;
label_A546:; return;
label_A548:; return;
label_A54A:; return;
label_A54C:; return;
label_A54E:; return;
label_A550:; return;
label_A552:; return;
label_A554:; return;
label_A556:; return;
label_A558:; return;
label_A55A:; return;
label_A55C:; return;
label_A55E:; return;
label_A560:; return;
label_A562:; return;
label_A564:; return;
label_A566:; return;
label_A568:; return;
label_A56A:; return;
label_A56C:; return;
label_A56E:; return;
label_A570:; return;
label_A572:; return;
label_A574:; return;
label_A576:; return;
label_A578:; return;
label_A57A:; return;
label_A57C:; return;
label_A57E:; return;
label_A580:; return;
label_A582:; return;
label_A584:; return;
label_A586:; return;
label_A588:; return;
label_A58A:; return;
label_A58C:; return;
label_A58E:; return;
label_A590:; return;
label_A592:; return;
label_A594:; return;
label_A596:; return;
label_A598:; return;
label_A59A:; return;
label_A59C:; return;
label_A59E:; return;
label_A5A0:; return;
label_A5A2:; return;
label_A5A4:; return;
label_A5A6:; return;
label_A5A8:; return;
label_A5AA:; return;
label_A5AC:; return;
label_A5AE:; return;
label_A5B0:; return;
label_A5B2:; return;
label_A5B4:; return;
label_A5B6:; return;
label_A5B7:; return;
label_A5B8:; return;
label_A5B9:; return;
label_A5BA:; return;
label_A5BB:; return;
label_A5BD:; return;
label_A5BE:; return;
label_A5BF:; return;
label_A5C0:; return;
label_A5C2:; return;
label_A5C4:; return;
label_A5C5:; return;
label_A5C6:; return;
label_A5C7:; return;
label_A5C8:; return;
label_A5C9:; return;
label_A5CA:; return;
label_A5CB:; return;
label_A5CC:; return;
label_A5CD:; return;
label_A5CE:; return;
label_A5CF:; return;
label_A5D0:; return;
label_A5D1:; return;
label_A5D2:; return;
label_A5D3:; return;
label_A5D4:; return;
label_A5D5:; return;
label_A5D6:; return;
label_A5D7:; return;
label_A5D8:; return;
label_A5D9:; return;
label_A5DA:; return;
label_A5DB:; return;
label_A5DC:; return;
label_A5DD:; return;
label_A5DE:; return;
label_A5DF:; return;
label_A5E0:; return;
label_A5E1:; return;
label_A5E2:; return;
label_A5E3:; return;
label_A5E4:; return;
label_A5E5:; return;
label_A5E6:; return;
label_A5E8:; return;
label_A5E9:; return;
label_A5EA:; return;
label_A5EB:; return;
label_A5EC:; return;
label_A5ED:; return;
label_A5EF:; return;
label_A5F2:; return;
label_A5F5:; return;
label_A5F8:; return;
label_A5FA:; return;
label_A5FC:; return;
label_A5FE:; return;
label_A600:; return;
label_A602:; return;
label_A604:; return;
label_A606:; return;
label_A608:; return;
label_A60A:; return;
label_A60C:; return;
label_A60E:; return;
label_A610:; return;
label_A612:; return;
label_A614:; return;
label_A616:; return;
label_A618:; return;
label_A61A:; return;
label_A61C:; return;
label_A61E:; return;
label_A620:; return;
label_A622:; return;
label_A624:; return;
label_A626:; return;
label_A628:; return;
label_A62A:; return;
label_A62C:; return;
label_A62E:; return;
label_A630:; return;
label_A632:; return;
label_A634:; return;
label_A636:; return;
label_A637:; return;
label_A638:; return;
label_A639:; return;
label_A63A:; return;
label_A63B:; return;
label_A63C:; return;
label_A63D:; return;
label_A63E:; return;
label_A63F:; return;
label_A640:; return;
label_A641:; return;
label_A642:; return;
label_A643:; return;
label_A644:; return;
label_A645:; return;
label_A646:; return;
label_A647:; return;
label_A648:; return;
label_A649:; return;
label_A64B:; return;
label_A64D:; return;
label_A64F:; return;
label_A651:; return;
label_A652:; return;
label_A653:; return;
label_A654:; return;
label_A655:; return;
label_A656:; return;
label_A657:; return;
label_A658:; return;
label_A659:; return;
label_A65A:; return;
label_A65B:; return;
label_A65C:; return;
label_A65D:; return;
label_A65E:; return;
label_A65F:; return;
label_A660:; return;
label_A661:; return;
label_A662:; return;
label_A663:; return;
label_A664:; return;
label_A665:; return;
label_A666:; return;
label_A667:; return;
label_A668:; return;
label_A669:; return;
label_A66A:; return;
label_A66C:; return;
label_A66D:; return;
label_A66E:; return;
label_A66F:; return;
label_A671:; return;
label_A672:; return;
label_A673:; return;
label_A674:; return;
label_A675:; return;
label_A676:; return;
label_A677:; return;
label_A678:; return;
label_A679:; return;
label_A67A:; return;
label_A67B:; return;
label_A67C:; return;
label_A67D:; return;
label_A67E:; return;
label_A680:; return;
label_A682:; return;
label_A684:; return;
label_A686:; return;
label_A687:; return;
label_A689:; return;
label_A68B:; return;
label_A68E:; return;
label_A690:; return;
label_A691:; return;
label_A692:; return;
label_A693:; return;
label_A694:; return;
label_A695:; return;
label_A696:; return;
label_A697:; return;
label_A698:; return;
label_A699:; return;
label_A69A:; return;
label_A69B:; return;
label_A69C:; return;
label_A69D:; return;
label_A69E:; return;
label_A6A0:; return;
label_A6A1:; return;
label_A6A3:; return;
label_A6A5:; return;
label_A6A7:; return;
label_A6AA:; return;
label_A6AD:; return;
label_A6B0:; return;
label_A6B1:; return;
label_A6B2:; return;
label_A6B3:; return;
label_A6B4:; return;
label_A6B5:; return;
label_A6B6:; return;
label_A6B7:; return;
label_A6B8:; return;
label_A6B9:; return;
label_A6BA:; return;
label_A6BB:; return;
label_A6BC:; return;
label_A6BD:; return;
label_A6BE:; return;
label_A6C0:; return;
label_A6C2:; return;
label_A6C4:; return;
label_A6C6:; return;
label_A6C7:; return;
label_A6C9:; return;
label_A6CB:; return;
label_A6CE:; return;
label_A6D0:; return;
label_A6D1:; return;
label_A6D2:; return;
label_A6D3:; return;
label_A6D4:; return;
label_A6D5:; return;
label_A6D6:; return;
label_A6D7:; return;
label_A6D8:; return;
label_A6D9:; return;
label_A6DA:; return;
label_A6DB:; return;
label_A6DC:; return;
label_A6DD:; return;
label_A6DE:; return;
label_A6E0:; return;
label_A6E1:; return;
label_A6E3:; return;
label_A6E5:; return;
label_A6E7:; return;
label_A6EA:; return;
label_A6ED:; return;
label_A6F0:; return;
label_A6F1:; return;
label_A6F2:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F6:; return;
label_A6F7:; return;
label_A6F8:; return;
label_A6FA:; return;
label_A6FC:; return;
label_A6FE:; return;
label_A700:; return;
label_A702:; return;
label_A704:; return;
label_A706:; return;
label_A708:; return;
label_A70A:; return;
label_A70C:; return;
label_A70E:; return;
label_A710:; return;
label_A712:; return;
label_A714:; return;
label_A715:; return;
label_A716:; return;
label_A717:; return;
label_A718:; return;
label_A71A:; return;
label_A71B:; return;
label_A71D:; return;
label_A71F:; return;
label_A721:; return;
label_A723:; return;
label_A726:; return;
label_A728:; return;
label_A72A:; return;
label_A72C:; return;
label_A72E:; return;
label_A730:; return;
label_A732:; return;
label_A734:; return;
label_A735:; return;
label_A736:; return;
label_A737:; return;
label_A738:; return;
label_A73A:; return;
label_A73C:; return;
label_A73F:; return;
label_A741:; return;
label_A743:; return;
label_A745:; return;
label_A748:; return;
}

void func_90CB_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90CB_b3");
#endif
label_90CB:;
    /* $90CB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A9); FLAG_NZ(g_cpu.A);
label_90CE:;
    /* $90CE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_90D0:;
    /* $90D0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_90D5; }
label_90D2:;
    /* $90D2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x91AA, 3); return;
label_90D5:;
    /* $90D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_90D7:;
    /* $90D7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90E1; }
label_90D9:;
    /* $90D9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_90DB:;
    /* $90DB: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_90DE:;
    /* $90DE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9150, 3); return;
label_90E1:;
    /* $90E1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_90E3:;
    /* $90E3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_90E5:;
    /* $90E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9108; }
label_90E7:;
    /* $90E7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_90EA:;
    /* $90EA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_90EC:;
    /* $90EC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9108; }
label_90EE:;
    /* $90EE: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_90F4:;
    /* $90F4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_90F6:;
    /* $90F6: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_90F9:;
    /* $90F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA2; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_90FB:;
    /* $90FB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA2); FLAG_NZ(g_cpu.A);
label_90FD:;
    /* $90FD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_90FF:;
    /* $90FF: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9150; }
label_9101:;
    /* $9101: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9103:;
    /* $9103: 85 */ maybe_trigger_vblank(3); nes_write(0xA2, g_cpu.A);
label_9105:;
    /* $9105: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9150, 3); return;
label_9108:;
    /* $9108: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_910A:;
    /* $910A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_910C:;
    /* $910C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9126; }
label_910E:;
    /* $910E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_9111:;
    /* $9111: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9113:;
    /* $9113: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9150; }
label_9115:;
    /* $9115: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA2); FLAG_NZ(g_cpu.A);
label_9117:;
    /* $9117: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9119:;
    /* $9119: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9150; }
label_911B:;
    /* $911B: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9121:;
    /* $9121: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA2; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9123:;
    /* $9123: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9150, 3); return;
label_9126:;
    /* $9126: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9128:;
    /* $9128: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_912A:;
    /* $912A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9134; }
label_912C:;
    /* $912C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_912E:;
    /* $912E: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_9131:;
    /* $9131: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9150, 3); return;
label_9134:;
    /* $9134: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_9137:;
    /* $9137: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9139:;
    /* $9139: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9150; }
label_913B:;
    /* $913B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_913D:;
    /* $913D: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_9140:;
    /* $9140: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9126;
    }
label_9142:;
    /* $9142: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA2); FLAG_NZ(g_cpu.A);
label_9144:;
    /* $9144: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9146:;
    /* $9146: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9150; }
label_9148:;
    /* $9148: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA2; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_914A:;
    /* $914A: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9150:;
    /* $9150: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCD); FLAG_NZ(g_cpu.A);
label_9152:;
    /* $9152: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_915C; }
label_9154:;
    /* $9154: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9156:;
    /* $9156: 8D */ maybe_trigger_vblank(4); nes_write(0x03FA, g_cpu.A);
label_9159:;
    /* $9159: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x91A7, 3); return;
label_915C:;
    /* $915C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_915E:;
    /* $915E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9160:;
    /* $9160: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_917F; }
label_9162:;
    /* $9162: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FA); FLAG_NZ(g_cpu.A);
label_9165:;
    /* $9165: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9167:;
    /* $9167: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_91A7; }
label_9169:;
    /* $9169: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_916B:;
    /* $916B: 8D */ maybe_trigger_vblank(4); nes_write(0x03FA, g_cpu.A);
label_916E:;
    /* $916E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_9170:;
    /* $9170: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9172:;
    /* $9172: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_91A7; }
label_9174:;
    /* $9174: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9176:;
    /* $9176: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_917C:;
    /* $917C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x91A7, 3); return;
label_917F:;
    /* $917F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9181:;
    /* $9181: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9183:;
    /* $9183: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_918D; }
label_9185:;
    /* $9185: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9187:;
    /* $9187: 8D */ maybe_trigger_vblank(4); nes_write(0x03FA, g_cpu.A);
label_918A:;
    /* $918A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x91A7, 3); return;
label_918D:;
    /* $918D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FA); FLAG_NZ(g_cpu.A);
label_9190:;
    /* $9190: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9192:;
    /* $9192: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_91A7; }
label_9194:;
    /* $9194: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9196:;
    /* $9196: 8D */ maybe_trigger_vblank(4); nes_write(0x03FA, g_cpu.A);
label_9199:;
    /* $9199: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_919B:;
    /* $919B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_919D:;
    /* $919D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_91A7; }
label_919F:;
    /* $919F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91A1:;
    /* $91A1: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_91A7:;
    /* $91A7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
}

void func_9363_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9373;
    }
label_9363:;
    /* $9363: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9365:;
    /* $9365: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_9367:;
    /* $9367: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x65; FLAG_NZ(g_cpu.A);
label_9369:;
    /* $9369: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_936B:;
    /* $936B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8E; FLAG_NZ(g_cpu.A);
label_936D:;
    /* $936D: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_936F:;
    /* $936F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9371:;
    /* $9371: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_9373:;
    /* $9373: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A9); FLAG_NZ(g_cpu.A);
label_9376:;
    /* $9376: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9378:;
    /* $9378: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_937F; }
label_937A:;
    /* $937A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_937C:;
    /* $937C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x938A, 3); return;
label_937F:;
    /* $937F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9381:;
    /* $9381: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9388; }
label_9383:;
    /* $9383: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x64; FLAG_NZ(g_cpu.A);
label_9385:;
    /* $9385: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x938A, 3); return;
label_9388:;
    /* $9388: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_938A:;
    /* $938A: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_938C:;
    /* $938C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_938F:;
    /* $938F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9363_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9363_b3");
#endif
    func_9363_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9373_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9373_b3");
#endif
    func_9363_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9FAA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9FAA_b3");
#endif
label_9FAA:;
    /* $9FAA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9FAC:;
    /* $9FAC: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEFDF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9FAF:;
    /* $9FAF: EF */ maybe_trigger_vblank(6); { uint16_t a=0x0101; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9FB2:;
    /* $9FB2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9FB4:;
    /* $9FB4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9FB6:;
    /* $9FB6: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0202 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9FB9:;
    /* $9FB9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FBA:;
    /* $9FBA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FBB:;
    /* $9FBB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FBC:;
    /* $9FBC: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xAFBE); FLAG_NZ(g_cpu.X);
label_9FBF:;
    /* $9FBF: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_9FC0:;
    /* $9FC0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FC1:;
    /* $9FC1: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x9F9E); FLAG_NZ(g_cpu.X);
label_9FC4:;
    /* $9FC4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FC5:;
    /* $9FC5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FC6:;
    /* $9FC6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FC7:;
    /* $9FC7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FC8:;
    /* $9FC8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FC9:;
    /* $9FC9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FCA:;
    /* $9FCA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FCB:;
    /* $9FCB: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xE9; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9FCD:;
    /* $9FCD: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE9E9 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9FD0:;
    /* $9FD0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FD1:;
    /* $9FD1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FD2:;
    /* $9FD2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FD3:;
    /* $9FD3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FD4:;
    /* $9FD4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FD5:;
    /* $9FD5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FD6:;
    /* $9FD6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9FD8:;
    /* $9FD8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FD9:;
    /* $9FD9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FDA:;
    /* $9FDA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FDB:;
    /* $9FDB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FDC:;
    /* $9FDC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FDD:;
    /* $9FDD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FDE:;
    /* $9FDE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FDF:;
    /* $9FDF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FE0:;
    /* $9FE0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FE1:;
    /* $9FE1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FE2:;
    /* $9FE2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FE3:;
    /* $9FE3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FE4:;
    /* $9FE4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FE5:;
    /* $9FE5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FE6:;
    /* $9FE6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FE7:;
    /* $9FE7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FE8:;
    /* $9FE8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FE9:;
    /* $9FE9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FEA:;
    /* $9FEA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FEB:;
    /* $9FEB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FEC:;
    /* $9FEC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FED:;
    /* $9FED: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FEE:;
    /* $9FEE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FEF:;
    /* $9FEF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FF0:;
    /* $9FF0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FF1:;
    /* $9FF1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FF2:;
    /* $9FF2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9FF3:;
    /* $9FF3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9FF5:;
    /* $9FF5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9FF7:;
    /* $9FF7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FF8:;
    /* $9FF8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FF9:;
    /* $9FF9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FFA:;
    /* $9FFA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FFB:;
    /* $9FFB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FFC:;
    /* $9FFC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FFD:;
    /* $9FFD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FFE:;
    /* $9FFE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9FFF:;
    /* $9FFF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A000:;
    /* $A000: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A001:;
    /* $A001: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A002:;
    /* $A002: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A003:;
    /* $A003: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A004:;
    /* $A004: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A005:;
    /* $A005: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A006:;
    /* $A006: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A007:;
    /* $A007: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A008:;
    /* $A008: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A009:;
    /* $A009: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A00A:;
    /* $A00A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A00B:;
    /* $A00B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A00C:;
    /* $A00C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A00D:;
    /* $A00D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A00E:;
    /* $A00E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A00F:;
    /* $A00F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A010:;
    /* $A010: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A011:;
    /* $A011: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A012:;
    /* $A012: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A013:;
    /* $A013: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A015:;
    /* $A015: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A017:;
    /* $A017: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A018:;
    /* $A018: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A019:;
    /* $A019: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A01A:;
    /* $A01A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A01B:;
    /* $A01B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A01C:;
    /* $A01C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A01D:;
    /* $A01D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A01E:;
    /* $A01E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A01F:;
    /* $A01F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A020:;
    /* $A020: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A021:;
    /* $A021: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A022:;
    /* $A022: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A023:;
    /* $A023: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A024:;
    /* $A024: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A025:;
    /* $A025: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A026:;
    /* $A026: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A027:;
    /* $A027: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A028:;
    /* $A028: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A029:;
    /* $A029: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A02A:;
    /* $A02A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A02B:;
    /* $A02B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A02C:;
    /* $A02C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A02D:;
    /* $A02D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A02E:;
    /* $A02E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A02F:;
    /* $A02F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A030:;
    /* $A030: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A031:;
    /* $A031: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A032:;
    /* $A032: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A033:;
    /* $A033: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A034:;
    /* $A034: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A035:;
    /* $A035: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A036:;
    /* $A036: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A037:;
    /* $A037: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A038:;
    /* $A038: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A039:;
    /* $A039: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03A:;
    /* $A03A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03B:;
    /* $A03B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03C:;
    /* $A03C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03D:;
    /* $A03D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03E:;
    /* $A03E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03F:;
    /* $A03F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A040:;
    /* $A040: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A041:;
    /* $A041: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A042:;
    /* $A042: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A043:;
    /* $A043: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A044:;
    /* $A044: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A045:;
    /* $A045: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A046:;
    /* $A046: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A047:;
    /* $A047: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A048:;
    /* $A048: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A049:;
    /* $A049: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04A:;
    /* $A04A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04B:;
    /* $A04B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04C:;
    /* $A04C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04D:;
    /* $A04D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04E:;
    /* $A04E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04F:;
    /* $A04F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A050:;
    /* $A050: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A051:;
    /* $A051: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A052:;
    /* $A052: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A053:;
    /* $A053: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A054:;
    /* $A054: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A055:;
    /* $A055: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A056:;
    /* $A056: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A057:;
    /* $A057: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A058:;
    /* $A058: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A059:;
    /* $A059: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05A:;
    /* $A05A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05B:;
    /* $A05B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05C:;
    /* $A05C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05D:;
    /* $A05D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05E:;
    /* $A05E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05F:;
    /* $A05F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A060:;
    /* $A060: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A061:;
    /* $A061: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A062:;
    /* $A062: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A063:;
    /* $A063: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A064:;
    /* $A064: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A065:;
    /* $A065: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A066:;
    /* $A066: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A067:;
    /* $A067: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A068:;
    /* $A068: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A069:;
    /* $A069: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06A:;
    /* $A06A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06B:;
    /* $A06B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06C:;
    /* $A06C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06D:;
    /* $A06D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06E:;
    /* $A06E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06F:;
    /* $A06F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A070:;
    /* $A070: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A071:;
    /* $A071: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A072:;
    /* $A072: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A073:;
    /* $A073: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A074:;
    /* $A074: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A075:;
    /* $A075: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A076:;
    /* $A076: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A082:;
    /* $A082: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A088:;
    /* $A088: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A091:;
    /* $A091: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2B1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A097:;
    /* $A097: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09A:;
    /* $A09A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09D:;
    /* $A09D: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A0:;
    /* $A0A0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0A2:;
    /* $A0A2: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A5:;
    /* $A0A5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A8:;
    /* $A0A8: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0AB:;
    /* $A0AB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AD:;
    /* $A0AD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AF:;
    /* $A0AF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B1:;
    /* $A0B1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B3:;
    /* $A0B3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B5:;
    /* $A0B5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0B8:;
    /* $A0B8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BA:;
    /* $A0BA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0BD:;
    /* $A0BD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BF:;
    /* $A0BF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0C2:;
    /* $A0C2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C4:;
    /* $A0C4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C6:;
    /* $A0C6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C8:;
    /* $A0C8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CA:;
    /* $A0CA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0CD:;
    /* $A0CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CF:;
    /* $A0CF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D1:;
    /* $A0D1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D3:;
    /* $A0D3: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0D6:;
    /* $A0D6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D8:;
    /* $A0D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D9:;
    /* $A0D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DF:;
    /* $A0DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E3:;
    /* $A0E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E5:;
    /* $A0E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E9:;
    /* $A0E9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EB:;
    /* $A0EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EF:;
    /* $A0EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0F1:;
    /* $A0F1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F3:;
    /* $A0F3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F5:;
    /* $A0F5: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F7:;
    /* $A0F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A0F8:;
    /* $A0F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0FA:;
    /* $A0FA: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A0FC:;
    /* $A0FC: 99 */ maybe_trigger_vblank(5); nes_write((0x9B9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0FF:;
    /* $A0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x9D9C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A102:;
    /* $A102: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A104:;
    /* $A104: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A108:;
    /* $A108: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A10A:;
    /* $A10A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x94 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_A10E:;
    /* $A10E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A110:;
    /* $A110: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A112:;
    /* $A112: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A114:;
    /* $A114: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A117:;
    /* $A117: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A119:;
    /* $A119: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A11C:;
    /* $A11C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_A11E:;
    /* $A11E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x01AD); FLAG_NZ(g_cpu.Y);
label_A123:;
    /* $A123: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_A129:;
    /* $A129: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_A12D:;
    /* $A12D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_A12F:;
    /* $A12F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A131:;
    /* $A131: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A134:;
    /* $A134: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x012B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A137:;
    /* $A137: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A139:;
    /* $A139: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13D:;
    /* $A13D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A141:;
    /* $A141: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A147:;
    /* $A147: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A149:;
    /* $A149: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14D:;
    /* $A14D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A151:;
    /* $A151: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A153:;
    /* $A153: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A157:;
    /* $A157: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15D:;
    /* $A15D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A161:;
    /* $A161: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A167:;
    /* $A167: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16B:;
    /* $A16B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16D:;
    /* $A16D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16F:;
    /* $A16F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A175:;
    /* $A175: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A177:;
    /* $A177: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A179:;
    /* $A179: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17B:;
    /* $A17B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17F:;
    /* $A17F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A185:;
    /* $A185: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A187:;
    /* $A187: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18B:;
    /* $A18B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18F:;
    /* $A18F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A193:;
    /* $A193: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A197:;
    /* $A197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A199:;
    /* $A199: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19D:;
    /* $A19D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19F:;
    /* $A19F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A3:;
    /* $A1A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A9:;
    /* $A1A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AB:;
    /* $A1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AD:;
    /* $A1AD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AF:;
    /* $A1AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B3:;
    /* $A1B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B5:;
    /* $A1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x15 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B7:;
    /* $A1B7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BD:;
    /* $A1BD: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A1BF:;
    /* $A1BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA1BF); return;
}

void func_BFAA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BFAA_b3");
#endif
label_BFAA:;
    /* $BFAA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFAA); return;
}

void func_9A82_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A82_b3");
#endif
label_9A82:;
    /* $9A82: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9A82); return;
}

void func_9ABA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ABA_b3");
#endif
label_9ABA:;
    /* $9ABA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9ABA); return;
}

void func_A44D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A44D_b3");
#endif
label_A44D:;
    /* $A44D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A44F:;
    /* $A44F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A451:;
    /* $A451: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A453:;
    /* $A453: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A454:;
    /* $A454: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A455:;
    /* $A455: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A456:;
    /* $A456: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A457:;
    /* $A457: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A458:;
    /* $A458: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A45A:;
    /* $A45A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A45C:;
    /* $A45C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A45E:;
    /* $A45E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A460:;
    /* $A460: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A462:;
    /* $A462: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A464:;
    /* $A464: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A466:;
    /* $A466: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A468:;
    /* $A468: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A46A:;
    /* $A46A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A46C:;
    /* $A46C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A46E:;
    /* $A46E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A470:;
    /* $A470: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A472:;
    /* $A472: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A474:;
    /* $A474: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A475:;
    /* $A475: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A476:;
    /* $A476: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A477:;
    /* $A477: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A478:;
    /* $A478: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A47A:;
    /* $A47A: 9D */ maybe_trigger_vblank(5); nes_write((0x8D8C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A47D:;
    /* $A47D: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A480:;
    /* $A480: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8C, g_cpu.A);
label_A483:;
    /* $A483: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A486:;
    /* $A486: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8C, g_cpu.A);
label_A489:;
    /* $A489: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A48C:;
    /* $A48C: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8C, g_cpu.A);
label_A48F:;
    /* $A48F: 8C */ maybe_trigger_vblank(4); nes_write(0x9C8D, g_cpu.Y);
label_A492:;
    /* $A492: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_A495:;
    /* $A495: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A496:;
    /* $A496: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A497:;
    /* $A497: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A498:;
    /* $A498: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A499:;
    /* $A499: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A49A:;
    /* $A49A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A44D;
    }
label_A49C:;
    /* $A49C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A49E:;
    /* $A49E: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A0:;
    /* $A4A0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A2:;
    /* $A4A2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A4:;
    /* $A4A4: 96 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A4A6:;
    /* $A4A6: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A4A8:;
    /* $A4A8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4AA:;
    /* $A4AA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4AC:;
    /* $A4AC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4AE:;
    /* $A4AE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4B0:;
    /* $A4B0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4B2:;
    /* $A4B2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B3:;
    /* $A4B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B4:;
    /* $A4B4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B5:;
    /* $A4B5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B6:;
    /* $A4B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B7:;
    /* $A4B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B8:;
    /* $A4B8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B9:;
    /* $A4B9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4BA:;
    /* $A4BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x046D), 3); return; }
label_A4BC:;
    /* $A4BC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4BE:;
    /* $A4BE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C0:;
    /* $A4C0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C2:;
    /* $A4C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C4:;
    /* $A4C4: 99 */ maybe_trigger_vblank(5); nes_write((0x0000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4C7:;
    /* $A4C7: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A4C8:;
    /* $A4C8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CA:;
    /* $A4CA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CC:;
    /* $A4CC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CE:;
    /* $A4CE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D0:;
    /* $A4D0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D2:;
    /* $A4D2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D3:;
    /* $A4D3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D4:;
    /* $A4D4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D5:;
    /* $A4D5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D6:;
    /* $A4D6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D7:;
    /* $A4D7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D8:;
    /* $A4D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D9:;
    /* $A4D9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4DA:;
    /* $A4DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x048D), 3); return; }
label_A4DC:;
    /* $A4DC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4DE:;
    /* $A4DE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4E0:;
    /* $A4E0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4E2:;
    /* $A4E2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4E4:;
    /* $A4E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A4E6:;
    /* $A4E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA4E6); return;
}

void func_8C70_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C70_b3");
#endif
label_8C70:;
    /* $8C70: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8C72:;
    /* $8C72: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C79; }
label_8C74:;
    /* $8C74: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C76:;
    /* $8C76: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8C79:;
    /* $8C79: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8C7C:;
    /* $8C7C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xDF; FLAG_NZ(g_cpu.A);
label_8C7E:;
    /* $8C7E: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8C81:;
    /* $8C81: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
}

void func_8A96_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A96_b3");
#endif
label_8A96:;
    /* $8A96: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8A98:;
    /* $8A98: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_8A9A:;
    /* $8A9A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8AB1; }
label_8A9C:;
    /* $8A9C: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8AA2:;
    /* $8AA2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8AA4:;
    /* $8AA4: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_8AA6:;
    /* $8AA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8AA8:;
    /* $8AA8: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_8AAB:;
    /* $8AAB: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_8AAE:;
    /* $8AAE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8AD9, 3); return;
label_8AB1:;
    /* $8AB1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8AB3:;
    /* $8AB3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AC1; }
label_8AB5:;
    /* $8AB5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8AB7:;
    /* $8AB7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8AB9:;
    /* $8AB9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8A9C;
    }
label_8ABB:;
    /* $8ABB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8ABD:;
    /* $8ABD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8ABF:;
    /* $8ABF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8A9C;
    }
label_8AC1:;
    /* $8AC1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8AC3:;
    /* $8AC3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8ACA; }
label_8AC5:;
    /* $8AC5: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AC7:;
    /* $8AC7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8AD9, 3); return;
label_8ACA:;
    /* $8ACA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8ACC:;
    /* $8ACC: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_8ACE:;
    /* $8ACE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AD0:;
    /* $8AD0: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AD2:;
    /* $8AD2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AD4:;
    /* $8AD4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AD6:;
    /* $8AD6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8AD9, 3); return;
}

void func_8AD9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AD9_b3");
#endif
label_8AD9:;
    /* $8AD9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9442_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9442_b3");
#endif
label_9442:;
    /* $9442: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9444:;
    /* $9444: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_9446:;
    /* $9446: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9448:;
    /* $9448: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_944A:;
    /* $944A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9A; FLAG_NZ(g_cpu.A);
label_944C:;
    /* $944C: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_944E:;
    /* $944E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB8; FLAG_NZ(g_cpu.A);
label_9450:;
    /* $9450: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_9452:;
    /* $9452: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA2; FLAG_NZ(g_cpu.A);
label_9454:;
    /* $9454: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_9456:;
    /* $9456: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_9459:;
    /* $9459: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_942A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_942A_b3");
#endif
label_942A:;
    /* $942A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_942C:;
    /* $942C: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_942E:;
    /* $942E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9430:;
    /* $9430: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9432:;
    /* $9432: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9A; FLAG_NZ(g_cpu.A);
label_9434:;
    /* $9434: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9436:;
    /* $9436: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB8; FLAG_NZ(g_cpu.A);
label_9438:;
    /* $9438: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_943A:;
    /* $943A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_943C:;
    /* $943C: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_943E:;
    /* $943E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_9441:;
    /* $9441: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_91A7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91A7_b3");
#endif
label_91A7:;
    /* $91A7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
}

void func_8048_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8048_b3");
#endif
label_8048:;
    /* $8048: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8048); return;
}

void func_A048_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A048_b3");
#endif
label_A048:;
    /* $A048: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A049:;
    /* $A049: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04A:;
    /* $A04A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04B:;
    /* $A04B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04C:;
    /* $A04C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04D:;
    /* $A04D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04E:;
    /* $A04E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04F:;
    /* $A04F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A050:;
    /* $A050: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A051:;
    /* $A051: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A052:;
    /* $A052: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A053:;
    /* $A053: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A054:;
    /* $A054: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A055:;
    /* $A055: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A056:;
    /* $A056: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A057:;
    /* $A057: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A058:;
    /* $A058: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A059:;
    /* $A059: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05A:;
    /* $A05A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05B:;
    /* $A05B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05C:;
    /* $A05C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05D:;
    /* $A05D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05E:;
    /* $A05E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05F:;
    /* $A05F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A060:;
    /* $A060: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A061:;
    /* $A061: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A062:;
    /* $A062: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A063:;
    /* $A063: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A064:;
    /* $A064: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A065:;
    /* $A065: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A066:;
    /* $A066: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A067:;
    /* $A067: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A068:;
    /* $A068: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A069:;
    /* $A069: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06A:;
    /* $A06A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06B:;
    /* $A06B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06C:;
    /* $A06C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06D:;
    /* $A06D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06E:;
    /* $A06E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06F:;
    /* $A06F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A070:;
    /* $A070: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A071:;
    /* $A071: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A072:;
    /* $A072: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A073:;
    /* $A073: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A074:;
    /* $A074: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A075:;
    /* $A075: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A076:;
    /* $A076: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A082:;
    /* $A082: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A088:;
    /* $A088: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A091:;
    /* $A091: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2B1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A097:;
    /* $A097: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09A:;
    /* $A09A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09D:;
    /* $A09D: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A0:;
    /* $A0A0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0A2:;
    /* $A0A2: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A5:;
    /* $A0A5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A8:;
    /* $A0A8: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0AB:;
    /* $A0AB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AD:;
    /* $A0AD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AF:;
    /* $A0AF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B1:;
    /* $A0B1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B3:;
    /* $A0B3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B5:;
    /* $A0B5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0B8:;
    /* $A0B8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BA:;
    /* $A0BA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0BD:;
    /* $A0BD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BF:;
    /* $A0BF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0C2:;
    /* $A0C2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C4:;
    /* $A0C4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C6:;
    /* $A0C6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C8:;
    /* $A0C8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CA:;
    /* $A0CA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0CD:;
    /* $A0CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CF:;
    /* $A0CF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D1:;
    /* $A0D1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D3:;
    /* $A0D3: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0D6:;
    /* $A0D6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D8:;
    /* $A0D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D9:;
    /* $A0D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DF:;
    /* $A0DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E3:;
    /* $A0E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E5:;
    /* $A0E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E9:;
    /* $A0E9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EB:;
    /* $A0EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EF:;
    /* $A0EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0F1:;
    /* $A0F1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F3:;
    /* $A0F3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F5:;
    /* $A0F5: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F7:;
    /* $A0F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A0F8:;
    /* $A0F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0FA:;
    /* $A0FA: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A0FC:;
    /* $A0FC: 99 */ maybe_trigger_vblank(5); nes_write((0x9B9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0FF:;
    /* $A0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x9D9C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A102:;
    /* $A102: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A104:;
    /* $A104: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A108:;
    /* $A108: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A10A:;
    /* $A10A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x94 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_A10E:;
    /* $A10E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A110:;
    /* $A110: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A112:;
    /* $A112: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A114:;
    /* $A114: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A117:;
    /* $A117: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A119:;
    /* $A119: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A11C:;
    /* $A11C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_A11E:;
    /* $A11E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x01AD); FLAG_NZ(g_cpu.Y);
label_A123:;
    /* $A123: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_A129:;
    /* $A129: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_A12D:;
    /* $A12D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_A12F:;
    /* $A12F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A131:;
    /* $A131: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A134:;
    /* $A134: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x012B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A137:;
    /* $A137: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A139:;
    /* $A139: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13D:;
    /* $A13D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A141:;
    /* $A141: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A147:;
    /* $A147: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A149:;
    /* $A149: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14D:;
    /* $A14D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A151:;
    /* $A151: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A153:;
    /* $A153: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A157:;
    /* $A157: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15D:;
    /* $A15D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A161:;
    /* $A161: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A167:;
    /* $A167: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16B:;
    /* $A16B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16D:;
    /* $A16D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16F:;
    /* $A16F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A175:;
    /* $A175: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A177:;
    /* $A177: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A179:;
    /* $A179: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17B:;
    /* $A17B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17F:;
    /* $A17F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A185:;
    /* $A185: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A187:;
    /* $A187: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18B:;
    /* $A18B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18F:;
    /* $A18F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A193:;
    /* $A193: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A197:;
    /* $A197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A199:;
    /* $A199: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19D:;
    /* $A19D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19F:;
    /* $A19F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A3:;
    /* $A1A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A9:;
    /* $A1A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AB:;
    /* $A1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AD:;
    /* $A1AD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AF:;
    /* $A1AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B3:;
    /* $A1B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B5:;
    /* $A1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x15 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B7:;
    /* $A1B7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BD:;
    /* $A1BD: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A1BF:;
    /* $A1BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA1BF); return;
}

void func_804B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_804B_b3");
#endif
label_804B:;
    /* $804B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x804B); return;
}

void func_A04B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A04B_b3");
#endif
label_A04B:;
    /* $A04B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04C:;
    /* $A04C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04D:;
    /* $A04D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04E:;
    /* $A04E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04F:;
    /* $A04F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A050:;
    /* $A050: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A051:;
    /* $A051: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A052:;
    /* $A052: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A053:;
    /* $A053: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A054:;
    /* $A054: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A055:;
    /* $A055: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A056:;
    /* $A056: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A057:;
    /* $A057: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A058:;
    /* $A058: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A059:;
    /* $A059: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05A:;
    /* $A05A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05B:;
    /* $A05B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05C:;
    /* $A05C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05D:;
    /* $A05D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05E:;
    /* $A05E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05F:;
    /* $A05F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A060:;
    /* $A060: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A061:;
    /* $A061: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A062:;
    /* $A062: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A063:;
    /* $A063: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A064:;
    /* $A064: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A065:;
    /* $A065: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A066:;
    /* $A066: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A067:;
    /* $A067: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A068:;
    /* $A068: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A069:;
    /* $A069: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06A:;
    /* $A06A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06B:;
    /* $A06B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06C:;
    /* $A06C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06D:;
    /* $A06D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06E:;
    /* $A06E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06F:;
    /* $A06F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A070:;
    /* $A070: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A071:;
    /* $A071: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A072:;
    /* $A072: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A073:;
    /* $A073: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A074:;
    /* $A074: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A075:;
    /* $A075: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A076:;
    /* $A076: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A082:;
    /* $A082: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A088:;
    /* $A088: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A091:;
    /* $A091: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2B1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A097:;
    /* $A097: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09A:;
    /* $A09A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09D:;
    /* $A09D: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A0:;
    /* $A0A0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0A2:;
    /* $A0A2: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A5:;
    /* $A0A5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A8:;
    /* $A0A8: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0AB:;
    /* $A0AB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AD:;
    /* $A0AD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AF:;
    /* $A0AF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B1:;
    /* $A0B1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B3:;
    /* $A0B3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B5:;
    /* $A0B5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0B8:;
    /* $A0B8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BA:;
    /* $A0BA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0BD:;
    /* $A0BD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BF:;
    /* $A0BF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0C2:;
    /* $A0C2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C4:;
    /* $A0C4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C6:;
    /* $A0C6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C8:;
    /* $A0C8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CA:;
    /* $A0CA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0CD:;
    /* $A0CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CF:;
    /* $A0CF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D1:;
    /* $A0D1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D3:;
    /* $A0D3: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0D6:;
    /* $A0D6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D8:;
    /* $A0D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D9:;
    /* $A0D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DF:;
    /* $A0DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E3:;
    /* $A0E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E5:;
    /* $A0E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E9:;
    /* $A0E9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EB:;
    /* $A0EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EF:;
    /* $A0EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0F1:;
    /* $A0F1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F3:;
    /* $A0F3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F5:;
    /* $A0F5: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F7:;
    /* $A0F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A0F8:;
    /* $A0F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0FA:;
    /* $A0FA: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A0FC:;
    /* $A0FC: 99 */ maybe_trigger_vblank(5); nes_write((0x9B9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0FF:;
    /* $A0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x9D9C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A102:;
    /* $A102: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A104:;
    /* $A104: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A108:;
    /* $A108: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A10A:;
    /* $A10A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x94 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_A10E:;
    /* $A10E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A110:;
    /* $A110: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A112:;
    /* $A112: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A114:;
    /* $A114: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A117:;
    /* $A117: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A119:;
    /* $A119: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A11C:;
    /* $A11C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_A11E:;
    /* $A11E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x01AD); FLAG_NZ(g_cpu.Y);
label_A123:;
    /* $A123: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_A129:;
    /* $A129: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_A12D:;
    /* $A12D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_A12F:;
    /* $A12F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A131:;
    /* $A131: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A134:;
    /* $A134: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x012B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A137:;
    /* $A137: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A139:;
    /* $A139: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13D:;
    /* $A13D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A141:;
    /* $A141: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A147:;
    /* $A147: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A149:;
    /* $A149: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14D:;
    /* $A14D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A151:;
    /* $A151: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A153:;
    /* $A153: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A157:;
    /* $A157: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15D:;
    /* $A15D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A161:;
    /* $A161: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A167:;
    /* $A167: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16B:;
    /* $A16B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16D:;
    /* $A16D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16F:;
    /* $A16F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A175:;
    /* $A175: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A177:;
    /* $A177: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A179:;
    /* $A179: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17B:;
    /* $A17B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17F:;
    /* $A17F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A185:;
    /* $A185: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A187:;
    /* $A187: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18B:;
    /* $A18B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18F:;
    /* $A18F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A193:;
    /* $A193: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A197:;
    /* $A197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A199:;
    /* $A199: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19D:;
    /* $A19D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19F:;
    /* $A19F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A3:;
    /* $A1A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A9:;
    /* $A1A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AB:;
    /* $A1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AD:;
    /* $A1AD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AF:;
    /* $A1AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B3:;
    /* $A1B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B5:;
    /* $A1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x15 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B7:;
    /* $A1B7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BD:;
    /* $A1BD: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A1BF:;
    /* $A1BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA1BF); return;
}

void func_903E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_903E_b3");
#endif
label_903E:;
    /* $903E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A9); FLAG_NZ(g_cpu.A);
label_9041:;
    /* $9041: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9043:;
    /* $9043: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90BB; }
label_9045:;
    /* $9045: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_9047:;
    /* $9047: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9051; }
label_9049:;
    /* $9049: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_904B:;
    /* $904B: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_904E:;
    /* $904E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_9051:;
    /* $9051: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9053:;
    /* $9053: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_9055:;
    /* $9055: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9075; }
label_9057:;
    /* $9057: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_905A:;
    /* $905A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_905C:;
    /* $905C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9075; }
label_905E:;
    /* $905E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9060:;
    /* $9060: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_9063:;
    /* $9063: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0487; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9066:;
    /* $9066: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_9069:;
    /* $9069: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_906B:;
    /* $906B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9072; }
label_906D:;
    /* $906D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_906F:;
    /* $906F: 8D */ maybe_trigger_vblank(4); nes_write(0x0487, g_cpu.A);
label_9072:;
    /* $9072: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_9075:;
    /* $9075: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9077:;
    /* $9077: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9079:;
    /* $9079: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9094; }
label_907B:;
    /* $907B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_907E:;
    /* $907E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9080:;
    /* $9080: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90BE; }
label_9082:;
    /* $9082: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9084:;
    /* $9084: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_9087:;
    /* $9087: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_908A:;
    /* $908A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_908C:;
    /* $908C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9091; }
label_908E:;
    /* $908E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0487; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9091:;
    /* $9091: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_9094:;
    /* $9094: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9096:;
    /* $9096: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9098:;
    /* $9098: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90A2; }
label_909A:;
    /* $909A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_909C:;
    /* $909C: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_909F:;
    /* $909F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_90A2:;
    /* $90A2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_90A5:;
    /* $90A5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_90A7:;
    /* $90A7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90BE; }
label_90A9:;
    /* $90A9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_90AB:;
    /* $90AB: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_90AE:;
    /* $90AE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_90B1:;
    /* $90B1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_90B3:;
    /* $90B3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_90BE; }
label_90B5:;
    /* $90B5: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0487; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_90B8:;
    /* $90B8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_90BB:;
    /* $90BB: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x90CB, 3);
label_90BE:;
    /* $90BE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9363, 3);
label_90C1:;
    /* $90C1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x92B9, 3);
label_90C4:;
    /* $90C4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9310, 3);
label_90C7:;
    /* $90C7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x928A, 3);
label_90CA:;
    /* $90CA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9009_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9009_b3");
#endif
label_9009:;
    /* $9009: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_900B:;
    /* $900B: 8D */ maybe_trigger_vblank(4); nes_write(0x04A9, g_cpu.A);
label_900E:;
    /* $900E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
}

void func_900E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_900E_b3");
#endif
label_900E:;
    /* $900E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
}

void func_9036_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9036_b3");
#endif
label_9036:;
    /* $9036: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9038:;
    /* $9038: 8D */ maybe_trigger_vblank(4); nes_write(0x04A9, g_cpu.A);
label_903B:;
    /* $903B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
}

void func_9A29_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A29_b3");
#endif
label_9A29:;
    /* $9A29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_9A2B:;
    /* $9A2B: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9A2D:;
    /* $9A2D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9A; FLAG_NZ(g_cpu.A);
label_9A2F:;
    /* $9A2F: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9A31:;
    /* $9A31: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9A35, 3);
label_9A34:;
    /* $9A34: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99D1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99D1_b3");
#endif
label_99D1:;
    /* $99D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF6; FLAG_NZ(g_cpu.A);
label_99D3:;
    /* $99D3: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_99D5:;
    /* $99D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_99D7:;
    /* $99D7: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_99D9:;
    /* $99D9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_99DC:;
    /* $99DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_99DE:;
    /* $99DE: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_99E1:;
    /* $99E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_99E3:;
    /* $99E3: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_99E6:;
    /* $99E6: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_99E7:;
    /* $99E7: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_99E9:;
    /* $99E9: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99EB:;
    /* $99EB: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_99EE:;
    /* $99EE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99EF:;
    /* $99EF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99E9;
    }
label_99F1:;
    /* $99F1: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99F3:;
    /* $99F3: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_99F4:;
    /* $99F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99E9;
    }
label_99F6:;
    /* $99F6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9204_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9204_b3");
#endif
label_9204:;
    /* $9204: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9223, 3); return;
}

void func_9223_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9223_b3");
#endif
label_9223:;
    /* $9223: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCD); FLAG_NZ(g_cpu.A);
label_9225:;
    /* $9225: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_924B; }
label_9227:;
    /* $9227: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F6); FLAG_NZ(g_cpu.A);
label_922A:;
    /* $922A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9232; }
label_922C:;
    /* $922C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03F6; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_922F:;
    /* $922F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_9232:;
    /* $9232: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9234:;
    /* $9234: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_9237:;
    /* $9237: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9239:;
    /* $9239: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_923B:;
    /* $923B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_926D; }
label_923D:;
    /* $923D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_923F:;
    /* $923F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9241:;
    /* $9241: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9256; }
label_9243:;
    /* $9243: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9245:;
    /* $9245: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_9248:;
    /* $9248: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_924B:;
    /* $924B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_924D:;
    /* $924D: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_9250:;
    /* $9250: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9252:;
    /* $9252: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9254:;
    /* $9254: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_926D; }
label_9256:;
    /* $9256: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9258:;
    /* $9258: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9289; }
label_925A:;
    /* $925A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_925C:;
    /* $925C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_925E:;
    /* $925E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9260:;
    /* $9260: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9262:;
    /* $9262: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9264:;
    /* $9264: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_926A:;
    /* $926A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_926D:;
    /* $926D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_926F:;
    /* $926F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9271:;
    /* $9271: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9289; }
label_9273:;
    /* $9273: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9275:;
    /* $9275: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9277:;
    /* $9277: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9289; }
label_9279:;
    /* $9279: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA7; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_927B:;
    /* $927B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_927D:;
    /* $927D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_927F:;
    /* $927F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9281:;
    /* $9281: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9283:;
    /* $9283: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9289:;
    /* $9289: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F47_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8FD6;
        case 2: goto label_8F76;
    }
label_8F47:;
    /* $8F47: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8F49:;
    /* $8F49: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8F8C; }
label_8F4B:;
    /* $8F4B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8F4D:;
    /* $8F4D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8F4F:;
    /* $8F4F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8F66; }
label_8F51:;
    /* $8F51: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8F57:;
    /* $8F57: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA1; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8F59:;
    /* $8F59: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA1); FLAG_NZ(g_cpu.A);
label_8F5B:;
    /* $8F5B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8F5D:;
    /* $8F5D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8FD6; }
label_8F5F:;
    /* $8F5F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8F61:;
    /* $8F61: 85 */ maybe_trigger_vblank(3); nes_write(0xA1, g_cpu.A);
label_8F63:;
    /* $8F63: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8F66:;
    /* $8F66: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA1); FLAG_NZ(g_cpu.A);
label_8F68:;
    /* $8F68: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8F69:;
    /* $8F69: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8F6B:;
    /* $8F6B: 85 */ maybe_trigger_vblank(3); nes_write(0xA1, g_cpu.A);
label_8F6D:;
    /* $8F6D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8F76; }
label_8F6F:;
    /* $8F6F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8F71:;
    /* $8F71: 85 */ maybe_trigger_vblank(3); nes_write(0xA1, g_cpu.A);
label_8F73:;
    /* $8F73: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8F76:;
    /* $8F76: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA1); FLAG_NZ(g_cpu.A);
label_8F78:;
    /* $8F78: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8F7A:;
    /* $8F7A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8F85; }
label_8F7C:;
    /* $8F7C: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8F82:;
    /* $8F82: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8F85:;
    /* $8F85: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8F87:;
    /* $8F87: 85 */ maybe_trigger_vblank(3); nes_write(0xA1, g_cpu.A);
label_8F89:;
    /* $8F89: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8F8C:;
    /* $8F8C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8F8E:;
    /* $8F8E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8FD6; }
label_8F90:;
    /* $8F90: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8F92:;
    /* $8F92: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8F94:;
    /* $8F94: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8FAE; }
label_8F96:;
    /* $8F96: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8F9C:;
    /* $8F9C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0487; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8F9F:;
    /* $8F9F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8FA2:;
    /* $8FA2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8FA4:;
    /* $8FA4: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8FD6; }
label_8FA6:;
    /* $8FA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8FA8:;
    /* $8FA8: 8D */ maybe_trigger_vblank(4); nes_write(0x0487, g_cpu.A);
label_8FAB:;
    /* $8FAB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8FAE:;
    /* $8FAE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8FB1:;
    /* $8FB1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8FB2:;
    /* $8FB2: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8FB4:;
    /* $8FB4: 8D */ maybe_trigger_vblank(4); nes_write(0x0487, g_cpu.A);
label_8FB7:;
    /* $8FB7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8FC1; }
label_8FB9:;
    /* $8FB9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8FBB:;
    /* $8FBB: 8D */ maybe_trigger_vblank(4); nes_write(0x0487, g_cpu.A);
label_8FBE:;
    /* $8FBE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8FC1:;
    /* $8FC1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8FC4:;
    /* $8FC4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8FC6:;
    /* $8FC6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8FD1; }
label_8FC8:;
    /* $8FC8: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8FCE:;
    /* $8FCE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8FD1:;
    /* $8FD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8FD3:;
    /* $8FD3: 8D */ maybe_trigger_vblank(4); nes_write(0x0487, g_cpu.A);
label_8FD6:;
    /* $8FD6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F47_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F47_b3");
#endif
    func_8F47_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8FD6_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8FD6_b3");
#endif
    func_8F47_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8F76_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F76_b3");
#endif
    func_8F47_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8E5F_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E5F_b3");
#endif
label_8E5F:;
    /* $8E5F: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8E61:;
    /* $8E61: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8E64:;
    /* $8E64: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8A66_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A66_b3");
#endif
label_8A66:;
    /* $8A66: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8A68:;
    /* $8A68: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A6F; }
label_8A6A:;
    /* $8A6A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6C:;
    /* $8A6C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A81, 3); return;
label_8A6F:;
    /* $8A6F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8A71:;
    /* $8A71: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8A73:;
    /* $8A73: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8A7B; }
label_8A75:;
    /* $8A75: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A77:;
    /* $8A77: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A79:;
    /* $8A79: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A7B:;
    /* $8A7B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8A7D:;
    /* $8A7D: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_8A7F:;
    /* $8A7F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A81:;
    /* $8A81: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8AE8_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AE8_b3");
#endif
label_8AE8:;
    /* $8AE8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8AEA:;
    /* $8AEA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8AEC:;
    /* $8AEC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8AEE; }
label_8AEE:;
    /* $8AEE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8AF0:;
    /* $8AF0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AF7; }
label_8AF2:;
    /* $8AF2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AF4:;
    /* $8AF4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8B2D, 3); return;
label_8AF7:;
    /* $8AF7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8AF9:;
    /* $8AF9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8AFB:;
    /* $8AFB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_8B03; }
label_8AFD:;
    /* $8AFD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AFF:;
    /* $8AFF: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B01:;
    /* $8B01: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B03:;
    /* $8B03: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8B05:;
    /* $8B05: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_8B07:;
    /* $8B07: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B09:;
    /* $8B09: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8B2D, 3); return;
}

void func_9901_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9926;
    }
label_9901:;
    /* $9901: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9903:;
    /* $9903: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_9906:;
    /* $9906: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9908:;
    /* $9908: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_990B:;
    /* $990B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_990D:;
    /* $990D: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_9910:;
    /* $9910: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_9912:;
    /* $9912: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_9915:;
    /* $9915: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9917:;
    /* $9917: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_991A:;
    /* $991A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_991C:;
    /* $991C: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_991F:;
    /* $991F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9921:;
    /* $9921: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_9924:;
    /* $9924: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x15; FLAG_NZ(g_cpu.A);
label_9926:;
    /* $9926: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_9929:;
    /* $9929: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_992B:;
    /* $992B: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_992E:;
    /* $992E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_9930:;
    /* $9930: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_9933:;
    /* $9933: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9935:;
    /* $9935: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_9938:;
    /* $9938: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_993A:;
    /* $993A: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_993D:;
    /* $993D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_993F:;
    /* $993F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC060, 3);
label_9942:;
    /* $9942: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9944:;
    /* $9944: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_9947:;
    /* $9947: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9949:;
    /* $9949: 8D */ maybe_trigger_vblank(4); nes_write(0x6000, g_cpu.A);
label_994C:;
    /* $994C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9901_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9901_b3");
#endif
    func_9901_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9926_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9926_b3");
#endif
    func_9901_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99F7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F7_b3");
#endif
label_99F7:;
    /* $99F7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF6; FLAG_NZ(g_cpu.A);
label_99F9:;
    /* $99F9: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_99FB:;
    /* $99FB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA5; FLAG_NZ(g_cpu.A);
label_99FD:;
    /* $99FD: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_99FF:;
    /* $99FF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_9A02:;
    /* $9A02: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9A04:;
    /* $9A04: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9A07:;
    /* $9A07: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A09:;
    /* $9A09: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9A0C:;
    /* $9A0C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9A0D:;
    /* $9A0D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_9A0F:;
    /* $9A0F: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A11:;
    /* $9A11: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_9A14:;
    /* $9A14: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A15:;
    /* $9A15: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A0F;
    }
label_9A17:;
    /* $9A17: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9A1A:;
    /* $9A1A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A0F;
    }
label_9A1C:;
    /* $9A1C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_805A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_805A_b3");
#endif
label_805A:;
    /* $805A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x805A); return;
}

void func_A05A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A05A_b3");
#endif
label_A05A:;
    /* $A05A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05B:;
    /* $A05B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05C:;
    /* $A05C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05D:;
    /* $A05D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05E:;
    /* $A05E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05F:;
    /* $A05F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A060:;
    /* $A060: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A061:;
    /* $A061: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A062:;
    /* $A062: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A063:;
    /* $A063: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A064:;
    /* $A064: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A065:;
    /* $A065: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A066:;
    /* $A066: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A067:;
    /* $A067: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A068:;
    /* $A068: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A069:;
    /* $A069: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06A:;
    /* $A06A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06B:;
    /* $A06B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06C:;
    /* $A06C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06D:;
    /* $A06D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06E:;
    /* $A06E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06F:;
    /* $A06F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A070:;
    /* $A070: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A071:;
    /* $A071: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A072:;
    /* $A072: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A073:;
    /* $A073: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A074:;
    /* $A074: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A075:;
    /* $A075: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A076:;
    /* $A076: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A082:;
    /* $A082: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A088:;
    /* $A088: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A091:;
    /* $A091: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2B1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A097:;
    /* $A097: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09A:;
    /* $A09A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09D:;
    /* $A09D: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A0:;
    /* $A0A0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0A2:;
    /* $A0A2: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A5:;
    /* $A0A5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A8:;
    /* $A0A8: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0AB:;
    /* $A0AB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AD:;
    /* $A0AD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AF:;
    /* $A0AF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B1:;
    /* $A0B1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B3:;
    /* $A0B3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B5:;
    /* $A0B5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0B8:;
    /* $A0B8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BA:;
    /* $A0BA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0BD:;
    /* $A0BD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BF:;
    /* $A0BF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0C2:;
    /* $A0C2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C4:;
    /* $A0C4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C6:;
    /* $A0C6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C8:;
    /* $A0C8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CA:;
    /* $A0CA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0CD:;
    /* $A0CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CF:;
    /* $A0CF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D1:;
    /* $A0D1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D3:;
    /* $A0D3: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0D6:;
    /* $A0D6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D8:;
    /* $A0D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D9:;
    /* $A0D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DF:;
    /* $A0DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E3:;
    /* $A0E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E5:;
    /* $A0E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E9:;
    /* $A0E9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EB:;
    /* $A0EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EF:;
    /* $A0EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0F1:;
    /* $A0F1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F3:;
    /* $A0F3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F5:;
    /* $A0F5: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F7:;
    /* $A0F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A0F8:;
    /* $A0F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0FA:;
    /* $A0FA: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A0FC:;
    /* $A0FC: 99 */ maybe_trigger_vblank(5); nes_write((0x9B9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0FF:;
    /* $A0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x9D9C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A102:;
    /* $A102: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A104:;
    /* $A104: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A108:;
    /* $A108: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A10A:;
    /* $A10A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x94 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_A10E:;
    /* $A10E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A110:;
    /* $A110: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A112:;
    /* $A112: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A114:;
    /* $A114: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A117:;
    /* $A117: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A119:;
    /* $A119: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A11C:;
    /* $A11C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_A11E:;
    /* $A11E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x01AD); FLAG_NZ(g_cpu.Y);
label_A123:;
    /* $A123: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_A129:;
    /* $A129: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_A12D:;
    /* $A12D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_A12F:;
    /* $A12F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A131:;
    /* $A131: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A134:;
    /* $A134: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x012B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A137:;
    /* $A137: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A139:;
    /* $A139: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13D:;
    /* $A13D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A141:;
    /* $A141: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A147:;
    /* $A147: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A149:;
    /* $A149: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14D:;
    /* $A14D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A151:;
    /* $A151: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A153:;
    /* $A153: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A157:;
    /* $A157: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15D:;
    /* $A15D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A161:;
    /* $A161: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A167:;
    /* $A167: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16B:;
    /* $A16B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16D:;
    /* $A16D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16F:;
    /* $A16F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A175:;
    /* $A175: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A177:;
    /* $A177: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A179:;
    /* $A179: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17B:;
    /* $A17B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17F:;
    /* $A17F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A185:;
    /* $A185: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A187:;
    /* $A187: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18B:;
    /* $A18B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18F:;
    /* $A18F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A193:;
    /* $A193: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A197:;
    /* $A197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A199:;
    /* $A199: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19D:;
    /* $A19D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19F:;
    /* $A19F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A3:;
    /* $A1A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A9:;
    /* $A1A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AB:;
    /* $A1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AD:;
    /* $A1AD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AF:;
    /* $A1AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B3:;
    /* $A1B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B5:;
    /* $A1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x15 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B7:;
    /* $A1B7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BD:;
    /* $A1BD: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A1BF:;
    /* $A1BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA1BF); return;
}

void func_91AA_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9289;
        case 2: goto label_91EE;
    }
label_91AA:;
    /* $91AA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_91AC:;
    /* $91AC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_91B1; }
label_91AE:;
    /* $91AE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_91B1:;
    /* $91B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_91B3:;
    /* $91B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_91DF; }
label_91B5:;
    /* $91B5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F5); FLAG_NZ(g_cpu.A);
label_91B8:;
    /* $91B8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_91C0; }
label_91BA:;
    /* $91BA: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03F5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91BD:;
    /* $91BD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9204, 3); return;
label_91C0:;
    /* $91C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_91C2:;
    /* $91C2: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_91C5:;
    /* $91C5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_91C7:;
    /* $91C7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_91C9:;
    /* $91C9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_920D; }
label_91CB:;
    /* $91CB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_91CD:;
    /* $91CD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_91CF:;
    /* $91CF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_920D; }
label_91D1:;
    /* $91D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_91D3:;
    /* $91D3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_91D5:;
    /* $91D5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_91F0; }
label_91D7:;
    /* $91D7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_91D9:;
    /* $91D9: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_91DC:;
    /* $91DC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9204, 3); return;
label_91DF:;
    /* $91DF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_91E1:;
    /* $91E1: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_91E4:;
    /* $91E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_91E6:;
    /* $91E6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_91E8:;
    /* $91E8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_920D; }
label_91EA:;
    /* $91EA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_91EC:;
    /* $91EC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_91EE:;
    /* $91EE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9207; }
label_91F0:;
    /* $91F0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_91F2:;
    /* $91F2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9204; }
label_91F4:;
    /* $91F4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA6; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91F6:;
    /* $91F6: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91F8:;
    /* $91F8: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FA:;
    /* $91FA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FC:;
    /* $91FC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FE:;
    /* $91FE: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9204:;
    /* $9204: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9223, 3); return;
label_9207:;
    /* $9207: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9209:;
    /* $9209: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_920B:;
    /* $920B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9223; }
label_920D:;
    /* $920D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_920F:;
    /* $920F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9211:;
    /* $9211: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9223; }
label_9213:;
    /* $9213: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA6; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9215:;
    /* $9215: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9217:;
    /* $9217: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9219:;
    /* $9219: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_921B:;
    /* $921B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_921D:;
    /* $921D: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9223:;
    /* $9223: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCD); FLAG_NZ(g_cpu.A);
label_9225:;
    /* $9225: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_924B; }
label_9227:;
    /* $9227: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F6); FLAG_NZ(g_cpu.A);
label_922A:;
    /* $922A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9232; }
label_922C:;
    /* $922C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03F6; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_922F:;
    /* $922F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_9232:;
    /* $9232: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9234:;
    /* $9234: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_9237:;
    /* $9237: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9239:;
    /* $9239: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_923B:;
    /* $923B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_926D; }
label_923D:;
    /* $923D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_923F:;
    /* $923F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9241:;
    /* $9241: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9256; }
label_9243:;
    /* $9243: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9245:;
    /* $9245: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_9248:;
    /* $9248: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_924B:;
    /* $924B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_924D:;
    /* $924D: 8D */ maybe_trigger_vblank(4); nes_write(0x03F6, g_cpu.A);
label_9250:;
    /* $9250: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9252:;
    /* $9252: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9254:;
    /* $9254: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_926D; }
label_9256:;
    /* $9256: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9258:;
    /* $9258: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9289; }
label_925A:;
    /* $925A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_925C:;
    /* $925C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_925E:;
    /* $925E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9260:;
    /* $9260: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9262:;
    /* $9262: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9264:;
    /* $9264: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_926A:;
    /* $926A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_926D:;
    /* $926D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_926F:;
    /* $926F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9271:;
    /* $9271: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9289; }
label_9273:;
    /* $9273: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9275:;
    /* $9275: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9277:;
    /* $9277: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9289; }
label_9279:;
    /* $9279: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA7; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_927B:;
    /* $927B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_927D:;
    /* $927D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_927F:;
    /* $927F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9281:;
    /* $9281: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9283:;
    /* $9283: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9289:;
    /* $9289: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_91AA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91AA_b3");
#endif
    func_91AA_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9289_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9289_b3");
#endif
    func_91AA_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_91EE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91EE_b3");
#endif
    func_91AA_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8039_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8039_b3");
#endif
label_8039:;
    /* $8039: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8039); return;
}

void func_A039_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A039_b3");
#endif
label_A039:;
    /* $A039: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03A:;
    /* $A03A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03B:;
    /* $A03B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03C:;
    /* $A03C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03D:;
    /* $A03D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03E:;
    /* $A03E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03F:;
    /* $A03F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A040:;
    /* $A040: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A041:;
    /* $A041: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A042:;
    /* $A042: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A043:;
    /* $A043: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A044:;
    /* $A044: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A045:;
    /* $A045: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A046:;
    /* $A046: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A047:;
    /* $A047: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A048:;
    /* $A048: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A049:;
    /* $A049: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04A:;
    /* $A04A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04B:;
    /* $A04B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04C:;
    /* $A04C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04D:;
    /* $A04D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04E:;
    /* $A04E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04F:;
    /* $A04F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A050:;
    /* $A050: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A051:;
    /* $A051: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A052:;
    /* $A052: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A053:;
    /* $A053: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A054:;
    /* $A054: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A055:;
    /* $A055: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A056:;
    /* $A056: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A057:;
    /* $A057: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A058:;
    /* $A058: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A059:;
    /* $A059: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05A:;
    /* $A05A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05B:;
    /* $A05B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05C:;
    /* $A05C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05D:;
    /* $A05D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05E:;
    /* $A05E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05F:;
    /* $A05F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A060:;
    /* $A060: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A061:;
    /* $A061: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A062:;
    /* $A062: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A063:;
    /* $A063: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A064:;
    /* $A064: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A065:;
    /* $A065: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A066:;
    /* $A066: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A067:;
    /* $A067: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A068:;
    /* $A068: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A069:;
    /* $A069: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06A:;
    /* $A06A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06B:;
    /* $A06B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06C:;
    /* $A06C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06D:;
    /* $A06D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06E:;
    /* $A06E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06F:;
    /* $A06F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A070:;
    /* $A070: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A071:;
    /* $A071: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A072:;
    /* $A072: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A073:;
    /* $A073: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A074:;
    /* $A074: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A075:;
    /* $A075: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A076:;
    /* $A076: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A082:;
    /* $A082: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A088:;
    /* $A088: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A091:;
    /* $A091: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2B1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A097:;
    /* $A097: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09A:;
    /* $A09A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09D:;
    /* $A09D: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A0:;
    /* $A0A0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0A2:;
    /* $A0A2: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A5:;
    /* $A0A5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A8:;
    /* $A0A8: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0AB:;
    /* $A0AB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AD:;
    /* $A0AD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AF:;
    /* $A0AF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B1:;
    /* $A0B1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B3:;
    /* $A0B3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B5:;
    /* $A0B5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0B8:;
    /* $A0B8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BA:;
    /* $A0BA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0BD:;
    /* $A0BD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BF:;
    /* $A0BF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0C2:;
    /* $A0C2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C4:;
    /* $A0C4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C6:;
    /* $A0C6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C8:;
    /* $A0C8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CA:;
    /* $A0CA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0CD:;
    /* $A0CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CF:;
    /* $A0CF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D1:;
    /* $A0D1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D3:;
    /* $A0D3: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0D6:;
    /* $A0D6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D8:;
    /* $A0D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D9:;
    /* $A0D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DF:;
    /* $A0DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E3:;
    /* $A0E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E5:;
    /* $A0E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E9:;
    /* $A0E9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EB:;
    /* $A0EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EF:;
    /* $A0EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0F1:;
    /* $A0F1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F3:;
    /* $A0F3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F5:;
    /* $A0F5: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F7:;
    /* $A0F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A0F8:;
    /* $A0F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0FA:;
    /* $A0FA: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A0FC:;
    /* $A0FC: 99 */ maybe_trigger_vblank(5); nes_write((0x9B9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0FF:;
    /* $A0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x9D9C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A102:;
    /* $A102: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A104:;
    /* $A104: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A108:;
    /* $A108: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A10A:;
    /* $A10A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x94 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_A10E:;
    /* $A10E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A110:;
    /* $A110: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A112:;
    /* $A112: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A114:;
    /* $A114: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A117:;
    /* $A117: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A119:;
    /* $A119: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A11C:;
    /* $A11C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_A11E:;
    /* $A11E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x01AD); FLAG_NZ(g_cpu.Y);
label_A123:;
    /* $A123: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_A129:;
    /* $A129: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_A12D:;
    /* $A12D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_A12F:;
    /* $A12F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A131:;
    /* $A131: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A134:;
    /* $A134: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x012B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A137:;
    /* $A137: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A139:;
    /* $A139: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13D:;
    /* $A13D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A141:;
    /* $A141: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A147:;
    /* $A147: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A149:;
    /* $A149: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14D:;
    /* $A14D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A151:;
    /* $A151: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A153:;
    /* $A153: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A157:;
    /* $A157: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15D:;
    /* $A15D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A161:;
    /* $A161: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A167:;
    /* $A167: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16B:;
    /* $A16B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16D:;
    /* $A16D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16F:;
    /* $A16F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A175:;
    /* $A175: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A177:;
    /* $A177: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A179:;
    /* $A179: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17B:;
    /* $A17B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17F:;
    /* $A17F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A185:;
    /* $A185: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A187:;
    /* $A187: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18B:;
    /* $A18B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18F:;
    /* $A18F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A193:;
    /* $A193: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A197:;
    /* $A197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A199:;
    /* $A199: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19D:;
    /* $A19D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19F:;
    /* $A19F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A3:;
    /* $A1A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A9:;
    /* $A1A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AB:;
    /* $A1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AD:;
    /* $A1AD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AF:;
    /* $A1AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B3:;
    /* $A1B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B5:;
    /* $A1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x15 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B7:;
    /* $A1B7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BD:;
    /* $A1BD: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A1BF:;
    /* $A1BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA1BF); return;
}

void func_803C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803C_b3");
#endif
label_803C:;
    /* $803C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x803C); return;
}

void func_A03C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A03C_b3");
#endif
label_A03C:;
    /* $A03C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03D:;
    /* $A03D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03E:;
    /* $A03E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A03F:;
    /* $A03F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A040:;
    /* $A040: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A041:;
    /* $A041: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A042:;
    /* $A042: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A043:;
    /* $A043: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A044:;
    /* $A044: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A045:;
    /* $A045: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A046:;
    /* $A046: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A047:;
    /* $A047: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A048:;
    /* $A048: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A049:;
    /* $A049: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04A:;
    /* $A04A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04B:;
    /* $A04B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04C:;
    /* $A04C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04D:;
    /* $A04D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04E:;
    /* $A04E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04F:;
    /* $A04F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A050:;
    /* $A050: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A051:;
    /* $A051: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A052:;
    /* $A052: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A053:;
    /* $A053: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A054:;
    /* $A054: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A055:;
    /* $A055: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A056:;
    /* $A056: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A057:;
    /* $A057: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A058:;
    /* $A058: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A059:;
    /* $A059: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05A:;
    /* $A05A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05B:;
    /* $A05B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05C:;
    /* $A05C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05D:;
    /* $A05D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05E:;
    /* $A05E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05F:;
    /* $A05F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A060:;
    /* $A060: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A061:;
    /* $A061: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A062:;
    /* $A062: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A063:;
    /* $A063: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A064:;
    /* $A064: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A065:;
    /* $A065: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A066:;
    /* $A066: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A067:;
    /* $A067: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A068:;
    /* $A068: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A069:;
    /* $A069: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06A:;
    /* $A06A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06B:;
    /* $A06B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06C:;
    /* $A06C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06D:;
    /* $A06D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06E:;
    /* $A06E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06F:;
    /* $A06F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A070:;
    /* $A070: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A071:;
    /* $A071: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A072:;
    /* $A072: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A073:;
    /* $A073: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A074:;
    /* $A074: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A075:;
    /* $A075: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A076:;
    /* $A076: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A082:;
    /* $A082: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A088:;
    /* $A088: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A091:;
    /* $A091: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2B1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A097:;
    /* $A097: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09A:;
    /* $A09A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09D:;
    /* $A09D: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A0:;
    /* $A0A0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0A2:;
    /* $A0A2: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A5:;
    /* $A0A5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A8:;
    /* $A0A8: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0AB:;
    /* $A0AB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AD:;
    /* $A0AD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AF:;
    /* $A0AF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B1:;
    /* $A0B1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B3:;
    /* $A0B3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B5:;
    /* $A0B5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0B8:;
    /* $A0B8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BA:;
    /* $A0BA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0BD:;
    /* $A0BD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BF:;
    /* $A0BF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0C2:;
    /* $A0C2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C4:;
    /* $A0C4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C6:;
    /* $A0C6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C8:;
    /* $A0C8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CA:;
    /* $A0CA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0CD:;
    /* $A0CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CF:;
    /* $A0CF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D1:;
    /* $A0D1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D3:;
    /* $A0D3: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0D6:;
    /* $A0D6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D8:;
    /* $A0D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D9:;
    /* $A0D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DF:;
    /* $A0DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E3:;
    /* $A0E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E5:;
    /* $A0E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E9:;
    /* $A0E9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EB:;
    /* $A0EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EF:;
    /* $A0EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0F1:;
    /* $A0F1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F3:;
    /* $A0F3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F5:;
    /* $A0F5: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F7:;
    /* $A0F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A0F8:;
    /* $A0F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0FA:;
    /* $A0FA: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A0FC:;
    /* $A0FC: 99 */ maybe_trigger_vblank(5); nes_write((0x9B9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0FF:;
    /* $A0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x9D9C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A102:;
    /* $A102: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A104:;
    /* $A104: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A108:;
    /* $A108: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A10A:;
    /* $A10A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x94 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_A10E:;
    /* $A10E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A110:;
    /* $A110: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A112:;
    /* $A112: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A114:;
    /* $A114: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A117:;
    /* $A117: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A119:;
    /* $A119: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A11C:;
    /* $A11C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_A11E:;
    /* $A11E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x01AD); FLAG_NZ(g_cpu.Y);
label_A123:;
    /* $A123: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_A129:;
    /* $A129: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_A12D:;
    /* $A12D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_A12F:;
    /* $A12F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A131:;
    /* $A131: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A134:;
    /* $A134: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x012B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A137:;
    /* $A137: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A139:;
    /* $A139: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13D:;
    /* $A13D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A141:;
    /* $A141: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A147:;
    /* $A147: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A149:;
    /* $A149: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14D:;
    /* $A14D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A151:;
    /* $A151: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A153:;
    /* $A153: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A157:;
    /* $A157: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15D:;
    /* $A15D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A161:;
    /* $A161: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A167:;
    /* $A167: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16B:;
    /* $A16B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16D:;
    /* $A16D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16F:;
    /* $A16F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A175:;
    /* $A175: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A177:;
    /* $A177: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A179:;
    /* $A179: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17B:;
    /* $A17B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17F:;
    /* $A17F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A185:;
    /* $A185: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A187:;
    /* $A187: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18B:;
    /* $A18B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18F:;
    /* $A18F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A193:;
    /* $A193: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A197:;
    /* $A197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A199:;
    /* $A199: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19D:;
    /* $A19D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19F:;
    /* $A19F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A3:;
    /* $A1A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A9:;
    /* $A1A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AB:;
    /* $A1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AD:;
    /* $A1AD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AF:;
    /* $A1AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B3:;
    /* $A1B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B5:;
    /* $A1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x15 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B7:;
    /* $A1B7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BD:;
    /* $A1BD: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A1BF:;
    /* $A1BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA1BF); return;
}

void func_8045_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8045_b3");
#endif
label_8045:;
    /* $8045: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8045); return;
}

void func_A045_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A045_b3");
#endif
label_A045:;
    /* $A045: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A046:;
    /* $A046: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A047:;
    /* $A047: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A048:;
    /* $A048: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A049:;
    /* $A049: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04A:;
    /* $A04A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04B:;
    /* $A04B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04C:;
    /* $A04C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04D:;
    /* $A04D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04E:;
    /* $A04E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A04F:;
    /* $A04F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A050:;
    /* $A050: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A051:;
    /* $A051: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A052:;
    /* $A052: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A053:;
    /* $A053: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A054:;
    /* $A054: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A055:;
    /* $A055: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A056:;
    /* $A056: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A057:;
    /* $A057: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A058:;
    /* $A058: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A059:;
    /* $A059: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05A:;
    /* $A05A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05B:;
    /* $A05B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05C:;
    /* $A05C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05D:;
    /* $A05D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05E:;
    /* $A05E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A05F:;
    /* $A05F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A060:;
    /* $A060: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A061:;
    /* $A061: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A062:;
    /* $A062: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A063:;
    /* $A063: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A064:;
    /* $A064: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A065:;
    /* $A065: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A066:;
    /* $A066: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A067:;
    /* $A067: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A068:;
    /* $A068: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A069:;
    /* $A069: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06A:;
    /* $A06A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06B:;
    /* $A06B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06C:;
    /* $A06C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06D:;
    /* $A06D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06E:;
    /* $A06E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06F:;
    /* $A06F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A070:;
    /* $A070: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A071:;
    /* $A071: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A072:;
    /* $A072: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A073:;
    /* $A073: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A074:;
    /* $A074: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A075:;
    /* $A075: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A076:;
    /* $A076: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A082:;
    /* $A082: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A088:;
    /* $A088: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A091:;
    /* $A091: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2B1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A097:;
    /* $A097: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09A:;
    /* $A09A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09D:;
    /* $A09D: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A0:;
    /* $A0A0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0A2:;
    /* $A0A2: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A5:;
    /* $A0A5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A8:;
    /* $A0A8: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0AB:;
    /* $A0AB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AD:;
    /* $A0AD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AF:;
    /* $A0AF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B1:;
    /* $A0B1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B3:;
    /* $A0B3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B5:;
    /* $A0B5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0B8:;
    /* $A0B8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BA:;
    /* $A0BA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0BD:;
    /* $A0BD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BF:;
    /* $A0BF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0C2:;
    /* $A0C2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C4:;
    /* $A0C4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C6:;
    /* $A0C6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C8:;
    /* $A0C8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CA:;
    /* $A0CA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0CD:;
    /* $A0CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CF:;
    /* $A0CF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D1:;
    /* $A0D1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D3:;
    /* $A0D3: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0D6:;
    /* $A0D6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D8:;
    /* $A0D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D9:;
    /* $A0D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DF:;
    /* $A0DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E3:;
    /* $A0E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E5:;
    /* $A0E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E9:;
    /* $A0E9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EB:;
    /* $A0EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EF:;
    /* $A0EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0F1:;
    /* $A0F1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F3:;
    /* $A0F3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F5:;
    /* $A0F5: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F7:;
    /* $A0F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A0F8:;
    /* $A0F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0FA:;
    /* $A0FA: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A0FC:;
    /* $A0FC: 99 */ maybe_trigger_vblank(5); nes_write((0x9B9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0FF:;
    /* $A0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x9D9C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A102:;
    /* $A102: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A104:;
    /* $A104: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A108:;
    /* $A108: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A10A:;
    /* $A10A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x94 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_A10E:;
    /* $A10E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A110:;
    /* $A110: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A112:;
    /* $A112: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A114:;
    /* $A114: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A117:;
    /* $A117: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A119:;
    /* $A119: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A11C:;
    /* $A11C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_A11E:;
    /* $A11E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x01AD); FLAG_NZ(g_cpu.Y);
label_A123:;
    /* $A123: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_A129:;
    /* $A129: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_A12D:;
    /* $A12D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_A12F:;
    /* $A12F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A131:;
    /* $A131: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A134:;
    /* $A134: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x012B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A137:;
    /* $A137: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A139:;
    /* $A139: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13D:;
    /* $A13D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A141:;
    /* $A141: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A147:;
    /* $A147: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A149:;
    /* $A149: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14D:;
    /* $A14D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A151:;
    /* $A151: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A153:;
    /* $A153: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A157:;
    /* $A157: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15D:;
    /* $A15D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A161:;
    /* $A161: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A167:;
    /* $A167: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16B:;
    /* $A16B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16D:;
    /* $A16D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16F:;
    /* $A16F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A175:;
    /* $A175: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A177:;
    /* $A177: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A179:;
    /* $A179: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17B:;
    /* $A17B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17F:;
    /* $A17F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A185:;
    /* $A185: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A187:;
    /* $A187: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18B:;
    /* $A18B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18F:;
    /* $A18F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A193:;
    /* $A193: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A197:;
    /* $A197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A199:;
    /* $A199: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19D:;
    /* $A19D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19F:;
    /* $A19F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A3:;
    /* $A1A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A9:;
    /* $A1A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AB:;
    /* $A1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AD:;
    /* $A1AD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AF:;
    /* $A1AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B3:;
    /* $A1B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B5:;
    /* $A1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x15 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B7:;
    /* $A1B7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BD:;
    /* $A1BD: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A1BF:;
    /* $A1BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA1BF); return;
}

void func_8066_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8066_b3");
#endif
label_8066:;
    /* $8066: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8066); return;
}

void func_A066_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A066_b3");
#endif
label_A066:;
    /* $A066: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A067:;
    /* $A067: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A068:;
    /* $A068: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A069:;
    /* $A069: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06A:;
    /* $A06A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06B:;
    /* $A06B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06C:;
    /* $A06C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06D:;
    /* $A06D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06E:;
    /* $A06E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06F:;
    /* $A06F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A070:;
    /* $A070: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A071:;
    /* $A071: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A072:;
    /* $A072: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A073:;
    /* $A073: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A074:;
    /* $A074: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A075:;
    /* $A075: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A076:;
    /* $A076: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A082:;
    /* $A082: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A088:;
    /* $A088: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A091:;
    /* $A091: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2B1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A097:;
    /* $A097: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09A:;
    /* $A09A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09D:;
    /* $A09D: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A0:;
    /* $A0A0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0A2:;
    /* $A0A2: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A5:;
    /* $A0A5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A8:;
    /* $A0A8: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0AB:;
    /* $A0AB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AD:;
    /* $A0AD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AF:;
    /* $A0AF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B1:;
    /* $A0B1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B3:;
    /* $A0B3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B5:;
    /* $A0B5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0B8:;
    /* $A0B8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BA:;
    /* $A0BA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0BD:;
    /* $A0BD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BF:;
    /* $A0BF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0C2:;
    /* $A0C2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C4:;
    /* $A0C4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C6:;
    /* $A0C6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C8:;
    /* $A0C8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CA:;
    /* $A0CA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0CD:;
    /* $A0CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CF:;
    /* $A0CF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D1:;
    /* $A0D1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D3:;
    /* $A0D3: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0D6:;
    /* $A0D6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D8:;
    /* $A0D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D9:;
    /* $A0D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DF:;
    /* $A0DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E3:;
    /* $A0E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E5:;
    /* $A0E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E9:;
    /* $A0E9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EB:;
    /* $A0EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EF:;
    /* $A0EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0F1:;
    /* $A0F1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F3:;
    /* $A0F3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F5:;
    /* $A0F5: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F7:;
    /* $A0F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A0F8:;
    /* $A0F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0FA:;
    /* $A0FA: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A0FC:;
    /* $A0FC: 99 */ maybe_trigger_vblank(5); nes_write((0x9B9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0FF:;
    /* $A0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x9D9C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A102:;
    /* $A102: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A104:;
    /* $A104: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A108:;
    /* $A108: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A10A:;
    /* $A10A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x94 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_A10E:;
    /* $A10E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A110:;
    /* $A110: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A112:;
    /* $A112: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A114:;
    /* $A114: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A117:;
    /* $A117: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A119:;
    /* $A119: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A11C:;
    /* $A11C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_A11E:;
    /* $A11E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x01AD); FLAG_NZ(g_cpu.Y);
label_A123:;
    /* $A123: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_A129:;
    /* $A129: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_A12D:;
    /* $A12D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_A12F:;
    /* $A12F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A131:;
    /* $A131: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A134:;
    /* $A134: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x012B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A137:;
    /* $A137: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A139:;
    /* $A139: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13D:;
    /* $A13D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A141:;
    /* $A141: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A147:;
    /* $A147: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A149:;
    /* $A149: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14D:;
    /* $A14D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A151:;
    /* $A151: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A153:;
    /* $A153: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A157:;
    /* $A157: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15D:;
    /* $A15D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A161:;
    /* $A161: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A167:;
    /* $A167: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16B:;
    /* $A16B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16D:;
    /* $A16D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16F:;
    /* $A16F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A175:;
    /* $A175: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A177:;
    /* $A177: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A179:;
    /* $A179: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17B:;
    /* $A17B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17F:;
    /* $A17F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A185:;
    /* $A185: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A187:;
    /* $A187: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18B:;
    /* $A18B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18F:;
    /* $A18F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A193:;
    /* $A193: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A197:;
    /* $A197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A199:;
    /* $A199: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19D:;
    /* $A19D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19F:;
    /* $A19F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A3:;
    /* $A1A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A9:;
    /* $A1A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AB:;
    /* $A1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AD:;
    /* $A1AD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AF:;
    /* $A1AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B3:;
    /* $A1B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B5:;
    /* $A1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x15 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B7:;
    /* $A1B7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BD:;
    /* $A1BD: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A1BF:;
    /* $A1BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA1BF); return;
}

void func_8069_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8069_b3");
#endif
label_8069:;
    /* $8069: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8069); return;
}

void func_A069_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A069_b3");
#endif
label_A069:;
    /* $A069: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06A:;
    /* $A06A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06B:;
    /* $A06B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06C:;
    /* $A06C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06D:;
    /* $A06D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06E:;
    /* $A06E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A06F:;
    /* $A06F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A070:;
    /* $A070: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A071:;
    /* $A071: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A072:;
    /* $A072: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A073:;
    /* $A073: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A074:;
    /* $A074: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A075:;
    /* $A075: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A076:;
    /* $A076: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A082:;
    /* $A082: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A088:;
    /* $A088: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A091:;
    /* $A091: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2B1D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A097:;
    /* $A097: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09A:;
    /* $A09A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A09D:;
    /* $A09D: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A0:;
    /* $A0A0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0A2:;
    /* $A0A2: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A5:;
    /* $A0A5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0A8:;
    /* $A0A8: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0AB:;
    /* $A0AB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AD:;
    /* $A0AD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0AF:;
    /* $A0AF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B1:;
    /* $A0B1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B3:;
    /* $A0B3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0B5:;
    /* $A0B5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0B8:;
    /* $A0B8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BA:;
    /* $A0BA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0BD:;
    /* $A0BD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0BF:;
    /* $A0BF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0C2:;
    /* $A0C2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C4:;
    /* $A0C4: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C6:;
    /* $A0C6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0C8:;
    /* $A0C8: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CA:;
    /* $A0CA: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2B2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0CD:;
    /* $A0CD: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0CF:;
    /* $A0CF: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D1:;
    /* $A0D1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D3:;
    /* $A0D3: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A0D6:;
    /* $A0D6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0D8:;
    /* $A0D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D9:;
    /* $A0D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0DF:;
    /* $A0DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E3:;
    /* $A0E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E5:;
    /* $A0E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0E9:;
    /* $A0E9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EB:;
    /* $A0EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0EF:;
    /* $A0EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0F1:;
    /* $A0F1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F3:;
    /* $A0F3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F5:;
    /* $A0F5: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0F7:;
    /* $A0F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A0F8:;
    /* $A0F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A0FA:;
    /* $A0FA: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A0FC:;
    /* $A0FC: 99 */ maybe_trigger_vblank(5); nes_write((0x9B9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0FF:;
    /* $A0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x9D9C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A102:;
    /* $A102: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A104:;
    /* $A104: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A106:;
    /* $A106: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A108:;
    /* $A108: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A10A:;
    /* $A10A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x94 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_A10E:;
    /* $A10E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A110:;
    /* $A110: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A112:;
    /* $A112: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A114:;
    /* $A114: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A117:;
    /* $A117: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A119:;
    /* $A119: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A11C:;
    /* $A11C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_A11E:;
    /* $A11E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_A120:;
    /* $A120: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x01AD); FLAG_NZ(g_cpu.Y);
label_A123:;
    /* $A123: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_A129:;
    /* $A129: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_A12D:;
    /* $A12D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_A12F:;
    /* $A12F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A131:;
    /* $A131: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A134:;
    /* $A134: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x012B); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A137:;
    /* $A137: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A139:;
    /* $A139: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13B:;
    /* $A13B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13D:;
    /* $A13D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A13F:;
    /* $A13F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A141:;
    /* $A141: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A147:;
    /* $A147: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A149:;
    /* $A149: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14D:;
    /* $A14D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A14F:;
    /* $A14F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A151:;
    /* $A151: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A153:;
    /* $A153: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A155:;
    /* $A155: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A157:;
    /* $A157: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15D:;
    /* $A15D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A161:;
    /* $A161: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A167:;
    /* $A167: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16B:;
    /* $A16B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16D:;
    /* $A16D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A16F:;
    /* $A16F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x29 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A175:;
    /* $A175: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A177:;
    /* $A177: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A179:;
    /* $A179: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17B:;
    /* $A17B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A17F:;
    /* $A17F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A185:;
    /* $A185: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A187:;
    /* $A187: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18B:;
    /* $A18B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A18F:;
    /* $A18F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A193:;
    /* $A193: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A197:;
    /* $A197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A199:;
    /* $A199: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19D:;
    /* $A19D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A19F:;
    /* $A19F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A3:;
    /* $A1A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1A9:;
    /* $A1A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AB:;
    /* $A1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AD:;
    /* $A1AD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1AF:;
    /* $A1AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B3:;
    /* $A1B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B5:;
    /* $A1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x15 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1B7:;
    /* $A1B7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A1BD:;
    /* $A1BD: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A1BF:;
    /* $A1BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA1BF); return;
}

void func_80B9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B9_b3");
#endif
label_80B9:;
    /* $80B9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80B9); return;
}

void func_A9E6_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E6_b3");
#endif
label_A9E6:;
    /* $A9E6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x09E2), 3); return; }
label_A9E8:;
    /* $A9E8: FA */ maybe_trigger_vblank(2); /* NOP */
label_A9E9:;
    /* $A9E9: FA */ maybe_trigger_vblank(2); /* NOP */
label_A9EA:;
    /* $A9EA: FA */ maybe_trigger_vblank(2); /* NOP */
label_A9EB:;
    /* $A9EB: FA */ maybe_trigger_vblank(2); /* NOP */
label_A9EC:;
    /* $A9EC: FA */ maybe_trigger_vblank(2); /* NOP */
label_A9ED:;
    /* $A9ED: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x09FE), 3); return; }
label_A9EF:;
    /* $A9EF: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0F0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9F2:;
    /* $A9F2: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0F0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9F5:;
    /* $A9F5: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x5000; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9F8:;
    /* $A9F8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9FA:;
    /* $A9FA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9FA); return;
label_A9FB:; return;
label_A9FD:; return;
label_AA00:; return;
label_AA02:; return;
label_AA03:; return;
label_AA05:; return;
label_AA06:; return;
label_AA08:; return;
label_AA0A:; return;
label_AA0C:; return;
label_AA0E:; return;
label_AA10:; return;
label_AA12:; return;
label_AA14:; return;
label_AA16:; return;
label_AA18:; return;
label_AA1A:; return;
label_AA1C:; return;
label_AA1E:; return;
label_AA20:; return;
label_AA22:; return;
label_AA25:; return;
label_AA27:; return;
label_AA28:; return;
label_AA2A:; return;
label_AA2D:; return;
label_AA2F:; return;
label_AA31:; return;
label_AA33:; return;
label_AA35:; return;
label_AA37:; return;
label_AA39:; return;
label_AA3B:; return;
label_AA3D:; return;
label_AA3F:; return;
label_AA41:; return;
label_AA44:; return;
label_AA45:; return;
label_AA47:; return;
label_AA48:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4D:; return;
label_AA5A:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5F:; return;
label_AA61:; return;
label_AA63:; return;
label_AA64:; return;
label_AA65:; return;
label_AA67:; return;
label_AA68:; return;
label_AA6A:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA70:; return;
label_AA71:; return;
label_AA72:; return;
label_AA75:; return;
label_AA76:; return;
label_AA85:; return;
label_AA86:; return;
label_AA87:; return;
label_AA89:; return;
label_AA8A:; return;
label_AA8D:; return;
label_AA8E:; return;
label_AA91:; return;
label_AA93:; return;
label_AA96:; return;
label_AA97:; return;
label_AA9A:; return;
label_AA9B:; return;
label_AA9E:; return;
label_AA9F:; return;
label_AAA2:; return;
label_AAA3:; return;
label_AAA5:; return;
label_AAA8:; return;
label_AAAA:; return;
label_AAAB:; return;
label_AAAD:; return;
label_AAAF:; return;
label_AAB1:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB6:; return;
label_AAB7:; return;
label_AAB8:; return;
label_AABA:; return;
label_AABC:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC1:; return;
label_AAC3:; return;
label_AAC4:; return;
label_AAC5:; return;
label_AAC7:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACC:; return;
label_AACF:; return;
label_AAD0:; return;
label_AAD3:; return;
label_AAD4:; return;
label_AAD6:; return;
label_AAD9:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE1:; return;
label_AAE3:; return;
label_AAE5:; return;
label_AAE7:; return;
label_AAE8:; return;
label_AAE9:; return;
label_AAEB:; return;
label_AAEC:; return;
label_AAED:; return;
label_AAEF:; return;
label_AAF1:; return;
label_AAF3:; return;
label_AAF5:; return;
label_AAF7:; return;
label_AAFA:; return;
label_AAFC:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB01:; return;
label_AB03:; return;
label_AB05:; return;
label_AB06:; return;
label_AB07:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0D:; return;
label_AB0E:; return;
label_AB11:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB18:; return;
label_AB1B:; return;
label_AB1D:; return;
label_AB1E:; return;
label_AB1F:; return;
label_AB21:; return;
label_AB22:; return;
label_AB23:; return;
label_AB25:; return;
label_AB27:; return;
label_AB28:; return;
label_AB29:; return;
label_AB2A:; return;
label_AB2B:; return;
label_AB2C:; return;
label_AB2D:; return;
label_AB2E:; return;
label_AB2F:; return;
label_AB30:; return;
label_AB31:; return;
label_AB32:; return;
label_AB33:; return;
label_AB34:; return;
label_AB35:; return;
label_AB36:; return;
label_AB37:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3C:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB3F:; return;
label_AB40:; return;
label_AB41:; return;
label_AB42:; return;
label_AB43:; return;
label_AB44:; return;
label_AB45:; return;
label_AB46:; return;
label_AB47:; return;
label_AB48:; return;
label_AB49:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4C:; return;
label_AB4D:; return;
label_AB4E:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB52:; return;
label_AB53:; return;
label_AB54:; return;
label_AB55:; return;
label_AB56:; return;
label_AB57:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB60:; return;
label_AB61:; return;
label_AB62:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB66:; return;
label_AB67:; return;
label_AB68:; return;
label_AB6A:; return;
label_AB6B:; return;
label_AB6D:; return;
label_AB6F:; return;
label_AB71:; return;
label_AB74:; return;
label_AB76:; return;
label_AB77:; return;
label_AB79:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB80:; return;
label_AB82:; return;
label_AB83:; return;
label_AB86:; return;
label_AB87:; return;
label_AB88:; return;
label_AB8B:; return;
label_AB8D:; return;
label_AB8F:; return;
label_AB91:; return;
label_AB93:; return;
label_AB95:; return;
label_AB97:; return;
label_AB99:; return;
label_AB9B:; return;
label_AB9D:; return;
label_AB9F:; return;
label_ABA1:; return;
label_ABA3:; return;
label_ABA5:; return;
label_ABA6:; return;
label_ABA7:; return;
label_ABA8:; return;
label_ABA9:; return;
label_ABAC:; return;
label_ABAD:; return;
label_ABAE:; return;
label_ABAF:; return;
label_ABB0:; return;
label_ABB1:; return;
label_ABB2:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB5:; return;
label_ABB6:; return;
label_ABB7:; return;
label_ABB8:; return;
label_ABB9:; return;
label_ABBA:; return;
label_ABBB:; return;
label_ABBC:; return;
label_ABBD:; return;
label_ABBE:; return;
label_ABBF:; return;
label_ABC0:; return;
label_ABC1:; return;
label_ABC2:; return;
label_ABC4:; return;
label_ABC5:; return;
label_ABC6:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCE:; return;
label_ABCF:; return;
label_ABD0:; return;
label_ABD1:; return;
label_ABD2:; return;
label_ABD3:; return;
label_ABD4:; return;
label_ABD5:; return;
label_ABD6:; return;
label_ABD7:; return;
label_ABD8:; return;
label_ABD9:; return;
label_ABDA:; return;
label_ABDB:; return;
label_ABDC:; return;
label_ABDD:; return;
label_ABDE:; return;
label_ABDF:; return;
label_ABE0:; return;
label_ABE1:; return;
label_ABE2:; return;
label_ABE5:; return;
label_ABE6:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABEE:; return;
label_ABEF:; return;
label_ABF0:; return;
label_ABF1:; return;
label_ABF2:; return;
label_ABF3:; return;
label_ABF4:; return;
label_ABF5:; return;
label_ABF6:; return;
label_ABF7:; return;
label_ABF8:; return;
label_ABF9:; return;
label_ABFA:; return;
label_ABFB:; return;
label_ABFC:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC00:; return;
label_AC01:; return;
label_AC02:; return;
label_AC03:; return;
label_AC05:; return;
label_AC06:; return;
label_AC07:; return;
label_AC08:; return;
label_AC09:; return;
label_AC0B:; return;
label_AC0C:; return;
label_AC0D:; return;
label_AC0E:; return;
label_AC0F:; return;
label_AC10:; return;
label_AC11:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC18:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1B:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC20:; return;
label_AC21:; return;
label_AC22:; return;
label_AC23:; return;
label_AC25:; return;
label_AC26:; return;
label_AC27:; return;
label_AC28:; return;
label_AC2A:; return;
label_AC2B:; return;
label_AC2C:; return;
label_AC2D:; return;
label_AC2E:; return;
label_AC2F:; return;
label_AC30:; return;
label_AC31:; return;
label_AC32:; return;
label_AC33:; return;
label_AC34:; return;
label_AC35:; return;
label_AC36:; return;
label_AC37:; return;
label_AC38:; return;
label_AC39:; return;
label_AC3A:; return;
label_AC3B:; return;
label_AC3C:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC40:; return;
label_AC41:; return;
label_AC42:; return;
label_AC44:; return;
label_AC45:; return;
label_AC46:; return;
label_AC47:; return;
label_AC48:; return;
label_AC4A:; return;
label_AC4B:; return;
label_AC4C:; return;
label_AC4D:; return;
label_AC4E:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC52:; return;
label_AC53:; return;
label_AC54:; return;
label_AC55:; return;
label_AC56:; return;
label_AC57:; return;
label_AC58:; return;
label_AC59:; return;
label_AC5A:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC61:; return;
label_AC62:; return;
label_AC64:; return;
label_AC65:; return;
label_AC66:; return;
label_AC67:; return;
label_AC68:; return;
label_AC6A:; return;
label_AC6B:; return;
label_AC6C:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC6F:; return;
label_AC70:; return;
label_AC71:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC75:; return;
label_AC76:; return;
label_AC77:; return;
label_AC78:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7D:; return;
label_AC7E:; return;
label_AC7F:; return;
label_AC80:; return;
label_AC81:; return;
label_AC82:; return;
label_AC84:; return;
label_AC85:; return;
label_AC86:; return;
label_AC87:; return;
label_AC88:; return;
label_AC8A:; return;
label_AC8B:; return;
label_AC8C:; return;
label_AC8D:; return;
label_AC8E:; return;
label_AC8F:; return;
label_AC90:; return;
label_AC91:; return;
label_AC92:; return;
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC97:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA1:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA8:; return;
label_ACA9:; return;
label_ACAB:; return;
label_ACAC:; return;
label_ACAD:; return;
label_ACAE:; return;
label_ACAF:; return;
label_ACB0:; return;
label_ACB1:; return;
label_ACB2:; return;
label_ACB3:; return;
label_ACB4:; return;
label_ACB5:; return;
label_ACB6:; return;
label_ACB7:; return;
label_ACB8:; return;
label_ACB9:; return;
label_ACBA:; return;
label_ACBB:; return;
label_ACBC:; return;
label_ACBD:; return;
label_ACBE:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC1:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC6:; return;
label_ACC7:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCB:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACCF:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDA:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE1:; return;
label_ACE2:; return;
label_ACE3:; return;
label_ACE5:; return;
label_ACE6:; return;
label_ACE7:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEB:; return;
label_ACEC:; return;
label_ACED:; return;
label_ACEE:; return;
label_ACEF:; return;
label_ACF0:; return;
label_ACF1:; return;
label_ACF2:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF5:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACF9:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFD:; return;
label_ACFE:; return;
label_ACFF:; return;
label_AD00:; return;
label_AD01:; return;
label_AD02:; return;
label_AD03:; return;
label_AD06:; return;
label_AD07:; return;
label_AD08:; return;
label_AD0B:; return;
label_AD0C:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD10:; return;
label_AD11:; return;
label_AD12:; return;
label_AD13:; return;
label_AD14:; return;
label_AD15:; return;
label_AD16:; return;
label_AD17:; return;
label_AD18:; return;
label_AD19:; return;
label_AD1A:; return;
label_AD1B:; return;
label_AD1C:; return;
label_AD1D:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD23:; return;
label_AD25:; return;
label_AD26:; return;
label_AD27:; return;
label_AD28:; return;
label_AD29:; return;
label_AD2C:; return;
label_AD2D:; return;
label_AD2E:; return;
label_AD2F:; return;
label_AD30:; return;
label_AD31:; return;
label_AD32:; return;
label_AD33:; return;
label_AD34:; return;
label_AD35:; return;
label_AD36:; return;
label_AD37:; return;
label_AD38:; return;
label_AD39:; return;
label_AD3A:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3D:; return;
label_AD3E:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD41:; return;
label_AD42:; return;
label_AD44:; return;
label_AD45:; return;
label_AD46:; return;
label_AD47:; return;
label_AD48:; return;
label_AD49:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4D:; return;
label_AD4E:; return;
label_AD4F:; return;
label_AD50:; return;
label_AD51:; return;
label_AD52:; return;
label_AD53:; return;
label_AD54:; return;
label_AD55:; return;
label_AD56:; return;
label_AD57:; return;
label_AD58:; return;
label_AD59:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5D:; return;
label_AD5E:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD61:; return;
label_AD62:; return;
label_AD65:; return;
label_AD66:; return;
label_AD67:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6C:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD6F:; return;
label_AD70:; return;
label_AD71:; return;
label_AD72:; return;
label_AD73:; return;
label_AD74:; return;
label_AD75:; return;
label_AD76:; return;
label_AD77:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7A:; return;
label_AD7B:; return;
label_AD7C:; return;
label_AD7D:; return;
label_AD7E:; return;
label_AD7F:; return;
label_AD80:; return;
label_AD81:; return;
label_AD82:; return;
label_AD83:; return;
label_AD85:; return;
label_AD86:; return;
label_AD87:; return;
label_AD88:; return;
label_AD89:; return;
label_AD8B:; return;
label_AD8C:; return;
label_AD8D:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD91:; return;
label_AD92:; return;
label_AD93:; return;
label_AD94:; return;
label_AD95:; return;
label_AD96:; return;
label_AD97:; return;
label_AD98:; return;
label_AD99:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA1:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA5:; return;
label_ADA6:; return;
label_ADA7:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAB:; return;
label_ADAC:; return;
label_ADAD:; return;
label_ADAE:; return;
label_ADAF:; return;
label_ADB0:; return;
label_ADB1:; return;
label_ADB2:; return;
label_ADB3:; return;
label_ADB4:; return;
label_ADB5:; return;
label_ADB6:; return;
label_ADB7:; return;
label_ADB8:; return;
label_ADB9:; return;
label_ADBA:; return;
label_ADBB:; return;
label_ADBC:; return;
label_ADBD:; return;
label_ADBE:; return;
label_ADBF:; return;
label_ADC0:; return;
label_ADC1:; return;
label_ADC2:; return;
label_ADC4:; return;
label_ADC5:; return;
label_ADC6:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCD:; return;
label_ADCE:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD5:; return;
label_ADD6:; return;
label_ADD7:; return;
label_ADD8:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE1:; return;
label_ADE2:; return;
label_ADE4:; return;
label_ADE5:; return;
label_ADE6:; return;
label_ADE7:; return;
label_ADE8:; return;
label_ADEA:; return;
label_ADEB:; return;
label_ADEC:; return;
label_ADED:; return;
label_ADEE:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF1:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF4:; return;
label_ADF5:; return;
label_ADF6:; return;
label_ADF7:; return;
label_ADF8:; return;
label_ADF9:; return;
label_ADFA:; return;
label_ADFB:; return;
label_ADFC:; return;
label_ADFD:; return;
label_ADFE:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE01:; return;
label_AE02:; return;
label_AE04:; return;
label_AE05:; return;
label_AE06:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0A:; return;
label_AE0B:; return;
label_AE0C:; return;
label_AE0D:; return;
label_AE0E:; return;
label_AE0F:; return;
label_AE10:; return;
label_AE11:; return;
label_AE12:; return;
label_AE13:; return;
label_AE14:; return;
label_AE15:; return;
label_AE16:; return;
label_AE17:; return;
label_AE18:; return;
label_AE19:; return;
label_AE1A:; return;
label_AE1B:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE1E:; return;
label_AE1F:; return;
label_AE20:; return;
label_AE21:; return;
label_AE22:; return;
label_AE24:; return;
label_AE25:; return;
label_AE26:; return;
label_AE27:; return;
label_AE28:; return;
label_AE29:; return;
label_AE2B:; return;
label_AE2C:; return;
label_AE2D:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE31:; return;
label_AE32:; return;
label_AE33:; return;
label_AE34:; return;
label_AE35:; return;
label_AE36:; return;
label_AE37:; return;
label_AE38:; return;
label_AE39:; return;
label_AE3A:; return;
label_AE3B:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE3E:; return;
label_AE3F:; return;
label_AE40:; return;
label_AE41:; return;
label_AE42:; return;
label_AE43:; return;
label_AE46:; return;
label_AE47:; return;
label_AE48:; return;
label_AE49:; return;
label_AE4B:; return;
label_AE4C:; return;
label_AE4D:; return;
label_AE4E:; return;
label_AE4F:; return;
label_AE50:; return;
label_AE51:; return;
label_AE52:; return;
label_AE53:; return;
label_AE54:; return;
label_AE55:; return;
label_AE56:; return;
label_AE57:; return;
label_AE58:; return;
label_AE59:; return;
label_AE5A:; return;
label_AE5B:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE63:; return;
label_AE65:; return;
label_AE66:; return;
label_AE67:; return;
label_AE68:; return;
label_AE69:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE70:; return;
label_AE71:; return;
label_AE73:; return;
label_AE75:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7C:; return;
label_AE7D:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE84:; return;
label_AE85:; return;
label_AE86:; return;
label_AE87:; return;
label_AE88:; return;
label_AE89:; return;
label_AE8B:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE91:; return;
label_AE93:; return;
label_AE95:; return;
label_AE97:; return;
label_AE99:; return;
label_AE9B:; return;
label_AE9D:; return;
label_AE9F:; return;
label_AEA1:; return;
label_AEA3:; return;
label_AEA5:; return;
label_AEA6:; return;
label_AEA7:; return;
label_AEA8:; return;
label_AEA9:; return;
label_AEAA:; return;
label_AEAB:; return;
label_AEAC:; return;
label_AEAD:; return;
label_AEAE:; return;
label_AEAF:; return;
label_AEB0:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB8:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC1:; return;
label_AEC2:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC5:; return;
label_AEC6:; return;
label_AEC7:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECD:; return;
label_AECE:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED6:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEDF:; return;
label_AEE0:; return;
label_AEE1:; return;
label_AEE2:; return;
label_AEE3:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE6:; return;
label_AEE7:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEED:; return;
label_AEF0:; return;
label_AEF1:; return;
label_AEF2:; return;
label_AEF3:; return;
label_AEF4:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEF9:; return;
label_AEFA:; return;
label_AEFB:; return;
label_AEFC:; return;
label_AEFD:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF02:; return;
label_AF03:; return;
label_AF04:; return;
label_AF05:; return;
label_AF06:; return;
label_AF07:; return;
label_AF08:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0B:; return;
label_AF0C:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF10:; return;
label_AF11:; return;
label_AF12:; return;
label_AF13:; return;
label_AF14:; return;
label_AF15:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1D:; return;
label_AF1E:; return;
label_AF1F:; return;
label_AF20:; return;
label_AF21:; return;
label_AF22:; return;
label_AF23:; return;
label_AF24:; return;
label_AF25:; return;
label_AF26:; return;
label_AF28:; return;
label_AF2B:; return;
label_AF2E:; return;
label_AF30:; return;
label_AF32:; return;
label_AF34:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3A:; return;
label_AF3C:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF43:; return;
label_AF45:; return;
label_AF47:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4F:; return;
label_AF51:; return;
label_AF53:; return;
label_AF55:; return;
label_AF57:; return;
label_AF59:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5F:; return;
label_AF61:; return;
label_AF63:; return;
label_AF65:; return;
label_AF67:; return;
label_AF69:; return;
label_AF6B:; return;
label_AF6D:; return;
label_AF70:; return;
label_AF72:; return;
label_AF74:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7C:; return;
label_AF7F:; return;
label_AF81:; return;
label_AF84:; return;
label_AF85:; return;
label_AF87:; return;
label_AF89:; return;
label_AF8B:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF92:; return;
label_AF95:; return;
label_AF98:; return;
label_AF9B:; return;
label_AF9C:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA3:; return;
label_AFA5:; return;
label_AFA7:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAD:; return;
label_AFAF:; return;
label_AFB0:; return;
label_AFB2:; return;
label_AFB5:; return;
label_AFB8:; return;
label_AFBB:; return;
label_AFBD:; return;
label_AFBF:; return;
label_AFC1:; return;
label_AFC4:; return;
label_AFC5:; return;
label_AFC7:; return;
label_AFCA:; return;
label_AFCD:; return;
label_AFD0:; return;
label_AFD1:; return;
label_AFD4:; return;
label_AFD6:; return;
label_AFD8:; return;
label_AFDA:; return;
label_AFDC:; return;
label_AFDE:; return;
label_AFE0:; return;
label_AFE2:; return;
label_AFE4:; return;
label_AFE5:; return;
label_AFE6:; return;
label_AFE7:; return;
label_AFE9:; return;
label_AFEC:; return;
label_AFEF:; return;
label_AFF2:; return;
label_AFF4:; return;
label_AFF6:; return;
label_AFF8:; return;
label_AFFB:; return;
label_AFFC:; return;
label_AFFD:; return;
label_AFFE:; return;
label_B000:; return;
label_B003:; return;
label_B006:; return;
label_B009:; return;
label_B00A:; return;
label_B00C:; return;
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
label_B022:; return;
label_B025:; return;
label_B028:; return;
label_B035:; return;
label_B036:; return;
label_B039:; return;
label_B03F:; return;
label_B045:; return;
label_B048:; return;
label_B04B:; return;
label_B04D:; return;
label_B04F:; return;
label_B055:; return;
label_B056:; return;
label_B058:; return;
label_B05A:; return;
label_B05C:; return;
label_B05F:; return;
label_B062:; return;
label_B065:; return;
label_B067:; return;
label_B069:; return;
label_B06A:; return;
label_B06C:; return;
label_B06E:; return;
label_B070:; return;
label_B073:; return;
label_B076:; return;
label_B07C:; return;
label_B07F:; return;
label_B081:; return;
label_B083:; return;
label_B084:; return;
label_B087:; return;
label_B08A:; return;
label_B08C:; return;
label_B08E:; return;
label_B090:; return;
label_B093:; return;
label_B095:; return;
label_B098:; return;
label_B09A:; return;
label_B09C:; return;
label_B09E:; return;
label_B0A1:; return;
label_B0A4:; return;
label_B0A7:; return;
label_B0AA:; return;
label_B0AD:; return;
label_B0B0:; return;
label_B0B3:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0C0:; return;
label_B0C2:; return;
label_B0C5:; return;
label_B0C8:; return;
label_B0C9:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CF:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DA:; return;
label_B0DD:; return;
label_B0DE:; return;
label_B0E0:; return;
label_B0E3:; return;
label_B0E4:; return;
label_B0E6:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0EC:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F2:; return;
label_B0F4:; return;
label_B0F6:; return;
label_B0F8:; return;
label_B0F9:; return;
label_B0FB:; return;
label_B0FD:; return;
label_B0FF:; return;
label_B101:; return;
label_B103:; return;
label_B105:; return;
label_B107:; return;
label_B10A:; return;
label_B10D:; return;
label_B10E:; return;
label_B10F:; return;
label_B110:; return;
label_B111:; return;
label_B112:; return;
label_B114:; return;
label_B117:; return;
label_B119:; return;
label_B11A:; return;
label_B11C:; return;
label_B11E:; return;
label_B11F:; return;
label_B122:; return;
label_B123:; return;
label_B125:; return;
label_B126:; return;
label_B129:; return;
label_B12A:; return;
label_B12C:; return;
label_B12D:; return;
label_B130:; return;
label_B131:; return;
label_B133:; return;
label_B135:; return;
label_B136:; return;
label_B139:; return;
label_B13A:; return;
label_B13C:; return;
label_B13E:; return;
label_B140:; return;
label_B142:; return;
label_B144:; return;
label_B147:; return;
label_B14A:; return;
label_B14B:; return;
label_B14C:; return;
label_B14D:; return;
label_B14E:; return;
label_B14F:; return;
label_B151:; return;
label_B153:; return;
label_B155:; return;
label_B157:; return;
label_B159:; return;
label_B15B:; return;
label_B15D:; return;
label_B160:; return;
label_B162:; return;
label_B164:; return;
label_B166:; return;
label_B168:; return;
label_B16B:; return;
label_B16C:; return;
label_B16E:; return;
label_B170:; return;
label_B172:; return;
label_B174:; return;
label_B176:; return;
label_B178:; return;
label_B17A:; return;
label_B17D:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B188:; return;
label_B189:; return;
label_B18B:; return;
label_B18D:; return;
label_B18F:; return;
label_B191:; return;
label_B194:; return;
label_B195:; return;
label_B197:; return;
label_B199:; return;
label_B19B:; return;
label_B19D:; return;
label_B1A0:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A9:; return;
label_B1AC:; return;
label_B1AD:; return;
label_B1AF:; return;
label_B1B1:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B8:; return;
label_B1B9:; return;
label_B1BB:; return;
label_B1BD:; return;
label_B1BF:; return;
label_B1C1:; return;
label_B1C4:; return;
label_B1C5:; return;
label_B1C7:; return;
label_B1C9:; return;
label_B1CB:; return;
label_B1CD:; return;
label_B1D0:; return;
label_B1D1:; return;
label_B1D3:; return;
label_B1D5:; return;
label_B1D7:; return;
label_B1D9:; return;
label_B1DC:; return;
label_B1DD:; return;
label_B1DF:; return;
label_B1E1:; return;
label_B1E3:; return;
label_B1E5:; return;
label_B1E8:; return;
label_B1E9:; return;
label_B1EB:; return;
label_B1ED:; return;
label_B1EF:; return;
label_B1F1:; return;
label_B1F4:; return;
label_B1F5:; return;
label_B1F7:; return;
label_B1F9:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B200:; return;
label_B201:; return;
label_B203:; return;
label_B205:; return;
label_B207:; return;
label_B209:; return;
label_B20C:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B213:; return;
label_B215:; return;
label_B218:; return;
label_B219:; return;
label_B21B:; return;
label_B21D:; return;
label_B21F:; return;
label_B221:; return;
label_B224:; return;
label_B225:; return;
label_B226:; return;
label_B228:; return;
label_B229:; return;
label_B22C:; return;
label_B22E:; return;
label_B231:; return;
label_B233:; return;
label_B234:; return;
label_B237:; return;
label_B239:; return;
label_B23C:; return;
label_B23E:; return;
label_B23F:; return;
label_B242:; return;
label_B244:; return;
label_B247:; return;
label_B249:; return;
label_B24A:; return;
label_B24D:; return;
label_B24F:; return;
label_B252:; return;
label_B254:; return;
label_B256:; return;
label_B257:; return;
label_B25A:; return;
label_B25C:; return;
label_B25D:; return;
label_B25F:; return;
label_B261:; return;
label_B263:; return;
label_B266:; return;
label_B268:; return;
label_B269:; return;
label_B26A:; return;
label_B26D:; return;
label_B26F:; return;
label_B272:; return;
label_B274:; return;
label_B277:; return;
label_B278:; return;
label_B279:; return;
label_B27B:; return;
label_B27C:; return;
label_B27D:; return;
label_B280:; return;
label_B282:; return;
label_B285:; return;
label_B287:; return;
label_B288:; return;
label_B289:; return;
label_B28B:; return;
label_B28D:; return;
label_B28E:; return;
label_B290:; return;
label_B292:; return;
label_B294:; return;
label_B296:; return;
label_B297:; return;
label_B298:; return;
label_B29B:; return;
label_B29C:; return;
label_B29D:; return;
label_B2A0:; return;
label_B2A3:; return;
label_B2A5:; return;
label_B2A6:; return;
label_B2A8:; return;
label_B2AA:; return;
label_B2AC:; return;
label_B2AE:; return;
label_B2B1:; return;
label_B2B4:; return;
label_B2B6:; return;
label_B2B7:; return;
label_B2B9:; return;
label_B2BC:; return;
label_B2BD:; return;
label_B2BF:; return;
label_B2C2:; return;
label_B2C5:; return;
label_B2C7:; return;
label_B2C9:; return;
label_B2CC:; return;
label_B2CE:; return;
label_B2D0:; return;
label_B2D3:; return;
label_B2D4:; return;
label_B2D6:; return;
label_B2D8:; return;
label_B2DB:; return;
label_B2DE:; return;
label_B2E0:; return;
label_B2E1:; return;
label_B2E4:; return;
label_B2E7:; return;
label_B2E9:; return;
label_B2EB:; return;
label_B2EC:; return;
label_B2EF:; return;
label_B2F2:; return;
label_B2F4:; return;
label_B2F7:; return;
label_B2FA:; return;
label_B2FC:; return;
label_B2FD:; return;
label_B2FE:; return;
label_B2FF:; return;
label_B301:; return;
label_B303:; return;
label_B304:; return;
label_B305:; return;
label_B306:; return;
label_B307:; return;
label_B309:; return;
label_B30B:; return;
label_B30C:; return;
label_B30D:; return;
label_B30E:; return;
label_B30F:; return;
label_B310:; return;
label_B312:; return;
label_B314:; return;
label_B316:; return;
label_B317:; return;
label_B318:; return;
label_B319:; return;
label_B31A:; return;
label_B31C:; return;
label_B31E:; return;
label_B31F:; return;
label_B320:; return;
label_B321:; return;
label_B322:; return;
label_B324:; return;
label_B326:; return;
label_B328:; return;
label_B32A:; return;
label_B32C:; return;
label_B32E:; return;
label_B330:; return;
label_B333:; return;
label_B335:; return;
label_B337:; return;
label_B339:; return;
label_B33A:; return;
label_B33C:; return;
label_B33E:; return;
label_B340:; return;
label_B341:; return;
label_B343:; return;
label_B345:; return;
label_B347:; return;
label_B349:; return;
label_B34B:; return;
label_B34D:; return;
label_B34F:; return;
label_B351:; return;
label_B352:; return;
label_B355:; return;
label_B357:; return;
label_B359:; return;
label_B35B:; return;
label_B35E:; return;
label_B360:; return;
label_B362:; return;
label_B365:; return;
label_B367:; return;
label_B369:; return;
label_B36A:; return;
label_B36D:; return;
label_B36F:; return;
label_B371:; return;
label_B374:; return;
label_B377:; return;
label_B379:; return;
label_B37A:; return;
label_B37D:; return;
label_B380:; return;
label_B382:; return;
label_B384:; return;
label_B385:; return;
label_B388:; return;
label_B38B:; return;
label_B38D:; return;
label_B390:; return;
label_B393:; return;
label_B395:; return;
label_B398:; return;
label_B39A:; return;
label_B39C:; return;
label_B39D:; return;
label_B39F:; return;
label_B3A0:; return;
label_B3A2:; return;
label_B3A4:; return;
label_B3A6:; return;
label_B3A9:; return;
label_B3AB:; return;
label_B3AD:; return;
label_B3AF:; return;
label_B3B0:; return;
label_B3B2:; return;
label_B3B3:; return;
label_B3B5:; return;
label_B3B7:; return;
label_B3B8:; return;
label_B3BB:; return;
label_B3BE:; return;
label_B3C0:; return;
label_B3C3:; return;
label_B3C6:; return;
label_B3C8:; return;
label_B3C9:; return;
label_B3CB:; return;
label_B3CC:; return;
label_B3CD:; return;
label_B3D0:; return;
label_B3D1:; return;
label_B3D3:; return;
label_B3D4:; return;
label_B3D6:; return;
label_B3D8:; return;
label_B3DA:; return;
label_B3DC:; return;
label_B3DD:; return;
label_B3DE:; return;
label_B3E0:; return;
label_B3E1:; return;
label_B3E3:; return;
label_B3E4:; return;
label_B3E7:; return;
label_B3E8:; return;
label_B3EB:; return;
label_B3EC:; return;
label_B3ED:; return;
label_B3EF:; return;
label_B3F0:; return;
label_B3F1:; return;
label_B3F3:; return;
label_B3F4:; return;
label_B3F6:; return;
label_B3F7:; return;
label_B3F8:; return;
label_B3FA:; return;
label_B3FB:; return;
label_B3FC:; return;
label_B3FD:; return;
label_B3FF:; return;
label_B400:; return;
label_B401:; return;
label_B403:; return;
label_B404:; return;
label_B405:; return;
label_B406:; return;
label_B407:; return;
label_B408:; return;
label_B409:; return;
label_B40C:; return;
label_B40D:; return;
label_B40E:; return;
label_B40F:; return;
label_B410:; return;
label_B411:; return;
label_B413:; return;
label_B414:; return;
label_B416:; return;
label_B417:; return;
label_B418:; return;
label_B419:; return;
label_B41A:; return;
label_B41B:; return;
label_B41C:; return;
label_B41D:; return;
label_B41E:; return;
label_B41F:; return;
label_B420:; return;
label_B421:; return;
label_B422:; return;
label_B423:; return;
label_B424:; return;
label_B425:; return;
label_B426:; return;
label_B427:; return;
label_B428:; return;
label_B429:; return;
label_B42A:; return;
label_B42B:; return;
label_B42C:; return;
label_B42D:; return;
label_B42E:; return;
label_B42F:; return;
label_B430:; return;
label_B431:; return;
label_B432:; return;
label_B433:; return;
label_B434:; return;
label_B435:; return;
label_B436:; return;
label_B437:; return;
label_B438:; return;
label_B439:; return;
label_B43A:; return;
label_B43B:; return;
label_B43C:; return;
label_B43D:; return;
label_B43E:; return;
label_B43F:; return;
label_B440:; return;
label_B441:; return;
label_B442:; return;
label_B443:; return;
label_B444:; return;
label_B445:; return;
label_B446:; return;
label_B447:; return;
label_B448:; return;
label_B449:; return;
label_B44A:; return;
label_B44B:; return;
label_B44C:; return;
label_B44D:; return;
label_B44E:; return;
label_B44F:; return;
label_B450:; return;
label_B451:; return;
label_B452:; return;
label_B453:; return;
label_B454:; return;
label_B455:; return;
label_B456:; return;
label_B457:; return;
label_B458:; return;
label_B459:; return;
label_B45A:; return;
label_B45B:; return;
label_B45C:; return;
label_B45D:; return;
label_B45E:; return;
label_B45F:; return;
label_B460:; return;
label_B461:; return;
label_B462:; return;
label_B463:; return;
label_B464:; return;
label_B465:; return;
label_B466:; return;
label_B467:; return;
label_B468:; return;
label_B469:; return;
label_B46A:; return;
label_B46B:; return;
label_B46C:; return;
label_B46D:; return;
label_B46E:; return;
label_B46F:; return;
label_B470:; return;
label_B471:; return;
label_B472:; return;
label_B473:; return;
label_B474:; return;
label_B475:; return;
label_B476:; return;
label_B477:; return;
label_B478:; return;
label_B479:; return;
label_B47A:; return;
label_B47B:; return;
label_B47C:; return;
label_B47D:; return;
label_B47E:; return;
label_B47F:; return;
label_B480:; return;
label_B481:; return;
label_B482:; return;
label_B483:; return;
label_B484:; return;
label_B485:; return;
label_B486:; return;
label_B487:; return;
label_B488:; return;
label_B489:; return;
label_B48A:; return;
label_B48B:; return;
label_B48C:; return;
label_B48D:; return;
label_B48E:; return;
label_B48F:; return;
label_B490:; return;
label_B491:; return;
label_B492:; return;
label_B493:; return;
label_B494:; return;
label_B495:; return;
label_B496:; return;
label_B497:; return;
label_B498:; return;
label_B499:; return;
label_B49A:; return;
label_B49B:; return;
label_B49C:; return;
label_B49D:; return;
label_B49E:; return;
label_B49F:; return;
label_B4A0:; return;
label_B4A1:; return;
label_B4A2:; return;
label_B4A3:; return;
label_B4A4:; return;
label_B4A5:; return;
label_B4A6:; return;
label_B4A7:; return;
label_B4A8:; return;
label_B4A9:; return;
label_B4AA:; return;
label_B4AB:; return;
label_B4AC:; return;
label_B4AD:; return;
label_B4AE:; return;
label_B4AF:; return;
label_B4B0:; return;
label_B4B1:; return;
label_B4B2:; return;
label_B4B3:; return;
label_B4B4:; return;
label_B4B5:; return;
label_B4B6:; return;
label_B4B7:; return;
label_B4B8:; return;
label_B4B9:; return;
label_B4BA:; return;
label_B4BB:; return;
label_B4BC:; return;
label_B4BD:; return;
label_B4BE:; return;
label_B4BF:; return;
label_B4C0:; return;
label_B4C1:; return;
label_B4C2:; return;
label_B4C3:; return;
label_B4C4:; return;
label_B4C5:; return;
label_B4C6:; return;
label_B4C7:; return;
label_B4C8:; return;
label_B4C9:; return;
label_B4CA:; return;
label_B4CB:; return;
label_B4CC:; return;
label_B4CD:; return;
label_B4CE:; return;
label_B4CF:; return;
label_B4D0:; return;
label_B4D1:; return;
label_B4D2:; return;
label_B4D3:; return;
label_B4D4:; return;
label_B4D5:; return;
label_B4D6:; return;
label_B4D7:; return;
label_B4D8:; return;
label_B4D9:; return;
label_B4DA:; return;
label_B4DB:; return;
label_B4DC:; return;
label_B4DD:; return;
label_B4DE:; return;
label_B4DF:; return;
label_B4E0:; return;
label_B4E1:; return;
label_B4E2:; return;
label_B4E3:; return;
label_B4E4:; return;
label_B4E5:; return;
label_B4E6:; return;
label_B4E7:; return;
label_B4E8:; return;
label_B4E9:; return;
label_B4EA:; return;
label_B4EB:; return;
label_B4EC:; return;
label_B4ED:; return;
label_B4EE:; return;
label_B4EF:; return;
label_B4F0:; return;
label_B4F1:; return;
label_B4F2:; return;
label_B4F3:; return;
label_B4F4:; return;
label_B4F5:; return;
label_B4F6:; return;
label_B4F7:; return;
label_B4F8:; return;
label_B4F9:; return;
label_B4FA:; return;
label_B4FB:; return;
label_B4FC:; return;
label_B4FD:; return;
label_B4FE:; return;
label_B4FF:; return;
label_B500:; return;
label_B501:; return;
label_B502:; return;
label_B503:; return;
label_B504:; return;
label_B505:; return;
label_B506:; return;
label_B507:; return;
label_B508:; return;
label_B509:; return;
label_B50A:; return;
label_B50B:; return;
label_B50C:; return;
label_B50D:; return;
label_B50E:; return;
label_B50F:; return;
label_B510:; return;
label_B511:; return;
label_B512:; return;
label_B513:; return;
label_B514:; return;
label_B515:; return;
label_B516:; return;
label_B517:; return;
label_B518:; return;
label_B519:; return;
label_B51A:; return;
label_B51B:; return;
label_B51C:; return;
label_B51D:; return;
label_B51E:; return;
label_B51F:; return;
label_B520:; return;
label_B521:; return;
label_B522:; return;
label_B523:; return;
label_B524:; return;
label_B525:; return;
label_B526:; return;
label_B527:; return;
label_B528:; return;
label_B529:; return;
label_B52A:; return;
label_B52B:; return;
label_B52C:; return;
label_B52D:; return;
label_B52E:; return;
label_B52F:; return;
label_B530:; return;
label_B531:; return;
label_B532:; return;
label_B533:; return;
label_B534:; return;
label_B535:; return;
label_B536:; return;
label_B537:; return;
label_B538:; return;
label_B539:; return;
label_B53A:; return;
label_B53B:; return;
label_B53C:; return;
label_B53D:; return;
label_B53E:; return;
label_B53F:; return;
label_B540:; return;
label_B541:; return;
label_B542:; return;
label_B543:; return;
label_B544:; return;
label_B545:; return;
label_B546:; return;
label_B547:; return;
label_B548:; return;
label_B549:; return;
label_B54A:; return;
label_B54B:; return;
label_B54C:; return;
label_B54D:; return;
label_B54E:; return;
label_B54F:; return;
label_B550:; return;
label_B551:; return;
label_B552:; return;
label_B553:; return;
label_B554:; return;
label_B555:; return;
label_B556:; return;
label_B557:; return;
label_B558:; return;
label_B559:; return;
label_B55A:; return;
label_B55B:; return;
label_B55C:; return;
label_B55D:; return;
label_B55E:; return;
label_B55F:; return;
label_B560:; return;
label_B561:; return;
label_B562:; return;
label_B563:; return;
label_B564:; return;
label_B565:; return;
label_B566:; return;
label_B567:; return;
label_B568:; return;
label_B569:; return;
label_B56A:; return;
label_B56B:; return;
label_B56C:; return;
label_B56D:; return;
label_B56E:; return;
label_B56F:; return;
label_B570:; return;
label_B571:; return;
label_B572:; return;
label_B573:; return;
label_B574:; return;
label_B575:; return;
label_B576:; return;
label_B577:; return;
label_B578:; return;
label_B579:; return;
label_B57A:; return;
label_B57B:; return;
label_B57C:; return;
}

void func_A9E2_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E2_b3");
#endif
label_A9E2:;
    /* $A9E2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9E3:;
    /* $A9E3: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9E4:;
    /* $A9E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9E5:;
    /* $A9E5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E5); return;
}

void func_A901_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A901_b3");
#endif
label_A901:;
    /* $A901: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A903:;
    /* $A903: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xA5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A905:;
    /* $A905: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA905); return;
}

void func_853C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_853C_b3");
#endif
label_853C:;
    /* $853C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xAAA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_853F:;
    /* $853F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xE4; g_cpu.C=(g_cpu.A>=0xE4)?1:0; FLAG_NZ(r&0xFF); }
label_8541:;
    /* $8541: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8541); return;
}

void func_A902_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A902_b3");
#endif
label_A902:;
    /* $A902: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A904:;
    /* $A904: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A906:;
    /* $A906: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA906); return;
}

void func_8560_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8560_b3");
#endif
label_8560:;
    /* $8560: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8562:;
    /* $8562: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8562); return;
}

void func_A985_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A985_b3");
#endif
label_A985:;
    /* $A985: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A987:;
    /* $A987: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A989:;
    /* $A989: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A98B:;
    /* $A98B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A98D:;
    /* $A98D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A98F:;
    /* $A98F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A991:;
    /* $A991: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A993:;
    /* $A993: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A995:;
    /* $A995: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A997:;
    /* $A997: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A999:;
    /* $A999: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A99B:;
    /* $A99B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A99D:;
    /* $A99D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A99F:;
    /* $A99F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A1:;
    /* $A9A1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A3:;
    /* $A9A3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A5:;
    /* $A9A5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A7:;
    /* $A9A7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A9:;
    /* $A9A9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9AB:;
    /* $A9AB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9AD:;
    /* $A9AD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9AF:;
    /* $A9AF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B1:;
    /* $A9B1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B3:;
    /* $A9B3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B5:;
    /* $A9B5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9B7:;
    /* $A9B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B7); return;
}

void func_8540_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8540_b3");
#endif
label_8540:;
    /* $8540: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8542:;
    /* $8542: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8542); return;
}

void func_A904_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b3");
#endif
label_A904:;
    /* $A904: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A906:;
    /* $A906: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA906); return;
}

void func_8505_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8505_b3");
#endif
label_8505:;
    /* $8505: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8507:;
    /* $8507: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8507); return;
}

void func_A900_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A900_b3");
#endif
label_A900:;
    /* $A900: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A902:;
    /* $A902: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A904:;
    /* $A904: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A906:;
    /* $A906: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA906); return;
}

void func_85AB_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AB_b3");
#endif
label_85AB:;
    /* $85AB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_85BE; }
label_85AD:;
    /* $85AD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85AD); return;
label_85AE:;
    /* $85AE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85AE); return;
label_85AF:;
    /* $85AF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85AF); return;
label_85B0:;
    /* $85B0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85B0); return;
label_85B1:;
    /* $85B1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85B1); return;
label_85B2:;
    /* $85B2: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_85B3:;
    /* $85B3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85B4:;
    /* $85B4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xCCCB); FLAG_NZ(g_cpu.A);
label_85B7:;
    /* $85B7: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xE200); FLAG_NZ(g_cpu.Y);
label_85BA:;
    /* $85BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85BA); return;
label_85BB:;
    /* $85BB: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCFCE); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_85BE:;
    /* $85BE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x00; g_cpu.C=(g_cpu.A>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_85C0:;
    /* $85C0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85C0); return;
}

void func_A999_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A999_b3");
#endif
label_A999:;
    /* $A999: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A99B:;
    /* $A99B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A99D:;
    /* $A99D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A99F:;
    /* $A99F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A1:;
    /* $A9A1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A3:;
    /* $A9A3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A5:;
    /* $A9A5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A7:;
    /* $A9A7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A9:;
    /* $A9A9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9AB:;
    /* $A9AB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9AD:;
    /* $A9AD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9AF:;
    /* $A9AF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B1:;
    /* $A9B1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B3:;
    /* $A9B3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B5:;
    /* $A9B5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9B7:;
    /* $A9B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B7); return;
}

void func_A960_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A960_b3");
#endif
label_A960:;
    /* $A960: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A962:;
    /* $A962: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A964:;
    /* $A964: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A966:;
    /* $A966: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A968:;
    /* $A968: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A96A:;
    /* $A96A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A96C:;
    /* $A96C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A96E:;
    /* $A96E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A970:;
    /* $A970: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A972:;
    /* $A972: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A974:;
    /* $A974: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A976:;
    /* $A976: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A978:;
    /* $A978: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A97A:;
    /* $A97A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A97C:;
    /* $A97C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A97E:;
    /* $A97E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A980:;
    /* $A980: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A982:;
    /* $A982: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A984:;
    /* $A984: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A986:;
    /* $A986: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A988:;
    /* $A988: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A98A:;
    /* $A98A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A98C:;
    /* $A98C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A98E:;
    /* $A98E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A990:;
    /* $A990: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A992:;
    /* $A992: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A994:;
    /* $A994: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A996:;
    /* $A996: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A998:;
    /* $A998: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A99A:;
    /* $A99A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A99C:;
    /* $A99C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A99E:;
    /* $A99E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A0:;
    /* $A9A0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A2:;
    /* $A9A2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A4:;
    /* $A9A4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A6:;
    /* $A9A6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9A8:;
    /* $A9A8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9AA:;
    /* $A9AA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9AC:;
    /* $A9AC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9AE:;
    /* $A9AE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B0:;
    /* $A9B0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B2:;
    /* $A9B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B4:;
    /* $A9B4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B6:;
    /* $A9B6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B6); return;
}

void func_AFAF_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFAF_b3");
#endif
label_AFAF:;
    /* $AFAF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFB0:;
    /* $AFB0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AFB8; }
label_AFB2:;
    /* $AFB2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1DD, 3);
label_AFB5:;
    /* $AFB5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFBB, 3); return;
label_AFB8:;
    /* $AFB8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1C5, 3);
label_AFBB:;
    /* $AFBB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AFBD:;
    /* $AFBD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_AFBF:;
    /* $AFBF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AFC4; }
label_AFC1:;
    /* $AFC1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFD0, 3); return;
label_AFC4:;
    /* $AFC4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFC5:;
    /* $AFC5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AFCD; }
label_AFC7:;
    /* $AFC7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1D1, 3);
label_AFCA:;
    /* $AFCA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFD0, 3); return;
label_AFCD:;
    /* $AFCD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1B9, 3);
label_AFD0:;
    /* $AFD0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9897_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9897_b3");
#endif
label_9897:;
    /* $9897: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9899:;
    /* $9899: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0180 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_989C:;
    /* $989C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_989F:;
    /* $989F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_98A0:;
    /* $98A0: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x20; g_cpu.C=(g_cpu.Y>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_98A2:;
    /* $98A2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9899;
    }
label_98A4:;
    /* $98A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_98A6:;
    /* $98A6: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_98A9:;
    /* $98A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98AB:;
    /* $98AB: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_98AE:;
    /* $98AE: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_98B1:;
    /* $98B1: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_98B4:;
    /* $98B4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A99_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A99_b3");
#endif
label_9A99:;
    /* $9A99: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9A9A:;
    /* $9A9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9A9A); return;
}

void func_999B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_999B_b3");
#endif
label_999B:;
    /* $999B: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_999E:;
    /* $999E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_999F:;
    /* $999F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_99A1:;
    /* $99A1: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99A3:;
    /* $99A3: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_99A6:;
    /* $99A6: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99A7:;
    /* $99A7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99A1;
    }
label_99A9:;
    /* $99A9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99AB:;
    /* $99AB: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_99AC:;
    /* $99AC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99A1;
    }
label_99AE:;
    /* $99AE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D9C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D9C_b3");
#endif
label_9D9C:;
    /* $9D9C: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9D9E:;
    /* $9D9E: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xAFAF); FLAG_NZ(g_cpu.A);
label_9DA1:;
    /* $9DA1: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xAFAF); FLAG_NZ(g_cpu.A);
label_9DA4:;
    /* $9DA4: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xAAAF); FLAG_NZ(g_cpu.A);
label_9DA7:;
    /* $9DA7: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DA8:;
    /* $9DA8: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DA9:;
    /* $9DA9: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DAA:;
    /* $9DAA: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DAB:;
    /* $9DAB: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DAC:;
    /* $9DAC: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DAD:;
    /* $9DAD: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9DAE:;
    /* $9DAE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DAF:;
    /* $9DAF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB0:;
    /* $9DB0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB1:;
    /* $9DB1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB2:;
    /* $9DB2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB3:;
    /* $9DB3: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB4:;
    /* $9DB4: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB5:;
    /* $9DB5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9DB6:;
    /* $9DB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9DB6); return;
}

void func_8382_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8382_b3");
#endif
label_8382:;
    /* $8382: 8D */ maybe_trigger_vblank(4); nes_write(0x068D, g_cpu.A);
label_8385:;
    /* $8385: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB0AD, 3);
label_8388:;
    /* $8388: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_838A:;
    /* $838A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xE0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xE0); g_cpu.A=r&0xFF; }
label_838C:;
    /* $838C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_838F:;
    /* $838F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_8391:;
    /* $8391: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8393:;
    /* $8393: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_8395:;
    /* $8395: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_8398:;
    /* $8398: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAD; FLAG_NZ(g_cpu.A);
label_839A:;
    /* $839A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_839D:;
    /* $839D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_839F:;
    /* $839F: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_83A2:;
    /* $83A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_83A4:;
    /* $83A4: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_83A7:;
    /* $83A7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x92; FLAG_NZ(g_cpu.A);
label_83A9:;
    /* $83A9: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_83AC:;
    /* $83AC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05B3); FLAG_NZ(g_cpu.A);
label_83AF:;
    /* $83AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_83B0:;
    /* $83B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xE0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xE0); g_cpu.A=r&0xFF; }
label_83B2:;
    /* $83B2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_83B5:;
    /* $83B5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_83B7:;
    /* $83B7: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_83B9:;
    /* $83B9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_83BB:;
    /* $83BB: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_83BE:;
    /* $83BE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_83C0:;
    /* $83C0: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_83C3:;
    /* $83C3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_83C5:;
    /* $83C5: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_83C8:;
    /* $83C8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C8D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C8D_b3");
#endif
label_8C8D:;
    /* $8C8D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8C8F:;
    /* $8C8F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xA5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8C91:;
    /* $8C91: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0829; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C94:;
    /* $8C94: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CD4; }
label_8C96:;
    /* $8C96: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8C98:;
    /* $8C98: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8C9A:;
    /* $8C9A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CD4; }
label_8C9C:;
    /* $8C9C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA1); FLAG_NZ(g_cpu.A);
label_8C9E:;
    /* $8C9E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8CA0:;
    /* $8CA0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CA5; }
label_8CA2:;
    /* $8CA2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D29, 3); return;
label_8CA5:;
    /* $8CA5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8CA8:;
    /* $8CA8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8CAA:;
    /* $8CAA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8D29; }
label_8CAC:;
    /* $8CAC: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8CB2:;
    /* $8CB2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x040B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CB5:;
    /* $8CB5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_8CB8:;
    /* $8CB8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x64; g_cpu.C=(g_cpu.A>=0x64)?1:0; FLAG_NZ(r&0xFF); }
label_8CBA:;
    /* $8CBA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8CC1; }
label_8CBC:;
    /* $8CBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8CBE:;
    /* $8CBE: 8D */ maybe_trigger_vblank(4); nes_write(0x040B, g_cpu.A);
label_8CC1:;
    /* $8CC1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_8CC4:;
    /* $8CC4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_8CC6:;
    /* $8CC6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CD1; }
label_8CC8:;
    /* $8CC8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8CCA:;
    /* $8CCA: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8CCC:;
    /* $8CCC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8CCE:;
    /* $8CCE: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_8CD1:;
    /* $8CD1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
label_8CD4:;
    /* $8CD4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8CD6:;
    /* $8CD6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8CD8:;
    /* $8CD8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CFC; }
label_8CDA:;
    /* $8CDA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8CDD:;
    /* $8CDD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8CDF:;
    /* $8CDF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CF9; }
label_8CE1:;
    /* $8CE1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8CE3:;
    /* $8CE3: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8CE6:;
    /* $8CE6: CE */ maybe_trigger_vblank(6); { uint16_t a=0x04A8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CE9:;
    /* $8CE9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8CF4; }
label_8CEB:;
    /* $8CEB: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8CF1:;
    /* $8CF1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CF9, 3); return;
label_8CF4:;
    /* $8CF4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8CF6:;
    /* $8CF6: 8D */ maybe_trigger_vblank(4); nes_write(0x04A8, g_cpu.A);
label_8CF9:;
    /* $8CF9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
label_8CFC:;
    /* $8CFC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8CFE:;
    /* $8CFE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_8D00:;
    /* $8D00: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D29; }
label_8D02:;
    /* $8D02: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D05:;
    /* $8D05: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_8D07:;
    /* $8D07: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8CF9;
    }
label_8D09:;
    /* $8D09: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D0B:;
    /* $8D0B: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D0E:;
    /* $8D0E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x04A8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D11:;
    /* $8D11: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A8); FLAG_NZ(g_cpu.A);
label_8D14:;
    /* $8D14: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8D16:;
    /* $8D16: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8D21; }
label_8D18:;
    /* $8D18: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8D1E:;
    /* $8D1E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CF9, 3); return;
label_8D21:;
    /* $8D21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8D23:;
    /* $8D23: 8D */ maybe_trigger_vblank(4); nes_write(0x04A8, g_cpu.A);
label_8D26:;
    /* $8D26: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
label_8D29:;
    /* $8D29: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8D2B:;
    /* $8D2B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D2D:;
    /* $8D2D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D42; }
label_8D2F:;
    /* $8D2F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D32:;
    /* $8D32: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D34:;
    /* $8D34: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D7C; }
label_8D36:;
    /* $8D36: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D38:;
    /* $8D38: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D3B:;
    /* $8D3B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D3D:;
    /* $8D3D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8D3F:;
    /* $8D3F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D79, 3); return;
label_8D42:;
    /* $8D42: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D44:;
    /* $8D44: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8D46:;
    /* $8D46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D5B; }
label_8D48:;
    /* $8D48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D4B:;
    /* $8D4B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8D4D:;
    /* $8D4D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D7C; }
label_8D4F:;
    /* $8D4F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D51:;
    /* $8D51: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D54:;
    /* $8D54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8D56:;
    /* $8D56: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8D58:;
    /* $8D58: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D79, 3); return;
label_8D5B:;
    /* $8D5B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D5D:;
    /* $8D5D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8D5F:;
    /* $8D5F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D69; }
label_8D61:;
    /* $8D61: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8D63:;
    /* $8D63: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D66:;
    /* $8D66: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D7C, 3); return;
label_8D69:;
    /* $8D69: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D6C:;
    /* $8D6C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8D6E:;
    /* $8D6E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D7C; }
label_8D70:;
    /* $8D70: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8D72:;
    /* $8D72: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8D75:;
    /* $8D75: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8D77:;
    /* $8D77: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8D79:;
    /* $8D79: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8EAE, 3);
label_8D7C:;
    /* $8D7C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8E38, 3);
label_8D7F:;
    /* $8D7F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8D89, 3);
label_8D82:;
    /* $8D82: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8DE5, 3);
label_8D85:;
    /* $8D85: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9390, 3);
label_8D88:;
    /* $8D88: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B002_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B002_b3");
#endif
label_B002:;
    /* $B002: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x4C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B004:;
    /* $B004: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xB0; FLAG_NZ(g_cpu.A);
label_B006:;
    /* $B006: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1A1, 3);
label_B009:;
    /* $B009: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1B1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1B1_b3");
#endif
label_B1B1:;
    /* $B1B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1B3:;
    /* $B1B3: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1B5:;
    /* $B1B5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1B8:;
    /* $B1B8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9796_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9796_b3");
#endif
label_9796:;
    /* $9796: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_9799:;
    /* $9799: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_979B:;
    /* $979B: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_979D:;
    /* $979D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x93; FLAG_NZ(g_cpu.A);
label_979F:;
    /* $979F: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_97A1:;
    /* $97A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_97A3:;
    /* $97A3: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_97A5:;
    /* $97A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_97A7:;
    /* $97A7: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_97A9:;
    /* $97A9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_97AC:;
    /* $97AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_97AE:;
    /* $97AE: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_97B0:;
    /* $97B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA6; FLAG_NZ(g_cpu.A);
label_97B2:;
    /* $97B2: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_97B4:;
    /* $97B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_97B6:;
    /* $97B6: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_97B8:;
    /* $97B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_97BA:;
    /* $97BA: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_97BC:;
    /* $97BC: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_97BF:;
    /* $97BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_97C1:;
    /* $97C1: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_97C3:;
    /* $97C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_97C5:;
    /* $97C5: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_97C7:;
    /* $97C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_97C9:;
    /* $97C9: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_97CB:;
    /* $97CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_97CD:;
    /* $97CD: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_97CF:;
    /* $97CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_97D2:;
    /* $97D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_97D4:;
    /* $97D4: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_97D6:;
    /* $97D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC6; FLAG_NZ(g_cpu.A);
label_97D8:;
    /* $97D8: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_97DA:;
    /* $97DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_97DC:;
    /* $97DC: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_97DE:;
    /* $97DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_97E0:;
    /* $97E0: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_97E2:;
    /* $97E2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_97E5:;
    /* $97E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_97E7:;
    /* $97E7: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_97E9:;
    /* $97E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD5; FLAG_NZ(g_cpu.A);
label_97EB:;
    /* $97EB: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_97ED:;
    /* $97ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_97EF:;
    /* $97EF: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_97F1:;
    /* $97F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_97F3:;
    /* $97F3: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_97F5:;
    /* $97F5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_97F8:;
    /* $97F8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99B1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99B1_b3");
#endif
label_99B1:;
    /* $99B1: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_99B3:;
    /* $99B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9D; FLAG_NZ(g_cpu.A);
label_99B5:;
    /* $99B5: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_99B7:;
    /* $99B7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_99B9:;
    /* $99B9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_99BC:;
    /* $99BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_99BE:;
    /* $99BE: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_99C1:;
    /* $99C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_99C3:;
    /* $99C3: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_99C6:;
    /* $99C6: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99C8:;
    /* $99C8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_99CB:;
    /* $99CB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99CC:;
    /* $99CC: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_99CE:;
    /* $99CE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99C6;
    }
label_99D0:;
    /* $99D0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A5B1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5B1_b3");
#endif
label_A5B1:;
    /* $A5B1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A5B3:;
    /* $A5B3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A5B5:;
    /* $A5B5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A5B7:;
    /* $A5B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA5B7); return;
}

void func_A600_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A600_b3");
#endif
label_A600:;
    /* $A600: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A602:;
    /* $A602: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A604:;
    /* $A604: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A606:;
    /* $A606: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A608:;
    /* $A608: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A60A:;
    /* $A60A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A60C:;
    /* $A60C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A60E:;
    /* $A60E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A610:;
    /* $A610: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A612:;
    /* $A612: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A614:;
    /* $A614: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A616:;
    /* $A616: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A618:;
    /* $A618: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A61A:;
    /* $A61A: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A61C:;
    /* $A61C: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A61E:;
    /* $A61E: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A620:;
    /* $A620: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A622:;
    /* $A622: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A624:;
    /* $A624: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A626:;
    /* $A626: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A628:;
    /* $A628: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A62A:;
    /* $A62A: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xAA); FLAG_NZ(g_cpu.A);
label_A62C:;
    /* $A62C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A62E:;
    /* $A62E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA8; FLAG_NZ(g_cpu.A);
label_A630:;
    /* $A630: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A632:;
    /* $A632: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A634:;
    /* $A634: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A636:;
    /* $A636: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A637:;
    /* $A637: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A638:;
    /* $A638: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A639:;
    /* $A639: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A63A:;
    /* $A63A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A63B:;
    /* $A63B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A63C:;
    /* $A63C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A63D:;
    /* $A63D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A63E:;
    /* $A63E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A63F:;
    /* $A63F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A640:;
    /* $A640: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A641:;
    /* $A641: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A642:;
    /* $A642: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A643:;
    /* $A643: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A644:;
    /* $A644: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A645:;
    /* $A645: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A646:;
    /* $A646: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A647:;
    /* $A647: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A648:;
    /* $A648: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A649:;
    /* $A649: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A64B:;
    /* $A64B: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A64D:;
    /* $A64D: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A64F:;
    /* $A64F: 95 */ maybe_trigger_vblank(4); nes_write((0xA2 + g_cpu.X) & 0xFF, g_cpu.A);
label_A651:;
    /* $A651: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A652:;
    /* $A652: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A653:;
    /* $A653: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A654:;
    /* $A654: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A655:;
    /* $A655: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A656:;
    /* $A656: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A657:;
    /* $A657: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A658:;
    /* $A658: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A659:;
    /* $A659: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A65A:;
    /* $A65A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A65B:;
    /* $A65B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A65C:;
    /* $A65C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A65D:;
    /* $A65D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A65E:;
    /* $A65E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A65F:;
    /* $A65F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A660:;
    /* $A660: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A661:;
    /* $A661: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A662:;
    /* $A662: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A663:;
    /* $A663: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A664:;
    /* $A664: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A665:;
    /* $A665: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A666:;
    /* $A666: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A667:;
    /* $A667: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A668:;
    /* $A668: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A669:;
    /* $A669: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A66A:;
    /* $A66A: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A66C:;
    /* $A66C: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A66D:;
    /* $A66D: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A66E:;
    /* $A66E: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A66F:;
    /* $A66F: 94 */ maybe_trigger_vblank(4); nes_write((0x02 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A671:;
    /* $A671: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A672:;
    /* $A672: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A673:;
    /* $A673: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A674:;
    /* $A674: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A675:;
    /* $A675: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A676:;
    /* $A676: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A677:;
    /* $A677: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A678:;
    /* $A678: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A679:;
    /* $A679: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A67A:;
    /* $A67A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A67B:;
    /* $A67B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A67C:;
    /* $A67C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A67D:;
    /* $A67D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A67E:;
    /* $A67E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xC1; g_cpu.C=(g_cpu.Y>=0xC1)?1:0; FLAG_NZ(r&0xFF); }
label_A680:;
    /* $A680: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A682:;
    /* $A682: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A684:;
    /* $A684: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xC7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A686:;
    /* $A686: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A687:;
    /* $A687: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xCA; g_cpu.C=(g_cpu.A>=0xCA)?1:0; FLAG_NZ(r&0xFF); }
label_A689:;
    /* $A689: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xCC)?1:0; g_cpu.X=(t-0xCC)&0xFF; FLAG_NZ(g_cpu.X); }
label_A68B:;
    /* $A68B: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCFCE); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A68E:;
    /* $A68E: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A690:;
    /* $A690: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A691:;
    /* $A691: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A692:;
    /* $A692: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A693:;
    /* $A693: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A694:;
    /* $A694: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A695:;
    /* $A695: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A696:;
    /* $A696: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A697:;
    /* $A697: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A698:;
    /* $A698: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A699:;
    /* $A699: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A69A:;
    /* $A69A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A69B:;
    /* $A69B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A69C:;
    /* $A69C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A69D:;
    /* $A69D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A69E:;
    /* $A69E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A671;
    }
label_A6A0:;
    /* $A6A0: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A6A1:;
    /* $A6A1: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD4) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6A3:;
    /* $A6A3: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD6 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A6A5:;
    /* $A6A5: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD8 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6A7:;
    /* $A6A7: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDBDA + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A6AA:;
    /* $A6AA: DC */ maybe_trigger_vblank(4); (void)nes_read((0xDEDD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6AD:;
    /* $A6AD: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x9492 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6B0:;
    /* $A6B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6B1:;
    /* $A6B1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6B2:;
    /* $A6B2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6B3:;
    /* $A6B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6B4:;
    /* $A6B4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6B5:;
    /* $A6B5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6B6:;
    /* $A6B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6B7:;
    /* $A6B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6B8:;
    /* $A6B8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6B9:;
    /* $A6B9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6BA:;
    /* $A6BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6BB:;
    /* $A6BB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6BC:;
    /* $A6BC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6BD:;
    /* $A6BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6BE:;
    /* $A6BE: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE1; g_cpu.C=(g_cpu.X>=0xE1)?1:0; FLAG_NZ(r&0xFF); }
label_A6C0:;
    /* $A6C0: E2 */ maybe_trigger_vblank(2); /* NOP */
label_A6C2:;
    /* $A6C2: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE5); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A6C4:;
    /* $A6C4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xE7; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6C6:;
    /* $A6C6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A6C7:;
    /* $A6C7: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xEA; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6C9:;
    /* $A6C9: EB */ maybe_trigger_vblank(2); { uint8_t m=0xEC; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6CB:;
    /* $A6CB: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEFEE); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6CE:;
    /* $A6CE: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A6D0:;
    /* $A6D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6D1:;
    /* $A6D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6D2:;
    /* $A6D2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6D3:;
    /* $A6D3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6D4:;
    /* $A6D4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6D5:;
    /* $A6D5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6D6:;
    /* $A6D6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6D7:;
    /* $A6D7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6D8:;
    /* $A6D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6D9:;
    /* $A6D9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6DA:;
    /* $A6DA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6DB:;
    /* $A6DB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6DC:;
    /* $A6DC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6DD:;
    /* $A6DD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6DE:;
    /* $A6DE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A6D1;
    }
label_A6E0:;
    /* $A6E0: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_A6E1:;
    /* $A6E1: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF4) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E3:;
    /* $A6E3: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF6 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6E5:;
    /* $A6E5: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF8 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E7:;
    /* $A6E7: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBFA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6EA:;
    /* $A6EA: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFEFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6ED:;
    /* $A6ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9492 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F0:;
    /* $A6F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F1:;
    /* $A6F1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F2:;
    /* $A6F2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F3:;
    /* $A6F3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F4:;
    /* $A6F4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F5:;
    /* $A6F5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F6:;
    /* $A6F6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F7:;
    /* $A6F7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A6F8:;
    /* $A6F8: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A6FA:;
    /* $A6FA: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A6FC:;
    /* $A6FC: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A6FE:;
    /* $A6FE: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A700:;
    /* $A700: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A702:;
    /* $A702: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A704:;
    /* $A704: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A706:;
    /* $A706: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A708:;
    /* $A708: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A70A:;
    /* $A70A: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A70C:;
    /* $A70C: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A70E:;
    /* $A70E: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A710:;
    /* $A710: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x84 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A712:;
    /* $A712: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_A714:;
    /* $A714: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A715:;
    /* $A715: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A716:;
    /* $A716: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A717:;
    /* $A717: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A718:;
    /* $A718: 87 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A & g_cpu.X); /* SAX */
label_A71A:;
    /* $A71A: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA71A; g_rti_bank = 3; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9090_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9090_b3");
#endif
label_9090:;
    /* $9090: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x4C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9092:;
    /* $9092: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xA590 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9095:;
    /* $9095: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0229; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9098:;
    /* $9098: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90A2; }
label_909A:;
    /* $909A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_909C:;
    /* $909C: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_909F:;
    /* $909F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_90A2:;
    /* $90A2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_90A5:;
    /* $90A5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_90A7:;
    /* $90A7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90BE; }
label_90A9:;
    /* $90A9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_90AB:;
    /* $90AB: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_90AE:;
    /* $90AE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_90B1:;
    /* $90B1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_90B3:;
    /* $90B3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_90BE; }
label_90B5:;
    /* $90B5: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0487; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_90B8:;
    /* $90B8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_90BE:;
    /* $90BE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9363, 3);
label_90C1:;
    /* $90C1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x92B9, 3);
label_90C4:;
    /* $90C4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9310, 3);
label_90C7:;
    /* $90C7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x928A, 3);
label_90CA:;
    /* $90CA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8551_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8551_b3");
#endif
label_8551:;
    /* $8551: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8552:;
    /* $8552: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBBBA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8555:;
    /* $8555: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBEBD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8558:;
    /* $8558: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xBDD8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_855B:;
    /* $855B: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB9DE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_855E:;
    /* $855E: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_855F:;
    /* $855F: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x00F4 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8562:;
    /* $8562: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8562); return;
}

void func_A9C1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9C1_b3");
#endif
label_A9C1:;
    /* $A9C1: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A9C3:;
    /* $A9C3: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x22 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A9C5:;
    /* $A9C5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C5); return;
}

void func_85B2_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85B2_b3");
#endif
label_85B2:;
    /* $85B2: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_85B3:;
    /* $85B3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85B4:;
    /* $85B4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xCCCB); FLAG_NZ(g_cpu.A);
label_85B7:;
    /* $85B7: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xE200); FLAG_NZ(g_cpu.Y);
label_85BA:;
    /* $85BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85BA); return;
}

void func_855E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_855E_b3");
#endif
label_855E:;
    /* $855E: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_855F:;
    /* $855F: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x00F4 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8562:;
    /* $8562: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8562); return;
}

void func_85B4_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85B4_b3");
#endif
label_85B4:;
    /* $85B4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xCCCB); FLAG_NZ(g_cpu.A);
label_85B7:;
    /* $85B7: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xE200); FLAG_NZ(g_cpu.Y);
label_85BA:;
    /* $85BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85BA); return;
}

void func_852B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_852B_b3");
#endif
label_852B:;
    /* $852B: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_852D:;
    /* $852D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x852D); return;
}

void func_85B3_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85B3_b3");
#endif
label_85B3:;
    /* $85B3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85B4:;
    /* $85B4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xCCCB); FLAG_NZ(g_cpu.A);
label_85B7:;
    /* $85B7: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xE200); FLAG_NZ(g_cpu.Y);
label_85BA:;
    /* $85BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85BA); return;
}

void func_B1C9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1C9_b3");
#endif
label_B1C9:;
    /* $B1C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1CB:;
    /* $B1CB: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1CD:;
    /* $B1CD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1D0:;
    /* $B1D0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B2C9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B2C9_b3");
#endif
label_B2C9:;
    /* $B2C9: 8D */ maybe_trigger_vblank(4); nes_write(0x8F8E, g_cpu.A);
label_B2CC:;
    /* $B2CC: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x76 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B2CE:;
    /* $B2CE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_B2D0:;
    /* $B2D0: 9D */ maybe_trigger_vblank(5); nes_write((0x009E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B2D3:;
    /* $B2D3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB2D3); return;
}

void func_B3C9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3C9_b3");
#endif
label_B3C9:;
    /* $B3C9: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3CB:;
    /* $B3CB: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B3CC:;
    /* $B3CC: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B3CD:;
    /* $B3CD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x0001, -1);
label_B3D0:;
    /* $B3D0: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B3D1:;
    /* $B3D1: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3D3:;
    /* $B3D3: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B3D4:;
    /* $B3D4: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_B3E8; }
label_B3D6:;
    /* $B3D6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3D8:;
    /* $B3D8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_B3ED; }
label_B3DA:;
    /* $B3DA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3DC:;
    /* $B3DC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B3DD:;
    /* $B3DD: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B3DE:;
    /* $B3DE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3E0:;
    /* $B3E0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B3E1:;
    /* $B3E1: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B3E3:;
    /* $B3E3: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B3E4:;
    /* $B3E4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x0114, -1);
label_B3E7:;
    /* $B3E7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB3E7); return;
label_B3E8:;
    /* $B3E8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x0115, -1);
label_B3EB:;
    /* $B3EB: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B3EC:;
    /* $B3EC: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B3ED:;
    /* $B3ED: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B3EF:;
    /* $B3EF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB3EF); return;
}

void func_85D3_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85D3_b3");
#endif
label_85D3:;
    /* $85D3: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_85D4:;
    /* $85D4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCDB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xF200 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_85DA:;
    /* $85DA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85DA); return;
}

void func_855C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_855C_b3");
#endif
label_855C:;
    /* $855C: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xBAB9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_855F:;
    /* $855F: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x00F4 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8562:;
    /* $8562: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8562); return;
}

void func_9A26_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A26_b3");
#endif
label_9A26:;
    /* $9A26: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x9A + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9A28:;
    /* $9A28: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9726_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9726_b3");
#endif
label_9726:;
    /* $9726: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9727:;
    /* $9727: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_972E; }
label_9729:;
    /* $9729: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_972A:;
    /* $972A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC6); g_cpu.A=r&0xFF; }
label_972C:;
    /* $972C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_972E:;
    /* $972E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_9730:;
    /* $9730: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9737; }
label_9732:;
    /* $9732: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9733:;
    /* $9733: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC6); g_cpu.A=r&0xFF; }
label_9735:;
    /* $9735: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_9737:;
    /* $9737: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_973A:;
    /* $973A: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_973C:;
    /* $973C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_973E:;
    /* $973E: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_9740:;
    /* $9740: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9742:;
    /* $9742: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_9744:;
    /* $9744: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 3);
label_9747:;
    /* $9747: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE9; FLAG_NZ(g_cpu.A);
label_9749:;
    /* $9749: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_974B:;
    /* $974B: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_974D:;
    /* $974D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_974F:;
    /* $974F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9756; }
label_9751:;
    /* $9751: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9752:;
    /* $9752: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC6); g_cpu.A=r&0xFF; }
label_9754:;
    /* $9754: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9756:;
    /* $9756: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_9758:;
    /* $9758: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_975F; }
label_975A:;
    /* $975A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_975B:;
    /* $975B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC6); g_cpu.A=r&0xFF; }
label_975D:;
    /* $975D: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_975F:;
    /* $975F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_9762:;
    /* $9762: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_9764:;
    /* $9764: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9767:;
    /* $9767: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD5; FLAG_NZ(g_cpu.A);
label_9769:;
    /* $9769: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_976C:;
    /* $976C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_976E:;
    /* $976E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_9771:;
    /* $9771: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_9773:;
    /* $9773: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_9776:;
    /* $9776: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD9; FLAG_NZ(g_cpu.A);
label_9778:;
    /* $9778: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_977B:;
    /* $977B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x15); FLAG_NZ(g_cpu.A);
label_977D:;
    /* $977D: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_9780:;
    /* $9780: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_9782:;
    /* $9782: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_9785:;
    /* $9785: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_97A5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_97A5_b3");
#endif
label_97A5:;
    /* $97A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_97A7:;
    /* $97A7: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_97A9:;
    /* $97A9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_97AC:;
    /* $97AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_97AE:;
    /* $97AE: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_97B0:;
    /* $97B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA6; FLAG_NZ(g_cpu.A);
label_97B2:;
    /* $97B2: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_97B4:;
    /* $97B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_97B6:;
    /* $97B6: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_97B8:;
    /* $97B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_97BA:;
    /* $97BA: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_97BC:;
    /* $97BC: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_97BF:;
    /* $97BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_97C1:;
    /* $97C1: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_97C3:;
    /* $97C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_97C5:;
    /* $97C5: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_97C7:;
    /* $97C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_97C9:;
    /* $97C9: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_97CB:;
    /* $97CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_97CD:;
    /* $97CD: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_97CF:;
    /* $97CF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_97D2:;
    /* $97D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_97D4:;
    /* $97D4: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_97D6:;
    /* $97D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC6; FLAG_NZ(g_cpu.A);
label_97D8:;
    /* $97D8: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_97DA:;
    /* $97DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_97DC:;
    /* $97DC: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_97DE:;
    /* $97DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_97E0:;
    /* $97E0: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_97E2:;
    /* $97E2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_97E5:;
    /* $97E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_97E7:;
    /* $97E7: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_97E9:;
    /* $97E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD5; FLAG_NZ(g_cpu.A);
label_97EB:;
    /* $97EB: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_97ED:;
    /* $97ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_97EF:;
    /* $97EF: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_97F1:;
    /* $97F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_97F3:;
    /* $97F3: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_97F5:;
    /* $97F5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_97F8:;
    /* $97F8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_98C5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98C5_b3");
#endif
label_98C5:;
    /* $98C5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_98C6:;
    /* $98C6: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_98C9:;
    /* $98C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_98CB:;
    /* $98CB: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_98CE:;
    /* $98CE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_98D0:;
    /* $98D0: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_98D3:;
    /* $98D3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_98D5:;
    /* $98D5: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_98D8:;
    /* $98D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_98DA:;
    /* $98DA: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_98DD:;
    /* $98DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_98DF:;
    /* $98DF: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_98E2:;
    /* $98E2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_98E4:;
    /* $98E4: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_98E7:;
    /* $98E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_98E9:;
    /* $98E9: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_98EC:;
    /* $98EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_98EE:;
    /* $98EE: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_98F1:;
    /* $98F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_98F3:;
    /* $98F3: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC060, 3);
label_98F6:;
    /* $98F6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98F8:;
    /* $98F8: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_98FB:;
    /* $98FB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98FD:;
    /* $98FD: 8D */ maybe_trigger_vblank(4); nes_write(0x6000, g_cpu.A);
label_9900:;
    /* $9900: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_98E5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98E5_b3");
#endif
label_98E5:;
    /* $98E5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98E7:;
    /* $98E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_98E9:;
    /* $98E9: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_98EC:;
    /* $98EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_98EE:;
    /* $98EE: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_98F1:;
    /* $98F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_98F3:;
    /* $98F3: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC060, 3);
label_98F6:;
    /* $98F6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98F8:;
    /* $98F8: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_98FB:;
    /* $98FB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98FD:;
    /* $98FD: 8D */ maybe_trigger_vblank(4); nes_write(0x6000, g_cpu.A);
label_9900:;
    /* $9900: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85AC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AC_b3");
#endif
label_85AC:;
    /* $85AC: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85AE); return;
}

void func_A9AD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9AD_b3");
#endif
label_A9AD:;
    /* $A9AD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9AF:;
    /* $A9AF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B1:;
    /* $A9B1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B3:;
    /* $A9B3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B5:;
    /* $A9B5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9B7:;
    /* $A9B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B7); return;
}

void func_A9AE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9AE_b3");
#endif
label_A9AE:;
    /* $A9AE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B0:;
    /* $A9B0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B2:;
    /* $A9B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B4:;
    /* $A9B4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A9B6:;
    /* $A9B6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B6); return;
}

void func_90AD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90AD_b3");
#endif
label_90AD:;
    /* $90AD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_90AF:;
    /* $90AF: 87 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A & g_cpu.X); /* SAX */
label_90B1:;
    /* $90B1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_90B3:;
    /* $90B3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_90BE; }
label_90B5:;
    /* $90B5: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0487; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_90B8:;
    /* $90B8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_90BE:;
    /* $90BE: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9363, 3);
label_90C1:;
    /* $90C1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x92B9, 3);
label_90C4:;
    /* $90C4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9310, 3);
label_90C7:;
    /* $90C7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x928A, 3);
label_90CA:;
    /* $90CA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8800_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8800_b3");
#endif
label_8800:;
    /* $8800: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8802:;
    /* $8802: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8804:;
    /* $8804: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8806:;
    /* $8806: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8807:;
    /* $8807: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0801), 3); return; }
label_8809:;
    /* $8809: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_880B:;
    /* $880B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_880C:;
    /* $880C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0801), 3); return; }
label_880E:;
    /* $880E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8812, 3);
label_8811:;
    /* $8811: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A800_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A800_b3");
#endif
label_A800:;
    /* $A800: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A804:;
    /* $A804: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A806:;
    /* $A806: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A808:;
    /* $A808: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A80A:;
    /* $A80A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A80C:;
    /* $A80C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A80E:;
    /* $A80E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A810:;
    /* $A810: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A812:;
    /* $A812: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A814:;
    /* $A814: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A815:;
    /* $A815: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A816:;
    /* $A816: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A817:;
    /* $A817: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A818:;
    /* $A818: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A81A:;
    /* $A81A: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A838; }
label_A81C:;
    /* $A81C: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A81E:;
    /* $A81E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A81F:;
    /* $A81F: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A820:;
    /* $A820: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A822:;
    /* $A822: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A824:;
    /* $A824: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x10 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A826:;
    /* $A826: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A828:;
    /* $A828: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A82A:;
    /* $A82A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A82C:;
    /* $A82C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A82E:;
    /* $A82E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1515 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A831:;
    /* $A831: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A833:;
    /* $A833: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A834:;
    /* $A834: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A835:;
    /* $A835: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A836:;
    /* $A836: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A837:;
    /* $A837: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A838:;
    /* $A838: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A83A:;
    /* $A83A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_90C8_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90C8_b3");
#endif
label_90C8:;
    /* $90C8: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_90C9:;
    /* $90C9: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_90CA:;
    /* $90CA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4B2_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4B2_b3");
#endif
label_A4B2:;
    /* $A4B2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B3:;
    /* $A4B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B4:;
    /* $A4B4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B5:;
    /* $A4B5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B6:;
    /* $A4B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B7:;
    /* $A4B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B8:;
    /* $A4B8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4B9:;
    /* $A4B9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4BA:;
    /* $A4BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x046D), 3); return; }
label_A4BC:;
    /* $A4BC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4BE:;
    /* $A4BE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C0:;
    /* $A4C0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C2:;
    /* $A4C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C4:;
    /* $A4C4: 99 */ maybe_trigger_vblank(5); nes_write((0x0000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4C7:;
    /* $A4C7: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A4C8:;
    /* $A4C8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CA:;
    /* $A4CA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CC:;
    /* $A4CC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CE:;
    /* $A4CE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D0:;
    /* $A4D0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D2:;
    /* $A4D2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D3:;
    /* $A4D3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D4:;
    /* $A4D4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D5:;
    /* $A4D5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D6:;
    /* $A4D6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D7:;
    /* $A4D7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D8:;
    /* $A4D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4D9:;
    /* $A4D9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A4DA:;
    /* $A4DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x048D), 3); return; }
label_A4DC:;
    /* $A4DC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4DE:;
    /* $A4DE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4E0:;
    /* $A4E0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4E2:;
    /* $A4E2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4E4:;
    /* $A4E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A4E6:;
    /* $A4E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA4E6); return;
}

