/* yoshis-cookie_full_bank04_part03.c — PRG bank 4 function bodies (sub-part 3).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella yoshis-cookie_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "yoshis-cookie_full_decls.h"

void func_A9E4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E4_b4");
#endif
label_A9E4:;
    /* $A9E4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_A9E6:;
    /* $A9E6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xA905); FLAG_NZ(g_cpu.A);
label_A9E9:;
    /* $A9E9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E9); return;
}

void func_8D01_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D01_b4");
#endif
label_8D01:;
    /* $8D01: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8D05 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D04:;
    /* $8D04: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA905 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D07:;
    /* $8D07: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D07); return;
}

void func_9860_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9860_b4");
#endif
label_9860:;
    /* $9860: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9861:;
    /* $9861: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9863:;
    /* $9863: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_9865:;
    /* $9865: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9866:;
    /* $9866: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9869:;
    /* $9869: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_986B:;
    /* $986B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_986D:;
    /* $986D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_986F:;
    /* $986F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA18A, 4);
label_9872:;
    /* $9872: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x26; FLAG_NZ(g_cpu.X);
label_9874:;
    /* $9874: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x2C; FLAG_NZ(g_cpu.Y);
label_9876:;
    /* $9876: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9879:;
    /* $9879: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_987B:;
    /* $987B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_987D:;
    /* $987D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_987F:;
    /* $987F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA18A, 4);
label_9882:;
    /* $9882: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x26; FLAG_NZ(g_cpu.X);
label_9884:;
    /* $9884: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x2E; FLAG_NZ(g_cpu.Y);
label_9886:;
    /* $9886: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9889:;
    /* $9889: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_988B:;
    /* $988B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_988D:;
    /* $988D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_988F:;
    /* $988F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA18A, 4);
label_9892:;
    /* $9892: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x2D; FLAG_NZ(g_cpu.X);
label_9894:;
    /* $9894: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x3E; FLAG_NZ(g_cpu.Y);
label_9896:;
    /* $9896: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9899:;
    /* $9899: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_989B:;
    /* $989B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_989D:;
    /* $989D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_989F:;
    /* $989F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA18A, 4);
label_98A2:;
    /* $98A2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x2E; FLAG_NZ(g_cpu.X);
label_98A4:;
    /* $98A4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x40; FLAG_NZ(g_cpu.Y);
label_98A6:;
    /* $98A6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98A9:;
    /* $98A9: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_98AB:;
    /* $98AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98AD:;
    /* $98AD: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_98AF:;
    /* $98AF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA18A, 4);
label_98B2:;
    /* $98B2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x2E; FLAG_NZ(g_cpu.X);
label_98B4:;
    /* $98B4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x42; FLAG_NZ(g_cpu.Y);
label_98B6:;
    /* $98B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98B9:;
    /* $98B9: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_98BB:;
    /* $98BB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98BD:;
    /* $98BD: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_98BF:;
    /* $98BF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA18A, 4);
label_98C2:;
    /* $98C2: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_98C5:;
    /* $98C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_98C7:;
    /* $98C7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98CA:;
    /* $98CA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_98CB:;
    /* $98CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE5; FLAG_NZ(g_cpu.A);
label_98CD:;
    /* $98CD: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98D0:;
    /* $98D0: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_98D1:;
    /* $98D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_98D3:;
    /* $98D3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98D6:;
    /* $98D6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_98D7:;
    /* $98D7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x45); FLAG_NZ(g_cpu.A);
label_98D9:;
    /* $98D9: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98DC:;
    /* $98DC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_98DD:;
    /* $98DD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x46); FLAG_NZ(g_cpu.A);
label_98DF:;
    /* $98DF: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98E2:;
    /* $98E2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_98E3:;
    /* $98E3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_98E5:;
    /* $98E5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98E8:;
    /* $98E8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_98E9:;
    /* $98E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xED; FLAG_NZ(g_cpu.A);
label_98EB:;
    /* $98EB: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98EE:;
    /* $98EE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_98EF:;
    /* $98EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_98F1:;
    /* $98F1: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98F4:;
    /* $98F4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_98F5:;
    /* $98F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x4D); FLAG_NZ(g_cpu.A);
label_98F7:;
    /* $98F7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_98FA:;
    /* $98FA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_98FB:;
    /* $98FB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_98FD:;
    /* $98FD: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9900:;
    /* $9900: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9901:;
    /* $9901: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_9903:;
    /* $9903: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_9905:;
    /* $9905: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_9907:;
    /* $9907: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_9909:;
    /* $9909: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_990B:;
    /* $990B: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_990D:;
    /* $990D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_990F:;
    /* $990F: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_9911:;
    /* $9911: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_9913:;
    /* $9913: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9916:;
    /* $9916: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9917:;
    /* $9917: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_9919:;
    /* $9919: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_991C:;
    /* $991C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_991D:;
    /* $991D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_991F:;
    /* $991F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9922:;
    /* $9922: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9923:;
    /* $9923: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_9925:;
    /* $9925: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9927:;
    /* $9927: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x17); FLAG_NZ(g_cpu.Y);
label_9929:;
    /* $9929: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_992C:;
    /* $992C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_992F:;
    /* $992F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9930:;
    /* $9930: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9931:;
    /* $9931: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9933:;
    /* $9933: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9929;
    }
label_9935:;
    /* $9935: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_9937:;
    /* $9937: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9938:;
    /* $9938: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_993A:;
    /* $993A: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_993C:;
    /* $993C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9940; }
label_993E:;
    /* $993E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9940:;
    /* $9940: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_9942:;
    /* $9942: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9943:;
    /* $9943: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_9945:;
    /* $9945: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_9947:;
    /* $9947: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9949:;
    /* $9949: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9911;
    }
label_994B:;
    /* $994B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_994D:;
    /* $994D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9950:;
    /* $9950: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_9953:;
    /* $9953: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A448_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A448_b4");
#endif
label_A448:;
    /* $A448: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A44A:;
    /* $A44A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A44D:;
    /* $A44D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A44E:;
    /* $A44E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x42; FLAG_NZ(g_cpu.A);
label_A450:;
    /* $A450: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A453:;
    /* $A453: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A454:;
    /* $A454: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A456:;
    /* $A456: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A459:;
    /* $A459: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A45B:;
    /* $A45B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A45C:;
    /* $A45C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A45E:;
    /* $A45E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A461:;
    /* $A461: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A462:;
    /* $A462: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A464:;
    /* $A464: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A45E;
    }
label_A466:;
    /* $A466: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A468:;
    /* $A468: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A46B:;
    /* $A46B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A46C:;
    /* $A46C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x62; FLAG_NZ(g_cpu.A);
label_A46E:;
    /* $A46E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A471:;
    /* $A471: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A472:;
    /* $A472: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A474:;
    /* $A474: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A477:;
    /* $A477: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A478:;
    /* $A478: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A47A:;
    /* $A47A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A47C:;
    /* $A47C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A47F:;
    /* $A47F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A480:;
    /* $A480: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A482:;
    /* $A482: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A47C;
    }
label_A484:;
    /* $A484: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A487:;
    /* $A487: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A48A:;
    /* $A48A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A948_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A948_b4");
#endif
label_A948:;
    /* $A948: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A965; }
label_A94A:;
    /* $A94A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058D); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A965; }
label_A94F:;
    /* $A94F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_A954:;
    /* $A954: 8D */ maybe_trigger_vblank(4); nes_write(0x058D, g_cpu.A);
label_A957:;
    /* $A957: 8D */ maybe_trigger_vblank(4); nes_write(0x0589, g_cpu.A);
label_A95A:;
    /* $A95A: 8D */ maybe_trigger_vblank(4); nes_write(0x058A, g_cpu.A);
label_A95D:;
    /* $A95D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A95F:;
    /* $A95F: 8D */ maybe_trigger_vblank(4); nes_write(0x05A3, g_cpu.A);
label_A962:;
    /* $A962: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB48A, 4);
label_A965:;
    /* $A965: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A975; }
label_A96A:;
    /* $A96A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_A96D:;
    /* $A96D: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_A96F:;
    /* $A96F: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAA52, 4);
label_A975:;
    /* $A975: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ADB5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADB5_b4");
#endif
label_ADB5:;
    /* $ADB5: 8D */ maybe_trigger_vblank(4); nes_write(0x05A9, g_cpu.A);
label_ADB8:;
    /* $ADB8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ADB9:;
    /* $ADB9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_ADD1; }
label_ADBB:;
    /* $ADBB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_ADBE:;
    /* $ADBE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ADBF:;
    /* $ADBF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ADC0:;
    /* $ADC0: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0577); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ADC3:;
    /* $ADC3: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05AB); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ADC6:;
    /* $ADC6: 8D */ maybe_trigger_vblank(4); nes_write(0x05AB, g_cpu.A);
label_ADC9:;
    /* $ADC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_ADCB:;
    /* $ADCB: 8D */ maybe_trigger_vblank(4); nes_write(0x0577, g_cpu.A);
label_ADCE:;
    /* $ADCE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xADE1, 4); return;
label_ADD1:;
    /* $ADD1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0578); FLAG_NZ(g_cpu.A);
label_ADD4:;
    /* $ADD4: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ADD5:;
    /* $ADD5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ADD6:;
    /* $ADD6: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05AB); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ADD9:;
    /* $ADD9: 8D */ maybe_trigger_vblank(4); nes_write(0x05AB, g_cpu.A);
label_ADDC:;
    /* $ADDC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_ADDE:;
    /* $ADDE: 8D */ maybe_trigger_vblank(4); nes_write(0x0578, g_cpu.A);
label_ADE1:;
    /* $ADE1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8A60_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A60_b4");
#endif
label_8A60:;
    /* $8A60: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8A62:;
    /* $8A62: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8A64:;
    /* $8A64: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8A66:;
    /* $8A66: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8A68:;
    /* $8A68: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8A6A:;
    /* $8A6A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8A6C:;
    /* $8A6C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8A6E:;
    /* $8A6E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x74 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8A70:;
    /* $8A70: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A71:;
    /* $8A71: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A72:;
    /* $8A72: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A74:;
    /* $8A74: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A76:;
    /* $8A76: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A78:;
    /* $8A78: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A7A:;
    /* $8A7A: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A7C:;
    /* $8A7C: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A7E:;
    /* $8A7E: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A80:;
    /* $8A80: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A82:;
    /* $8A82: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A84:;
    /* $8A84: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A86:;
    /* $8A86: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A88:;
    /* $8A88: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A8A:;
    /* $8A8A: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A8C:;
    /* $8A8C: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A8E:;
    /* $8A8E: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A90:;
    /* $8A90: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A91:;
    /* $8A91: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A92:;
    /* $8A92: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A93:;
    /* $8A93: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A94:;
    /* $8A94: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A95:;
    /* $8A95: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A96:;
    /* $8A96: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A97:;
    /* $8A97: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A98:;
    /* $8A98: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A99:;
    /* $8A99: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A9A:;
    /* $8A9A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A9B:;
    /* $8A9B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A9C:;
    /* $8A9C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A9D:;
    /* $8A9D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A9E:;
    /* $8A9E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A9F:;
    /* $8A9F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AA0:;
    /* $8AA0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AA1:;
    /* $8AA1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AA2:;
    /* $8AA2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AA3:;
    /* $8AA3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AA4:;
    /* $8AA4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AA5:;
    /* $8AA5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AA6:;
    /* $8AA6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AA7:;
    /* $8AA7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AA8:;
    /* $8AA8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AA9:;
    /* $8AA9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AAA:;
    /* $8AAA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AAB:;
    /* $8AAB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AAC:;
    /* $8AAC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AAD:;
    /* $8AAD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AAE:;
    /* $8AAE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AAF:;
    /* $8AAF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AB0:;
    /* $8AB0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8AB1:;
    /* $8AB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8AB1); return;
}

void func_A297_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A297_b4");
#endif
label_A297:;
    /* $A297: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_A299:;
    /* $A299: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xCE; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A29B:;
    /* $A29B: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xCE05 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A29E:;
    /* $A29E: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A29F:;
    /* $A29F: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xAD); FLAG_NZ(g_cpu.A);
label_A2A1:;
    /* $A2A1: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xC905); FLAG_NZ(g_cpu.A);
label_A2A4:;
    /* $A2A4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x3DF0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2A7:;
    /* $A2A7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_A2A9:;
    /* $A2A9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2E4; }
label_A2AB:;
    /* $A2AB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_A2AE:;
    /* $A2AE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2D2; }
label_A2B0:;
    /* $A2B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0540); FLAG_NZ(g_cpu.A);
label_A2B3:;
    /* $A2B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2D2; }
label_A2B5:;
    /* $A2B5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xBB24, 4);
label_A2B8:;
    /* $A2B8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xBB44, 4);
label_A2BB:;
    /* $A2BB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0542); FLAG_NZ(g_cpu.A);
label_A2BE:;
    /* $A2BE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2E4; }
label_A2C0:;
    /* $A2C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_A2C2:;
    /* $A2C2: 84 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.Y);
label_A2C4:;
    /* $A2C4: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$8148 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8148_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_A2CA:;
    /* $A2CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A2CC:;
    /* $A2CC: 8D */ maybe_trigger_vblank(4); nes_write(0x0557, g_cpu.A);
label_A2CF:;
    /* $A2CF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA30A, 4); return;
label_A2D2:;
    /* $A2D2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0582); FLAG_NZ(g_cpu.A);
label_A2D5:;
    /* $A2D5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2E4; }
label_A2D7:;
    /* $A2D7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0584); FLAG_NZ(g_cpu.A);
label_A2DA:;
    /* $A2DA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2E4; }
label_A2DC:;
    /* $A2DC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x056D); FLAG_NZ(g_cpu.A);
label_A2DF:;
    /* $A2DF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2E4; }
label_A2E1:;
    /* $A2E1: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0540; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2E4:;
    /* $A2E4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x052D); FLAG_NZ(g_cpu.A);
label_A2E7:;
    /* $A2E7: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $F573: 16 entries (bank=4) */
switch(g_cpu.A) {
  case 0: nes_write(0x0000, 0x0A); nes_write(0x0001, 0xA3); g_cpu.A = 0x0A; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_A30A_b4(); return;
  case 1: nes_write(0x0000, 0x0B); nes_write(0x0001, 0xA3); g_cpu.A = 0x0B; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_A30B_b4(); return;
  case 2: nes_write(0x0000, 0x0C); nes_write(0x0001, 0xA3); g_cpu.A = 0x0C; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_A30C_b4(); return;
  case 3: nes_write(0x0000, 0x10); nes_write(0x0001, 0xA3); g_cpu.A = 0x10; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_A310_b4(); return;
  case 4: nes_write(0x0000, 0x14); nes_write(0x0001, 0xA3); g_cpu.A = 0x14; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_A314_b4(); return;
  case 5: nes_write(0x0000, 0x18); nes_write(0x0001, 0xA3); g_cpu.A = 0x18; g_cpu.Y = 0x0C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_A318_b4(); return;
  case 6: nes_write(0x0000, 0xFB); nes_write(0x0001, 0xA3); g_cpu.A = 0xFB; g_cpu.Y = 0x0E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A3FB_b4(); return;
  case 7: nes_write(0x0000, 0x07); nes_write(0x0001, 0xA4); g_cpu.Y = 0x10; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_A407_b4(); return;
  case 8: nes_write(0x0000, 0x34); nes_write(0x0001, 0xA4); g_cpu.A = 0x34; g_cpu.Y = 0x12; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_A434_b4(); return;
  case 9: nes_write(0x0000, 0x38); nes_write(0x0001, 0xA4); g_cpu.A = 0x38; g_cpu.Y = 0x14; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_A438_b4(); return;
  case 10: nes_write(0x0000, 0x39); nes_write(0x0001, 0xA4); g_cpu.A = 0x39; g_cpu.Y = 0x16; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_A439_b4(); return;
  case 11: nes_write(0x0000, 0x3A); nes_write(0x0001, 0xA4); g_cpu.A = 0x3A; g_cpu.Y = 0x18; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_A43A_b4(); return;
  case 12: nes_write(0x0000, 0x3B); nes_write(0x0001, 0xA4); g_cpu.A = 0x3B; g_cpu.Y = 0x1A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_A43B_b4(); return;
  case 13: nes_write(0x0000, 0x3C); nes_write(0x0001, 0xA4); g_cpu.A = 0x3C; g_cpu.Y = 0x1C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_A43C_b4(); return;
  case 14: nes_write(0x0000, 0x3D); nes_write(0x0001, 0xA4); g_cpu.A = 0x3D; g_cpu.Y = 0x1E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_A43D_b4(); return;
  case 15: nes_write(0x0000, 0x44); nes_write(0x0001, 0xA4); g_cpu.A = 0x44; g_cpu.Y = 0x20; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_A444_b4(); return;
  default: nes_log_inline_miss(0xA2E7, g_cpu.A); return;
}
label_A30A:;
    /* $A30A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_852C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_852C_b4");
#endif
label_852C:;
    /* $852C: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x6081 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_852F:;
    /* $852F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD1; FLAG_NZ(g_cpu.A);
label_8531:;
    /* $8531: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8533:;
    /* $8533: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8A; FLAG_NZ(g_cpu.A);
label_8535:;
    /* $8535: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_8537:;
    /* $8537: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8539:;
    /* $8539: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_853B:;
    /* $853B: 99 */ maybe_trigger_vblank(5); nes_write((0x0020 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_853E:;
    /* $853E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_853F:;
    /* $853F: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_8541:;
    /* $8541: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8539;
    }
label_8543:;
    /* $8543: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9E4C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9E4C_b4");
#endif
label_9E4C:;
    /* $9E4C: 85 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.A);
label_9E4E:;
    /* $9E4E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_9E50:;
    /* $9E50: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9E52:;
    /* $9E52: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0276 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9E55:;
    /* $9E55: 99 */ maybe_trigger_vblank(5); nes_write((0x0280 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9E58:;
    /* $9E58: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0277 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9E5B:;
    /* $9E5B: 99 */ maybe_trigger_vblank(5); nes_write((0x0281 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9E5E:;
    /* $9E5E: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9E5F:;
    /* $9E5F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9E60:;
    /* $9E60: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9E62:;
    /* $9E62: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9E63:;
    /* $9E63: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9E65:;
    /* $9E65: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9E52;
    }
label_9E67:;
    /* $9E67: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x19); FLAG_NZ(g_cpu.A);
label_9E69:;
    /* $9E69: 99 */ maybe_trigger_vblank(5); nes_write((0x0280 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9E6C:;
    /* $9E6C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_9E6E:;
    /* $9E6E: 99 */ maybe_trigger_vblank(5); nes_write((0x0281 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9E71:;
    /* $9E71: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_850C_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_850C_b4");
#endif
label_850C:;
    /* $850C: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_850E:;
    /* $850E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1E); FLAG_NZ(g_cpu.A);
label_8510:;
    /* $8510: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x20 + g_cpu.X) & 0xFF), g_cpu.A);
label_8512:;
    /* $8512: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8514:;
    /* $8514: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x21); FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x60 + g_cpu.X) & 0xFF), g_cpu.A);
label_8518:;
    /* $8518: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0497); FLAG_NZ(g_cpu.A);
label_851B:;
    /* $851B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8523; }
label_851D:;
    /* $851D: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0497; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8520:;
    /* $8520: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x852E, 4); return;
label_8523:;
    /* $8523: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_8525:;
    /* $8525: 8D */ maybe_trigger_vblank(4); nes_write(0x0497, g_cpu.A);
label_8528:;
    /* $8528: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$811E */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_811E_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_852E:;
    /* $852E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A001_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A001_b4");
#endif
label_A001:;
    /* $A001: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A002:;
    /* $A002: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A013; }
label_A004:;
    /* $A004: EE */ maybe_trigger_vblank(6); { uint16_t a=0x054B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A007:;
    /* $A007: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0547; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A00A:;
    /* $A00A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_A00C:;
    /* $A00C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A00F:;
    /* $A00F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A010:;
    /* $A010: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA01C, 4); return;
label_A013:;
    /* $A013: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0547; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A016:;
    /* $A016: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB6; FLAG_NZ(g_cpu.A);
label_A018:;
    /* $A018: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A01B:;
    /* $A01B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A01C:;
    /* $A01C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A01E:;
    /* $A01E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A021:;
    /* $A021: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A024:;
    /* $A024: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0545; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A027:;
    /* $A027: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0545); FLAG_NZ(g_cpu.A);
label_A02A:;
    /* $A02A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_A02C:;
    /* $A02C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A03B; }
label_A02E:;
    /* $A02E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A030:;
    /* $A030: 8D */ maybe_trigger_vblank(4); nes_write(0x0545, g_cpu.A);
label_A033:;
    /* $A033: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: 8D */ maybe_trigger_vblank(4); nes_write(0x0543, g_cpu.A);
label_A038:;
    /* $A038: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA044, 4); return;
label_A03B:;
    /* $A03B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_A03D:;
    /* $A03D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A044; }
label_A03F:;
    /* $A03F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A041:;
    /* $A041: 8D */ maybe_trigger_vblank(4); nes_write(0x0572, g_cpu.A);
label_A044:;
    /* $A044: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A045:;
    /* $A045: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A046:;
    /* $A046: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9A9_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9A9_b4");
#endif
label_A9A9:;
    /* $A9A9: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A9AB:;
    /* $A9AB: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x13); FLAG_NZ(g_cpu.Y);
label_A9AD:;
    /* $A9AD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9B0:;
    /* $A9B0: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_A9B2:;
    /* $A9B2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B4:;
    /* $A9B4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9C5; }
label_A9B6:;
    /* $A9B6: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A9B7:;
    /* $A9B7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B8:;
    /* $A9B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A9BA:;
    /* $A9BA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BB:;
    /* $A9BB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9C0:;
    /* $A9C0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9C2:;
    /* $A9C2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9B2, 4); return;
label_A9C5:;
    /* $A9C5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A9C7:;
    /* $A9C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E2; }
label_A9C9:;
    /* $A9C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9CB:;
    /* $A9CB: 8D */ maybe_trigger_vblank(4); nes_write(0x0559, g_cpu.A);
label_A9CE:;
    /* $A9CE: 8D */ maybe_trigger_vblank(4); nes_write(0x055A, g_cpu.A);
label_A9D1:;
    /* $A9D1: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0577; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D4:;
    /* $A9D4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_A9D7:;
    /* $A9D7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9D9:;
    /* $A9D9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E8; }
label_A9DB:;
    /* $A9DB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9DD:;
    /* $A9DD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E8; }
label_A9DF:;
    /* $A9DF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9E5, 4); return;
label_A9E2:;
    /* $A9E2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x053E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9E5:;
    /* $A9E5: EE */ maybe_trigger_vblank(6); { uint16_t a=0x05AD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9E8:;
    /* $A9E8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9EA:;
    /* $A9EA: 8D */ maybe_trigger_vblank(4); nes_write(0x056D, g_cpu.A);
label_A9ED:;
    /* $A9ED: EE */ maybe_trigger_vblank(6); { uint16_t a=0x051B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9F0:;
    /* $A9F0: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x051B); FLAG_NZ(g_cpu.Y);
label_A9F3:;
    /* $A9F3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A9F5:;
    /* $A9F5: 99 */ maybe_trigger_vblank(5); nes_write((0x051B + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A9F8:;
    /* $A9F8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FA:;
    /* $A9FA: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FC:;
    /* $A9FC: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FE:;
    /* $A9FE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA00:;
    /* $AA00: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_AA02:;
    /* $AA02: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA03:;
    /* $AA03: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA06:;
    /* $AA06: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA09:;
    /* $AA09: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_AA0B:;
    /* $AA0B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA10; }
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9A3, 4); return;
label_AA10:;
    /* $AA10: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x051B); FLAG_NZ(g_cpu.A);
label_AA13:;
    /* $AA13: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA51; }
label_AA15:;
    /* $AA15: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0584); FLAG_NZ(g_cpu.A);
label_AA18:;
    /* $AA18: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA1A:;
    /* $AA1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_AA1D:;
    /* $AA1D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA26; }
label_AA1F:;
    /* $AA1F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_AA22:;
    /* $AA22: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_AA24:;
    /* $AA24: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA26:;
    /* $AA26: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058D); FLAG_NZ(g_cpu.A);
label_AA29:;
    /* $AA29: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA2B:;
    /* $AA2B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA2D:;
    /* $AA2D: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x058D, g_cpu.A);
label_AA33:;
    /* $AA33: 8D */ maybe_trigger_vblank(4); nes_write(0x0589, g_cpu.A);
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x058A, g_cpu.A);
label_AA39:;
    /* $AA39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_AA3B:;
    /* $AA3B: 8D */ maybe_trigger_vblank(4); nes_write(0x05A3, g_cpu.A);
label_AA3E:;
    /* $AA3E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB48A, 4);
label_AA41:;
    /* $AA41: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_AA44:;
    /* $AA44: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA51; }
label_AA46:;
    /* $AA46: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_AA49:;
    /* $AA49: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_AA4B:;
    /* $AA4B: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_AA4E:;
    /* $AA4E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAA52, 4);
label_AA51:;
    /* $AA51: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8507_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8507_b4");
#endif
label_8507:;
    /* $8507: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x88); FLAG_NZ(g_cpu.A);
label_8509:;
    /* $8509: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0502), 4); return; }
label_850B:;
    /* $850B: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$811E */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_811E_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8511:;
    /* $8511: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$8121 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8121_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8517:;
    /* $8517: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A99F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A99F_b4");
#endif
label_A99F:;
    /* $A99F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9A1:;
    /* $A9A1: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A9A3:;
    /* $A9A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A9A5:;
    /* $A9A5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A9A6:;
    /* $A9A6: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0537); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9A9:;
    /* $A9A9: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A9AB:;
    /* $A9AB: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x13); FLAG_NZ(g_cpu.Y);
label_A9AD:;
    /* $A9AD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9B0:;
    /* $A9B0: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_A9B2:;
    /* $A9B2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B4:;
    /* $A9B4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9C5; }
label_A9B6:;
    /* $A9B6: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A9B7:;
    /* $A9B7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B8:;
    /* $A9B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A9BA:;
    /* $A9BA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BB:;
    /* $A9BB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9C0:;
    /* $A9C0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9C2:;
    /* $A9C2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9B2, 4); return;
label_A9C5:;
    /* $A9C5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A9C7:;
    /* $A9C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E2; }
label_A9C9:;
    /* $A9C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9CB:;
    /* $A9CB: 8D */ maybe_trigger_vblank(4); nes_write(0x0559, g_cpu.A);
label_A9CE:;
    /* $A9CE: 8D */ maybe_trigger_vblank(4); nes_write(0x055A, g_cpu.A);
label_A9D1:;
    /* $A9D1: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0577; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D4:;
    /* $A9D4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_A9D7:;
    /* $A9D7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9D9:;
    /* $A9D9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E8; }
label_A9DB:;
    /* $A9DB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9DD:;
    /* $A9DD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E8; }
label_A9DF:;
    /* $A9DF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9E5, 4); return;
label_A9E2:;
    /* $A9E2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x053E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9E5:;
    /* $A9E5: EE */ maybe_trigger_vblank(6); { uint16_t a=0x05AD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9E8:;
    /* $A9E8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9EA:;
    /* $A9EA: 8D */ maybe_trigger_vblank(4); nes_write(0x056D, g_cpu.A);
label_A9ED:;
    /* $A9ED: EE */ maybe_trigger_vblank(6); { uint16_t a=0x051B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9F0:;
    /* $A9F0: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x051B); FLAG_NZ(g_cpu.Y);
label_A9F3:;
    /* $A9F3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A9F5:;
    /* $A9F5: 99 */ maybe_trigger_vblank(5); nes_write((0x051B + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A9F8:;
    /* $A9F8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FA:;
    /* $A9FA: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FC:;
    /* $A9FC: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FE:;
    /* $A9FE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA00:;
    /* $AA00: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_AA02:;
    /* $AA02: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA03:;
    /* $AA03: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA06:;
    /* $AA06: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA09:;
    /* $AA09: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_AA0B:;
    /* $AA0B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA10; }
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9A3, 4); return;
label_AA10:;
    /* $AA10: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x051B); FLAG_NZ(g_cpu.A);
label_AA13:;
    /* $AA13: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA51; }
label_AA15:;
    /* $AA15: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0584); FLAG_NZ(g_cpu.A);
label_AA18:;
    /* $AA18: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA1A:;
    /* $AA1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_AA1D:;
    /* $AA1D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA26; }
label_AA1F:;
    /* $AA1F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_AA22:;
    /* $AA22: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_AA24:;
    /* $AA24: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA26:;
    /* $AA26: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058D); FLAG_NZ(g_cpu.A);
label_AA29:;
    /* $AA29: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA2B:;
    /* $AA2B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA2D:;
    /* $AA2D: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x058D, g_cpu.A);
label_AA33:;
    /* $AA33: 8D */ maybe_trigger_vblank(4); nes_write(0x0589, g_cpu.A);
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x058A, g_cpu.A);
label_AA39:;
    /* $AA39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_AA3B:;
    /* $AA3B: 8D */ maybe_trigger_vblank(4); nes_write(0x05A3, g_cpu.A);
label_AA3E:;
    /* $AA3E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB48A, 4);
label_AA41:;
    /* $AA41: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_AA44:;
    /* $AA44: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA51; }
label_AA46:;
    /* $AA46: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_AA49:;
    /* $AA49: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_AA4B:;
    /* $AA4B: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_AA4E:;
    /* $AA4E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAA52, 4);
label_AA51:;
    /* $AA51: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_851E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_851E_b4");
#endif
label_851E:;
    /* $851E: 97 */ maybe_trigger_vblank(4); nes_write((0x04 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8520:;
    /* $8520: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x852E, 4); return;
}

void func_A998_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A998_b4");
#endif
label_A998:;
    /* $A998: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A999:;
    /* $A999: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A99B:;
    /* $A99B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A99D:;
    /* $A99D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A99F:;
    /* $A99F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9A1:;
    /* $A9A1: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A9A3:;
    /* $A9A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A9A5:;
    /* $A9A5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A9A6:;
    /* $A9A6: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0537); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9A9:;
    /* $A9A9: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A9AB:;
    /* $A9AB: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x13); FLAG_NZ(g_cpu.Y);
label_A9AD:;
    /* $A9AD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9B0:;
    /* $A9B0: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_A9B2:;
    /* $A9B2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B4:;
    /* $A9B4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9C5; }
label_A9B6:;
    /* $A9B6: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A9B7:;
    /* $A9B7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B8:;
    /* $A9B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A9BA:;
    /* $A9BA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BB:;
    /* $A9BB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9C0:;
    /* $A9C0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9C2:;
    /* $A9C2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9B2, 4); return;
label_A9C5:;
    /* $A9C5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A9C7:;
    /* $A9C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E2; }
label_A9C9:;
    /* $A9C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9CB:;
    /* $A9CB: 8D */ maybe_trigger_vblank(4); nes_write(0x0559, g_cpu.A);
label_A9CE:;
    /* $A9CE: 8D */ maybe_trigger_vblank(4); nes_write(0x055A, g_cpu.A);
label_A9D1:;
    /* $A9D1: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0577; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D4:;
    /* $A9D4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_A9D7:;
    /* $A9D7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9D9:;
    /* $A9D9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E8; }
label_A9DB:;
    /* $A9DB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9DD:;
    /* $A9DD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E8; }
label_A9DF:;
    /* $A9DF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9E5, 4); return;
label_A9E2:;
    /* $A9E2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x053E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9E5:;
    /* $A9E5: EE */ maybe_trigger_vblank(6); { uint16_t a=0x05AD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9E8:;
    /* $A9E8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9EA:;
    /* $A9EA: 8D */ maybe_trigger_vblank(4); nes_write(0x056D, g_cpu.A);
label_A9ED:;
    /* $A9ED: EE */ maybe_trigger_vblank(6); { uint16_t a=0x051B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9F0:;
    /* $A9F0: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x051B); FLAG_NZ(g_cpu.Y);
label_A9F3:;
    /* $A9F3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A9F5:;
    /* $A9F5: 99 */ maybe_trigger_vblank(5); nes_write((0x051B + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A9F8:;
    /* $A9F8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FA:;
    /* $A9FA: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FC:;
    /* $A9FC: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FE:;
    /* $A9FE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA00:;
    /* $AA00: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_AA02:;
    /* $AA02: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA03:;
    /* $AA03: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA06:;
    /* $AA06: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA09:;
    /* $AA09: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_AA0B:;
    /* $AA0B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA10; }
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9A3, 4); return;
label_AA10:;
    /* $AA10: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x051B); FLAG_NZ(g_cpu.A);
label_AA13:;
    /* $AA13: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA51; }
label_AA15:;
    /* $AA15: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0584); FLAG_NZ(g_cpu.A);
label_AA18:;
    /* $AA18: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA1A:;
    /* $AA1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_AA1D:;
    /* $AA1D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA26; }
label_AA1F:;
    /* $AA1F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_AA22:;
    /* $AA22: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_AA24:;
    /* $AA24: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA26:;
    /* $AA26: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058D); FLAG_NZ(g_cpu.A);
label_AA29:;
    /* $AA29: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA2B:;
    /* $AA2B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA2D:;
    /* $AA2D: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x058D, g_cpu.A);
label_AA33:;
    /* $AA33: 8D */ maybe_trigger_vblank(4); nes_write(0x0589, g_cpu.A);
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x058A, g_cpu.A);
label_AA39:;
    /* $AA39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_AA3B:;
    /* $AA3B: 8D */ maybe_trigger_vblank(4); nes_write(0x05A3, g_cpu.A);
label_AA3E:;
    /* $AA3E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB48A, 4);
label_AA41:;
    /* $AA41: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_AA44:;
    /* $AA44: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA51; }
label_AA46:;
    /* $AA46: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_AA49:;
    /* $AA49: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_AA4B:;
    /* $AA4B: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_AA4E:;
    /* $AA4E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAA52, 4);
label_AA51:;
    /* $AA51: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9B4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B4_b4");
#endif
label_A9B4:;
    /* $A9B4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9C5; }
label_A9B6:;
    /* $A9B6: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A9B7:;
    /* $A9B7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B8:;
    /* $A9B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A9BA:;
    /* $A9BA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BB:;
    /* $A9BB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A9C0:;
    /* $A9C0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9C2:;
    /* $A9C2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9B2, 4); return;
label_A9C5:;
    /* $A9C5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A9C7:;
    /* $A9C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E2; }
label_A9C9:;
    /* $A9C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9CB:;
    /* $A9CB: 8D */ maybe_trigger_vblank(4); nes_write(0x0559, g_cpu.A);
label_A9CE:;
    /* $A9CE: 8D */ maybe_trigger_vblank(4); nes_write(0x055A, g_cpu.A);
label_A9D1:;
    /* $A9D1: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0577; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D4:;
    /* $A9D4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_A9D7:;
    /* $A9D7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9D9:;
    /* $A9D9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E8; }
label_A9DB:;
    /* $A9DB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9DD:;
    /* $A9DD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E8; }
label_A9DF:;
    /* $A9DF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9E5, 4); return;
label_A9E2:;
    /* $A9E2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x053E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9E5:;
    /* $A9E5: EE */ maybe_trigger_vblank(6); { uint16_t a=0x05AD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9E8:;
    /* $A9E8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9EA:;
    /* $A9EA: 8D */ maybe_trigger_vblank(4); nes_write(0x056D, g_cpu.A);
label_A9ED:;
    /* $A9ED: EE */ maybe_trigger_vblank(6); { uint16_t a=0x051B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9F0:;
    /* $A9F0: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x051B); FLAG_NZ(g_cpu.Y);
label_A9F3:;
    /* $A9F3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A9F5:;
    /* $A9F5: 99 */ maybe_trigger_vblank(5); nes_write((0x051B + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A9F8:;
    /* $A9F8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FA:;
    /* $A9FA: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FC:;
    /* $A9FC: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FE:;
    /* $A9FE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA00:;
    /* $AA00: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_AA02:;
    /* $AA02: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA03:;
    /* $AA03: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA06:;
    /* $AA06: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA09:;
    /* $AA09: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_AA0B:;
    /* $AA0B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA10; }
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9A3, 4); return;
label_AA10:;
    /* $AA10: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x051B); FLAG_NZ(g_cpu.A);
label_AA13:;
    /* $AA13: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA51; }
label_AA15:;
    /* $AA15: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0584); FLAG_NZ(g_cpu.A);
label_AA18:;
    /* $AA18: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA1A:;
    /* $AA1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_AA1D:;
    /* $AA1D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA26; }
label_AA1F:;
    /* $AA1F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_AA22:;
    /* $AA22: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_AA24:;
    /* $AA24: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA26:;
    /* $AA26: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058D); FLAG_NZ(g_cpu.A);
label_AA29:;
    /* $AA29: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA2B:;
    /* $AA2B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA2D:;
    /* $AA2D: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x058D, g_cpu.A);
label_AA33:;
    /* $AA33: 8D */ maybe_trigger_vblank(4); nes_write(0x0589, g_cpu.A);
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x058A, g_cpu.A);
label_AA39:;
    /* $AA39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_AA3B:;
    /* $AA3B: 8D */ maybe_trigger_vblank(4); nes_write(0x05A3, g_cpu.A);
label_AA3E:;
    /* $AA3E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB48A, 4);
label_AA41:;
    /* $AA41: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_AA44:;
    /* $AA44: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA51; }
label_AA46:;
    /* $AA46: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_AA49:;
    /* $AA49: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_AA4B:;
    /* $AA4B: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_AA4E:;
    /* $AA4E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAA52, 4);
label_AA51:;
    /* $AA51: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A92D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A92D_b4");
#endif
label_A92D:;
    /* $A92D: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xA5 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A92F:;
    /* $A92F: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A931:;
    /* $A931: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x90; FLAG_NZ(g_cpu.A);
label_A933:;
    /* $A933: 9D */ maybe_trigger_vblank(5); nes_write((0x15AD + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A936:;
    /* $A936: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_A938:;
    /* $A938: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x84AD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A93B:;
    /* $A93B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_A93D:;
    /* $A93D: 27 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A93F:;
    /* $A93F: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A941:;
    /* $A941: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A94A; }
label_A943:;
    /* $A943: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_A946:;
    /* $A946: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A948:;
    /* $A948: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A965; }
label_A94A:;
    /* $A94A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058D); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A965; }
label_A94F:;
    /* $A94F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_A954:;
    /* $A954: 8D */ maybe_trigger_vblank(4); nes_write(0x058D, g_cpu.A);
label_A957:;
    /* $A957: 8D */ maybe_trigger_vblank(4); nes_write(0x0589, g_cpu.A);
label_A95A:;
    /* $A95A: 8D */ maybe_trigger_vblank(4); nes_write(0x058A, g_cpu.A);
label_A95D:;
    /* $A95D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A95F:;
    /* $A95F: 8D */ maybe_trigger_vblank(4); nes_write(0x05A3, g_cpu.A);
label_A962:;
    /* $A962: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB48A, 4);
label_A965:;
    /* $A965: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A975; }
label_A96A:;
    /* $A96A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_A96D:;
    /* $A96D: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_A96F:;
    /* $A96F: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAA52, 4);
label_A975:;
    /* $A975: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9ED_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9ED_b4");
#endif
label_A9ED:;
    /* $A9ED: EE */ maybe_trigger_vblank(6); { uint16_t a=0x051B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9F0:;
    /* $A9F0: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x051B); FLAG_NZ(g_cpu.Y);
label_A9F3:;
    /* $A9F3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A9F5:;
    /* $A9F5: 99 */ maybe_trigger_vblank(5); nes_write((0x051B + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A9F8:;
    /* $A9F8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FA:;
    /* $A9FA: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FC:;
    /* $A9FC: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9FE:;
    /* $A9FE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA00:;
    /* $AA00: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_AA02:;
    /* $AA02: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA03:;
    /* $AA03: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA06:;
    /* $AA06: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA09:;
    /* $AA09: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_AA0B:;
    /* $AA0B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AA10; }
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9A3, 4); return;
label_AA10:;
    /* $AA10: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x051B); FLAG_NZ(g_cpu.A);
label_AA13:;
    /* $AA13: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA51; }
label_AA15:;
    /* $AA15: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0584); FLAG_NZ(g_cpu.A);
label_AA18:;
    /* $AA18: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA1A:;
    /* $AA1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_AA1D:;
    /* $AA1D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA26; }
label_AA1F:;
    /* $AA1F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_AA22:;
    /* $AA22: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_AA24:;
    /* $AA24: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA26:;
    /* $AA26: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058D); FLAG_NZ(g_cpu.A);
label_AA29:;
    /* $AA29: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA41; }
label_AA2B:;
    /* $AA2B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA2D:;
    /* $AA2D: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x058D, g_cpu.A);
label_AA33:;
    /* $AA33: 8D */ maybe_trigger_vblank(4); nes_write(0x0589, g_cpu.A);
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x058A, g_cpu.A);
label_AA39:;
    /* $AA39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_AA3B:;
    /* $AA3B: 8D */ maybe_trigger_vblank(4); nes_write(0x05A3, g_cpu.A);
label_AA3E:;
    /* $AA3E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB48A, 4);
label_AA41:;
    /* $AA41: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_AA44:;
    /* $AA44: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA51; }
label_AA46:;
    /* $AA46: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_AA49:;
    /* $AA49: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_AA4B:;
    /* $AA4B: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_AA4E:;
    /* $AA4E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAA52, 4);
label_AA51:;
    /* $AA51: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A800_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A800_b4");
#endif
label_A800:;
    /* $A800: 8D */ maybe_trigger_vblank(4); nes_write(0x03E3, g_cpu.A);
label_A803:;
    /* $A803: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$8139 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8139_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_A809:;
    /* $A809: CE */ maybe_trigger_vblank(6); { uint16_t a=0x042A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A80C:;
    /* $A80C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042A); FLAG_NZ(g_cpu.A);
label_A80F:;
    /* $A80F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A810:;
    /* $A810: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A818; }
label_A812:;
    /* $A812: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$811B */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_811B_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_A818:;
    /* $A818: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8800_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8800_b4");
#endif
label_8800:;
    /* $8800: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8802:;
    /* $8802: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8804:;
    /* $8804: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x88); FLAG_NZ(g_cpu.X);
label_8806:;
    /* $8806: 86 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.X);
label_8808:;
    /* $8808: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8809:;
    /* $8809: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_880A:;
    /* $880A: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_880C:;
    /* $880C: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_880E:;
    /* $880E: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_880F:;
    /* $880F: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_8811:;
    /* $8811: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8812:;
    /* $8812: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8814:;
    /* $8814: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB7 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_8816:;
    /* $8816: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB7 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_8818:;
    /* $8818: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB7 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_881A:;
    /* $881A: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB7 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_881C:;
    /* $881C: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xC3 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_881E:;
    /* $881E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8820:;
    /* $8820: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8822:;
    /* $8822: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8824:;
    /* $8824: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8826:;
    /* $8826: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB7 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_8828:;
    /* $8828: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB7 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_882A:;
    /* $882A: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB7 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_882C:;
    /* $882C: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB7 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_882E:;
    /* $882E: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xC7 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_8830:;
    /* $8830: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8831:;
    /* $8831: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8832:;
    /* $8832: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8834:;
    /* $8834: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8836:;
    /* $8836: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8838:;
    /* $8838: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_883A:;
    /* $883A: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_883C:;
    /* $883C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD3); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_883E:;
    /* $883E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8840:;
    /* $8840: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8842:;
    /* $8842: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8844:;
    /* $8844: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xC5 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8846:;
    /* $8846: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8848:;
    /* $8848: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_884A:;
    /* $884A: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_884C:;
    /* $884C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_884E:;
    /* $884E: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD7); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8850:;
    /* $8850: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8851:;
    /* $8851: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8852:;
    /* $8852: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x5B + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8854:;
    /* $8854: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8856:;
    /* $8856: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8858:;
    /* $8858: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_885A:;
    /* $885A: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_885C:;
    /* $885C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0C01); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_885F:;
    /* $885F: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0C0E); FLAG_NZ(g_cpu.A);
label_8862:;
    /* $8862: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x010E); FLAG_NZ(g_cpu.A);
label_8865:;
    /* $8865: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x3131 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8868:;
    /* $8868: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_886A:;
    /* $886A: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_886C:;
    /* $886C: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_886E:;
    /* $886E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0274); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8871:;
    /* $8871: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8872:;
    /* $8872: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x6B + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8874:;
    /* $8874: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8876:;
    /* $8876: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8878:;
    /* $8878: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_887A:;
    /* $887A: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_887C:;
    /* $887C: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x7E01); FLAG_NZ(g_cpu.A);
label_887F:;
    /* $887F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7E7F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8882:;
    /* $8882: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x017F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8885:;
    /* $8885: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x41; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_8887:;
    /* $8887: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8889:;
    /* $8889: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_888B:;
    /* $888B: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_888D:;
    /* $888D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x2D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_888F:;
    /* $888F: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8891:;
    /* $8891: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8892:;
    /* $8892: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8894:;
    /* $8894: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8896:;
    /* $8896: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8898:;
    /* $8898: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_889A:;
    /* $889A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_889C:;
    /* $889C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_889E:;
    /* $889E: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7F0F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_88A1:;
    /* $88A1: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7F0F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_88A4:;
    /* $88A4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_88A6:;
    /* $88A6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_88A8:;
    /* $88A8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_88AA:;
    /* $88AA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_88AC:;
    /* $88AC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_88AE:;
    /* $88AE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x74 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_88B0:;
    /* $88B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_88B1:;
    /* $88B1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_88B2:;
    /* $88B2: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0505 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88B5:;
    /* $88B5: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_88B7:;
    /* $88B7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_88B9:;
    /* $88B9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_88BB:;
    /* $88BB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_88BD:;
    /* $88BD: 7A */ maybe_trigger_vblank(2); /* NOP */
label_88BE:;
    /* $88BE: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7F0F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_88C1:;
    /* $88C1: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7F0F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_88C4:;
    /* $88C4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_88C6:;
    /* $88C6: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_88C8:;
    /* $88C8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_88CA:;
    /* $88CA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_88CC:;
    /* $88CC: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_88CE:;
    /* $88CE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_88D0:;
    /* $88D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_88D1:;
    /* $88D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_88D2:;
    /* $88D2: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_88D4:;
    /* $88D4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x88D4); return;
}

void func_B11B_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B11B_b4");
#endif
label_B11B:;
    /* $B11B: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1C7, 4);
label_B11E:;
    /* $B11E: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0565); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B121:;
    /* $B121: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B11B;
    }
label_B123:;
    /* $B123: 8D */ maybe_trigger_vblank(4); nes_write(0x0566, g_cpu.A);
label_B126:;
    /* $B126: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B127:;
    /* $B127: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04AD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B12A:;
    /* $B12A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B12B:;
    /* $B12B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B12E:;
    /* $B12E: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B130:;
    /* $B130: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B133:;
    /* $B133: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_B135:;
    /* $B135: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x020A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B138:;
    /* $B138: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_B13A:;
    /* $B13A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x020B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B13D:;
    /* $B13D: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_B13F:;
    /* $B13F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0565); FLAG_NZ(g_cpu.X);
label_B142:;
    /* $B142: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04AD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B145:;
    /* $B145: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B146:;
    /* $B146: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B149:;
    /* $B149: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B14C:;
    /* $B14C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B14F:;
    /* $B14F: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B152:;
    /* $B152: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x020A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B155:;
    /* $B155: 99 */ maybe_trigger_vblank(5); nes_write((0x020A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B158:;
    /* $B158: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x020B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B15B:;
    /* $B15B: 99 */ maybe_trigger_vblank(5); nes_write((0x020B + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B15E:;
    /* $B15E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x15); FLAG_NZ(g_cpu.A);
label_B160:;
    /* $B160: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B163:;
    /* $B163: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_B165:;
    /* $B165: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B168:;
    /* $B168: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_B16A:;
    /* $B16A: 9D */ maybe_trigger_vblank(5); nes_write((0x020A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B16D:;
    /* $B16D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x18); FLAG_NZ(g_cpu.A);
label_B16F:;
    /* $B16F: 9D */ maybe_trigger_vblank(5); nes_write((0x020B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B172:;
    /* $B172: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0563); FLAG_NZ(g_cpu.A);
label_B175:;
    /* $B175: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B181; }
label_B177:;
    /* $B177: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0565); FLAG_NZ(g_cpu.Y);
label_B17A:;
    /* $B17A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1AB, 4);
label_B17D:;
    /* $B17D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xFF; g_cpu.C=(g_cpu.Y>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_B17F:;
    /* $B17F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B18C; }
label_B181:;
    /* $B181: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0565); FLAG_NZ(g_cpu.Y);
label_B184:;
    /* $B184: 84 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.Y);
label_B186:;
    /* $B186: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$814E */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_814E_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_B18C:;
    /* $B18C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0563); FLAG_NZ(g_cpu.A);
label_B18F:;
    /* $B18F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B19B; }
label_B191:;
    /* $B191: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0566); FLAG_NZ(g_cpu.Y);
label_B194:;
    /* $B194: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1AB, 4);
label_B197:;
    /* $B197: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xFF; g_cpu.C=(g_cpu.Y>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_B199:;
    /* $B199: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1A6; }
label_B19B:;
    /* $B19B: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0566); FLAG_NZ(g_cpu.Y);
label_B19E:;
    /* $B19E: 84 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.Y);
label_B1A0:;
    /* $B1A0: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$814E */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_814E_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_B1A6:;
    /* $B1A6: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B1A7:;
    /* $B1A7: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B1A8:;
    /* $B1A8: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B1A9:;
    /* $B1A9: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B1AA:;
    /* $B1AA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_978D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_978D_b4");
#endif
label_978D:;
    /* $978D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_978E:;
    /* $978E: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9790:;
    /* $9790: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0281 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9793:;
    /* $9793: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_9795:;
    /* $9795: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x028A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9798:;
    /* $9798: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_979A:;
    /* $979A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x028B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_979D:;
    /* $979D: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_979F:;
    /* $979F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0565); FLAG_NZ(g_cpu.X);
label_97A2:;
    /* $97A2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04C7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97A5:;
    /* $97A5: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_97A6:;
    /* $97A6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97A9:;
    /* $97A9: 99 */ maybe_trigger_vblank(5); nes_write((0x0280 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_97AC:;
    /* $97AC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0281 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97AF:;
    /* $97AF: 99 */ maybe_trigger_vblank(5); nes_write((0x0281 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_97B2:;
    /* $97B2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x028A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97B5:;
    /* $97B5: 99 */ maybe_trigger_vblank(5); nes_write((0x028A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_97B8:;
    /* $97B8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x028B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97BB:;
    /* $97BB: 99 */ maybe_trigger_vblank(5); nes_write((0x028B + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_97BE:;
    /* $97BE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x15); FLAG_NZ(g_cpu.A);
label_97C0:;
    /* $97C0: 9D */ maybe_trigger_vblank(5); nes_write((0x0280 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_97C3:;
    /* $97C3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_97C5:;
    /* $97C5: 9D */ maybe_trigger_vblank(5); nes_write((0x0281 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_97C8:;
    /* $97C8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_97CA:;
    /* $97CA: 9D */ maybe_trigger_vblank(5); nes_write((0x028A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_97CD:;
    /* $97CD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x18); FLAG_NZ(g_cpu.A);
label_97CF:;
    /* $97CF: 9D */ maybe_trigger_vblank(5); nes_write((0x028B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_97D2:;
    /* $97D2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0564); FLAG_NZ(g_cpu.A);
label_97D5:;
    /* $97D5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_97E1; }
label_97D7:;
    /* $97D7: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0565); FLAG_NZ(g_cpu.Y);
label_97DA:;
    /* $97DA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1AB, 4);
label_97DD:;
    /* $97DD: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xFF; g_cpu.C=(g_cpu.Y>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_97DF:;
    /* $97DF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_97EC; }
label_97E1:;
    /* $97E1: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0565); FLAG_NZ(g_cpu.Y);
label_97E4:;
    /* $97E4: 84 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.Y);
label_97E6:;
    /* $97E6: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$8151 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8151_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_97EC:;
    /* $97EC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0564); FLAG_NZ(g_cpu.A);
label_97EF:;
    /* $97EF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_97FB; }
label_97F1:;
    /* $97F1: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0566); FLAG_NZ(g_cpu.Y);
label_97F4:;
    /* $97F4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1AB, 4);
label_97F7:;
    /* $97F7: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xFF; g_cpu.C=(g_cpu.Y>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_97F9:;
    /* $97F9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9806; }
label_97FB:;
    /* $97FB: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0566); FLAG_NZ(g_cpu.Y);
label_97FE:;
    /* $97FE: 84 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.Y);
label_9800:;
    /* $9800: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=5 addr=$8151 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x05; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8151_b5();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9806:;
    /* $9806: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9807:;
    /* $9807: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9808:;
    /* $9808: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9809:;
    /* $9809: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_980A:;
    /* $980A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B914_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B914_b4");
#endif
label_B914:;
    /* $B914: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x01F6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B917:;
    /* $B917: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B91A:;
    /* $B91A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x01F7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B91D:;
    /* $B91D: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B920:;
    /* $B920: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B921:;
    /* $B921: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B922:;
    /* $B922: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B924:;
    /* $B924: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B925:;
    /* $B925: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B927:;
    /* $B927: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B914;
    }
label_B929:;
    /* $B929: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x19); FLAG_NZ(g_cpu.A);
label_B92B:;
    /* $B92B: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B92E:;
    /* $B92E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_B930:;
    /* $B930: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B933:;
    /* $B933: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A8B6_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8B6_b4");
#endif
label_A8B6:;
    /* $A8B6: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8B8:;
    /* $A8B8: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8BA:;
    /* $A8BA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A8BC:;
    /* $A8BC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A8C1; }
label_A8BE:;
    /* $A8BE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA975, 4); return;
label_A8C1:;
    /* $A8C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0537); FLAG_NZ(g_cpu.A);
label_A8C4:;
    /* $A8C4: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A8C5:;
    /* $A8C5: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A8C7:;
    /* $A8C7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A8C8:;
    /* $A8C8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A8C9:;
    /* $A8C9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A8CA:;
    /* $A8CA: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A8CB:;
    /* $A8CB: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8CD:;
    /* $A8CD: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8CF:;
    /* $A8CF: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A8D1:;
    /* $A8D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A8D3:;
    /* $A8D3: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A8D4:;
    /* $A8D4: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0536); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8D7:;
    /* $A8D7: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A8D9:;
    /* $A8D9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x13); FLAG_NZ(g_cpu.Y);
label_A8DB:;
    /* $A8DB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8DE:;
    /* $A8DE: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_A8E0:;
    /* $A8E0: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8E2:;
    /* $A8E2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A8F0; }
label_A8E4:;
    /* $A8E4: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A8E5:;
    /* $A8E5: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A8E6:;
    /* $A8E6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E9:;
    /* $A8E9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A8EB:;
    /* $A8EB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A923; }
label_A8ED:;
    /* $A8ED: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA8E0, 4); return;
label_A8F0:;
    /* $A8F0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A8F2:;
    /* $A8F2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A90D; }
label_A8F4:;
    /* $A8F4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A8F6:;
    /* $A8F6: 8D */ maybe_trigger_vblank(4); nes_write(0x0559, g_cpu.A);
label_A8F9:;
    /* $A8F9: 8D */ maybe_trigger_vblank(4); nes_write(0x055A, g_cpu.A);
label_A8FC:;
    /* $A8FC: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0577; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8FF:;
    /* $A8FF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_A902:;
    /* $A902: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A904:;
    /* $A904: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A913; }
label_A906:;
    /* $A906: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A908:;
    /* $A908: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A913; }
label_A90A:;
    /* $A90A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA910, 4); return;
label_A90D:;
    /* $A90D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x053E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A910:;
    /* $A910: EE */ maybe_trigger_vblank(6); { uint16_t a=0x05AD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A913:;
    /* $A913: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: 8D */ maybe_trigger_vblank(4); nes_write(0x056D, g_cpu.A);
label_A918:;
    /* $A918: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0515; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91B:;
    /* $A91B: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0515); FLAG_NZ(g_cpu.Y);
label_A91E:;
    /* $A91E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: 99 */ maybe_trigger_vblank(5); nes_write((0x0515 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A923:;
    /* $A923: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_A925:;
    /* $A925: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A926:;
    /* $A926: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A928:;
    /* $A928: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A92A:;
    /* $A92A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92C:;
    /* $A92C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92E:;
    /* $A92E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A930:;
    /* $A930: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_A932:;
    /* $A932: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8D1;
    }
label_A934:;
    /* $A934: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0515); FLAG_NZ(g_cpu.A);
label_A937:;
    /* $A937: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A975; }
label_A939:;
    /* $A939: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0584); FLAG_NZ(g_cpu.A);
label_A93C:;
    /* $A93C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A965; }
label_A93E:;
    /* $A93E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A94A; }
label_A943:;
    /* $A943: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_A946:;
    /* $A946: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A948:;
    /* $A948: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A965; }
label_A94A:;
    /* $A94A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058D); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A965; }
label_A94F:;
    /* $A94F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_A954:;
    /* $A954: 8D */ maybe_trigger_vblank(4); nes_write(0x058D, g_cpu.A);
label_A957:;
    /* $A957: 8D */ maybe_trigger_vblank(4); nes_write(0x0589, g_cpu.A);
label_A95A:;
    /* $A95A: 8D */ maybe_trigger_vblank(4); nes_write(0x058A, g_cpu.A);
label_A95D:;
    /* $A95D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A95F:;
    /* $A95F: 8D */ maybe_trigger_vblank(4); nes_write(0x05A3, g_cpu.A);
label_A962:;
    /* $A962: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB48A, 4);
label_A965:;
    /* $A965: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0577); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A975; }
label_A96A:;
    /* $A96A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0531); FLAG_NZ(g_cpu.A);
label_A96D:;
    /* $A96D: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_A96F:;
    /* $A96F: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_A972:;
    /* $A972: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAA52, 4);
label_A975:;
    /* $A975: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_90C8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90C8_b4");
#endif
label_90C8:;
    /* $90C8: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_90CA:;
    /* $90CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_90CC:;
    /* $90CC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90CF:;
    /* $90CF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_90D0:;
    /* $90D0: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_90D2:;
    /* $90D2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_90CC;
    }
label_90D4:;
    /* $90D4: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90D7:;
    /* $90D7: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_90DA:;
    /* $90DA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

