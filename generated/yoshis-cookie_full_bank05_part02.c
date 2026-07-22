/* yoshis-cookie_full_bank05_part02.c — PRG bank 5 function bodies (sub-part 2).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella yoshis-cookie_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "yoshis-cookie_full_decls.h"

void func_AEF7_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEF7_b5");
#endif
label_AEF7:;
    /* $AEF7: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_AEFA:;
    /* $AEFA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_AEFC:;
    /* $AEFC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEFF:;
    /* $AEFF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF00:;
    /* $AF00: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD4; FLAG_NZ(g_cpu.A);
label_AF02:;
    /* $AF02: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF05:;
    /* $AF05: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF06:;
    /* $AF06: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_AF08:;
    /* $AF08: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_AF0A:;
    /* $AF0A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_AF0C:;
    /* $AF0C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF0F:;
    /* $AF0F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF10:;
    /* $AF10: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_AF12:;
    /* $AF12: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF15:;
    /* $AF15: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF18:;
    /* $AF18: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF19:;
    /* $AF19: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AF1A:;
    /* $AF1A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AF1B:;
    /* $AF1B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_AF1D:;
    /* $AF1D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AF1E:;
    /* $AF1E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF20:;
    /* $AF20: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AF12;
    }
label_AF22:;
    /* $AF22: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_AF24:;
    /* $AF24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_AF26:;
    /* $AF26: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF29:;
    /* $AF29: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF2A:;
    /* $AF2A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD5; FLAG_NZ(g_cpu.A);
label_AF2C:;
    /* $AF2C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF2F:;
    /* $AF2F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF30:;
    /* $AF30: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_AF32:;
    /* $AF32: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_AF34:;
    /* $AF34: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_AF36:;
    /* $AF36: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF39:;
    /* $AF39: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF3A:;
    /* $AF3A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF3D:;
    /* $AF3D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF40:;
    /* $AF40: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF41:;
    /* $AF41: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AF42:;
    /* $AF42: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AF43:;
    /* $AF43: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_AF45:;
    /* $AF45: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AF46:;
    /* $AF46: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF48:;
    /* $AF48: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AF3A;
    }
label_AF4A:;
    /* $AF4A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AF4C:;
    /* $AF4C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF4F:;
    /* $AF4F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AF52:;
    /* $AF52: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD51_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD51_b5");
#endif
label_AD51:;
    /* $AD51: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1D; FLAG_NZ(g_cpu.X);
label_AD53:;
    /* $AD53: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_AD55:;
    /* $AD55: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_AD57:;
    /* $AD57: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_AD59:;
    /* $AD59: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_AD5B:;
    /* $AD5B: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AD5D:;
    /* $AD5D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x77); FLAG_NZ(g_cpu.A);
label_AD5F:;
    /* $AD5F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_AD61:;
    /* $AD61: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AD6F; }
label_AD63:;
    /* $AD63: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_AD65:;
    /* $AD65: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AD6F; }
label_AD67:;
    /* $AD67: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0564); FLAG_NZ(g_cpu.A);
label_AD6A:;
    /* $AD6A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AD6F; }
label_AD6C:;
    /* $AD6C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAD7B, 5); return;
label_AD6F:;
    /* $AD6F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AD71:;
    /* $AD71: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_AD73:;
    /* $AD73: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD76:;
    /* $AD76: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AD78:;
    /* $AD78: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_AD7B:;
    /* $AD7B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AD7D:;
    /* $AD7D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_AD7F:;
    /* $AD7F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AD88; }
label_AD81:;
    /* $AD81: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_AD83:;
    /* $AD83: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AD85:;
    /* $AD85: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAD91, 5); return;
label_AD88:;
    /* $AD88: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AD8A:;
    /* $AD8A: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AD8C:;
    /* $AD8C: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AD8D:;
    /* $AD8D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AD8E:;
    /* $AD8E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_AD90:;
    /* $AD90: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AD91:;
    /* $AD91: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AD92:;
    /* $AD92: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AD93:;
    /* $AD93: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_AD95:;
    /* $AD95: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AD96:;
    /* $AD96: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD98:;
    /* $AD98: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AD5D;
    }
label_AD9A:;
    /* $AD9A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AF53_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF53_b5");
#endif
label_AF53:;
    /* $AF53: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0564); FLAG_NZ(g_cpu.A);
label_AF56:;
    /* $AF56: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AF5B; }
label_AF58:;
    /* $AF58: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFE9, 5); return;
label_AF5B:;
    /* $AF5B: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_AF5E:;
    /* $AF5E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_AF60:;
    /* $AF60: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF63:;
    /* $AF63: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF64:;
    /* $AF64: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD6; FLAG_NZ(g_cpu.A);
label_AF66:;
    /* $AF66: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF69:;
    /* $AF69: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF6A:;
    /* $AF6A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AF6C:;
    /* $AF6C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF6F:;
    /* $AF6F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF70:;
    /* $AF70: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0282); FLAG_NZ(g_cpu.A);
label_AF73:;
    /* $AF73: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF76:;
    /* $AF76: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF77:;
    /* $AF77: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0283); FLAG_NZ(g_cpu.A);
label_AF7A:;
    /* $AF7A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF7D:;
    /* $AF7D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF7E:;
    /* $AF7E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_AF80:;
    /* $AF80: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF83:;
    /* $AF83: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF84:;
    /* $AF84: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF6; FLAG_NZ(g_cpu.A);
label_AF86:;
    /* $AF86: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF89:;
    /* $AF89: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF8A:;
    /* $AF8A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AF8C:;
    /* $AF8C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF8F:;
    /* $AF8F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF90:;
    /* $AF90: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x028C); FLAG_NZ(g_cpu.A);
label_AF93:;
    /* $AF93: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF96:;
    /* $AF96: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF97:;
    /* $AF97: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x028D); FLAG_NZ(g_cpu.A);
label_AF9A:;
    /* $AF9A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF9D:;
    /* $AF9D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF9E:;
    /* $AF9E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_AFA0:;
    /* $AFA0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFA3:;
    /* $AFA3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFA4:;
    /* $AFA4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD6; FLAG_NZ(g_cpu.A);
label_AFA6:;
    /* $AFA6: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFA9:;
    /* $AFA9: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFAA:;
    /* $AFAA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AFAC:;
    /* $AFAC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFAF:;
    /* $AFAF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFB0:;
    /* $AFB0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02D2); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFB6:;
    /* $AFB6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFB7:;
    /* $AFB7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02D3); FLAG_NZ(g_cpu.A);
label_AFBA:;
    /* $AFBA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFBD:;
    /* $AFBD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFBE:;
    /* $AFBE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_AFC0:;
    /* $AFC0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFC3:;
    /* $AFC3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFC4:;
    /* $AFC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF6; FLAG_NZ(g_cpu.A);
label_AFC6:;
    /* $AFC6: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFC9:;
    /* $AFC9: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFCA:;
    /* $AFCA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AFCC:;
    /* $AFCC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFCF:;
    /* $AFCF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFD0:;
    /* $AFD0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02DC); FLAG_NZ(g_cpu.A);
label_AFD3:;
    /* $AFD3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFD6:;
    /* $AFD6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFD7:;
    /* $AFD7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02DD); FLAG_NZ(g_cpu.A);
label_AFDA:;
    /* $AFDA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFDD:;
    /* $AFDD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFDE:;
    /* $AFDE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AFE0:;
    /* $AFE0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFE3:;
    /* $AFE3: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AFE6:;
    /* $AFE6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB044, 5); return;
}

void func_AD9B_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD9B_b5");
#endif
label_AD9B:;
    /* $AD9B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1E; FLAG_NZ(g_cpu.X);
label_AD9D:;
    /* $AD9D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_AD9F:;
    /* $AD9F: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_ADA1:;
    /* $ADA1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_ADA3:;
    /* $ADA3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_ADA5:;
    /* $ADA5: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_ADA7:;
    /* $ADA7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x77); FLAG_NZ(g_cpu.A);
label_ADA9:;
    /* $ADA9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_ADAB:;
    /* $ADAB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ADB9; }
label_ADAD:;
    /* $ADAD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_ADAF:;
    /* $ADAF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ADB9; }
label_ADB1:;
    /* $ADB1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0564); FLAG_NZ(g_cpu.A);
label_ADB4:;
    /* $ADB4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ADB9; }
label_ADB6:;
    /* $ADB6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xADC5, 5); return;
label_ADB9:;
    /* $ADB9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_ADBB:;
    /* $ADBB: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_ADBD:;
    /* $ADBD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ADC0:;
    /* $ADC0: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_ADC2:;
    /* $ADC2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_ADC5:;
    /* $ADC5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_ADC7:;
    /* $ADC7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_ADC9:;
    /* $ADC9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_ADD2; }
label_ADCB:;
    /* $ADCB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_ADCD:;
    /* $ADCD: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_ADCF:;
    /* $ADCF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xADDB, 5); return;
label_ADD2:;
    /* $ADD2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_ADD4:;
    /* $ADD4: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_ADD6:;
    /* $ADD6: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_ADD7:;
    /* $ADD7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ADD8:;
    /* $ADD8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_ADDA:;
    /* $ADDA: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_ADDB:;
    /* $ADDB: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_ADDC:;
    /* $ADDC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ADDD:;
    /* $ADDD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_ADDF:;
    /* $ADDF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ADE0:;
    /* $ADE0: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ADE2:;
    /* $ADE2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ADA7;
    }
label_ADE4:;
    /* $ADE4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE97_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE97_b5");
#endif
label_AE97:;
    /* $AE97: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_AE9A:;
    /* $AE9A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_AE9C:;
    /* $AE9C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AE9F:;
    /* $AE9F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEA0:;
    /* $AEA0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDE; FLAG_NZ(g_cpu.A);
label_AEA2:;
    /* $AEA2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEA5:;
    /* $AEA5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEA6:;
    /* $AEA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC3; FLAG_NZ(g_cpu.A);
label_AEA8:;
    /* $AEA8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEAB:;
    /* $AEAB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEAC:;
    /* $AEAC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3E); FLAG_NZ(g_cpu.A);
label_AEAE:;
    /* $AEAE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEB1:;
    /* $AEB1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEB2:;
    /* $AEB2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x46); FLAG_NZ(g_cpu.A);
label_AEB4:;
    /* $AEB4: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEB7:;
    /* $AEB7: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEB8:;
    /* $AEB8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_AEBA:;
    /* $AEBA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEBD:;
    /* $AEBD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEBE:;
    /* $AEBE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AEC0:;
    /* $AEC0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEC3:;
    /* $AEC3: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AEC6:;
    /* $AEC6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B045_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B045_b5");
#endif
label_B045:;
    /* $B045: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0564); FLAG_NZ(g_cpu.A);
label_B048:;
    /* $B048: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B04D; }
label_B04A:;
    /* $B04A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB0DB, 5); return;
label_B04D:;
    /* $B04D: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_B050:;
    /* $B050: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B052:;
    /* $B052: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B055:;
    /* $B055: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B056:;
    /* $B056: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD8; FLAG_NZ(g_cpu.A);
label_B058:;
    /* $B058: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B05B:;
    /* $B05B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B05C:;
    /* $B05C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B05E:;
    /* $B05E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B061:;
    /* $B061: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B062:;
    /* $B062: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0284); FLAG_NZ(g_cpu.A);
label_B065:;
    /* $B065: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B068:;
    /* $B068: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B069:;
    /* $B069: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0285); FLAG_NZ(g_cpu.A);
label_B06C:;
    /* $B06C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B06F:;
    /* $B06F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B070:;
    /* $B070: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B072:;
    /* $B072: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B075:;
    /* $B075: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B076:;
    /* $B076: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_B078:;
    /* $B078: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B07B:;
    /* $B07B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B07C:;
    /* $B07C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B07E:;
    /* $B07E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B081:;
    /* $B081: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B082:;
    /* $B082: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x028E); FLAG_NZ(g_cpu.A);
label_B085:;
    /* $B085: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B088:;
    /* $B088: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B089:;
    /* $B089: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x028F); FLAG_NZ(g_cpu.A);
label_B08C:;
    /* $B08C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B08F:;
    /* $B08F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B090:;
    /* $B090: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_B092:;
    /* $B092: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B095:;
    /* $B095: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B096:;
    /* $B096: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD8; FLAG_NZ(g_cpu.A);
label_B098:;
    /* $B098: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B09B:;
    /* $B09B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B09C:;
    /* $B09C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B09E:;
    /* $B09E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0A1:;
    /* $B0A1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0A2:;
    /* $B0A2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02D4); FLAG_NZ(g_cpu.A);
label_B0A5:;
    /* $B0A5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0A8:;
    /* $B0A8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0A9:;
    /* $B0A9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02D5); FLAG_NZ(g_cpu.A);
label_B0AC:;
    /* $B0AC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0AF:;
    /* $B0AF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0B0:;
    /* $B0B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_B0B2:;
    /* $B0B2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0B5:;
    /* $B0B5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0B6:;
    /* $B0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_B0B8:;
    /* $B0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0BB:;
    /* $B0BB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0BC:;
    /* $B0BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B0BE:;
    /* $B0BE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0C1:;
    /* $B0C1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0C2:;
    /* $B0C2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02DE); FLAG_NZ(g_cpu.A);
label_B0C5:;
    /* $B0C5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0C8:;
    /* $B0C8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0C9:;
    /* $B0C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02DF); FLAG_NZ(g_cpu.A);
label_B0CC:;
    /* $B0CC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0CF:;
    /* $B0CF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0D0:;
    /* $B0D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B0D2:;
    /* $B0D2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0D5:;
    /* $B0D5: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B0D8:;
    /* $B0D8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB136, 5); return;
}

void func_ADE5_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADE5_b5");
#endif
label_ADE5:;
    /* $ADE5: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1E; FLAG_NZ(g_cpu.X);
label_ADE7:;
    /* $ADE7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_ADE9:;
    /* $ADE9: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_ADEB:;
    /* $ADEB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_ADED:;
    /* $ADED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_ADEF:;
    /* $ADEF: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_ADF1:;
    /* $ADF1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x77); FLAG_NZ(g_cpu.A);
label_ADF3:;
    /* $ADF3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_ADF5:;
    /* $ADF5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AE03; }
label_ADF7:;
    /* $ADF7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_ADF9:;
    /* $ADF9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AE03; }
label_ADFB:;
    /* $ADFB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0564); FLAG_NZ(g_cpu.A);
label_ADFE:;
    /* $ADFE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AE03; }
label_AE00:;
    /* $AE00: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAE0F, 5); return;
label_AE03:;
    /* $AE03: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AE05:;
    /* $AE05: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_AE07:;
    /* $AE07: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE0A:;
    /* $AE0A: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AE0C:;
    /* $AE0C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_AE0F:;
    /* $AE0F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AE11:;
    /* $AE11: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_AE13:;
    /* $AE13: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AE1C; }
label_AE15:;
    /* $AE15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_AE17:;
    /* $AE17: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AE19:;
    /* $AE19: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAE25, 5); return;
label_AE1C:;
    /* $AE1C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AE1E:;
    /* $AE1E: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AE20:;
    /* $AE20: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AE21:;
    /* $AE21: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE22:;
    /* $AE22: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_AE24:;
    /* $AE24: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AE25:;
    /* $AE25: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AE26:;
    /* $AE26: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE27:;
    /* $AE27: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_AE29:;
    /* $AE29: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AE2A:;
    /* $AE2A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE2C:;
    /* $AE2C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ADF1;
    }
label_AE2E:;
    /* $AE2E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B137_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B137_b5");
#endif
label_B137:;
    /* $B137: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0564); FLAG_NZ(g_cpu.A);
label_B13A:;
    /* $B13A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B13F; }
label_B13C:;
    /* $B13C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB1CD, 5); return;
label_B13F:;
    /* $B13F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_B142:;
    /* $B142: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B144:;
    /* $B144: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B147:;
    /* $B147: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B148:;
    /* $B148: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDA; FLAG_NZ(g_cpu.A);
label_B14A:;
    /* $B14A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B14D:;
    /* $B14D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B14E:;
    /* $B14E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B150:;
    /* $B150: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B153:;
    /* $B153: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B154:;
    /* $B154: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0286); FLAG_NZ(g_cpu.A);
label_B157:;
    /* $B157: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B15A:;
    /* $B15A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B15B:;
    /* $B15B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0287); FLAG_NZ(g_cpu.A);
label_B15E:;
    /* $B15E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B161:;
    /* $B161: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B162:;
    /* $B162: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B164:;
    /* $B164: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B167:;
    /* $B167: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B168:;
    /* $B168: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFA; FLAG_NZ(g_cpu.A);
label_B16A:;
    /* $B16A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B16D:;
    /* $B16D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B16E:;
    /* $B16E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B170:;
    /* $B170: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B173:;
    /* $B173: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B174:;
    /* $B174: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0290); FLAG_NZ(g_cpu.A);
label_B177:;
    /* $B177: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B17A:;
    /* $B17A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B17B:;
    /* $B17B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0291); FLAG_NZ(g_cpu.A);
label_B17E:;
    /* $B17E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B181:;
    /* $B181: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B182:;
    /* $B182: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_B184:;
    /* $B184: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B187:;
    /* $B187: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B188:;
    /* $B188: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDA; FLAG_NZ(g_cpu.A);
label_B18A:;
    /* $B18A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B18D:;
    /* $B18D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B18E:;
    /* $B18E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B190:;
    /* $B190: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B193:;
    /* $B193: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B194:;
    /* $B194: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02D6); FLAG_NZ(g_cpu.A);
label_B197:;
    /* $B197: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B19A:;
    /* $B19A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B19B:;
    /* $B19B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02D7); FLAG_NZ(g_cpu.A);
label_B19E:;
    /* $B19E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1A1:;
    /* $B1A1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B1A2:;
    /* $B1A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_B1A4:;
    /* $B1A4: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1A7:;
    /* $B1A7: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B1A8:;
    /* $B1A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFA; FLAG_NZ(g_cpu.A);
label_B1AA:;
    /* $B1AA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1AD:;
    /* $B1AD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B1AE:;
    /* $B1AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B1B0:;
    /* $B1B0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1B3:;
    /* $B1B3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B1B4:;
    /* $B1B4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02E0); FLAG_NZ(g_cpu.A);
label_B1B7:;
    /* $B1B7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1BA:;
    /* $B1BA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B1BB:;
    /* $B1BB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02E1); FLAG_NZ(g_cpu.A);
label_B1BE:;
    /* $B1BE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1C1:;
    /* $B1C1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B1C2:;
    /* $B1C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B1C4:;
    /* $B1C4: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1C7:;
    /* $B1C7: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B1CA:;
    /* $B1CA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB228, 5); return;
}

void func_AE2F_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE2F_b5");
#endif
label_AE2F:;
    /* $AE2F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1F; FLAG_NZ(g_cpu.X);
label_AE31:;
    /* $AE31: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_AE33:;
    /* $AE33: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_AE35:;
    /* $AE35: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_AE37:;
    /* $AE37: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AE39:;
    /* $AE39: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AE3B:;
    /* $AE3B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AE3D:;
    /* $AE3D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_AE3F:;
    /* $AE3F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE42:;
    /* $AE42: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AE44:;
    /* $AE44: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_AE47:;
    /* $AE47: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AE49:;
    /* $AE49: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AE4B:;
    /* $AE4B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AE54; }
label_AE4D:;
    /* $AE4D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AE4F:;
    /* $AE4F: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AE51:;
    /* $AE51: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAE5D, 5); return;
label_AE54:;
    /* $AE54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE56:;
    /* $AE56: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AE58:;
    /* $AE58: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AE59:;
    /* $AE59: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE5A:;
    /* $AE5A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_AE5C:;
    /* $AE5C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AE5D:;
    /* $AE5D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AE5E:;
    /* $AE5E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE5F:;
    /* $AE5F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_AE61:;
    /* $AE61: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AE62:;
    /* $AE62: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE64:;
    /* $AE64: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AE3B;
    }
label_AE66:;
    /* $AE66: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AEC7_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEC7_b5");
#endif
label_AEC7:;
    /* $AEC7: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_AECA:;
    /* $AECA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_AECC:;
    /* $AECC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AECF:;
    /* $AECF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AED0:;
    /* $AED0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDF; FLAG_NZ(g_cpu.A);
label_AED2:;
    /* $AED2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AED5:;
    /* $AED5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AED6:;
    /* $AED6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC3; FLAG_NZ(g_cpu.A);
label_AED8:;
    /* $AED8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEDB:;
    /* $AEDB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEDC:;
    /* $AEDC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3F); FLAG_NZ(g_cpu.A);
label_AEDE:;
    /* $AEDE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEE1:;
    /* $AEE1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEE2:;
    /* $AEE2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x47); FLAG_NZ(g_cpu.A);
label_AEE4:;
    /* $AEE4: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEE7:;
    /* $AEE7: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEE8:;
    /* $AEE8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x4F); FLAG_NZ(g_cpu.A);
label_AEEA:;
    /* $AEEA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEED:;
    /* $AEED: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEEE:;
    /* $AEEE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AEF0:;
    /* $AEF0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEF3:;
    /* $AEF3: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AEF6:;
    /* $AEF6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6C1_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C1_b5");
#endif
label_B6C1:;
    /* $B6C1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_B6C3:;
    /* $B6C3: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_B6C5:;
    /* $B6C5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B6C8:;
    /* $B6C8: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_B6CA:;
    /* $B6CA: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_B6CD:;
    /* $B6CD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_B6CF:;
    /* $B6CF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B6D1:;
    /* $B6D1: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B6D8; }
label_B6D3:;
    /* $B6D3: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x75; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B6D5:;
    /* $B6D5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB6DD, 5); return;
label_B6D8:;
    /* $B6D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B6DA:;
    /* $B6DA: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_B6DC:;
    /* $B6DC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B6DD:;
    /* $B6DD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B6DE:;
    /* $B6DE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B6DF:;
    /* $B6DF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B6E1:;
    /* $B6E1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B6C1;
    }
label_B6E3:;
    /* $B6E3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B714_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B714_b5");
#endif
label_B714:;
    /* $B714: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_B716:;
    /* $B716: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_B718:;
    /* $B718: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B71B:;
    /* $B71B: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_B71D:;
    /* $B71D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_B720:;
    /* $B720: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_B722:;
    /* $B722: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B724:;
    /* $B724: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B72B; }
label_B726:;
    /* $B726: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x75; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B728:;
    /* $B728: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB730, 5); return;
label_B72B:;
    /* $B72B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B72D:;
    /* $B72D: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_B72F:;
    /* $B72F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B730:;
    /* $B730: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B731:;
    /* $B731: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B732:;
    /* $B732: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B734:;
    /* $B734: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B714;
    }
label_B736:;
    /* $B736: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B767_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B767_b5");
#endif
label_B767:;
    /* $B767: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_B769:;
    /* $B769: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_B76B:;
    /* $B76B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B76E:;
    /* $B76E: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_B770:;
    /* $B770: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_B773:;
    /* $B773: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_B775:;
    /* $B775: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B777:;
    /* $B777: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B77E; }
label_B779:;
    /* $B779: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x75; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B77B:;
    /* $B77B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB783, 5); return;
label_B77E:;
    /* $B77E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B780:;
    /* $B780: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_B782:;
    /* $B782: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B783:;
    /* $B783: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B784:;
    /* $B784: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B785:;
    /* $B785: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B787:;
    /* $B787: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B767;
    }
label_B789:;
    /* $B789: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7BA_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7BA_b5");
#endif
label_B7BA:;
    /* $B7BA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_B7BC:;
    /* $B7BC: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_B7BE:;
    /* $B7BE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7C1:;
    /* $B7C1: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_B7C3:;
    /* $B7C3: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_B7C6:;
    /* $B7C6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_B7C8:;
    /* $B7C8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B7CA:;
    /* $B7CA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B7D1; }
label_B7CC:;
    /* $B7CC: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x75; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7CE:;
    /* $B7CE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB7D6, 5); return;
label_B7D1:;
    /* $B7D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B7D3:;
    /* $B7D3: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_B7D5:;
    /* $B7D5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B7D6:;
    /* $B7D6: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B7D7:;
    /* $B7D7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B7D8:;
    /* $B7D8: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7DA:;
    /* $B7DA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B7BA;
    }
label_B7DC:;
    /* $B7DC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7E9_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7E9_b5");
#endif
label_B7E9:;
    /* $B7E9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_B7EB:;
    /* $B7EB: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_B7ED:;
    /* $B7ED: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7F0:;
    /* $B7F0: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_B7F2:;
    /* $B7F2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_B7F5:;
    /* $B7F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_B7F7:;
    /* $B7F7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B7F9:;
    /* $B7F9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_B800; }
label_B7FB:;
    /* $B7FB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x75; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7FD:;
    /* $B7FD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB805, 5); return;
label_B800:;
    /* $B800: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B802:;
    /* $B802: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_B804:;
    /* $B804: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B805:;
    /* $B805: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B806:;
    /* $B806: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B807:;
    /* $B807: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B809:;
    /* $B809: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B7E9;
    }
label_B80B:;
    /* $B80B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85E5_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85E5_b5");
#endif
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBA; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85ED:;
    /* $85ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EF:;
    /* $85EF: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85F1:;
    /* $85F1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8A); FLAG_NZ(g_cpu.A);
label_85F3:;
    /* $85F3: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85F5:;
    /* $85F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85F7:;
    /* $85F7: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85F9:;
    /* $85F9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_85FC:;
    /* $85FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_85FE:;
    /* $85FE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_8600:;
    /* $8600: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8610; }
label_8602:;
    /* $8602: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: 8D */ maybe_trigger_vblank(4); nes_write(0x0412, g_cpu.A);
label_8607:;
    /* $8607: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_860D:;
    /* $860D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8624, 5); return;
label_8610:;
    /* $8610: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8612:;
    /* $8612: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8624; }
label_8614:;
    /* $8614: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8616:;
    /* $8616: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8619:;
    /* $8619: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_861B:;
    /* $861B: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_861E:;
    /* $861E: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8624:;
    /* $8624: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_976D_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_976D_b5");
#endif
label_976D:;
    /* $976D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9890, 5);
label_9770:;
    /* $9770: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0584); FLAG_NZ(g_cpu.A);
label_9773:;
    /* $9773: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_977A; }
label_9775:;
    /* $9775: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058D); FLAG_NZ(g_cpu.A);
label_9778:;
    /* $9778: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9790; }
label_977A:;
    /* $977A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0582); FLAG_NZ(g_cpu.A);
label_977D:;
    /* $977D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9784; }
label_977F:;
    /* $977F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058B); FLAG_NZ(g_cpu.A);
label_9782:;
    /* $9782: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9790; }
label_9784:;
    /* $9784: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9786:;
    /* $9786: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_9788:;
    /* $9788: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9790; }
label_978A:;
    /* $978A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9842, 5);
label_978D:;
    /* $978D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9791, 5);
label_9790:;
    /* $9790: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_98E2_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9906;
        case 2: goto label_98E5;
    }
label_98E2:;
    /* $98E2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0584); FLAG_NZ(g_cpu.A);
label_98E5:;
    /* $98E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_98F2; }
label_98E7:;
    /* $98E7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x058D); FLAG_NZ(g_cpu.A);
label_98EA:;
    /* $98EA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_98F2; }
label_98EC:;
    /* $98EC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E1); FLAG_NZ(g_cpu.A);
label_98EF:;
    /* $98EF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x98F5, 5); return;
label_98F2:;
    /* $98F2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03DF); FLAG_NZ(g_cpu.A);
label_98F5:;
    /* $98F5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_98F7:;
    /* $98F7: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_9906; }
label_98F9:;
    /* $98F9: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $F573: 5 entries (bank=5) */
switch(g_cpu.A) {
  case 0: nes_write(0x0000, 0x06); nes_write(0x0001, 0x99); g_cpu.A = 0x06; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_9906_b5(); return;
  case 1: nes_write(0x0000, 0x07); nes_write(0x0001, 0x99); g_cpu.A = 0x07; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_9907_b5(); return;
  case 2: nes_write(0x0000, 0x0B); nes_write(0x0001, 0x99); g_cpu.A = 0x0B; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_990B_b5(); return;
  case 3: nes_write(0x0000, 0x0F); nes_write(0x0001, 0x99); g_cpu.A = 0x0F; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_990F_b5(); return;
  case 4: nes_write(0x0000, 0x13); nes_write(0x0001, 0x99); g_cpu.A = 0x13; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(52); func_9913_b5(); return;
  default: nes_log_inline_miss(0x98F9, g_cpu.A); return;
}
label_9906:;
    /* $9906: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_98E2_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98E2_b5");
#endif
    func_98E2_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9906_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9906_b5");
#endif
    func_98E2_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_98E5_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98E5_b5");
#endif
    func_98E2_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8D27_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8E10;
        case 2: goto label_8E43;
    }
label_8D27:;
    /* $8D27: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8E44, 5);
label_8D2A:;
    /* $8D2A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_8D2C:;
    /* $8D2C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_8D2E:;
    /* $8D2E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D4D; }
label_8D30:;
    /* $8D30: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x96); FLAG_NZ(g_cpu.Y);
label_8D32:;
    /* $8D32: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x006C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D35:;
    /* $8D35: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8D36:;
    /* $8D36: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E6); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D39:;
    /* $8D39: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8D3A:;
    /* $8D3A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_8D3C:;
    /* $8D3C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D3D:;
    /* $8D3D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8D3F:;
    /* $8D3F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8D47; }
label_8D41:;
    /* $8D41: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8672, 5);
label_8D44:;
    /* $8D44: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E04, 5); return;
label_8D47:;
    /* $8D47: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8625, 5);
label_8D4A:;
    /* $8D4A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E04, 5); return;
label_8D4D:;
    /* $8D4D: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D4F:;
    /* $8D4F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E5); FLAG_NZ(g_cpu.A);
label_8D52:;
    /* $8D52: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8D53:;
    /* $8D53: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D56:;
    /* $8D56: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8D57:;
    /* $8D57: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_8D59:;
    /* $8D59: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D5A:;
    /* $8D5A: 8D */ maybe_trigger_vblank(4); nes_write(0x042C, g_cpu.A);
label_8D5D:;
    /* $8D5D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8C75, 5);
label_8D60:;
    /* $8D60: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8D62:;
    /* $8D62: 8D */ maybe_trigger_vblank(4); nes_write(0x05BA, g_cpu.A);
label_8D65:;
    /* $8D65: 8D */ maybe_trigger_vblank(4); nes_write(0x05BD, g_cpu.A);
label_8D68:;
    /* $8D68: 8D */ maybe_trigger_vblank(4); nes_write(0x05BE, g_cpu.A);
label_8D6B:;
    /* $8D6B: 8D */ maybe_trigger_vblank(4); nes_write(0x05C2, g_cpu.A);
label_8D6E:;
    /* $8D6E: 8D */ maybe_trigger_vblank(4); nes_write(0x05C6, g_cpu.A);
label_8D71:;
    /* $8D71: 8D */ maybe_trigger_vblank(4); nes_write(0x05CA, g_cpu.A);
label_8D74:;
    /* $8D74: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_8D77:;
    /* $8D77: 8D */ maybe_trigger_vblank(4); nes_write(0x05BB, g_cpu.A);
label_8D7A:;
    /* $8D7A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0430); FLAG_NZ(g_cpu.A);
label_8D7D:;
    /* $8D7D: 8D */ maybe_trigger_vblank(4); nes_write(0x05BF, g_cpu.A);
label_8D80:;
    /* $8D80: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_8D83:;
    /* $8D83: 8D */ maybe_trigger_vblank(4); nes_write(0x05C3, g_cpu.A);
label_8D86:;
    /* $8D86: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0432); FLAG_NZ(g_cpu.A);
label_8D89:;
    /* $8D89: 8D */ maybe_trigger_vblank(4); nes_write(0x05C7, g_cpu.A);
label_8D8C:;
    /* $8D8C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x56; FLAG_NZ(g_cpu.A);
label_8D8E:;
    /* $8D8E: 8D */ maybe_trigger_vblank(4); nes_write(0x05CB, g_cpu.A);
label_8D91:;
    /* $8D91: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8D93:;
    /* $8D93: 8D */ maybe_trigger_vblank(4); nes_write(0x05BC, g_cpu.A);
label_8D96:;
    /* $8D96: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_8D99:;
    /* $8D99: 8D */ maybe_trigger_vblank(4); nes_write(0x05C4, g_cpu.A);
label_8D9C:;
    /* $8D9C: 8D */ maybe_trigger_vblank(4); nes_write(0x05C8, g_cpu.A);
label_8D9F:;
    /* $8D9F: 8D */ maybe_trigger_vblank(4); nes_write(0x05CC, g_cpu.A);
label_8DA2:;
    /* $8DA2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8DA4:;
    /* $8DA4: 8D */ maybe_trigger_vblank(4); nes_write(0x05C1, g_cpu.A);
label_8DA7:;
    /* $8DA7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_8DA9:;
    /* $8DA9: 8D */ maybe_trigger_vblank(4); nes_write(0x05C5, g_cpu.A);
label_8DAC:;
    /* $8DAC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_8DAE:;
    /* $8DAE: 8D */ maybe_trigger_vblank(4); nes_write(0x05C9, g_cpu.A);
label_8DB1:;
    /* $8DB1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_8DB3:;
    /* $8DB3: 8D */ maybe_trigger_vblank(4); nes_write(0x05CD, g_cpu.A);
label_8DB6:;
    /* $8DB6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_8DB8:;
    /* $8DB8: 8D */ maybe_trigger_vblank(4); nes_write(0x05CE, g_cpu.A);
label_8DBB:;
    /* $8DBB: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x96); FLAG_NZ(g_cpu.X);
label_8DBD:;
    /* $8DBD: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x6C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8DBF:;
    /* $8DBF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8DC0:;
    /* $8DC0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_8DC2:;
    /* $8DC2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8DC3:;
    /* $8DC3: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x042C); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DC6:;
    /* $8DC6: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8DC7:;
    /* $8DC7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC015, 5);
label_8DCA:;
    /* $8DCA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_8DCD:;
    /* $8DCD: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_8DCF:;
    /* $8DCF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_8DD2:;
    /* $8DD2: 85 */ maybe_trigger_vblank(3); nes_write(0x8A, g_cpu.A);
label_8DD4:;
    /* $8DD4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_8DD7:;
    /* $8DD7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DE4; }
label_8DD9:;
    /* $8DD9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_8DDB:;
    /* $8DDB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8DDD:;
    /* $8DDD: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8E04; }
label_8DDF:;
    /* $8DDF: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8DE0:;
    /* $8DE0: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DE2:;
    /* $8DE2: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_8DE4:;
    /* $8DE4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0430); FLAG_NZ(g_cpu.A);
label_8DE7:;
    /* $8DE7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8DF4; }
label_8DE9:;
    /* $8DE9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_8DEB:;
    /* $8DEB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8DED:;
    /* $8DED: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8E04; }
label_8DEF:;
    /* $8DEF: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8DF0:;
    /* $8DF0: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DF2:;
    /* $8DF2: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_8DF4:;
    /* $8DF4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_8DF7:;
    /* $8DF7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8E04; }
label_8DF9:;
    /* $8DF9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_8DFB:;
    /* $8DFB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8DFD:;
    /* $8DFD: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8E04; }
label_8DFF:;
    /* $8DFF: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8E00:;
    /* $8E00: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8E02:;
    /* $8E02: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_8E04:;
    /* $8E04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8E06:;
    /* $8E06: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8E08:;
    /* $8E08: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBA; FLAG_NZ(g_cpu.A);
label_8E0A:;
    /* $8E0A: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8E0C:;
    /* $8E0C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8E0E:;
    /* $8E0E: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8E10:;
    /* $8E10: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8A); FLAG_NZ(g_cpu.A);
label_8E12:;
    /* $8E12: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8E14:;
    /* $8E14: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_8E16:;
    /* $8E16: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8E18:;
    /* $8E18: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_8E1B:;
    /* $8E1B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_8E1D:;
    /* $8E1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_8E1F:;
    /* $8E1F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E2F; }
label_8E21:;
    /* $8E21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8E23:;
    /* $8E23: 8D */ maybe_trigger_vblank(4); nes_write(0x0412, g_cpu.A);
label_8E26:;
    /* $8E26: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8E2C:;
    /* $8E2C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E43, 5); return;
label_8E2F:;
    /* $8E2F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8E31:;
    /* $8E31: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E43; }
label_8E33:;
    /* $8E33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8E35:;
    /* $8E35: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8E38:;
    /* $8E38: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8E3A:;
    /* $8E3A: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_8E3D:;
    /* $8E3D: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8E43:;
    /* $8E43: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D27_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D27_b5");
#endif
    func_8D27_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8E10_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E10_b5");
#endif
    func_8D27_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8E43_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E43_b5");
#endif
    func_8D27_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9A5_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9A5_b5");
#endif
label_A9A5:;
    /* $A9A5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A9A8:;
    /* $A9A8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0459); FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9B8; }
label_A9AD:;
    /* $A9AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A9AF:;
    /* $A9AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0459, g_cpu.A);
label_A9B2:;
    /* $A9B2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0458; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B5:;
    /* $A9B5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9BB, 5); return;
label_A9B8:;
    /* $A9B8: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0459; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9BB:;
    /* $A9BB: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BC:;
    /* $A9BC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BD:;
    /* $A9BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9BF:;
    /* $A9BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD47_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD47_b5");
#endif
label_AD47:;
    /* $AD47: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AD48:;
    /* $AD48: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AD49:;
    /* $AD49: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_AD4B:;
    /* $AD4B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AD4C:;
    /* $AD4C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD4E:;
    /* $AD4E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0D25), 5); return; }
label_AD50:;
    /* $AD50: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1CD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1CD_b5");
#endif
label_B1CD:;
    /* $B1CD: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_B1D0:;
    /* $B1D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B1D2:;
    /* $B1D2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1D5:;
    /* $B1D5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B1D6:;
    /* $B1D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDA; FLAG_NZ(g_cpu.A);
label_B1D8:;
    /* $B1D8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1DB:;
    /* $B1DB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B1DC:;
    /* $B1DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B1DE:;
    /* $B1DE: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B1E0:;
    /* $B1E0: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_B1E2:;
    /* $B1E2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1E5:;
    /* $B1E5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B1E6:;
    /* $B1E6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_B1E8:;
    /* $B1E8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1EB:;
    /* $B1EB: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1EE:;
    /* $B1EE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B1EF:;
    /* $B1EF: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B1F0:;
    /* $B1F0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B1F1:;
    /* $B1F1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_B1F3:;
    /* $B1F3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B1F4:;
    /* $B1F4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1F6:;
    /* $B1F6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B1E8;
    }
label_B1F8:;
    /* $B1F8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_B1FA:;
    /* $B1FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B1FC:;
    /* $B1FC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1FF:;
    /* $B1FF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B200:;
    /* $B200: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDB; FLAG_NZ(g_cpu.A);
label_B202:;
    /* $B202: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B205:;
    /* $B205: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B206:;
    /* $B206: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B208:;
    /* $B208: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B20A:;
    /* $B20A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_B20C:;
    /* $B20C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B20F:;
    /* $B20F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B210:;
    /* $B210: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B213:;
    /* $B213: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B216:;
    /* $B216: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B217:;
    /* $B217: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B218:;
    /* $B218: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B219:;
    /* $B219: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_B21B:;
    /* $B21B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B21C:;
    /* $B21C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B21E:;
    /* $B21E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B210;
    }
label_B220:;
    /* $B220: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B222:;
    /* $B222: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B225:;
    /* $B225: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B228:;
    /* $B228: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B228_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B228_b5");
#endif
label_B228:;
    /* $B228: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE5D_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE5D_b5");
#endif
label_AE5D:;
    /* $AE5D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AE5E:;
    /* $AE5E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE5F:;
    /* $AE5F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_AE61:;
    /* $AE61: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AE62:;
    /* $AE62: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE64:;
    /* $AE64: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0E3B), 5); return; }
label_AE66:;
    /* $AE66: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD25_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD25_b5");
#endif
label_AD25:;
    /* $AD25: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AD27:;
    /* $AD27: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_AD29:;
    /* $AD29: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD2C:;
    /* $AD2C: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AD2E:;
    /* $AD2E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_AD31:;
    /* $AD31: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AD33:;
    /* $AD33: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AD35:;
    /* $AD35: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AD3E; }
label_AD37:;
    /* $AD37: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AD39:;
    /* $AD39: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AD3B:;
    /* $AD3B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAD47, 5); return;
label_AD3E:;
    /* $AD3E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AD40:;
    /* $AD40: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AD42:;
    /* $AD42: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AD43:;
    /* $AD43: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AD44:;
    /* $AD44: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_AD46:;
    /* $AD46: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AD47:;
    /* $AD47: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AD48:;
    /* $AD48: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AD49:;
    /* $AD49: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_AD4B:;
    /* $AD4B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AD4C:;
    /* $AD4C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD4E:;
    /* $AD4E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AD25;
    }
label_AD50:;
    /* $AD50: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE3B_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE3B_b5");
#endif
label_AE3B:;
    /* $AE3B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AE3D:;
    /* $AE3D: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_AE3F:;
    /* $AE3F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE42:;
    /* $AE42: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_AE44:;
    /* $AE44: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB80C, 5);
label_AE47:;
    /* $AE47: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AE49:;
    /* $AE49: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AE4B:;
    /* $AE4B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AE54; }
label_AE4D:;
    /* $AE4D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AE4F:;
    /* $AE4F: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AE51:;
    /* $AE51: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAE5D, 5); return;
label_AE54:;
    /* $AE54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE56:;
    /* $AE56: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AE58:;
    /* $AE58: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AE59:;
    /* $AE59: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE5A:;
    /* $AE5A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_AE5C:;
    /* $AE5C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AE5D:;
    /* $AE5D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AE5E:;
    /* $AE5E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE5F:;
    /* $AE5F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_AE61:;
    /* $AE61: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AE62:;
    /* $AE62: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE64:;
    /* $AE64: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AE3B;
    }
label_AE66:;
    /* $AE66: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8039_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8039_b5");
#endif
label_8039:;
    /* $8039: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8039); return;
}

void func_A039_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A039_b5");
#endif
label_A039:;
    /* $A039: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xD0 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A03B:;
    /* $A03B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base - 0x001A), 5); return; }
label_A03D:;
    /* $A03D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA03D); return;
}

void func_803C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_803C_b5");
#endif
label_803C:;
    /* $803C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x803C); return;
}

void func_A03C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A03C_b5");
#endif
label_A03C:;
    /* $A03C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A03E:;
    /* $A03E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A041:;
    /* $A041: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A044:;
    /* $A044: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8066_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8066_b5");
#endif
label_8066:;
    /* $8066: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8066); return;
}

void func_A066_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A066_b5");
#endif
label_A066:;
    /* $A066: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA066); return;
}

void func_8069_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8069_b5");
#endif
label_8069:;
    /* $8069: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8069); return;
}

void func_A069_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A069_b5");
#endif
label_A069:;
    /* $A069: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0207); FLAG_NZ(g_cpu.A);
label_A06C:;
    /* $A06C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A06F:;
    /* $A06F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A070:;
    /* $A070: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_A072:;
    /* $A072: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A075:;
    /* $A075: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A076:;
    /* $A076: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A078:;
    /* $A078: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A07B:;
    /* $A07B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A07C:;
    /* $A07C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A081:;
    /* $A081: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A082:;
    /* $A082: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0210); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A088:;
    /* $A088: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A089:;
    /* $A089: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0211); FLAG_NZ(g_cpu.A);
label_A08C:;
    /* $A08C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A08F:;
    /* $A08F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A090:;
    /* $A090: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A092:;
    /* $A092: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A095:;
    /* $A095: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A096:;
    /* $A096: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC8; FLAG_NZ(g_cpu.A);
label_A098:;
    /* $A098: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A09B:;
    /* $A09B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A09C:;
    /* $A09C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A09E:;
    /* $A09E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A1:;
    /* $A0A1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0A2:;
    /* $A0A2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0256); FLAG_NZ(g_cpu.A);
label_A0A5:;
    /* $A0A5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A8:;
    /* $A0A8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0A9:;
    /* $A0A9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0257); FLAG_NZ(g_cpu.A);
label_A0AC:;
    /* $A0AC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0AF:;
    /* $A0AF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0B0:;
    /* $A0B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A0B2:;
    /* $A0B2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B5:;
    /* $A0B5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0BC:;
    /* $A0BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A0BE:;
    /* $A0BE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0C1:;
    /* $A0C1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0C2:;
    /* $A0C2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0260); FLAG_NZ(g_cpu.A);
label_A0C5:;
    /* $A0C5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0C8:;
    /* $A0C8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0C9:;
    /* $A0C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0261); FLAG_NZ(g_cpu.A);
label_A0CC:;
    /* $A0CC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0CF:;
    /* $A0CF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0D0:;
    /* $A0D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A0D2:;
    /* $A0D2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0D5:;
    /* $A0D5: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A0D8:;
    /* $A0D8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA136, 5); return;
}

void func_80B9_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B9_b5");
#endif
label_80B9:;
    /* $80B9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80B9); return;
}

void func_81AD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81AD_b5");
#endif
label_81AD:;
    /* $81AD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81AF:;
    /* $81AF: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_81B2:;
    /* $81B2: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x01B8), 5); return; }
label_81B4:;
    /* $81B4: 8D */ maybe_trigger_vblank(4); nes_write(0x05BF, g_cpu.A);
label_81B7:;
    /* $81B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_81BA:;
    /* $81BA: 8D */ maybe_trigger_vblank(4); nes_write(0x05C3, g_cpu.A);
label_81BD:;
    /* $81BD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0432); FLAG_NZ(g_cpu.A);
label_81C0:;
    /* $81C0: 8D */ maybe_trigger_vblank(4); nes_write(0x05C7, g_cpu.A);
label_81C3:;
    /* $81C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x56; FLAG_NZ(g_cpu.A);
label_81C5:;
    /* $81C5: 8D */ maybe_trigger_vblank(4); nes_write(0x05CB, g_cpu.A);
label_81C8:;
    /* $81C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_81CA:;
    /* $81CA: 8D */ maybe_trigger_vblank(4); nes_write(0x05BC, g_cpu.A);
label_81CD:;
    /* $81CD: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_81D0:;
    /* $81D0: 8D */ maybe_trigger_vblank(4); nes_write(0x05C4, g_cpu.A);
label_81D3:;
    /* $81D3: 8D */ maybe_trigger_vblank(4); nes_write(0x05C8, g_cpu.A);
label_81D6:;
    /* $81D6: 8D */ maybe_trigger_vblank(4); nes_write(0x05CC, g_cpu.A);
label_81D9:;
    /* $81D9: 8D */ maybe_trigger_vblank(4); nes_write(0x05D0, g_cpu.A);
label_81DC:;
    /* $81DC: 8D */ maybe_trigger_vblank(4); nes_write(0x05D4, g_cpu.A);
label_81DF:;
    /* $81DF: 8D */ maybe_trigger_vblank(4); nes_write(0x05D8, g_cpu.A);
label_81E2:;
    /* $81E2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_81E4:;
    /* $81E4: 8D */ maybe_trigger_vblank(4); nes_write(0x05C1, g_cpu.A);
label_81E7:;
    /* $81E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_81E9:;
    /* $81E9: 8D */ maybe_trigger_vblank(4); nes_write(0x05C5, g_cpu.A);
label_81EC:;
    /* $81EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_81EE:;
    /* $81EE: 8D */ maybe_trigger_vblank(4); nes_write(0x05C9, g_cpu.A);
label_81F1:;
    /* $81F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_81F3:;
    /* $81F3: 8D */ maybe_trigger_vblank(4); nes_write(0x05CD, g_cpu.A);
label_81F6:;
    /* $81F6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_81F8:;
    /* $81F8: 8D */ maybe_trigger_vblank(4); nes_write(0x05D1, g_cpu.A);
label_81FB:;
    /* $81FB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_81FD:;
    /* $81FD: 8D */ maybe_trigger_vblank(4); nes_write(0x05D5, g_cpu.A);
label_8200:;
    /* $8200: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_8202:;
    /* $8202: 8D */ maybe_trigger_vblank(4); nes_write(0x05D9, g_cpu.A);
label_8205:;
    /* $8205: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_8207:;
    /* $8207: 8D */ maybe_trigger_vblank(4); nes_write(0x05DA, g_cpu.A);
label_820A:;
    /* $820A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x047F); FLAG_NZ(g_cpu.A);
label_820D:;
    /* $820D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8212; }
label_820F:;
    /* $820F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82B4, 5); return;
label_8212:;
    /* $8212: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_8214:;
    /* $8214: 8D */ maybe_trigger_vblank(4); nes_write(0x05CF, g_cpu.A);
label_8217:;
    /* $8217: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x047F); FLAG_NZ(g_cpu.A);
label_821A:;
    /* $821A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_821B:;
    /* $821B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_821C:;
    /* $821C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_821D:;
    /* $821D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9137 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8220:;
    /* $8220: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8255; }
label_8222:;
    /* $8222: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C3); FLAG_NZ(g_cpu.A);
label_8225:;
    /* $8225: 8D */ maybe_trigger_vblank(4); nes_write(0x05BB, g_cpu.A);
label_8228:;
    /* $8228: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C7); FLAG_NZ(g_cpu.A);
label_822B:;
    /* $822B: 8D */ maybe_trigger_vblank(4); nes_write(0x05BF, g_cpu.A);
label_822E:;
    /* $822E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05CB); FLAG_NZ(g_cpu.A);
label_8231:;
    /* $8231: 8D */ maybe_trigger_vblank(4); nes_write(0x05C3, g_cpu.A);
label_8234:;
    /* $8234: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05CF); FLAG_NZ(g_cpu.A);
label_8237:;
    /* $8237: 8D */ maybe_trigger_vblank(4); nes_write(0x05C7, g_cpu.A);
label_823A:;
    /* $823A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9137 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_823D:;
    /* $823D: 8D */ maybe_trigger_vblank(4); nes_write(0x05CB, g_cpu.A);
label_8240:;
    /* $8240: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9138 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8243:;
    /* $8243: 8D */ maybe_trigger_vblank(4); nes_write(0x05CF, g_cpu.A);
label_8246:;
    /* $8246: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9139 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8249:;
    /* $8249: 8D */ maybe_trigger_vblank(4); nes_write(0x05D3, g_cpu.A);
label_824C:;
    /* $824C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x913A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_824F:;
    /* $824F: 8D */ maybe_trigger_vblank(4); nes_write(0x05D7, g_cpu.A);
label_8252:;
    /* $8252: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82B9, 5); return;
label_8255:;
    /* $8255: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9138 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8258:;
    /* $8258: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_828D; }
label_825A:;
    /* $825A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05BF); FLAG_NZ(g_cpu.A);
label_825D:;
    /* $825D: 8D */ maybe_trigger_vblank(4); nes_write(0x05BB, g_cpu.A);
label_8260:;
    /* $8260: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C3); FLAG_NZ(g_cpu.A);
label_8263:;
    /* $8263: 8D */ maybe_trigger_vblank(4); nes_write(0x05BF, g_cpu.A);
label_8266:;
    /* $8266: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C7); FLAG_NZ(g_cpu.A);
label_8269:;
    /* $8269: 8D */ maybe_trigger_vblank(4); nes_write(0x05C3, g_cpu.A);
label_826C:;
    /* $826C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05CB); FLAG_NZ(g_cpu.A);
label_826F:;
    /* $826F: 8D */ maybe_trigger_vblank(4); nes_write(0x05C7, g_cpu.A);
label_8272:;
    /* $8272: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05CF); FLAG_NZ(g_cpu.A);
label_8275:;
    /* $8275: 8D */ maybe_trigger_vblank(4); nes_write(0x05CB, g_cpu.A);
label_8278:;
    /* $8278: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9138 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_827B:;
    /* $827B: 8D */ maybe_trigger_vblank(4); nes_write(0x05CF, g_cpu.A);
label_827E:;
    /* $827E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9139 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8281:;
    /* $8281: 8D */ maybe_trigger_vblank(4); nes_write(0x05D3, g_cpu.A);
label_8284:;
    /* $8284: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x913A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8287:;
    /* $8287: 8D */ maybe_trigger_vblank(4); nes_write(0x05D7, g_cpu.A);
label_828A:;
    /* $828A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82B9, 5); return;
label_828D:;
    /* $828D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9139 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8290:;
    /* $8290: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82A1; }
label_8292:;
    /* $8292: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9139 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8295:;
    /* $8295: 8D */ maybe_trigger_vblank(4); nes_write(0x05D3, g_cpu.A);
label_8298:;
    /* $8298: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x913A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_829B:;
    /* $829B: 8D */ maybe_trigger_vblank(4); nes_write(0x05D7, g_cpu.A);
label_829E:;
    /* $829E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82B9, 5); return;
label_82A1:;
    /* $82A1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x913A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82A4:;
    /* $82A4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82B4; }
label_82A6:;
    /* $82A6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x913A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82A9:;
    /* $82A9: 8D */ maybe_trigger_vblank(4); nes_write(0x05D3, g_cpu.A);
label_82AC:;
    /* $82AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_82AE:;
    /* $82AE: 8D */ maybe_trigger_vblank(4); nes_write(0x05D6, g_cpu.A);
label_82B1:;
    /* $82B1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82B9, 5); return;
label_82B4:;
    /* $82B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_82B6:;
    /* $82B6: 8D */ maybe_trigger_vblank(4); nes_write(0x05CE, g_cpu.A);
label_82B9:;
    /* $82B9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_82BB:;
    /* $82BB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82BE:;
    /* $82BE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_82BF:;
    /* $82BF: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x042C); FLAG_NZ(g_cpu.X);
label_82C2:;
    /* $82C2: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_82C3:;
    /* $82C3: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_82C4:;
    /* $82C4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC015, 5);
label_82C7:;
    /* $82C7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_82CA:;
    /* $82CA: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_82CC:;
    /* $82CC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_82CF:;
    /* $82CF: 85 */ maybe_trigger_vblank(3); nes_write(0x8A, g_cpu.A);
label_82D1:;
    /* $82D1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_82D4:;
    /* $82D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82E1; }
label_82D6:;
    /* $82D6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_82D8:;
    /* $82D8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_82DA:;
    /* $82DA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8301; }
label_82DC:;
    /* $82DC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_82DD:;
    /* $82DD: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82DF:;
    /* $82DF: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_82E1:;
    /* $82E1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0430); FLAG_NZ(g_cpu.A);
label_82E4:;
    /* $82E4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82F1; }
label_82E6:;
    /* $82E6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_82E8:;
    /* $82E8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_82EA:;
    /* $82EA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8301; }
label_82EC:;
    /* $82EC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_82ED:;
    /* $82ED: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82EF:;
    /* $82EF: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_82F1:;
    /* $82F1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_82F4:;
    /* $82F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8301; }
label_82F6:;
    /* $82F6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_82F8:;
    /* $82F8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_82FA:;
    /* $82FA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8301; }
label_82FC:;
    /* $82FC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_82FD:;
    /* $82FD: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82FF:;
    /* $82FF: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_8301:;
    /* $8301: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8303:;
    /* $8303: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8305:;
    /* $8305: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBA; FLAG_NZ(g_cpu.A);
label_8307:;
    /* $8307: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8309:;
    /* $8309: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_830B:;
    /* $830B: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_830D:;
    /* $830D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8A); FLAG_NZ(g_cpu.A);
label_830F:;
    /* $830F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8310:;
    /* $8310: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_8312:;
    /* $8312: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8314:;
    /* $8314: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_8316:;
    /* $8316: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8318:;
    /* $8318: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_831B:;
    /* $831B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_831D:;
    /* $831D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_831F:;
    /* $831F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_832F; }
label_8321:;
    /* $8321: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8323:;
    /* $8323: 8D */ maybe_trigger_vblank(4); nes_write(0x0412, g_cpu.A);
label_8326:;
    /* $8326: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_832C:;
    /* $832C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8343, 5); return;
label_832F:;
    /* $832F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8343; }
label_8333:;
    /* $8333: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8335:;
    /* $8335: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8338:;
    /* $8338: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_833A:;
    /* $833A: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_833D:;
    /* $833D: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8343:;
    /* $8343: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8344:; return;
label_8346:; return;
label_8348:; return;
label_834A:; return;
label_834C:; return;
label_834E:; return;
label_8350:; return;
label_8353:; return;
label_8355:; return;
label_8357:; return;
label_8359:; return;
label_835B:; return;
label_835E:; return;
label_8360:; return;
label_8362:; return;
label_8364:; return;
label_8365:; return;
label_8368:; return;
label_8369:; return;
label_836B:; return;
label_836C:; return;
label_836E:; return;
label_836F:; return;
label_8370:; return;
label_8371:; return;
label_8373:; return;
label_8376:; return;
label_8379:; return;
label_837C:; return;
label_837F:; return;
label_8382:; return;
label_8385:; return;
label_8388:; return;
label_838B:; return;
label_838E:; return;
label_8391:; return;
label_8393:; return;
label_8395:; return;
label_8398:; return;
label_839B:; return;
label_839D:; return;
label_83A3:; return;
label_83A5:; return;
label_83A7:; return;
label_83AA:; return;
label_83AD:; return;
label_83AF:; return;
label_83B2:; return;
label_83B4:; return;
label_83B6:; return;
label_83B8:; return;
label_83BA:; return;
label_83BC:; return;
label_83BF:; return;
label_83C1:; return;
label_83C3:; return;
label_83C4:; return;
label_83C6:; return;
label_83C8:; return;
label_83CA:; return;
label_83CD:; return;
label_83CE:; return;
label_83D0:; return;
label_83D2:; return;
label_83D5:; return;
label_83D7:; return;
label_83D9:; return;
label_83DC:; return;
label_83DD:; return;
label_83DF:; return;
label_83E1:; return;
label_83E4:; return;
label_83E6:; return;
label_83E8:; return;
label_83EB:; return;
label_83EC:; return;
label_83EE:; return;
label_83F0:; return;
label_83F3:; return;
label_83F5:; return;
label_83F7:; return;
label_83FA:; return;
label_83FB:; return;
label_83FD:; return;
label_83FF:; return;
label_8402:; return;
label_8404:; return;
label_8407:; return;
label_8409:; return;
label_840C:; return;
label_840E:; return;
label_8410:; return;
label_8412:; return;
label_8414:; return;
label_8416:; return;
label_8418:; return;
label_841A:; return;
label_841C:; return;
label_841E:; return;
label_8420:; return;
label_8422:; return;
label_8424:; return;
label_8426:; return;
label_8428:; return;
label_842E:; return;
label_8431:; return;
label_8433:; return;
label_8435:; return;
label_8437:; return;
label_8438:; return;
label_843A:; return;
label_843C:; return;
label_843E:; return;
label_8440:; return;
label_8443:; return;
label_8444:; return;
label_8447:; return;
label_8448:; return;
label_844A:; return;
label_844B:; return;
label_844D:; return;
label_844F:; return;
label_8452:; return;
label_8455:; return;
label_8458:; return;
label_845B:; return;
label_845D:; return;
label_8460:; return;
label_8461:; return;
label_8464:; return;
label_8465:; return;
label_8467:; return;
label_8468:; return;
label_846B:; return;
label_846E:; return;
label_8471:; return;
label_8473:; return;
label_8476:; return;
label_8479:; return;
label_847C:; return;
label_847F:; return;
label_8482:; return;
label_8485:; return;
label_8488:; return;
label_848B:; return;
label_848E:; return;
label_8491:; return;
label_8494:; return;
label_8497:; return;
label_849A:; return;
label_849D:; return;
label_84A0:; return;
label_84A3:; return;
label_84A6:; return;
label_84A8:; return;
label_84AB:; return;
label_84AD:; return;
label_84B0:; return;
label_84B3:; return;
label_84B6:; return;
label_84B9:; return;
label_84BC:; return;
label_84BF:; return;
label_84C2:; return;
label_84C5:; return;
label_84C7:; return;
label_84CA:; return;
label_84CC:; return;
label_84CF:; return;
label_84D1:; return;
label_84D4:; return;
label_84D6:; return;
label_84D9:; return;
label_84DB:; return;
label_84DE:; return;
label_84E0:; return;
label_84E3:; return;
label_84E5:; return;
label_84E8:; return;
label_84EA:; return;
label_84ED:; return;
label_84F0:; return;
label_84F2:; return;
label_84F5:; return;
label_84F7:; return;
label_84FA:; return;
label_84FD:; return;
label_84FE:; return;
label_84FF:; return;
label_8500:; return;
label_8503:; return;
label_8505:; return;
label_8508:; return;
label_850B:; return;
label_850E:; return;
label_8511:; return;
label_8514:; return;
label_8517:; return;
label_851A:; return;
label_851D:; return;
label_8520:; return;
label_8523:; return;
label_8526:; return;
label_8529:; return;
label_852C:; return;
label_852F:; return;
label_8532:; return;
label_8535:; return;
label_8538:; return;
label_853B:; return;
label_853D:; return;
label_8540:; return;
label_8543:; return;
label_8546:; return;
label_8549:; return;
label_854C:; return;
label_854F:; return;
label_8552:; return;
label_8555:; return;
label_8558:; return;
label_855B:; return;
label_855E:; return;
label_8561:; return;
label_8564:; return;
label_8567:; return;
label_856A:; return;
label_856D:; return;
label_8570:; return;
label_8573:; return;
label_8575:; return;
label_8578:; return;
label_857B:; return;
label_857E:; return;
label_8581:; return;
label_8584:; return;
label_8587:; return;
label_8589:; return;
label_858C:; return;
label_858F:; return;
label_8591:; return;
label_8594:; return;
label_8597:; return;
label_8599:; return;
label_859C:; return;
label_859E:; return;
label_85A0:; return;
label_85A1:; return;
label_85A3:; return;
label_85A4:; return;
label_85A7:; return;
label_85A8:; return;
label_85AB:; return;
label_85AE:; return;
label_85B0:; return;
label_85B3:; return;
label_85B5:; return;
label_85B8:; return;
label_85BA:; return;
label_85BC:; return;
label_85BE:; return;
label_85C0:; return;
label_85C1:; return;
label_85C3:; return;
label_85C5:; return;
label_85C8:; return;
label_85CA:; return;
label_85CC:; return;
label_85CE:; return;
label_85D0:; return;
label_85D1:; return;
label_85D3:; return;
label_85D5:; return;
label_85D8:; return;
label_85DA:; return;
label_85DC:; return;
label_85DE:; return;
label_85E0:; return;
label_85E1:; return;
label_85E3:; return;
label_85E5:; return;
label_85E7:; return;
label_85E9:; return;
label_85EB:; return;
label_85ED:; return;
label_85EF:; return;
label_85F1:; return;
label_85F3:; return;
label_85F5:; return;
label_85F7:; return;
label_85F9:; return;
label_85FC:; return;
label_85FE:; return;
label_8600:; return;
label_8602:; return;
label_8604:; return;
label_8607:; return;
label_860D:; return;
label_8610:; return;
label_8612:; return;
label_8614:; return;
label_8616:; return;
label_8619:; return;
label_861B:; return;
label_861E:; return;
label_8624:; return;
label_8625:; return;
label_8627:; return;
label_8629:; return;
label_862B:; return;
label_862D:; return;
label_862F:; return;
label_8631:; return;
label_8633:; return;
label_8636:; return;
label_8638:; return;
label_863A:; return;
label_863D:; return;
label_863E:; return;
label_8641:; return;
label_8642:; return;
label_8643:; return;
label_8645:; return;
label_8647:; return;
label_8649:; return;
label_864B:; return;
label_864D:; return;
label_864F:; return;
label_8651:; return;
label_8653:; return;
label_8655:; return;
label_8657:; return;
label_865A:; return;
label_865C:; return;
label_865E:; return;
label_8660:; return;
label_8662:; return;
label_8664:; return;
label_8666:; return;
label_8669:; return;
label_866B:; return;
label_866D:; return;
label_866F:; return;
label_8671:; return;
label_8672:; return;
label_8674:; return;
label_8676:; return;
label_8678:; return;
label_867A:; return;
label_867C:; return;
label_867E:; return;
label_8680:; return;
label_8683:; return;
label_8685:; return;
label_8687:; return;
label_868A:; return;
label_868B:; return;
label_868E:; return;
label_868F:; return;
label_8690:; return;
label_8692:; return;
label_8694:; return;
label_8696:; return;
label_8698:; return;
label_869A:; return;
label_869C:; return;
label_869E:; return;
label_86A0:; return;
label_86A2:; return;
label_86A4:; return;
label_86A7:; return;
label_86A9:; return;
label_86AB:; return;
label_86AD:; return;
label_86AF:; return;
label_86B1:; return;
label_86B3:; return;
label_86B6:; return;
label_86B8:; return;
label_86BA:; return;
label_86BC:; return;
label_86BE:; return;
label_86BF:; return;
label_86C1:; return;
label_86C3:; return;
label_86C5:; return;
label_86C8:; return;
label_86CA:; return;
label_86CC:; return;
label_86CF:; return;
label_86D2:; return;
label_86D4:; return;
label_86D6:; return;
label_86D9:; return;
label_86DC:; return;
label_86DE:; return;
label_86E0:; return;
label_86E3:; return;
label_86E6:; return;
label_86E9:; return;
label_86EA:; return;
label_86ED:; return;
label_86EF:; return;
label_86F2:; return;
label_86F5:; return;
label_86F7:; return;
label_86FA:; return;
label_86FD:; return;
label_86FF:; return;
label_8702:; return;
label_8704:; return;
label_8707:; return;
label_870A:; return;
label_870D:; return;
label_870F:; return;
label_8712:; return;
label_8714:; return;
label_8716:; return;
label_8718:; return;
label_871A:; return;
label_871C:; return;
label_871F:; return;
label_8722:; return;
label_8724:; return;
label_8727:; return;
label_872A:; return;
label_872D:; return;
label_872F:; return;
label_8732:; return;
label_8733:; return;
label_8736:; return;
label_8738:; return;
label_873B:; return;
label_873E:; return;
label_8740:; return;
label_8743:; return;
label_8746:; return;
label_8748:; return;
label_874B:; return;
label_874D:; return;
label_8750:; return;
label_8753:; return;
label_8756:; return;
label_8758:; return;
label_875B:; return;
label_875D:; return;
label_875F:; return;
label_8761:; return;
label_8763:; return;
label_8765:; return;
label_8768:; return;
label_876A:; return;
label_876D:; return;
label_8770:; return;
label_8773:; return;
label_8776:; return;
label_8778:; return;
label_877B:; return;
label_877E:; return;
label_8781:; return;
label_8783:; return;
label_8786:; return;
label_8787:; return;
label_8789:; return;
label_878A:; return;
label_878C:; return;
label_878E:; return;
label_8790:; return;
label_8792:; return;
label_8795:; return;
label_8797:; return;
label_8798:; return;
label_8799:; return;
label_879A:; return;
label_879B:; return;
label_879C:; return;
label_879E:; return;
label_87A1:; return;
label_87A2:; return;
label_87A5:; return;
label_87A6:; return;
label_87A8:; return;
label_87AB:; return;
label_87AE:; return;
label_87B0:; return;
label_87B2:; return;
label_87B4:; return;
label_87B7:; return;
label_87B8:; return;
label_87BA:; return;
label_87BD:; return;
label_87BE:; return;
label_87C1:; return;
label_87C4:; return;
label_87C5:; return;
label_87C7:; return;
label_87CA:; return;
label_87CD:; return;
label_87CE:; return;
label_87CF:; return;
label_87D1:; return;
label_87D3:; return;
label_87D5:; return;
label_87D6:; return;
label_87D8:; return;
label_87DA:; return;
label_87DB:; return;
label_87DD:; return;
label_87DE:; return;
label_87E0:; return;
label_87E2:; return;
label_87E4:; return;
label_87E6:; return;
label_87E8:; return;
label_87EB:; return;
label_87EE:; return;
label_87EF:; return;
label_87F1:; return;
label_87F2:; return;
label_87F4:; return;
label_87F6:; return;
label_87F8:; return;
label_87FA:; return;
label_87FD:; return;
label_8800:; return;
label_8801:; return;
label_8804:; return;
label_8805:; return;
label_8807:; return;
label_880A:; return;
label_880D:; return;
label_880F:; return;
label_8811:; return;
label_8813:; return;
label_8816:; return;
label_8817:; return;
label_8819:; return;
label_881C:; return;
label_881D:; return;
label_8820:; return;
label_8823:; return;
label_8824:; return;
label_8826:; return;
label_8828:; return;
label_882B:; return;
label_882C:; return;
label_882E:; return;
label_8830:; return;
label_8832:; return;
label_8833:; return;
label_8835:; return;
label_8837:; return;
label_8839:; return;
label_883B:; return;
label_883D:; return;
label_8840:; return;
label_8843:; return;
label_8844:; return;
label_8846:; return;
label_8848:; return;
label_884A:; return;
label_884D:; return;
label_884F:; return;
label_8851:; return;
label_8854:; return;
label_8857:; return;
label_8859:; return;
label_885B:; return;
label_885E:; return;
label_8861:; return;
label_8863:; return;
label_8865:; return;
label_8868:; return;
label_886B:; return;
label_886E:; return;
label_886F:; return;
label_8872:; return;
label_8874:; return;
label_8877:; return;
label_887A:; return;
label_887C:; return;
label_887F:; return;
label_8882:; return;
label_8884:; return;
label_8887:; return;
label_8889:; return;
label_888C:; return;
label_888F:; return;
label_8892:; return;
label_8894:; return;
label_8897:; return;
label_8899:; return;
label_889B:; return;
label_889D:; return;
label_889F:; return;
label_88A1:; return;
label_88A4:; return;
label_88A7:; return;
label_88A9:; return;
label_88AC:; return;
label_88AF:; return;
label_88B2:; return;
label_88B4:; return;
label_88B7:; return;
label_88B8:; return;
label_88BB:; return;
label_88BD:; return;
label_88C0:; return;
label_88C3:; return;
label_88C5:; return;
label_88C8:; return;
label_88CB:; return;
label_88CD:; return;
label_88D0:; return;
label_88D2:; return;
label_88D5:; return;
label_88D8:; return;
label_88DB:; return;
label_88DD:; return;
label_88E0:; return;
label_88E2:; return;
label_88E4:; return;
label_88E6:; return;
label_88E8:; return;
label_88EA:; return;
label_88ED:; return;
label_88EF:; return;
label_88F2:; return;
label_88F5:; return;
label_88F8:; return;
label_88FB:; return;
label_88FD:; return;
label_8900:; return;
label_8903:; return;
label_8906:; return;
label_8908:; return;
label_890B:; return;
label_890C:; return;
label_890F:; return;
label_8910:; return;
label_8913:; return;
label_8914:; return;
label_8916:; return;
label_8919:; return;
label_891B:; return;
label_891C:; return;
label_891E:; return;
label_8920:; return;
label_8923:; return;
label_8924:; return;
label_8926:; return;
label_8928:; return;
label_892B:; return;
label_892E:; return;
label_892F:; return;
label_8930:; return;
label_8931:; return;
label_8932:; return;
label_8933:; return;
label_8935:; return;
label_8936:; return;
label_8938:; return;
label_893B:; return;
label_893D:; return;
label_893F:; return;
label_8941:; return;
label_8944:; return;
label_8945:; return;
label_8947:; return;
label_894A:; return;
label_894B:; return;
label_894E:; return;
label_8950:; return;
label_8952:; return;
label_8955:; return;
label_8956:; return;
label_8959:; return;
label_895C:; return;
label_895D:; return;
label_895E:; return;
label_895F:; return;
label_8961:; return;
label_8962:; return;
label_8964:; return;
label_8966:; return;
label_8968:; return;
label_8969:; return;
label_896A:; return;
label_896C:; return;
label_896E:; return;
label_8970:; return;
label_8972:; return;
label_8975:; return;
label_8978:; return;
label_8979:; return;
label_897C:; return;
label_897D:; return;
label_8980:; return;
label_8981:; return;
label_8983:; return;
label_8986:; return;
label_8988:; return;
label_8989:; return;
label_898B:; return;
label_898D:; return;
label_8990:; return;
label_8991:; return;
label_8993:; return;
label_8995:; return;
label_8998:; return;
label_899B:; return;
label_899D:; return;
label_899F:; return;
label_89A1:; return;
label_89A4:; return;
label_89A5:; return;
label_89A7:; return;
label_89AA:; return;
label_89AB:; return;
label_89AE:; return;
label_89B0:; return;
label_89B2:; return;
label_89B5:; return;
label_89B6:; return;
label_89B8:; return;
label_89BB:; return;
label_89BC:; return;
label_89BE:; return;
label_89C0:; return;
label_89C2:; return;
label_89C4:; return;
label_89C6:; return;
label_89C8:; return;
label_89CB:; return;
label_89CE:; return;
label_89CF:; return;
label_89D2:; return;
label_89D4:; return;
label_89D6:; return;
label_89D8:; return;
label_89DB:; return;
label_89DE:; return;
label_89E0:; return;
label_89E3:; return;
label_89E4:; return;
label_89E7:; return;
label_89E8:; return;
label_89EA:; return;
label_89EB:; return;
label_89EE:; return;
label_89F1:; return;
label_89F3:; return;
label_89F6:; return;
label_89F9:; return;
label_89FC:; return;
label_89FF:; return;
label_8A02:; return;
label_8A05:; return;
label_8A08:; return;
label_8A0B:; return;
label_8A0E:; return;
label_8A11:; return;
label_8A14:; return;
label_8A17:; return;
label_8A1A:; return;
label_8A1D:; return;
label_8A1F:; return;
label_8A22:; return;
label_8A24:; return;
label_8A27:; return;
label_8A2A:; return;
label_8A2D:; return;
label_8A30:; return;
label_8A33:; return;
label_8A35:; return;
label_8A38:; return;
label_8A3A:; return;
label_8A3D:; return;
label_8A3F:; return;
label_8A42:; return;
label_8A44:; return;
label_8A47:; return;
label_8A49:; return;
label_8A4C:; return;
label_8A4E:; return;
label_8A51:; return;
label_8A52:; return;
label_8A55:; return;
label_8A56:; return;
label_8A57:; return;
label_8A5A:; return;
label_8A5D:; return;
label_8A5F:; return;
label_8A62:; return;
label_8A64:; return;
label_8A67:; return;
label_8A69:; return;
label_8A6B:; return;
label_8A6D:; return;
label_8A6F:; return;
label_8A70:; return;
label_8A72:; return;
label_8A74:; return;
label_8A77:; return;
label_8A79:; return;
label_8A7B:; return;
label_8A7D:; return;
label_8A7F:; return;
label_8A80:; return;
label_8A82:; return;
label_8A84:; return;
label_8A87:; return;
label_8A89:; return;
label_8A8B:; return;
label_8A8D:; return;
label_8A8F:; return;
label_8A90:; return;
label_8A92:; return;
label_8A94:; return;
label_8A96:; return;
label_8A98:; return;
label_8A9A:; return;
label_8A9C:; return;
label_8A9E:; return;
label_8AA0:; return;
label_8AA2:; return;
label_8AA3:; return;
label_8AA5:; return;
label_8AA7:; return;
label_8AA9:; return;
label_8AAB:; return;
label_8AAE:; return;
label_8AB0:; return;
label_8AB2:; return;
label_8AB4:; return;
label_8AB6:; return;
label_8AB9:; return;
label_8ABF:; return;
label_8AC2:; return;
label_8AC4:; return;
label_8AC6:; return;
label_8AC8:; return;
label_8ACB:; return;
label_8ACD:; return;
label_8AD0:; return;
label_8AD6:; return;
label_8AD7:; return;
label_8AD9:; return;
label_8ADB:; return;
label_8ADE:; return;
label_8AE0:; return;
label_8AE2:; return;
label_8AE5:; return;
label_8AE8:; return;
label_8AEA:; return;
label_8AEC:; return;
label_8AEF:; return;
label_8AF2:; return;
label_8AF4:; return;
label_8AF6:; return;
label_8AF9:; return;
label_8AFC:; return;
label_8AFF:; return;
label_8B00:; return;
label_8B02:; return;
label_8B05:; return;
label_8B06:; return;
label_8B08:; return;
label_8B0A:; return;
label_8B0C:; return;
label_8B0E:; return;
label_8B11:; return;
label_8B13:; return;
label_8B16:; return;
label_8B17:; return;
label_8B18:; return;
label_8B19:; return;
label_8B1A:; return;
label_8B1B:; return;
label_8B1D:; return;
label_8B20:; return;
label_8B21:; return;
label_8B24:; return;
label_8B25:; return;
label_8B27:; return;
label_8B2A:; return;
label_8B2D:; return;
label_8B2F:; return;
label_8B31:; return;
label_8B33:; return;
label_8B36:; return;
label_8B37:; return;
label_8B39:; return;
label_8B3C:; return;
label_8B3D:; return;
label_8B40:; return;
label_8B43:; return;
label_8B44:; return;
label_8B46:; return;
label_8B49:; return;
label_8B4C:; return;
label_8B4D:; return;
label_8B4E:; return;
label_8B50:; return;
label_8B52:; return;
label_8B54:; return;
label_8B55:; return;
label_8B57:; return;
label_8B59:; return;
label_8B5A:; return;
label_8B5C:; return;
label_8B5D:; return;
label_8B5F:; return;
label_8B61:; return;
label_8B63:; return;
label_8B65:; return;
label_8B67:; return;
label_8B69:; return;
label_8B6B:; return;
label_8B6D:; return;
label_8B6F:; return;
label_8B72:; return;
label_8B73:; return;
label_8B75:; return;
label_8B78:; return;
label_8B79:; return;
label_8B7B:; return;
label_8B7E:; return;
label_8B80:; return;
label_8B81:; return;
label_8B83:; return;
label_8B86:; return;
label_8B87:; return;
label_8B89:; return;
label_8B8C:; return;
label_8B8D:; return;
label_8B8F:; return;
label_8B90:; return;
label_8B93:; return;
label_8B96:; return;
label_8B97:; return;
label_8B9A:; return;
label_8B9D:; return;
label_8B9E:; return;
label_8BA0:; return;
label_8BA3:; return;
label_8BA4:; return;
label_8BA6:; return;
label_8BA8:; return;
label_8BAB:; return;
label_8BAC:; return;
label_8BAE:; return;
label_8BB1:; return;
label_8BB2:; return;
label_8BB5:; return;
label_8BB8:; return;
label_8BB9:; return;
label_8BBC:; return;
label_8BBF:; return;
label_8BC0:; return;
label_8BC2:; return;
label_8BC5:; return;
label_8BC7:; return;
label_8BCA:; return;
label_8BCD:; return;
label_8BCE:; return;
label_8BD0:; return;
label_8BD3:; return;
label_8BD4:; return;
label_8BD6:; return;
label_8BD8:; return;
label_8BDA:; return;
label_8BDC:; return;
label_8BDF:; return;
label_8BE2:; return;
label_8BE3:; return;
label_8BE6:; return;
label_8BE7:; return;
label_8BE9:; return;
label_8BEC:; return;
label_8BEF:; return;
label_8BF1:; return;
label_8BF3:; return;
label_8BF5:; return;
label_8BF8:; return;
label_8BF9:; return;
label_8BFB:; return;
label_8BFE:; return;
label_8BFF:; return;
label_8C02:; return;
label_8C05:; return;
label_8C06:; return;
label_8C08:; return;
label_8C0A:; return;
label_8C0D:; return;
label_8C0E:; return;
label_8C10:; return;
label_8C12:; return;
label_8C14:; return;
label_8C15:; return;
label_8C17:; return;
label_8C19:; return;
label_8C1B:; return;
label_8C1D:; return;
label_8C1F:; return;
label_8C21:; return;
label_8C23:; return;
label_8C25:; return;
label_8C27:; return;
label_8C2A:; return;
label_8C2B:; return;
label_8C2D:; return;
label_8C30:; return;
label_8C31:; return;
label_8C33:; return;
label_8C36:; return;
label_8C38:; return;
label_8C39:; return;
label_8C3B:; return;
label_8C3E:; return;
label_8C3F:; return;
label_8C41:; return;
label_8C44:; return;
label_8C45:; return;
label_8C48:; return;
label_8C49:; return;
label_8C4B:; return;
label_8C4E:; return;
label_8C4F:; return;
label_8C51:; return;
label_8C53:; return;
label_8C56:; return;
label_8C57:; return;
label_8C59:; return;
label_8C5C:; return;
label_8C5D:; return;
label_8C5F:; return;
label_8C62:; return;
label_8C63:; return;
label_8C66:; return;
label_8C67:; return;
label_8C69:; return;
label_8C6C:; return;
label_8C6E:; return;
label_8C71:; return;
label_8C74:; return;
label_8C75:; return;
label_8C78:; return;
label_8C79:; return;
label_8C7B:; return;
label_8C7C:; return;
label_8C7E:; return;
label_8C7F:; return;
label_8C80:; return;
label_8C81:; return;
label_8C84:; return;
label_8C87:; return;
label_8C8A:; return;
label_8C8D:; return;
label_8C90:; return;
label_8C93:; return;
label_8C96:; return;
label_8C99:; return;
label_8C9C:; return;
label_8C9D:; return;
label_8CA0:; return;
label_8CA2:; return;
label_8CA4:; return;
label_8CA7:; return;
label_8CAA:; return;
label_8CAB:; return;
label_8CAD:; return;
label_8CB0:; return;
label_8CB3:; return;
label_8CB6:; return;
label_8CB8:; return;
label_8CBA:; return;
label_8CBB:; return;
label_8CBD:; return;
label_8CC0:; return;
label_8CC2:; return;
label_8CC4:; return;
label_8CC5:; return;
label_8CC7:; return;
label_8CCA:; return;
label_8CCD:; return;
label_8CD0:; return;
label_8CD2:; return;
label_8CD4:; return;
label_8CD5:; return;
label_8CD7:; return;
label_8CDA:; return;
label_8CDC:; return;
label_8CDE:; return;
label_8CDF:; return;
label_8CE1:; return;
label_8CE4:; return;
label_8CE7:; return;
label_8CEA:; return;
label_8CEC:; return;
label_8CEE:; return;
label_8CEF:; return;
label_8CF1:; return;
label_8CF4:; return;
label_8CF6:; return;
label_8CF8:; return;
label_8CFB:; return;
label_8CFE:; return;
label_8D00:; return;
label_8D06:; return;
label_8D08:; return;
label_8D0A:; return;
label_8D0D:; return;
label_8D10:; return;
label_8D12:; return;
label_8D15:; return;
label_8D17:; return;
label_8D19:; return;
label_8D1B:; return;
label_8D1D:; return;
label_8D1F:; return;
label_8D22:; return;
label_8D24:; return;
label_8D26:; return;
label_8D27:; return;
label_8D2A:; return;
label_8D2C:; return;
label_8D2E:; return;
label_8D30:; return;
label_8D32:; return;
label_8D35:; return;
label_8D36:; return;
label_8D39:; return;
label_8D3A:; return;
label_8D3C:; return;
label_8D3D:; return;
label_8D3F:; return;
label_8D41:; return;
label_8D44:; return;
label_8D47:; return;
label_8D4A:; return;
label_8D4D:; return;
label_8D4F:; return;
label_8D52:; return;
label_8D53:; return;
label_8D56:; return;
label_8D57:; return;
label_8D59:; return;
label_8D5A:; return;
label_8D5D:; return;
label_8D60:; return;
label_8D62:; return;
label_8D65:; return;
label_8D68:; return;
label_8D6B:; return;
label_8D6E:; return;
label_8D71:; return;
label_8D74:; return;
label_8D77:; return;
label_8D7A:; return;
label_8D7D:; return;
label_8D80:; return;
label_8D83:; return;
label_8D86:; return;
label_8D89:; return;
label_8D8C:; return;
label_8D8E:; return;
label_8D91:; return;
label_8D93:; return;
label_8D96:; return;
label_8D99:; return;
label_8D9C:; return;
label_8D9F:; return;
label_8DA2:; return;
label_8DA4:; return;
label_8DA7:; return;
label_8DA9:; return;
label_8DAC:; return;
label_8DAE:; return;
label_8DB1:; return;
label_8DB3:; return;
label_8DB6:; return;
label_8DB8:; return;
label_8DBB:; return;
label_8DBD:; return;
label_8DBF:; return;
label_8DC0:; return;
label_8DC2:; return;
label_8DC3:; return;
label_8DC6:; return;
label_8DC7:; return;
label_8DCA:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD2:; return;
label_8DD4:; return;
label_8DD7:; return;
label_8DD9:; return;
label_8DDB:; return;
label_8DDD:; return;
label_8DDF:; return;
label_8DE0:; return;
label_8DE2:; return;
label_8DE4:; return;
label_8DE7:; return;
label_8DE9:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEF:; return;
label_8DF0:; return;
label_8DF2:; return;
label_8DF4:; return;
label_8DF7:; return;
label_8DF9:; return;
label_8DFB:; return;
label_8DFD:; return;
label_8DFF:; return;
label_8E00:; return;
label_8E02:; return;
label_8E04:; return;
label_8E06:; return;
label_8E08:; return;
label_8E0A:; return;
label_8E0C:; return;
label_8E0E:; return;
label_8E10:; return;
label_8E12:; return;
label_8E14:; return;
label_8E16:; return;
label_8E18:; return;
label_8E1B:; return;
label_8E1D:; return;
label_8E1F:; return;
label_8E21:; return;
label_8E23:; return;
label_8E26:; return;
label_8E2C:; return;
label_8E2F:; return;
label_8E31:; return;
label_8E33:; return;
label_8E35:; return;
label_8E38:; return;
label_8E3A:; return;
label_8E3D:; return;
label_8E43:; return;
label_8E44:; return;
label_8E46:; return;
label_8E48:; return;
label_8E4B:; return;
label_8E4D:; return;
label_8E4F:; return;
label_8E52:; return;
label_8E55:; return;
label_8E57:; return;
label_8E59:; return;
label_8E5C:; return;
label_8E5F:; return;
label_8E61:; return;
label_8E63:; return;
label_8E66:; return;
label_8E69:; return;
label_8E6C:; return;
label_8E6D:; return;
label_8E70:; return;
label_8E71:; return;
label_8E74:; return;
label_8E75:; return;
label_8E77:; return;
label_8E7A:; return;
label_8E7C:; return;
label_8E7F:; return;
label_8E80:; return;
label_8E82:; return;
label_8E84:; return;
label_8E87:; return;
label_8E88:; return;
label_8E8A:; return;
label_8E8C:; return;
label_8E8F:; return;
label_8E92:; return;
label_8E93:; return;
label_8E94:; return;
label_8E95:; return;
label_8E96:; return;
label_8E98:; return;
label_8E99:; return;
label_8E9C:; return;
label_8E9D:; return;
label_8E9F:; return;
label_8EA2:; return;
label_8EA4:; return;
label_8EA6:; return;
label_8EA8:; return;
label_8EAB:; return;
label_8EAC:; return;
label_8EAE:; return;
label_8EB1:; return;
label_8EB2:; return;
label_8EB5:; return;
label_8EB7:; return;
label_8EB9:; return;
label_8EBC:; return;
label_8EBD:; return;
label_8EC0:; return;
label_8EC3:; return;
label_8EC4:; return;
label_8EC5:; return;
label_8EC6:; return;
label_8EC8:; return;
label_8EC9:; return;
label_8ECB:; return;
label_8ECD:; return;
label_8ECF:; return;
label_8ED0:; return;
label_8ED1:; return;
label_8ED3:; return;
label_8ED5:; return;
label_8ED7:; return;
label_8ED9:; return;
label_8EDB:; return;
label_8EDD:; return;
label_8EDF:; return;
label_8EE1:; return;
label_8EE4:; return;
label_8EE5:; return;
label_8EE7:; return;
label_8EE9:; return;
label_8EEB:; return;
label_8EED:; return;
label_8EF0:; return;
label_8EF2:; return;
label_8EF5:; return;
label_8EF6:; return;
label_8EF7:; return;
label_8EF8:; return;
label_8EF9:; return;
label_8EFA:; return;
label_8EFC:; return;
label_8EFF:; return;
label_8F00:; return;
label_8F02:; return;
label_8F05:; return;
label_8F06:; return;
label_8F08:; return;
label_8F0B:; return;
label_8F0C:; return;
label_8F0F:; return;
label_8F12:; return;
label_8F13:; return;
label_8F16:; return;
label_8F19:; return;
label_8F1A:; return;
label_8F1C:; return;
label_8F1E:; return;
label_8F21:; return;
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
label_8F38:; return;
label_8F3B:; return;
label_8F3C:; return;
label_8F3E:; return;
label_8F41:; return;
label_8F43:; return;
label_8F46:; return;
label_8F49:; return;
label_8F4A:; return;
label_8F4D:; return;
label_8F4E:; return;
label_8F51:; return;
label_8F52:; return;
label_8F54:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5C:; return;
label_8F5D:; return;
label_8F5F:; return;
label_8F61:; return;
label_8F64:; return;
label_8F65:; return;
label_8F67:; return;
label_8F69:; return;
label_8F6C:; return;
label_8F6F:; return;
label_8F71:; return;
label_8F73:; return;
label_8F75:; return;
label_8F78:; return;
label_8F79:; return;
label_8F7B:; return;
label_8F7E:; return;
label_8F7F:; return;
label_8F82:; return;
label_8F84:; return;
label_8F86:; return;
label_8F89:; return;
label_8F8A:; return;
label_8F8C:; return;
label_8F8F:; return;
label_8F90:; return;
label_8F92:; return;
label_8F94:; return;
label_8F96:; return;
label_8F98:; return;
label_8F9A:; return;
label_8F9C:; return;
label_8F9E:; return;
label_8FA0:; return;
label_8FA2:; return;
label_8FA4:; return;
label_8FA7:; return;
label_8FA8:; return;
label_8FAA:; return;
label_8FAC:; return;
label_8FAE:; return;
label_8FB0:; return;
label_8FB3:; return;
label_8FB5:; return;
label_8FB8:; return;
label_8FB9:; return;
label_8FBB:; return;
label_8FBE:; return;
label_8FBF:; return;
label_8FC1:; return;
label_8FC4:; return;
label_8FC5:; return;
label_8FC7:; return;
label_8FCA:; return;
label_8FCB:; return;
label_8FCE:; return;
label_8FCF:; return;
label_8FD1:; return;
label_8FD3:; return;
label_8FD6:; return;
label_8FD7:; return;
label_8FD9:; return;
label_8FDC:; return;
label_8FDD:; return;
label_8FDF:; return;
label_8FE2:; return;
label_8FE3:; return;
label_8FE5:; return;
label_8FE8:; return;
label_8FE9:; return;
label_8FEC:; return;
label_8FED:; return;
label_8FEF:; return;
label_8FF2:; return;
label_8FF4:; return;
label_8FF7:; return;
label_8FFA:; return;
label_8FFB:; return;
label_8FFD:; return;
label_8FFE:; return;
label_9000:; return;
label_9002:; return;
label_9004:; return;
label_9006:; return;
label_9007:; return;
label_9009:; return;
label_900B:; return;
label_900D:; return;
label_900F:; return;
label_9011:; return;
label_9013:; return;
label_9015:; return;
label_9016:; return;
label_9018:; return;
label_901A:; return;
label_901C:; return;
label_901E:; return;
label_9020:; return;
label_9022:; return;
label_9024:; return;
label_9025:; return;
label_9027:; return;
label_9029:; return;
label_902B:; return;
label_902D:; return;
label_902F:; return;
label_9031:; return;
label_9033:; return;
label_9034:; return;
label_9036:; return;
label_9038:; return;
label_903A:; return;
label_903C:; return;
label_903E:; return;
label_9040:; return;
label_9042:; return;
label_9043:; return;
label_9045:; return;
label_9047:; return;
label_9049:; return;
label_904B:; return;
label_904D:; return;
label_904E:; return;
label_9051:; return;
label_9053:; return;
label_9056:; return;
label_9058:; return;
label_905A:; return;
label_905C:; return;
label_905F:; return;
label_9060:; return;
label_9062:; return;
label_9064:; return;
label_9067:; return;
label_9069:; return;
label_906B:; return;
label_906E:; return;
label_906F:; return;
label_9071:; return;
label_9073:; return;
label_9076:; return;
label_9078:; return;
label_907A:; return;
label_907D:; return;
label_907E:; return;
label_9080:; return;
label_9082:; return;
label_9085:; return;
label_9087:; return;
label_9089:; return;
label_908C:; return;
label_908D:; return;
label_908F:; return;
label_9091:; return;
label_9094:; return;
label_9096:; return;
label_9099:; return;
label_909B:; return;
label_909E:; return;
label_90A0:; return;
label_90A2:; return;
label_90A4:; return;
label_90A5:; return;
label_90A8:; return;
label_90AB:; return;
label_90AD:; return;
label_90AF:; return;
label_90B0:; return;
label_90B2:; return;
label_90B5:; return;
label_90B8:; return;
label_90BA:; return;
label_90BB:; return;
label_90BE:; return;
label_90C1:; return;
label_90C3:; return;
label_90C5:; return;
label_90C6:; return;
label_90C8:; return;
label_90CB:; return;
label_90CE:; return;
label_90D0:; return;
label_90D1:; return;
label_90D4:; return;
label_90D7:; return;
label_90D9:; return;
label_90DB:; return;
label_90DC:; return;
label_90DE:; return;
label_90E1:; return;
label_90E4:; return;
label_90E6:; return;
label_90E7:; return;
label_90EA:; return;
label_90ED:; return;
label_90EF:; return;
label_90F1:; return;
label_90F2:; return;
label_90F4:; return;
label_90F7:; return;
label_90FA:; return;
label_90FC:; return;
label_90FD:; return;
label_9100:; return;
label_9103:; return;
label_9105:; return;
label_9107:; return;
label_9108:; return;
label_910A:; return;
label_910D:; return;
label_9110:; return;
label_9112:; return;
label_9113:; return;
label_9116:; return;
label_9119:; return;
label_911B:; return;
label_911D:; return;
label_911F:; return;
label_9122:; return;
label_9125:; return;
label_9128:; return;
label_912B:; return;
label_912E:; return;
label_9131:; return;
label_9133:; return;
label_9136:; return;
label_9137:; return;
label_9138:; return;
label_9139:; return;
label_913A:; return;
label_913C:; return;
label_913D:; return;
label_913E:; return;
label_913F:; return;
label_9140:; return;
label_9141:; return;
label_9142:; return;
label_9143:; return;
label_9144:; return;
label_9145:; return;
label_9146:; return;
label_9149:; return;
label_914B:; return;
label_914C:; return;
label_914D:; return;
label_9150:; return;
label_9151:; return;
label_9154:; return;
label_9156:; return;
label_9159:; return;
label_915C:; return;
label_915F:; return;
label_9161:; return;
label_9162:; return;
label_9163:; return;
label_9164:; return;
label_9166:; return;
label_9169:; return;
label_916B:; return;
label_916D:; return;
label_916F:; return;
label_9172:; return;
label_9174:; return;
label_9177:; return;
label_917A:; return;
label_917C:; return;
label_917E:; return;
label_9180:; return;
label_9183:; return;
label_9185:; return;
label_9188:; return;
label_918B:; return;
label_918D:; return;
label_9190:; return;
label_9192:; return;
label_9195:; return;
label_9197:; return;
label_9199:; return;
label_919B:; return;
label_919D:; return;
label_91A0:; return;
label_91A2:; return;
label_91A5:; return;
label_91A8:; return;
label_91AA:; return;
label_91AC:; return;
label_91AE:; return;
label_91B1:; return;
label_91B3:; return;
label_91B6:; return;
label_91B9:; return;
label_91BB:; return;
label_91BE:; return;
label_91C0:; return;
label_91C3:; return;
label_91C4:; return;
label_91C7:; return;
label_91C8:; return;
label_91CB:; return;
label_91CC:; return;
label_91CF:; return;
label_91D0:; return;
label_91D2:; return;
label_91D3:; return;
label_91D4:; return;
label_91D6:; return;
label_91D7:; return;
label_91DA:; return;
label_91DD:; return;
label_91DE:; return;
label_91E0:; return;
label_91E3:; return;
label_91E6:; return;
label_91E7:; return;
label_91E8:; return;
label_91EA:; return;
label_91EC:; return;
label_91ED:; return;
label_91F0:; return;
label_91F2:; return;
label_91F3:; return;
label_91F6:; return;
label_91F8:; return;
label_91FB:; return;
label_91FC:; return;
label_91FF:; return;
label_9200:; return;
label_9202:; return;
label_9203:; return;
label_9204:; return;
label_9205:; return;
label_9206:; return;
label_9207:; return;
label_9209:; return;
label_920C:; return;
label_920D:; return;
label_9210:; return;
label_9211:; return;
label_9213:; return;
label_9214:; return;
label_9215:; return;
label_9216:; return;
label_9218:; return;
label_921A:; return;
label_921D:; return;
label_921E:; return;
label_9221:; return;
label_9223:; return;
label_9226:; return;
label_9228:; return;
label_922B:; return;
label_922C:; return;
label_922D:; return;
label_922E:; return;
label_9231:; return;
label_9232:; return;
label_9234:; return;
label_9237:; return;
label_9239:; return;
label_923B:; return;
label_923D:; return;
label_923F:; return;
label_9241:; return;
label_9243:; return;
label_9246:; return;
label_9248:; return;
label_9249:; return;
label_924B:; return;
label_924C:; return;
label_924D:; return;
label_924E:; return;
label_9251:; return;
label_9253:; return;
label_9256:; return;
label_9259:; return;
label_925A:; return;
label_925D:; return;
label_9260:; return;
label_9262:; return;
label_9265:; return;
label_9266:; return;
label_9267:; return;
label_9268:; return;
label_9269:; return;
label_926A:; return;
label_926D:; return;
label_926F:; return;
label_9272:; return;
label_9275:; return;
label_9276:; return;
label_9279:; return;
label_927C:; return;
label_927E:; return;
label_9281:; return;
label_9282:; return;
label_9283:; return;
label_9284:; return;
label_9286:; return;
label_9289:; return;
label_928A:; return;
label_928D:; return;
label_928F:; return;
label_9290:; return;
label_9293:; return;
label_9295:; return;
label_9297:; return;
label_9299:; return;
label_929B:; return;
label_929D:; return;
label_929F:; return;
label_92A1:; return;
label_92A3:; return;
label_92A5:; return;
label_92A7:; return;
label_92AA:; return;
label_92AC:; return;
label_92AE:; return;
label_92B0:; return;
label_92B2:; return;
label_92B5:; return;
label_92B7:; return;
label_92B9:; return;
label_92BC:; return;
label_92BE:; return;
label_92BF:; return;
label_92C1:; return;
label_92C2:; return;
label_92C3:; return;
label_92C4:; return;
label_92C5:; return;
label_92C7:; return;
label_92C8:; return;
label_92CA:; return;
label_92CC:; return;
label_92CE:; return;
label_92D0:; return;
label_92D2:; return;
label_92D4:; return;
label_92D6:; return;
label_92D7:; return;
label_92D9:; return;
label_92DB:; return;
label_92DD:; return;
label_92DF:; return;
label_92E1:; return;
label_92E3:; return;
label_92E4:; return;
label_92E6:; return;
label_92E8:; return;
label_92EA:; return;
label_92EC:; return;
label_92ED:; return;
label_92EF:; return;
label_92F1:; return;
label_92F2:; return;
label_92F4:; return;
label_92F6:; return;
label_92F8:; return;
label_92F9:; return;
label_92FB:; return;
label_92FD:; return;
label_92FF:; return;
label_9301:; return;
label_9303:; return;
label_9304:; return;
label_9306:; return;
label_9308:; return;
label_930A:; return;
label_930C:; return;
label_930D:; return;
label_930F:; return;
label_9311:; return;
label_9313:; return;
label_9315:; return;
label_9316:; return;
label_9318:; return;
label_931B:; return;
label_931C:; return;
label_931F:; return;
label_9320:; return;
label_9323:; return;
label_9324:; return;
label_9326:; return;
label_9327:; return;
label_9328:; return;
label_932A:; return;
label_932B:; return;
label_932E:; return;
label_9331:; return;
label_9332:; return;
label_9334:; return;
label_9337:; return;
label_933A:; return;
label_933B:; return;
label_933D:; return;
label_9340:; return;
label_9341:; return;
label_9344:; return;
label_9346:; return;
label_9347:; return;
label_934A:; return;
label_934C:; return;
label_934E:; return;
label_9350:; return;
label_9352:; return;
label_9354:; return;
label_9356:; return;
}

void func_9FE6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9FE6_b5");
#endif
label_9FE6:;
    /* $9FE6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA044, 5); return;
}

void func_81B8_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81B8_b5");
#endif
label_81B8:;
    /* $81B8: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_81BA:;
    /* $81BA: 8D */ maybe_trigger_vblank(4); nes_write(0x05C3, g_cpu.A);
label_81BD:;
    /* $81BD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0432); FLAG_NZ(g_cpu.A);
label_81C0:;
    /* $81C0: 8D */ maybe_trigger_vblank(4); nes_write(0x05C7, g_cpu.A);
label_81C3:;
    /* $81C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x56; FLAG_NZ(g_cpu.A);
label_81C5:;
    /* $81C5: 8D */ maybe_trigger_vblank(4); nes_write(0x05CB, g_cpu.A);
label_81C8:;
    /* $81C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_81CA:;
    /* $81CA: 8D */ maybe_trigger_vblank(4); nes_write(0x05BC, g_cpu.A);
label_81CD:;
    /* $81CD: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_81D0:;
    /* $81D0: 8D */ maybe_trigger_vblank(4); nes_write(0x05C4, g_cpu.A);
label_81D3:;
    /* $81D3: 8D */ maybe_trigger_vblank(4); nes_write(0x05C8, g_cpu.A);
label_81D6:;
    /* $81D6: 8D */ maybe_trigger_vblank(4); nes_write(0x05CC, g_cpu.A);
label_81D9:;
    /* $81D9: 8D */ maybe_trigger_vblank(4); nes_write(0x05D0, g_cpu.A);
label_81DC:;
    /* $81DC: 8D */ maybe_trigger_vblank(4); nes_write(0x05D4, g_cpu.A);
label_81DF:;
    /* $81DF: 8D */ maybe_trigger_vblank(4); nes_write(0x05D8, g_cpu.A);
label_81E2:;
    /* $81E2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_81E4:;
    /* $81E4: 8D */ maybe_trigger_vblank(4); nes_write(0x05C1, g_cpu.A);
label_81E7:;
    /* $81E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_81E9:;
    /* $81E9: 8D */ maybe_trigger_vblank(4); nes_write(0x05C5, g_cpu.A);
label_81EC:;
    /* $81EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_81EE:;
    /* $81EE: 8D */ maybe_trigger_vblank(4); nes_write(0x05C9, g_cpu.A);
label_81F1:;
    /* $81F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_81F3:;
    /* $81F3: 8D */ maybe_trigger_vblank(4); nes_write(0x05CD, g_cpu.A);
label_81F6:;
    /* $81F6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_81F8:;
    /* $81F8: 8D */ maybe_trigger_vblank(4); nes_write(0x05D1, g_cpu.A);
label_81FB:;
    /* $81FB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_81FD:;
    /* $81FD: 8D */ maybe_trigger_vblank(4); nes_write(0x05D5, g_cpu.A);
label_8200:;
    /* $8200: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_8202:;
    /* $8202: 8D */ maybe_trigger_vblank(4); nes_write(0x05D9, g_cpu.A);
label_8205:;
    /* $8205: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_8207:;
    /* $8207: 8D */ maybe_trigger_vblank(4); nes_write(0x05DA, g_cpu.A);
label_820A:;
    /* $820A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x047F); FLAG_NZ(g_cpu.A);
label_820D:;
    /* $820D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8212; }
label_820F:;
    /* $820F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82B4, 5); return;
label_8212:;
    /* $8212: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_8214:;
    /* $8214: 8D */ maybe_trigger_vblank(4); nes_write(0x05CF, g_cpu.A);
label_8217:;
    /* $8217: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x047F); FLAG_NZ(g_cpu.A);
label_821A:;
    /* $821A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_821B:;
    /* $821B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_821C:;
    /* $821C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_821D:;
    /* $821D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9137 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8220:;
    /* $8220: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8255; }
label_8222:;
    /* $8222: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C3); FLAG_NZ(g_cpu.A);
label_8225:;
    /* $8225: 8D */ maybe_trigger_vblank(4); nes_write(0x05BB, g_cpu.A);
label_8228:;
    /* $8228: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C7); FLAG_NZ(g_cpu.A);
label_822B:;
    /* $822B: 8D */ maybe_trigger_vblank(4); nes_write(0x05BF, g_cpu.A);
label_822E:;
    /* $822E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05CB); FLAG_NZ(g_cpu.A);
label_8231:;
    /* $8231: 8D */ maybe_trigger_vblank(4); nes_write(0x05C3, g_cpu.A);
label_8234:;
    /* $8234: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05CF); FLAG_NZ(g_cpu.A);
label_8237:;
    /* $8237: 8D */ maybe_trigger_vblank(4); nes_write(0x05C7, g_cpu.A);
label_823A:;
    /* $823A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9137 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_823D:;
    /* $823D: 8D */ maybe_trigger_vblank(4); nes_write(0x05CB, g_cpu.A);
label_8240:;
    /* $8240: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9138 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8243:;
    /* $8243: 8D */ maybe_trigger_vblank(4); nes_write(0x05CF, g_cpu.A);
label_8246:;
    /* $8246: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9139 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8249:;
    /* $8249: 8D */ maybe_trigger_vblank(4); nes_write(0x05D3, g_cpu.A);
label_824C:;
    /* $824C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x913A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_824F:;
    /* $824F: 8D */ maybe_trigger_vblank(4); nes_write(0x05D7, g_cpu.A);
label_8252:;
    /* $8252: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82B9, 5); return;
label_8255:;
    /* $8255: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9138 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8258:;
    /* $8258: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_828D; }
label_825A:;
    /* $825A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05BF); FLAG_NZ(g_cpu.A);
label_825D:;
    /* $825D: 8D */ maybe_trigger_vblank(4); nes_write(0x05BB, g_cpu.A);
label_8260:;
    /* $8260: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C3); FLAG_NZ(g_cpu.A);
label_8263:;
    /* $8263: 8D */ maybe_trigger_vblank(4); nes_write(0x05BF, g_cpu.A);
label_8266:;
    /* $8266: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C7); FLAG_NZ(g_cpu.A);
label_8269:;
    /* $8269: 8D */ maybe_trigger_vblank(4); nes_write(0x05C3, g_cpu.A);
label_826C:;
    /* $826C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05CB); FLAG_NZ(g_cpu.A);
label_826F:;
    /* $826F: 8D */ maybe_trigger_vblank(4); nes_write(0x05C7, g_cpu.A);
label_8272:;
    /* $8272: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05CF); FLAG_NZ(g_cpu.A);
label_8275:;
    /* $8275: 8D */ maybe_trigger_vblank(4); nes_write(0x05CB, g_cpu.A);
label_8278:;
    /* $8278: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9138 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_827B:;
    /* $827B: 8D */ maybe_trigger_vblank(4); nes_write(0x05CF, g_cpu.A);
label_827E:;
    /* $827E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9139 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8281:;
    /* $8281: 8D */ maybe_trigger_vblank(4); nes_write(0x05D3, g_cpu.A);
label_8284:;
    /* $8284: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x913A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8287:;
    /* $8287: 8D */ maybe_trigger_vblank(4); nes_write(0x05D7, g_cpu.A);
label_828A:;
    /* $828A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82B9, 5); return;
label_828D:;
    /* $828D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9139 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8290:;
    /* $8290: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82A1; }
label_8292:;
    /* $8292: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9139 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8295:;
    /* $8295: 8D */ maybe_trigger_vblank(4); nes_write(0x05D3, g_cpu.A);
label_8298:;
    /* $8298: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x913A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_829B:;
    /* $829B: 8D */ maybe_trigger_vblank(4); nes_write(0x05D7, g_cpu.A);
label_829E:;
    /* $829E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82B9, 5); return;
label_82A1:;
    /* $82A1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x913A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82A4:;
    /* $82A4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82B4; }
label_82A6:;
    /* $82A6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x913A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82A9:;
    /* $82A9: 8D */ maybe_trigger_vblank(4); nes_write(0x05D3, g_cpu.A);
label_82AC:;
    /* $82AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_82AE:;
    /* $82AE: 8D */ maybe_trigger_vblank(4); nes_write(0x05D6, g_cpu.A);
label_82B1:;
    /* $82B1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82B9, 5); return;
label_82B4:;
    /* $82B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_82B6:;
    /* $82B6: 8D */ maybe_trigger_vblank(4); nes_write(0x05CE, g_cpu.A);
label_82B9:;
    /* $82B9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_82BB:;
    /* $82BB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0063 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82BE:;
    /* $82BE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_82BF:;
    /* $82BF: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x042C); FLAG_NZ(g_cpu.X);
label_82C2:;
    /* $82C2: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_82C3:;
    /* $82C3: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_82C4:;
    /* $82C4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC015, 5);
label_82C7:;
    /* $82C7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_82CA:;
    /* $82CA: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_82CC:;
    /* $82CC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_82CF:;
    /* $82CF: 85 */ maybe_trigger_vblank(3); nes_write(0x8A, g_cpu.A);
label_82D1:;
    /* $82D1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_82D4:;
    /* $82D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82E1; }
label_82D6:;
    /* $82D6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_82D8:;
    /* $82D8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_82DA:;
    /* $82DA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8301; }
label_82DC:;
    /* $82DC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_82DD:;
    /* $82DD: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82DF:;
    /* $82DF: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_82E1:;
    /* $82E1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0430); FLAG_NZ(g_cpu.A);
label_82E4:;
    /* $82E4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82F1; }
label_82E6:;
    /* $82E6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_82E8:;
    /* $82E8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_82EA:;
    /* $82EA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8301; }
label_82EC:;
    /* $82EC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_82ED:;
    /* $82ED: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82EF:;
    /* $82EF: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_82F1:;
    /* $82F1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_82F4:;
    /* $82F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8301; }
label_82F6:;
    /* $82F6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_82F8:;
    /* $82F8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_82FA:;
    /* $82FA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8301; }
label_82FC:;
    /* $82FC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_82FD:;
    /* $82FD: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82FF:;
    /* $82FF: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_8301:;
    /* $8301: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8303:;
    /* $8303: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8305:;
    /* $8305: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBA; FLAG_NZ(g_cpu.A);
label_8307:;
    /* $8307: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8309:;
    /* $8309: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_830B:;
    /* $830B: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_830D:;
    /* $830D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8A); FLAG_NZ(g_cpu.A);
label_830F:;
    /* $830F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8310:;
    /* $8310: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_8312:;
    /* $8312: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8314:;
    /* $8314: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_8316:;
    /* $8316: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8318:;
    /* $8318: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_831B:;
    /* $831B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_831D:;
    /* $831D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_831F:;
    /* $831F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_832F; }
label_8321:;
    /* $8321: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8323:;
    /* $8323: 8D */ maybe_trigger_vblank(4); nes_write(0x0412, g_cpu.A);
label_8326:;
    /* $8326: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_832C:;
    /* $832C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8343, 5); return;
label_832F:;
    /* $832F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8343; }
label_8333:;
    /* $8333: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8335:;
    /* $8335: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8338:;
    /* $8338: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_833A:;
    /* $833A: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_833D:;
    /* $833D: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8343:;
    /* $8343: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9E6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E6_b5");
#endif
label_A9E6:;
    /* $A9E6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9E8:;
    /* $A9E8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_A9EA:;
    /* $A9EA: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0020); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xF8; g_cpu.C=(g_cpu.Y>=0xF8)?1:0; FLAG_NZ(r&0xFF); }
label_A9EF:;
    /* $A9EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF9; FLAG_NZ(g_cpu.A);
label_A9F1:;
    /* $A9F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFD; FLAG_NZ(g_cpu.A);
label_A9F3:;
    /* $A9F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A9F5:;
    /* $A9F5: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9F6:;
    /* $A9F6: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xAA); FLAG_NZ(g_cpu.A);
label_A9F8:;
    /* $A9F8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A904_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b5");
#endif
label_A904:;
    /* $A904: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A906:;
    /* $A906: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_A908:;
    /* $A908: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A90A:;
    /* $A90A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A90B:;
    /* $A90B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90C:;
    /* $A90C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0E); g_cpu.A=r&0xFF; }
label_A90E:;
    /* $A90E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A90F:;
    /* $A90F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A910:;
    /* $A910: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A913:;
    /* $A913: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A914:;
    /* $A914: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A915:;
    /* $A915: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A917:;
    /* $A917: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A900_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A900_b5");
#endif
label_A900:;
    /* $A900: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_A902:;
    /* $A902: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A904:;
    /* $A904: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A906:;
    /* $A906: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_A908:;
    /* $A908: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A90A:;
    /* $A90A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A90B:;
    /* $A90B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90C:;
    /* $A90C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0E); g_cpu.A=r&0xFF; }
label_A90E:;
    /* $A90E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A90F:;
    /* $A90F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A910:;
    /* $A910: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A913:;
    /* $A913: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A914:;
    /* $A914: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A915:;
    /* $A915: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A917:;
    /* $A917: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A501_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A501_b5");
#endif
label_A501:;
    /* $A501: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A503:;
    /* $A503: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A504:;
    /* $A504: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A506:;
    /* $A506: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04FC), 5); return; }
label_A508:;
    /* $A508: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x5A; FLAG_NZ(g_cpu.Y);
label_A50A:;
    /* $A50A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A50C:;
    /* $A50C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A50F:;
    /* $A50F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A510:;
    /* $A510: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE2; FLAG_NZ(g_cpu.A);
label_A512:;
    /* $A512: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A515:;
    /* $A515: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A516:;
    /* $A516: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A518:;
    /* $A518: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A51B:;
    /* $A51B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A51C:;
    /* $A51C: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A51E:;
    /* $A51E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A521:;
    /* $A521: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A524:;
    /* $A524: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A525:;
    /* $A525: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A526:;
    /* $A526: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A528:;
    /* $A528: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A51E;
    }
label_A52A:;
    /* $A52A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A52C:;
    /* $A52C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A52F:;
    /* $A52F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A532:;
    /* $A532: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8AC6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AC6_b5");
#endif
label_8AC6:;
    /* $8AC6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AC8:;
    /* $8AC8: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8ACB:;
    /* $8ACB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8ACD:;
    /* $8ACD: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_8AD0:;
    /* $8AD0: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8AD6:;
    /* $8AD6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3C6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3C6_b5");
#endif
label_B3C6:;
    /* $B3C6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3C8:;
    /* $B3C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B3CA:;
    /* $B3CA: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B3CC:;
    /* $B3CC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3CF:;
    /* $B3CF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B3D0:;
    /* $B3D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x14; FLAG_NZ(g_cpu.Y);
label_B3D2:;
    /* $B3D2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3D5:;
    /* $B3D5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3D8:;
    /* $B3D8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B3D9:;
    /* $B3D9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B3DA:;
    /* $B3DA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3DC:;
    /* $B3DC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3D2;
    }
label_B3DE:;
    /* $B3DE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1E; FLAG_NZ(g_cpu.Y);
label_B3E0:;
    /* $B3E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_B3E2:;
    /* $B3E2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3E5:;
    /* $B3E5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B3E6:;
    /* $B3E6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_B3E8:;
    /* $B3E8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3EB:;
    /* $B3EB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B3EC:;
    /* $B3EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B3EE:;
    /* $B3EE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3F1:;
    /* $B3F1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B3F2:;
    /* $B3F2: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B3F4:;
    /* $B3F4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3F7:;
    /* $B3F7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3FA:;
    /* $B3FA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B3FB:;
    /* $B3FB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B3FC:;
    /* $B3FC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3FE:;
    /* $B3FE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3F4;
    }
label_B400:;
    /* $B400: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B402:;
    /* $B402: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B405:;
    /* $B405: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B408:;
    /* $B408: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3A5_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A5_b5");
#endif
label_B3A5:;
    /* $B3A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3A7:;
    /* $B3A7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02A7); FLAG_NZ(g_cpu.A);
label_B3AA:;
    /* $B3AA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3AD:;
    /* $B3AD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B3AE:;
    /* $B3AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B3B0:;
    /* $B3B0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3B3:;
    /* $B3B3: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B3B6:;
    /* $B3B6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB408, 5); return;
}

void func_A560_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A560_b5");
#endif
label_A560:;
    /* $A560: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x6004 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A563:;
    /* $A563: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_A566:;
    /* $A566: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_A568:;
    /* $A568: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A56B:;
    /* $A56B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A56C:;
    /* $A56C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_A56E:;
    /* $A56E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A571:;
    /* $A571: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A572:;
    /* $A572: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_A574:;
    /* $A574: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A577:;
    /* $A577: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A578:;
    /* $A578: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x40); FLAG_NZ(g_cpu.A);
label_A57A:;
    /* $A57A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A57D:;
    /* $A57D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A57E:;
    /* $A57E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x41); FLAG_NZ(g_cpu.A);
label_A580:;
    /* $A580: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A583:;
    /* $A583: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A584:;
    /* $A584: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x42); FLAG_NZ(g_cpu.A);
label_A586:;
    /* $A586: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A589:;
    /* $A589: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A58A:;
    /* $A58A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A58C:;
    /* $A58C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A58F:;
    /* $A58F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A592:;
    /* $A592: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4A5_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4A5_b5");
#endif
label_A4A5:;
    /* $A4A5: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x9D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A4A7:;
    /* $A4A7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA4A7); return;
}

void func_A185_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A185_b5");
#endif
label_A185:;
    /* $A185: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A186:;
    /* $A186: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A188:;
    /* $A188: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x017A), 5); return; }
label_A18A:;
    /* $A18A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A18C:;
    /* $A18C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A18F:;
    /* $A18F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A192:;
    /* $A192: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_89AD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89AD_b5");
#endif
label_89AD:;
    /* $89AD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x85); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_89AF:;
    /* $89AF: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x09 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_89B1:;
    /* $89B1: 80 */ maybe_trigger_vblank(2); /* NOP */
label_89B3:;
    /* $89B3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x89B3); return;
}

void func_8D04_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D04_b5");
#endif
label_8D04:;
    /* $8D04: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x81); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8D06:;
    /* $8D06: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_8D08:;
    /* $8D08: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_8D0A:;
    /* $8D0A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D26, 5); return;
}

void func_A901_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A901_b5");
#endif
label_A901:;
    /* $A901: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A903:;
    /* $A903: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x85; g_cpu.C=(g_cpu.Y>=0x85)?1:0; FLAG_NZ(r&0xFF); }
label_A905:;
    /* $A905: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA905); return;
}

void func_8596_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8596_b5");
#endif
label_8596:;
    /* $8596: 85 */ maybe_trigger_vblank(3); nes_write(0xA9, g_cpu.A);
label_8598:;
    /* $8598: 80 */ maybe_trigger_vblank(2); /* NOP */
label_859A:;
    /* $859A: CE */ maybe_trigger_vblank(6); { uint16_t a=0xA605; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_859D:;
    /* $859D: 96 */ maybe_trigger_vblank(4); nes_write((0xB5 + g_cpu.Y) & 0xFF, g_cpu.X);
label_859F:;
    /* $859F: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xA9AA); nes_trace_indirect_jump(0x859F, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_A001_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A001_b5");
#endif
label_A001:;
    /* $A001: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A002:;
    /* $A002: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_A004:;
    /* $A004: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A007:;
    /* $A007: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A00A:;
    /* $A00A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A00B:;
    /* $A00B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A00C:;
    /* $A00C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A00D:;
    /* $A00D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_A00F:;
    /* $A00F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A010:;
    /* $A010: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A012:;
    /* $A012: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A004;
    }
label_A014:;
    /* $A014: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A016:;
    /* $A016: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_A018:;
    /* $A018: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A01B:;
    /* $A01B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A01C:;
    /* $A01C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC7; FLAG_NZ(g_cpu.A);
label_A01E:;
    /* $A01E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A021:;
    /* $A021: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A022:;
    /* $A022: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A024:;
    /* $A024: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A026:;
    /* $A026: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_A028:;
    /* $A028: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A02B:;
    /* $A02B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A02C:;
    /* $A02C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A02F:;
    /* $A02F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A032:;
    /* $A032: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A033:;
    /* $A033: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A034:;
    /* $A034: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A035:;
    /* $A035: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_A037:;
    /* $A037: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A038:;
    /* $A038: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A03A:;
    /* $A03A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A02C;
    }
label_A03C:;
    /* $A03C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A03E:;
    /* $A03E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A041:;
    /* $A041: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A044:;
    /* $A044: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B100_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B100_b5");
#endif
label_B100:;
    /* $B100: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B101:;
    /* $B101: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B102:;
    /* $B102: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B104:;
    /* $B104: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x10F6), 5); return; }
label_B106:;
    /* $B106: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_B108:;
    /* $B108: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B10A:;
    /* $B10A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B10D:;
    /* $B10D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B10E:;
    /* $B10E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD9; FLAG_NZ(g_cpu.A);
label_B110:;
    /* $B110: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B113:;
    /* $B113: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B114:;
    /* $B114: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B116:;
    /* $B116: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B118:;
    /* $B118: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_B11A:;
    /* $B11A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B11D:;
    /* $B11D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B11E:;
    /* $B11E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B121:;
    /* $B121: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B124:;
    /* $B124: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B125:;
    /* $B125: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B126:;
    /* $B126: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B127:;
    /* $B127: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_B129:;
    /* $B129: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B12A:;
    /* $B12A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B12C:;
    /* $B12C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B11E;
    }
label_B12E:;
    /* $B12E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B130:;
    /* $B130: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B133:;
    /* $B133: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B136:;
    /* $B136: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA00_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA00_b5");
#endif
label_AA00:;
    /* $AA00: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85A9_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A9_b5");
#endif
label_85A9:;
    /* $85A9: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC0 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_85AB:;
    /* $85AB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: 85 */ maybe_trigger_vblank(3); nes_write(0x8A, g_cpu.A);
label_85B5:;
    /* $85B5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_85B8:;
    /* $85B8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85C5; }
label_85BA:;
    /* $85BA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85BC:;
    /* $85BC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_85BE:;
    /* $85BE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_85E5; }
label_85C0:;
    /* $85C0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C1:;
    /* $85C1: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C3:;
    /* $85C3: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85C5:;
    /* $85C5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0430); FLAG_NZ(g_cpu.A);
label_85C8:;
    /* $85C8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D5; }
label_85CA:;
    /* $85CA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_85CE:;
    /* $85CE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_85E5; }
label_85D0:;
    /* $85D0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85D1:;
    /* $85D1: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85D3:;
    /* $85D3: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85D5:;
    /* $85D5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_85D8:;
    /* $85D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85E5; }
label_85DA:;
    /* $85DA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85DC:;
    /* $85DC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_85DE:;
    /* $85DE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_85E5; }
label_85E0:;
    /* $85E0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85E1:;
    /* $85E1: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBA; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85ED:;
    /* $85ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EF:;
    /* $85EF: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85F1:;
    /* $85F1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8A); FLAG_NZ(g_cpu.A);
label_85F3:;
    /* $85F3: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85F5:;
    /* $85F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85F7:;
    /* $85F7: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85F9:;
    /* $85F9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_85FC:;
    /* $85FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_85FE:;
    /* $85FE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_8600:;
    /* $8600: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8610; }
label_8602:;
    /* $8602: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: 8D */ maybe_trigger_vblank(4); nes_write(0x0412, g_cpu.A);
label_8607:;
    /* $8607: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_860D:;
    /* $860D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8624, 5); return;
label_8610:;
    /* $8610: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8612:;
    /* $8612: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8624; }
label_8614:;
    /* $8614: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8616:;
    /* $8616: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8619:;
    /* $8619: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_861B:;
    /* $861B: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_861E:;
    /* $861E: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8624:;
    /* $8624: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A948_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A948_b5");
#endif
label_A948:;
    /* $A948: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A949:;
    /* $A949: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A94A:;
    /* $A94A: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A94B:;
    /* $A94B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A514_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A514_b5");
#endif
label_A514:;
    /* $A514: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A516:;
    /* $A516: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A518:;
    /* $A518: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A51B:;
    /* $A51B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A51C:;
    /* $A51C: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A51E:;
    /* $A51E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A521:;
    /* $A521: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A524:;
    /* $A524: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A525:;
    /* $A525: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A526:;
    /* $A526: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A528:;
    /* $A528: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A51E;
    }
label_A52A:;
    /* $A52A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A52C:;
    /* $A52C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A52F:;
    /* $A52F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A532:;
    /* $A532: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD04_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD04_b5");
#endif
label_AD04:;
    /* $AD04: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B04A_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B04A_b5");
#endif
label_B04A:;
    /* $B04A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB0DB, 5); return;
}

void func_A90B_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A90B_b5");
#endif
label_A90B:;
    /* $A90B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90C:;
    /* $A90C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0E); g_cpu.A=r&0xFF; }
label_A90E:;
    /* $A90E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A90F:;
    /* $A90F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A910:;
    /* $A910: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A913:;
    /* $A913: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A914:;
    /* $A914: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A915:;
    /* $A915: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A917:;
    /* $A917: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A998_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A998_b5");
#endif
label_A998:;
    /* $A998: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A99A:;
    /* $A99A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9A5, 5); return;
}

void func_85CF_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85CF_b5");
#endif
label_85CF:;
    /* $85CF: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x38 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_85D1:;
    /* $85D1: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85D3:;
    /* $85D3: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85D5:;
    /* $85D5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_85D8:;
    /* $85D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85E5; }
label_85DA:;
    /* $85DA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85DC:;
    /* $85DC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_85DE:;
    /* $85DE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_85E5; }
label_85E0:;
    /* $85E0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85E1:;
    /* $85E1: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBA; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85ED:;
    /* $85ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EF:;
    /* $85EF: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85F1:;
    /* $85F1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8A); FLAG_NZ(g_cpu.A);
label_85F3:;
    /* $85F3: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85F5:;
    /* $85F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85F7:;
    /* $85F7: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85F9:;
    /* $85F9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_85FC:;
    /* $85FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_85FE:;
    /* $85FE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_8600:;
    /* $8600: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8610; }
label_8602:;
    /* $8602: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: 8D */ maybe_trigger_vblank(4); nes_write(0x0412, g_cpu.A);
label_8607:;
    /* $8607: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_860D:;
    /* $860D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8624, 5); return;
label_8610:;
    /* $8610: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8612:;
    /* $8612: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8624; }
label_8614:;
    /* $8614: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8616:;
    /* $8616: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8619:;
    /* $8619: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_861B:;
    /* $861B: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_861E:;
    /* $861E: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8624:;
    /* $8624: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A260_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A260_b5");
#endif
label_A260:;
    /* $A260: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A262:;
    /* $A262: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A264:;
    /* $A264: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A267:;
    /* $A267: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A268:;
    /* $A268: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A26A:;
    /* $A26A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A26D:;
    /* $A26D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A26E:;
    /* $A26E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x021E); FLAG_NZ(g_cpu.A);
label_A271:;
    /* $A271: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A274:;
    /* $A274: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A275:;
    /* $A275: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x021F); FLAG_NZ(g_cpu.A);
label_A278:;
    /* $A278: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A27B:;
    /* $A27B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A27C:;
    /* $A27C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A27E:;
    /* $A27E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A281:;
    /* $A281: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A282:;
    /* $A282: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A284:;
    /* $A284: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A287:;
    /* $A287: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A288:;
    /* $A288: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A28A:;
    /* $A28A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A28D:;
    /* $A28D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A28E:;
    /* $A28E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x021C); FLAG_NZ(g_cpu.A);
label_A291:;
    /* $A291: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A294:;
    /* $A294: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A295:;
    /* $A295: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x021D); FLAG_NZ(g_cpu.A);
label_A298:;
    /* $A298: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A29B:;
    /* $A29B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A29C:;
    /* $A29C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A29E:;
    /* $A29E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2A1:;
    /* $A2A1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A2A2:;
    /* $A2A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2A; FLAG_NZ(g_cpu.A);
label_A2A4:;
    /* $A2A4: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2A7:;
    /* $A2A7: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A2A8:;
    /* $A2A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A2AA:;
    /* $A2AA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2AD:;
    /* $A2AD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A2AE:;
    /* $A2AE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0226); FLAG_NZ(g_cpu.A);
label_A2B1:;
    /* $A2B1: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2B4:;
    /* $A2B4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A2B5:;
    /* $A2B5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0227); FLAG_NZ(g_cpu.A);
label_A2B8:;
    /* $A2B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2BB:;
    /* $A2BB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A2BC:;
    /* $A2BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A2BE:;
    /* $A2BE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2C1:;
    /* $A2C1: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A2C4:;
    /* $A2C4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA316, 5); return;
}

void func_A918_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A918_b5");
#endif
label_A918:;
    /* $A918: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A077_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A077_b5");
#endif
label_A077:;
    /* $A077: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A078:;
    /* $A078: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A07B:;
    /* $A07B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A07C:;
    /* $A07C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A081:;
    /* $A081: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A082:;
    /* $A082: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0210); FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A088:;
    /* $A088: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A089:;
    /* $A089: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0211); FLAG_NZ(g_cpu.A);
label_A08C:;
    /* $A08C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A08F:;
    /* $A08F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A090:;
    /* $A090: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A092:;
    /* $A092: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A095:;
    /* $A095: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A096:;
    /* $A096: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC8; FLAG_NZ(g_cpu.A);
label_A098:;
    /* $A098: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A09B:;
    /* $A09B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A09C:;
    /* $A09C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A09E:;
    /* $A09E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A1:;
    /* $A0A1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0A2:;
    /* $A0A2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0256); FLAG_NZ(g_cpu.A);
label_A0A5:;
    /* $A0A5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A8:;
    /* $A0A8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0A9:;
    /* $A0A9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0257); FLAG_NZ(g_cpu.A);
label_A0AC:;
    /* $A0AC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0AF:;
    /* $A0AF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0B0:;
    /* $A0B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A0B2:;
    /* $A0B2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B5:;
    /* $A0B5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0BC:;
    /* $A0BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A0BE:;
    /* $A0BE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0C1:;
    /* $A0C1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0C2:;
    /* $A0C2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0260); FLAG_NZ(g_cpu.A);
label_A0C5:;
    /* $A0C5: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0C8:;
    /* $A0C8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0C9:;
    /* $A0C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0261); FLAG_NZ(g_cpu.A);
label_A0CC:;
    /* $A0CC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0CF:;
    /* $A0CF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0D0:;
    /* $A0D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A0D2:;
    /* $A0D2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0D5:;
    /* $A0D5: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A0D8:;
    /* $A0D8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA136, 5); return;
}

void func_A919_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A919_b5");
#endif
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A902_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A902_b5");
#endif
label_A902:;
    /* $A902: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A904:;
    /* $A904: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A906:;
    /* $A906: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_A908:;
    /* $A908: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A90A:;
    /* $A90A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A90B:;
    /* $A90B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90C:;
    /* $A90C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0E); g_cpu.A=r&0xFF; }
label_A90E:;
    /* $A90E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A90F:;
    /* $A90F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A910:;
    /* $A910: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A913:;
    /* $A913: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A914:;
    /* $A914: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A915:;
    /* $A915: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A917:;
    /* $A917: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A91A_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A91A_b5");
#endif
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A906_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A906_b5");
#endif
label_A906:;
    /* $A906: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_A908:;
    /* $A908: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A90A:;
    /* $A90A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A90B:;
    /* $A90B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90C:;
    /* $A90C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0E); g_cpu.A=r&0xFF; }
label_A90E:;
    /* $A90E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A90F:;
    /* $A90F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A910:;
    /* $A910: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A913:;
    /* $A913: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A914:;
    /* $A914: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A915:;
    /* $A915: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A917:;
    /* $A917: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A908_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A908_b5");
#endif
label_A908:;
    /* $A908: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A90A:;
    /* $A90A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A90B:;
    /* $A90B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A90C:;
    /* $A90C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0E); g_cpu.A=r&0xFF; }
label_A90E:;
    /* $A90E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A90F:;
    /* $A90F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A910:;
    /* $A910: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A913:;
    /* $A913: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A914:;
    /* $A914: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A915:;
    /* $A915: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A917:;
    /* $A917: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AC0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AC0_b5");
#endif
label_9AC0:;
    /* $9AC0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9AC2:;
    /* $9AC2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AC5:;
    /* $9AC5: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_9AC8:;
    /* $9AC8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9BAC_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BAC_b5");
#endif
label_9BAC:;
    /* $9BAC: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA533, 5);
label_9BAF:;
    /* $9BAF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA1E1, 5);
label_9BB2:;
    /* $9BB2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A5AC_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5AC_b5");
#endif
label_A5AC:;
    /* $A5AC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A5AE:;
    /* $A5AE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A5B0:;
    /* $A5B0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A5B3:;
    /* $A5B3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A5B4:;
    /* $A5B4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x4A); FLAG_NZ(g_cpu.A);
label_A5B6:;
    /* $A5B6: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A5B9:;
    /* $A5B9: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A5BA:;
    /* $A5BA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A5BC:;
    /* $A5BC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A5BF:;
    /* $A5BF: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A5C2:;
    /* $A5C2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AFAC_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFAC_b5");
#endif
label_AFAC:;
    /* $AFAC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFAF:;
    /* $AFAF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFB0:;
    /* $AFB0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02D2); FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFB6:;
    /* $AFB6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFB7:;
    /* $AFB7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02D3); FLAG_NZ(g_cpu.A);
label_AFBA:;
    /* $AFBA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFBD:;
    /* $AFBD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFBE:;
    /* $AFBE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_AFC0:;
    /* $AFC0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFC3:;
    /* $AFC3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFC4:;
    /* $AFC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF6; FLAG_NZ(g_cpu.A);
label_AFC6:;
    /* $AFC6: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFC9:;
    /* $AFC9: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFCA:;
    /* $AFCA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AFCC:;
    /* $AFCC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFCF:;
    /* $AFCF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFD0:;
    /* $AFD0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02DC); FLAG_NZ(g_cpu.A);
label_AFD3:;
    /* $AFD3: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFD6:;
    /* $AFD6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFD7:;
    /* $AFD7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02DD); FLAG_NZ(g_cpu.A);
label_AFDA:;
    /* $AFDA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFDD:;
    /* $AFDD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFDE:;
    /* $AFDE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AFE0:;
    /* $AFE0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFE3:;
    /* $AFE3: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_AFE6:;
    /* $AFE6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB044, 5); return;
}

void func_A91E_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A91E_b5");
#endif
label_A91E:;
    /* $A91E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x60; g_cpu.C=(g_cpu.Y>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A920:;
    /* $A920: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A921:;
    /* $A921: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A922:;
    /* $A922: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A923:;
    /* $A923: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A924:;
    /* $A924: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A926:;
    /* $A926: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_A928:;
    /* $A928: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_A92A:;
    /* $A92A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03E4); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A92D:;
    /* $A92D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A940; }
label_A92F:;
    /* $A92F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A931:;
    /* $A931: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A938; }
label_A933:;
    /* $A933: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A938; }
label_A935:;
    /* $A935: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA947, 5); return;
label_A938:;
    /* $A938: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x14); FLAG_NZ(g_cpu.Y);
label_A93A:;
    /* $A93A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x03E5); FLAG_NZ(g_cpu.X);
label_A93D:;
    /* $A93D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA94C, 5);
label_A940:;
    /* $A940: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A942:;
    /* $A942: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A944:;
    /* $A944: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA928, 5); return;
}

void func_A91F_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A91F_b5");
#endif
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9B7_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B7_b5");
#endif
label_A9B7:;
    /* $A9B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCE; FLAG_NZ(g_cpu.A);
label_A9B9:;
    /* $A9B9: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6804 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9BC:;
    /* $A9BC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BD:;
    /* $A9BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9BF:;
    /* $A9BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_894C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_894C_b5");
#endif
label_894C:;
    /* $894C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8504); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_894F:;
    /* $894F: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x09 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8951:;
    /* $8951: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8953:;
    /* $8953: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8953); return;
}

void func_A92D_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A92D_b5");
#endif
label_A92D:;
    /* $A92D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A940; }
label_A92F:;
    /* $A92F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A931:;
    /* $A931: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A938; }
label_A933:;
    /* $A933: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A938; }
label_A935:;
    /* $A935: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA947, 5); return;
label_A938:;
    /* $A938: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x14); FLAG_NZ(g_cpu.Y);
label_A93A:;
    /* $A93A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x03E5); FLAG_NZ(g_cpu.X);
label_A93D:;
    /* $A93D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA94C, 5);
label_A940:;
    /* $A940: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A942:;
    /* $A942: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A944:;
    /* $A944: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA928, 5); return;
}

void func_A914_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A914_b5");
#endif
label_A914:;
    /* $A914: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A915:;
    /* $A915: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A917:;
    /* $A917: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AC85_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC85_b5");
#endif
label_AC85:;
    /* $AC85: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC87:;
    /* $AC87: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AC88:;
    /* $AC88: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AC89:;
    /* $AC89: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AC8B:;
    /* $AC8B: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $F573: 6 entries (bank=5) */
switch(g_cpu.A) {
  case 0: nes_write(0x0000, 0x9A); nes_write(0x0001, 0xAC); g_cpu.A = 0x9A; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_AC9A_b5(); return;
  case 1: nes_write(0x0000, 0x9B); nes_write(0x0001, 0xAC); g_cpu.A = 0x9B; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_AC9B_b5(); return;
  case 2: nes_write(0x0000, 0xA5); nes_write(0x0001, 0xAC); g_cpu.A = 0xA5; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_ACA5_b5(); return;
  case 3: nes_write(0x0000, 0xAF); nes_write(0x0001, 0xAC); g_cpu.A = 0xAF; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_ACAF_b5(); return;
  case 4: nes_write(0x0000, 0xB9); nes_write(0x0001, 0xAC); g_cpu.A = 0xB9; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_ACB9_b5(); return;
  case 5: nes_write(0x0000, 0xC3); nes_write(0x0001, 0xAC); g_cpu.A = 0xC3; g_cpu.Y = 0x0C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_ACC3_b5(); return;
  default: nes_log_inline_miss(0xAC8B, g_cpu.A); return;
}
label_AC9A:;
    /* $AC9A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD85_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD85_b5");
#endif
label_AD85:;
    /* $AD85: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAD91, 5); return;
}

void func_AA85_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA85_b5");
#endif
label_AA85:;
    /* $AA85: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_AA88:;
    /* $AA88: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x041C); FLAG_NZ(g_cpu.Y);
label_AA8B:;
    /* $AA8B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AA8C:;
    /* $AA8C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AA8D:;
    /* $AA8D: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA8F:;
    /* $AA8F: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA91:;
    /* $AA91: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x77); FLAG_NZ(g_cpu.A);
label_AA93:;
    /* $AA93: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_AA95:;
    /* $AA95: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0A2C), 5); return; }
label_AA97:;
    /* $AA97: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AB85_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB85_b5");
#endif
label_AB85:;
    /* $AB85: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB88:;
    /* $AB88: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB89:;
    /* $AB89: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x028A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB8C:;
    /* $AB8C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB8F:;
    /* $AB8F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB90:;
    /* $AB90: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_AB92:;
    /* $AB92: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB95:;
    /* $AB95: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB96:;
    /* $AB96: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB98:;
    /* $AB98: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_AB9A:;
    /* $AB9A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB9D:;
    /* $AB9D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AB9E:;
    /* $AB9E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_ABA0:;
    /* $ABA0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABA3:;
    /* $ABA3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABA4:;
    /* $ABA4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0281 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABA7:;
    /* $ABA7: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABAA:;
    /* $ABAA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABAB:;
    /* $ABAB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x028B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABAE:;
    /* $ABAE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABB1:;
    /* $ABB1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABB2:;
    /* $ABB2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_ABB4:;
    /* $ABB4: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABB7:;
    /* $ABB7: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_ABBA:;
    /* $ABBA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_859B_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_859B_b5");
#endif
label_859B:;
    /* $859B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_859D:;
    /* $859D: 96 */ maybe_trigger_vblank(4); nes_write((0xB5 + g_cpu.Y) & 0xFF, g_cpu.X);
label_859F:;
    /* $859F: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xA9AA); nes_trace_indirect_jump(0x859F, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_859D_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_859D_b5");
#endif
label_859D:;
    /* $859D: 96 */ maybe_trigger_vblank(4); nes_write((0xB5 + g_cpu.Y) & 0xFF, g_cpu.X);
label_859F:;
    /* $859F: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xA9AA); nes_trace_indirect_jump(0x859F, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_A9EE_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9EE_b5");
#endif
label_A9EE:;
    /* $A9EE: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A9EF:;
    /* $A9EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF9; FLAG_NZ(g_cpu.A);
label_A9F1:;
    /* $A9F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFD; FLAG_NZ(g_cpu.A);
label_A9F3:;
    /* $A9F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A9F5:;
    /* $A9F5: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9F6:;
    /* $A9F6: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xAA); FLAG_NZ(g_cpu.A);
label_A9F8:;
    /* $A9F8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9B9_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B9_b5");
#endif
label_A9B9:;
    /* $A9B9: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6804 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9BC:;
    /* $A9BC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BD:;
    /* $A9BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9BF:;
    /* $A9BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D02_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D02_b5");
#endif
label_8D02:;
    /* $8D02: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_8D04:;
    /* $8D04: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x81); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8D06:;
    /* $8D06: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_8D08:;
    /* $8D08: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_8D0A:;
    /* $8D0A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D26, 5); return;
}

void func_A931_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A931_b5");
#endif
label_A931:;
    /* $A931: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A938; }
label_A933:;
    /* $A933: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A938; }
label_A935:;
    /* $A935: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA947, 5); return;
label_A938:;
    /* $A938: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x14); FLAG_NZ(g_cpu.Y);
label_A93A:;
    /* $A93A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x03E5); FLAG_NZ(g_cpu.X);
label_A93D:;
    /* $A93D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA94C, 5);
label_A940:;
    /* $A940: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A942:;
    /* $A942: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A944:;
    /* $A944: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA928, 5); return;
}

void func_A913_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A913_b5");
#endif
label_A913:;
    /* $A913: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A914:;
    /* $A914: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A915:;
    /* $A915: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A917:;
    /* $A917: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9D3_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9D3_b5");
#endif
label_A9D3:;
    /* $A9D3: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A9D5:;
    /* $A9D5: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A9D7:;
    /* $A9D7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E4; }
label_A9D9:;
    /* $A9D9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x059A); FLAG_NZ(g_cpu.A);
label_A9DC:;
    /* $A9DC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E4; }
label_A9DE:;
    /* $A9DE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03DF); FLAG_NZ(g_cpu.A);
label_A9E1:;
    /* $A9E1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9E7, 5); return;
label_A9E4:;
    /* $A9E4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E1); FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9E9:;
    /* $A9E9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9EB:;
    /* $A9EB: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $F573: 5 entries (bank=5) */
switch(g_cpu.A) {
  case 0: nes_write(0x0000, 0xF8); nes_write(0x0001, 0xA9); g_cpu.A = 0xF8; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A9F8_b5(); return;
  case 1: nes_write(0x0000, 0xF9); nes_write(0x0001, 0xA9); g_cpu.A = 0xF9; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A9F9_b5(); return;
  case 2: nes_write(0x0000, 0xFD); nes_write(0x0001, 0xA9); g_cpu.A = 0xFD; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A9FD_b5(); return;
  case 3: nes_write(0x0000, 0x01); nes_write(0x0001, 0xAA); g_cpu.A = 0x01; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_AA01_b5(); return;
  case 4: nes_write(0x0000, 0x05); nes_write(0x0001, 0xAA); g_cpu.A = 0x05; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_AA05_b5(); return;
  default: nes_log_inline_miss(0xA9EB, g_cpu.A); return;
}
label_A9F8:;
    /* $A9F8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9E8_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E8_b5");
#endif
label_A9E8:;
    /* $A9E8: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_A9EA:;
    /* $A9EA: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0020); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xF8; g_cpu.C=(g_cpu.Y>=0xF8)?1:0; FLAG_NZ(r&0xFF); }
label_A9EF:;
    /* $A9EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF9; FLAG_NZ(g_cpu.A);
label_A9F1:;
    /* $A9F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFD; FLAG_NZ(g_cpu.A);
label_A9F3:;
    /* $A9F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A9F5:;
    /* $A9F5: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9F6:;
    /* $A9F6: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xAA); FLAG_NZ(g_cpu.A);
label_A9F8:;
    /* $A9F8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A915_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A915_b5");
#endif
label_A915:;
    /* $A915: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x14 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x14); g_cpu.A=r&0xFF; }
label_A917:;
    /* $A917: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A91C:;
    /* $A91C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A91F:;
    /* $A91F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9DC5_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9DC5_b5");
#endif
label_9DC5:;
    /* $9DC5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9DC6:;
    /* $9DC6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_9DC8:;
    /* $9DC8: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9DCB:;
    /* $9DCB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9DCC:;
    /* $9DCC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9DCE:;
    /* $9DCE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9DD1:;
    /* $9DD1: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_9DD4:;
    /* $9DD4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4D8_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4D8_b5");
#endif
label_A4D8:;
    /* $A4D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x04CE), 5); return; }
label_A4DA:;
    /* $A4DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A4DC:;
    /* $A4DC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4DF:;
    /* $A4DF: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A4E2:;
    /* $A4E2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D23_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D23_b5");
#endif
label_9D23:;
    /* $9D23: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9D25:;
    /* $9D25: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_9D27:;
    /* $9D27: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9D33, 5); return;
}

void func_858E_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_858E_b5");
#endif
label_858E:;
    /* $858E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_8590:;
    /* $8590: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8592:;
    /* $8592: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8594:;
    /* $8594: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x859C, 5); return;
}

void func_AD01_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD01_b5");
#endif
label_AD01:;
    /* $AD01: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB045, 5);
label_AD04:;
    /* $AD04: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8598_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8598_b5");
#endif
label_8598:;
    /* $8598: 80 */ maybe_trigger_vblank(2); /* NOP */
label_859A:;
    /* $859A: CE */ maybe_trigger_vblank(6); { uint16_t a=0xA605; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_859D:;
    /* $859D: 96 */ maybe_trigger_vblank(4); nes_write((0xB5 + g_cpu.Y) & 0xFF, g_cpu.X);
label_859F:;
    /* $859F: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xA9AA); nes_trace_indirect_jump(0x859F, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_900A_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_900A_b5");
#endif
label_900A:;
    /* $900A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_900B:;
    /* $900B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_900D:;
    /* $900D: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x17); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_900F:;
    /* $900F: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_9011:;
    /* $9011: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9013:;
    /* $9013: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_901A; }
label_9015:;
    /* $9015: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9016:;
    /* $9016: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9018:;
    /* $9018: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_901A:;
    /* $901A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_901C:;
    /* $901C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_901E:;
    /* $901E: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_9020:;
    /* $9020: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9022:;
    /* $9022: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9029; }
label_9024:;
    /* $9024: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9025:;
    /* $9025: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9027:;
    /* $9027: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_9029:;
    /* $9029: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x15); FLAG_NZ(g_cpu.A);
label_902B:;
    /* $902B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x15); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_902D:;
    /* $902D: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_902F:;
    /* $902F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9031:;
    /* $9031: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9038; }
label_9033:;
    /* $9033: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9034:;
    /* $9034: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9036:;
    /* $9036: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9038:;
    /* $9038: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_903A:;
    /* $903A: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_903C:;
    /* $903C: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_903E:;
    /* $903E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9040:;
    /* $9040: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9047; }
label_9042:;
    /* $9042: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9043:;
    /* $9043: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9045:;
    /* $9045: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_9047:;
    /* $9047: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_9049:;
    /* $9049: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_904B:;
    /* $904B: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_904D:;
    /* $904D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A99A_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A99A_b5");
#endif
label_A99A:;
    /* $A99A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9A5, 5); return;
}

void func_A999_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A999_b5");
#endif
label_A999:;
    /* $A999: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x4C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A99B:;
    /* $A99B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCF; FLAG_NZ(g_cpu.A);
label_A99F:;
    /* $A99F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A9A1:;
    /* $A9A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_A9A3:;
    /* $A9A3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A9A5:;
    /* $A9A5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A9A8:;
    /* $A9A8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0459); FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9B8; }
label_A9AD:;
    /* $A9AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A9AF:;
    /* $A9AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0459, g_cpu.A);
label_A9B2:;
    /* $A9B2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0458; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B5:;
    /* $A9B5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9BB, 5); return;
label_A9B8:;
    /* $A9B8: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0459; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9BB:;
    /* $A9BB: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BC:;
    /* $A9BC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BD:;
    /* $A9BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9BF:;
    /* $A9BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9E5_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E5_b5");
#endif
label_A9E5:;
    /* $A9E5: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9E7:;
    /* $A9E7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9E9:;
    /* $A9E9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9EB:;
    /* $A9EB: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $F573: 5 entries (bank=5) */
switch(g_cpu.A) {
  case 0: nes_write(0x0000, 0xF8); nes_write(0x0001, 0xA9); g_cpu.A = 0xF8; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A9F8_b5(); return;
  case 1: nes_write(0x0000, 0xF9); nes_write(0x0001, 0xA9); g_cpu.A = 0xF9; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A9F9_b5(); return;
  case 2: nes_write(0x0000, 0xFD); nes_write(0x0001, 0xA9); g_cpu.A = 0xFD; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A9FD_b5(); return;
  case 3: nes_write(0x0000, 0x01); nes_write(0x0001, 0xAA); g_cpu.A = 0x01; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_AA01_b5(); return;
  case 4: nes_write(0x0000, 0x05); nes_write(0x0001, 0xAA); g_cpu.A = 0x05; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_AA05_b5(); return;
  default: nes_log_inline_miss(0xA9EB, g_cpu.A); return;
}
label_A9F8:;
    /* $A9F8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85F0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85F0_b5");
#endif
label_85F0:;
    /* $85F0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_85F2:;
    /* $85F2: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_85F3:;
    /* $85F3: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85F5:;
    /* $85F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85F7:;
    /* $85F7: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85F9:;
    /* $85F9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_85FC:;
    /* $85FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_85FE:;
    /* $85FE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_8600:;
    /* $8600: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8610; }
label_8602:;
    /* $8602: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: 8D */ maybe_trigger_vblank(4); nes_write(0x0412, g_cpu.A);
label_8607:;
    /* $8607: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_860D:;
    /* $860D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8624, 5); return;
label_8610:;
    /* $8610: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8612:;
    /* $8612: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8624; }
label_8614:;
    /* $8614: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8616:;
    /* $8616: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8619:;
    /* $8619: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_861B:;
    /* $861B: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_861E:;
    /* $861E: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8624:;
    /* $8624: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9E4_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E4_b5");
#endif
label_A9E4:;
    /* $A9E4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E1); FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9E9:;
    /* $A9E9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9F8; }
label_A9EB:;
    /* $A9EB: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $F573: 5 entries (bank=5) */
switch(g_cpu.A) {
  case 0: nes_write(0x0000, 0xF8); nes_write(0x0001, 0xA9); g_cpu.A = 0xF8; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A9F8_b5(); return;
  case 1: nes_write(0x0000, 0xF9); nes_write(0x0001, 0xA9); g_cpu.A = 0xF9; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A9F9_b5(); return;
  case 2: nes_write(0x0000, 0xFD); nes_write(0x0001, 0xA9); g_cpu.A = 0xFD; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A9FD_b5(); return;
  case 3: nes_write(0x0000, 0x01); nes_write(0x0001, 0xAA); g_cpu.A = 0x01; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_AA01_b5(); return;
  case 4: nes_write(0x0000, 0x05); nes_write(0x0001, 0xAA); g_cpu.A = 0x05; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_AA05_b5(); return;
  default: nes_log_inline_miss(0xA9EB, g_cpu.A); return;
}
label_A9F8:;
    /* $A9F8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D01_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D01_b5");
#endif
label_8D01:;
    /* $8D01: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8D03:;
    /* $8D03: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D03); return;
}

void func_A000_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A000_b5");
#endif
label_A000:;
    /* $A000: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A002:;
    /* $A002: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_A004:;
    /* $A004: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A007:;
    /* $A007: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A00A:;
    /* $A00A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A00B:;
    /* $A00B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A00C:;
    /* $A00C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A00D:;
    /* $A00D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_A00F:;
    /* $A00F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A010:;
    /* $A010: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A012:;
    /* $A012: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A004;
    }
label_A014:;
    /* $A014: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A016:;
    /* $A016: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_A018:;
    /* $A018: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A01B:;
    /* $A01B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A01C:;
    /* $A01C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC7; FLAG_NZ(g_cpu.A);
label_A01E:;
    /* $A01E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A021:;
    /* $A021: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A022:;
    /* $A022: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A024:;
    /* $A024: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A026:;
    /* $A026: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_A028:;
    /* $A028: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A02B:;
    /* $A02B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A02C:;
    /* $A02C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A02F:;
    /* $A02F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A032:;
    /* $A032: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A033:;
    /* $A033: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A034:;
    /* $A034: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A035:;
    /* $A035: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_A037:;
    /* $A037: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A038:;
    /* $A038: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A03A:;
    /* $A03A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A02C;
    }
label_A03C:;
    /* $A03C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A03E:;
    /* $A03E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A041:;
    /* $A041: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A044:;
    /* $A044: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9785_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9785_b5");
#endif
label_9785:;
    /* $9785: CE */ maybe_trigger_vblank(6); { uint16_t a=0x8029; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9788:;
    /* $9788: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9790; }
label_978A:;
    /* $978A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9842, 5);
label_978D:;
    /* $978D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9791, 5);
label_9790:;
    /* $9790: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A26_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A26_b5");
#endif
label_9A26:;
    /* $9A26: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A28:;
    /* $9A28: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x77); FLAG_NZ(g_cpu.A);
label_9A2A:;
    /* $9A2A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9A2C:;
    /* $9A2C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x19C0), 5); return; }
label_9A2E:;
    /* $9A2E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85A2_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A2_b5");
#endif
label_85A2:;
    /* $85A2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_85DC; }
label_85A4:;
    /* $85A4: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x042C); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85A7:;
    /* $85A7: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85A8:;
    /* $85A8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC015, 5);
label_85AB:;
    /* $85AB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: 85 */ maybe_trigger_vblank(3); nes_write(0x8A, g_cpu.A);
label_85B5:;
    /* $85B5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_85B8:;
    /* $85B8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85C5; }
label_85BA:;
    /* $85BA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85BC:;
    /* $85BC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_85BE:;
    /* $85BE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_85E5; }
label_85C0:;
    /* $85C0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85C1:;
    /* $85C1: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C3:;
    /* $85C3: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85C5:;
    /* $85C5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0430); FLAG_NZ(g_cpu.A);
label_85C8:;
    /* $85C8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D5; }
label_85CA:;
    /* $85CA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85CC:;
    /* $85CC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_85CE:;
    /* $85CE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_85E5; }
label_85D0:;
    /* $85D0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85D1:;
    /* $85D1: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85D3:;
    /* $85D3: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85D5:;
    /* $85D5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_85D8:;
    /* $85D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85E5; }
label_85DA:;
    /* $85DA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85DC:;
    /* $85DC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_85DE:;
    /* $85DE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_85E5; }
label_85E0:;
    /* $85E0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_85E1:;
    /* $85E1: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBA; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85ED:;
    /* $85ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EF:;
    /* $85EF: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85F1:;
    /* $85F1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8A); FLAG_NZ(g_cpu.A);
label_85F3:;
    /* $85F3: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85F5:;
    /* $85F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85F7:;
    /* $85F7: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85F9:;
    /* $85F9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_85FC:;
    /* $85FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_85FE:;
    /* $85FE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_8600:;
    /* $8600: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8610; }
label_8602:;
    /* $8602: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: 8D */ maybe_trigger_vblank(4); nes_write(0x0412, g_cpu.A);
label_8607:;
    /* $8607: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_860D:;
    /* $860D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8624, 5); return;
label_8610:;
    /* $8610: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8612:;
    /* $8612: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8624; }
label_8614:;
    /* $8614: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8616:;
    /* $8616: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8619:;
    /* $8619: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_861B:;
    /* $861B: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_861E:;
    /* $861E: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8624:;
    /* $8624: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9A3_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9A3_b5");
#endif
label_A9A3:;
    /* $A9A3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A9A5:;
    /* $A9A5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A9A8:;
    /* $A9A8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0459); FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9B8; }
label_A9AD:;
    /* $A9AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A9AF:;
    /* $A9AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0459, g_cpu.A);
label_A9B2:;
    /* $A9B2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0458; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B5:;
    /* $A9B5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9BB, 5); return;
label_A9B8:;
    /* $A9B8: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0459; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9BB:;
    /* $A9BB: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BC:;
    /* $A9BC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BD:;
    /* $A9BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9BF:;
    /* $A9BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9BD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9BD_b5");
#endif
label_A9BD:;
    /* $A9BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9BF:;
    /* $A9BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9BF_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9BF_b5");
#endif
label_A9BF:;
    /* $A9BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9BA_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9BA_b5");
#endif
label_A9BA:;
    /* $A9BA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x68); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9BC:;
    /* $A9BC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BD:;
    /* $A9BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9BF:;
    /* $A9BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A986_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A986_b5");
#endif
label_A986:;
    /* $A986: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A987:;
    /* $A987: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A988:;
    /* $A988: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xA0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xA0); g_cpu.A=r&0xFF; }
label_A98A:;
    /* $A98A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A98C:;
    /* $A98C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0458); FLAG_NZ(g_cpu.A);
label_A98F:;
    /* $A98F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A990:;
    /* $A990: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A99D; }
label_A992:;
    /* $A992: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCA; FLAG_NZ(g_cpu.A);
label_A994:;
    /* $A994: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A996:;
    /* $A996: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_A998:;
    /* $A998: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A99A:;
    /* $A99A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9A5, 5); return;
label_A99D:;
    /* $A99D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCF; FLAG_NZ(g_cpu.A);
label_A99F:;
    /* $A99F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A9A1:;
    /* $A9A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_A9A3:;
    /* $A9A3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A9A5:;
    /* $A9A5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_A9A8:;
    /* $A9A8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0459); FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9B8; }
label_A9AD:;
    /* $A9AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A9AF:;
    /* $A9AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0459, g_cpu.A);
label_A9B2:;
    /* $A9B2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0458; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B5:;
    /* $A9B5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA9BB, 5); return;
label_A9B8:;
    /* $A9B8: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0459; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9BB:;
    /* $A9BB: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BC:;
    /* $A9BC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A9BD:;
    /* $A9BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A9BE:;
    /* $A9BE: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9BF:;
    /* $A9BF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A014_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A014_b5");
#endif
label_A014:;
    /* $A014: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A016:;
    /* $A016: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_A018:;
    /* $A018: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A01B:;
    /* $A01B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A01C:;
    /* $A01C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC7; FLAG_NZ(g_cpu.A);
label_A01E:;
    /* $A01E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A021:;
    /* $A021: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A022:;
    /* $A022: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A024:;
    /* $A024: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_A026:;
    /* $A026: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_A028:;
    /* $A028: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A02B:;
    /* $A02B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A02C:;
    /* $A02C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A02F:;
    /* $A02F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A032:;
    /* $A032: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A033:;
    /* $A033: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A034:;
    /* $A034: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A035:;
    /* $A035: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_A037:;
    /* $A037: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A038:;
    /* $A038: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A03A:;
    /* $A03A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A02C;
    }
label_A03C:;
    /* $A03C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A03E:;
    /* $A03E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A041:;
    /* $A041: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A044:;
    /* $A044: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9885_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9885_b5");
#endif
label_9885:;
    /* $9885: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_9887:;
    /* $9887: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9888:;
    /* $9888: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9889:;
    /* $9889: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_988A:;
    /* $988A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_988C:;
    /* $988C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_988F:;
    /* $988F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A5E4_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5E4_b5");
#endif
label_A5E4:;
    /* $A5E4: EB */ maybe_trigger_vblank(2); { uint8_t m=0xA5; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5E6:;
    /* $A5E6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A5E8:;
    /* $A5E8: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_A5EA:;
    /* $A5EA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A5EB:;
    /* $A5EB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A5EC:;
    /* $A5EC: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A5ED:;
    /* $A5ED: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x77; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5EF:;
    /* $A5EF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05CF), 5); return; }
label_A5F1:;
    /* $A5F1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_859A_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_859A_b5");
#endif
label_859A:;
    /* $859A: CE */ maybe_trigger_vblank(6); { uint16_t a=0xA605; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_859D:;
    /* $859D: 96 */ maybe_trigger_vblank(4); nes_write((0xB5 + g_cpu.Y) & 0xFF, g_cpu.X);
label_859F:;
    /* $859F: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xA9AA); nes_trace_indirect_jump(0x859F, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_A903_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A903_b5");
#endif
label_A903:;
    /* $A903: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x85; g_cpu.C=(g_cpu.Y>=0x85)?1:0; FLAG_NZ(r&0xFF); }
label_A905:;
    /* $A905: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA905); return;
}

void func_8D0E_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D0E_b5");
#endif
label_8D0E:;
    /* $8D0E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0D14), 5); return; }
label_8D10:;
    /* $8D10: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0D00), 5); return; }
label_8D12:;
    /* $8D12: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_8D15:;
    /* $8D15: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D26; }
label_8D17:;
    /* $8D17: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x59; g_cpu.C=(g_cpu.A>=0x59)?1:0; FLAG_NZ(r&0xFF); }
label_8D19:;
    /* $8D19: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8D26; }
label_8D1B:;
    /* $8D1B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x5A; g_cpu.C=(g_cpu.A>=0x5A)?1:0; FLAG_NZ(r&0xFF); }
label_8D1D:;
    /* $8D1D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0D00), 5); return; }
label_8D1F:;
    /* $8D1F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0432); FLAG_NZ(g_cpu.A);
label_8D22:;
    /* $8D22: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x58; g_cpu.C=(g_cpu.A>=0x58)?1:0; FLAG_NZ(r&0xFF); }
label_8D24:;
    /* $8D24: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0D00), 5); return; }
label_8D26:;
    /* $8D26: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8D27:; return;
label_8D2A:; return;
label_8D2C:; return;
label_8D2E:; return;
label_8D30:; return;
label_8D32:; return;
label_8D35:; return;
label_8D36:; return;
label_8D39:; return;
label_8D3A:; return;
label_8D3C:; return;
label_8D3D:; return;
label_8D3F:; return;
label_8D41:; return;
label_8D44:; return;
label_8D47:; return;
label_8D4A:; return;
label_8D4D:; return;
label_8D4F:; return;
label_8D52:; return;
label_8D53:; return;
label_8D56:; return;
label_8D57:; return;
label_8D59:; return;
label_8D5A:; return;
label_8D5D:; return;
label_8D60:; return;
label_8D62:; return;
label_8D65:; return;
label_8D68:; return;
label_8D6B:; return;
label_8D6E:; return;
label_8D71:; return;
label_8D74:; return;
label_8D77:; return;
label_8D7A:; return;
label_8D7D:; return;
label_8D80:; return;
label_8D83:; return;
label_8D86:; return;
label_8D89:; return;
label_8D8C:; return;
label_8D8E:; return;
label_8D91:; return;
label_8D93:; return;
label_8D96:; return;
label_8D99:; return;
label_8D9C:; return;
label_8D9F:; return;
label_8DA2:; return;
label_8DA4:; return;
label_8DA7:; return;
label_8DA9:; return;
label_8DAC:; return;
label_8DAE:; return;
label_8DB1:; return;
label_8DB3:; return;
label_8DB6:; return;
label_8DB8:; return;
label_8DBB:; return;
label_8DBD:; return;
label_8DBF:; return;
label_8DC0:; return;
label_8DC2:; return;
label_8DC3:; return;
label_8DC6:; return;
label_8DC7:; return;
label_8DCA:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD2:; return;
label_8DD4:; return;
label_8DD7:; return;
label_8DD9:; return;
label_8DDB:; return;
label_8DDD:; return;
label_8DDF:; return;
label_8DE0:; return;
label_8DE2:; return;
label_8DE4:; return;
label_8DE7:; return;
label_8DE9:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEF:; return;
label_8DF0:; return;
label_8DF2:; return;
label_8DF4:; return;
label_8DF7:; return;
label_8DF9:; return;
label_8DFB:; return;
label_8DFD:; return;
label_8DFF:; return;
label_8E00:; return;
label_8E02:; return;
label_8E04:; return;
label_8E06:; return;
label_8E08:; return;
label_8E0A:; return;
label_8E0C:; return;
label_8E0E:; return;
label_8E10:; return;
label_8E12:; return;
label_8E14:; return;
label_8E16:; return;
label_8E18:; return;
label_8E1B:; return;
label_8E1D:; return;
label_8E1F:; return;
label_8E21:; return;
label_8E23:; return;
label_8E26:; return;
label_8E2C:; return;
label_8E2F:; return;
label_8E31:; return;
label_8E33:; return;
label_8E35:; return;
label_8E38:; return;
label_8E3A:; return;
label_8E3D:; return;
label_8E43:; return;
label_8E44:; return;
label_8E46:; return;
label_8E48:; return;
label_8E4B:; return;
label_8E4D:; return;
label_8E4F:; return;
label_8E52:; return;
label_8E55:; return;
label_8E57:; return;
label_8E59:; return;
label_8E5C:; return;
label_8E5F:; return;
label_8E61:; return;
label_8E63:; return;
label_8E66:; return;
label_8E69:; return;
label_8E6C:; return;
label_8E6D:; return;
label_8E70:; return;
label_8E71:; return;
label_8E74:; return;
label_8E75:; return;
label_8E77:; return;
label_8E7A:; return;
label_8E7C:; return;
label_8E7F:; return;
label_8E80:; return;
label_8E82:; return;
label_8E84:; return;
label_8E87:; return;
label_8E88:; return;
label_8E8A:; return;
label_8E8C:; return;
label_8E8F:; return;
label_8E92:; return;
label_8E93:; return;
label_8E94:; return;
label_8E95:; return;
label_8E96:; return;
label_8E98:; return;
label_8E99:; return;
label_8E9C:; return;
label_8E9D:; return;
label_8E9F:; return;
label_8EA2:; return;
label_8EA4:; return;
label_8EA6:; return;
label_8EA8:; return;
label_8EAB:; return;
label_8EAC:; return;
label_8EAE:; return;
label_8EB1:; return;
label_8EB2:; return;
label_8EB5:; return;
label_8EB7:; return;
label_8EB9:; return;
label_8EBC:; return;
label_8EBD:; return;
label_8EC0:; return;
label_8EC3:; return;
label_8EC4:; return;
label_8EC5:; return;
label_8EC6:; return;
label_8EC8:; return;
label_8EC9:; return;
label_8ECB:; return;
label_8ECD:; return;
label_8ECF:; return;
label_8ED0:; return;
label_8ED1:; return;
label_8ED3:; return;
label_8ED5:; return;
label_8ED7:; return;
label_8ED9:; return;
label_8EDB:; return;
label_8EDD:; return;
label_8EDF:; return;
label_8EE1:; return;
label_8EE4:; return;
label_8EE5:; return;
label_8EE7:; return;
label_8EE9:; return;
label_8EEB:; return;
label_8EED:; return;
label_8EF0:; return;
label_8EF2:; return;
label_8EF5:; return;
label_8EF6:; return;
label_8EF7:; return;
label_8EF8:; return;
label_8EF9:; return;
label_8EFA:; return;
label_8EFC:; return;
label_8EFF:; return;
label_8F00:; return;
label_8F02:; return;
label_8F05:; return;
label_8F06:; return;
label_8F08:; return;
label_8F0B:; return;
label_8F0C:; return;
label_8F0F:; return;
label_8F12:; return;
label_8F13:; return;
label_8F16:; return;
label_8F19:; return;
label_8F1A:; return;
label_8F1C:; return;
label_8F1E:; return;
label_8F21:; return;
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
label_8F38:; return;
label_8F3B:; return;
label_8F3C:; return;
label_8F3E:; return;
label_8F41:; return;
label_8F43:; return;
label_8F46:; return;
label_8F49:; return;
label_8F4A:; return;
label_8F4D:; return;
label_8F4E:; return;
label_8F51:; return;
label_8F52:; return;
label_8F54:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5C:; return;
label_8F5D:; return;
label_8F5F:; return;
label_8F61:; return;
label_8F64:; return;
label_8F65:; return;
label_8F67:; return;
label_8F69:; return;
label_8F6C:; return;
label_8F6F:; return;
label_8F71:; return;
label_8F73:; return;
label_8F75:; return;
label_8F78:; return;
label_8F79:; return;
label_8F7B:; return;
label_8F7E:; return;
label_8F7F:; return;
label_8F82:; return;
label_8F84:; return;
label_8F86:; return;
label_8F89:; return;
label_8F8A:; return;
label_8F8C:; return;
label_8F8F:; return;
label_8F90:; return;
label_8F92:; return;
label_8F94:; return;
label_8F96:; return;
label_8F98:; return;
label_8F9A:; return;
label_8F9C:; return;
label_8F9E:; return;
label_8FA0:; return;
label_8FA2:; return;
label_8FA4:; return;
label_8FA7:; return;
label_8FA8:; return;
label_8FAA:; return;
label_8FAC:; return;
label_8FAE:; return;
label_8FB0:; return;
label_8FB3:; return;
label_8FB5:; return;
label_8FB8:; return;
label_8FB9:; return;
label_8FBB:; return;
label_8FBE:; return;
label_8FBF:; return;
label_8FC1:; return;
label_8FC4:; return;
label_8FC5:; return;
label_8FC7:; return;
label_8FCA:; return;
label_8FCB:; return;
label_8FCE:; return;
label_8FCF:; return;
label_8FD1:; return;
label_8FD3:; return;
label_8FD6:; return;
label_8FD7:; return;
label_8FD9:; return;
label_8FDC:; return;
label_8FDD:; return;
label_8FDF:; return;
label_8FE2:; return;
label_8FE3:; return;
label_8FE5:; return;
label_8FE8:; return;
label_8FE9:; return;
label_8FEC:; return;
label_8FED:; return;
label_8FEF:; return;
label_8FF2:; return;
label_8FF4:; return;
label_8FF7:; return;
label_8FFA:; return;
label_8FFB:; return;
label_8FFD:; return;
label_8FFE:; return;
label_9000:; return;
label_9002:; return;
label_9004:; return;
label_9006:; return;
label_9007:; return;
label_9009:; return;
label_900B:; return;
label_900D:; return;
label_900F:; return;
label_9011:; return;
label_9013:; return;
label_9015:; return;
label_9016:; return;
label_9018:; return;
label_901A:; return;
label_901C:; return;
label_901E:; return;
label_9020:; return;
label_9022:; return;
label_9024:; return;
label_9025:; return;
label_9027:; return;
label_9029:; return;
label_902B:; return;
label_902D:; return;
label_902F:; return;
label_9031:; return;
label_9033:; return;
label_9034:; return;
label_9036:; return;
label_9038:; return;
label_903A:; return;
label_903C:; return;
label_903E:; return;
label_9040:; return;
label_9042:; return;
label_9043:; return;
label_9045:; return;
label_9047:; return;
label_9049:; return;
label_904B:; return;
label_904D:; return;
label_904E:; return;
label_9051:; return;
label_9053:; return;
label_9056:; return;
label_9058:; return;
label_905A:; return;
label_905C:; return;
label_905F:; return;
label_9060:; return;
label_9062:; return;
label_9064:; return;
label_9067:; return;
label_9069:; return;
label_906B:; return;
label_906E:; return;
label_906F:; return;
label_9071:; return;
label_9073:; return;
label_9076:; return;
label_9078:; return;
label_907A:; return;
label_907D:; return;
label_907E:; return;
label_9080:; return;
label_9082:; return;
label_9085:; return;
label_9087:; return;
label_9089:; return;
label_908C:; return;
label_908D:; return;
label_908F:; return;
label_9091:; return;
label_9094:; return;
label_9096:; return;
label_9099:; return;
label_909B:; return;
label_909E:; return;
label_90A0:; return;
label_90A2:; return;
label_90A4:; return;
label_90A5:; return;
label_90A8:; return;
label_90AB:; return;
label_90AD:; return;
label_90AF:; return;
label_90B0:; return;
label_90B2:; return;
label_90B5:; return;
label_90B8:; return;
label_90BA:; return;
label_90BB:; return;
label_90BE:; return;
label_90C1:; return;
label_90C3:; return;
label_90C5:; return;
label_90C6:; return;
label_90C8:; return;
label_90CB:; return;
label_90CE:; return;
label_90D0:; return;
label_90D1:; return;
label_90D4:; return;
label_90D7:; return;
label_90D9:; return;
label_90DB:; return;
label_90DC:; return;
label_90DE:; return;
label_90E1:; return;
label_90E4:; return;
label_90E6:; return;
label_90E7:; return;
label_90EA:; return;
label_90ED:; return;
label_90EF:; return;
label_90F1:; return;
label_90F2:; return;
label_90F4:; return;
label_90F7:; return;
label_90FA:; return;
label_90FC:; return;
label_90FD:; return;
label_9100:; return;
label_9103:; return;
label_9105:; return;
label_9107:; return;
label_9108:; return;
label_910A:; return;
label_910D:; return;
label_9110:; return;
label_9112:; return;
label_9113:; return;
label_9116:; return;
label_9119:; return;
label_911B:; return;
label_911D:; return;
label_911F:; return;
label_9122:; return;
label_9125:; return;
label_9128:; return;
label_912B:; return;
label_912E:; return;
label_9131:; return;
label_9133:; return;
label_9136:; return;
label_9137:; return;
label_9138:; return;
label_9139:; return;
label_913A:; return;
label_913C:; return;
label_913D:; return;
label_913E:; return;
label_913F:; return;
label_9140:; return;
label_9141:; return;
label_9142:; return;
label_9143:; return;
label_9144:; return;
label_9145:; return;
label_9146:; return;
label_9149:; return;
label_914B:; return;
label_914C:; return;
label_914D:; return;
label_9150:; return;
label_9151:; return;
label_9154:; return;
label_9156:; return;
label_9159:; return;
label_915C:; return;
label_915F:; return;
label_9161:; return;
label_9162:; return;
label_9163:; return;
label_9164:; return;
label_9166:; return;
label_9169:; return;
label_916B:; return;
label_916D:; return;
label_916F:; return;
label_9172:; return;
label_9174:; return;
label_9177:; return;
label_917A:; return;
label_917C:; return;
label_917E:; return;
label_9180:; return;
label_9183:; return;
label_9185:; return;
label_9188:; return;
label_918B:; return;
label_918D:; return;
label_9190:; return;
label_9192:; return;
label_9195:; return;
label_9197:; return;
label_9199:; return;
label_919B:; return;
label_919D:; return;
label_91A0:; return;
label_91A2:; return;
label_91A5:; return;
label_91A8:; return;
label_91AA:; return;
label_91AC:; return;
label_91AE:; return;
label_91B1:; return;
label_91B3:; return;
label_91B6:; return;
label_91B9:; return;
label_91BB:; return;
label_91BE:; return;
label_91C0:; return;
label_91C3:; return;
label_91C4:; return;
label_91C7:; return;
label_91C8:; return;
label_91CB:; return;
label_91CC:; return;
label_91CF:; return;
label_91D0:; return;
label_91D2:; return;
label_91D3:; return;
label_91D4:; return;
label_91D6:; return;
label_91D7:; return;
label_91DA:; return;
label_91DD:; return;
label_91DE:; return;
label_91E0:; return;
label_91E3:; return;
label_91E6:; return;
label_91E7:; return;
label_91E8:; return;
label_91EA:; return;
label_91EC:; return;
label_91ED:; return;
label_91F0:; return;
label_91F2:; return;
label_91F3:; return;
label_91F6:; return;
label_91F8:; return;
label_91FB:; return;
label_91FC:; return;
label_91FF:; return;
label_9200:; return;
label_9202:; return;
label_9203:; return;
label_9204:; return;
label_9205:; return;
label_9206:; return;
label_9207:; return;
label_9209:; return;
label_920C:; return;
label_920D:; return;
label_9210:; return;
label_9211:; return;
label_9213:; return;
label_9214:; return;
label_9215:; return;
label_9216:; return;
label_9218:; return;
label_921A:; return;
label_921D:; return;
label_921E:; return;
label_9221:; return;
label_9223:; return;
label_9226:; return;
label_9228:; return;
label_922B:; return;
label_922C:; return;
label_922D:; return;
label_922E:; return;
label_9231:; return;
label_9232:; return;
label_9234:; return;
label_9237:; return;
label_9239:; return;
label_923B:; return;
label_923D:; return;
label_923F:; return;
label_9241:; return;
label_9243:; return;
label_9246:; return;
label_9248:; return;
label_9249:; return;
label_924B:; return;
label_924C:; return;
label_924D:; return;
label_924E:; return;
label_9251:; return;
label_9253:; return;
label_9256:; return;
label_9259:; return;
label_925A:; return;
label_925D:; return;
label_9260:; return;
label_9262:; return;
label_9265:; return;
label_9266:; return;
label_9267:; return;
label_9268:; return;
label_9269:; return;
label_926A:; return;
label_926D:; return;
label_926F:; return;
label_9272:; return;
label_9275:; return;
label_9276:; return;
label_9279:; return;
label_927C:; return;
label_927E:; return;
label_9281:; return;
label_9282:; return;
label_9283:; return;
label_9284:; return;
label_9286:; return;
label_9289:; return;
label_928A:; return;
label_928D:; return;
label_928F:; return;
label_9290:; return;
label_9293:; return;
label_9295:; return;
label_9297:; return;
label_9299:; return;
label_929B:; return;
label_929D:; return;
label_929F:; return;
label_92A1:; return;
label_92A3:; return;
label_92A5:; return;
label_92A7:; return;
label_92AA:; return;
label_92AC:; return;
label_92AE:; return;
label_92B0:; return;
label_92B2:; return;
label_92B5:; return;
label_92B7:; return;
label_92B9:; return;
label_92BC:; return;
label_92BE:; return;
label_92BF:; return;
label_92C1:; return;
label_92C2:; return;
label_92C3:; return;
label_92C4:; return;
label_92C5:; return;
label_92C7:; return;
label_92C8:; return;
label_92CA:; return;
label_92CC:; return;
label_92CE:; return;
label_92D0:; return;
label_92D2:; return;
label_92D4:; return;
label_92D6:; return;
label_92D7:; return;
label_92D9:; return;
label_92DB:; return;
label_92DD:; return;
label_92DF:; return;
label_92E1:; return;
label_92E3:; return;
label_92E4:; return;
label_92E6:; return;
label_92E8:; return;
label_92EA:; return;
label_92EC:; return;
label_92ED:; return;
label_92EF:; return;
label_92F1:; return;
label_92F2:; return;
label_92F4:; return;
label_92F6:; return;
label_92F8:; return;
label_92F9:; return;
label_92FB:; return;
label_92FD:; return;
label_92FF:; return;
label_9301:; return;
label_9303:; return;
label_9304:; return;
label_9306:; return;
label_9308:; return;
label_930A:; return;
label_930C:; return;
label_930D:; return;
label_930F:; return;
label_9311:; return;
label_9313:; return;
label_9315:; return;
label_9316:; return;
label_9318:; return;
label_931B:; return;
label_931C:; return;
label_931F:; return;
label_9320:; return;
label_9323:; return;
label_9324:; return;
label_9326:; return;
label_9327:; return;
label_9328:; return;
label_932A:; return;
label_932B:; return;
label_932E:; return;
label_9331:; return;
label_9332:; return;
label_9334:; return;
label_9337:; return;
label_933A:; return;
label_933B:; return;
label_933D:; return;
label_9340:; return;
label_9341:; return;
label_9344:; return;
label_9346:; return;
label_9347:; return;
label_934A:; return;
label_934C:; return;
label_934E:; return;
label_9350:; return;
label_9352:; return;
label_9354:; return;
label_9356:; return;
label_9358:; return;
label_935A:; return;
label_935C:; return;
label_935E:; return;
label_9361:; return;
label_9363:; return;
label_9365:; return;
label_9367:; return;
label_9369:; return;
label_936C:; return;
label_936E:; return;
label_9370:; return;
label_9373:; return;
label_9375:; return;
label_9376:; return;
label_9378:; return;
label_9379:; return;
label_937A:; return;
label_937B:; return;
label_937C:; return;
label_937E:; return;
label_937F:; return;
label_9382:; return;
label_9384:; return;
label_9387:; return;
label_9389:; return;
label_938C:; return;
label_938F:; return;
label_9391:; return;
label_9394:; return;
label_9397:; return;
label_9399:; return;
label_939B:; return;
label_939D:; return;
label_93A0:; return;
label_93A3:; return;
label_93A6:; return;
label_93A8:; return;
label_93AB:; return;
label_93AE:; return;
label_93B1:; return;
label_93B4:; return;
label_93B6:; return;
label_93B8:; return;
label_93BB:; return;
label_93BE:; return;
label_93BF:; return;
label_93C2:; return;
label_93C5:; return;
label_93C8:; return;
label_93CB:; return;
label_93CC:; return;
label_93CE:; return;
label_93D0:; return;
label_93D2:; return;
label_93D4:; return;
label_93D6:; return;
label_93D8:; return;
label_93DA:; return;
label_93DC:; return;
label_93DE:; return;
label_93E0:; return;
label_93E2:; return;
label_93E4:; return;
label_93E6:; return;
label_93E8:; return;
label_93EA:; return;
label_93EC:; return;
label_93ED:; return;
label_93EE:; return;
label_93F0:; return;
label_93F1:; return;
label_93F2:; return;
label_93F3:; return;
label_93F4:; return;
label_93F5:; return;
label_93F7:; return;
label_93F8:; return;
label_93F9:; return;
label_93FA:; return;
label_93FB:; return;
label_93FC:; return;
label_93FD:; return;
label_93FE:; return;
label_93FF:; return;
label_9400:; return;
label_9401:; return;
label_9402:; return;
label_9403:; return;
label_9404:; return;
label_9405:; return;
label_9406:; return;
label_9407:; return;
label_9408:; return;
label_940A:; return;
label_940B:; return;
label_940D:; return;
label_940E:; return;
label_940F:; return;
label_9410:; return;
label_9411:; return;
label_9413:; return;
label_9414:; return;
label_9415:; return;
label_9416:; return;
label_9417:; return;
label_9418:; return;
label_941A:; return;
label_941B:; return;
label_941D:; return;
label_941E:; return;
label_941F:; return;
label_9420:; return;
label_9421:; return;
label_9422:; return;
label_9423:; return;
label_9424:; return;
label_9425:; return;
label_9426:; return;
label_9427:; return;
label_9428:; return;
label_9429:; return;
label_942A:; return;
label_942C:; return;
label_942D:; return;
label_942E:; return;
label_942F:; return;
label_9430:; return;
label_9431:; return;
label_9432:; return;
label_9433:; return;
label_9435:; return;
label_9436:; return;
label_9437:; return;
label_9438:; return;
label_9439:; return;
label_943A:; return;
label_943B:; return;
label_943C:; return;
label_943F:; return;
label_9456:; return;
label_9458:; return;
label_945A:; return;
label_945B:; return;
label_945D:; return;
label_945F:; return;
label_9460:; return;
label_9462:; return;
label_9464:; return;
label_9465:; return;
label_9467:; return;
label_9469:; return;
label_946A:; return;
label_946C:; return;
label_946E:; return;
label_946F:; return;
label_9471:; return;
label_9473:; return;
label_9474:; return;
label_9476:; return;
label_9478:; return;
label_9479:; return;
label_947B:; return;
label_947D:; return;
label_947E:; return;
label_9480:; return;
label_9482:; return;
label_9483:; return;
label_9485:; return;
label_9487:; return;
label_9488:; return;
label_948A:; return;
label_948C:; return;
label_948E:; return;
label_9490:; return;
label_9492:; return;
label_9494:; return;
label_9496:; return;
label_9498:; return;
label_949A:; return;
label_949C:; return;
label_949E:; return;
label_94A0:; return;
label_94A2:; return;
label_94A5:; return;
label_94A6:; return;
label_94A7:; return;
label_94A9:; return;
label_94AB:; return;
label_94AD:; return;
label_94AE:; return;
label_94B0:; return;
label_94B2:; return;
label_94B4:; return;
label_94B6:; return;
label_94B8:; return;
label_94BB:; return;
label_94BD:; return;
label_94C0:; return;
label_94C2:; return;
label_94C5:; return;
label_94C7:; return;
label_94CA:; return;
label_94CC:; return;
label_94CF:; return;
label_94D1:; return;
label_94D4:; return;
label_94D5:; return;
label_94D6:; return;
label_94D9:; return;
label_94DA:; return;
label_94DC:; return;
label_94DE:; return;
label_94E0:; return;
label_94E2:; return;
label_94E4:; return;
label_94E6:; return;
label_94E8:; return;
label_94EA:; return;
label_94EC:; return;
label_94EE:; return;
label_94F0:; return;
label_94F2:; return;
label_94F4:; return;
label_94F6:; return;
label_94F8:; return;
label_94FA:; return;
label_94FC:; return;
label_94FE:; return;
label_9500:; return;
label_9502:; return;
label_9504:; return;
label_9506:; return;
label_9508:; return;
label_950A:; return;
label_950C:; return;
label_950E:; return;
label_9510:; return;
label_9513:; return;
label_9516:; return;
label_9518:; return;
label_951A:; return;
label_951C:; return;
label_951E:; return;
label_9520:; return;
label_9522:; return;
label_9524:; return;
label_9526:; return;
label_9529:; return;
label_952C:; return;
label_952E:; return;
label_9530:; return;
label_9532:; return;
label_9534:; return;
label_9536:; return;
label_9538:; return;
label_953A:; return;
label_953C:; return;
label_953E:; return;
label_9540:; return;
label_9542:; return;
label_9544:; return;
label_9546:; return;
label_9548:; return;
label_954A:; return;
label_954C:; return;
label_954E:; return;
label_9550:; return;
label_9552:; return;
label_9555:; return;
label_9557:; return;
label_9559:; return;
label_955B:; return;
label_955E:; return;
label_9560:; return;
label_9562:; return;
label_9564:; return;
label_9566:; return;
label_9567:; return;
label_9569:; return;
label_956B:; return;
label_956D:; return;
label_956F:; return;
label_9571:; return;
label_9573:; return;
label_9575:; return;
label_9577:; return;
label_9579:; return;
label_957C:; return;
label_957D:; return;
label_957E:; return;
label_957F:; return;
label_9581:; return;
label_9582:; return;
label_9583:; return;
label_9585:; return;
label_9586:; return;
label_9588:; return;
label_958A:; return;
label_958C:; return;
label_958E:; return;
label_9590:; return;
label_9593:; return;
label_9595:; return;
label_9596:; return;
label_9597:; return;
label_9599:; return;
label_959A:; return;
label_959B:; return;
label_959D:; return;
label_959F:; return;
label_95A0:; return;
label_95A1:; return;
label_95A2:; return;
label_95A5:; return;
label_95A7:; return;
label_95A9:; return;
label_95AC:; return;
label_95AD:; return;
label_95AE:; return;
label_95B1:; return;
label_95B3:; return;
label_95B6:; return;
label_95B8:; return;
label_95BA:; return;
label_95BC:; return;
label_95BE:; return;
label_95C0:; return;
label_95C2:; return;
label_95C3:; return;
label_95C5:; return;
label_95C8:; return;
label_95C9:; return;
label_95CA:; return;
label_95CC:; return;
label_95CE:; return;
label_95D0:; return;
label_95D2:; return;
label_95D5:; return;
label_95D6:; return;
label_95D7:; return;
label_95D9:; return;
label_95DB:; return;
label_95DE:; return;
label_95DF:; return;
label_95E0:; return;
label_95E1:; return;
label_95E2:; return;
label_95E3:; return;
label_95E6:; return;
label_95E8:; return;
label_95EA:; return;
label_95EC:; return;
label_95EE:; return;
label_95F0:; return;
label_95F2:; return;
label_95F4:; return;
label_95F6:; return;
label_95F8:; return;
label_95FA:; return;
label_95FC:; return;
label_95FE:; return;
label_9600:; return;
label_9602:; return;
label_9603:; return;
label_9606:; return;
label_9607:; return;
label_9609:; return;
label_960B:; return;
label_960D:; return;
label_960F:; return;
label_9611:; return;
label_9613:; return;
label_9615:; return;
label_9616:; return;
label_9618:; return;
label_961A:; return;
label_961C:; return;
label_961E:; return;
label_9620:; return;
label_9622:; return;
label_9624:; return;
label_9626:; return;
label_9628:; return;
label_9629:; return;
label_962B:; return;
label_962D:; return;
label_962F:; return;
label_9631:; return;
label_9633:; return;
label_9634:; return;
label_9637:; return;
label_9639:; return;
label_963B:; return;
label_963E:; return;
label_963F:; return;
label_9641:; return;
label_9642:; return;
label_9645:; return;
label_9646:; return;
label_9648:; return;
label_964A:; return;
label_964C:; return;
label_964E:; return;
label_9650:; return;
label_9652:; return;
label_9655:; return;
label_9656:; return;
label_9658:; return;
label_965A:; return;
label_965D:; return;
label_965E:; return;
label_9660:; return;
label_9662:; return;
label_9664:; return;
label_9666:; return;
label_9667:; return;
label_966A:; return;
label_966B:; return;
label_966D:; return;
label_966F:; return;
label_9670:; return;
label_9671:; return;
label_9672:; return;
label_9675:; return;
label_9677:; return;
label_9679:; return;
label_967C:; return;
label_967D:; return;
label_967E:; return;
label_9681:; return;
label_9683:; return;
label_9686:; return;
label_9688:; return;
label_968A:; return;
label_968C:; return;
label_968D:; return;
label_968E:; return;
label_9690:; return;
label_9693:; return;
label_9694:; return;
label_9695:; return;
label_9697:; return;
label_9699:; return;
label_969C:; return;
label_969D:; return;
label_969E:; return;
label_969F:; return;
label_96A0:; return;
label_96A1:; return;
label_96A3:; return;
label_96A5:; return;
label_96A7:; return;
label_96AA:; return;
label_96AC:; return;
label_96AE:; return;
label_96B0:; return;
label_96B2:; return;
label_96B4:; return;
label_96B6:; return;
label_96B8:; return;
label_96B9:; return;
label_96BB:; return;
label_96BD:; return;
label_96BF:; return;
label_96C1:; return;
label_96C3:; return;
label_96C5:; return;
label_96C7:; return;
label_96C9:; return;
label_96CC:; return;
label_96CE:; return;
label_96D0:; return;
label_96D1:; return;
label_96D2:; return;
label_96D4:; return;
label_96D6:; return;
label_96D8:; return;
label_96DA:; return;
label_96DC:; return;
label_96DE:; return;
label_96E0:; return;
label_96E2:; return;
label_96E4:; return;
label_96E6:; return;
label_96E8:; return;
label_96EB:; return;
label_96EC:; return;
label_96EE:; return;
label_96F0:; return;
label_96F1:; return;
label_96F4:; return;
label_96F5:; return;
label_96F6:; return;
label_96F8:; return;
label_96FA:; return;
label_96FC:; return;
label_96FE:; return;
label_9700:; return;
label_9703:; return;
label_9706:; return;
label_9708:; return;
label_970A:; return;
label_970B:; return;
label_970D:; return;
label_970F:; return;
label_9711:; return;
label_9713:; return;
label_9715:; return;
label_9717:; return;
label_9719:; return;
label_971C:; return;
label_971E:; return;
label_9720:; return;
label_9722:; return;
label_9724:; return;
label_9727:; return;
label_9728:; return;
label_972A:; return;
label_972B:; return;
label_972C:; return;
label_972D:; return;
label_9730:; return;
label_9732:; return;
label_9734:; return;
label_9737:; return;
label_9738:; return;
label_973B:; return;
label_973E:; return;
label_9741:; return;
label_9744:; return;
label_9745:; return;
label_9747:; return;
label_974A:; return;
label_974D:; return;
label_9750:; return;
label_9753:; return;
label_9754:; return;
label_9755:; return;
label_9756:; return;
label_9757:; return;
label_9758:; return;
label_9759:; return;
label_975B:; return;
label_975C:; return;
label_975E:; return;
label_9760:; return;
label_9762:; return;
label_9764:; return;
label_9766:; return;
label_9768:; return;
label_9769:; return;
label_976A:; return;
label_976C:; return;
label_976D:; return;
label_9770:; return;
label_9773:; return;
label_9775:; return;
label_9778:; return;
label_977A:; return;
label_977D:; return;
label_977F:; return;
label_9782:; return;
label_9784:; return;
label_9786:; return;
label_9788:; return;
label_978A:; return;
label_978D:; return;
label_9790:; return;
label_9791:; return;
label_9794:; return;
label_9797:; return;
label_9799:; return;
label_979C:; return;
label_979E:; return;
label_97A0:; return;
label_97A3:; return;
label_97A6:; return;
label_97A8:; return;
label_97AA:; return;
label_97AC:; return;
label_97AE:; return;
label_97B1:; return;
label_97B3:; return;
label_97B5:; return;
label_97B7:; return;
label_97B9:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C4:; return;
label_97C6:; return;
label_97C8:; return;
label_97CB:; return;
label_97CD:; return;
label_97CF:; return;
label_97D1:; return;
label_97D4:; return;
label_97D7:; return;
label_97D8:; return;
label_97DA:; return;
label_97DD:; return;
label_97DF:; return;
label_97E2:; return;
label_97E4:; return;
label_97E7:; return;
label_97EA:; return;
label_97EC:; return;
label_97EF:; return;
label_97F2:; return;
label_97F4:; return;
label_97F6:; return;
label_97F9:; return;
label_97FB:; return;
label_97FE:; return;
label_9801:; return;
label_9803:; return;
label_9806:; return;
label_9809:; return;
label_980C:; return;
label_980F:; return;
label_9810:; return;
label_9811:; return;
label_9814:; return;
label_9817:; return;
label_981A:; return;
label_981B:; return;
label_981C:; return;
label_981F:; return;
label_9820:; return;
label_9822:; return;
label_9824:; return;
label_9826:; return;
label_9828:; return;
label_982A:; return;
label_982C:; return;
label_982D:; return;
label_982E:; return;
label_9830:; return;
label_9831:; return;
label_9832:; return;
label_9833:; return;
label_9835:; return;
label_9836:; return;
label_9837:; return;
label_9839:; return;
label_983A:; return;
label_983B:; return;
label_983C:; return;
label_983E:; return;
label_9841:; return;
label_9842:; return;
label_9843:; return;
label_9844:; return;
label_9845:; return;
label_9846:; return;
label_9848:; return;
label_984A:; return;
label_984C:; return;
label_984F:; return;
label_9851:; return;
label_9853:; return;
label_9855:; return;
label_9857:; return;
label_985A:; return;
label_985C:; return;
label_985F:; return;
label_9862:; return;
label_9864:; return;
label_9866:; return;
label_9869:; return;
label_986A:; return;
label_986B:; return;
label_986C:; return;
label_986D:; return;
label_986E:; return;
label_9870:; return;
label_9872:; return;
label_9874:; return;
label_9876:; return;
label_9878:; return;
label_987A:; return;
label_987B:; return;
label_987C:; return;
label_987E:; return;
label_987F:; return;
label_9880:; return;
label_9881:; return;
label_9883:; return;
label_9884:; return;
label_9885:; return;
label_9887:; return;
label_9888:; return;
label_9889:; return;
label_988A:; return;
label_988C:; return;
label_988F:; return;
label_9890:; return;
label_9891:; return;
label_9892:; return;
label_9893:; return;
label_9894:; return;
label_9896:; return;
label_9898:; return;
label_989B:; return;
label_989C:; return;
label_989D:; return;
label_989E:; return;
label_989F:; return;
label_98A1:; return;
label_98A3:; return;
label_98A6:; return;
label_98A7:; return;
label_98A8:; return;
label_98A9:; return;
label_98AA:; return;
label_98AC:; return;
label_98AE:; return;
label_98B1:; return;
label_98B2:; return;
label_98B4:; return;
label_98B6:; return;
label_98B8:; return;
label_98BA:; return;
label_98BC:; return;
label_98BF:; return;
label_98C1:; return;
label_98C3:; return;
label_98C5:; return;
label_98C7:; return;
label_98CA:; return;
label_98CD:; return;
label_98CF:; return;
label_98D1:; return;
label_98D4:; return;
label_98D7:; return;
label_98DA:; return;
label_98DD:; return;
label_98DE:; return;
label_98DF:; return;
label_98E0:; return;
label_98E1:; return;
label_98E2:; return;
label_98E5:; return;
label_98E7:; return;
label_98EA:; return;
label_98EC:; return;
label_98EF:; return;
label_98F2:; return;
label_98F5:; return;
label_98F7:; return;
label_98F9:; return;
label_9906:; return;
label_9907:; return;
label_990A:; return;
label_990B:; return;
label_990E:; return;
label_990F:; return;
label_9912:; return;
label_9913:; return;
label_9916:; return;
label_9917:; return;
label_991A:; return;
label_991C:; return;
label_991E:; return;
label_9920:; return;
label_9922:; return;
label_9924:; return;
label_9926:; return;
label_9929:; return;
label_992A:; return;
label_992B:; return;
label_992C:; return;
label_992D:; return;
label_9930:; return;
label_9933:; return;
label_9935:; return;
label_9936:; return;
label_9938:; return;
label_993A:; return;
label_993C:; return;
label_993E:; return;
label_9940:; return;
label_9942:; return;
label_9944:; return;
label_9947:; return;
label_9949:; return;
label_994C:; return;
label_994E:; return;
label_9950:; return;
label_9952:; return;
label_9955:; return;
label_9958:; return;
label_995B:; return;
label_995D:; return;
label_9960:; return;
label_9963:; return;
label_9965:; return;
label_9967:; return;
label_996A:; return;
label_996D:; return;
label_9970:; return;
label_9973:; return;
label_9976:; return;
label_9979:; return;
label_997B:; return;
label_997E:; return;
label_9981:; return;
label_9982:; return;
label_9983:; return;
label_9984:; return;
label_9985:; return;
label_9987:; return;
label_9989:; return;
label_998B:; return;
label_998C:; return;
label_998D:; return;
label_998E:; return;
label_9990:; return;
label_9993:; return;
label_9996:; return;
label_9999:; return;
label_999A:; return;
label_999B:; return;
label_999D:; return;
label_999F:; return;
label_99A1:; return;
label_99A3:; return;
label_99A5:; return;
label_99A6:; return;
label_99A9:; return;
label_99AB:; return;
label_99AD:; return;
label_99AF:; return;
label_99B1:; return;
label_99B3:; return;
label_99B5:; return;
label_99B7:; return;
label_99B8:; return;
label_99BB:; return;
label_99BC:; return;
label_99BE:; return;
label_99C0:; return;
label_99C2:; return;
label_99C4:; return;
label_99C6:; return;
label_99C8:; return;
label_99CA:; return;
label_99CD:; return;
label_99CF:; return;
label_99D2:; return;
label_99D4:; return;
label_99D6:; return;
label_99D8:; return;
label_99DB:; return;
label_99DE:; return;
label_99E1:; return;
label_99E3:; return;
label_99E6:; return;
label_99E9:; return;
label_99EB:; return;
label_99ED:; return;
label_99F0:; return;
label_99F3:; return;
label_99F6:; return;
label_99F9:; return;
label_99FC:; return;
label_99FF:; return;
label_9A01:; return;
label_9A04:; return;
label_9A06:; return;
label_9A07:; return;
label_9A08:; return;
label_9A09:; return;
label_9A0B:; return;
label_9A0E:; return;
label_9A0F:; return;
label_9A11:; return;
label_9A12:; return;
label_9A13:; return;
label_9A14:; return;
label_9A16:; return;
label_9A19:; return;
label_9A1C:; return;
label_9A1F:; return;
label_9A20:; return;
label_9A21:; return;
label_9A23:; return;
label_9A24:; return;
label_9A26:; return;
label_9A28:; return;
label_9A2A:; return;
label_9A2C:; return;
label_9A2E:; return;
label_9A2F:; return;
label_9A31:; return;
label_9A34:; return;
label_9A35:; return;
label_9A38:; return;
label_9A3A:; return;
label_9A3C:; return;
label_9A3D:; return;
label_9A3E:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A41:; return;
label_9A44:; return;
label_9A45:; return;
label_9A48:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4F:; return;
label_9A51:; return;
label_9A52:; return;
label_9A53:; return;
label_9A55:; return;
label_9A57:; return;
label_9A5A:; return;
label_9A5C:; return;
label_9A5F:; return;
label_9A60:; return;
label_9A62:; return;
label_9A65:; return;
label_9A66:; return;
label_9A68:; return;
label_9A6B:; return;
label_9A6C:; return;
label_9A6E:; return;
label_9A71:; return;
label_9A72:; return;
label_9A75:; return;
label_9A77:; return;
label_9A7A:; return;
label_9A7B:; return;
label_9A7E:; return;
label_9A80:; return;
label_9A83:; return;
label_9A84:; return;
label_9A86:; return;
label_9A89:; return;
label_9A8A:; return;
label_9A8C:; return;
label_9A8F:; return;
label_9A90:; return;
label_9A93:; return;
label_9A96:; return;
label_9A97:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9A9E:; return;
label_9AA0:; return;
label_9AA3:; return;
label_9AA4:; return;
label_9AA6:; return;
label_9AA8:; return;
label_9AAB:; return;
label_9AAC:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB2:; return;
label_9AB5:; return;
label_9AB8:; return;
label_9AB9:; return;
label_9ABC:; return;
label_9ABF:; return;
label_9AC0:; return;
label_9AC2:; return;
label_9AC5:; return;
label_9AC8:; return;
label_9AC9:; return;
label_9ACB:; return;
label_9ACE:; return;
label_9AD0:; return;
label_9AD1:; return;
label_9AD2:; return;
label_9AD3:; return;
label_9AD5:; return;
label_9AD6:; return;
label_9AD7:; return;
label_9AD9:; return;
label_9ADA:; return;
label_9ADC:; return;
label_9ADE:; return;
label_9AE1:; return;
label_9AE3:; return;
label_9AE5:; return;
label_9AE7:; return;
label_9AE9:; return;
label_9AEB:; return;
label_9AED:; return;
label_9AEF:; return;
label_9AF1:; return;
label_9AF3:; return;
label_9AF6:; return;
label_9AF8:; return;
label_9AFA:; return;
label_9AFC:; return;
label_9AFE:; return;
label_9B01:; return;
label_9B03:; return;
label_9B05:; return;
label_9B06:; return;
label_9B08:; return;
label_9B0A:; return;
label_9B0D:; return;
label_9B0F:; return;
label_9B12:; return;
label_9B13:; return;
label_9B15:; return;
label_9B18:; return;
label_9B19:; return;
label_9B1B:; return;
label_9B1E:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B24:; return;
label_9B25:; return;
label_9B27:; return;
label_9B2A:; return;
label_9B2B:; return;
label_9B2D:; return;
label_9B30:; return;
label_9B31:; return;
label_9B33:; return;
label_9B36:; return;
label_9B39:; return;
label_9B3A:; return;
label_9B3C:; return;
label_9B3E:; return;
label_9B41:; return;
label_9B43:; return;
label_9B44:; return;
label_9B45:; return;
label_9B46:; return;
label_9B47:; return;
label_9B48:; return;
label_9B4B:; return;
label_9B4D:; return;
label_9B4F:; return;
label_9B51:; return;
label_9B53:; return;
label_9B55:; return;
label_9B57:; return;
label_9B59:; return;
label_9B5C:; return;
label_9B5D:; return;
label_9B5F:; return;
label_9B62:; return;
label_9B63:; return;
label_9B65:; return;
label_9B68:; return;
label_9B69:; return;
label_9B6B:; return;
label_9B6E:; return;
label_9B71:; return;
label_9B72:; return;
label_9B73:; return;
label_9B75:; return;
label_9B77:; return;
label_9B79:; return;
label_9B7A:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B80:; return;
label_9B82:; return;
label_9B84:; return;
label_9B86:; return;
label_9B88:; return;
label_9B8B:; return;
label_9B8E:; return;
label_9B8F:; return;
label_9B92:; return;
label_9B95:; return;
label_9B96:; return;
label_9B97:; return;
label_9B99:; return;
label_9BA8:; return;
label_9BA9:; return;
label_9BAC:; return;
label_9BAF:; return;
label_9BB2:; return;
label_9BB3:; return;
label_9BB6:; return;
label_9BB9:; return;
label_9BBC:; return;
label_9BBD:; return;
label_9BC0:; return;
label_9BC3:; return;
label_9BC6:; return;
label_9BC7:; return;
label_9BCA:; return;
label_9BCD:; return;
label_9BD0:; return;
label_9BD1:; return;
label_9BD4:; return;
label_9BD7:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDE:; return;
label_9BE1:; return;
label_9BE2:; return;
label_9BE3:; return;
label_9BE5:; return;
label_9BF4:; return;
label_9BF5:; return;
label_9BF8:; return;
label_9BFB:; return;
label_9BFE:; return;
label_9BFF:; return;
label_9C02:; return;
label_9C05:; return;
label_9C08:; return;
label_9C09:; return;
label_9C0C:; return;
label_9C0F:; return;
label_9C12:; return;
label_9C13:; return;
label_9C16:; return;
label_9C19:; return;
label_9C1C:; return;
label_9C1D:; return;
label_9C20:; return;
label_9C23:; return;
label_9C26:; return;
label_9C27:; return;
label_9C29:; return;
label_9C2B:; return;
label_9C2D:; return;
label_9C2F:; return;
label_9C31:; return;
label_9C33:; return;
label_9C35:; return;
label_9C37:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3F:; return;
label_9C41:; return;
label_9C43:; return;
label_9C45:; return;
label_9C47:; return;
label_9C49:; return;
label_9C4C:; return;
label_9C4E:; return;
label_9C50:; return;
label_9C51:; return;
label_9C52:; return;
label_9C54:; return;
label_9C55:; return;
label_9C56:; return;
label_9C57:; return;
label_9C59:; return;
label_9C5A:; return;
label_9C5C:; return;
label_9C5E:; return;
label_9C5F:; return;
label_9C61:; return;
label_9C63:; return;
label_9C65:; return;
label_9C67:; return;
label_9C69:; return;
label_9C6B:; return;
label_9C6D:; return;
label_9C6F:; return;
label_9C71:; return;
label_9C73:; return;
label_9C75:; return;
label_9C78:; return;
label_9C7A:; return;
label_9C7D:; return;
label_9C7F:; return;
label_9C81:; return;
label_9C84:; return;
label_9C86:; return;
label_9C89:; return;
label_9C8B:; return;
label_9C8D:; return;
label_9C8F:; return;
label_9C91:; return;
label_9C93:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9A:; return;
label_9C9B:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9C9F:; return;
label_9CA0:; return;
label_9CA1:; return;
label_9CA3:; return;
label_9CA4:; return;
label_9CA6:; return;
label_9CA8:; return;
label_9CA9:; return;
label_9CAB:; return;
label_9CAD:; return;
label_9CAF:; return;
label_9CB1:; return;
label_9CB3:; return;
label_9CB5:; return;
label_9CB7:; return;
label_9CB9:; return;
label_9CBB:; return;
label_9CBD:; return;
label_9CBF:; return;
label_9CC2:; return;
label_9CC4:; return;
label_9CC7:; return;
label_9CC9:; return;
label_9CCB:; return;
label_9CCE:; return;
label_9CD0:; return;
label_9CD3:; return;
label_9CD5:; return;
label_9CD7:; return;
label_9CD9:; return;
label_9CDB:; return;
label_9CDD:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE4:; return;
label_9CE5:; return;
label_9CE6:; return;
label_9CE8:; return;
label_9CE9:; return;
label_9CEA:; return;
label_9CEB:; return;
label_9CED:; return;
label_9CEE:; return;
label_9CF0:; return;
label_9CF2:; return;
label_9CF3:; return;
label_9CF5:; return;
label_9CF7:; return;
label_9CF9:; return;
label_9CFB:; return;
label_9CFD:; return;
label_9CFF:; return;
label_9D01:; return;
label_9D03:; return;
label_9D05:; return;
label_9D07:; return;
label_9D09:; return;
label_9D0C:; return;
label_9D0E:; return;
label_9D11:; return;
label_9D13:; return;
label_9D15:; return;
label_9D18:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D1F:; return;
label_9D21:; return;
label_9D23:; return;
label_9D25:; return;
label_9D27:; return;
label_9D2A:; return;
label_9D2C:; return;
label_9D2E:; return;
label_9D2F:; return;
label_9D30:; return;
label_9D32:; return;
label_9D33:; return;
label_9D34:; return;
label_9D35:; return;
label_9D37:; return;
label_9D38:; return;
label_9D3A:; return;
label_9D3C:; return;
label_9D3D:; return;
label_9D3F:; return;
label_9D41:; return;
label_9D43:; return;
}

void func_9F20_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F20_b5");
#endif
label_9F20:;
    /* $9F20: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1F12), 5); return; }
label_9F22:;
    /* $9F22: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_9F24:;
    /* $9F24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_9F26:;
    /* $9F26: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F29:;
    /* $9F29: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F2A:;
    /* $9F2A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC5; FLAG_NZ(g_cpu.A);
label_9F2C:;
    /* $9F2C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F2F:;
    /* $9F2F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F30:;
    /* $9F30: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9F32:;
    /* $9F32: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9F34:;
    /* $9F34: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_9F36:;
    /* $9F36: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F39:;
    /* $9F39: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F3A:;
    /* $9F3A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F3D:;
    /* $9F3D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F40:;
    /* $9F40: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F41:;
    /* $9F41: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9F42:;
    /* $9F42: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F43:;
    /* $9F43: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_9F45:;
    /* $9F45: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9F46:;
    /* $9F46: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9F48:;
    /* $9F48: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9F3A;
    }
label_9F4A:;
    /* $9F4A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9F4C:;
    /* $9F4C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F4F:;
    /* $9F4F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_9F52:;
    /* $9F52: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B00B_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B00B_b5");
#endif
label_B00B:;
    /* $B00B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B00C:;
    /* $B00C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B00D:;
    /* $B00D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_B00F:;
    /* $B00F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B010:;
    /* $B010: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B012:;
    /* $B012: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1004), 5); return; }
label_B014:;
    /* $B014: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_B016:;
    /* $B016: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B018:;
    /* $B018: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B01B:;
    /* $B01B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B01C:;
    /* $B01C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD7; FLAG_NZ(g_cpu.A);
label_B01E:;
    /* $B01E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B021:;
    /* $B021: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B022:;
    /* $B022: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B024:;
    /* $B024: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B026:;
    /* $B026: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_B028:;
    /* $B028: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B02B:;
    /* $B02B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B02C:;
    /* $B02C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B02F:;
    /* $B02F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B032:;
    /* $B032: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B033:;
    /* $B033: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B034:;
    /* $B034: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B035:;
    /* $B035: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_B037:;
    /* $B037: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B038:;
    /* $B038: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B03A:;
    /* $B03A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B02C;
    }
label_B03C:;
    /* $B03C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B03E:;
    /* $B03E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B041:;
    /* $B041: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B044:;
    /* $B044: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85FF_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85FF_b5");
#endif
label_85FF:;
    /* $85FF: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xD0; FLAG_NZ(g_cpu.A);
label_8601:;
    /* $8601: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x03A9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8604:;
    /* $8604: 8D */ maybe_trigger_vblank(4); nes_write(0x0412, g_cpu.A);
label_8607:;
    /* $8607: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_860D:;
    /* $860D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8624, 5); return;
}

void func_85E2_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85E2_b5");
#endif
label_85E2:;
    /* $85E2: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0x8B, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBA; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_85ED:;
    /* $85ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EF:;
    /* $85EF: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_85F1:;
    /* $85F1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8A); FLAG_NZ(g_cpu.A);
label_85F3:;
    /* $85F3: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_85F5:;
    /* $85F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_85F7:;
    /* $85F7: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_85F9:;
    /* $85F9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 5);
label_85FC:;
    /* $85FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB3); FLAG_NZ(g_cpu.A);
label_85FE:;
    /* $85FE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_8600:;
    /* $8600: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8610; }
label_8602:;
    /* $8602: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: 8D */ maybe_trigger_vblank(4); nes_write(0x0412, g_cpu.A);
label_8607:;
    /* $8607: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8106 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8106_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_860D:;
    /* $860D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8624, 5); return;
label_8610:;
    /* $8610: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8612:;
    /* $8612: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8624; }
label_8614:;
    /* $8614: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8616:;
    /* $8616: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_8619:;
    /* $8619: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_861B:;
    /* $861B: 8D */ maybe_trigger_vblank(4); nes_write(0x0413, g_cpu.A);
label_861E:;
    /* $861E: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=1 addr=$8109 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x01; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8109_b1();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8624:;
    /* $8624: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A800_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A800_b5");
#endif
label_A800:;
    /* $A800: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A801:;
    /* $A801: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A802:;
    /* $A802: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A805:;
    /* $A805: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x21); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A807:;
    /* $A807: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x22 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A809:;
    /* $A809: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x22; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A80B:;
    /* $A80B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80B); return;
}

void func_B0C8_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0C8_b5");
#endif
label_B0C8:;
    /* $B0C8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0C9:;
    /* $B0C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02DF); FLAG_NZ(g_cpu.A);
label_B0CC:;
    /* $B0CC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0CF:;
    /* $B0CF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0D0:;
    /* $B0D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B0D2:;
    /* $B0D2: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0D5:;
    /* $B0D5: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B0D8:;
    /* $B0D8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB136, 5); return;
}

void func_A17A_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A17A_b5");
#endif
label_A17A:;
    /* $A17A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A180:;
    /* $A180: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A181:;
    /* $A181: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A182:;
    /* $A182: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A183:;
    /* $A183: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_A185:;
    /* $A185: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A186:;
    /* $A186: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A188:;
    /* $A188: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A17A;
    }
label_A18A:;
    /* $A18A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A18C:;
    /* $A18C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A18F:;
    /* $A18F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A192:;
    /* $A192: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B0F6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0F6_b5");
#endif
label_B0F6:;
    /* $B0F6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0F9:;
    /* $B0F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0FC:;
    /* $B0FC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0FD:;
    /* $B0FD: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B0FE:;
    /* $B0FE: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B0FF:;
    /* $B0FF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_B101:;
    /* $B101: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B102:;
    /* $B102: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B104:;
    /* $B104: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B0F6;
    }
label_B106:;
    /* $B106: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_B108:;
    /* $B108: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B10A:;
    /* $B10A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B10D:;
    /* $B10D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B10E:;
    /* $B10E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD9; FLAG_NZ(g_cpu.A);
label_B110:;
    /* $B110: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B113:;
    /* $B113: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B114:;
    /* $B114: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B116:;
    /* $B116: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B118:;
    /* $B118: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_B11A:;
    /* $B11A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B11D:;
    /* $B11D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B11E:;
    /* $B11E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B121:;
    /* $B121: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B124:;
    /* $B124: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B125:;
    /* $B125: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B126:;
    /* $B126: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B127:;
    /* $B127: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_B129:;
    /* $B129: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B12A:;
    /* $B12A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B12C:;
    /* $B12C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B11E;
    }
label_B12E:;
    /* $B12E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B130:;
    /* $B130: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B133:;
    /* $B133: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B136:;
    /* $B136: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4CE_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4CE_b5");
#endif
label_A4CE:;
    /* $A4CE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D1:;
    /* $A4D1: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4D4:;
    /* $A4D4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A4D5:;
    /* $A4D5: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A4D6:;
    /* $A4D6: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4D8:;
    /* $A4D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A4CE;
    }
label_A4DA:;
    /* $A4DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A4DC:;
    /* $A4DC: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4DF:;
    /* $A4DF: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_A4E2:;
    /* $A4E2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D14_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D14_b5");
#endif
label_8D14:;
    /* $8D14: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8D16:;
    /* $8D16: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x59C9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D19:;
    /* $8D19: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8D26; }
label_8D1B:;
    /* $8D1B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x5A; g_cpu.C=(g_cpu.A>=0x5A)?1:0; FLAG_NZ(r&0xFF); }
label_8D1D:;
    /* $8D1D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0D00), 5); return; }
label_8D1F:;
    /* $8D1F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0432); FLAG_NZ(g_cpu.A);
label_8D22:;
    /* $8D22: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x58; g_cpu.C=(g_cpu.A>=0x58)?1:0; FLAG_NZ(r&0xFF); }
label_8D24:;
    /* $8D24: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0D00), 5); return; }
label_8D26:;
    /* $8D26: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9F12_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F12_b5");
#endif
label_9F12:;
    /* $9F12: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F15:;
    /* $9F15: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F18:;
    /* $9F18: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F19:;
    /* $9F19: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9F1A:;
    /* $9F1A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F1B:;
    /* $9F1B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_9F1D:;
    /* $9F1D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9F1E:;
    /* $9F1E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9F20:;
    /* $9F20: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9F12;
    }
label_9F22:;
    /* $9F22: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_9F24:;
    /* $9F24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_9F26:;
    /* $9F26: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F29:;
    /* $9F29: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F2A:;
    /* $9F2A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC5; FLAG_NZ(g_cpu.A);
label_9F2C:;
    /* $9F2C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F2F:;
    /* $9F2F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F30:;
    /* $9F30: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9F32:;
    /* $9F32: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9F34:;
    /* $9F34: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_9F36:;
    /* $9F36: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F39:;
    /* $9F39: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F3A:;
    /* $9F3A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F3D:;
    /* $9F3D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F40:;
    /* $9F40: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F41:;
    /* $9F41: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9F42:;
    /* $9F42: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F43:;
    /* $9F43: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_9F45:;
    /* $9F45: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9F46:;
    /* $9F46: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9F48:;
    /* $9F48: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9F3A;
    }
label_9F4A:;
    /* $9F4A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9F4C:;
    /* $9F4C: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9F4F:;
    /* $9F4F: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_9F52:;
    /* $9F52: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B004_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B004_b5");
#endif
label_B004:;
    /* $B004: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B007:;
    /* $B007: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B00A:;
    /* $B00A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B00B:;
    /* $B00B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B00C:;
    /* $B00C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B00D:;
    /* $B00D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_B00F:;
    /* $B00F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B010:;
    /* $B010: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B012:;
    /* $B012: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B004;
    }
label_B014:;
    /* $B014: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_B016:;
    /* $B016: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B018:;
    /* $B018: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B01B:;
    /* $B01B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B01C:;
    /* $B01C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD7; FLAG_NZ(g_cpu.A);
label_B01E:;
    /* $B01E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B021:;
    /* $B021: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B022:;
    /* $B022: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B024:;
    /* $B024: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B026:;
    /* $B026: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_B028:;
    /* $B028: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B02B:;
    /* $B02B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B02C:;
    /* $B02C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0280 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B02F:;
    /* $B02F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B032:;
    /* $B032: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B033:;
    /* $B033: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B034:;
    /* $B034: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B035:;
    /* $B035: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0A); g_cpu.A=r&0xFF; }
label_B037:;
    /* $B037: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B038:;
    /* $B038: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B03A:;
    /* $B03A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B02C;
    }
label_B03C:;
    /* $B03C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B03E:;
    /* $B03E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B041:;
    /* $B041: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B044:;
    /* $B044: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

