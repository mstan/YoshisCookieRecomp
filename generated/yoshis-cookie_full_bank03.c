/* yoshis-cookie_full_bank03.c — PRG bank 3 function bodies.
 * Generated part of yoshis-cookie_full.c: #included by the umbrella; NOT a
 * standalone translation unit. Do not compile or edit directly. */

void func_8100_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8100_b3");
#endif
label_8100:;
    /* $8100: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9491, 3); return;
}

void func_8148_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8148_b3");
#endif
label_8148:;
    /* $8148: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9479, 3); return;
}

void func_8157_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8157_b3");
#endif
label_8157:;
    /* $8157: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9524, 3); return;
}

void func_8109_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8109_b3");
#endif
label_8109:;
    /* $8109: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8C30, 3); return;
}

void func_8127_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8127_b3");
#endif
label_8127:;
    /* $8127: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD7, 3); return;
}

static void func_9491_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9523;
    }
label_9491:;
    /* $9491: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F1); FLAG_NZ(g_cpu.A);
label_9494:;
    /* $9494: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_94A3;
label_9496:;
    /* $9496: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_9498:;
    /* $9498: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_94A6;
label_949A:;
    /* $949A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_949C:;
    /* $949C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_94A3;
label_949E:;
    /* $949E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_94A0:;
    /* $94A0: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_94A3:;
    /* $94A3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9513, 3); return;
label_94A6:;
    /* $94A6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_94A8:;
    /* $94A8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_94AA:;
    /* $94AA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_94C8;
label_94AC:;
    /* $94AC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_94AF:;
    /* $94AF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_94B1:;
    /* $94B1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_94C8;
label_94B3:;
    /* $94B3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_94B5:;
    /* $94B5: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_94B8:;
    /* $94B8: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_94BE:;
    /* $94BE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_94C1:;
    /* $94C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_94C3:;
    /* $94C3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_94DA;
label_94C5:;
    /* $94C5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9501, 3); return;
label_94C8:;
    /* $94C8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_94CA:;
    /* $94CA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_94CC:;
    /* $94CC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_94EF;
label_94CE:;
    /* $94CE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_94D1:;
    /* $94D1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_94D3:;
    /* $94D3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_94EF;
label_94D5:;
    /* $94D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_94D7:;
    /* $94D7: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_94DA:;
    /* $94DA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_94DD:;
    /* $94DD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_94DF:;
    /* $94DF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_94E7;
label_94E1:;
    /* $94E1: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_94E7:;
    /* $94E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_94E9:;
    /* $94E9: 8D */ maybe_trigger_vblank(4); nes_write(0x0492, g_cpu.A);
label_94EC:;
    /* $94EC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9513, 3); return;
label_94EF:;
    /* $94EF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_94F1:;
    /* $94F1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_94F3:;
    /* $94F3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9513;
label_94F5:;
    /* $94F5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_94F8:;
    /* $94F8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_94FA:;
    /* $94FA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9513;
label_94FC:;
    /* $94FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_94FE:;
    /* $94FE: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_9501:;
    /* $9501: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_9504:;
    /* $9504: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9506:;
    /* $9506: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_950E;
label_9508:;
    /* $9508: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_950E:;
    /* $950E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9510:;
    /* $9510: 8D */ maybe_trigger_vblank(4); nes_write(0x0492, g_cpu.A);
label_9513:;
    /* $9513: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_9516:;
    /* $9516: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9518:;
    /* $9518: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9520;
label_951A:;
    /* $951A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x93FA, 3);
label_951D:;
    /* $951D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9523, 3); return;
label_9520:;
    /* $9520: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9412, 3);
label_9523:;
    /* $9523: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9491_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9491_b3");
#endif
    func_9491_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9523_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9523_b3");
#endif
    func_9491_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9479_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9479_b3");
#endif
label_9479:;
    /* $9479: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_947B:;
    /* $947B: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_947D:;
    /* $947D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_947F:;
    /* $947F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9481:;
    /* $9481: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x94; FLAG_NZ(g_cpu.A);
label_9483:;
    /* $9483: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9485:;
    /* $9485: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9487:;
    /* $9487: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_9489:;
    /* $9489: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_948B:;
    /* $948B: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_948D:;
    /* $948D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_9490:;
    /* $9490: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8118_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8118_b3");
#endif
label_8118:;
    /* $8118: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8812, 3); return;
}

void func_813C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_813C_b3");
#endif
label_813C:;
    /* $813C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB022, 3); return;
}

void func_813F_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_813F_b3");
#endif
label_813F:;
    /* $813F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB1E9, 3); return;
}

void func_8112_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8112_b3");
#endif
label_8112:;
    /* $8112: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8181, 3); return;
}

void func_8115_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8115_b3");
#endif
label_8115:;
    /* $8115: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8169, 3); return;
}

void func_8142_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8142_b3");
#endif
label_8142:;
    /* $8142: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB1F5, 3); return;
}

void func_8145_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8145_b3");
#endif
label_8145:;
    /* $8145: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB201, 3); return;
}

void func_810C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_810C_b3");
#endif
label_810C:;
    /* $810C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A58, 3); return;
}

void func_810F_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_810F_b3");
#endif
label_810F:;
    /* $810F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A82, 3); return;
}

void func_811B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_811B_b3");
#endif
label_811B:;
    /* $811B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8199, 3); return;
}

void func_8133_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8133_b3");
#endif
label_8133:;
    /* $8133: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x81B1, 3); return;
}

void func_8166_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8166_b3");
#endif
label_8166:;
    /* $8166: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB00A, 3); return;
}

void func_812A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_812A_b3");
#endif
label_812A:;
    /* $812A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8ADA, 3); return;
}

void func_812D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_812D_b3");
#endif
label_812D:;
    /* $812D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8B2E, 3); return;
}

void func_815A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_815A_b3");
#endif
label_815A:;
    /* $815A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x81DC, 3); return;
}

void func_815D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_815D_b3");
#endif
label_815D:;
    /* $815D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8207, 3); return;
}

void func_8103_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8103_b3");
#endif
label_8103:;
    /* $8103: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9547, 3); return;
}

void func_8130_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8130_b3");
#endif
label_8130:;
    /* $8130: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x87E9, 3); return;
}

void func_8106_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8106_b3");
#endif
label_8106:;
    /* $8106: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BAA, 3); return;
}

void func_8124_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8124_b3");
#endif
label_8124:;
    /* $8124: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BBF, 3); return;
}

void func_8160_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8160_b3");
#endif
label_8160:;
    /* $8160: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8311, 3); return;
}

static void func_9524_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9546;
    }
label_9524:;
    /* $9524: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9526:;
    /* $9526: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9527:;
    /* $9527: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9534;
label_9529:;
    /* $9529: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_952B:;
    /* $952B: 8D */ maybe_trigger_vblank(4); nes_write(0x05E4, g_cpu.A);
label_952E:;
    /* $952E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9442, 3);
label_9531:;
    /* $9531: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9546, 3); return;
label_9534:;
    /* $9534: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9535:;
    /* $9535: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_953E;
label_9537:;
    /* $9537: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E4); FLAG_NZ(g_cpu.A);
label_953A:;
    /* $953A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_953C:;
    /* $953C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_952E;
    }
label_953E:;
    /* $953E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9540:;
    /* $9540: 8D */ maybe_trigger_vblank(4); nes_write(0x05E4, g_cpu.A);
label_9543:;
    /* $9543: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x942A, 3);
label_9546:;
    /* $9546: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9524_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9524_b3");
#endif
    func_9524_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9546_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9546_b3");
#endif
    func_9524_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8139_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8139_b3");
#endif
label_8139:;
    /* $8139: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAF76, 3); return;
}

static void func_8C30_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8D00;
    }
label_8C30:;
    /* $8C30: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8C32:;
    /* $8C32: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8C84;
label_8C34:;
    /* $8C34: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F5); FLAG_NZ(g_cpu.A);
label_8C37:;
    /* $8C37: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C3F;
label_8C39:;
    /* $8C39: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03F5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C3C:;
    /* $8C3C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8C70, 3); return;
label_8C3F:;
    /* $8C3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8C41:;
    /* $8C41: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_8C44:;
    /* $8C44: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A8); FLAG_NZ(g_cpu.A);
label_8C47:;
    /* $8C47: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8C49:;
    /* $8C49: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8C6B;
label_8C4B:;
    /* $8C4B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8C4D:;
    /* $8C4D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8C4F:;
    /* $8C4F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C58;
label_8C51:;
    /* $8C51: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8C53:;
    /* $8C53: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8C55:;
    /* $8C55: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D79, 3); return;
label_8C58:;
    /* $8C58: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8C5A:;
    /* $8C5A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8C5C:;
    /* $8C5C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8C51;
    }
label_8C5E:;
    /* $8C5E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8C60:;
    /* $8C60: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8C62:;
    /* $8C62: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8C6B;
label_8C64:;
    /* $8C64: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8C66:;
    /* $8C66: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8C68:;
    /* $8C68: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D79, 3); return;
label_8C6B:;
    /* $8C6B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_8C6D:;
    /* $8C6D: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_8C70:;
    /* $8C70: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8C72:;
    /* $8C72: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8C79;
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
label_8C84:;
    /* $8C84: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_8C86:;
    /* $8C86: 8D */ maybe_trigger_vblank(4); nes_write(0x03F5, g_cpu.A);
label_8C89:;
    /* $8C89: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A8); FLAG_NZ(g_cpu.A);
label_8C8C:;
    /* $8C8C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8C8E:;
    /* $8C8E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8CD4;
label_8C90:;
    /* $8C90: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8C92:;
    /* $8C92: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8C94:;
    /* $8C94: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CD4;
label_8C96:;
    /* $8C96: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8C98:;
    /* $8C98: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8C9A:;
    /* $8C9A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CD4;
label_8C9C:;
    /* $8C9C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA1); FLAG_NZ(g_cpu.A);
label_8C9E:;
    /* $8C9E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8CA0:;
    /* $8CA0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CA5;
label_8CA2:;
    /* $8CA2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D29, 3); return;
label_8CA5:;
    /* $8CA5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8CA8:;
    /* $8CA8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8CAA:;
    /* $8CAA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D29;
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
    /* $8CBA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8CC1;
label_8CBC:;
    /* $8CBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8CBE:;
    /* $8CBE: 8D */ maybe_trigger_vblank(4); nes_write(0x040B, g_cpu.A);
label_8CC1:;
    /* $8CC1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_8CC4:;
    /* $8CC4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_8CC6:;
    /* $8CC6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8CD1;
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
    /* $8CD8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CFC;
label_8CDA:;
    /* $8CDA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8CDD:;
    /* $8CDD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8CDF:;
    /* $8CDF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8CF9;
label_8CE1:;
    /* $8CE1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8CE3:;
    /* $8CE3: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8CE6:;
    /* $8CE6: CE */ maybe_trigger_vblank(6); { uint16_t a=0x04A8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CE9:;
    /* $8CE9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CF4;
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
    /* $8D00: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D29;
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
    /* $8D16: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8D21;
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
    /* $8D1E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8CF9;
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
    /* $8D2D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D42;
label_8D2F:;
    /* $8D2F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D32:;
    /* $8D32: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D34:;
    /* $8D34: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D7C;
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
    /* $8D46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D5B;
label_8D48:;
    /* $8D48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D4B:;
    /* $8D4B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8D4D:;
    /* $8D4D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D7C;
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
    /* $8D5F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D69;
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
    /* $8D6E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D7C;
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

void func_8C30_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C30_b3");
#endif
    func_8C30_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8D00_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D00_b3");
#endif
    func_8C30_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8FD7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8FD7_b3");
#endif
label_8FD7:;
    /* $8FD7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8FD9:;
    /* $8FD9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8FE9;
label_8FDB:;
    /* $8FDB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8FDD:;
    /* $8FDD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_8FDF:;
    /* $8FDF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8FE6;
label_8FE1:;
    /* $8FE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8FE3:;
    /* $8FE3: 8D */ maybe_trigger_vblank(4); nes_write(0x03FB, g_cpu.A);
label_8FE6:;
    /* $8FE6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x903E, 3); return;
label_8FE9:;
    /* $8FE9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8FEB:;
    /* $8FEB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8FED:;
    /* $8FED: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9011;
label_8FEF:;
    /* $8FEF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FB); FLAG_NZ(g_cpu.A);
label_8FF2:;
    /* $8FF2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8FF4:;
    /* $8FF4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9011;
label_8FF6:;
    /* $8FF6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8FF8:;
    /* $8FF8: 8D */ maybe_trigger_vblank(4); nes_write(0x03FB, g_cpu.A);
label_8FFB:;
    /* $8FFB: CE */ maybe_trigger_vblank(6); { uint16_t a=0x04A9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8FFE:;
    /* $8FFE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9009;
label_9000:;
    /* $9000: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9006:;
    /* $9006: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x900E, 3); return;
label_9009:;
    /* $9009: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_900B:;
    /* $900B: 8D */ maybe_trigger_vblank(4); nes_write(0x04A9, g_cpu.A);
label_900E:;
    /* $900E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_9011:;
    /* $9011: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9013:;
    /* $9013: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_9015:;
    /* $9015: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_903E;
label_9017:;
    /* $9017: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FB); FLAG_NZ(g_cpu.A);
label_901A:;
    /* $901A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_901C:;
    /* $901C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_903E;
label_901E:;
    /* $901E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9020:;
    /* $9020: 8D */ maybe_trigger_vblank(4); nes_write(0x03FB, g_cpu.A);
label_9023:;
    /* $9023: EE */ maybe_trigger_vblank(6); { uint16_t a=0x04A9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9026:;
    /* $9026: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A9); FLAG_NZ(g_cpu.A);
label_9029:;
    /* $9029: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_902B:;
    /* $902B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9036;
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
label_903E:;
    /* $903E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A9); FLAG_NZ(g_cpu.A);
label_9041:;
    /* $9041: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9043:;
    /* $9043: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90BB;
label_9045:;
    /* $9045: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_9047:;
    /* $9047: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9051;
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
    /* $9055: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9075;
label_9057:;
    /* $9057: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_905A:;
    /* $905A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_905C:;
    /* $905C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9075;
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
    /* $906B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9072;
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
    /* $9079: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9094;
label_907B:;
    /* $907B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_907E:;
    /* $907E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9080:;
    /* $9080: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90BE;
label_9082:;
    /* $9082: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9084:;
    /* $9084: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_9087:;
    /* $9087: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_908A:;
    /* $908A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_908C:;
    /* $908C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9091;
label_908E:;
    /* $908E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0487; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9091:;
    /* $9091: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_9094:;
    /* $9094: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9096:;
    /* $9096: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9098:;
    /* $9098: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90A2;
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
    /* $90A7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90BE;
label_90A9:;
    /* $90A9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_90AB:;
    /* $90AB: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_90AE:;
    /* $90AE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_90B1:;
    /* $90B1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_90B3:;
    /* $90B3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_90BE;
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

void func_9513_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9513_b3");
#endif
label_9513:;
    /* $9513: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_9516:;
    /* $9516: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9518:;
    /* $9518: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9520;
label_951A:;
    /* $951A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x93FA, 3);
label_951D:;
    /* $951D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9523, 3); return;
label_9520:;
    /* $9520: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9412, 3);
label_9523:;
    /* $9523: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9501_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9501_b3");
#endif
label_9501:;
    /* $9501: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_9504:;
    /* $9504: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9506:;
    /* $9506: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_950E;
label_9508:;
    /* $9508: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_950E:;
    /* $950E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9510:;
    /* $9510: 8D */ maybe_trigger_vblank(4); nes_write(0x0492, g_cpu.A);
label_9513:;
    /* $9513: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0492); FLAG_NZ(g_cpu.A);
label_9516:;
    /* $9516: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9518:;
    /* $9518: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9520;
label_951A:;
    /* $951A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x93FA, 3);
label_951D:;
    /* $951D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9523, 3); return;
label_9520:;
    /* $9520: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9412, 3);
label_9523:;
    /* $9523: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_93FA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93FA_b3");
#endif
label_93FA:;
    /* $93FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_93FC:;
    /* $93FC: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_93FE:;
    /* $93FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9400:;
    /* $9400: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9402:;
    /* $9402: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9A; FLAG_NZ(g_cpu.A);
label_9404:;
    /* $9404: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9406:;
    /* $9406: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB8; FLAG_NZ(g_cpu.A);
label_9408:;
    /* $9408: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_940A:;
    /* $940A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_940C:;
    /* $940C: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_940E:;
    /* $940E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_9411:;
    /* $9411: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9412_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9412_b3");
#endif
label_9412:;
    /* $9412: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9414:;
    /* $9414: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_9416:;
    /* $9416: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9418:;
    /* $9418: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_941A:;
    /* $941A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9A; FLAG_NZ(g_cpu.A);
label_941C:;
    /* $941C: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_941E:;
    /* $941E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB8; FLAG_NZ(g_cpu.A);
label_9420:;
    /* $9420: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_9422:;
    /* $9422: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_9424:;
    /* $9424: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_9426:;
    /* $9426: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_9429:;
    /* $9429: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8154_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8154_b3");
#endif
label_8154:;
    /* $8154: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x982D, 3); return;
}

void func_8812_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8812_b3");
#endif
label_8812:;
    /* $8812: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8814:;
    /* $8814: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8816:;
    /* $8816: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBB; FLAG_NZ(g_cpu.A);
label_8818:;
    /* $8818: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_881A:;
    /* $881A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_881C:;
    /* $881C: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_881E:;
    /* $881E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_8820:;
    /* $8820: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8822:;
    /* $8822: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_8824:;
    /* $8824: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8826:;
    /* $8826: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8829:;
    /* $8829: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00C, 3);
label_882C:;
    /* $882C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_882E:;
    /* $882E: 8D */ maybe_trigger_vblank(4); nes_write(0x03A1, g_cpu.A);
label_8831:;
    /* $8831: 8D */ maybe_trigger_vblank(4); nes_write(0x03A9, g_cpu.A);
label_8834:;
    /* $8834: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8836:;
    /* $8836: 8D */ maybe_trigger_vblank(4); nes_write(0x03A5, g_cpu.A);
label_8839:;
    /* $8839: 8D */ maybe_trigger_vblank(4); nes_write(0x03AC, g_cpu.A);
label_883C:;
    /* $883C: 8D */ maybe_trigger_vblank(4); nes_write(0x03AD, g_cpu.A);
label_883F:;
    /* $883F: 8D */ maybe_trigger_vblank(4); nes_write(0x03B0, g_cpu.A);
label_8842:;
    /* $8842: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8844:;
    /* $8844: 8D */ maybe_trigger_vblank(4); nes_write(0x03A3, g_cpu.A);
label_8847:;
    /* $8847: 8D */ maybe_trigger_vblank(4); nes_write(0x03A7, g_cpu.A);
label_884A:;
    /* $884A: 8D */ maybe_trigger_vblank(4); nes_write(0x03AB, g_cpu.A);
label_884D:;
    /* $884D: 8D */ maybe_trigger_vblank(4); nes_write(0x03AF, g_cpu.A);
label_8850:;
    /* $8850: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_8853:;
    /* $8853: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_8855:;
    /* $8855: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8886;
label_8857:;
    /* $8857: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_885A:;
    /* $885A: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_885C:;
    /* $885C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_885E:;
    /* $885E: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_8860:;
    /* $8860: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8862:;
    /* $8862: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_8864:;
    /* $8864: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 3);
label_8867:;
    /* $8867: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_8869:;
    /* $8869: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_886A:;
    /* $886A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x66 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x66); g_cpu.A=r&0xFF; }
label_886C:;
    /* $886C: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_886F:;
    /* $886F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8870:;
    /* $8870: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_8872:;
    /* $8872: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_8875:;
    /* $8875: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_8877:;
    /* $8877: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8878:;
    /* $8878: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x66 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x66); g_cpu.A=r&0xFF; }
label_887A:;
    /* $887A: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_887D:;
    /* $887D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_887E:;
    /* $887E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_8880:;
    /* $8880: 8D */ maybe_trigger_vblank(4); nes_write(0x03AE, g_cpu.A);
label_8883:;
    /* $8883: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x889C, 3); return;
label_8886:;
    /* $8886: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8888:;
    /* $8888: 8D */ maybe_trigger_vblank(4); nes_write(0x03A2, g_cpu.A);
label_888B:;
    /* $888B: 8D */ maybe_trigger_vblank(4); nes_write(0x03A6, g_cpu.A);
label_888E:;
    /* $888E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_8891:;
    /* $8891: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8892:;
    /* $8892: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x66 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x66); g_cpu.A=r&0xFF; }
label_8894:;
    /* $8894: 8D */ maybe_trigger_vblank(4); nes_write(0x03AA, g_cpu.A);
label_8897:;
    /* $8897: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_8899:;
    /* $8899: 8D */ maybe_trigger_vblank(4); nes_write(0x03AE, g_cpu.A);
label_889C:;
    /* $889C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_889E:;
    /* $889E: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_88A0:;
    /* $88A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_88A2:;
    /* $88A2: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_88A4:;
    /* $88A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_88A6:;
    /* $88A6: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_88A8:;
    /* $88A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_88AA:;
    /* $88AA: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_88AC:;
    /* $88AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_88AE:;
    /* $88AE: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_88B0:;
    /* $88B0: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_88B3:;
    /* $88B3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B022_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B022_b3");
#endif
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
    /* $902B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9036;
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
    /* $91EE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9207;
label_91F0:;
    /* $91F0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_91F2:;
    /* $91F2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9204;
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
    /* $920B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9223;
label_920D:;
    /* $920D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_920F:;
    /* $920F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9211:;
    /* $9211: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9223;
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
    /* $9225: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_924B;
label_9227:;
    /* $9227: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F6); FLAG_NZ(g_cpu.A);
label_922A:;
    /* $922A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9232;
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
    /* $923B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_926D;
label_923D:;
    /* $923D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_923F:;
    /* $923F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9241:;
    /* $9241: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9256;
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
    /* $9254: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_926D;
label_9256:;
    /* $9256: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9258:;
    /* $9258: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9289;
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
    /* $9271: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9289;
label_9273:;
    /* $9273: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9275:;
    /* $9275: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9277:;
    /* $9277: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9289;
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

static void func_8181_b3_body(int _entry) {
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

static void func_8169_b3_body(int _entry) {
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

void func_B201_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B201_b3");
#endif
label_B201:;
    /* $B201: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_B203:;
    /* $B203: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B205:;
    /* $B205: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B207:;
    /* $B207: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B209:;
    /* $B209: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B20C:;
    /* $B20C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_8A58_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8A81;
    }
label_8A58:;
    /* $8A58: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_8A5A:;
    /* $8A5A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8A5B:;
    /* $8A5B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8A63;
label_8A5D:;
    /* $8A5D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x88E4, 3);
label_8A60:;
    /* $8A60: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A66, 3); return;
label_8A63:;
    /* $8A63: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8941, 3);
label_8A66:;
    /* $8A66: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8A68:;
    /* $8A68: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8A6F;
label_8A6A:;
    /* $8A6A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6C:;
    /* $8A6C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A81, 3); return;
label_8A6F:;
    /* $8A6F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8A71:;
    /* $8A71: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8A73:;
    /* $8A73: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8A7B;
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

void func_8A82_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A82_b3");
#endif
label_8A82:;
    /* $8A82: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8D89, 3);
label_8A85:;
    /* $8A85: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8DE5, 3);
label_8A88:;
    /* $8A88: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_8A8A:;
    /* $8A8A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8A8B:;
    /* $8A8B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8A93;
label_8A8D:;
    /* $8A8D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x88E4, 3);
label_8A90:;
    /* $8A90: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A96, 3); return;
label_8A93:;
    /* $8A93: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8941, 3);
label_8A96:;
    /* $8A96: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8A98:;
    /* $8A98: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_8A9A:;
    /* $8A9A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8AB1;
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
    /* $8AB3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8AC1;
label_8AB5:;
    /* $8AB5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8AB7:;
    /* $8AB7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8AB9:;
    /* $8AB9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8A9C;
    }
label_8AC1:;
    /* $8AC1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8AC3:;
    /* $8AC3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8ACA;
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

static void func_8199_b3_body(int _entry) {
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
    /* $81B5: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_81CE;
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
    /* $81D1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_81DB;
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

void func_B00A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B00A_b3");
#endif
label_B00A:;
    /* $B00A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B00C:;
    /* $B00C: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_B00E:;
    /* $B00E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC4; FLAG_NZ(g_cpu.A);
label_B010:;
    /* $B010: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_B012:;
    /* $B012: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_B014:;
    /* $B014: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_B016:;
    /* $B016: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_B018:;
    /* $B018: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_B01A:;
    /* $B01A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_B01C:;
    /* $B01C: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_B01E:;
    /* $B01E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_B021:;
    /* $B021: 60 */ maybe_trigger_vblank(6); 
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

void func_8ADA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8ADA_b3");
#endif
label_8ADA:;
    /* $8ADA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_8ADC:;
    /* $8ADC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8ADD:;
    /* $8ADD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8AE5;
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
    /* $8AEC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8AEE;
label_8AEE:;
    /* $8AEE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8AF0:;
    /* $8AF0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8AF7;
label_8AF2:;
    /* $8AF2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AF4:;
    /* $8AF4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8B2D, 3); return;
label_8AF7:;
    /* $8AF7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8AF9:;
    /* $8AF9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8AFB:;
    /* $8AFB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8B03;
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

void func_8B2E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B2E_b3");
#endif
label_8B2E:;
    /* $8B2E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x92B9, 3);
label_8B31:;
    /* $8B31: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9310, 3);
label_8B34:;
    /* $8B34: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x928A, 3);
label_8B37:;
    /* $8B37: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_8B39:;
    /* $8B39: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8B3A:;
    /* $8B3A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8B42;
label_8B3C:;
    /* $8B3C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x88E4, 3);
label_8B3F:;
    /* $8B3F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8B45, 3); return;
label_8B42:;
    /* $8B42: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8941, 3);
label_8B45:;
    /* $8B45: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8B47:;
    /* $8B47: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_8B49:;
    /* $8B49: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8B60;
label_8B4B:;
    /* $8B4B: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8B51:;
    /* $8B51: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_8B53:;
    /* $8B53: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_8B56:;
    /* $8B56: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_8B59:;
    /* $8B59: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8B5B:;
    /* $8B5B: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_8B5D:;
    /* $8B5D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BA9, 3); return;
label_8B60:;
    /* $8B60: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8B62:;
    /* $8B62: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8B70;
label_8B64:;
    /* $8B64: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8B66:;
    /* $8B66: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8B68:;
    /* $8B68: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B4B;
    }
label_8B6A:;
    /* $8B6A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8B6C:;
    /* $8B6C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8B6E:;
    /* $8B6E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B4B;
    }
label_8B70:;
    /* $8B70: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8B72:;
    /* $8B72: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8B79;
label_8B74:;
    /* $8B74: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B76:;
    /* $8B76: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BA9, 3); return;
label_8B79:;
    /* $8B79: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8B7B:;
    /* $8B7B: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_8B7D:;
    /* $8B7D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B7F:;
    /* $8B7F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B81:;
    /* $8B81: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B83:;
    /* $8B83: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B85:;
    /* $8B85: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BA9, 3); return;
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
    /* $81E0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_81F9;
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
    /* $81FC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8206;
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
    /* $8212: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8221;
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
    /* $827C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_828F;
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
    /* $82BA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82D8;
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
    /* $82EB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82F1;
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

void func_9547_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9547_b3");
#endif
label_9547:;
    /* $9547: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x98B5, 3);
label_954A:;
    /* $954A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9A1D, 3);
label_954D:;
    /* $954D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x988B, 3);
label_9550:;
    /* $9550: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9989, 3);
label_9553:;
    /* $9553: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9555:;
    /* $9555: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_9558:;
    /* $9558: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_955B:;
    /* $955B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04AB); FLAG_NZ(g_cpu.A);
label_955E:;
    /* $955E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_956C;
label_9560:;
    /* $9560: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9593, 3);
label_9563:;
    /* $9563: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9634, 3);
label_9566:;
    /* $9566: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x96E1, 3);
label_9569:;
    /* $9569: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x957F, 3); return;
label_956C:;
    /* $956C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_956E:;
    /* $956E: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_9571:;
    /* $9571: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9786, 3);
label_9574:;
    /* $9574: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC063, 3);
label_9577:;
    /* $9577: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9579:;
    /* $9579: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_957C:;
    /* $957C: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_957F:;
    /* $957F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048F); FLAG_NZ(g_cpu.A);
label_9582:;
    /* $9582: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9592;
label_9584:;
    /* $9584: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x982D, 3);
label_9587:;
    /* $9587: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC063, 3);
label_958A:;
    /* $958A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_958C:;
    /* $958C: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_958F:;
    /* $958F: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_9592:;
    /* $9592: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
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

static void func_8311_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8383;
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
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
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
    /* $834D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8353;
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

void func_8383_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8383_b3");
#endif
    func_8311_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
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

void func_AF76_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF76_b3");
#endif
label_AF76:;
    /* $AF76: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAF9C, 3);
label_AF79:;
    /* $AF79: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAFD1, 3);
label_AF7C:;
    /* $AF7C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAF85, 3);
label_AF7F:;
    /* $AF7F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AF81:;
    /* $AF81: 8D */ maybe_trigger_vblank(4); nes_write(0x0490, g_cpu.A);
label_AF84:;
    /* $AF84: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8F76_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F76_b3");
#endif
label_8F76:;
    /* $8F76: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA1); FLAG_NZ(g_cpu.A);
label_8F78:;
    /* $8F78: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8F7A:;
    /* $8F7A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8F85;
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
}

void func_8C70_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C70_b3");
#endif
label_8C70:;
    /* $8C70: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8C72:;
    /* $8C72: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8C79;
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

void func_8D29_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D29_b3");
#endif
label_8D29:;
    /* $8D29: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8D2B:;
    /* $8D2B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D2D:;
    /* $8D2D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D42;
label_8D2F:;
    /* $8D2F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D32:;
    /* $8D32: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D34:;
    /* $8D34: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D7C;
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
    /* $8D46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D5B;
label_8D48:;
    /* $8D48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D4B:;
    /* $8D4B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8D4D:;
    /* $8D4D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D7C;
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
    /* $8D5F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D69;
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
    /* $8D6E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D7C;
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

void func_8EAE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8EAE_b3");
#endif
label_8EAE:;
    /* $8EAE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A8); FLAG_NZ(g_cpu.A);
label_8EB1:;
    /* $8EB1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8EB3:;
    /* $8EB3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8EB8;
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
    /* $8EC2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8EC8;
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
    /* $8ED1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8EEC;
label_8ED3:;
    /* $8ED3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_8ED5:;
    /* $8ED5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8EE4;
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
    /* $8EF0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8F01;
label_8EF2:;
    /* $8EF2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_8EF5:;
    /* $8EF5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_8EF7:;
    /* $8EF7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8EFE;
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
    /* $8F06: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8F3A;
label_8F08:;
    /* $8F08: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_8F0A:;
    /* $8F0A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8F0F;
label_8F0C:;
    /* $8F0C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8FD6, 3); return;
label_8F0F:;
    /* $8F0F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_8F11:;
    /* $8F11: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8F1B;
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
    /* $8F1F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8F3F;
label_8F21:;
    /* $8F21: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8F24:;
    /* $8F24: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8F26:;
    /* $8F26: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8F3F;
label_8F28:;
    /* $8F28: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8F2A:;
    /* $8F2A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8F2C:;
    /* $8F2C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8F3F;
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
    /* $8E4D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8E54;
label_8E4F:;
    /* $8E4F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_8E51:;
    /* $8E51: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E5F, 3); return;
label_8E54:;
    /* $8E54: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8E56:;
    /* $8E56: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8E5D;
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

void func_8D89_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D89_b3");
#endif
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
    /* $8D9D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8DB4;
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
    /* $8DB6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8DCD;
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

void func_8DE5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DE5_b3");
#endif
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
    /* $8DFA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8E01;
label_8DFC:;
    /* $8DFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_8DFE:;
    /* $8DFE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E15, 3); return;
label_8E01:;
    /* $8E01: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8E03:;
    /* $8E03: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8E0A;
label_8E05:;
    /* $8E05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_8E07:;
    /* $8E07: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E15, 3); return;
label_8E0A:;
    /* $8E0A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8E0C:;
    /* $8E0C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8E13;
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
    /* $8E20: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8E37;
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

void func_9390_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9390_b3");
#endif
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
    /* $93AA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_93BC;
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
    /* $93C1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_93E5;
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

void func_903E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_903E_b3");
#endif
label_903E:;
    /* $903E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A9); FLAG_NZ(g_cpu.A);
label_9041:;
    /* $9041: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9043:;
    /* $9043: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90BB;
label_9045:;
    /* $9045: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_9047:;
    /* $9047: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9051;
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
    /* $9055: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9075;
label_9057:;
    /* $9057: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_905A:;
    /* $905A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_905C:;
    /* $905C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9075;
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
    /* $906B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9072;
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
    /* $9079: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9094;
label_907B:;
    /* $907B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_907E:;
    /* $907E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9080:;
    /* $9080: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90BE;
label_9082:;
    /* $9082: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9084:;
    /* $9084: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_9087:;
    /* $9087: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_908A:;
    /* $908A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_908C:;
    /* $908C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9091;
label_908E:;
    /* $908E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0487; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9091:;
    /* $9091: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
label_9094:;
    /* $9094: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_9096:;
    /* $9096: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9098:;
    /* $9098: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90A2;
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
    /* $90A7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90BE;
label_90A9:;
    /* $90A9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_90AB:;
    /* $90AB: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_90AE:;
    /* $90AE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_90B1:;
    /* $90B1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_90B3:;
    /* $90B3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_90BE;
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

void func_900E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_900E_b3");
#endif
label_900E:;
    /* $900E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x90BE, 3); return;
}

void func_90BE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90BE_b3");
#endif
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

void func_90CB_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90CB_b3");
#endif
label_90CB:;
    /* $90CB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04A9); FLAG_NZ(g_cpu.A);
label_90CE:;
    /* $90CE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_90D0:;
    /* $90D0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_90D5;
label_90D2:;
    /* $90D2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x91AA, 3); return;
label_90D5:;
    /* $90D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_90D7:;
    /* $90D7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90E1;
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
    /* $90E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9108;
label_90E7:;
    /* $90E7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_90EA:;
    /* $90EA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_90EC:;
    /* $90EC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9108;
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
    /* $90FF: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9150;
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
    /* $910C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9126;
label_910E:;
    /* $910E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_9111:;
    /* $9111: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9113:;
    /* $9113: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9150;
label_9115:;
    /* $9115: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA2); FLAG_NZ(g_cpu.A);
label_9117:;
    /* $9117: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9119:;
    /* $9119: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9150;
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
    /* $912A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9134;
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
    /* $9139: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9150;
label_913B:;
    /* $913B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_913D:;
    /* $913D: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_9140:;
    /* $9140: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
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
    /* $9146: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9150;
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
    /* $9152: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_915C;
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
    /* $9160: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_917F;
label_9162:;
    /* $9162: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FA); FLAG_NZ(g_cpu.A);
label_9165:;
    /* $9165: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9167:;
    /* $9167: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_91A7;
label_9169:;
    /* $9169: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_916B:;
    /* $916B: 8D */ maybe_trigger_vblank(4); nes_write(0x03FA, g_cpu.A);
label_916E:;
    /* $916E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_9170:;
    /* $9170: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9172:;
    /* $9172: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_91A7;
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
    /* $9183: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_918D;
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
    /* $9192: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_91A7;
label_9194:;
    /* $9194: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9196:;
    /* $9196: 8D */ maybe_trigger_vblank(4); nes_write(0x03FA, g_cpu.A);
label_9199:;
    /* $9199: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_919B:;
    /* $919B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_919D:;
    /* $919D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_91A7;
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

void func_9363_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9363_b3");
#endif
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
    /* $9378: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_937F;
label_937A:;
    /* $937A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_937C:;
    /* $937C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x938A, 3); return;
label_937F:;
    /* $937F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9381:;
    /* $9381: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9388;
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

void func_92B9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92B9_b3");
#endif
label_92B9:;
    /* $92B9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_92BB:;
    /* $92BB: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_92BD:;
    /* $92BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x63; FLAG_NZ(g_cpu.A);
label_92BF:;
    /* $92BF: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_92C1:;
    /* $92C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_92C3:;
    /* $92C3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_92C5:;
    /* $92C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_92C7:;
    /* $92C7: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_92C9:;
    /* $92C9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA2); FLAG_NZ(g_cpu.A);
label_92CB:;
    /* $92CB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_92CD:;
    /* $92CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_92D4;
label_92CF:;
    /* $92CF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_92D1:;
    /* $92D1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x92DF, 3); return;
label_92D4:;
    /* $92D4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_92D6:;
    /* $92D6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_92DD;
label_92D8:;
    /* $92D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_92DA:;
    /* $92DA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x92DF, 3); return;
label_92DD:;
    /* $92DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCD; FLAG_NZ(g_cpu.A);
label_92DF:;
    /* $92DF: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_92E1:;
    /* $92E1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_92E4:;
    /* $92E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_92E6:;
    /* $92E6: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_92E8:;
    /* $92E8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x63; FLAG_NZ(g_cpu.A);
label_92EA:;
    /* $92EA: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_92EC:;
    /* $92EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_92EE:;
    /* $92EE: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_92F0:;
    /* $92F0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_92F2:;
    /* $92F2: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_92F4:;
    /* $92F4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_92F6:;
    /* $92F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_92F8:;
    /* $92F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_92FF;
label_92FA:;
    /* $92FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_92FC:;
    /* $92FC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x930A, 3); return;
label_92FF:;
    /* $92FF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9301:;
    /* $9301: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9308;
label_9303:;
    /* $9303: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_9305:;
    /* $9305: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x930A, 3); return;
label_9308:;
    /* $9308: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCD; FLAG_NZ(g_cpu.A);
label_930A:;
    /* $930A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_930C:;
    /* $930C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_930F:;
    /* $930F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9310_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9310_b3");
#endif
label_9310:;
    /* $9310: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9312:;
    /* $9312: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_9314:;
    /* $9314: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_9316:;
    /* $9316: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9318:;
    /* $9318: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_931A:;
    /* $931A: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_931C:;
    /* $931C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x94; FLAG_NZ(g_cpu.A);
label_931E:;
    /* $931E: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_9320:;
    /* $9320: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_9323:;
    /* $9323: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9325:;
    /* $9325: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_932C;
label_9327:;
    /* $9327: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_9329:;
    /* $9329: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9340, 3); return;
label_932C:;
    /* $932C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_932E:;
    /* $932E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9335;
label_9330:;
    /* $9330: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_9332:;
    /* $9332: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9340, 3); return;
label_9335:;
    /* $9335: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9337:;
    /* $9337: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_933E;
label_9339:;
    /* $9339: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_933B:;
    /* $933B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9340, 3); return;
label_933E:;
    /* $933E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC8; FLAG_NZ(g_cpu.A);
label_9340:;
    /* $9340: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_9342:;
    /* $9342: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_9345:;
    /* $9345: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_9348:;
    /* $9348: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0488); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_934B:;
    /* $934B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9362;
label_934D:;
    /* $934D: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_9350:;
    /* $9350: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9356:;
    /* $9356: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8130 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8130_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_935C:;
    /* $935C: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9362:;
    /* $9362: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_928A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_928A_b3");
#endif
label_928A:;
    /* $928A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_928C:;
    /* $928C: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_928E:;
    /* $928E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x63; FLAG_NZ(g_cpu.A);
label_9290:;
    /* $9290: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9292:;
    /* $9292: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_9294:;
    /* $9294: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9296:;
    /* $9296: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x64; FLAG_NZ(g_cpu.A);
label_9298:;
    /* $9298: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_929A:;
    /* $929A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_929C:;
    /* $929C: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_929E:;
    /* $929E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_92A1:;
    /* $92A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_92A3:;
    /* $92A3: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_92A5:;
    /* $92A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x63; FLAG_NZ(g_cpu.A);
label_92A7:;
    /* $92A7: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_92A9:;
    /* $92A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_92AB:;
    /* $92AB: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_92AD:;
    /* $92AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_92AF:;
    /* $92AF: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_92B1:;
    /* $92B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_92B3:;
    /* $92B3: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_92B5:;
    /* $92B5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_92B8:;
    /* $92B8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_982D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_982D_b3");
#endif
label_982D:;
    /* $982D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4E; FLAG_NZ(g_cpu.A);
label_982F:;
    /* $982F: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_9831:;
    /* $9831: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAF; FLAG_NZ(g_cpu.A);
label_9833:;
    /* $9833: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_9835:;
    /* $9835: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9839, 3);
label_9838:;
    /* $9838: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_889C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_889C_b3");
#endif
label_889C:;
    /* $889C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_889E:;
    /* $889E: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_88A0:;
    /* $88A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_88A2:;
    /* $88A2: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_88A4:;
    /* $88A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_88A6:;
    /* $88A6: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_88A8:;
    /* $88A8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_88AA:;
    /* $88AA: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_88AC:;
    /* $88AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_88AE:;
    /* $88AE: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_88B0:;
    /* $88B0: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_88B3:;
    /* $88B3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B036_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B036_b3");
#endif
label_B036:;
    /* $B036: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC072, 3);
label_B039:;
    /* $B039: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_B03F:;
    /* $B03F: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8121 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8121_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_B045:;
    /* $B045: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB20D, 3);
label_B048:;
    /* $B048: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0491; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B04B:;
    /* $B04B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B04D:;
    /* $B04D: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_B04F:;
    /* $B04F: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=4 addr=$8115 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x04; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8115_b4();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_B055:;
    /* $B055: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B056_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B056_b3");
#endif
label_B056:;
    /* $B056: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB1); FLAG_NZ(g_cpu.A);
label_B058:;
    /* $B058: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B05F;
label_B05A:;
    /* $B05A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B05C:;
    /* $B05C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB069, 3); return;
label_B05F:;
    /* $B05F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB219, 3);
label_B062:;
    /* $B062: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0491; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B065:;
    /* $B065: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B067:;
    /* $B067: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_B069:;
    /* $B069: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B06A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B06A_b3");
#endif
label_B06A:;
    /* $B06A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB1); FLAG_NZ(g_cpu.A);
label_B06C:;
    /* $B06C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B073;
label_B06E:;
    /* $B06E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B070:;
    /* $B070: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB083, 3); return;
label_B073:;
    /* $B073: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB0C9, 3);
label_B076:;
    /* $B076: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8115 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8115_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_B07C:;
    /* $B07C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0491; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B07F:;
    /* $B07F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_B081:;
    /* $B081: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_B083:;
    /* $B083: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B084_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B084_b3");
#endif
label_B084:;
    /* $B084: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x88B4, 3);
label_B087:;
    /* $B087: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x88CC, 3);
label_B08A:;
    /* $B08A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB1); FLAG_NZ(g_cpu.A);
label_B08C:;
    /* $B08C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B093;
label_B08E:;
    /* $B08E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B090:;
    /* $B090: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB0C8, 3); return;
label_B093:;
    /* $B093: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B095:;
    /* $B095: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_B098:;
    /* $B098: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B09A:;
    /* $B09A: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_B09C:;
    /* $B09C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B09E:;
    /* $B09E: 8D */ maybe_trigger_vblank(4); nes_write(0x0496, g_cpu.A);
label_B0A1:;
    /* $B0A1: 8D */ maybe_trigger_vblank(4); nes_write(0x03E4, g_cpu.A);
label_B0A4:;
    /* $B0A4: 8D */ maybe_trigger_vblank(4); nes_write(0x03E7, g_cpu.A);
label_B0A7:;
    /* $B0A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0497, g_cpu.A);
label_B0AA:;
    /* $B0AA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_B0AD:;
    /* $B0AD: 8D */ maybe_trigger_vblank(4); nes_write(0x048A, g_cpu.A);
label_B0B0:;
    /* $B0B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_B0B3:;
    /* $B0B3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B0C0;
label_B0B5:;
    /* $B0B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_B0B7:;
    /* $B0B7: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_B0BA:;
    /* $B0BA: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_B0BD:;
    /* $B0BD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB0C8, 3); return;
label_B0C0:;
    /* $B0C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B0C2:;
    /* $B0C2: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_B0C5:;
    /* $B0C5: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_B0C8:;
    /* $B0C8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B10E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B10E_b3");
#endif
label_B10E:;
    /* $B10E: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B10F:;
    /* $B10F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B110:;
    /* $B110: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B111:;
    /* $B111: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B112:;
    /* $B112: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B114:;
    /* $B114: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_B117:;
    /* $B117: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B119:;
    /* $B119: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B11A:;
    /* $B11A: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_B11C:;
    /* $B11C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B11E:;
    /* $B11E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B11F:;
    /* $B11F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B122:;
    /* $B122: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B123:;
    /* $B123: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B125:;
    /* $B125: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B126:;
    /* $B126: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B129:;
    /* $B129: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B12A:;
    /* $B12A: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B12C:;
    /* $B12C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B12D:;
    /* $B12D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B130:;
    /* $B130: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B131:;
    /* $B131: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_B133:;
    /* $B133: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B135:;
    /* $B135: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B136:;
    /* $B136: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B139:;
    /* $B139: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B13A:;
    /* $B13A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xC4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B13C:;
    /* $B13C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B133;
    }
label_B13E:;
    /* $B13E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xC3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B140:;
    /* $B140: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B11C;
    }
label_B142:;
    /* $B142: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B144:;
    /* $B144: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B147:;
    /* $B147: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B14A:;
    /* $B14A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B14B:;
    /* $B14B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B14C:;
    /* $B14C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B14D:;
    /* $B14D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B14E:;
    /* $B14E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9223_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9223_b3");
#endif
label_9223:;
    /* $9223: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCD); FLAG_NZ(g_cpu.A);
label_9225:;
    /* $9225: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_924B;
label_9227:;
    /* $9227: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F6); FLAG_NZ(g_cpu.A);
label_922A:;
    /* $922A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9232;
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
    /* $923B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_926D;
label_923D:;
    /* $923D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_923F:;
    /* $923F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9241:;
    /* $9241: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9256;
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
    /* $9254: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_926D;
label_9256:;
    /* $9256: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9258:;
    /* $9258: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9289;
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
    /* $9271: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9289;
label_9273:;
    /* $9273: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9275:;
    /* $9275: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9277:;
    /* $9277: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9289;
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

static void func_88E4_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8920;
    }
label_88E4:;
    /* $88E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_88E6:;
    /* $88E6: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_88E8:;
    /* $88E8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_88EA:;
    /* $88EA: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_88EC:;
    /* $88EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x76; FLAG_NZ(g_cpu.A);
label_88EE:;
    /* $88EE: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_88F0:;
    /* $88F0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_88F2:;
    /* $88F2: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_88F4:;
    /* $88F4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_88F6:;
    /* $88F6: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_88F8:;
    /* $88F8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_88FA:;
    /* $88FA: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_88FC:;
    /* $88FC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_88FE:;
    /* $88FE: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8900:;
    /* $8900: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_8902:;
    /* $8902: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8904:;
    /* $8904: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8906:;
    /* $8906: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8908:;
    /* $8908: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_890A:;
    /* $890A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_890C:;
    /* $890C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8912;
label_890E:;
    /* $890E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_8910:;
    /* $8910: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8912:;
    /* $8912: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8915:;
    /* $8915: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_8917:;
    /* $8917: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8919:;
    /* $8919: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8940;
label_891B:;
    /* $891B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_891C:;
    /* $891C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_891E:;
    /* $891E: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_8920:;
    /* $8920: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_8922:;
    /* $8922: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_8924:;
    /* $8924: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_8926:;
    /* $8926: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8928:;
    /* $8928: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_892E;
label_892A:;
    /* $892A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_892C:;
    /* $892C: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_892E:;
    /* $892E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8930:;
    /* $8930: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8931:;
    /* $8931: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x18); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8933:;
    /* $8933: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8935:;
    /* $8935: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8939;
label_8937:;
    /* $8937: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8939:;
    /* $8939: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_893B:;
    /* $893B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8940;
label_893D:;
    /* $893D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_88F4;
label_8940:;
    /* $8940: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88E4_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88E4_b3");
#endif
    func_88E4_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8920_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8920_b3");
#endif
    func_88E4_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A66_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A66_b3");
#endif
label_8A66:;
    /* $8A66: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8A68:;
    /* $8A68: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8A6F;
label_8A6A:;
    /* $8A6A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A6C:;
    /* $8A6C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A81, 3); return;
label_8A6F:;
    /* $8A6F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8A71:;
    /* $8A71: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8A73:;
    /* $8A73: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8A7B;
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

void func_8941_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8941_b3");
#endif
label_8941:;
    /* $8941: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8943:;
    /* $8943: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_8945:;
    /* $8945: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8947:;
    /* $8947: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_8949:;
    /* $8949: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF6; FLAG_NZ(g_cpu.A);
label_894B:;
    /* $894B: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_894D:;
    /* $894D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_894F:;
    /* $894F: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_8951:;
    /* $8951: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8953:;
    /* $8953: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8955:;
    /* $8955: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_8957:;
    /* $8957: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8959:;
    /* $8959: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_895B:;
    /* $895B: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_895D:;
    /* $895D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_895F:;
    /* $895F: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8961:;
    /* $8961: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8963:;
    /* $8963: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8965:;
    /* $8965: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_8967:;
    /* $8967: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_8969:;
    /* $8969: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_896F;
label_896B:;
    /* $896B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_896D:;
    /* $896D: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_896F:;
    /* $896F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8972:;
    /* $8972: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_8974:;
    /* $8974: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8976:;
    /* $8976: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_899D;
label_8978:;
    /* $8978: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8979:;
    /* $8979: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_897B:;
    /* $897B: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_897D:;
    /* $897D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_897F:;
    /* $897F: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_8981:;
    /* $8981: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_8983:;
    /* $8983: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8985:;
    /* $8985: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_898B;
label_8987:;
    /* $8987: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_8989:;
    /* $8989: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_898B:;
    /* $898B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_898D:;
    /* $898D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_898E:;
    /* $898E: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x18); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8990:;
    /* $8990: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8992:;
    /* $8992: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8996;
label_8994:;
    /* $8994: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8996:;
    /* $8996: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8998:;
    /* $8998: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_899D;
label_899A:;
    /* $899A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8951;
label_899D:;
    /* $899D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
    /* $8A9A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8AB1;
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
    /* $8AB3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8AC1;
label_8AB5:;
    /* $8AB5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8AB7:;
    /* $8AB7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8AB9:;
    /* $8AB9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8A9C;
    }
label_8AC1:;
    /* $8AC1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8AC3:;
    /* $8AC3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8ACA;
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

void func_8AE8_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AE8_b3");
#endif
label_8AE8:;
    /* $8AE8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8AEA:;
    /* $8AEA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8AEC:;
    /* $8AEC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8AEE;
label_8AEE:;
    /* $8AEE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8AF0:;
    /* $8AF0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8AF7;
label_8AF2:;
    /* $8AF2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AF4:;
    /* $8AF4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8B2D, 3); return;
label_8AF7:;
    /* $8AF7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8AF9:;
    /* $8AF9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_8AFB:;
    /* $8AFB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8B03;
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

void func_8B2D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B2D_b3");
#endif
label_8B2D:;
    /* $8B2D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B45_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B45_b3");
#endif
label_8B45:;
    /* $8B45: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_8B47:;
    /* $8B47: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_8B49:;
    /* $8B49: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8B60;
label_8B4B:;
    /* $8B4B: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_8B51:;
    /* $8B51: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_8B53:;
    /* $8B53: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_8B56:;
    /* $8B56: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_8B59:;
    /* $8B59: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8B5B:;
    /* $8B5B: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_8B5D:;
    /* $8B5D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BA9, 3); return;
label_8B60:;
    /* $8B60: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_8B62:;
    /* $8B62: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8B70;
label_8B64:;
    /* $8B64: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8B66:;
    /* $8B66: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8B68:;
    /* $8B68: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B4B;
    }
label_8B6A:;
    /* $8B6A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8B6C:;
    /* $8B6C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8B6E:;
    /* $8B6E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B4B;
    }
label_8B70:;
    /* $8B70: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_8B72:;
    /* $8B72: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8B79;
label_8B74:;
    /* $8B74: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B76:;
    /* $8B76: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BA9, 3); return;
label_8B79:;
    /* $8B79: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8B7B:;
    /* $8B7B: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_8B7D:;
    /* $8B7D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B7F:;
    /* $8B7F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B81:;
    /* $8B81: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B83:;
    /* $8B83: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B85:;
    /* $8B85: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BA9, 3); return;
}

void func_8BA9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BA9_b3");
#endif
label_8BA9:;
    /* $8BA9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_98B5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98B5_b3");
#endif
label_98B5:;
    /* $98B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98B7:;
    /* $98B7: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_98BA:;
    /* $98BA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_98BC:;
    /* $98BC: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_98BF:;
    /* $98BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98C1:;
    /* $98C1: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_98C4:;
    /* $98C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
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

void func_9A1D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A1D_b3");
#endif
label_9A1D:;
    /* $9A1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_9A1F:;
    /* $9A1F: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9A21:;
    /* $9A21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9A; FLAG_NZ(g_cpu.A);
label_9A23:;
    /* $9A23: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9A25:;
    /* $9A25: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9A35, 3);
label_9A28:;
    /* $9A28: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_988B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_988B_b3");
#endif
label_988B:;
    /* $988B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_988D:;
    /* $988D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_988E:;
    /* $988E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_9891:;
    /* $9891: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_9893:;
    /* $9893: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9896:;
    /* $9896: 8C */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.Y);
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
    maybe_trigger_vblank(2);
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

static void func_9989_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_999B;
    }
label_9989:;
    /* $9989: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF6; FLAG_NZ(g_cpu.A);
label_998B:;
    /* $998B: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_998D:;
    /* $998D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9D; FLAG_NZ(g_cpu.A);
label_998F:;
    /* $998F: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_9991:;
    /* $9991: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_9994:;
    /* $9994: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9996:;
    /* $9996: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9999:;
    /* $9999: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
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
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
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

void func_9989_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9989_b3");
#endif
    func_9989_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_999B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_999B_b3");
#endif
    func_9989_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9593_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9593_b3");
#endif
label_9593:;
    /* $9593: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D0); FLAG_NZ(g_cpu.A);
label_9596:;
    /* $9596: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9597:;
    /* $9597: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x26 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x26); g_cpu.A=r&0xFF; }
label_9599:;
    /* $9599: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_959B:;
    /* $959B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_959D:;
    /* $959D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_95A3;
label_959F:;
    /* $959F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_95A1:;
    /* $95A1: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_95A3:;
    /* $95A3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D1); FLAG_NZ(g_cpu.A);
label_95A6:;
    /* $95A6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_95A7:;
    /* $95A7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x26 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x26); g_cpu.A=r&0xFF; }
label_95A9:;
    /* $95A9: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_95AB:;
    /* $95AB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_95AD:;
    /* $95AD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_95B3;
label_95AF:;
    /* $95AF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_95B1:;
    /* $95B1: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_95B3:;
    /* $95B3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D2); FLAG_NZ(g_cpu.A);
label_95B6:;
    /* $95B6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_95B7:;
    /* $95B7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x26 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x26); g_cpu.A=r&0xFF; }
label_95B9:;
    /* $95B9: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_95BB:;
    /* $95BB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_95BD:;
    /* $95BD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_95C3;
label_95BF:;
    /* $95BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_95C1:;
    /* $95C1: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_95C3:;
    /* $95C3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D3); FLAG_NZ(g_cpu.A);
label_95C6:;
    /* $95C6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_95C7:;
    /* $95C7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x26 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x26); g_cpu.A=r&0xFF; }
label_95C9:;
    /* $95C9: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_95CB:;
    /* $95CB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_95CD:;
    /* $95CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_95D3;
label_95CF:;
    /* $95CF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_95D1:;
    /* $95D1: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_95D3:;
    /* $95D3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D4); FLAG_NZ(g_cpu.A);
label_95D6:;
    /* $95D6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_95D7:;
    /* $95D7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x26 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x26); g_cpu.A=r&0xFF; }
label_95D9:;
    /* $95D9: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_95DB:;
    /* $95DB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_95DD:;
    /* $95DD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_95E3;
label_95DF:;
    /* $95DF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_95E1:;
    /* $95E1: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_95E3:;
    /* $95E3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D5); FLAG_NZ(g_cpu.A);
label_95E6:;
    /* $95E6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_95E7:;
    /* $95E7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x26 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x26); g_cpu.A=r&0xFF; }
label_95E9:;
    /* $95E9: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_95EB:;
    /* $95EB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_95ED:;
    /* $95ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_95F3;
label_95EF:;
    /* $95EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_95F1:;
    /* $95F1: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_95F3:;
    /* $95F3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D6); FLAG_NZ(g_cpu.A);
label_95F6:;
    /* $95F6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_95F7:;
    /* $95F7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x26 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x26); g_cpu.A=r&0xFF; }
label_95F9:;
    /* $95F9: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_95FB:;
    /* $95FB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_95FD:;
    /* $95FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9603;
label_95FF:;
    /* $95FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_9601:;
    /* $9601: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_9603:;
    /* $9603: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_9606:;
    /* $9606: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_9608:;
    /* $9608: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_960B:;
    /* $960B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x93; FLAG_NZ(g_cpu.A);
label_960D:;
    /* $960D: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9610:;
    /* $9610: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_9612:;
    /* $9612: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_9615:;
    /* $9615: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_9617:;
    /* $9617: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_961A:;
    /* $961A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x15); FLAG_NZ(g_cpu.A);
label_961C:;
    /* $961C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_961F:;
    /* $961F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_9621:;
    /* $9621: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_9624:;
    /* $9624: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_9626:;
    /* $9626: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_9629:;
    /* $9629: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x18); FLAG_NZ(g_cpu.A);
label_962B:;
    /* $962B: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_962E:;
    /* $962E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x19); FLAG_NZ(g_cpu.A);
label_9630:;
    /* $9630: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_9633:;
    /* $9633: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_9634_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_96BD;
    }
label_9634:;
    /* $9634: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040F); FLAG_NZ(g_cpu.A);
label_9637:;
    /* $9637: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_963F;
label_9639:;
    /* $9639: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x96BE, 3);
label_963C:;
    /* $963C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x96BD, 3); return;
label_963F:;
    /* $963F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040F); FLAG_NZ(g_cpu.A);
label_9642:;
    /* $9642: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_9644:;
    /* $9644: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0410); FLAG_NZ(g_cpu.A);
label_9647:;
    /* $9647: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9649:;
    /* $9649: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_964B:;
    /* $964B: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_964D:;
    /* $964D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_964F:;
    /* $964F: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_9651:;
    /* $9651: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9653:;
    /* $9653: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_9655:;
    /* $9655: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 3);
label_9658:;
    /* $9658: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_965A:;
    /* $965A: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_965C:;
    /* $965C: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_965E:;
    /* $965E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_9660:;
    /* $9660: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9667;
label_9662:;
    /* $9662: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9663:;
    /* $9663: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9665:;
    /* $9665: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_9667:;
    /* $9667: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_9669:;
    /* $9669: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9670;
label_966B:;
    /* $966B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_966C:;
    /* $966C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_966E:;
    /* $966E: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_9670:;
    /* $9670: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x15); FLAG_NZ(g_cpu.A);
label_9672:;
    /* $9672: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_9674:;
    /* $9674: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9676:;
    /* $9676: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_9678:;
    /* $9678: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_967A:;
    /* $967A: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_967C:;
    /* $967C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 3);
label_967F:;
    /* $967F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_9681:;
    /* $9681: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9683:;
    /* $9683: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_9685:;
    /* $9685: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_9687:;
    /* $9687: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_968E;
label_9689:;
    /* $9689: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_968A:;
    /* $968A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_968C:;
    /* $968C: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_968E:;
    /* $968E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_9690:;
    /* $9690: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9697;
label_9692:;
    /* $9692: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9693:;
    /* $9693: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9695:;
    /* $9695: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_9697:;
    /* $9697: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_969A:;
    /* $969A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_969C:;
    /* $969C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_969F:;
    /* $969F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_96A1:;
    /* $96A1: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_96A4:;
    /* $96A4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_96A6:;
    /* $96A6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_96A9:;
    /* $96A9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_96AB:;
    /* $96AB: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_96AE:;
    /* $96AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDF; FLAG_NZ(g_cpu.A);
label_96B0:;
    /* $96B0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_96B3:;
    /* $96B3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x15); FLAG_NZ(g_cpu.A);
label_96B5:;
    /* $96B5: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_96B8:;
    /* $96B8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_96BA:;
    /* $96BA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_96BD:;
    /* $96BD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9634_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9634_b3");
#endif
    func_9634_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_96BD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_96BD_b3");
#endif
    func_9634_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_96E1_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9785;
    }
label_96E1:;
    /* $96E1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x04AC); FLAG_NZ(g_cpu.A);
label_96E4:;
    /* $96E4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_970F;
label_96E6:;
    /* $96E6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_96E8:;
    /* $96E8: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_96EA:;
    /* $96EA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC6; FLAG_NZ(g_cpu.A);
label_96EC:;
    /* $96EC: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_96EE:;
    /* $96EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_96F0:;
    /* $96F0: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_96F2:;
    /* $96F2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_96F4:;
    /* $96F4: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_96F6:;
    /* $96F6: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_96F9:;
    /* $96F9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_96FB:;
    /* $96FB: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_96FD:;
    /* $96FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD5; FLAG_NZ(g_cpu.A);
label_96FF:;
    /* $96FF: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_9701:;
    /* $9701: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9703:;
    /* $9703: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9705:;
    /* $9705: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9707:;
    /* $9707: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_9709:;
    /* $9709: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x97F9, 3);
label_970C:;
    /* $970C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9785, 3); return;
label_970F:;
    /* $970F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_9712:;
    /* $9712: 85 */ maybe_trigger_vblank(3); nes_write(0x9A, g_cpu.A);
label_9714:;
    /* $9714: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9716:;
    /* $9716: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_9718:;
    /* $9718: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_971A:;
    /* $971A: 85 */ maybe_trigger_vblank(3); nes_write(0x98, g_cpu.A);
label_971C:;
    /* $971C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC027, 3);
label_971F:;
    /* $971F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE9; FLAG_NZ(g_cpu.A);
label_9721:;
    /* $9721: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_9723:;
    /* $9723: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_9725:;
    /* $9725: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_9727:;
    /* $9727: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_972E;
label_9729:;
    /* $9729: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_972A:;
    /* $972A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC6); g_cpu.A=r&0xFF; }
label_972C:;
    /* $972C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_972E:;
    /* $972E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_9730:;
    /* $9730: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9737;
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
    /* $974F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9756;
label_9751:;
    /* $9751: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9752:;
    /* $9752: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC6); g_cpu.A=r&0xFF; }
label_9754:;
    /* $9754: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9756:;
    /* $9756: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_9758:;
    /* $9758: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_975F;
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

void func_96E1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_96E1_b3");
#endif
    func_96E1_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9785_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9785_b3");
#endif
    func_96E1_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_957F_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_957F_b3");
#endif
label_957F:;
    /* $957F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x048F); FLAG_NZ(g_cpu.A);
label_9582:;
    /* $9582: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9592;
label_9584:;
    /* $9584: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x982D, 3);
label_9587:;
    /* $9587: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC063, 3);
label_958A:;
    /* $958A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_958C:;
    /* $958C: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_958F:;
    /* $958F: 8D */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.A);
label_9592:;
    /* $9592: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_9786_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9796;
        case 2: goto label_97A5;
    }
label_9786:;
    /* $9786: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_9788:;
    /* $9788: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_978A:;
    /* $978A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_978C:;
    /* $978C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_978E:;
    /* $978E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9790:;
    /* $9790: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9792:;
    /* $9792: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9794:;
    /* $9794: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
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

void func_9786_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9786_b3");
#endif
    func_9786_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9796_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9796_b3");
#endif
    func_9786_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_97A5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_97A5_b3");
#endif
    func_9786_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_9901_b3_body(int _entry) {
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
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
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

void func_AF9C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF9C_b3");
#endif
label_AF9C:;
    /* $AF9C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0490); FLAG_NZ(g_cpu.A);
label_AF9F:;
    /* $AF9F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_AFA1:;
    /* $AFA1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AFBB;
label_AFA3:;
    /* $AFA3: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AFA5:;
    /* $AFA5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AFA7:;
    /* $AFA7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_AFA9:;
    /* $AFA9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AFAB:;
    /* $AFAB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AFD0;
label_AFAD:;
    /* $AFAD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AFAF:;
    /* $AFAF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFB0:;
    /* $AFB0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_AFB8;
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
    /* $AFBF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AFC4;
label_AFC1:;
    /* $AFC1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFD0, 3); return;
label_AFC4:;
    /* $AFC4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFC5:;
    /* $AFC5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_AFCD;
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

void func_AFD1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFD1_b3");
#endif
label_AFD1:;
    /* $AFD1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0490); FLAG_NZ(g_cpu.A);
label_AFD4:;
    /* $AFD4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_AFD6:;
    /* $AFD6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AFF2;
label_AFD8:;
    /* $AFD8: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AFDA:;
    /* $AFDA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AFDC:;
    /* $AFDC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_AFDE:;
    /* $AFDE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AFE0:;
    /* $AFE0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B009;
label_AFE2:;
    /* $AFE2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AFE4:;
    /* $AFE4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFE5:;
    /* $AFE5: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFE6:;
    /* $AFE6: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFE7:;
    /* $AFE7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_AFEF;
label_AFE9:;
    /* $AFE9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB195, 3);
label_AFEC:;
    /* $AFEC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFF2, 3); return;
label_AFEF:;
    /* $AFEF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1AD, 3);
label_AFF2:;
    /* $AFF2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AFF4:;
    /* $AFF4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_AFF6:;
    /* $AFF6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AFFB;
label_AFF8:;
    /* $AFF8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB009, 3); return;
label_AFFB:;
    /* $AFFB: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFFC:;
    /* $AFFC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFFD:;
    /* $AFFD: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFFE:;
    /* $AFFE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_B006;
label_B000:;
    /* $B000: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB189, 3);
label_B003:;
    /* $B003: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB009, 3); return;
label_B006:;
    /* $B006: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1A1, 3);
label_B009:;
    /* $B009: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AF85_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF85_b3");
#endif
label_AF85:;
    /* $AF85: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AF87:;
    /* $AF87: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_AF89:;
    /* $AF89: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AF98;
label_AF8B:;
    /* $AF8B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0490); FLAG_NZ(g_cpu.A);
label_AF8E:;
    /* $AF8E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_AF90:;
    /* $AF90: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AF9B;
label_AF92:;
    /* $AF92: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB16C, 3);
label_AF95:;
    /* $AF95: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAF9B, 3); return;
label_AF98:;
    /* $AF98: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB14F, 3);
label_AF9B:;
    /* $AF9B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_8F47_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8FD6;
    }
label_8F47:;
    /* $8F47: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8F49:;
    /* $8F49: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8F8C;
label_8F4B:;
    /* $8F4B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8F4D:;
    /* $8F4D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8F4F:;
    /* $8F4F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8F66;
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
    /* $8F5D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8FD6;
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
    /* $8F6D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8F76;
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
    /* $8F7A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8F85;
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
    /* $8F8E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8FD6;
label_8F90:;
    /* $8F90: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8F92:;
    /* $8F92: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8F94:;
    /* $8F94: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8FAE;
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
    /* $8FA4: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8FD6;
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
    /* $8FB7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8FC1;
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
    /* $8FC6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8FD1;
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

void func_8E15_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8E15_b3");
#endif
label_8E15:;
    /* $8E15: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8E17:;
    /* $8E17: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8E1A:;
    /* $8E1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8E1D:;
    /* $8E1D: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0488); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E20:;
    /* $8E20: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8E37;
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

void func_93F1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93F1_b3");
#endif
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

static void func_91AA_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9289;
        case 2: goto label_91EE;
    }
label_91AA:;
    /* $91AA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_91AC:;
    /* $91AC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_91B1;
label_91AE:;
    /* $91AE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
label_91B1:;
    /* $91B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCC); FLAG_NZ(g_cpu.A);
label_91B3:;
    /* $91B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_91DF;
label_91B5:;
    /* $91B5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F5); FLAG_NZ(g_cpu.A);
label_91B8:;
    /* $91B8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_91C0;
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
    /* $91C9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_920D;
label_91CB:;
    /* $91CB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_91CD:;
    /* $91CD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_91CF:;
    /* $91CF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_920D;
label_91D1:;
    /* $91D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_91D3:;
    /* $91D3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_91D5:;
    /* $91D5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_91F0;
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
    /* $91E8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_920D;
label_91EA:;
    /* $91EA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_91EC:;
    /* $91EC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_91EE:;
    /* $91EE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9207;
label_91F0:;
    /* $91F0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_91F2:;
    /* $91F2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9204;
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
    /* $920B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9223;
label_920D:;
    /* $920D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_920F:;
    /* $920F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9211:;
    /* $9211: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9223;
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
    /* $9225: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_924B;
label_9227:;
    /* $9227: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F6); FLAG_NZ(g_cpu.A);
label_922A:;
    /* $922A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9232;
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
    /* $923B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_926D;
label_923D:;
    /* $923D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_923F:;
    /* $923F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9241:;
    /* $9241: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9256;
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
    /* $9254: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_926D;
label_9256:;
    /* $9256: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9258:;
    /* $9258: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9289;
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
    /* $9271: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9289;
label_9273:;
    /* $9273: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_9275:;
    /* $9275: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x14; g_cpu.C=(g_cpu.A>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9277:;
    /* $9277: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9289;
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

void func_9150_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9150_b3");
#endif
label_9150:;
    /* $9150: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCD); FLAG_NZ(g_cpu.A);
label_9152:;
    /* $9152: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_915C;
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
    /* $9160: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_917F;
label_9162:;
    /* $9162: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FA); FLAG_NZ(g_cpu.A);
label_9165:;
    /* $9165: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9167:;
    /* $9167: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_91A7;
label_9169:;
    /* $9169: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_916B:;
    /* $916B: 8D */ maybe_trigger_vblank(4); nes_write(0x03FA, g_cpu.A);
label_916E:;
    /* $916E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_9170:;
    /* $9170: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9172:;
    /* $9172: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_91A7;
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
    /* $9183: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_918D;
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
    /* $9192: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_91A7;
label_9194:;
    /* $9194: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_9196:;
    /* $9196: 8D */ maybe_trigger_vblank(4); nes_write(0x03FA, g_cpu.A);
label_9199:;
    /* $9199: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_919B:;
    /* $919B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_919D:;
    /* $919D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_91A7;
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

void func_91A7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91A7_b3");
#endif
label_91A7:;
    /* $91A7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9289, 3); return;
}

void func_938A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_938A_b3");
#endif
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

void func_92DF_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92DF_b3");
#endif
label_92DF:;
    /* $92DF: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_92E1:;
    /* $92E1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_92E4:;
    /* $92E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_92E6:;
    /* $92E6: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_92E8:;
    /* $92E8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x63; FLAG_NZ(g_cpu.A);
label_92EA:;
    /* $92EA: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_92EC:;
    /* $92EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_92EE:;
    /* $92EE: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_92F0:;
    /* $92F0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_92F2:;
    /* $92F2: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_92F4:;
    /* $92F4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_92F6:;
    /* $92F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_92F8:;
    /* $92F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_92FF;
label_92FA:;
    /* $92FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_92FC:;
    /* $92FC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x930A, 3); return;
label_92FF:;
    /* $92FF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9301:;
    /* $9301: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9308;
label_9303:;
    /* $9303: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_9305:;
    /* $9305: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x930A, 3); return;
label_9308:;
    /* $9308: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCD; FLAG_NZ(g_cpu.A);
label_930A:;
    /* $930A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_930C:;
    /* $930C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_930F:;
    /* $930F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_930A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_930A_b3");
#endif
label_930A:;
    /* $930A: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_930C:;
    /* $930C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_930F:;
    /* $930F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9340_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9340_b3");
#endif
label_9340:;
    /* $9340: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_9342:;
    /* $9342: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_9345:;
    /* $9345: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_9348:;
    /* $9348: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0488); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_934B:;
    /* $934B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9362;
label_934D:;
    /* $934D: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_9350:;
    /* $9350: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9356:;
    /* $9356: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8130 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8130_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_935C:;
    /* $935C: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$81DB */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_81DB_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_9362:;
    /* $9362: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9839_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9839_b3");
#endif
label_9839:;
    /* $9839: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_983C:;
    /* $983C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_983E:;
    /* $983E: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9841:;
    /* $9841: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9842:;
    /* $9842: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9844:;
    /* $9844: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9847:;
    /* $9847: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9848:;
    /* $9848: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_984A:;
    /* $984A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_984D:;
    /* $984D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_984E:;
    /* $984E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9850:;
    /* $9850: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9852:;
    /* $9852: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9855:;
    /* $9855: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9856:;
    /* $9856: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9857:;
    /* $9857: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x14; g_cpu.C=(g_cpu.Y>=0x14)?1:0; FLAG_NZ(r&0xFF); }
label_9859:;
    /* $9859: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9850;
    }
label_985B:;
    /* $985B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_985D:;
    /* $985D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9860:;
    /* $9860: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9861:;
    /* $9861: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_9863:;
    /* $9863: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9866:;
    /* $9866: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9867:;
    /* $9867: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_9869:;
    /* $9869: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_986C:;
    /* $986C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_986D:;
    /* $986D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_986F:;
    /* $986F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9872:;
    /* $9872: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9873:;
    /* $9873: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9874:;
    /* $9874: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x28; g_cpu.C=(g_cpu.Y>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_9876:;
    /* $9876: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_986D;
    }
label_9878:;
    /* $9878: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_987A:;
    /* $987A: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_987D:;
    /* $987D: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_9880:;
    /* $9880: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B20D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B20D_b3");
#endif
label_B20D:;
    /* $B20D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_B20F:;
    /* $B20F: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B211:;
    /* $B211: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_B213:;
    /* $B213: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B215:;
    /* $B215: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B218:;
    /* $B218: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B219_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B219_b3");
#endif
label_B219:;
    /* $B219: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x91; FLAG_NZ(g_cpu.A);
label_B21B:;
    /* $B21B: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B21D:;
    /* $B21D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_B21F:;
    /* $B21F: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B221:;
    /* $B221: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B224:;
    /* $B224: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B0C9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0C9_b3");
#endif
label_B0C9:;
    /* $B0C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B0CB:;
    /* $B0CB: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_B0CD:;
    /* $B0CD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_B0CF:;
    /* $B0CF: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_B0D1:;
    /* $B0D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B0D3:;
    /* $B0D3: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B0D5:;
    /* $B0D5: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_B0D8:;
    /* $B0D8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_B0DA:;
    /* $B0DA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0DD:;
    /* $B0DD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0DE:;
    /* $B0DE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_B0E0:;
    /* $B0E0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0E3:;
    /* $B0E3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0E4:;
    /* $B0E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B0E6:;
    /* $B0E6: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0E9:;
    /* $B0E9: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_B0EB:;
    /* $B0EB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0EC:;
    /* $B0EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B0EE:;
    /* $B0EE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0F1:;
    /* $B0F1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0F2:;
    /* $B0F2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F4:;
    /* $B0F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B0EE;
    }
label_B0F6:;
    /* $B0F6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_B0F8:;
    /* $B0F8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B0F9:;
    /* $B0F9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_B0FB:;
    /* $B0FB: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_B0FD:;
    /* $B0FD: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_B101;
label_B0FF:;
    /* $B0FF: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B101:;
    /* $B101: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B103:;
    /* $B103: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B0D8;
    }
label_B105:;
    /* $B105: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B107:;
    /* $B107: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B10A:;
    /* $B10A: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B10D:;
    /* $B10D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88B4_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88B4_b3");
#endif
label_88B4:;
    /* $88B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_88B6:;
    /* $88B6: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_88B8:;
    /* $88B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE4; FLAG_NZ(g_cpu.A);
label_88BA:;
    /* $88BA: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_88BC:;
    /* $88BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_88BE:;
    /* $88BE: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_88C0:;
    /* $88C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_88C2:;
    /* $88C2: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_88C4:;
    /* $88C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_88C6:;
    /* $88C6: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_88C8:;
    /* $88C8: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_88CB:;
    /* $88CB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A8B4_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8B4_b3");
#endif
label_A8B4:;
    /* $A8B4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B5:;
    /* $A8B5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B6:;
    /* $A8B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B7:;
    /* $A8B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B8:;
    /* $A8B8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B9:;
    /* $A8B9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8BA:;
    /* $A8BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x086D), 3); return; }
label_A8BC:;
    /* $A8BC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8BE:;
    /* $A8BE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C0:;
    /* $A8C0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C2:;
    /* $A8C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C4:;
    /* $A8C4: 99 */ maybe_trigger_vblank(5); nes_write((0x0000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8C7:;
    /* $A8C7: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A8C8:;
    /* $A8C8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CA:;
    /* $A8CA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CC:;
    /* $A8CC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CE:;
    /* $A8CE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D0:;
    /* $A8D0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D2:;
    /* $A8D2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D3:;
    /* $A8D3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D4:;
    /* $A8D4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D5:;
    /* $A8D5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D6:;
    /* $A8D6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D7:;
    /* $A8D7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D8:;
    /* $A8D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D9:;
    /* $A8D9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8DA:;
    /* $A8DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x088D), 3); return; }
label_A8DC:;
    /* $A8DC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8DE:;
    /* $A8DE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E0:;
    /* $A8E0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E2:;
    /* $A8E2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E4:;
    /* $A8E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A8E6:;
    /* $A8E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E6); return;
}

void func_88CC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88CC_b3");
#endif
label_88CC:;
    /* $88CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_88CE:;
    /* $88CE: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_88D0:;
    /* $88D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_88D2:;
    /* $88D2: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_88D4:;
    /* $88D4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAB; FLAG_NZ(g_cpu.A);
label_88D6:;
    /* $88D6: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_88D8:;
    /* $88D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_88DA:;
    /* $88DA: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_88DC:;
    /* $88DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_88DE:;
    /* $88DE: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_88E0:;
    /* $88E0: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_88E3:;
    /* $88E3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A8CC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8CC_b3");
#endif
label_A8CC:;
    /* $A8CC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CE:;
    /* $A8CE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D0:;
    /* $A8D0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D2:;
    /* $A8D2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D3:;
    /* $A8D3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D4:;
    /* $A8D4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D5:;
    /* $A8D5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D6:;
    /* $A8D6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D7:;
    /* $A8D7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D8:;
    /* $A8D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D9:;
    /* $A8D9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8DA:;
    /* $A8DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x088D), 3); return; }
label_A8DC:;
    /* $A8DC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8DE:;
    /* $A8DE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E0:;
    /* $A8E0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E2:;
    /* $A8E2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E4:;
    /* $A8E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A8E6:;
    /* $A8E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E6); return;
}

void func_88F4_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88F4_b3");
#endif
label_88F4:;
    /* $88F4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_88F6:;
    /* $88F6: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_88F8:;
    /* $88F8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_88FA:;
    /* $88FA: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_88FC:;
    /* $88FC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_88FE:;
    /* $88FE: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_8900:;
    /* $8900: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_8902:;
    /* $8902: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8904:;
    /* $8904: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8906:;
    /* $8906: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8908:;
    /* $8908: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_890A:;
    /* $890A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_890C:;
    /* $890C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8912;
label_890E:;
    /* $890E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_8910:;
    /* $8910: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8912:;
    /* $8912: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8915:;
    /* $8915: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_8917:;
    /* $8917: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8919:;
    /* $8919: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8940;
label_891B:;
    /* $891B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_891C:;
    /* $891C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_891E:;
    /* $891E: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_8920:;
    /* $8920: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_8922:;
    /* $8922: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_8924:;
    /* $8924: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_8926:;
    /* $8926: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8928:;
    /* $8928: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_892E;
label_892A:;
    /* $892A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_892C:;
    /* $892C: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_892E:;
    /* $892E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8930:;
    /* $8930: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8931:;
    /* $8931: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x18); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8933:;
    /* $8933: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8935:;
    /* $8935: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8939;
label_8937:;
    /* $8937: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8939:;
    /* $8939: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_893B:;
    /* $893B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8940;
label_893D:;
    /* $893D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_88F4;
label_8940:;
    /* $8940: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8941:; return;
label_8943:; return;
label_8945:; return;
label_8947:; return;
label_8949:; return;
label_894B:; return;
label_894D:; return;
label_894F:; return;
label_8951:; return;
label_8953:; return;
label_8955:; return;
label_8957:; return;
label_8959:; return;
label_895B:; return;
label_895D:; return;
label_895F:; return;
label_8961:; return;
label_8963:; return;
label_8965:; return;
label_8967:; return;
label_8969:; return;
label_896B:; return;
label_896D:; return;
label_896F:; return;
label_8972:; return;
label_8974:; return;
label_8976:; return;
label_8978:; return;
label_8979:; return;
label_897B:; return;
label_897D:; return;
label_897F:; return;
label_8981:; return;
label_8983:; return;
label_8985:; return;
label_8987:; return;
label_8989:; return;
label_898B:; return;
label_898D:; return;
label_898E:; return;
label_8990:; return;
label_8992:; return;
label_8994:; return;
label_8996:; return;
label_8998:; return;
label_899A:; return;
label_899D:; return;
label_899E:; return;
label_89A0:; return;
label_89A2:; return;
label_89A4:; return;
label_89A6:; return;
label_89A8:; return;
label_89AA:; return;
label_89AC:; return;
label_89AE:; return;
label_89B0:; return;
label_89B2:; return;
label_89B4:; return;
label_89B6:; return;
label_89B8:; return;
label_89BA:; return;
label_89BC:; return;
label_89BE:; return;
label_89C0:; return;
label_89C2:; return;
label_89C4:; return;
label_89C6:; return;
label_89C8:; return;
label_89CA:; return;
label_89CC:; return;
label_89CF:; return;
label_89D1:; return;
label_89D3:; return;
label_89D5:; return;
label_89D6:; return;
label_89D8:; return;
label_89DA:; return;
label_89DC:; return;
label_89DE:; return;
label_89E0:; return;
label_89E2:; return;
label_89E4:; return;
label_89E6:; return;
label_89E8:; return;
label_89EA:; return;
label_89EB:; return;
label_89ED:; return;
label_89EF:; return;
label_89F1:; return;
label_89F3:; return;
label_89F5:; return;
label_89F7:; return;
label_89FA:; return;
label_89FB:; return;
label_89FD:; return;
label_89FF:; return;
label_8A01:; return;
label_8A03:; return;
label_8A05:; return;
label_8A07:; return;
label_8A09:; return;
label_8A0B:; return;
label_8A0D:; return;
label_8A0F:; return;
label_8A11:; return;
label_8A13:; return;
label_8A15:; return;
label_8A17:; return;
label_8A19:; return;
label_8A1B:; return;
label_8A1D:; return;
label_8A1F:; return;
label_8A21:; return;
label_8A23:; return;
label_8A25:; return;
label_8A27:; return;
label_8A29:; return;
label_8A2C:; return;
label_8A2E:; return;
label_8A30:; return;
label_8A32:; return;
label_8A33:; return;
label_8A35:; return;
label_8A37:; return;
label_8A39:; return;
label_8A3B:; return;
label_8A3D:; return;
label_8A3F:; return;
label_8A41:; return;
label_8A43:; return;
label_8A45:; return;
label_8A47:; return;
label_8A48:; return;
label_8A4A:; return;
label_8A4C:; return;
label_8A4E:; return;
label_8A50:; return;
label_8A52:; return;
label_8A54:; return;
label_8A57:; return;
label_8A58:; return;
label_8A5A:; return;
label_8A5B:; return;
label_8A5D:; return;
label_8A60:; return;
label_8A63:; return;
label_8A66:; return;
label_8A68:; return;
label_8A6A:; return;
label_8A6C:; return;
label_8A6F:; return;
label_8A71:; return;
label_8A73:; return;
label_8A75:; return;
label_8A77:; return;
label_8A79:; return;
label_8A7B:; return;
label_8A7D:; return;
label_8A7F:; return;
label_8A81:; return;
label_8A82:; return;
label_8A85:; return;
label_8A88:; return;
label_8A8A:; return;
label_8A8B:; return;
label_8A8D:; return;
label_8A90:; return;
label_8A93:; return;
label_8A96:; return;
label_8A98:; return;
label_8A9A:; return;
label_8A9C:; return;
label_8AA2:; return;
label_8AA4:; return;
label_8AA6:; return;
label_8AA8:; return;
label_8AAB:; return;
label_8AAE:; return;
label_8AB1:; return;
label_8AB3:; return;
label_8AB5:; return;
label_8AB7:; return;
label_8AB9:; return;
label_8ABB:; return;
label_8ABD:; return;
label_8ABF:; return;
label_8AC1:; return;
label_8AC3:; return;
label_8AC5:; return;
label_8AC7:; return;
label_8ACA:; return;
label_8ACC:; return;
label_8ACE:; return;
label_8AD0:; return;
label_8AD2:; return;
label_8AD4:; return;
label_8AD6:; return;
label_8AD9:; return;
label_8ADA:; return;
label_8ADC:; return;
label_8ADD:; return;
label_8ADF:; return;
label_8AE2:; return;
label_8AE5:; return;
label_8AE8:; return;
label_8AEA:; return;
label_8AEC:; return;
label_8AEE:; return;
label_8AF0:; return;
label_8AF2:; return;
label_8AF4:; return;
label_8AF7:; return;
label_8AF9:; return;
label_8AFB:; return;
label_8AFD:; return;
label_8AFF:; return;
label_8B01:; return;
label_8B03:; return;
label_8B05:; return;
label_8B07:; return;
label_8B09:; return;
label_8B0C:; return;
label_8B0E:; return;
label_8B10:; return;
label_8B12:; return;
label_8B14:; return;
label_8B16:; return;
label_8B19:; return;
label_8B1C:; return;
label_8B1D:; return;
label_8B1F:; return;
label_8B21:; return;
label_8B23:; return;
label_8B25:; return;
label_8B28:; return;
label_8B2A:; return;
label_8B2D:; return;
label_8B2E:; return;
label_8B31:; return;
label_8B34:; return;
label_8B37:; return;
label_8B39:; return;
label_8B3A:; return;
label_8B3C:; return;
label_8B3F:; return;
label_8B42:; return;
label_8B45:; return;
label_8B47:; return;
label_8B49:; return;
label_8B4B:; return;
label_8B51:; return;
label_8B53:; return;
label_8B56:; return;
label_8B59:; return;
label_8B5B:; return;
label_8B5D:; return;
label_8B60:; return;
label_8B62:; return;
label_8B64:; return;
label_8B66:; return;
label_8B68:; return;
label_8B6A:; return;
label_8B6C:; return;
label_8B6E:; return;
label_8B70:; return;
label_8B72:; return;
label_8B74:; return;
label_8B76:; return;
label_8B79:; return;
label_8B7B:; return;
label_8B7D:; return;
label_8B7F:; return;
label_8B81:; return;
label_8B83:; return;
label_8B85:; return;
label_8B88:; return;
label_8B8A:; return;
label_8B8C:; return;
label_8B8E:; return;
label_8B90:; return;
label_8B92:; return;
label_8B95:; return;
label_8B98:; return;
label_8B99:; return;
label_8B9B:; return;
label_8B9D:; return;
label_8B9F:; return;
label_8BA1:; return;
label_8BA4:; return;
label_8BA6:; return;
label_8BA9:; return;
label_8BAA:; return;
label_8BAD:; return;
label_8BB0:; return;
label_8BB3:; return;
label_8BB6:; return;
label_8BB8:; return;
label_8BBB:; return;
label_8BBE:; return;
label_8BBF:; return;
label_8BC2:; return;
label_8BC5:; return;
label_8BC8:; return;
label_8BCB:; return;
label_8BCD:; return;
label_8BD0:; return;
label_8BD3:; return;
label_8BD4:; return;
label_8BD6:; return;
label_8BD8:; return;
label_8BDA:; return;
label_8BDC:; return;
label_8BDE:; return;
label_8BE0:; return;
label_8BE2:; return;
label_8BE4:; return;
label_8BE6:; return;
label_8BE8:; return;
label_8BEA:; return;
label_8BEC:; return;
label_8BEE:; return;
label_8BF0:; return;
label_8BF2:; return;
label_8BF4:; return;
label_8BF6:; return;
label_8BF8:; return;
label_8BFA:; return;
label_8BFC:; return;
label_8BFF:; return;
label_8C01:; return;
label_8C03:; return;
label_8C05:; return;
label_8C07:; return;
label_8C09:; return;
label_8C0B:; return;
label_8C0D:; return;
label_8C0F:; return;
label_8C11:; return;
label_8C13:; return;
label_8C15:; return;
label_8C18:; return;
label_8C1A:; return;
label_8C1C:; return;
label_8C1E:; return;
label_8C20:; return;
label_8C22:; return;
label_8C24:; return;
label_8C26:; return;
label_8C28:; return;
label_8C2A:; return;
label_8C2C:; return;
label_8C2F:; return;
label_8C30:; return;
label_8C32:; return;
label_8C34:; return;
label_8C37:; return;
label_8C39:; return;
label_8C3C:; return;
label_8C3F:; return;
label_8C41:; return;
label_8C44:; return;
label_8C47:; return;
label_8C49:; return;
label_8C4B:; return;
label_8C4D:; return;
label_8C4F:; return;
label_8C51:; return;
label_8C53:; return;
label_8C55:; return;
label_8C58:; return;
label_8C5A:; return;
label_8C5C:; return;
label_8C5E:; return;
label_8C60:; return;
label_8C62:; return;
label_8C64:; return;
label_8C66:; return;
label_8C68:; return;
label_8C6B:; return;
label_8C6D:; return;
label_8C70:; return;
label_8C72:; return;
label_8C74:; return;
label_8C76:; return;
label_8C79:; return;
label_8C7C:; return;
label_8C7E:; return;
label_8C81:; return;
label_8C84:; return;
label_8C86:; return;
label_8C89:; return;
label_8C8C:; return;
label_8C8E:; return;
label_8C90:; return;
label_8C92:; return;
label_8C94:; return;
label_8C96:; return;
label_8C98:; return;
label_8C9A:; return;
label_8C9C:; return;
label_8C9E:; return;
label_8CA0:; return;
label_8CA2:; return;
label_8CA5:; return;
label_8CA8:; return;
label_8CAA:; return;
label_8CAC:; return;
label_8CB2:; return;
label_8CB5:; return;
label_8CB8:; return;
label_8CBA:; return;
label_8CBC:; return;
label_8CBE:; return;
label_8CC1:; return;
label_8CC4:; return;
label_8CC6:; return;
label_8CC8:; return;
label_8CCA:; return;
label_8CCC:; return;
label_8CCE:; return;
label_8CD1:; return;
label_8CD4:; return;
label_8CD6:; return;
label_8CD8:; return;
label_8CDA:; return;
label_8CDD:; return;
label_8CDF:; return;
label_8CE1:; return;
label_8CE3:; return;
label_8CE6:; return;
label_8CE9:; return;
label_8CEB:; return;
label_8CF1:; return;
label_8CF4:; return;
label_8CF6:; return;
label_8CF9:; return;
label_8CFC:; return;
label_8CFE:; return;
label_8D00:; return;
label_8D02:; return;
label_8D05:; return;
label_8D07:; return;
label_8D09:; return;
label_8D0B:; return;
label_8D0E:; return;
label_8D11:; return;
label_8D14:; return;
label_8D16:; return;
label_8D18:; return;
label_8D1E:; return;
label_8D21:; return;
label_8D23:; return;
label_8D26:; return;
label_8D29:; return;
label_8D2B:; return;
label_8D2D:; return;
label_8D2F:; return;
label_8D32:; return;
label_8D34:; return;
label_8D36:; return;
label_8D38:; return;
label_8D3B:; return;
label_8D3D:; return;
label_8D3F:; return;
label_8D42:; return;
label_8D44:; return;
label_8D46:; return;
label_8D48:; return;
label_8D4B:; return;
label_8D4D:; return;
label_8D4F:; return;
label_8D51:; return;
label_8D54:; return;
label_8D56:; return;
label_8D58:; return;
label_8D5B:; return;
label_8D5D:; return;
label_8D5F:; return;
label_8D61:; return;
label_8D63:; return;
label_8D66:; return;
label_8D69:; return;
label_8D6C:; return;
label_8D6E:; return;
label_8D70:; return;
label_8D72:; return;
label_8D75:; return;
label_8D77:; return;
label_8D79:; return;
label_8D7C:; return;
label_8D7F:; return;
label_8D82:; return;
label_8D85:; return;
label_8D88:; return;
label_8D89:; return;
label_8D8B:; return;
label_8D8D:; return;
label_8D8F:; return;
label_8D91:; return;
label_8D93:; return;
label_8D95:; return;
label_8D97:; return;
label_8D99:; return;
label_8D9B:; return;
label_8D9D:; return;
label_8D9F:; return;
label_8DA1:; return;
label_8DA3:; return;
label_8DA5:; return;
label_8DA7:; return;
label_8DA9:; return;
label_8DAB:; return;
label_8DAD:; return;
label_8DAF:; return;
label_8DB1:; return;
label_8DB4:; return;
label_8DB6:; return;
label_8DB8:; return;
label_8DBA:; return;
label_8DBC:; return;
label_8DBE:; return;
label_8DC0:; return;
label_8DC2:; return;
label_8DC4:; return;
label_8DC6:; return;
label_8DC8:; return;
label_8DCA:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD1:; return;
label_8DD3:; return;
label_8DD5:; return;
label_8DD7:; return;
label_8DD9:; return;
label_8DDB:; return;
label_8DDD:; return;
label_8DDF:; return;
label_8DE1:; return;
label_8DE4:; return;
label_8DE5:; return;
label_8DE7:; return;
label_8DE9:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEF:; return;
label_8DF1:; return;
label_8DF3:; return;
label_8DF5:; return;
label_8DF8:; return;
label_8DFA:; return;
label_8DFC:; return;
label_8DFE:; return;
label_8E01:; return;
label_8E03:; return;
label_8E05:; return;
label_8E07:; return;
label_8E0A:; return;
label_8E0C:; return;
label_8E0E:; return;
label_8E10:; return;
label_8E13:; return;
label_8E15:; return;
label_8E17:; return;
label_8E1A:; return;
label_8E1D:; return;
label_8E20:; return;
label_8E22:; return;
label_8E25:; return;
label_8E2B:; return;
label_8E31:; return;
label_8E37:; return;
label_8E38:; return;
label_8E3A:; return;
label_8E3C:; return;
label_8E3E:; return;
label_8E40:; return;
label_8E42:; return;
label_8E44:; return;
label_8E46:; return;
label_8E48:; return;
label_8E4B:; return;
label_8E4D:; return;
label_8E4F:; return;
label_8E51:; return;
label_8E54:; return;
label_8E56:; return;
label_8E58:; return;
label_8E5A:; return;
label_8E5D:; return;
label_8E5F:; return;
label_8E61:; return;
label_8E64:; return;
label_8E65:; return;
label_8E66:; return;
label_8E68:; return;
label_8E69:; return;
label_8E6A:; return;
label_8E6C:; return;
label_8E6D:; return;
label_8E6E:; return;
label_8E70:; return;
label_8E72:; return;
label_8E74:; return;
label_8E75:; return;
label_8E76:; return;
label_8E78:; return;
label_8E7B:; return;
label_8E7C:; return;
label_8E7D:; return;
label_8E7E:; return;
label_8E7F:; return;
label_8E80:; return;
label_8E82:; return;
label_8E84:; return;
label_8E85:; return;
label_8E86:; return;
label_8E87:; return;
label_8E88:; return;
label_8E8A:; return;
label_8E8C:; return;
label_8E8D:; return;
label_8E8F:; return;
label_8E90:; return;
label_8E92:; return;
label_8E94:; return;
label_8E95:; return;
label_8E96:; return;
label_8E99:; return;
label_8E9A:; return;
label_8E9D:; return;
label_8E9E:; return;
label_8EA1:; return;
label_8EA2:; return;
label_8EA5:; return;
label_8EA6:; return;
label_8EA9:; return;
label_8EAA:; return;
label_8EAD:; return;
label_8EAF:; return;
label_8EB0:; return;
label_8EB2:; return;
label_8EB4:; return;
label_8EB6:; return;
label_8EB8:; return;
label_8EBE:; return;
label_8EC0:; return;
label_8EC2:; return;
label_8EC4:; return;
label_8EC6:; return;
label_8EC8:; return;
label_8ECB:; return;
label_8ECC:; return;
label_8ECE:; return;
label_8ED1:; return;
label_8ED3:; return;
label_8ED5:; return;
label_8ED7:; return;
label_8ED9:; return;
label_8EDC:; return;
label_8EDE:; return;
label_8EE1:; return;
label_8EE4:; return;
label_8EE6:; return;
label_8EE9:; return;
label_8EEC:; return;
label_8EEE:; return;
label_8EF0:; return;
label_8EF2:; return;
label_8EF5:; return;
label_8EF7:; return;
label_8EF9:; return;
label_8EFB:; return;
label_8EFE:; return;
label_8F01:; return;
label_8F04:; return;
label_8F06:; return;
label_8F08:; return;
label_8F0A:; return;
label_8F0C:; return;
label_8F0F:; return;
label_8F11:; return;
label_8F13:; return;
label_8F15:; return;
label_8F18:; return;
label_8F1B:; return;
label_8F1D:; return;
label_8F1F:; return;
label_8F21:; return;
label_8F24:; return;
label_8F26:; return;
label_8F28:; return;
label_8F2A:; return;
label_8F2C:; return;
label_8F2E:; return;
label_8F30:; return;
label_8F32:; return;
label_8F34:; return;
label_8F37:; return;
label_8F3A:; return;
label_8F3C:; return;
label_8F3F:; return;
label_8F41:; return;
label_8F44:; return;
label_8F47:; return;
label_8F49:; return;
label_8F4B:; return;
label_8F4D:; return;
label_8F4F:; return;
label_8F51:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5B:; return;
label_8F5D:; return;
label_8F5F:; return;
label_8F61:; return;
label_8F63:; return;
label_8F66:; return;
label_8F68:; return;
label_8F69:; return;
label_8F6B:; return;
label_8F6D:; return;
label_8F6F:; return;
label_8F71:; return;
label_8F73:; return;
label_8F76:; return;
label_8F78:; return;
label_8F7A:; return;
label_8F7C:; return;
label_8F82:; return;
label_8F85:; return;
label_8F87:; return;
label_8F89:; return;
label_8F8C:; return;
label_8F8E:; return;
label_8F90:; return;
label_8F92:; return;
label_8F94:; return;
label_8F96:; return;
label_8F9C:; return;
label_8F9F:; return;
label_8FA2:; return;
label_8FA4:; return;
label_8FA6:; return;
label_8FA8:; return;
label_8FAB:; return;
label_8FAE:; return;
label_8FB1:; return;
label_8FB2:; return;
label_8FB4:; return;
label_8FB7:; return;
label_8FB9:; return;
label_8FBB:; return;
label_8FBE:; return;
label_8FC1:; return;
label_8FC4:; return;
label_8FC6:; return;
label_8FC8:; return;
label_8FCE:; return;
label_8FD1:; return;
label_8FD3:; return;
label_8FD6:; return;
label_8FD7:; return;
label_8FD9:; return;
label_8FDB:; return;
label_8FDD:; return;
label_8FDF:; return;
label_8FE1:; return;
label_8FE3:; return;
label_8FE6:; return;
label_8FE9:; return;
label_8FEB:; return;
label_8FED:; return;
label_8FEF:; return;
label_8FF2:; return;
label_8FF4:; return;
label_8FF6:; return;
label_8FF8:; return;
label_8FFB:; return;
label_8FFE:; return;
label_9000:; return;
label_9006:; return;
label_9009:; return;
label_900B:; return;
label_900E:; return;
label_9011:; return;
label_9013:; return;
label_9015:; return;
label_9017:; return;
label_901A:; return;
label_901C:; return;
label_901E:; return;
label_9020:; return;
label_9023:; return;
label_9026:; return;
label_9029:; return;
label_902B:; return;
label_902D:; return;
label_9033:; return;
label_9036:; return;
label_9038:; return;
label_903B:; return;
label_903E:; return;
label_9041:; return;
label_9043:; return;
label_9045:; return;
label_9047:; return;
label_9049:; return;
label_904B:; return;
label_904E:; return;
label_9051:; return;
label_9053:; return;
label_9055:; return;
label_9057:; return;
label_905A:; return;
label_905C:; return;
label_905E:; return;
label_9060:; return;
label_9063:; return;
label_9066:; return;
label_9069:; return;
label_906B:; return;
label_906D:; return;
label_906F:; return;
label_9072:; return;
label_9075:; return;
label_9077:; return;
label_9079:; return;
label_907B:; return;
label_907E:; return;
label_9080:; return;
label_9082:; return;
label_9084:; return;
label_9087:; return;
label_908A:; return;
label_908C:; return;
label_908E:; return;
label_9091:; return;
label_9094:; return;
label_9096:; return;
label_9098:; return;
label_909A:; return;
label_909C:; return;
label_909F:; return;
label_90A2:; return;
label_90A5:; return;
label_90A7:; return;
label_90A9:; return;
label_90AB:; return;
label_90AE:; return;
label_90B1:; return;
label_90B3:; return;
label_90B5:; return;
label_90B8:; return;
label_90BB:; return;
label_90BE:; return;
label_90C1:; return;
label_90C4:; return;
label_90C7:; return;
label_90CA:; return;
label_90CB:; return;
label_90CE:; return;
label_90D0:; return;
label_90D2:; return;
label_90D5:; return;
label_90D7:; return;
label_90D9:; return;
label_90DB:; return;
label_90DE:; return;
label_90E1:; return;
label_90E3:; return;
label_90E5:; return;
label_90E7:; return;
label_90EA:; return;
label_90EC:; return;
label_90EE:; return;
label_90F4:; return;
label_90F6:; return;
label_90F9:; return;
label_90FB:; return;
label_90FD:; return;
label_90FF:; return;
label_9101:; return;
label_9103:; return;
label_9105:; return;
label_9108:; return;
label_910A:; return;
label_910C:; return;
label_910E:; return;
label_9111:; return;
label_9113:; return;
label_9115:; return;
label_9117:; return;
label_9119:; return;
label_911B:; return;
label_9121:; return;
label_9123:; return;
label_9126:; return;
label_9128:; return;
label_912A:; return;
label_912C:; return;
label_912E:; return;
label_9131:; return;
label_9134:; return;
label_9137:; return;
label_9139:; return;
label_913B:; return;
label_913D:; return;
label_9140:; return;
label_9142:; return;
label_9144:; return;
label_9146:; return;
label_9148:; return;
label_914A:; return;
label_9150:; return;
label_9152:; return;
label_9154:; return;
label_9156:; return;
label_9159:; return;
label_915C:; return;
label_915E:; return;
label_9160:; return;
label_9162:; return;
label_9165:; return;
label_9167:; return;
label_9169:; return;
label_916B:; return;
label_916E:; return;
label_9170:; return;
label_9172:; return;
label_9174:; return;
label_9176:; return;
label_917C:; return;
label_917F:; return;
label_9181:; return;
label_9183:; return;
label_9185:; return;
label_9187:; return;
label_918A:; return;
label_918D:; return;
label_9190:; return;
label_9192:; return;
label_9194:; return;
label_9196:; return;
label_9199:; return;
label_919B:; return;
label_919D:; return;
label_919F:; return;
label_91A1:; return;
label_91A7:; return;
label_91AA:; return;
label_91AC:; return;
label_91AE:; return;
label_91B1:; return;
label_91B3:; return;
label_91B5:; return;
label_91B8:; return;
label_91BA:; return;
label_91BD:; return;
label_91C0:; return;
label_91C2:; return;
label_91C5:; return;
label_91C7:; return;
label_91C9:; return;
label_91CB:; return;
label_91CD:; return;
label_91CF:; return;
label_91D1:; return;
label_91D3:; return;
label_91D5:; return;
label_91D7:; return;
label_91D9:; return;
label_91DC:; return;
label_91DF:; return;
label_91E1:; return;
label_91E4:; return;
label_91E6:; return;
label_91E8:; return;
label_91EA:; return;
label_91EC:; return;
label_91EE:; return;
label_91F0:; return;
label_91F2:; return;
label_91F4:; return;
label_91F6:; return;
label_91F8:; return;
label_91FA:; return;
label_91FC:; return;
label_91FE:; return;
label_9204:; return;
label_9207:; return;
label_9209:; return;
label_920B:; return;
label_920D:; return;
label_920F:; return;
label_9211:; return;
label_9213:; return;
label_9215:; return;
label_9217:; return;
label_9219:; return;
label_921B:; return;
label_921D:; return;
label_9223:; return;
label_9225:; return;
label_9227:; return;
label_922A:; return;
label_922C:; return;
label_922F:; return;
label_9232:; return;
label_9234:; return;
label_9237:; return;
label_9239:; return;
label_923B:; return;
label_923D:; return;
label_923F:; return;
label_9241:; return;
label_9243:; return;
label_9245:; return;
label_9248:; return;
label_924B:; return;
label_924D:; return;
label_9250:; return;
label_9252:; return;
label_9254:; return;
label_9256:; return;
label_9258:; return;
label_925A:; return;
label_925C:; return;
label_925E:; return;
label_9260:; return;
label_9262:; return;
label_9264:; return;
label_926A:; return;
label_926D:; return;
label_926F:; return;
label_9271:; return;
label_9273:; return;
label_9275:; return;
label_9277:; return;
label_9279:; return;
label_927B:; return;
label_927D:; return;
label_927F:; return;
label_9281:; return;
label_9283:; return;
label_9289:; return;
label_928A:; return;
label_928C:; return;
label_928E:; return;
label_9290:; return;
label_9292:; return;
label_9294:; return;
label_9296:; return;
label_9298:; return;
label_929A:; return;
label_929C:; return;
label_929E:; return;
label_92A1:; return;
label_92A3:; return;
label_92A5:; return;
label_92A7:; return;
label_92A9:; return;
label_92AB:; return;
label_92AD:; return;
label_92AF:; return;
label_92B1:; return;
label_92B3:; return;
label_92B5:; return;
label_92B8:; return;
label_92B9:; return;
label_92BB:; return;
label_92BD:; return;
label_92BF:; return;
label_92C1:; return;
label_92C3:; return;
label_92C5:; return;
label_92C7:; return;
label_92C9:; return;
label_92CB:; return;
label_92CD:; return;
label_92CF:; return;
label_92D1:; return;
label_92D4:; return;
label_92D6:; return;
label_92D8:; return;
label_92DA:; return;
label_92DD:; return;
label_92DF:; return;
label_92E1:; return;
label_92E4:; return;
label_92E6:; return;
label_92E8:; return;
label_92EA:; return;
label_92EC:; return;
label_92EE:; return;
label_92F0:; return;
label_92F2:; return;
label_92F4:; return;
label_92F6:; return;
label_92F8:; return;
label_92FA:; return;
label_92FC:; return;
label_92FF:; return;
label_9301:; return;
label_9303:; return;
label_9305:; return;
label_9308:; return;
label_930A:; return;
label_930C:; return;
label_930F:; return;
label_9310:; return;
label_9312:; return;
label_9314:; return;
label_9316:; return;
label_9318:; return;
label_931A:; return;
label_931C:; return;
label_931E:; return;
label_9320:; return;
label_9323:; return;
label_9325:; return;
label_9327:; return;
label_9329:; return;
label_932C:; return;
label_932E:; return;
label_9330:; return;
label_9332:; return;
label_9335:; return;
label_9337:; return;
label_9339:; return;
label_933B:; return;
label_933E:; return;
label_9340:; return;
label_9342:; return;
label_9345:; return;
label_9348:; return;
label_934B:; return;
label_934D:; return;
label_9350:; return;
label_9356:; return;
label_935C:; return;
label_9362:; return;
label_9363:; return;
label_9365:; return;
label_9367:; return;
label_9369:; return;
label_936B:; return;
label_936D:; return;
label_936F:; return;
label_9371:; return;
label_9373:; return;
label_9376:; return;
label_9378:; return;
label_937A:; return;
label_937C:; return;
label_937F:; return;
label_9381:; return;
label_9383:; return;
label_9385:; return;
label_9388:; return;
label_938A:; return;
label_938C:; return;
label_938F:; return;
label_9390:; return;
label_9393:; return;
label_9395:; return;
label_9398:; return;
label_9399:; return;
label_939B:; return;
label_939E:; return;
label_939F:; return;
label_93A1:; return;
label_93A4:; return;
label_93A5:; return;
label_93A8:; return;
label_93AA:; return;
label_93AC:; return;
label_93AD:; return;
label_93AF:; return;
label_93B2:; return;
label_93B3:; return;
label_93B5:; return;
label_93B8:; return;
label_93B9:; return;
label_93BC:; return;
label_93BF:; return;
label_93C1:; return;
label_93C3:; return;
label_93C5:; return;
label_93C7:; return;
label_93C9:; return;
label_93CB:; return;
label_93CD:; return;
label_93D0:; return;
label_93D2:; return;
label_93D3:; return;
label_93D5:; return;
label_93D8:; return;
label_93D9:; return;
label_93DB:; return;
label_93DC:; return;
label_93DE:; return;
label_93E1:; return;
label_93E2:; return;
label_93E5:; return;
label_93E7:; return;
label_93EA:; return;
label_93EB:; return;
label_93ED:; return;
label_93F0:; return;
label_93F1:; return;
label_93F3:; return;
label_93F6:; return;
label_93F9:; return;
label_93FA:; return;
label_93FC:; return;
label_93FE:; return;
label_9400:; return;
label_9402:; return;
label_9404:; return;
label_9406:; return;
label_9408:; return;
label_940A:; return;
label_940C:; return;
label_940E:; return;
label_9411:; return;
label_9412:; return;
label_9414:; return;
label_9416:; return;
label_9418:; return;
label_941A:; return;
label_941C:; return;
label_941E:; return;
label_9420:; return;
label_9422:; return;
label_9424:; return;
label_9426:; return;
label_9429:; return;
label_942A:; return;
label_942C:; return;
label_942E:; return;
label_9430:; return;
label_9432:; return;
label_9434:; return;
label_9436:; return;
label_9438:; return;
label_943A:; return;
label_943C:; return;
label_943E:; return;
label_9441:; return;
label_9442:; return;
label_9444:; return;
label_9446:; return;
label_9448:; return;
label_944A:; return;
label_944C:; return;
label_944E:; return;
label_9450:; return;
label_9452:; return;
label_9454:; return;
label_9456:; return;
label_9459:; return;
label_945A:; return;
label_945B:; return;
label_945C:; return;
label_945D:; return;
label_9460:; return;
label_9461:; return;
label_9464:; return;
label_9465:; return;
label_9468:; return;
label_9469:; return;
label_946C:; return;
label_946D:; return;
label_9470:; return;
label_9472:; return;
label_9474:; return;
label_9476:; return;
label_9478:; return;
label_947A:; return;
label_947B:; return;
label_947D:; return;
label_947F:; return;
label_9481:; return;
label_9483:; return;
label_9485:; return;
label_9487:; return;
label_9489:; return;
label_948B:; return;
label_948D:; return;
label_9490:; return;
label_9491:; return;
label_9494:; return;
label_9496:; return;
label_9498:; return;
label_949A:; return;
label_949C:; return;
label_949E:; return;
label_94A0:; return;
label_94A3:; return;
label_94A6:; return;
label_94A8:; return;
label_94AA:; return;
label_94AC:; return;
label_94AF:; return;
label_94B1:; return;
label_94B3:; return;
label_94B5:; return;
label_94B8:; return;
label_94BE:; return;
label_94C1:; return;
label_94C3:; return;
label_94C5:; return;
label_94C8:; return;
label_94CA:; return;
label_94CC:; return;
label_94CE:; return;
label_94D1:; return;
label_94D3:; return;
label_94D5:; return;
label_94D7:; return;
label_94DA:; return;
label_94DD:; return;
label_94DF:; return;
label_94E1:; return;
label_94E7:; return;
label_94E9:; return;
label_94EC:; return;
label_94EF:; return;
label_94F1:; return;
label_94F3:; return;
label_94F5:; return;
label_94F8:; return;
label_94FA:; return;
label_94FC:; return;
label_94FE:; return;
label_9501:; return;
label_9504:; return;
label_9506:; return;
label_9508:; return;
label_950E:; return;
label_9510:; return;
label_9513:; return;
label_9516:; return;
label_9518:; return;
label_951A:; return;
label_951D:; return;
label_9520:; return;
label_9523:; return;
label_9524:; return;
label_9526:; return;
label_9527:; return;
label_9529:; return;
label_952B:; return;
label_952E:; return;
label_9531:; return;
label_9534:; return;
label_9535:; return;
label_9537:; return;
label_953A:; return;
label_953C:; return;
label_953E:; return;
label_9540:; return;
label_9543:; return;
label_9546:; return;
label_9547:; return;
label_954A:; return;
label_954D:; return;
label_9550:; return;
label_9553:; return;
label_9555:; return;
label_9558:; return;
label_955B:; return;
label_955E:; return;
label_9560:; return;
label_9563:; return;
label_9566:; return;
label_9569:; return;
label_956C:; return;
label_956E:; return;
label_9571:; return;
label_9574:; return;
label_9577:; return;
label_9579:; return;
label_957C:; return;
label_957F:; return;
label_9582:; return;
label_9584:; return;
label_9587:; return;
label_958A:; return;
label_958C:; return;
label_958F:; return;
label_9592:; return;
label_9593:; return;
label_9596:; return;
label_9597:; return;
label_9599:; return;
label_959B:; return;
label_959D:; return;
label_959F:; return;
label_95A1:; return;
label_95A3:; return;
label_95A6:; return;
label_95A7:; return;
label_95A9:; return;
label_95AB:; return;
label_95AD:; return;
label_95AF:; return;
label_95B1:; return;
label_95B3:; return;
label_95B6:; return;
label_95B7:; return;
label_95B9:; return;
label_95BB:; return;
label_95BD:; return;
label_95BF:; return;
label_95C1:; return;
label_95C3:; return;
label_95C6:; return;
label_95C7:; return;
label_95C9:; return;
label_95CB:; return;
label_95CD:; return;
label_95CF:; return;
label_95D1:; return;
label_95D3:; return;
label_95D6:; return;
label_95D7:; return;
label_95D9:; return;
label_95DB:; return;
label_95DD:; return;
label_95DF:; return;
label_95E1:; return;
label_95E3:; return;
label_95E6:; return;
label_95E7:; return;
label_95E9:; return;
label_95EB:; return;
label_95ED:; return;
label_95EF:; return;
label_95F1:; return;
label_95F3:; return;
label_95F6:; return;
label_95F7:; return;
label_95F9:; return;
label_95FB:; return;
label_95FD:; return;
label_95FF:; return;
label_9601:; return;
label_9603:; return;
label_9606:; return;
label_9608:; return;
label_960B:; return;
label_960D:; return;
label_9610:; return;
label_9612:; return;
label_9615:; return;
label_9617:; return;
label_961A:; return;
label_961C:; return;
label_961F:; return;
label_9621:; return;
label_9624:; return;
label_9626:; return;
label_9629:; return;
label_962B:; return;
label_962E:; return;
label_9630:; return;
label_9633:; return;
label_9634:; return;
label_9637:; return;
label_9639:; return;
label_963C:; return;
label_963F:; return;
label_9642:; return;
label_9644:; return;
label_9647:; return;
label_9649:; return;
label_964B:; return;
label_964D:; return;
label_964F:; return;
label_9651:; return;
label_9653:; return;
label_9655:; return;
label_9658:; return;
label_965A:; return;
label_965C:; return;
label_965E:; return;
label_9660:; return;
label_9662:; return;
label_9663:; return;
label_9665:; return;
label_9667:; return;
label_9669:; return;
label_966B:; return;
label_966C:; return;
label_966E:; return;
label_9670:; return;
label_9672:; return;
label_9674:; return;
label_9676:; return;
label_9678:; return;
label_967A:; return;
label_967C:; return;
label_967F:; return;
label_9681:; return;
label_9683:; return;
label_9685:; return;
label_9687:; return;
label_9689:; return;
label_968A:; return;
label_968C:; return;
label_968E:; return;
label_9690:; return;
label_9692:; return;
label_9693:; return;
label_9695:; return;
label_9697:; return;
label_969A:; return;
label_969C:; return;
label_969F:; return;
label_96A1:; return;
label_96A4:; return;
label_96A6:; return;
label_96A9:; return;
label_96AB:; return;
label_96AE:; return;
label_96B0:; return;
label_96B3:; return;
label_96B5:; return;
label_96B8:; return;
label_96BA:; return;
label_96BD:; return;
label_96BE:; return;
label_96C1:; return;
label_96C3:; return;
label_96C6:; return;
label_96C8:; return;
label_96CB:; return;
label_96CD:; return;
label_96D0:; return;
label_96D3:; return;
label_96D6:; return;
label_96D8:; return;
label_96DB:; return;
label_96DD:; return;
label_96E0:; return;
label_96E1:; return;
label_96E4:; return;
label_96E6:; return;
label_96E8:; return;
label_96EA:; return;
label_96EC:; return;
label_96EE:; return;
label_96F0:; return;
label_96F2:; return;
label_96F4:; return;
label_96F6:; return;
label_96F9:; return;
label_96FB:; return;
label_96FD:; return;
label_96FF:; return;
label_9701:; return;
label_9703:; return;
label_9705:; return;
label_9707:; return;
label_9709:; return;
label_970C:; return;
label_970F:; return;
label_9712:; return;
label_9714:; return;
label_9716:; return;
label_9718:; return;
label_971A:; return;
label_971C:; return;
label_971F:; return;
label_9721:; return;
label_9723:; return;
label_9725:; return;
label_9727:; return;
label_9729:; return;
label_972A:; return;
label_972C:; return;
label_972E:; return;
label_9730:; return;
label_9732:; return;
label_9733:; return;
label_9735:; return;
label_9737:; return;
label_973A:; return;
label_973C:; return;
label_973E:; return;
label_9740:; return;
label_9742:; return;
label_9744:; return;
label_9747:; return;
label_9749:; return;
label_974B:; return;
label_974D:; return;
label_974F:; return;
label_9751:; return;
label_9752:; return;
label_9754:; return;
label_9756:; return;
label_9758:; return;
label_975A:; return;
label_975B:; return;
label_975D:; return;
label_975F:; return;
label_9762:; return;
label_9764:; return;
label_9767:; return;
label_9769:; return;
label_976C:; return;
label_976E:; return;
label_9771:; return;
label_9773:; return;
label_9776:; return;
label_9778:; return;
label_977B:; return;
label_977D:; return;
label_9780:; return;
label_9782:; return;
label_9785:; return;
label_9786:; return;
label_9788:; return;
label_978A:; return;
label_978C:; return;
label_978E:; return;
label_9790:; return;
label_9792:; return;
label_9794:; return;
label_9796:; return;
label_9799:; return;
label_979B:; return;
label_979D:; return;
label_979F:; return;
label_97A1:; return;
label_97A3:; return;
label_97A5:; return;
label_97A7:; return;
label_97A9:; return;
label_97AC:; return;
label_97AE:; return;
label_97B0:; return;
label_97B2:; return;
label_97B4:; return;
label_97B6:; return;
label_97B8:; return;
label_97BA:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C3:; return;
label_97C5:; return;
label_97C7:; return;
label_97C9:; return;
label_97CB:; return;
label_97CD:; return;
label_97CF:; return;
label_97D2:; return;
label_97D4:; return;
label_97D6:; return;
label_97D8:; return;
label_97DA:; return;
label_97DC:; return;
label_97DE:; return;
label_97E0:; return;
label_97E2:; return;
label_97E5:; return;
label_97E7:; return;
label_97E9:; return;
label_97EB:; return;
label_97ED:; return;
label_97EF:; return;
label_97F1:; return;
label_97F3:; return;
label_97F5:; return;
label_97F8:; return;
label_97F9:; return;
label_97FC:; return;
label_97FE:; return;
label_9801:; return;
label_9802:; return;
label_9804:; return;
label_9807:; return;
label_9808:; return;
label_980A:; return;
label_980D:; return;
label_980E:; return;
label_9810:; return;
label_9813:; return;
label_9814:; return;
label_9816:; return;
label_9818:; return;
label_981A:; return;
label_981D:; return;
label_9820:; return;
label_9821:; return;
label_9823:; return;
label_9825:; return;
label_9827:; return;
label_9829:; return;
label_982C:; return;
label_982D:; return;
label_982F:; return;
label_9831:; return;
label_9833:; return;
label_9835:; return;
label_9838:; return;
label_9839:; return;
label_983C:; return;
label_983E:; return;
label_9841:; return;
label_9842:; return;
label_9844:; return;
label_9847:; return;
label_9848:; return;
label_984A:; return;
label_984D:; return;
label_984E:; return;
label_9850:; return;
label_9852:; return;
label_9855:; return;
label_9856:; return;
label_9857:; return;
label_9859:; return;
label_985B:; return;
label_985D:; return;
label_9860:; return;
label_9861:; return;
label_9863:; return;
label_9866:; return;
label_9867:; return;
label_9869:; return;
label_986C:; return;
label_986D:; return;
label_986F:; return;
label_9872:; return;
label_9873:; return;
label_9874:; return;
label_9876:; return;
label_9878:; return;
label_987A:; return;
label_987D:; return;
label_9880:; return;
label_9881:; return;
label_9884:; return;
label_9886:; return;
label_9889:; return;
label_988B:; return;
label_988D:; return;
label_988E:; return;
label_9891:; return;
label_9893:; return;
label_9896:; return;
label_9899:; return;
label_989C:; return;
label_989F:; return;
label_98A0:; return;
label_98A2:; return;
label_98A4:; return;
label_98A6:; return;
label_98A9:; return;
label_98AB:; return;
label_98AE:; return;
label_98B1:; return;
label_98B4:; return;
label_98B5:; return;
label_98B7:; return;
label_98BA:; return;
label_98BC:; return;
label_98BF:; return;
label_98C1:; return;
label_98C4:; return;
label_98C6:; return;
label_98C9:; return;
label_98CB:; return;
label_98CE:; return;
label_98D0:; return;
label_98D3:; return;
label_98D5:; return;
label_98D8:; return;
label_98DA:; return;
label_98DD:; return;
label_98DF:; return;
label_98E2:; return;
label_98E4:; return;
label_98E7:; return;
label_98E9:; return;
label_98EC:; return;
label_98EE:; return;
label_98F1:; return;
label_98F3:; return;
label_98F6:; return;
label_98F8:; return;
label_98FB:; return;
label_98FD:; return;
label_9900:; return;
label_9901:; return;
label_9903:; return;
label_9906:; return;
label_9908:; return;
label_990B:; return;
label_990D:; return;
label_9910:; return;
label_9912:; return;
label_9915:; return;
label_9917:; return;
label_991A:; return;
label_991C:; return;
label_991F:; return;
label_9921:; return;
label_9924:; return;
label_9926:; return;
label_9929:; return;
label_992B:; return;
label_992E:; return;
label_9930:; return;
label_9933:; return;
label_9935:; return;
label_9938:; return;
label_993A:; return;
label_993D:; return;
label_993F:; return;
label_9942:; return;
label_9944:; return;
label_9947:; return;
label_9949:; return;
label_994C:; return;
label_994D:; return;
label_994F:; return;
label_9951:; return;
label_9953:; return;
label_9955:; return;
label_9957:; return;
label_9959:; return;
label_995C:; return;
label_995D:; return;
label_995F:; return;
label_9961:; return;
label_9963:; return;
label_9965:; return;
label_9968:; return;
label_9969:; return;
label_996B:; return;
label_996E:; return;
label_996F:; return;
label_9971:; return;
label_9974:; return;
label_9975:; return;
label_9977:; return;
label_997A:; return;
label_997D:; return;
label_997E:; return;
label_997F:; return;
label_9981:; return;
label_9983:; return;
label_9985:; return;
label_9988:; return;
label_9989:; return;
label_998B:; return;
label_998D:; return;
label_998F:; return;
label_9991:; return;
label_9994:; return;
label_9996:; return;
label_9999:; return;
label_999B:; return;
label_999E:; return;
label_999F:; return;
label_99A1:; return;
label_99A3:; return;
label_99A6:; return;
label_99A7:; return;
label_99A9:; return;
label_99AB:; return;
label_99AC:; return;
label_99AE:; return;
label_99AF:; return;
label_99B1:; return;
label_99B3:; return;
label_99B5:; return;
label_99B7:; return;
label_99B9:; return;
label_99BC:; return;
label_99BE:; return;
label_99C1:; return;
label_99C3:; return;
label_99C6:; return;
label_99C8:; return;
label_99CB:; return;
label_99CC:; return;
label_99CE:; return;
label_99D0:; return;
label_99D1:; return;
label_99D3:; return;
label_99D5:; return;
label_99D7:; return;
label_99D9:; return;
label_99DC:; return;
label_99DE:; return;
label_99E1:; return;
label_99E3:; return;
label_99E6:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99EE:; return;
label_99EF:; return;
label_99F1:; return;
label_99F3:; return;
label_99F4:; return;
label_99F6:; return;
label_99F7:; return;
label_99F9:; return;
label_99FB:; return;
label_99FD:; return;
label_99FF:; return;
label_9A02:; return;
label_9A04:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0C:; return;
label_9A0D:; return;
label_9A0F:; return;
label_9A11:; return;
label_9A14:; return;
label_9A15:; return;
label_9A17:; return;
label_9A19:; return;
label_9A1A:; return;
label_9A1C:; return;
label_9A1D:; return;
label_9A1F:; return;
label_9A21:; return;
label_9A23:; return;
label_9A25:; return;
label_9A28:; return;
label_9A29:; return;
label_9A2B:; return;
label_9A2D:; return;
label_9A2F:; return;
label_9A31:; return;
label_9A34:; return;
label_9A35:; return;
label_9A37:; return;
label_9A39:; return;
label_9A3C:; return;
label_9A3D:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A43:; return;
label_9A45:; return;
label_9A47:; return;
label_9A49:; return;
label_9A4B:; return;
label_9A4C:; return;
label_9A4F:; return;
label_9A50:; return;
label_9A53:; return;
label_9A55:; return;
label_9A57:; return;
label_9A59:; return;
label_9A5B:; return;
label_9A5C:; return;
label_9A5F:; return;
label_9A61:; return;
label_9A63:; return;
label_9A65:; return;
label_9A66:; return;
label_9A68:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A73:; return;
label_9A75:; return;
label_9A77:; return;
label_9A79:; return;
label_9A7C:; return;
label_9A7F:; return;
label_9A81:; return;
label_9A83:; return;
label_9A84:; return;
label_9A85:; return;
label_9A87:; return;
label_9A88:; return;
label_9A89:; return;
label_9A8B:; return;
label_9A8D:; return;
label_9A8F:; return;
label_9A90:; return;
label_9A91:; return;
label_9A93:; return;
label_9A94:; return;
label_9A95:; return;
label_9A96:; return;
label_9A97:; return;
label_9A98:; return;
label_9A99:; return;
label_9A9A:; return;
label_9A9B:; return;
label_9A9D:; return;
label_9A9F:; return;
label_9AA0:; return;
label_9AA2:; return;
label_9AA3:; return;
label_9AA4:; return;
}

void func_8951_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8951_b3");
#endif
label_8951:;
    /* $8951: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_8953:;
    /* $8953: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8955:;
    /* $8955: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_8957:;
    /* $8957: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8959:;
    /* $8959: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_895B:;
    /* $895B: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_895D:;
    /* $895D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_895F:;
    /* $895F: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_8961:;
    /* $8961: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8963:;
    /* $8963: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_8965:;
    /* $8965: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_8967:;
    /* $8967: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_8969:;
    /* $8969: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_896F;
label_896B:;
    /* $896B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_896D:;
    /* $896D: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_896F:;
    /* $896F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_8972:;
    /* $8972: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_8974:;
    /* $8974: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8976:;
    /* $8976: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_899D;
label_8978:;
    /* $8978: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8979:;
    /* $8979: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_897B:;
    /* $897B: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_897D:;
    /* $897D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_897F:;
    /* $897F: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_8981:;
    /* $8981: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_8983:;
    /* $8983: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8985:;
    /* $8985: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_898B;
label_8987:;
    /* $8987: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_8989:;
    /* $8989: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_898B:;
    /* $898B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_898D:;
    /* $898D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_898E:;
    /* $898E: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x18); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8990:;
    /* $8990: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_8992:;
    /* $8992: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8996;
label_8994:;
    /* $8994: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8996:;
    /* $8996: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8998:;
    /* $8998: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_899D;
label_899A:;
    /* $899A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8951;
label_899D:;
    /* $899D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_899E:; return;
label_89A0:; return;
label_89A2:; return;
label_89A4:; return;
label_89A6:; return;
label_89A8:; return;
label_89AA:; return;
label_89AC:; return;
label_89AE:; return;
label_89B0:; return;
label_89B2:; return;
label_89B4:; return;
label_89B6:; return;
label_89B8:; return;
label_89BA:; return;
label_89BC:; return;
label_89BE:; return;
label_89C0:; return;
label_89C2:; return;
label_89C4:; return;
label_89C6:; return;
label_89C8:; return;
label_89CA:; return;
label_89CC:; return;
label_89CF:; return;
label_89D1:; return;
label_89D3:; return;
label_89D5:; return;
label_89D6:; return;
label_89D8:; return;
label_89DA:; return;
label_89DC:; return;
label_89DE:; return;
label_89E0:; return;
label_89E2:; return;
label_89E4:; return;
label_89E6:; return;
label_89E8:; return;
label_89EA:; return;
label_89EB:; return;
label_89ED:; return;
label_89EF:; return;
label_89F1:; return;
label_89F3:; return;
label_89F5:; return;
label_89F7:; return;
label_89FA:; return;
label_89FB:; return;
label_89FD:; return;
label_89FF:; return;
label_8A01:; return;
label_8A03:; return;
label_8A05:; return;
label_8A07:; return;
label_8A09:; return;
label_8A0B:; return;
label_8A0D:; return;
label_8A0F:; return;
label_8A11:; return;
label_8A13:; return;
label_8A15:; return;
label_8A17:; return;
label_8A19:; return;
label_8A1B:; return;
label_8A1D:; return;
label_8A1F:; return;
label_8A21:; return;
label_8A23:; return;
label_8A25:; return;
label_8A27:; return;
label_8A29:; return;
label_8A2C:; return;
label_8A2E:; return;
label_8A30:; return;
label_8A32:; return;
label_8A33:; return;
label_8A35:; return;
label_8A37:; return;
label_8A39:; return;
label_8A3B:; return;
label_8A3D:; return;
label_8A3F:; return;
label_8A41:; return;
label_8A43:; return;
label_8A45:; return;
label_8A47:; return;
label_8A48:; return;
label_8A4A:; return;
label_8A4C:; return;
label_8A4E:; return;
label_8A50:; return;
label_8A52:; return;
label_8A54:; return;
label_8A57:; return;
label_8A58:; return;
label_8A5A:; return;
label_8A5B:; return;
label_8A5D:; return;
label_8A60:; return;
label_8A63:; return;
label_8A66:; return;
label_8A68:; return;
label_8A6A:; return;
label_8A6C:; return;
label_8A6F:; return;
label_8A71:; return;
label_8A73:; return;
label_8A75:; return;
label_8A77:; return;
label_8A79:; return;
label_8A7B:; return;
label_8A7D:; return;
label_8A7F:; return;
label_8A81:; return;
label_8A82:; return;
label_8A85:; return;
label_8A88:; return;
label_8A8A:; return;
label_8A8B:; return;
label_8A8D:; return;
label_8A90:; return;
label_8A93:; return;
label_8A96:; return;
label_8A98:; return;
label_8A9A:; return;
label_8A9C:; return;
label_8AA2:; return;
label_8AA4:; return;
label_8AA6:; return;
label_8AA8:; return;
label_8AAB:; return;
label_8AAE:; return;
label_8AB1:; return;
label_8AB3:; return;
label_8AB5:; return;
label_8AB7:; return;
label_8AB9:; return;
label_8ABB:; return;
label_8ABD:; return;
label_8ABF:; return;
label_8AC1:; return;
label_8AC3:; return;
label_8AC5:; return;
label_8AC7:; return;
label_8ACA:; return;
label_8ACC:; return;
label_8ACE:; return;
label_8AD0:; return;
label_8AD2:; return;
label_8AD4:; return;
label_8AD6:; return;
label_8AD9:; return;
label_8ADA:; return;
label_8ADC:; return;
label_8ADD:; return;
label_8ADF:; return;
label_8AE2:; return;
label_8AE5:; return;
label_8AE8:; return;
label_8AEA:; return;
label_8AEC:; return;
label_8AEE:; return;
label_8AF0:; return;
label_8AF2:; return;
label_8AF4:; return;
label_8AF7:; return;
label_8AF9:; return;
label_8AFB:; return;
label_8AFD:; return;
label_8AFF:; return;
label_8B01:; return;
label_8B03:; return;
label_8B05:; return;
label_8B07:; return;
label_8B09:; return;
label_8B0C:; return;
label_8B0E:; return;
label_8B10:; return;
label_8B12:; return;
label_8B14:; return;
label_8B16:; return;
label_8B19:; return;
label_8B1C:; return;
label_8B1D:; return;
label_8B1F:; return;
label_8B21:; return;
label_8B23:; return;
label_8B25:; return;
label_8B28:; return;
label_8B2A:; return;
label_8B2D:; return;
label_8B2E:; return;
label_8B31:; return;
label_8B34:; return;
label_8B37:; return;
label_8B39:; return;
label_8B3A:; return;
label_8B3C:; return;
label_8B3F:; return;
label_8B42:; return;
label_8B45:; return;
label_8B47:; return;
label_8B49:; return;
label_8B4B:; return;
label_8B51:; return;
label_8B53:; return;
label_8B56:; return;
label_8B59:; return;
label_8B5B:; return;
label_8B5D:; return;
label_8B60:; return;
label_8B62:; return;
label_8B64:; return;
label_8B66:; return;
label_8B68:; return;
label_8B6A:; return;
label_8B6C:; return;
label_8B6E:; return;
label_8B70:; return;
label_8B72:; return;
label_8B74:; return;
label_8B76:; return;
label_8B79:; return;
label_8B7B:; return;
label_8B7D:; return;
label_8B7F:; return;
label_8B81:; return;
label_8B83:; return;
label_8B85:; return;
label_8B88:; return;
label_8B8A:; return;
label_8B8C:; return;
label_8B8E:; return;
label_8B90:; return;
label_8B92:; return;
label_8B95:; return;
label_8B98:; return;
label_8B99:; return;
label_8B9B:; return;
label_8B9D:; return;
label_8B9F:; return;
label_8BA1:; return;
label_8BA4:; return;
label_8BA6:; return;
label_8BA9:; return;
label_8BAA:; return;
label_8BAD:; return;
label_8BB0:; return;
label_8BB3:; return;
label_8BB6:; return;
label_8BB8:; return;
label_8BBB:; return;
label_8BBE:; return;
label_8BBF:; return;
label_8BC2:; return;
label_8BC5:; return;
label_8BC8:; return;
label_8BCB:; return;
label_8BCD:; return;
label_8BD0:; return;
label_8BD3:; return;
label_8BD4:; return;
label_8BD6:; return;
label_8BD8:; return;
label_8BDA:; return;
label_8BDC:; return;
label_8BDE:; return;
label_8BE0:; return;
label_8BE2:; return;
label_8BE4:; return;
label_8BE6:; return;
label_8BE8:; return;
label_8BEA:; return;
label_8BEC:; return;
label_8BEE:; return;
label_8BF0:; return;
label_8BF2:; return;
label_8BF4:; return;
label_8BF6:; return;
label_8BF8:; return;
label_8BFA:; return;
label_8BFC:; return;
label_8BFF:; return;
label_8C01:; return;
label_8C03:; return;
label_8C05:; return;
label_8C07:; return;
label_8C09:; return;
label_8C0B:; return;
label_8C0D:; return;
label_8C0F:; return;
label_8C11:; return;
label_8C13:; return;
label_8C15:; return;
label_8C18:; return;
label_8C1A:; return;
label_8C1C:; return;
label_8C1E:; return;
label_8C20:; return;
label_8C22:; return;
label_8C24:; return;
label_8C26:; return;
label_8C28:; return;
label_8C2A:; return;
label_8C2C:; return;
label_8C2F:; return;
label_8C30:; return;
label_8C32:; return;
label_8C34:; return;
label_8C37:; return;
label_8C39:; return;
label_8C3C:; return;
label_8C3F:; return;
label_8C41:; return;
label_8C44:; return;
label_8C47:; return;
label_8C49:; return;
label_8C4B:; return;
label_8C4D:; return;
label_8C4F:; return;
label_8C51:; return;
label_8C53:; return;
label_8C55:; return;
label_8C58:; return;
label_8C5A:; return;
label_8C5C:; return;
label_8C5E:; return;
label_8C60:; return;
label_8C62:; return;
label_8C64:; return;
label_8C66:; return;
label_8C68:; return;
label_8C6B:; return;
label_8C6D:; return;
label_8C70:; return;
label_8C72:; return;
label_8C74:; return;
label_8C76:; return;
label_8C79:; return;
label_8C7C:; return;
label_8C7E:; return;
label_8C81:; return;
label_8C84:; return;
label_8C86:; return;
label_8C89:; return;
label_8C8C:; return;
label_8C8E:; return;
label_8C90:; return;
label_8C92:; return;
label_8C94:; return;
label_8C96:; return;
label_8C98:; return;
label_8C9A:; return;
label_8C9C:; return;
label_8C9E:; return;
label_8CA0:; return;
label_8CA2:; return;
label_8CA5:; return;
label_8CA8:; return;
label_8CAA:; return;
label_8CAC:; return;
label_8CB2:; return;
label_8CB5:; return;
label_8CB8:; return;
label_8CBA:; return;
label_8CBC:; return;
label_8CBE:; return;
label_8CC1:; return;
label_8CC4:; return;
label_8CC6:; return;
label_8CC8:; return;
label_8CCA:; return;
label_8CCC:; return;
label_8CCE:; return;
label_8CD1:; return;
label_8CD4:; return;
label_8CD6:; return;
label_8CD8:; return;
label_8CDA:; return;
label_8CDD:; return;
label_8CDF:; return;
label_8CE1:; return;
label_8CE3:; return;
label_8CE6:; return;
label_8CE9:; return;
label_8CEB:; return;
label_8CF1:; return;
label_8CF4:; return;
label_8CF6:; return;
label_8CF9:; return;
label_8CFC:; return;
label_8CFE:; return;
label_8D00:; return;
label_8D02:; return;
label_8D05:; return;
label_8D07:; return;
label_8D09:; return;
label_8D0B:; return;
label_8D0E:; return;
label_8D11:; return;
label_8D14:; return;
label_8D16:; return;
label_8D18:; return;
label_8D1E:; return;
label_8D21:; return;
label_8D23:; return;
label_8D26:; return;
label_8D29:; return;
label_8D2B:; return;
label_8D2D:; return;
label_8D2F:; return;
label_8D32:; return;
label_8D34:; return;
label_8D36:; return;
label_8D38:; return;
label_8D3B:; return;
label_8D3D:; return;
label_8D3F:; return;
label_8D42:; return;
label_8D44:; return;
label_8D46:; return;
label_8D48:; return;
label_8D4B:; return;
label_8D4D:; return;
label_8D4F:; return;
label_8D51:; return;
label_8D54:; return;
label_8D56:; return;
label_8D58:; return;
label_8D5B:; return;
label_8D5D:; return;
label_8D5F:; return;
label_8D61:; return;
label_8D63:; return;
label_8D66:; return;
label_8D69:; return;
label_8D6C:; return;
label_8D6E:; return;
label_8D70:; return;
label_8D72:; return;
label_8D75:; return;
label_8D77:; return;
label_8D79:; return;
label_8D7C:; return;
label_8D7F:; return;
label_8D82:; return;
label_8D85:; return;
label_8D88:; return;
label_8D89:; return;
label_8D8B:; return;
label_8D8D:; return;
label_8D8F:; return;
label_8D91:; return;
label_8D93:; return;
label_8D95:; return;
label_8D97:; return;
label_8D99:; return;
label_8D9B:; return;
label_8D9D:; return;
label_8D9F:; return;
label_8DA1:; return;
label_8DA3:; return;
label_8DA5:; return;
label_8DA7:; return;
label_8DA9:; return;
label_8DAB:; return;
label_8DAD:; return;
label_8DAF:; return;
label_8DB1:; return;
label_8DB4:; return;
label_8DB6:; return;
label_8DB8:; return;
label_8DBA:; return;
label_8DBC:; return;
label_8DBE:; return;
label_8DC0:; return;
label_8DC2:; return;
label_8DC4:; return;
label_8DC6:; return;
label_8DC8:; return;
label_8DCA:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD1:; return;
label_8DD3:; return;
label_8DD5:; return;
label_8DD7:; return;
label_8DD9:; return;
label_8DDB:; return;
label_8DDD:; return;
label_8DDF:; return;
label_8DE1:; return;
label_8DE4:; return;
label_8DE5:; return;
label_8DE7:; return;
label_8DE9:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEF:; return;
label_8DF1:; return;
label_8DF3:; return;
label_8DF5:; return;
label_8DF8:; return;
label_8DFA:; return;
label_8DFC:; return;
label_8DFE:; return;
label_8E01:; return;
label_8E03:; return;
label_8E05:; return;
label_8E07:; return;
label_8E0A:; return;
label_8E0C:; return;
label_8E0E:; return;
label_8E10:; return;
label_8E13:; return;
label_8E15:; return;
label_8E17:; return;
label_8E1A:; return;
label_8E1D:; return;
label_8E20:; return;
label_8E22:; return;
label_8E25:; return;
label_8E2B:; return;
label_8E31:; return;
label_8E37:; return;
label_8E38:; return;
label_8E3A:; return;
label_8E3C:; return;
label_8E3E:; return;
label_8E40:; return;
label_8E42:; return;
label_8E44:; return;
label_8E46:; return;
label_8E48:; return;
label_8E4B:; return;
label_8E4D:; return;
label_8E4F:; return;
label_8E51:; return;
label_8E54:; return;
label_8E56:; return;
label_8E58:; return;
label_8E5A:; return;
label_8E5D:; return;
label_8E5F:; return;
label_8E61:; return;
label_8E64:; return;
label_8E65:; return;
label_8E66:; return;
label_8E68:; return;
label_8E69:; return;
label_8E6A:; return;
label_8E6C:; return;
label_8E6D:; return;
label_8E6E:; return;
label_8E70:; return;
label_8E72:; return;
label_8E74:; return;
label_8E75:; return;
label_8E76:; return;
label_8E78:; return;
label_8E7B:; return;
label_8E7C:; return;
label_8E7D:; return;
label_8E7E:; return;
label_8E7F:; return;
label_8E80:; return;
label_8E82:; return;
label_8E84:; return;
label_8E85:; return;
label_8E86:; return;
label_8E87:; return;
label_8E88:; return;
label_8E8A:; return;
label_8E8C:; return;
label_8E8D:; return;
label_8E8F:; return;
label_8E90:; return;
label_8E92:; return;
label_8E94:; return;
label_8E95:; return;
label_8E96:; return;
label_8E99:; return;
label_8E9A:; return;
label_8E9D:; return;
label_8E9E:; return;
label_8EA1:; return;
label_8EA2:; return;
label_8EA5:; return;
label_8EA6:; return;
label_8EA9:; return;
label_8EAA:; return;
label_8EAD:; return;
label_8EAF:; return;
label_8EB0:; return;
label_8EB2:; return;
label_8EB4:; return;
label_8EB6:; return;
label_8EB8:; return;
label_8EBE:; return;
label_8EC0:; return;
label_8EC2:; return;
label_8EC4:; return;
label_8EC6:; return;
label_8EC8:; return;
label_8ECB:; return;
label_8ECC:; return;
label_8ECE:; return;
label_8ED1:; return;
label_8ED3:; return;
label_8ED5:; return;
label_8ED7:; return;
label_8ED9:; return;
label_8EDC:; return;
label_8EDE:; return;
label_8EE1:; return;
label_8EE4:; return;
label_8EE6:; return;
label_8EE9:; return;
label_8EEC:; return;
label_8EEE:; return;
label_8EF0:; return;
label_8EF2:; return;
label_8EF5:; return;
label_8EF7:; return;
label_8EF9:; return;
label_8EFB:; return;
label_8EFE:; return;
label_8F01:; return;
label_8F04:; return;
label_8F06:; return;
label_8F08:; return;
label_8F0A:; return;
label_8F0C:; return;
label_8F0F:; return;
label_8F11:; return;
label_8F13:; return;
label_8F15:; return;
label_8F18:; return;
label_8F1B:; return;
label_8F1D:; return;
label_8F1F:; return;
label_8F21:; return;
label_8F24:; return;
label_8F26:; return;
label_8F28:; return;
label_8F2A:; return;
label_8F2C:; return;
label_8F2E:; return;
label_8F30:; return;
label_8F32:; return;
label_8F34:; return;
label_8F37:; return;
label_8F3A:; return;
label_8F3C:; return;
label_8F3F:; return;
label_8F41:; return;
label_8F44:; return;
label_8F47:; return;
label_8F49:; return;
label_8F4B:; return;
label_8F4D:; return;
label_8F4F:; return;
label_8F51:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5B:; return;
label_8F5D:; return;
label_8F5F:; return;
label_8F61:; return;
label_8F63:; return;
label_8F66:; return;
label_8F68:; return;
label_8F69:; return;
label_8F6B:; return;
label_8F6D:; return;
label_8F6F:; return;
label_8F71:; return;
label_8F73:; return;
label_8F76:; return;
label_8F78:; return;
label_8F7A:; return;
label_8F7C:; return;
label_8F82:; return;
label_8F85:; return;
label_8F87:; return;
label_8F89:; return;
label_8F8C:; return;
label_8F8E:; return;
label_8F90:; return;
label_8F92:; return;
label_8F94:; return;
label_8F96:; return;
label_8F9C:; return;
label_8F9F:; return;
label_8FA2:; return;
label_8FA4:; return;
label_8FA6:; return;
label_8FA8:; return;
label_8FAB:; return;
label_8FAE:; return;
label_8FB1:; return;
label_8FB2:; return;
label_8FB4:; return;
label_8FB7:; return;
label_8FB9:; return;
label_8FBB:; return;
label_8FBE:; return;
label_8FC1:; return;
label_8FC4:; return;
label_8FC6:; return;
label_8FC8:; return;
label_8FCE:; return;
label_8FD1:; return;
label_8FD3:; return;
label_8FD6:; return;
label_8FD7:; return;
label_8FD9:; return;
label_8FDB:; return;
label_8FDD:; return;
label_8FDF:; return;
label_8FE1:; return;
label_8FE3:; return;
label_8FE6:; return;
label_8FE9:; return;
label_8FEB:; return;
label_8FED:; return;
label_8FEF:; return;
label_8FF2:; return;
label_8FF4:; return;
label_8FF6:; return;
label_8FF8:; return;
label_8FFB:; return;
label_8FFE:; return;
label_9000:; return;
label_9006:; return;
label_9009:; return;
label_900B:; return;
label_900E:; return;
label_9011:; return;
label_9013:; return;
label_9015:; return;
label_9017:; return;
label_901A:; return;
label_901C:; return;
label_901E:; return;
label_9020:; return;
label_9023:; return;
label_9026:; return;
label_9029:; return;
label_902B:; return;
label_902D:; return;
label_9033:; return;
label_9036:; return;
label_9038:; return;
label_903B:; return;
label_903E:; return;
label_9041:; return;
label_9043:; return;
label_9045:; return;
label_9047:; return;
label_9049:; return;
label_904B:; return;
label_904E:; return;
label_9051:; return;
label_9053:; return;
label_9055:; return;
label_9057:; return;
label_905A:; return;
label_905C:; return;
label_905E:; return;
label_9060:; return;
label_9063:; return;
label_9066:; return;
label_9069:; return;
label_906B:; return;
label_906D:; return;
label_906F:; return;
label_9072:; return;
label_9075:; return;
label_9077:; return;
label_9079:; return;
label_907B:; return;
label_907E:; return;
label_9080:; return;
label_9082:; return;
label_9084:; return;
label_9087:; return;
label_908A:; return;
label_908C:; return;
label_908E:; return;
label_9091:; return;
label_9094:; return;
label_9096:; return;
label_9098:; return;
label_909A:; return;
label_909C:; return;
label_909F:; return;
label_90A2:; return;
label_90A5:; return;
label_90A7:; return;
label_90A9:; return;
label_90AB:; return;
label_90AE:; return;
label_90B1:; return;
label_90B3:; return;
label_90B5:; return;
label_90B8:; return;
label_90BB:; return;
label_90BE:; return;
label_90C1:; return;
label_90C4:; return;
label_90C7:; return;
label_90CA:; return;
label_90CB:; return;
label_90CE:; return;
label_90D0:; return;
label_90D2:; return;
label_90D5:; return;
label_90D7:; return;
label_90D9:; return;
label_90DB:; return;
label_90DE:; return;
label_90E1:; return;
label_90E3:; return;
label_90E5:; return;
label_90E7:; return;
label_90EA:; return;
label_90EC:; return;
label_90EE:; return;
label_90F4:; return;
label_90F6:; return;
label_90F9:; return;
label_90FB:; return;
label_90FD:; return;
label_90FF:; return;
label_9101:; return;
label_9103:; return;
label_9105:; return;
label_9108:; return;
label_910A:; return;
label_910C:; return;
label_910E:; return;
label_9111:; return;
label_9113:; return;
label_9115:; return;
label_9117:; return;
label_9119:; return;
label_911B:; return;
label_9121:; return;
label_9123:; return;
label_9126:; return;
label_9128:; return;
label_912A:; return;
label_912C:; return;
label_912E:; return;
label_9131:; return;
label_9134:; return;
label_9137:; return;
label_9139:; return;
label_913B:; return;
label_913D:; return;
label_9140:; return;
label_9142:; return;
label_9144:; return;
label_9146:; return;
label_9148:; return;
label_914A:; return;
label_9150:; return;
label_9152:; return;
label_9154:; return;
label_9156:; return;
label_9159:; return;
label_915C:; return;
label_915E:; return;
label_9160:; return;
label_9162:; return;
label_9165:; return;
label_9167:; return;
label_9169:; return;
label_916B:; return;
label_916E:; return;
label_9170:; return;
label_9172:; return;
label_9174:; return;
label_9176:; return;
label_917C:; return;
label_917F:; return;
label_9181:; return;
label_9183:; return;
label_9185:; return;
label_9187:; return;
label_918A:; return;
label_918D:; return;
label_9190:; return;
label_9192:; return;
label_9194:; return;
label_9196:; return;
label_9199:; return;
label_919B:; return;
label_919D:; return;
label_919F:; return;
label_91A1:; return;
label_91A7:; return;
label_91AA:; return;
label_91AC:; return;
label_91AE:; return;
label_91B1:; return;
label_91B3:; return;
label_91B5:; return;
label_91B8:; return;
label_91BA:; return;
label_91BD:; return;
label_91C0:; return;
label_91C2:; return;
label_91C5:; return;
label_91C7:; return;
label_91C9:; return;
label_91CB:; return;
label_91CD:; return;
label_91CF:; return;
label_91D1:; return;
label_91D3:; return;
label_91D5:; return;
label_91D7:; return;
label_91D9:; return;
label_91DC:; return;
label_91DF:; return;
label_91E1:; return;
label_91E4:; return;
label_91E6:; return;
label_91E8:; return;
label_91EA:; return;
label_91EC:; return;
label_91EE:; return;
label_91F0:; return;
label_91F2:; return;
label_91F4:; return;
label_91F6:; return;
label_91F8:; return;
label_91FA:; return;
label_91FC:; return;
label_91FE:; return;
label_9204:; return;
label_9207:; return;
label_9209:; return;
label_920B:; return;
label_920D:; return;
label_920F:; return;
label_9211:; return;
label_9213:; return;
label_9215:; return;
label_9217:; return;
label_9219:; return;
label_921B:; return;
label_921D:; return;
label_9223:; return;
label_9225:; return;
label_9227:; return;
label_922A:; return;
label_922C:; return;
label_922F:; return;
label_9232:; return;
label_9234:; return;
label_9237:; return;
label_9239:; return;
label_923B:; return;
label_923D:; return;
label_923F:; return;
label_9241:; return;
label_9243:; return;
label_9245:; return;
label_9248:; return;
label_924B:; return;
label_924D:; return;
label_9250:; return;
label_9252:; return;
label_9254:; return;
label_9256:; return;
label_9258:; return;
label_925A:; return;
label_925C:; return;
label_925E:; return;
label_9260:; return;
label_9262:; return;
label_9264:; return;
label_926A:; return;
label_926D:; return;
label_926F:; return;
label_9271:; return;
label_9273:; return;
label_9275:; return;
label_9277:; return;
label_9279:; return;
label_927B:; return;
label_927D:; return;
label_927F:; return;
label_9281:; return;
label_9283:; return;
label_9289:; return;
label_928A:; return;
label_928C:; return;
label_928E:; return;
label_9290:; return;
label_9292:; return;
label_9294:; return;
label_9296:; return;
label_9298:; return;
label_929A:; return;
label_929C:; return;
label_929E:; return;
label_92A1:; return;
label_92A3:; return;
label_92A5:; return;
label_92A7:; return;
label_92A9:; return;
label_92AB:; return;
label_92AD:; return;
label_92AF:; return;
label_92B1:; return;
label_92B3:; return;
label_92B5:; return;
label_92B8:; return;
label_92B9:; return;
label_92BB:; return;
label_92BD:; return;
label_92BF:; return;
label_92C1:; return;
label_92C3:; return;
label_92C5:; return;
label_92C7:; return;
label_92C9:; return;
label_92CB:; return;
label_92CD:; return;
label_92CF:; return;
label_92D1:; return;
label_92D4:; return;
label_92D6:; return;
label_92D8:; return;
label_92DA:; return;
label_92DD:; return;
label_92DF:; return;
label_92E1:; return;
label_92E4:; return;
label_92E6:; return;
label_92E8:; return;
label_92EA:; return;
label_92EC:; return;
label_92EE:; return;
label_92F0:; return;
label_92F2:; return;
label_92F4:; return;
label_92F6:; return;
label_92F8:; return;
label_92FA:; return;
label_92FC:; return;
label_92FF:; return;
label_9301:; return;
label_9303:; return;
label_9305:; return;
label_9308:; return;
label_930A:; return;
label_930C:; return;
label_930F:; return;
label_9310:; return;
label_9312:; return;
label_9314:; return;
label_9316:; return;
label_9318:; return;
label_931A:; return;
label_931C:; return;
label_931E:; return;
label_9320:; return;
label_9323:; return;
label_9325:; return;
label_9327:; return;
label_9329:; return;
label_932C:; return;
label_932E:; return;
label_9330:; return;
label_9332:; return;
label_9335:; return;
label_9337:; return;
label_9339:; return;
label_933B:; return;
label_933E:; return;
label_9340:; return;
label_9342:; return;
label_9345:; return;
label_9348:; return;
label_934B:; return;
label_934D:; return;
label_9350:; return;
label_9356:; return;
label_935C:; return;
label_9362:; return;
label_9363:; return;
label_9365:; return;
label_9367:; return;
label_9369:; return;
label_936B:; return;
label_936D:; return;
label_936F:; return;
label_9371:; return;
label_9373:; return;
label_9376:; return;
label_9378:; return;
label_937A:; return;
label_937C:; return;
label_937F:; return;
label_9381:; return;
label_9383:; return;
label_9385:; return;
label_9388:; return;
label_938A:; return;
label_938C:; return;
label_938F:; return;
label_9390:; return;
label_9393:; return;
label_9395:; return;
label_9398:; return;
label_9399:; return;
label_939B:; return;
label_939E:; return;
label_939F:; return;
label_93A1:; return;
label_93A4:; return;
label_93A5:; return;
label_93A8:; return;
label_93AA:; return;
label_93AC:; return;
label_93AD:; return;
label_93AF:; return;
label_93B2:; return;
label_93B3:; return;
label_93B5:; return;
label_93B8:; return;
label_93B9:; return;
label_93BC:; return;
label_93BF:; return;
label_93C1:; return;
label_93C3:; return;
label_93C5:; return;
label_93C7:; return;
label_93C9:; return;
label_93CB:; return;
label_93CD:; return;
label_93D0:; return;
label_93D2:; return;
label_93D3:; return;
label_93D5:; return;
label_93D8:; return;
label_93D9:; return;
label_93DB:; return;
label_93DC:; return;
label_93DE:; return;
label_93E1:; return;
label_93E2:; return;
label_93E5:; return;
label_93E7:; return;
label_93EA:; return;
label_93EB:; return;
label_93ED:; return;
label_93F0:; return;
label_93F1:; return;
label_93F3:; return;
label_93F6:; return;
label_93F9:; return;
label_93FA:; return;
label_93FC:; return;
label_93FE:; return;
label_9400:; return;
label_9402:; return;
label_9404:; return;
label_9406:; return;
label_9408:; return;
label_940A:; return;
label_940C:; return;
label_940E:; return;
label_9411:; return;
label_9412:; return;
label_9414:; return;
label_9416:; return;
label_9418:; return;
label_941A:; return;
label_941C:; return;
label_941E:; return;
label_9420:; return;
label_9422:; return;
label_9424:; return;
label_9426:; return;
label_9429:; return;
label_942A:; return;
label_942C:; return;
label_942E:; return;
label_9430:; return;
label_9432:; return;
label_9434:; return;
label_9436:; return;
label_9438:; return;
label_943A:; return;
label_943C:; return;
label_943E:; return;
label_9441:; return;
label_9442:; return;
label_9444:; return;
label_9446:; return;
label_9448:; return;
label_944A:; return;
label_944C:; return;
label_944E:; return;
label_9450:; return;
label_9452:; return;
label_9454:; return;
label_9456:; return;
label_9459:; return;
label_945A:; return;
label_945B:; return;
label_945C:; return;
label_945D:; return;
label_9460:; return;
label_9461:; return;
label_9464:; return;
label_9465:; return;
label_9468:; return;
label_9469:; return;
label_946C:; return;
label_946D:; return;
label_9470:; return;
label_9472:; return;
label_9474:; return;
label_9476:; return;
label_9478:; return;
label_947A:; return;
label_947B:; return;
label_947D:; return;
label_947F:; return;
label_9481:; return;
label_9483:; return;
label_9485:; return;
label_9487:; return;
label_9489:; return;
label_948B:; return;
label_948D:; return;
label_9490:; return;
label_9491:; return;
label_9494:; return;
label_9496:; return;
label_9498:; return;
label_949A:; return;
label_949C:; return;
label_949E:; return;
label_94A0:; return;
label_94A3:; return;
label_94A6:; return;
label_94A8:; return;
label_94AA:; return;
label_94AC:; return;
label_94AF:; return;
label_94B1:; return;
label_94B3:; return;
label_94B5:; return;
label_94B8:; return;
label_94BE:; return;
label_94C1:; return;
label_94C3:; return;
label_94C5:; return;
label_94C8:; return;
label_94CA:; return;
label_94CC:; return;
label_94CE:; return;
label_94D1:; return;
label_94D3:; return;
label_94D5:; return;
label_94D7:; return;
label_94DA:; return;
label_94DD:; return;
label_94DF:; return;
label_94E1:; return;
label_94E7:; return;
label_94E9:; return;
label_94EC:; return;
label_94EF:; return;
label_94F1:; return;
label_94F3:; return;
label_94F5:; return;
label_94F8:; return;
label_94FA:; return;
label_94FC:; return;
label_94FE:; return;
label_9501:; return;
label_9504:; return;
label_9506:; return;
label_9508:; return;
label_950E:; return;
label_9510:; return;
label_9513:; return;
label_9516:; return;
label_9518:; return;
label_951A:; return;
label_951D:; return;
label_9520:; return;
label_9523:; return;
label_9524:; return;
label_9526:; return;
label_9527:; return;
label_9529:; return;
label_952B:; return;
label_952E:; return;
label_9531:; return;
label_9534:; return;
label_9535:; return;
label_9537:; return;
label_953A:; return;
label_953C:; return;
label_953E:; return;
label_9540:; return;
label_9543:; return;
label_9546:; return;
label_9547:; return;
label_954A:; return;
label_954D:; return;
label_9550:; return;
label_9553:; return;
label_9555:; return;
label_9558:; return;
label_955B:; return;
label_955E:; return;
label_9560:; return;
label_9563:; return;
label_9566:; return;
label_9569:; return;
label_956C:; return;
label_956E:; return;
label_9571:; return;
label_9574:; return;
label_9577:; return;
label_9579:; return;
label_957C:; return;
label_957F:; return;
label_9582:; return;
label_9584:; return;
label_9587:; return;
label_958A:; return;
label_958C:; return;
label_958F:; return;
label_9592:; return;
label_9593:; return;
label_9596:; return;
label_9597:; return;
label_9599:; return;
label_959B:; return;
label_959D:; return;
label_959F:; return;
label_95A1:; return;
label_95A3:; return;
label_95A6:; return;
label_95A7:; return;
label_95A9:; return;
label_95AB:; return;
label_95AD:; return;
label_95AF:; return;
label_95B1:; return;
label_95B3:; return;
label_95B6:; return;
label_95B7:; return;
label_95B9:; return;
label_95BB:; return;
label_95BD:; return;
label_95BF:; return;
label_95C1:; return;
label_95C3:; return;
label_95C6:; return;
label_95C7:; return;
label_95C9:; return;
label_95CB:; return;
label_95CD:; return;
label_95CF:; return;
label_95D1:; return;
label_95D3:; return;
label_95D6:; return;
label_95D7:; return;
label_95D9:; return;
label_95DB:; return;
label_95DD:; return;
label_95DF:; return;
label_95E1:; return;
label_95E3:; return;
label_95E6:; return;
label_95E7:; return;
label_95E9:; return;
label_95EB:; return;
label_95ED:; return;
label_95EF:; return;
label_95F1:; return;
label_95F3:; return;
label_95F6:; return;
label_95F7:; return;
label_95F9:; return;
label_95FB:; return;
label_95FD:; return;
label_95FF:; return;
label_9601:; return;
label_9603:; return;
label_9606:; return;
label_9608:; return;
label_960B:; return;
label_960D:; return;
label_9610:; return;
label_9612:; return;
label_9615:; return;
label_9617:; return;
label_961A:; return;
label_961C:; return;
label_961F:; return;
label_9621:; return;
label_9624:; return;
label_9626:; return;
label_9629:; return;
label_962B:; return;
label_962E:; return;
label_9630:; return;
label_9633:; return;
label_9634:; return;
label_9637:; return;
label_9639:; return;
label_963C:; return;
label_963F:; return;
label_9642:; return;
label_9644:; return;
label_9647:; return;
label_9649:; return;
label_964B:; return;
label_964D:; return;
label_964F:; return;
label_9651:; return;
label_9653:; return;
label_9655:; return;
label_9658:; return;
label_965A:; return;
label_965C:; return;
label_965E:; return;
label_9660:; return;
label_9662:; return;
label_9663:; return;
label_9665:; return;
label_9667:; return;
label_9669:; return;
label_966B:; return;
label_966C:; return;
label_966E:; return;
label_9670:; return;
label_9672:; return;
label_9674:; return;
label_9676:; return;
label_9678:; return;
label_967A:; return;
label_967C:; return;
label_967F:; return;
label_9681:; return;
label_9683:; return;
label_9685:; return;
label_9687:; return;
label_9689:; return;
label_968A:; return;
label_968C:; return;
label_968E:; return;
label_9690:; return;
label_9692:; return;
label_9693:; return;
label_9695:; return;
label_9697:; return;
label_969A:; return;
label_969C:; return;
label_969F:; return;
label_96A1:; return;
label_96A4:; return;
label_96A6:; return;
label_96A9:; return;
label_96AB:; return;
label_96AE:; return;
label_96B0:; return;
label_96B3:; return;
label_96B5:; return;
label_96B8:; return;
label_96BA:; return;
label_96BD:; return;
label_96BE:; return;
label_96C1:; return;
label_96C3:; return;
label_96C6:; return;
label_96C8:; return;
label_96CB:; return;
label_96CD:; return;
label_96D0:; return;
label_96D3:; return;
label_96D6:; return;
label_96D8:; return;
label_96DB:; return;
label_96DD:; return;
label_96E0:; return;
label_96E1:; return;
label_96E4:; return;
label_96E6:; return;
label_96E8:; return;
label_96EA:; return;
label_96EC:; return;
label_96EE:; return;
label_96F0:; return;
label_96F2:; return;
label_96F4:; return;
label_96F6:; return;
label_96F9:; return;
label_96FB:; return;
label_96FD:; return;
label_96FF:; return;
label_9701:; return;
label_9703:; return;
label_9705:; return;
label_9707:; return;
label_9709:; return;
label_970C:; return;
label_970F:; return;
label_9712:; return;
label_9714:; return;
label_9716:; return;
label_9718:; return;
label_971A:; return;
label_971C:; return;
label_971F:; return;
label_9721:; return;
label_9723:; return;
label_9725:; return;
label_9727:; return;
label_9729:; return;
label_972A:; return;
label_972C:; return;
label_972E:; return;
label_9730:; return;
label_9732:; return;
label_9733:; return;
label_9735:; return;
label_9737:; return;
label_973A:; return;
label_973C:; return;
label_973E:; return;
label_9740:; return;
label_9742:; return;
label_9744:; return;
label_9747:; return;
label_9749:; return;
label_974B:; return;
label_974D:; return;
label_974F:; return;
label_9751:; return;
label_9752:; return;
label_9754:; return;
label_9756:; return;
label_9758:; return;
label_975A:; return;
label_975B:; return;
label_975D:; return;
label_975F:; return;
label_9762:; return;
label_9764:; return;
label_9767:; return;
label_9769:; return;
label_976C:; return;
label_976E:; return;
label_9771:; return;
label_9773:; return;
label_9776:; return;
label_9778:; return;
label_977B:; return;
label_977D:; return;
label_9780:; return;
label_9782:; return;
label_9785:; return;
label_9786:; return;
label_9788:; return;
label_978A:; return;
label_978C:; return;
label_978E:; return;
label_9790:; return;
label_9792:; return;
label_9794:; return;
label_9796:; return;
label_9799:; return;
label_979B:; return;
label_979D:; return;
label_979F:; return;
label_97A1:; return;
label_97A3:; return;
label_97A5:; return;
label_97A7:; return;
label_97A9:; return;
label_97AC:; return;
label_97AE:; return;
label_97B0:; return;
label_97B2:; return;
label_97B4:; return;
label_97B6:; return;
label_97B8:; return;
label_97BA:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C3:; return;
label_97C5:; return;
label_97C7:; return;
label_97C9:; return;
label_97CB:; return;
label_97CD:; return;
label_97CF:; return;
label_97D2:; return;
label_97D4:; return;
label_97D6:; return;
label_97D8:; return;
label_97DA:; return;
label_97DC:; return;
label_97DE:; return;
label_97E0:; return;
label_97E2:; return;
label_97E5:; return;
label_97E7:; return;
label_97E9:; return;
label_97EB:; return;
label_97ED:; return;
label_97EF:; return;
label_97F1:; return;
label_97F3:; return;
label_97F5:; return;
label_97F8:; return;
label_97F9:; return;
label_97FC:; return;
label_97FE:; return;
label_9801:; return;
label_9802:; return;
label_9804:; return;
label_9807:; return;
label_9808:; return;
label_980A:; return;
label_980D:; return;
label_980E:; return;
label_9810:; return;
label_9813:; return;
label_9814:; return;
label_9816:; return;
label_9818:; return;
label_981A:; return;
label_981D:; return;
label_9820:; return;
label_9821:; return;
label_9823:; return;
label_9825:; return;
label_9827:; return;
label_9829:; return;
label_982C:; return;
label_982D:; return;
label_982F:; return;
label_9831:; return;
label_9833:; return;
label_9835:; return;
label_9838:; return;
label_9839:; return;
label_983C:; return;
label_983E:; return;
label_9841:; return;
label_9842:; return;
label_9844:; return;
label_9847:; return;
label_9848:; return;
label_984A:; return;
label_984D:; return;
label_984E:; return;
label_9850:; return;
label_9852:; return;
label_9855:; return;
label_9856:; return;
label_9857:; return;
label_9859:; return;
label_985B:; return;
label_985D:; return;
label_9860:; return;
label_9861:; return;
label_9863:; return;
label_9866:; return;
label_9867:; return;
label_9869:; return;
label_986C:; return;
label_986D:; return;
label_986F:; return;
label_9872:; return;
label_9873:; return;
label_9874:; return;
label_9876:; return;
label_9878:; return;
label_987A:; return;
label_987D:; return;
label_9880:; return;
label_9881:; return;
label_9884:; return;
label_9886:; return;
label_9889:; return;
label_988B:; return;
label_988D:; return;
label_988E:; return;
label_9891:; return;
label_9893:; return;
label_9896:; return;
label_9899:; return;
label_989C:; return;
label_989F:; return;
label_98A0:; return;
label_98A2:; return;
label_98A4:; return;
label_98A6:; return;
label_98A9:; return;
label_98AB:; return;
label_98AE:; return;
label_98B1:; return;
label_98B4:; return;
label_98B5:; return;
label_98B7:; return;
label_98BA:; return;
label_98BC:; return;
label_98BF:; return;
label_98C1:; return;
label_98C4:; return;
label_98C6:; return;
label_98C9:; return;
label_98CB:; return;
label_98CE:; return;
label_98D0:; return;
label_98D3:; return;
label_98D5:; return;
label_98D8:; return;
label_98DA:; return;
label_98DD:; return;
label_98DF:; return;
label_98E2:; return;
label_98E4:; return;
label_98E7:; return;
label_98E9:; return;
label_98EC:; return;
label_98EE:; return;
label_98F1:; return;
label_98F3:; return;
label_98F6:; return;
label_98F8:; return;
label_98FB:; return;
label_98FD:; return;
label_9900:; return;
label_9901:; return;
label_9903:; return;
label_9906:; return;
label_9908:; return;
label_990B:; return;
label_990D:; return;
label_9910:; return;
label_9912:; return;
label_9915:; return;
label_9917:; return;
label_991A:; return;
label_991C:; return;
label_991F:; return;
label_9921:; return;
label_9924:; return;
label_9926:; return;
label_9929:; return;
label_992B:; return;
label_992E:; return;
label_9930:; return;
label_9933:; return;
label_9935:; return;
label_9938:; return;
label_993A:; return;
label_993D:; return;
label_993F:; return;
label_9942:; return;
label_9944:; return;
label_9947:; return;
label_9949:; return;
label_994C:; return;
label_994D:; return;
label_994F:; return;
label_9951:; return;
label_9953:; return;
label_9955:; return;
label_9957:; return;
label_9959:; return;
label_995C:; return;
label_995D:; return;
label_995F:; return;
label_9961:; return;
label_9963:; return;
label_9965:; return;
label_9968:; return;
label_9969:; return;
label_996B:; return;
label_996E:; return;
label_996F:; return;
label_9971:; return;
label_9974:; return;
label_9975:; return;
label_9977:; return;
label_997A:; return;
label_997D:; return;
label_997E:; return;
label_997F:; return;
label_9981:; return;
label_9983:; return;
label_9985:; return;
label_9988:; return;
label_9989:; return;
label_998B:; return;
label_998D:; return;
label_998F:; return;
label_9991:; return;
label_9994:; return;
label_9996:; return;
label_9999:; return;
label_999B:; return;
label_999E:; return;
label_999F:; return;
label_99A1:; return;
label_99A3:; return;
label_99A6:; return;
label_99A7:; return;
label_99A9:; return;
label_99AB:; return;
label_99AC:; return;
label_99AE:; return;
label_99AF:; return;
label_99B1:; return;
label_99B3:; return;
label_99B5:; return;
label_99B7:; return;
label_99B9:; return;
label_99BC:; return;
label_99BE:; return;
label_99C1:; return;
label_99C3:; return;
label_99C6:; return;
label_99C8:; return;
label_99CB:; return;
label_99CC:; return;
label_99CE:; return;
label_99D0:; return;
label_99D1:; return;
label_99D3:; return;
label_99D5:; return;
label_99D7:; return;
label_99D9:; return;
label_99DC:; return;
label_99DE:; return;
label_99E1:; return;
label_99E3:; return;
label_99E6:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99EE:; return;
label_99EF:; return;
label_99F1:; return;
label_99F3:; return;
label_99F4:; return;
label_99F6:; return;
label_99F7:; return;
label_99F9:; return;
label_99FB:; return;
label_99FD:; return;
label_99FF:; return;
label_9A02:; return;
label_9A04:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0C:; return;
label_9A0D:; return;
label_9A0F:; return;
label_9A11:; return;
label_9A14:; return;
label_9A15:; return;
label_9A17:; return;
label_9A19:; return;
label_9A1A:; return;
label_9A1C:; return;
label_9A1D:; return;
label_9A1F:; return;
label_9A21:; return;
label_9A23:; return;
label_9A25:; return;
label_9A28:; return;
label_9A29:; return;
label_9A2B:; return;
label_9A2D:; return;
label_9A2F:; return;
label_9A31:; return;
label_9A34:; return;
label_9A35:; return;
label_9A37:; return;
label_9A39:; return;
label_9A3C:; return;
label_9A3D:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A43:; return;
label_9A45:; return;
label_9A47:; return;
label_9A49:; return;
label_9A4B:; return;
label_9A4C:; return;
label_9A4F:; return;
label_9A50:; return;
label_9A53:; return;
label_9A55:; return;
label_9A57:; return;
label_9A59:; return;
label_9A5B:; return;
label_9A5C:; return;
label_9A5F:; return;
label_9A61:; return;
label_9A63:; return;
label_9A65:; return;
label_9A66:; return;
label_9A68:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A73:; return;
label_9A75:; return;
label_9A77:; return;
label_9A79:; return;
label_9A7C:; return;
label_9A7F:; return;
label_9A81:; return;
label_9A83:; return;
label_9A84:; return;
label_9A85:; return;
label_9A87:; return;
label_9A88:; return;
label_9A89:; return;
label_9A8B:; return;
label_9A8D:; return;
label_9A8F:; return;
label_9A90:; return;
label_9A91:; return;
label_9A93:; return;
label_9A94:; return;
label_9A95:; return;
label_9A96:; return;
label_9A97:; return;
label_9A98:; return;
label_9A99:; return;
label_9A9A:; return;
label_9A9B:; return;
label_9A9D:; return;
label_9A9F:; return;
label_9AA0:; return;
label_9AA2:; return;
label_9AA3:; return;
label_9AA4:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA8:; return;
label_9AAA:; return;
label_9AAB:; return;
label_9AAD:; return;
label_9AB0:; return;
label_9AB1:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB8:; return;
label_9AB9:; return;
label_9ABC:; return;
label_9ABD:; return;
label_9AC0:; return;
label_9AC2:; return;
label_9AC4:; return;
label_9AC6:; return;
label_9AC8:; return;
label_9AC9:; return;
label_9ACB:; return;
label_9ACC:; return;
label_9ACE:; return;
label_9AD0:; return;
label_9AD1:; return;
label_9AD2:; return;
label_9AD4:; return;
label_9AD6:; return;
label_9AD8:; return;
label_9AD9:; return;
label_9ADB:; return;
label_9ADD:; return;
label_9ADF:; return;
label_9AE1:; return;
label_9AE3:; return;
label_9AE5:; return;
label_9AE7:; return;
label_9AE9:; return;
label_9AEA:; return;
label_9AEB:; return;
label_9AED:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF1:; return;
label_9AF4:; return;
label_9AF7:; return;
label_9AF8:; return;
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
    maybe_trigger_vblank(2);
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

void func_B1DD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1DD_b3");
#endif
label_B1DD:;
    /* $B1DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_B1DF:;
    /* $B1DF: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B1E1:;
    /* $B1E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1E3:;
    /* $B1E3: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1E5:;
    /* $B1E5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1E8:;
    /* $B1E8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AFBB_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFBB_b3");
#endif
label_AFBB:;
    /* $AFBB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AFBD:;
    /* $AFBD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_AFBF:;
    /* $AFBF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AFC4;
label_AFC1:;
    /* $AFC1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFD0, 3); return;
label_AFC4:;
    /* $AFC4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFC5:;
    /* $AFC5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_AFCD;
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

void func_B1C5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1C5_b3");
#endif
label_B1C5:;
    /* $B1C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x94; FLAG_NZ(g_cpu.A);
label_B1C7:;
    /* $B1C7: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
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

void func_B1D1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1D1_b3");
#endif
label_B1D1:;
    /* $B1D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_B1D3:;
    /* $B1D3: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B1D5:;
    /* $B1D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1D7:;
    /* $B1D7: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1D9:;
    /* $B1D9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1DC:;
    /* $B1DC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1B9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1B9_b3");
#endif
label_B1B9:;
    /* $B1B9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_B1BB:;
    /* $B1BB: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B1BD:;
    /* $B1BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1BF:;
    /* $B1BF: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1C1:;
    /* $B1C1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1C4:;
    /* $B1C4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B195_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B195_b3");
#endif
label_B195:;
    /* $B195: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_B197:;
    /* $B197: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B199:;
    /* $B199: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B19B:;
    /* $B19B: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B19D:;
    /* $B19D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1A0:;
    /* $B1A0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AFF2_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFF2_b3");
#endif
label_AFF2:;
    /* $AFF2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AFF4:;
    /* $AFF4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_AFF6:;
    /* $AFF6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AFFB;
label_AFF8:;
    /* $AFF8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB009, 3); return;
label_AFFB:;
    /* $AFFB: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFFC:;
    /* $AFFC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFFD:;
    /* $AFFD: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFFE:;
    /* $AFFE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_B006;
label_B000:;
    /* $B000: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB189, 3);
label_B003:;
    /* $B003: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB009, 3); return;
label_B006:;
    /* $B006: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1A1, 3);
label_B009:;
    /* $B009: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1AD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1AD_b3");
#endif
label_B1AD:;
    /* $B1AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_B1AF:;
    /* $B1AF: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
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

void func_B189_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B189_b3");
#endif
label_B189:;
    /* $B189: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x51; FLAG_NZ(g_cpu.A);
label_B18B:;
    /* $B18B: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B18D:;
    /* $B18D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B18F:;
    /* $B18F: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B191:;
    /* $B191: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B194:;
    /* $B194: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1A1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1A1_b3");
#endif
label_B1A1:;
    /* $B1A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6B; FLAG_NZ(g_cpu.A);
label_B1A3:;
    /* $B1A3: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B1A5:;
    /* $B1A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1A7:;
    /* $B1A7: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1A9:;
    /* $B1A9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1AC:;
    /* $B1AC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B16C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B16C_b3");
#endif
label_B16C:;
    /* $B16C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_B16E:;
    /* $B16E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_B170:;
    /* $B170: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B17D;
label_B172:;
    /* $B172: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_B174:;
    /* $B174: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B176:;
    /* $B176: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B178:;
    /* $B178: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B17A:;
    /* $B17A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB185, 3); return;
label_B17D:;
    /* $B17D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x46; FLAG_NZ(g_cpu.A);
label_B17F:;
    /* $B17F: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B181:;
    /* $B181: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B183:;
    /* $B183: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B185:;
    /* $B185: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B188:;
    /* $B188: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B14F_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B14F_b3");
#endif
label_B14F:;
    /* $B14F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_B151:;
    /* $B151: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_B153:;
    /* $B153: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B160;
label_B155:;
    /* $B155: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x25; FLAG_NZ(g_cpu.A);
label_B157:;
    /* $B157: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B159:;
    /* $B159: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B15B:;
    /* $B15B: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B15D:;
    /* $B15D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB168, 3); return;
label_B160:;
    /* $B160: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_B162:;
    /* $B162: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B164:;
    /* $B164: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B166:;
    /* $B166: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B168:;
    /* $B168: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B16B:;
    /* $B16B: 60 */ maybe_trigger_vblank(6); 
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

void func_A86D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A86D_b3");
#endif
label_A86D:;
    /* $A86D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A86F:;
    /* $A86F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A871:;
    /* $A871: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A873:;
    /* $A873: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A874:;
    /* $A874: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A875:;
    /* $A875: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A876:;
    /* $A876: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A877:;
    /* $A877: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A878:;
    /* $A878: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A87A:;
    /* $A87A: 9D */ maybe_trigger_vblank(5); nes_write((0x8D8C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A87D:;
    /* $A87D: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A880:;
    /* $A880: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8C, g_cpu.A);
label_A883:;
    /* $A883: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A886:;
    /* $A886: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8C, g_cpu.A);
label_A889:;
    /* $A889: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A88C:;
    /* $A88C: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8C, g_cpu.A);
label_A88F:;
    /* $A88F: 8C */ maybe_trigger_vblank(4); nes_write(0x9C8D, g_cpu.Y);
label_A892:;
    /* $A892: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_A895:;
    /* $A895: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A896:;
    /* $A896: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A897:;
    /* $A897: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A898:;
    /* $A898: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A899:;
    /* $A899: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A89A:;
    /* $A89A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x084D), 3); return; }
label_A89C:;
    /* $A89C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A89E:;
    /* $A89E: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A0:;
    /* $A8A0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A2:;
    /* $A8A2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A4:;
    /* $A8A4: 96 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A8A6:;
    /* $A8A6: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A8A8:;
    /* $A8A8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AA:;
    /* $A8AA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AC:;
    /* $A8AC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AE:;
    /* $A8AE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8B0:;
    /* $A8B0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8B2:;
    /* $A8B2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B3:;
    /* $A8B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B4:;
    /* $A8B4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B5:;
    /* $A8B5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B6:;
    /* $A8B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B7:;
    /* $A8B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B8:;
    /* $A8B8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B9:;
    /* $A8B9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8BA:;
    /* $A8BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A86D;
    }
label_A8BC:;
    /* $A8BC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8BE:;
    /* $A8BE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C0:;
    /* $A8C0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C2:;
    /* $A8C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C4:;
    /* $A8C4: 99 */ maybe_trigger_vblank(5); nes_write((0x0000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8C7:;
    /* $A8C7: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A8C8:;
    /* $A8C8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CA:;
    /* $A8CA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CC:;
    /* $A8CC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CE:;
    /* $A8CE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D0:;
    /* $A8D0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D2:;
    /* $A8D2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D3:;
    /* $A8D3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D4:;
    /* $A8D4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D5:;
    /* $A8D5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D6:;
    /* $A8D6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D7:;
    /* $A8D7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D8:;
    /* $A8D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D9:;
    /* $A8D9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8DA:;
    /* $A8DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x088D), 3); return; }
label_A8DC:;
    /* $A8DC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8DE:;
    /* $A8DE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E0:;
    /* $A8E0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E2:;
    /* $A8E2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E4:;
    /* $A8E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A8E6:;
    /* $A8E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E6); return;
}

void func_A88D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A88D_b3");
#endif
label_A88D:;
    /* $A88D: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A890:;
    /* $A890: 8D */ maybe_trigger_vblank(4); nes_write(0x9B9C, g_cpu.A);
label_A893:;
    /* $A893: 8E */ maybe_trigger_vblank(4); nes_write(0x0202, g_cpu.X);
label_A896:;
    /* $A896: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A897:;
    /* $A897: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A898:;
    /* $A898: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A899:;
    /* $A899: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A89A:;
    /* $A89A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x084D), 3); return; }
label_A89C:;
    /* $A89C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A89E:;
    /* $A89E: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A0:;
    /* $A8A0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A2:;
    /* $A8A2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A4:;
    /* $A8A4: 96 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A8A6:;
    /* $A8A6: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A8A8:;
    /* $A8A8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AA:;
    /* $A8AA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AC:;
    /* $A8AC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AE:;
    /* $A8AE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8B0:;
    /* $A8B0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8B2:;
    /* $A8B2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B3:;
    /* $A8B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B4:;
    /* $A8B4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B5:;
    /* $A8B5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B6:;
    /* $A8B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B7:;
    /* $A8B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B8:;
    /* $A8B8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B9:;
    /* $A8B9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8BA:;
    /* $A8BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x086D), 3); return; }
label_A8BC:;
    /* $A8BC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8BE:;
    /* $A8BE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C0:;
    /* $A8C0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C2:;
    /* $A8C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C4:;
    /* $A8C4: 99 */ maybe_trigger_vblank(5); nes_write((0x0000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8C7:;
    /* $A8C7: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A8C8:;
    /* $A8C8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CA:;
    /* $A8CA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CC:;
    /* $A8CC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CE:;
    /* $A8CE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D0:;
    /* $A8D0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D2:;
    /* $A8D2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D3:;
    /* $A8D3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D4:;
    /* $A8D4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D5:;
    /* $A8D5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D6:;
    /* $A8D6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D7:;
    /* $A8D7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D8:;
    /* $A8D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D9:;
    /* $A8D9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8DA:;
    /* $A8DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A88D;
    }
label_A8DC:;
    /* $A8DC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8DE:;
    /* $A8DE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E0:;
    /* $A8E0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E2:;
    /* $A8E2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E4:;
    /* $A8E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A8E6:;
    /* $A8E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E6); return;
}

void func_B185_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B185_b3");
#endif
label_B185:;
    /* $B185: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B188:;
    /* $B188: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B168_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B168_b3");
#endif
label_B168:;
    /* $B168: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B16B:;
    /* $B16B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_A84D_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AD60;
        case 2: goto label_B035;
        case 3: goto label_B069;
        case 4: goto label_B083;
        case 5: goto label_B0C8;
        case 6: goto label_AFD0;
        case 7: goto label_B009;
        case 8: goto label_AF9B;
        case 9: goto label_A9E6;
        case 10: goto label_A9E2;
        case 11: goto label_A902;
        case 12: goto label_A904;
        case 13: goto label_A900;
        case 14: goto label_A960;
        case 15: goto label_AFAF;
        case 16: goto label_B1B1;
        case 17: goto label_B1C9;
        case 18: goto label_B2C9;
        case 19: goto label_B3C9;
        case 20: goto label_A9AE;
        case 21: goto label_B0AD;
    }
label_A84D:;
    /* $A84D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A84F:;
    /* $A84F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A851:;
    /* $A851: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A853:;
    /* $A853: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A854:;
    /* $A854: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A855:;
    /* $A855: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A856:;
    /* $A856: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A857:;
    /* $A857: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A858:;
    /* $A858: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A85A:;
    /* $A85A: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address_tail((uint16_t)(g_code_window_base | 0x08CD), 3); return; }
label_A85C:;
    /* $A85C: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_A85D:;
    /* $A85D: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x74) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A85F:;
    /* $A85F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A861:;
    /* $A861: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A863:;
    /* $A863: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A865:;
    /* $A865: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A867:;
    /* $A867: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A869:;
    /* $A869: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A86B:;
    /* $A86B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A86D:;
    /* $A86D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A86F:;
    /* $A86F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A871:;
    /* $A871: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A873:;
    /* $A873: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A874:;
    /* $A874: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A875:;
    /* $A875: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A876:;
    /* $A876: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A877:;
    /* $A877: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A878:;
    /* $A878: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A87A:;
    /* $A87A: 9D */ maybe_trigger_vblank(5); nes_write((0x8D8C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A87D:;
    /* $A87D: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A880:;
    /* $A880: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8C, g_cpu.A);
label_A883:;
    /* $A883: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A886:;
    /* $A886: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8C, g_cpu.A);
label_A889:;
    /* $A889: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A88C:;
    /* $A88C: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8C, g_cpu.A);
label_A88F:;
    /* $A88F: 8C */ maybe_trigger_vblank(4); nes_write(0x9C8D, g_cpu.Y);
label_A892:;
    /* $A892: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_A895:;
    /* $A895: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A896:;
    /* $A896: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A897:;
    /* $A897: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A898:;
    /* $A898: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A899:;
    /* $A899: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A89A:;
    /* $A89A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A84D;
    }
label_A89C:;
    /* $A89C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A89E:;
    /* $A89E: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A0:;
    /* $A8A0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A2:;
    /* $A8A2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A4:;
    /* $A8A4: 96 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A8A6:;
    /* $A8A6: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A8A8:;
    /* $A8A8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AA:;
    /* $A8AA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AC:;
    /* $A8AC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AE:;
    /* $A8AE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8B0:;
    /* $A8B0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8B2:;
    /* $A8B2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B3:;
    /* $A8B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B4:;
    /* $A8B4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B5:;
    /* $A8B5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B6:;
    /* $A8B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B7:;
    /* $A8B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B8:;
    /* $A8B8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B9:;
    /* $A8B9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8BA:;
    /* $A8BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A86D;
    }
label_A8BC:;
    /* $A8BC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8BE:;
    /* $A8BE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C0:;
    /* $A8C0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C2:;
    /* $A8C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C4:;
    /* $A8C4: 99 */ maybe_trigger_vblank(5); nes_write((0x0000 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8C7:;
    /* $A8C7: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A8C8:;
    /* $A8C8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CA:;
    /* $A8CA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CC:;
    /* $A8CC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CE:;
    /* $A8CE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D0:;
    /* $A8D0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D2:;
    /* $A8D2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D3:;
    /* $A8D3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D4:;
    /* $A8D4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D5:;
    /* $A8D5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D6:;
    /* $A8D6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D7:;
    /* $A8D7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D8:;
    /* $A8D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D9:;
    /* $A8D9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8DA:;
    /* $A8DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x088D), 3); return; }
label_A8DC:;
    /* $A8DC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8DE:;
    /* $A8DE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E0:;
    /* $A8E0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E2:;
    /* $A8E2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E4:;
    /* $A8E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A8E6:;
    /* $A8E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E6); return;
label_A8E7:;
    /* $A8E7: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xB1); FLAG_NZ(g_cpu.X);
label_A8E9:;
    /* $A8E9: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8EB:;
    /* $A8EB: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8ED:;
    /* $A8ED: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8EF:;
    /* $A8EF: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8F1:;
    /* $A8F1: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A8F2:;
    /* $A8F2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8F3:;
    /* $A8F3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8F4:;
    /* $A8F4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8F5:;
    /* $A8F5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8F6:;
    /* $A8F6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8F7:;
    /* $A8F7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8F8:;
    /* $A8F8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8F9:;
    /* $A8F9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8FA:;
    /* $A8FA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x08AD), 3); return; }
label_A8FC:;
    /* $A8FC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8FE:;
    /* $A8FE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A900:;
    /* $A900: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A902:;
    /* $A902: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A904:;
    /* $A904: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A906:;
    /* $A906: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA906); return;
label_A907:;
    /* $A907: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xB1); FLAG_NZ(g_cpu.X);
label_A909:;
    /* $A909: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A90B:;
    /* $A90B: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A90D:;
    /* $A90D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A90F:;
    /* $A90F: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A912:;
    /* $A912: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A913:;
    /* $A913: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A914:;
    /* $A914: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A915:;
    /* $A915: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A916:;
    /* $A916: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A917:;
    /* $A917: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A918:;
    /* $A918: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A919:;
    /* $A919: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A91A:;
    /* $A91A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x08CD), 3); return; }
label_A91C:;
    /* $A91C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A91E:;
    /* $A91E: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A922:;
    /* $A922: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A926:;
    /* $A926: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA926); return;
label_A927:;
    /* $A927: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xB1); FLAG_NZ(g_cpu.X);
label_A929:;
    /* $A929: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A92B:;
    /* $A92B: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A92D:;
    /* $A92D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A92F:;
    /* $A92F: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A931:;
    /* $A931: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A932:;
    /* $A932: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A933:;
    /* $A933: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A934:;
    /* $A934: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A935:;
    /* $A935: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A936:;
    /* $A936: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8C8;
    }
label_A938:;
    /* $A938: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8CA;
    }
label_A93A:;
    /* $A93A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8CC;
    }
label_A93C:;
    /* $A93C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8CE;
    }
label_A93E:;
    /* $A93E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8D0;
    }
label_A940:;
    /* $A940: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8D2;
    }
label_A942:;
    /* $A942: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8D4;
    }
label_A944:;
    /* $A944: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8D6;
    }
label_A946:;
    /* $A946: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8D8;
    }
label_A948:;
    /* $A948: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8DA;
    }
label_A94A:;
    /* $A94A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8DC;
    }
label_A94C:;
    /* $A94C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8DE;
    }
label_A94E:;
    /* $A94E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8E0;
    }
label_A950:;
    /* $A950: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8E2;
    }
label_A952:;
    /* $A952: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8E4;
    }
label_A954:;
    /* $A954: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8E6;
    }
label_A956:;
    /* $A956: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A958:;
    /* $A958: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A95A:;
    /* $A95A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A95C:;
    /* $A95C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_A95E:;
    /* $A95E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
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
label_A9B7:;
    /* $A9B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B7); return;
label_A9B8:;
    /* $A9B8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B8); return;
label_A9B9:;
    /* $A9B9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B9); return;
label_A9BA:;
    /* $A9BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BA); return;
label_A9BB:;
    /* $A9BB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_A9BD:;
    /* $A9BD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BD); return;
label_A9BE:;
    /* $A9BE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BE); return;
label_A9BF:;
    /* $A9BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BF); return;
label_A9C0:;
    /* $A9C0: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A9C2:;
    /* $A9C2: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A9C5:;
    /* $A9C5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C5); return;
label_A9C6:;
    /* $A9C6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C6); return;
label_A9C7:;
    /* $A9C7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C7); return;
label_A9C8:;
    /* $A9C8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C8); return;
label_A9C9:;
    /* $A9C9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C9); return;
label_A9CA:;
    /* $A9CA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CA); return;
label_A9CB:;
    /* $A9CB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CB); return;
label_A9CC:;
    /* $A9CC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CC); return;
label_A9CD:;
    /* $A9CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CD); return;
label_A9CE:;
    /* $A9CE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CE); return;
label_A9CF:;
    /* $A9CF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CF); return;
label_A9D0:;
    /* $A9D0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D0); return;
label_A9D1:;
    /* $A9D1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D1); return;
label_A9D2:;
    /* $A9D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D2); return;
label_A9D3:;
    /* $A9D3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D3); return;
label_A9D4:;
    /* $A9D4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D4); return;
label_A9D5:;
    /* $A9D5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D5); return;
label_A9D6:;
    /* $A9D6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D6); return;
label_A9D7:;
    /* $A9D7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D7); return;
label_A9D8:;
    /* $A9D8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D8); return;
label_A9D9:;
    /* $A9D9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D9); return;
label_A9DA:;
    /* $A9DA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DA); return;
label_A9DB:;
    /* $A9DB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DB); return;
label_A9DC:;
    /* $A9DC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DC); return;
label_A9DD:;
    /* $A9DD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DD); return;
label_A9DE:;
    /* $A9DE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DE); return;
label_A9DF:;
    /* $A9DF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9E0:;
    /* $A9E0: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9E1:;
    /* $A9E1: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9E2:;
    /* $A9E2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9E3:;
    /* $A9E3: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9E4:;
    /* $A9E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9E5:;
    /* $A9E5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E5); return;
label_A9E6:;
    /* $A9E6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A9E2;
    }
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
    /* $A9ED: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x09FE), 3); return; }
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
label_A9FB:;
    /* $A9FB: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9FD:;
    /* $A9FD: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x5200); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA00:;
    /* $AA00: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA02:;
    /* $AA02: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA02); return;
label_AA03:;
    /* $AA03: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AA05:;
    /* $AA05: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AA06:;
    /* $AA06: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0A5A), 3); return; }
label_AA08:;
    /* $AA08: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA0A:;
    /* $AA0A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0A60), 3); return; }
label_AA0C:;
    /* $AA0C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA0E:;
    /* $AA0E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AA65;
label_AA10:;
    /* $AA10: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x14 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA12:;
    /* $AA12: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0A74), 3); return; }
label_AA14:;
    /* $AA14: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x22 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA16:;
    /* $AA16: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0A6C), 3); return; }
label_AA18:;
    /* $AA18: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA1A:;
    /* $AA1A: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AA1C:;
    /* $AA1C: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0A21), 3); return; }
label_AA1E:;
    /* $AA1E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA20:;
    /* $AA20: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA22:;
    /* $AA22: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x5200); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA25:;
    /* $AA25: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x14 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA27:;
    /* $AA27: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA27); return;
label_AA28:;
    /* $AA28: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AA2A:;
    /* $AA2A: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x5210 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA2D:;
    /* $AA2D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA2F:;
    /* $AA2F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AA85;
label_AA31:;
    /* $AA31: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA33:;
    /* $AA33: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AA8A;
label_AA35:;
    /* $AA35: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x10 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA37:;
    /* $AA37: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0A99), 3); return; }
label_AA39:;
    /* $AA39: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x18 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA3B:;
    /* $AA3B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AA91;
label_AA3D:;
    /* $AA3D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA3F:;
    /* $AA3F: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AA41:;
    /* $AA41: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA44:;
    /* $AA44: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA45:;
    /* $AA45: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_AA47:;
    /* $AA47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA47); return;
label_AA48:;
    /* $AA48: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA48); return;
label_AA49:;
    /* $AA49: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x1003 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA4C:;
    /* $AA4C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA4D:;
    /* $AA4D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x1003, -1); return;
label_AA50:;
    /* $AA50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA50); return;
label_AA51:;
    /* $AA51: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AA53:;
    /* $AA53: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x4508, -1);
label_AA56:;
    /* $AA56: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA58:;
    /* $AA58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA58); return;
label_AA59:;
    /* $AA59: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x03 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA5B:;
    /* $AA5B: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AA65;
label_AA5D:;
    /* $AA5D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x03); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA5F:;
    /* $AA5F: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AA61;
label_AA61:;
    /* $AA61: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA63:;
    /* $AA63: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA64:;
    /* $AA64: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA65:;
    /* $AA65: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AA67:;
    /* $AA67: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA68:;
    /* $AA68: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AA6A:;
    /* $AA6A: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x0003 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA6D:;
    /* $AA6D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA6E:;
    /* $AA6E: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_AA70:;
    /* $AA70: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA70); return;
label_AA71:;
    /* $AA71: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA71); return;
label_AA72:;
    /* $AA72: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x1003 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA75:;
    /* $AA75: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA76:;
    /* $AA76: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x1003, -1); return;
label_AA79:;
    /* $AA79: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA79); return;
label_AA7A:;
    /* $AA7A: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AA7C:;
    /* $AA7C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x4508, -1);
label_AA7F:;
    /* $AA7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA81:;
    /* $AA81: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA81); return;
label_AA82:;
    /* $AA82: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AA83:;
    /* $AA83: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x30 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA85:;
    /* $AA85: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA86:;
    /* $AA86: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AA87:;
    /* $AA87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x30 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA89:;
    /* $AA89: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA89); return;
label_AA8A:;
    /* $AA8A: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4003 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA8D:;
    /* $AA8D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA8E:;
    /* $AA8E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x4003, -1); return;
label_AA91:;
    /* $AA91: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AA93:;
    /* $AA93: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x0003 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA96:;
    /* $AA96: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA97:;
    /* $AA97: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x0003); FLAG_NZ(g_cpu.A);
label_AA9A:;
    /* $AA9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA9A); return;
label_AA9B:;
    /* $AA9B: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x1003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA9E:;
    /* $AA9E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA9F:;
    /* $AA9F: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x1003; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AAA2:;
    /* $AAA2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAA2); return;
label_AAA3:;
    /* $AAA3: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAA5:;
    /* $AAA5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x4708, -1);
label_AAA8:;
    /* $AAA8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAAA:;
    /* $AAAA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAAA); return;
label_AAAB:;
    /* $AAAB: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AAAD:;
    /* $AAAD: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AAB7;
label_AAAF:;
    /* $AAAF: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_AAB1:;
    /* $AAB1: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AAB3;
label_AAB3:;
    /* $AAB3: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AAB4:;
    /* $AAB4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x40 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAB6:;
    /* $AAB6: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAB7:;
    /* $AAB7: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AAB8:;
    /* $AAB8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x40 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AABA:;
    /* $AABA: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AABC:;
    /* $AABC: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AABD:;
    /* $AABD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AABF:;
    /* $AABF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAC0:;
    /* $AAC0: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AAC1:;
    /* $AAC1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAC3:;
    /* $AAC3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAC3); return;
label_AAC4:;
    /* $AAC4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AAC5:;
    /* $AAC5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAC7:;
    /* $AAC7: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAC8:;
    /* $AAC8: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AAC9:;
    /* $AAC9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AACB:;
    /* $AACB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAACB); return;
label_AACC:;
    /* $AACC: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x1403 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AACF:;
    /* $AACF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAD0:;
    /* $AAD0: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x1403; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AAD3:;
    /* $AAD3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD3); return;
label_AAD4:;
    /* $AAD4: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAD6:;
    /* $AAD6: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x4108 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAD9:;
    /* $AAD9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AADB:;
    /* $AADB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAADB); return;
label_AADC:;
    /* $AADC: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AADD:;
    /* $AADD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x28 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AADF:;
    /* $AADF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAE0:;
    /* $AAE0: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AAE1:;
    /* $AAE1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x28 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAE3:;
    /* $AAE3: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AAE5:;
    /* $AAE5: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x03 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AAE7:;
    /* $AAE7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAE7); return;
label_AAE8:;
    /* $AAE8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAE9:;
    /* $AAE9: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x03); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AAEB:;
    /* $AAEB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAEB); return;
label_AAEC:;
    /* $AAEC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAEC); return;
label_AAED:;
    /* $AAED: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AAEF:;
    /* $AAEF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0AF9), 3); return; }
label_AAF1:;
    /* $AAF1: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_AAF3:;
    /* $AAF3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AAF5;
label_AAF5:;
    /* $AAF5: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAF7:;
    /* $AAF7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x4608, -1);
label_AAFA:;
    /* $AAFA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAFC:;
    /* $AAFC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAFC); return;
label_AAFD:;
    /* $AAFD: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAFF:;
    /* $AAFF: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AB09;
label_AB01:;
    /* $AB01: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AB03:;
    /* $AB03: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AA85;
    }
label_AB05:;
    /* $AB05: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB05); return;
label_AB06:;
    /* $AB06: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AB07:;
    /* $AB07: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB09:;
    /* $AB09: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB0A:;
    /* $AB0A: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AB0B:;
    /* $AB0B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB0D:;
    /* $AB0D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB0D); return;
label_AB0E:;
    /* $AB0E: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x1003 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB11:;
    /* $AB11: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB12:;
    /* $AB12: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_AB14:;
    /* $AB14: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AB16;
label_AB16:;
    /* $AB16: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AB18:;
    /* $AB18: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x4708, -1);
label_AB1B:;
    /* $AB1B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB1D:;
    /* $AB1D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB1D); return;
label_AB1E:;
    /* $AB1E: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AB1F:;
    /* $AB1F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x30 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB21:;
    /* $AB21: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB22:;
    /* $AB22: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AB23:;
    /* $AB23: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x30 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB25:;
    /* $AB25: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AB27:;
    /* $AB27: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB27); return;
label_AB28:;
    /* $AB28: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB28); return;
label_AB29:;
    /* $AB29: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB29); return;
label_AB2A:;
    /* $AB2A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB2A); return;
label_AB2B:;
    /* $AB2B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB2B); return;
label_AB2C:;
    /* $AB2C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB2C); return;
label_AB2D:;
    /* $AB2D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB2D); return;
label_AB2E:;
    /* $AB2E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB2E); return;
label_AB2F:;
    /* $AB2F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB2F); return;
label_AB30:;
    /* $AB30: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB30); return;
label_AB31:;
    /* $AB31: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB31); return;
label_AB32:;
    /* $AB32: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB32); return;
label_AB33:;
    /* $AB33: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB33); return;
label_AB34:;
    /* $AB34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB34); return;
label_AB35:;
    /* $AB35: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB35); return;
label_AB36:;
    /* $AB36: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB36); return;
label_AB37:;
    /* $AB37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB37); return;
label_AB38:;
    /* $AB38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB38); return;
label_AB39:;
    /* $AB39: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB39); return;
label_AB3A:;
    /* $AB3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3A); return;
label_AB3B:;
    /* $AB3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3B); return;
label_AB3C:;
    /* $AB3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3C); return;
label_AB3D:;
    /* $AB3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3D); return;
label_AB3E:;
    /* $AB3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3E); return;
label_AB3F:;
    /* $AB3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3F); return;
label_AB40:;
    /* $AB40: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB40); return;
label_AB41:;
    /* $AB41: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB41); return;
label_AB42:;
    /* $AB42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB42); return;
label_AB43:;
    /* $AB43: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB43); return;
label_AB44:;
    /* $AB44: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB44); return;
label_AB45:;
    /* $AB45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB45); return;
label_AB46:;
    /* $AB46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB46); return;
label_AB47:;
    /* $AB47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB47); return;
label_AB48:;
    /* $AB48: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB48); return;
label_AB49:;
    /* $AB49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB49); return;
label_AB4A:;
    /* $AB4A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB4A); return;
label_AB4B:;
    /* $AB4B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB4B); return;
label_AB4C:;
    /* $AB4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB4C); return;
label_AB4D:;
    /* $AB4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB4D); return;
label_AB4E:;
    /* $AB4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB4E); return;
label_AB4F:;
    /* $AB4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB4F); return;
label_AB50:;
    /* $AB50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB50); return;
label_AB51:;
    /* $AB51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB51); return;
label_AB52:;
    /* $AB52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB52); return;
label_AB53:;
    /* $AB53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB53); return;
label_AB54:;
    /* $AB54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB54); return;
label_AB55:;
    /* $AB55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB55); return;
label_AB56:;
    /* $AB56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB56); return;
label_AB57:;
    /* $AB57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB57); return;
label_AB58:;
    /* $AB58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB58); return;
label_AB59:;
    /* $AB59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB59); return;
label_AB5A:;
    /* $AB5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5A); return;
label_AB5B:;
    /* $AB5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5B); return;
label_AB5C:;
    /* $AB5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5C); return;
label_AB5D:;
    /* $AB5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5D); return;
label_AB5E:;
    /* $AB5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5E); return;
label_AB5F:;
    /* $AB5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5F); return;
label_AB60:;
    /* $AB60: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB60); return;
label_AB61:;
    /* $AB61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB61); return;
label_AB62:;
    /* $AB62: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB62); return;
label_AB63:;
    /* $AB63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB63); return;
label_AB64:;
    /* $AB64: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB64); return;
label_AB65:;
    /* $AB65: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB65); return;
label_AB66:;
    /* $AB66: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB66); return;
label_AB67:;
    /* $AB67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB67); return;
label_AB68:;
    /* $AB68: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AB7B;
label_AB6A:;
    /* $AB6A: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AB6B:;
    /* $AB6B: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB6D:;
    /* $AB6D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB6F:;
    /* $AB6F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB71:;
    /* $AB71: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B1A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB74:;
    /* $AB74: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AB87;
label_AB76:;
    /* $AB76: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AB77:;
    /* $AB77: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB79:;
    /* $AB79: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB7B:;
    /* $AB7B: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB7D:;
    /* $AB7D: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B1A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB80:;
    /* $AB80: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AB93;
label_AB82:;
    /* $AB82: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AB83:;
    /* $AB83: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB86:;
    /* $AB86: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB86); return;
label_AB87:;
    /* $AB87: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB87); return;
label_AB88:;
    /* $AB88: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2221, -1);
label_AB8B:;
    /* $AB8B: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x24 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AB8D:;
    /* $AB8D: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x26); FLAG_NZ(g_cpu.A);
label_AB8F:;
    /* $AB8F: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AB91:;
    /* $AB91: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x2A; FLAG_NZ(g_cpu.A);
label_AB93:;
    /* $AB93: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AB95:;
    /* $AB95: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x22 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB97:;
    /* $AB97: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x24 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AB99:;
    /* $AB99: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x26); FLAG_NZ(g_cpu.A);
label_AB9B:;
    /* $AB9B: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AB9D:;
    /* $AB9D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x2A; FLAG_NZ(g_cpu.A);
label_AB9F:;
    /* $AB9F: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_ABA1:;
    /* $ABA1: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABA3:;
    /* $ABA3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A);
label_ABA5:;
    /* $ABA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA5); return;
label_ABA6:;
    /* $ABA6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA6); return;
label_ABA7:;
    /* $ABA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA7); return;
label_ABA8:;
    /* $ABA8: 1A */ maybe_trigger_vblank(2); /* NOP */
label_ABA9:;
    /* $ABA9: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABAC:;
    /* $ABAC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABAC); return;
label_ABAD:;
    /* $ABAD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABAD); return;
label_ABAE:;
    /* $ABAE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABAE); return;
label_ABAF:;
    /* $ABAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABAF); return;
label_ABB0:;
    /* $ABB0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB0); return;
label_ABB1:;
    /* $ABB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB1); return;
label_ABB2:;
    /* $ABB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB2); return;
label_ABB3:;
    /* $ABB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB3); return;
label_ABB4:;
    /* $ABB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB4); return;
label_ABB5:;
    /* $ABB5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB5); return;
label_ABB6:;
    /* $ABB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB6); return;
label_ABB7:;
    /* $ABB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB7); return;
label_ABB8:;
    /* $ABB8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB8); return;
label_ABB9:;
    /* $ABB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB9); return;
label_ABBA:;
    /* $ABBA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBA); return;
label_ABBB:;
    /* $ABBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBB); return;
label_ABBC:;
    /* $ABBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBC); return;
label_ABBD:;
    /* $ABBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBD); return;
label_ABBE:;
    /* $ABBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBE); return;
label_ABBF:;
    /* $ABBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBF); return;
label_ABC0:;
    /* $ABC0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC0); return;
label_ABC1:;
    /* $ABC1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC1); return;
label_ABC2:;
    /* $ABC2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_ABD5;
label_ABC4:;
    /* $ABC4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC4); return;
label_ABC5:;
    /* $ABC5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC5); return;
label_ABC6:;
    /* $ABC6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC6); return;
label_ABC7:;
    /* $ABC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC7); return;
label_ABC8:;
    /* $ABC8: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_ABC9:;
    /* $ABC9: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_ABCB:;
    /* $ABCB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCB); return;
label_ABCC:;
    /* $ABCC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCC); return;
label_ABCD:;
    /* $ABCD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCD); return;
label_ABCE:;
    /* $ABCE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCE); return;
label_ABCF:;
    /* $ABCF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCF); return;
label_ABD0:;
    /* $ABD0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD0); return;
label_ABD1:;
    /* $ABD1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD1); return;
label_ABD2:;
    /* $ABD2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD2); return;
label_ABD3:;
    /* $ABD3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD3); return;
label_ABD4:;
    /* $ABD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD4); return;
label_ABD5:;
    /* $ABD5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD5); return;
label_ABD6:;
    /* $ABD6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD6); return;
label_ABD7:;
    /* $ABD7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD7); return;
label_ABD8:;
    /* $ABD8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD8); return;
label_ABD9:;
    /* $ABD9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD9); return;
label_ABDA:;
    /* $ABDA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDA); return;
label_ABDB:;
    /* $ABDB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDB); return;
label_ABDC:;
    /* $ABDC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDC); return;
label_ABDD:;
    /* $ABDD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDD); return;
label_ABDE:;
    /* $ABDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDE); return;
label_ABDF:;
    /* $ABDF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDF); return;
label_ABE0:;
    /* $ABE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE0); return;
label_ABE1:;
    /* $ABE1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE1); return;
label_ABE2:;
    /* $ABE2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x0021, -1);
label_ABE5:;
    /* $ABE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE5); return;
label_ABE6:;
    /* $ABE6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE6); return;
label_ABE7:;
    /* $ABE7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE7); return;
label_ABE8:;
    /* $ABE8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ABE9:;
    /* $ABE9: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABEC:;
    /* $ABEC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABEC); return;
label_ABED:;
    /* $ABED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABED); return;
label_ABEE:;
    /* $ABEE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABEE); return;
label_ABEF:;
    /* $ABEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABEF); return;
label_ABF0:;
    /* $ABF0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF0); return;
label_ABF1:;
    /* $ABF1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF1); return;
label_ABF2:;
    /* $ABF2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF2); return;
label_ABF3:;
    /* $ABF3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF3); return;
label_ABF4:;
    /* $ABF4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF4); return;
label_ABF5:;
    /* $ABF5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF5); return;
label_ABF6:;
    /* $ABF6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF6); return;
label_ABF7:;
    /* $ABF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF7); return;
label_ABF8:;
    /* $ABF8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF8); return;
label_ABF9:;
    /* $ABF9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF9); return;
label_ABFA:;
    /* $ABFA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFA); return;
label_ABFB:;
    /* $ABFB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFB); return;
label_ABFC:;
    /* $ABFC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFC); return;
label_ABFD:;
    /* $ABFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFD); return;
label_ABFE:;
    /* $ABFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFE); return;
label_ABFF:;
    /* $ABFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFF); return;
label_AC00:;
    /* $AC00: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC00); return;
label_AC01:;
    /* $AC01: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC01); return;
label_AC02:;
    /* $AC02: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AC03:;
    /* $AC03: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC05:;
    /* $AC05: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC05); return;
label_AC06:;
    /* $AC06: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC06); return;
label_AC07:;
    /* $AC07: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC07); return;
label_AC08:;
    /* $AC08: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AC09:;
    /* $AC09: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A);
label_AC0B:;
    /* $AC0B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC0B); return;
label_AC0C:;
    /* $AC0C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC0C); return;
label_AC0D:;
    /* $AC0D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC0D); return;
label_AC0E:;
    /* $AC0E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC0E); return;
label_AC0F:;
    /* $AC0F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC0F); return;
label_AC10:;
    /* $AC10: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC10); return;
label_AC11:;
    /* $AC11: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC11); return;
label_AC12:;
    /* $AC12: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC12); return;
label_AC13:;
    /* $AC13: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC13); return;
label_AC14:;
    /* $AC14: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC14); return;
label_AC15:;
    /* $AC15: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC15); return;
label_AC16:;
    /* $AC16: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC16); return;
label_AC17:;
    /* $AC17: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC17); return;
label_AC18:;
    /* $AC18: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC18); return;
label_AC19:;
    /* $AC19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC19); return;
label_AC1A:;
    /* $AC1A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC1A); return;
label_AC1B:;
    /* $AC1B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC1B); return;
label_AC1C:;
    /* $AC1C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC1C); return;
label_AC1D:;
    /* $AC1D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC1D); return;
label_AC1E:;
    /* $AC1E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC1E); return;
label_AC1F:;
    /* $AC1F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC1F); return;
label_AC20:;
    /* $AC20: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC20); return;
label_AC21:;
    /* $AC21: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC21); return;
label_AC22:;
    /* $AC22: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AC23:;
    /* $AC23: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AC25:;
    /* $AC25: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC25); return;
label_AC26:;
    /* $AC26: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC26); return;
label_AC27:;
    /* $AC27: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC27); return;
label_AC28:;
    /* $AC28: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC2A:;
    /* $AC2A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC2A); return;
label_AC2B:;
    /* $AC2B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC2B); return;
label_AC2C:;
    /* $AC2C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC2C); return;
label_AC2D:;
    /* $AC2D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC2D); return;
label_AC2E:;
    /* $AC2E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC2E); return;
label_AC2F:;
    /* $AC2F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC2F); return;
label_AC30:;
    /* $AC30: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC30); return;
label_AC31:;
    /* $AC31: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC31); return;
label_AC32:;
    /* $AC32: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC32); return;
label_AC33:;
    /* $AC33: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC33); return;
label_AC34:;
    /* $AC34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC34); return;
label_AC35:;
    /* $AC35: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC35); return;
label_AC36:;
    /* $AC36: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC36); return;
label_AC37:;
    /* $AC37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC37); return;
label_AC38:;
    /* $AC38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC38); return;
label_AC39:;
    /* $AC39: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC39); return;
label_AC3A:;
    /* $AC3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3A); return;
label_AC3B:;
    /* $AC3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3B); return;
label_AC3C:;
    /* $AC3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3C); return;
label_AC3D:;
    /* $AC3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3D); return;
label_AC3E:;
    /* $AC3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3E); return;
label_AC3F:;
    /* $AC3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3F); return;
label_AC40:;
    /* $AC40: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC40); return;
label_AC41:;
    /* $AC41: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC41); return;
label_AC42:;
    /* $AC42: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC44:;
    /* $AC44: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC44); return;
label_AC45:;
    /* $AC45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC45); return;
label_AC46:;
    /* $AC46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC46); return;
label_AC47:;
    /* $AC47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC47); return;
label_AC48:;
    /* $AC48: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC4A:;
    /* $AC4A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4A); return;
label_AC4B:;
    /* $AC4B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4B); return;
label_AC4C:;
    /* $AC4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4C); return;
label_AC4D:;
    /* $AC4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4D); return;
label_AC4E:;
    /* $AC4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4E); return;
label_AC4F:;
    /* $AC4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4F); return;
label_AC50:;
    /* $AC50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC50); return;
label_AC51:;
    /* $AC51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC51); return;
label_AC52:;
    /* $AC52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC52); return;
label_AC53:;
    /* $AC53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC53); return;
label_AC54:;
    /* $AC54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC54); return;
label_AC55:;
    /* $AC55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC55); return;
label_AC56:;
    /* $AC56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC56); return;
label_AC57:;
    /* $AC57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC57); return;
label_AC58:;
    /* $AC58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC58); return;
label_AC59:;
    /* $AC59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC59); return;
label_AC5A:;
    /* $AC5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5A); return;
label_AC5B:;
    /* $AC5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5B); return;
label_AC5C:;
    /* $AC5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5C); return;
label_AC5D:;
    /* $AC5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5D); return;
label_AC5E:;
    /* $AC5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5E); return;
label_AC5F:;
    /* $AC5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5F); return;
label_AC60:;
    /* $AC60: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC60); return;
label_AC61:;
    /* $AC61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC61); return;
label_AC62:;
    /* $AC62: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC64:;
    /* $AC64: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC64); return;
label_AC65:;
    /* $AC65: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC65); return;
label_AC66:;
    /* $AC66: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC66); return;
label_AC67:;
    /* $AC67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC67); return;
label_AC68:;
    /* $AC68: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC6A:;
    /* $AC6A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6A); return;
label_AC6B:;
    /* $AC6B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6B); return;
label_AC6C:;
    /* $AC6C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6C); return;
label_AC6D:;
    /* $AC6D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6D); return;
label_AC6E:;
    /* $AC6E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6E); return;
label_AC6F:;
    /* $AC6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6F); return;
label_AC70:;
    /* $AC70: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC70); return;
label_AC71:;
    /* $AC71: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC71); return;
label_AC72:;
    /* $AC72: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC72); return;
label_AC73:;
    /* $AC73: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC73); return;
label_AC74:;
    /* $AC74: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC74); return;
label_AC75:;
    /* $AC75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC75); return;
label_AC76:;
    /* $AC76: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC76); return;
label_AC77:;
    /* $AC77: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC77); return;
label_AC78:;
    /* $AC78: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC78); return;
label_AC79:;
    /* $AC79: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC79); return;
label_AC7A:;
    /* $AC7A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7A); return;
label_AC7B:;
    /* $AC7B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7B); return;
label_AC7C:;
    /* $AC7C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7C); return;
label_AC7D:;
    /* $AC7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7D); return;
label_AC7E:;
    /* $AC7E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7E); return;
label_AC7F:;
    /* $AC7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7F); return;
label_AC80:;
    /* $AC80: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC80); return;
label_AC81:;
    /* $AC81: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC81); return;
label_AC82:;
    /* $AC82: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC84:;
    /* $AC84: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC84); return;
label_AC85:;
    /* $AC85: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC85); return;
label_AC86:;
    /* $AC86: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC86); return;
label_AC87:;
    /* $AC87: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC87); return;
label_AC88:;
    /* $AC88: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC8A:;
    /* $AC8A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8A); return;
label_AC8B:;
    /* $AC8B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8B); return;
label_AC8C:;
    /* $AC8C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8C); return;
label_AC8D:;
    /* $AC8D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8D); return;
label_AC8E:;
    /* $AC8E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8E); return;
label_AC8F:;
    /* $AC8F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8F); return;
label_AC90:;
    /* $AC90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC90); return;
label_AC91:;
    /* $AC91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC91); return;
label_AC92:;
    /* $AC92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC92); return;
label_AC93:;
    /* $AC93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC93); return;
label_AC94:;
    /* $AC94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC94); return;
label_AC95:;
    /* $AC95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC95); return;
label_AC96:;
    /* $AC96: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC96); return;
label_AC97:;
    /* $AC97: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC97); return;
label_AC98:;
    /* $AC98: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC98); return;
label_AC99:;
    /* $AC99: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC99); return;
label_AC9A:;
    /* $AC9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9A); return;
label_AC9B:;
    /* $AC9B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9B); return;
label_AC9C:;
    /* $AC9C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9C); return;
label_AC9D:;
    /* $AC9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9D); return;
label_AC9E:;
    /* $AC9E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9E); return;
label_AC9F:;
    /* $AC9F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9F); return;
label_ACA0:;
    /* $ACA0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA0); return;
label_ACA1:;
    /* $ACA1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA1); return;
label_ACA2:;
    /* $ACA2: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ACA4:;
    /* $ACA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA4); return;
label_ACA5:;
    /* $ACA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA5); return;
label_ACA6:;
    /* $ACA6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA6); return;
label_ACA7:;
    /* $ACA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA7); return;
label_ACA8:;
    /* $ACA8: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_ACA9:;
    /* $ACA9: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACAB:;
    /* $ACAB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACAB); return;
label_ACAC:;
    /* $ACAC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACAC); return;
label_ACAD:;
    /* $ACAD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACAD); return;
label_ACAE:;
    /* $ACAE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACAE); return;
label_ACAF:;
    /* $ACAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACAF); return;
label_ACB0:;
    /* $ACB0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB0); return;
label_ACB1:;
    /* $ACB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB1); return;
label_ACB2:;
    /* $ACB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB2); return;
label_ACB3:;
    /* $ACB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB3); return;
label_ACB4:;
    /* $ACB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB4); return;
label_ACB5:;
    /* $ACB5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB5); return;
label_ACB6:;
    /* $ACB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB6); return;
label_ACB7:;
    /* $ACB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB7); return;
label_ACB8:;
    /* $ACB8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB8); return;
label_ACB9:;
    /* $ACB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB9); return;
label_ACBA:;
    /* $ACBA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBA); return;
label_ACBB:;
    /* $ACBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBB); return;
label_ACBC:;
    /* $ACBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBC); return;
label_ACBD:;
    /* $ACBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBD); return;
label_ACBE:;
    /* $ACBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBE); return;
label_ACBF:;
    /* $ACBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBF); return;
label_ACC0:;
    /* $ACC0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACC0); return;
label_ACC1:;
    /* $ACC1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACC1); return;
label_ACC2:;
    /* $ACC2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ACC3:;
    /* $ACC3: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACC6:;
    /* $ACC6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACC6); return;
label_ACC7:;
    /* $ACC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACC7); return;
label_ACC8:;
    /* $ACC8: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_ACC9:;
    /* $ACC9: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ACCB:;
    /* $ACCB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCB); return;
label_ACCC:;
    /* $ACCC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCC); return;
label_ACCD:;
    /* $ACCD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCD); return;
label_ACCE:;
    /* $ACCE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCE); return;
label_ACCF:;
    /* $ACCF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCF); return;
label_ACD0:;
    /* $ACD0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD0); return;
label_ACD1:;
    /* $ACD1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD1); return;
label_ACD2:;
    /* $ACD2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD2); return;
label_ACD3:;
    /* $ACD3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD3); return;
label_ACD4:;
    /* $ACD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD4); return;
label_ACD5:;
    /* $ACD5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD5); return;
label_ACD6:;
    /* $ACD6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD6); return;
label_ACD7:;
    /* $ACD7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD7); return;
label_ACD8:;
    /* $ACD8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD8); return;
label_ACD9:;
    /* $ACD9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD9); return;
label_ACDA:;
    /* $ACDA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDA); return;
label_ACDB:;
    /* $ACDB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDB); return;
label_ACDC:;
    /* $ACDC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDC); return;
label_ACDD:;
    /* $ACDD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDD); return;
label_ACDE:;
    /* $ACDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDE); return;
label_ACDF:;
    /* $ACDF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDF); return;
label_ACE0:;
    /* $ACE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACE0); return;
label_ACE1:;
    /* $ACE1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACE1); return;
label_ACE2:;
    /* $ACE2: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_ACE3:;
    /* $ACE3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A);
label_ACE5:;
    /* $ACE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACE5); return;
label_ACE6:;
    /* $ACE6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACE6); return;
label_ACE7:;
    /* $ACE7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACE7); return;
label_ACE8:;
    /* $ACE8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_ACFB;
label_ACEA:;
    /* $ACEA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACEA); return;
label_ACEB:;
    /* $ACEB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACEB); return;
label_ACEC:;
    /* $ACEC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACEC); return;
label_ACED:;
    /* $ACED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACED); return;
label_ACEE:;
    /* $ACEE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACEE); return;
label_ACEF:;
    /* $ACEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACEF); return;
label_ACF0:;
    /* $ACF0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF0); return;
label_ACF1:;
    /* $ACF1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF1); return;
label_ACF2:;
    /* $ACF2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF2); return;
label_ACF3:;
    /* $ACF3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF3); return;
label_ACF4:;
    /* $ACF4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF4); return;
label_ACF5:;
    /* $ACF5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF5); return;
label_ACF6:;
    /* $ACF6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF6); return;
label_ACF7:;
    /* $ACF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF7); return;
label_ACF8:;
    /* $ACF8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF8); return;
label_ACF9:;
    /* $ACF9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF9); return;
label_ACFA:;
    /* $ACFA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFA); return;
label_ACFB:;
    /* $ACFB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFB); return;
label_ACFC:;
    /* $ACFC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFC); return;
label_ACFD:;
    /* $ACFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFD); return;
label_ACFE:;
    /* $ACFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFE); return;
label_ACFF:;
    /* $ACFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFF); return;
label_AD00:;
    /* $AD00: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD00); return;
label_AD01:;
    /* $AD01: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD01); return;
label_AD02:;
    /* $AD02: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD03:;
    /* $AD03: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD06:;
    /* $AD06: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD06); return;
label_AD07:;
    /* $AD07: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD07); return;
label_AD08:;
    /* $AD08: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x0021, -1);
label_AD0B:;
    /* $AD0B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD0B); return;
label_AD0C:;
    /* $AD0C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD0C); return;
label_AD0D:;
    /* $AD0D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD0D); return;
label_AD0E:;
    /* $AD0E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD0E); return;
label_AD0F:;
    /* $AD0F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD0F); return;
label_AD10:;
    /* $AD10: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD10); return;
label_AD11:;
    /* $AD11: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD11); return;
label_AD12:;
    /* $AD12: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD12); return;
label_AD13:;
    /* $AD13: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD13); return;
label_AD14:;
    /* $AD14: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD14); return;
label_AD15:;
    /* $AD15: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD15); return;
label_AD16:;
    /* $AD16: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD16); return;
label_AD17:;
    /* $AD17: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD17); return;
label_AD18:;
    /* $AD18: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD18); return;
label_AD19:;
    /* $AD19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD19); return;
label_AD1A:;
    /* $AD1A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD1A); return;
label_AD1B:;
    /* $AD1B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD1B); return;
label_AD1C:;
    /* $AD1C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD1C); return;
label_AD1D:;
    /* $AD1D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD1D); return;
label_AD1E:;
    /* $AD1E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD1E); return;
label_AD1F:;
    /* $AD1F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD1F); return;
label_AD20:;
    /* $AD20: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD20); return;
label_AD21:;
    /* $AD21: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD21); return;
label_AD22:;
    /* $AD22: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AD23:;
    /* $AD23: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD25:;
    /* $AD25: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD25); return;
label_AD26:;
    /* $AD26: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD26); return;
label_AD27:;
    /* $AD27: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD27); return;
label_AD28:;
    /* $AD28: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AD29:;
    /* $AD29: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD2C:;
    /* $AD2C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD2C); return;
label_AD2D:;
    /* $AD2D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD2D); return;
label_AD2E:;
    /* $AD2E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD2E); return;
label_AD2F:;
    /* $AD2F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD2F); return;
label_AD30:;
    /* $AD30: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD30); return;
label_AD31:;
    /* $AD31: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD31); return;
label_AD32:;
    /* $AD32: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD32); return;
label_AD33:;
    /* $AD33: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD33); return;
label_AD34:;
    /* $AD34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD34); return;
label_AD35:;
    /* $AD35: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD35); return;
label_AD36:;
    /* $AD36: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD36); return;
label_AD37:;
    /* $AD37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD37); return;
label_AD38:;
    /* $AD38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD38); return;
label_AD39:;
    /* $AD39: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD39); return;
label_AD3A:;
    /* $AD3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3A); return;
label_AD3B:;
    /* $AD3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3B); return;
label_AD3C:;
    /* $AD3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3C); return;
label_AD3D:;
    /* $AD3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3D); return;
label_AD3E:;
    /* $AD3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3E); return;
label_AD3F:;
    /* $AD3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3F); return;
label_AD40:;
    /* $AD40: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD40); return;
label_AD41:;
    /* $AD41: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD41); return;
label_AD42:;
    /* $AD42: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AD55;
label_AD44:;
    /* $AD44: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD44); return;
label_AD45:;
    /* $AD45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD45); return;
label_AD46:;
    /* $AD46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD46); return;
label_AD47:;
    /* $AD47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD47); return;
label_AD48:;
    /* $AD48: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AD49:;
    /* $AD49: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AD4B:;
    /* $AD4B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4B); return;
label_AD4C:;
    /* $AD4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4C); return;
label_AD4D:;
    /* $AD4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4D); return;
label_AD4E:;
    /* $AD4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4E); return;
label_AD4F:;
    /* $AD4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4F); return;
label_AD50:;
    /* $AD50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD50); return;
label_AD51:;
    /* $AD51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD51); return;
label_AD52:;
    /* $AD52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD52); return;
label_AD53:;
    /* $AD53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD53); return;
label_AD54:;
    /* $AD54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD54); return;
label_AD55:;
    /* $AD55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD55); return;
label_AD56:;
    /* $AD56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD56); return;
label_AD57:;
    /* $AD57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD57); return;
label_AD58:;
    /* $AD58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD58); return;
label_AD59:;
    /* $AD59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD59); return;
label_AD5A:;
    /* $AD5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5A); return;
label_AD5B:;
    /* $AD5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5B); return;
label_AD5C:;
    /* $AD5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5C); return;
label_AD5D:;
    /* $AD5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5D); return;
label_AD5E:;
    /* $AD5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5E); return;
label_AD5F:;
    /* $AD5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5F); return;
label_AD60:;
    /* $AD60: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD60); return;
label_AD61:;
    /* $AD61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD61); return;
label_AD62:;
    /* $AD62: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x0021, -1);
label_AD65:;
    /* $AD65: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD65); return;
label_AD66:;
    /* $AD66: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD66); return;
label_AD67:;
    /* $AD67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD67); return;
label_AD68:;
    /* $AD68: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AD69:;
    /* $AD69: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD6C:;
    /* $AD6C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD6C); return;
label_AD6D:;
    /* $AD6D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD6D); return;
label_AD6E:;
    /* $AD6E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD6E); return;
label_AD6F:;
    /* $AD6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD6F); return;
label_AD70:;
    /* $AD70: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD70); return;
label_AD71:;
    /* $AD71: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD71); return;
label_AD72:;
    /* $AD72: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD72); return;
label_AD73:;
    /* $AD73: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD73); return;
label_AD74:;
    /* $AD74: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD74); return;
label_AD75:;
    /* $AD75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD75); return;
label_AD76:;
    /* $AD76: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD76); return;
label_AD77:;
    /* $AD77: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD77); return;
label_AD78:;
    /* $AD78: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD78); return;
label_AD79:;
    /* $AD79: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD79); return;
label_AD7A:;
    /* $AD7A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7A); return;
label_AD7B:;
    /* $AD7B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7B); return;
label_AD7C:;
    /* $AD7C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7C); return;
label_AD7D:;
    /* $AD7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7D); return;
label_AD7E:;
    /* $AD7E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7E); return;
label_AD7F:;
    /* $AD7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7F); return;
label_AD80:;
    /* $AD80: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD80); return;
label_AD81:;
    /* $AD81: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD81); return;
label_AD82:;
    /* $AD82: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AD83:;
    /* $AD83: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD85:;
    /* $AD85: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD85); return;
label_AD86:;
    /* $AD86: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD86); return;
label_AD87:;
    /* $AD87: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD87); return;
label_AD88:;
    /* $AD88: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD89:;
    /* $AD89: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A);
label_AD8B:;
    /* $AD8B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8B); return;
label_AD8C:;
    /* $AD8C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8C); return;
label_AD8D:;
    /* $AD8D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8D); return;
label_AD8E:;
    /* $AD8E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8E); return;
label_AD8F:;
    /* $AD8F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8F); return;
label_AD90:;
    /* $AD90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD90); return;
label_AD91:;
    /* $AD91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD91); return;
label_AD92:;
    /* $AD92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD92); return;
label_AD93:;
    /* $AD93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD93); return;
label_AD94:;
    /* $AD94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD94); return;
label_AD95:;
    /* $AD95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD95); return;
label_AD96:;
    /* $AD96: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD96); return;
label_AD97:;
    /* $AD97: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD97); return;
label_AD98:;
    /* $AD98: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD98); return;
label_AD99:;
    /* $AD99: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD99); return;
label_AD9A:;
    /* $AD9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9A); return;
label_AD9B:;
    /* $AD9B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9B); return;
label_AD9C:;
    /* $AD9C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9C); return;
label_AD9D:;
    /* $AD9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9D); return;
label_AD9E:;
    /* $AD9E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9E); return;
label_AD9F:;
    /* $AD9F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9F); return;
label_ADA0:;
    /* $ADA0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADA0); return;
label_ADA1:;
    /* $ADA1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADA1); return;
label_ADA2:;
    /* $ADA2: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_ADA3:;
    /* $ADA3: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ADA5:;
    /* $ADA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADA5); return;
label_ADA6:;
    /* $ADA6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADA6); return;
label_ADA7:;
    /* $ADA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADA7); return;
label_ADA8:;
    /* $ADA8: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ADAA:;
    /* $ADAA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAA); return;
label_ADAB:;
    /* $ADAB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAB); return;
label_ADAC:;
    /* $ADAC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAC); return;
label_ADAD:;
    /* $ADAD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAD); return;
label_ADAE:;
    /* $ADAE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAE); return;
label_ADAF:;
    /* $ADAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAF); return;
label_ADB0:;
    /* $ADB0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB0); return;
label_ADB1:;
    /* $ADB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB1); return;
label_ADB2:;
    /* $ADB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB2); return;
label_ADB3:;
    /* $ADB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB3); return;
label_ADB4:;
    /* $ADB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB4); return;
label_ADB5:;
    /* $ADB5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB5); return;
label_ADB6:;
    /* $ADB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB6); return;
label_ADB7:;
    /* $ADB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB7); return;
label_ADB8:;
    /* $ADB8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB8); return;
label_ADB9:;
    /* $ADB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB9); return;
label_ADBA:;
    /* $ADBA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBA); return;
label_ADBB:;
    /* $ADBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBB); return;
label_ADBC:;
    /* $ADBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBC); return;
label_ADBD:;
    /* $ADBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBD); return;
label_ADBE:;
    /* $ADBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBE); return;
label_ADBF:;
    /* $ADBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBF); return;
label_ADC0:;
    /* $ADC0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC0); return;
label_ADC1:;
    /* $ADC1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC1); return;
label_ADC2:;
    /* $ADC2: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADC4:;
    /* $ADC4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC4); return;
label_ADC5:;
    /* $ADC5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC5); return;
label_ADC6:;
    /* $ADC6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC6); return;
label_ADC7:;
    /* $ADC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC7); return;
label_ADC8:;
    /* $ADC8: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ADCA:;
    /* $ADCA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADCA); return;
label_ADCB:;
    /* $ADCB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADCB); return;
label_ADCC:;
    /* $ADCC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADCC); return;
label_ADCD:;
    /* $ADCD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADCD); return;
label_ADCE:;
    /* $ADCE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADCE); return;
label_ADCF:;
    /* $ADCF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADCF); return;
label_ADD0:;
    /* $ADD0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD0); return;
label_ADD1:;
    /* $ADD1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD1); return;
label_ADD2:;
    /* $ADD2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD2); return;
label_ADD3:;
    /* $ADD3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD3); return;
label_ADD4:;
    /* $ADD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD4); return;
label_ADD5:;
    /* $ADD5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD5); return;
label_ADD6:;
    /* $ADD6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD6); return;
label_ADD7:;
    /* $ADD7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD7); return;
label_ADD8:;
    /* $ADD8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD8); return;
label_ADD9:;
    /* $ADD9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD9); return;
label_ADDA:;
    /* $ADDA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDA); return;
label_ADDB:;
    /* $ADDB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDB); return;
label_ADDC:;
    /* $ADDC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDC); return;
label_ADDD:;
    /* $ADDD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDD); return;
label_ADDE:;
    /* $ADDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDE); return;
label_ADDF:;
    /* $ADDF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDF); return;
label_ADE0:;
    /* $ADE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE0); return;
label_ADE1:;
    /* $ADE1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE1); return;
label_ADE2:;
    /* $ADE2: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_ADE4:;
    /* $ADE4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE4); return;
label_ADE5:;
    /* $ADE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE5); return;
label_ADE6:;
    /* $ADE6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE6); return;
label_ADE7:;
    /* $ADE7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE7); return;
label_ADE8:;
    /* $ADE8: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADEA:;
    /* $ADEA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEA); return;
label_ADEB:;
    /* $ADEB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEB); return;
label_ADEC:;
    /* $ADEC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEC); return;
label_ADED:;
    /* $ADED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADED); return;
label_ADEE:;
    /* $ADEE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEE); return;
label_ADEF:;
    /* $ADEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEF); return;
label_ADF0:;
    /* $ADF0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF0); return;
label_ADF1:;
    /* $ADF1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF1); return;
label_ADF2:;
    /* $ADF2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF2); return;
label_ADF3:;
    /* $ADF3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF3); return;
label_ADF4:;
    /* $ADF4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF4); return;
label_ADF5:;
    /* $ADF5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF5); return;
label_ADF6:;
    /* $ADF6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF6); return;
label_ADF7:;
    /* $ADF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF7); return;
label_ADF8:;
    /* $ADF8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF8); return;
label_ADF9:;
    /* $ADF9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF9); return;
label_ADFA:;
    /* $ADFA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFA); return;
label_ADFB:;
    /* $ADFB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFB); return;
label_ADFC:;
    /* $ADFC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFC); return;
label_ADFD:;
    /* $ADFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFD); return;
label_ADFE:;
    /* $ADFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFE); return;
label_ADFF:;
    /* $ADFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFF); return;
label_AE00:;
    /* $AE00: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE00); return;
label_AE01:;
    /* $AE01: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE01); return;
label_AE02:;
    /* $AE02: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE04:;
    /* $AE04: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE04); return;
label_AE05:;
    /* $AE05: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE05); return;
label_AE06:;
    /* $AE06: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE06); return;
label_AE07:;
    /* $AE07: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE07); return;
label_AE08:;
    /* $AE08: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AE0A:;
    /* $AE0A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE0A); return;
label_AE0B:;
    /* $AE0B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE0B); return;
label_AE0C:;
    /* $AE0C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE0C); return;
label_AE0D:;
    /* $AE0D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE0D); return;
label_AE0E:;
    /* $AE0E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE0E); return;
label_AE0F:;
    /* $AE0F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE0F); return;
label_AE10:;
    /* $AE10: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE10); return;
label_AE11:;
    /* $AE11: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE11); return;
label_AE12:;
    /* $AE12: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE12); return;
label_AE13:;
    /* $AE13: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE13); return;
label_AE14:;
    /* $AE14: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE14); return;
label_AE15:;
    /* $AE15: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE15); return;
label_AE16:;
    /* $AE16: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE16); return;
label_AE17:;
    /* $AE17: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE17); return;
label_AE18:;
    /* $AE18: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE18); return;
label_AE19:;
    /* $AE19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE19); return;
label_AE1A:;
    /* $AE1A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE1A); return;
label_AE1B:;
    /* $AE1B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE1B); return;
label_AE1C:;
    /* $AE1C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE1C); return;
label_AE1D:;
    /* $AE1D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE1D); return;
label_AE1E:;
    /* $AE1E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE1E); return;
label_AE1F:;
    /* $AE1F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE1F); return;
label_AE20:;
    /* $AE20: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE20); return;
label_AE21:;
    /* $AE21: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE21); return;
label_AE22:;
    /* $AE22: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE24:;
    /* $AE24: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE24); return;
label_AE25:;
    /* $AE25: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE25); return;
label_AE26:;
    /* $AE26: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE26); return;
label_AE27:;
    /* $AE27: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE27); return;
label_AE28:;
    /* $AE28: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AE29:;
    /* $AE29: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE2B:;
    /* $AE2B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE2B); return;
label_AE2C:;
    /* $AE2C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE2C); return;
label_AE2D:;
    /* $AE2D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE2D); return;
label_AE2E:;
    /* $AE2E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE2E); return;
label_AE2F:;
    /* $AE2F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE2F); return;
label_AE30:;
    /* $AE30: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE30); return;
label_AE31:;
    /* $AE31: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE31); return;
label_AE32:;
    /* $AE32: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE32); return;
label_AE33:;
    /* $AE33: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE33); return;
label_AE34:;
    /* $AE34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE34); return;
label_AE35:;
    /* $AE35: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE35); return;
label_AE36:;
    /* $AE36: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE36); return;
label_AE37:;
    /* $AE37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE37); return;
label_AE38:;
    /* $AE38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE38); return;
label_AE39:;
    /* $AE39: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE39); return;
label_AE3A:;
    /* $AE3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3A); return;
label_AE3B:;
    /* $AE3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3B); return;
label_AE3C:;
    /* $AE3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3C); return;
label_AE3D:;
    /* $AE3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3D); return;
label_AE3E:;
    /* $AE3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3E); return;
label_AE3F:;
    /* $AE3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3F); return;
label_AE40:;
    /* $AE40: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE40); return;
label_AE41:;
    /* $AE41: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE41); return;
label_AE42:;
    /* $AE42: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE43:;
    /* $AE43: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE46:;
    /* $AE46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE46); return;
label_AE47:;
    /* $AE47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE47); return;
label_AE48:;
    /* $AE48: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AE49:;
    /* $AE49: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE4B:;
    /* $AE4B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4B); return;
label_AE4C:;
    /* $AE4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4C); return;
label_AE4D:;
    /* $AE4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4D); return;
label_AE4E:;
    /* $AE4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4E); return;
label_AE4F:;
    /* $AE4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4F); return;
label_AE50:;
    /* $AE50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE50); return;
label_AE51:;
    /* $AE51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE51); return;
label_AE52:;
    /* $AE52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE52); return;
label_AE53:;
    /* $AE53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE53); return;
label_AE54:;
    /* $AE54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE54); return;
label_AE55:;
    /* $AE55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE55); return;
label_AE56:;
    /* $AE56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE56); return;
label_AE57:;
    /* $AE57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE57); return;
label_AE58:;
    /* $AE58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE58); return;
label_AE59:;
    /* $AE59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE59); return;
label_AE5A:;
    /* $AE5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5A); return;
label_AE5B:;
    /* $AE5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5B); return;
label_AE5C:;
    /* $AE5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5C); return;
label_AE5D:;
    /* $AE5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5D); return;
label_AE5E:;
    /* $AE5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5E); return;
label_AE5F:;
    /* $AE5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5F); return;
label_AE60:;
    /* $AE60: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE60); return;
label_AE61:;
    /* $AE61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE61); return;
label_AE62:;
    /* $AE62: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AE63:;
    /* $AE63: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A);
label_AE65:;
    /* $AE65: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE65); return;
label_AE66:;
    /* $AE66: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE66); return;
label_AE67:;
    /* $AE67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE67); return;
label_AE68:;
    /* $AE68: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AE69:;
    /* $AE69: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1918 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE6C:;
    /* $AE6C: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE6E:;
    /* $AE6E: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE70:;
    /* $AE70: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AE71:;
    /* $AE71: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x10) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE73:;
    /* $AE73: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x1A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE75:;
    /* $AE75: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1918 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE78:;
    /* $AE78: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE7A:;
    /* $AE7A: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE7C:;
    /* $AE7C: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AE7D:;
    /* $AE7D: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x10) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE7F:;
    /* $AE7F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x1A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE81:;
    /* $AE81: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1312 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE84:;
    /* $AE84: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE84); return;
label_AE85:;
    /* $AE85: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE85); return;
label_AE86:;
    /* $AE86: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE86); return;
label_AE87:;
    /* $AE87: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE87); return;
label_AE88:;
    /* $AE88: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AE89:;
    /* $AE89: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE8B:;
    /* $AE8B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x26; FLAG_NZ(g_cpu.A);
label_AE8D:;
    /* $AE8D: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x24; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE8F:;
    /* $AE8F: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x22); FLAG_NZ(g_cpu.A);
label_AE91:;
    /* $AE91: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE93:;
    /* $AE93: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x2A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE95:;
    /* $AE95: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x28; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AE97:;
    /* $AE97: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x26; FLAG_NZ(g_cpu.A);
label_AE99:;
    /* $AE99: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x24; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE9B:;
    /* $AE9B: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x22); FLAG_NZ(g_cpu.A);
label_AE9D:;
    /* $AE9D: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE9F:;
    /* $AE9F: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x2A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA1:;
    /* $AEA1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x22; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AEA3:;
    /* $AEA3: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AEA5:;
    /* $AEA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEA5); return;
label_AEA6:;
    /* $AEA6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEA6); return;
label_AEA7:;
    /* $AEA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEA7); return;
label_AEA8:;
    /* $AEA8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEA8); return;
label_AEA9:;
    /* $AEA9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEA9); return;
label_AEAA:;
    /* $AEAA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEAA); return;
label_AEAB:;
    /* $AEAB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEAB); return;
label_AEAC:;
    /* $AEAC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEAC); return;
label_AEAD:;
    /* $AEAD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEAD); return;
label_AEAE:;
    /* $AEAE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEAE); return;
label_AEAF:;
    /* $AEAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEAF); return;
label_AEB0:;
    /* $AEB0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB0); return;
label_AEB1:;
    /* $AEB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB1); return;
label_AEB2:;
    /* $AEB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB2); return;
label_AEB3:;
    /* $AEB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB3); return;
label_AEB4:;
    /* $AEB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB4); return;
label_AEB5:;
    /* $AEB5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB5); return;
label_AEB6:;
    /* $AEB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB6); return;
label_AEB7:;
    /* $AEB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB7); return;
label_AEB8:;
    /* $AEB8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB8); return;
label_AEB9:;
    /* $AEB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB9); return;
label_AEBA:;
    /* $AEBA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEBA); return;
label_AEBB:;
    /* $AEBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEBB); return;
label_AEBC:;
    /* $AEBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEBC); return;
label_AEBD:;
    /* $AEBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEBD); return;
label_AEBE:;
    /* $AEBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEBE); return;
label_AEBF:;
    /* $AEBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEBF); return;
label_AEC0:;
    /* $AEC0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC0); return;
label_AEC1:;
    /* $AEC1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC1); return;
label_AEC2:;
    /* $AEC2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC2); return;
label_AEC3:;
    /* $AEC3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC3); return;
label_AEC4:;
    /* $AEC4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC4); return;
label_AEC5:;
    /* $AEC5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC5); return;
label_AEC6:;
    /* $AEC6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC6); return;
label_AEC7:;
    /* $AEC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC7); return;
label_AEC8:;
    /* $AEC8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC8); return;
label_AEC9:;
    /* $AEC9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC9); return;
label_AECA:;
    /* $AECA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAECA); return;
label_AECB:;
    /* $AECB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAECB); return;
label_AECC:;
    /* $AECC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAECC); return;
label_AECD:;
    /* $AECD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAECD); return;
label_AECE:;
    /* $AECE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAECE); return;
label_AECF:;
    /* $AECF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAECF); return;
label_AED0:;
    /* $AED0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED0); return;
label_AED1:;
    /* $AED1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED1); return;
label_AED2:;
    /* $AED2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED2); return;
label_AED3:;
    /* $AED3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED3); return;
label_AED4:;
    /* $AED4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED4); return;
label_AED5:;
    /* $AED5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED5); return;
label_AED6:;
    /* $AED6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED6); return;
label_AED7:;
    /* $AED7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED7); return;
label_AED8:;
    /* $AED8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED8); return;
label_AED9:;
    /* $AED9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED9); return;
label_AEDA:;
    /* $AEDA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEDA); return;
label_AEDB:;
    /* $AEDB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEDB); return;
label_AEDC:;
    /* $AEDC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEDC); return;
label_AEDD:;
    /* $AEDD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEDD); return;
label_AEDE:;
    /* $AEDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEDE); return;
label_AEDF:;
    /* $AEDF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEDF); return;
label_AEE0:;
    /* $AEE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE0); return;
label_AEE1:;
    /* $AEE1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE1); return;
label_AEE2:;
    /* $AEE2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE2); return;
label_AEE3:;
    /* $AEE3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE3); return;
label_AEE4:;
    /* $AEE4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE4); return;
label_AEE5:;
    /* $AEE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE5); return;
label_AEE6:;
    /* $AEE6: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEE7:;
    /* $AEE7: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AE89;
    }
label_AEE9:;
    /* $AEE9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEEA:;
    /* $AEEA: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0E8C), 3); return; }
label_AEEC:;
    /* $AEEC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEED:;
    /* $AEED: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x0088, -1);
label_AEF0:;
    /* $AEF0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF0); return;
label_AEF1:;
    /* $AEF1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF1); return;
label_AEF2:;
    /* $AEF2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF2); return;
label_AEF3:;
    /* $AEF3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF3); return;
label_AEF4:;
    /* $AEF4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF4); return;
label_AEF5:;
    /* $AEF5: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x48) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEF7:;
    /* $AEF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF7); return;
label_AEF8:;
    /* $AEF8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF8); return;
label_AEF9:;
    /* $AEF9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF9); return;
label_AEFA:;
    /* $AEFA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEFA); return;
label_AEFB:;
    /* $AEFB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEFB); return;
label_AEFC:;
    /* $AEFC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEFC); return;
label_AEFD:;
    /* $AEFD: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x44 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEFF:;
    /* $AEFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEFF); return;
label_AF00:;
    /* $AF00: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF00); return;
label_AF01:;
    /* $AF01: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF01); return;
label_AF02:;
    /* $AF02: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF02); return;
label_AF03:;
    /* $AF03: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF03); return;
label_AF04:;
    /* $AF04: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF04); return;
label_AF05:;
    /* $AF05: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AF06:;
    /* $AF06: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF07:;
    /* $AF07: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF07); return;
label_AF08:;
    /* $AF08: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF08); return;
label_AF09:;
    /* $AF09: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF09); return;
label_AF0A:;
    /* $AF0A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF0A); return;
label_AF0B:;
    /* $AF0B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF0B); return;
label_AF0C:;
    /* $AF0C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF0C); return;
label_AF0D:;
    /* $AF0D: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x48) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF0F:;
    /* $AF0F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF0F); return;
label_AF10:;
    /* $AF10: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF10); return;
label_AF11:;
    /* $AF11: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF11); return;
label_AF12:;
    /* $AF12: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF12); return;
label_AF13:;
    /* $AF13: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF13); return;
label_AF14:;
    /* $AF14: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF14); return;
label_AF15:;
    /* $AF15: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x84 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF17:;
    /* $AF17: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x50; FLAG_NZ(g_cpu.Y);
label_AF19:;
    /* $AF19: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AEBB;
    }
label_AF1B:;
    /* $AF1B: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AEAD;
    }
label_AF1D:;
    /* $AF1D: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AF1E:;
    /* $AF1E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF1E); return;
label_AF1F:;
    /* $AF1F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF1F); return;
label_AF20:;
    /* $AF20: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF20); return;
label_AF21:;
    /* $AF21: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF21); return;
label_AF22:;
    /* $AF22: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF22); return;
label_AF23:;
    /* $AF23: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF23); return;
label_AF24:;
    /* $AF24: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF24); return;
label_AF25:;
    /* $AF25: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF25); return;
label_AF26:;
    /* $AF26: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_AF28:;
    /* $AF28: 99 */ maybe_trigger_vblank(5); nes_write((0x9B9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AF2B:;
    /* $AF2B: 99 */ maybe_trigger_vblank(5); nes_write((0x9D9C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AF2E:;
    /* $AF2E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF30:;
    /* $AF30: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF32:;
    /* $AF32: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AF34:;
    /* $AF34: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_AF36:;
    /* $AF36: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x94 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF38:;
    /* $AF38: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_AF3A:;
    /* $AF3A: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_AF3C:;
    /* $AF3C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_AF3E:;
    /* $AF3E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_AF40:;
    /* $AF40: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x01AD); FLAG_NZ(g_cpu.Y);
label_AF43:;
    /* $AF43: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF45:;
    /* $AF45: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA1; FLAG_NZ(g_cpu.Y);
label_AF47:;
    /* $AF47: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_AF49:;
    /* $AF49: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF4B:;
    /* $AF4B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_AF4D:;
    /* $AF4D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_AF4F:;
    /* $AF4F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF51:;
    /* $AF51: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x10 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF53:;
    /* $AF53: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF55:;
    /* $AF55: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF57:;
    /* $AF57: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF59:;
    /* $AF59: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF5B:;
    /* $AF5B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF5D:;
    /* $AF5D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x14 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF5F:;
    /* $AF5F: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF61:;
    /* $AF61: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF63:;
    /* $AF63: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF65:;
    /* $AF65: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF67:;
    /* $AF67: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x22 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF69:;
    /* $AF69: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AF6B:;
    /* $AF6B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF6D:;
    /* $AF6D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x010F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF70:;
    /* $AF70: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF72:;
    /* $AF72: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AF74:;
    /* $AF74: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF76:;
    /* $AF76: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAF9C, 3);
label_AF79:;
    /* $AF79: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAFD1, 3);
label_AF7C:;
    /* $AF7C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xAF85, 3);
label_AF7F:;
    /* $AF7F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AF81:;
    /* $AF81: 8D */ maybe_trigger_vblank(4); nes_write(0x0490, g_cpu.A);
label_AF84:;
    /* $AF84: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF85:;
    /* $AF85: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AF87:;
    /* $AF87: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_AF89:;
    /* $AF89: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AF98;
label_AF8B:;
    /* $AF8B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0490); FLAG_NZ(g_cpu.A);
label_AF8E:;
    /* $AF8E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_AF90:;
    /* $AF90: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AF9B;
label_AF92:;
    /* $AF92: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB16C, 3);
label_AF95:;
    /* $AF95: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAF9B, 3); return;
label_AF98:;
    /* $AF98: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB14F, 3);
    { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address(((uint16_t)_hi<<8|_lo)+1); }
    return;
label_AF9B:;
    /* $AF9B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF9C:;
    /* $AF9C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0490); FLAG_NZ(g_cpu.A);
label_AF9F:;
    /* $AF9F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_AFA1:;
    /* $AFA1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AFBB;
label_AFA3:;
    /* $AFA3: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AFA5:;
    /* $AFA5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AFA7:;
    /* $AFA7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_AFA9:;
    /* $AFA9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AFAB:;
    /* $AFAB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AFD0;
label_AFAD:;
    /* $AFAD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AFAF:;
    /* $AFAF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFB0:;
    /* $AFB0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_AFB8;
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
    /* $AFBF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AFC4;
label_AFC1:;
    /* $AFC1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFD0, 3); return;
label_AFC4:;
    /* $AFC4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFC5:;
    /* $AFC5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_AFCD;
label_AFC7:;
    /* $AFC7: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1D1, 3);
label_AFCA:;
    /* $AFCA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFD0, 3); return;
label_AFCD:;
    /* $AFCD: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1B9, 3);
    { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address(((uint16_t)_hi<<8|_lo)+1); }
    return;
label_AFD0:;
    /* $AFD0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AFD1:;
    /* $AFD1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0490); FLAG_NZ(g_cpu.A);
label_AFD4:;
    /* $AFD4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_AFD6:;
    /* $AFD6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AFF2;
label_AFD8:;
    /* $AFD8: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_AFDA:;
    /* $AFDA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AFDC:;
    /* $AFDC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_AFDE:;
    /* $AFDE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x75); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AFE0:;
    /* $AFE0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B009;
label_AFE2:;
    /* $AFE2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_AFE4:;
    /* $AFE4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFE5:;
    /* $AFE5: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFE6:;
    /* $AFE6: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFE7:;
    /* $AFE7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_AFEF;
label_AFE9:;
    /* $AFE9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB195, 3);
label_AFEC:;
    /* $AFEC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFF2, 3); return;
label_AFEF:;
    /* $AFEF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1AD, 3);
label_AFF2:;
    /* $AFF2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_AFF4:;
    /* $AFF4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_AFF6:;
    /* $AFF6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AFFB;
label_AFF8:;
    /* $AFF8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB009, 3); return;
label_AFFB:;
    /* $AFFB: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFFC:;
    /* $AFFC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFFD:;
    /* $AFFD: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AFFE:;
    /* $AFFE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_B006;
label_B000:;
    /* $B000: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB189, 3);
label_B003:;
    /* $B003: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB009, 3); return;
label_B006:;
    /* $B006: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB1A1, 3);
    { g_cpu.S++; uint8_t _lo=g_ram[0x100+g_cpu.S]; g_cpu.S++; uint8_t _hi=g_ram[0x100+g_cpu.S]; call_by_address(((uint16_t)_hi<<8|_lo)+1); }
    return;
label_B009:;
    /* $B009: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B00A:;
    /* $B00A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B00C:;
    /* $B00C: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_B00E:;
    /* $B00E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC4; FLAG_NZ(g_cpu.A);
label_B010:;
    /* $B010: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_B012:;
    /* $B012: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_B014:;
    /* $B014: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_B016:;
    /* $B016: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_B018:;
    /* $B018: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_B01A:;
    /* $B01A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_B01C:;
    /* $B01C: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_B01E:;
    /* $B01E: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC00F, 3);
label_B021:;
    /* $B021: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
label_B036:;
    /* $B036: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xC072, 3);
label_B039:;
    /* $B039: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=2 addr=$8100 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x02; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8100_b2();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_B03F:;
    /* $B03F: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8121 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8121_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_B045:;
    /* $B045: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB20D, 3);
label_B048:;
    /* $B048: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0491; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B04B:;
    /* $B04B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B04D:;
    /* $B04D: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_B04F:;
    /* $B04F: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=4 addr=$8115 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x04; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8115_b4();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_B055:;
    /* $B055: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B056:;
    /* $B056: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB1); FLAG_NZ(g_cpu.A);
label_B058:;
    /* $B058: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B05F;
label_B05A:;
    /* $B05A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B05C:;
    /* $B05C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB069, 3); return;
label_B05F:;
    /* $B05F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB219, 3);
label_B062:;
    /* $B062: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0491; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B065:;
    /* $B065: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B067:;
    /* $B067: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_B069:;
    /* $B069: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B06A:;
    /* $B06A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB1); FLAG_NZ(g_cpu.A);
label_B06C:;
    /* $B06C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B073;
label_B06E:;
    /* $B06E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B070:;
    /* $B070: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB083, 3); return;
label_B073:;
    /* $B073: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB0C9, 3);
label_B076:;
    /* $B076: 20 */ maybe_trigger_vblank(6); /* trampoline $F424 dispatch: bank=0 addr=$8115 */
{ uint8_t _sa=g_cpu.A,_sx=g_cpu.X,_sy=g_cpu.Y;
  uint8_t _sbank=nes_read(0xBFFF);
  g_cpu.A=0x00; func_F46D();
  g_cpu.A=_sa; g_cpu.X=_sx; g_cpu.Y=_sy;
  func_8115_b0();
  _sa=g_cpu.A;
  g_cpu.A=_sbank; func_F46D();
  g_cpu.A=_sa; }
label_B07C:;
    /* $B07C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0491; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B07F:;
    /* $B07F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_B081:;
    /* $B081: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_B083:;
    /* $B083: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B084:;
    /* $B084: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x88B4, 3);
label_B087:;
    /* $B087: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x88CC, 3);
label_B08A:;
    /* $B08A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB1); FLAG_NZ(g_cpu.A);
label_B08C:;
    /* $B08C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B093;
label_B08E:;
    /* $B08E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B090:;
    /* $B090: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB0C8, 3); return;
label_B093:;
    /* $B093: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B095:;
    /* $B095: 8D */ maybe_trigger_vblank(4); nes_write(0x0488, g_cpu.A);
label_B098:;
    /* $B098: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B09A:;
    /* $B09A: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_B09C:;
    /* $B09C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B09E:;
    /* $B09E: 8D */ maybe_trigger_vblank(4); nes_write(0x0496, g_cpu.A);
label_B0A1:;
    /* $B0A1: 8D */ maybe_trigger_vblank(4); nes_write(0x03E4, g_cpu.A);
label_B0A4:;
    /* $B0A4: 8D */ maybe_trigger_vblank(4); nes_write(0x03E7, g_cpu.A);
label_B0A7:;
    /* $B0A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0497, g_cpu.A);
label_B0AA:;
    /* $B0AA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_B0AD:;
    /* $B0AD: 8D */ maybe_trigger_vblank(4); nes_write(0x048A, g_cpu.A);
label_B0B0:;
    /* $B0B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E7); FLAG_NZ(g_cpu.A);
label_B0B3:;
    /* $B0B3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_B0C0;
label_B0B5:;
    /* $B0B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_B0B7:;
    /* $B0B7: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_B0BA:;
    /* $B0BA: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_B0BD:;
    /* $B0BD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB0C8, 3); return;
label_B0C0:;
    /* $B0C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B0C2:;
    /* $B0C2: 8D */ maybe_trigger_vblank(4); nes_write(0x03D9, g_cpu.A);
label_B0C5:;
    /* $B0C5: 8D */ maybe_trigger_vblank(4); nes_write(0x03DA, g_cpu.A);
label_B0C8:;
    /* $B0C8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B0C9:;
    /* $B0C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_B0CB:;
    /* $B0CB: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_B0CD:;
    /* $B0CD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_B0CF:;
    /* $B0CF: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_B0D1:;
    /* $B0D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B0D3:;
    /* $B0D3: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_B0D5:;
    /* $B0D5: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_B0D8:;
    /* $B0D8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_B0DA:;
    /* $B0DA: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0DD:;
    /* $B0DD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0DE:;
    /* $B0DE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_B0E0:;
    /* $B0E0: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0E3:;
    /* $B0E3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0E4:;
    /* $B0E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B0E6:;
    /* $B0E6: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0E9:;
    /* $B0E9: 85 */ maybe_trigger_vblank(3); nes_write(0x16, g_cpu.A);
label_B0EB:;
    /* $B0EB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0EC:;
    /* $B0EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B0EE:;
    /* $B0EE: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0F1:;
    /* $B0F1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B0F2:;
    /* $B0F2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F4:;
    /* $B0F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B0EE;
    }
label_B0F6:;
    /* $B0F6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_B0F8:;
    /* $B0F8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B0F9:;
    /* $B0F9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_B0FB:;
    /* $B0FB: 85 */ maybe_trigger_vblank(3); nes_write(0x14, g_cpu.A);
label_B0FD:;
    /* $B0FD: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_B101;
label_B0FF:;
    /* $B0FF: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B101:;
    /* $B101: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x15; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B103:;
    /* $B103: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B0D8;
    }
label_B105:;
    /* $B105: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B107:;
    /* $B107: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B10A:;
    /* $B10A: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B10D:;
    /* $B10D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B10E:;
    /* $B10E: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B10F:;
    /* $B10F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B110:;
    /* $B110: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B111:;
    /* $B111: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B112:;
    /* $B112: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B114:;
    /* $B114: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x041D); FLAG_NZ(g_cpu.X);
label_B117:;
    /* $B117: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B119:;
    /* $B119: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B11A:;
    /* $B11A: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_B11C:;
    /* $B11C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B11E:;
    /* $B11E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B11F:;
    /* $B11F: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B122:;
    /* $B122: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B123:;
    /* $B123: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B125:;
    /* $B125: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B126:;
    /* $B126: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B129:;
    /* $B129: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B12A:;
    /* $B12A: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B12C:;
    /* $B12C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B12D:;
    /* $B12D: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B130:;
    /* $B130: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B131:;
    /* $B131: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_B133:;
    /* $B133: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B135:;
    /* $B135: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B136:;
    /* $B136: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B139:;
    /* $B139: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B13A:;
    /* $B13A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xC4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B13C:;
    /* $B13C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B133;
    }
label_B13E:;
    /* $B13E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xC3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B140:;
    /* $B140: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B11C;
    }
label_B142:;
    /* $B142: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B144:;
    /* $B144: 9D */ maybe_trigger_vblank(5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B147:;
    /* $B147: 8E */ maybe_trigger_vblank(4); nes_write(0x041D, g_cpu.X);
label_B14A:;
    /* $B14A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B14B:;
    /* $B14B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B14C:;
    /* $B14C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B14D:;
    /* $B14D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B14E:;
    /* $B14E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B14F:;
    /* $B14F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_B151:;
    /* $B151: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_B153:;
    /* $B153: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B160;
label_B155:;
    /* $B155: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x25; FLAG_NZ(g_cpu.A);
label_B157:;
    /* $B157: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B159:;
    /* $B159: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B15B:;
    /* $B15B: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B15D:;
    /* $B15D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB168, 3); return;
label_B160:;
    /* $B160: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_B162:;
    /* $B162: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B164:;
    /* $B164: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B166:;
    /* $B166: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B168:;
    /* $B168: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B16B:;
    /* $B16B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B16C:;
    /* $B16C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_B16E:;
    /* $B16E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_B170:;
    /* $B170: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_B17D;
label_B172:;
    /* $B172: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_B174:;
    /* $B174: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B176:;
    /* $B176: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B178:;
    /* $B178: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B17A:;
    /* $B17A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB185, 3); return;
label_B17D:;
    /* $B17D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x46; FLAG_NZ(g_cpu.A);
label_B17F:;
    /* $B17F: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B181:;
    /* $B181: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B183:;
    /* $B183: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B185:;
    /* $B185: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B188:;
    /* $B188: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B189:;
    /* $B189: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x51; FLAG_NZ(g_cpu.A);
label_B18B:;
    /* $B18B: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B18D:;
    /* $B18D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B18F:;
    /* $B18F: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B191:;
    /* $B191: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B194:;
    /* $B194: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B195:;
    /* $B195: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_B197:;
    /* $B197: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B199:;
    /* $B199: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B19B:;
    /* $B19B: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B19D:;
    /* $B19D: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1A0:;
    /* $B1A0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B1A1:;
    /* $B1A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6B; FLAG_NZ(g_cpu.A);
label_B1A3:;
    /* $B1A3: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B1A5:;
    /* $B1A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1A7:;
    /* $B1A7: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1A9:;
    /* $B1A9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1AC:;
    /* $B1AC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B1AD:;
    /* $B1AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_B1AF:;
    /* $B1AF: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
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
label_B1B9:;
    /* $B1B9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_B1BB:;
    /* $B1BB: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B1BD:;
    /* $B1BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1BF:;
    /* $B1BF: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1C1:;
    /* $B1C1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1C4:;
    /* $B1C4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B1C5:;
    /* $B1C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x94; FLAG_NZ(g_cpu.A);
label_B1C7:;
    /* $B1C7: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
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
label_B1D1:;
    /* $B1D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_B1D3:;
    /* $B1D3: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B1D5:;
    /* $B1D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1D7:;
    /* $B1D7: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1D9:;
    /* $B1D9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1DC:;
    /* $B1DC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B1DD:;
    /* $B1DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_B1DF:;
    /* $B1DF: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B1E1:;
    /* $B1E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1E3:;
    /* $B1E3: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B1E5:;
    /* $B1E5: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B1E8:;
    /* $B1E8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
label_B201:;
    /* $B201: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_B203:;
    /* $B203: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B205:;
    /* $B205: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B207:;
    /* $B207: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B209:;
    /* $B209: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B20C:;
    /* $B20C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B20D:;
    /* $B20D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_B20F:;
    /* $B20F: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B211:;
    /* $B211: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_B213:;
    /* $B213: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B215:;
    /* $B215: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B218:;
    /* $B218: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B219:;
    /* $B219: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x91; FLAG_NZ(g_cpu.A);
label_B21B:;
    /* $B21B: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_B21D:;
    /* $B21D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_B21F:;
    /* $B21F: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_B221:;
    /* $B221: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xB10E, 3);
label_B224:;
    /* $B224: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B225:;
    /* $B225: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B226:;
    /* $B226: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B228:;
    /* $B228: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B229:;
    /* $B229: EE */ maybe_trigger_vblank(6); { uint16_t a=0x21EF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B22C:;
    /* $B22C: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B22E:;
    /* $B22E: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x02FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B231:;
    /* $B231: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B233:;
    /* $B233: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B234:;
    /* $B234: DB */ maybe_trigger_vblank(7); { uint16_t a=(0x21EF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B237:;
    /* $B237: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B239:;
    /* $B239: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x02FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B23C:;
    /* $B23C: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B23E:;
    /* $B23E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B23F:;
    /* $B23F: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x21CD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B242:;
    /* $B242: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B244:;
    /* $B244: DC */ maybe_trigger_vblank(4); (void)nes_read((0x02DD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B247:;
    /* $B247: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B249:;
    /* $B249: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B24A:;
    /* $B24A: DB */ maybe_trigger_vblank(7); { uint16_t a=(0x21CD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B24D:;
    /* $B24D: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B24F:;
    /* $B24F: DC */ maybe_trigger_vblank(4); (void)nes_read((0x02DD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B252:;
    /* $B252: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xB4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B254:;
    /* $B254: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B256:;
    /* $B256: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B257:;
    /* $B257: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD421 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B25A:;
    /* $B25A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B25C:;
    /* $B25C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B25D:;
    /* $B25D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B25F:;
    /* $B25F: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xB4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B261:;
    /* $B261: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B263:;
    /* $B263: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B266:;
    /* $B266: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x03 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B268:;
    /* $B268: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B269:;
    /* $B269: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB269); return;
label_B26A:;
    /* $B26A: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2102); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B26D:;
    /* $B26D: 95 */ maybe_trigger_vblank(4); nes_write((0x02 + g_cpu.X) & 0xFF, g_cpu.A);
label_B26F:;
    /* $B26F: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x21ED); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B272:;
    /* $B272: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x04 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B274:;
    /* $B274: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFC + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B277:;
    /* $B277: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B278:;
    /* $B278: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B279:;
    /* $B279: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B27B:;
    /* $B27B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B27C:;
    /* $B27C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB27C); return;
label_B27D:;
    /* $B27D: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xB421); FLAG_NZ(g_cpu.Y);
label_B280:;
    /* $B280: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBA); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B282:;
    /* $B282: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B285:;
    /* $B285: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x21 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B287:;
    /* $B287: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B288:;
    /* $B288: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B289:;
    /* $B289: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xE7; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B28B:;
    /* $B28B: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B28D:;
    /* $B28D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B28E:;
    /* $B28E: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B290:;
    /* $B290: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xF9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B292:;
    /* $B292: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B294:;
    /* $B294: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x21 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B296:;
    /* $B296: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B297:;
    /* $B297: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B298:;
    /* $B298: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x21BF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_B29B:;
    /* $B29B: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B29C:;
    /* $B29C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B29D:;
    /* $B29D: CE */ maybe_trigger_vblank(6); { uint16_t a=0x21CF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2A0:;
    /* $B2A0: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDF01 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2A3:;
    /* $B2A3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x21 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2A5:;
    /* $B2A5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B2A6:;
    /* $B2A6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2A8:;
    /* $B2A8: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xEA; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2AA:;
    /* $B2AA: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B2AC:;
    /* $B2AC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2AE:;
    /* $B2AE: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x21FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2B1:;
    /* $B2B1: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xC601 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2B4:;
    /* $B2B4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x21 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2B6:;
    /* $B2B6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B2B7:;
    /* $B2B7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2B9:;
    /* $B2B9: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x2100 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2BC:;
    /* $B2BC: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B2BD:;
    /* $B2BD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2BF:;
    /* $B2BF: CF */ maybe_trigger_vblank(6); { uint16_t a=0x2100; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B2C2:;
    /* $B2C2: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDF01 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2C5:;
    /* $B2C5: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x21; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2C7:;
    /* $B2C7: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
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
label_B2D4:;
    /* $B2D4: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B2D6:;
    /* $B2D6: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2D8:;
    /* $B2D8: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xAEAD); FLAG_NZ(g_cpu.Y);
label_B2DB:;
    /* $B2DB: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x2100); FLAG_NZ(g_cpu.A);
label_B2DE:;
    /* $B2DE: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x07 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B2E0:;
    /* $B2E0: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_B2E1:;
    /* $B2E1: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B2E4:;
    /* $B2E4: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x00BF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_B2E7:;
    /* $B2E7: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B2E9:;
    /* $B2E9: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xCA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B2EB:;
    /* $B2EB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB2EB); return;
label_B2EC:;
    /* $B2EC: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCECD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B2EF:;
    /* $B2EF: CF */ maybe_trigger_vblank(6); { uint16_t a=0x2100; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B2F2:;
    /* $B2F2: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2F4:;
    /* $B2F4: DC */ maybe_trigger_vblank(4); (void)nes_read((0xDEDD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B2F7:;
    /* $B2F7: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x2106 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B2FA:;
    /* $B2FA: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B2FC:;
    /* $B2FC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB2FC); return;
label_B2FD:;
    /* $B2FD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB2FD); return;
label_B2FE:;
    /* $B2FE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB2FE); return;
label_B2FF:;
    /* $B2FF: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x76 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B301:;
    /* $B301: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_B303:;
    /* $B303: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB303); return;
label_B304:;
    /* $B304: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB304); return;
label_B305:;
    /* $B305: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB305); return;
label_B306:;
    /* $B306: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB306); return;
label_B307:;
    /* $B307: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B309:;
    /* $B309: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B30B:;
    /* $B30B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB30B); return;
label_B30C:;
    /* $B30C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB30C); return;
label_B30D:;
    /* $B30D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB30D); return;
label_B30E:;
    /* $B30E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB30E); return;
label_B30F:;
    /* $B30F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB30F); return;
label_B310:;
    /* $B310: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xB4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B312:;
    /* $B312: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B314:;
    /* $B314: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x00)?1:0; g_cpu.X=(t-0x00)&0xFF; FLAG_NZ(g_cpu.X); }
label_B316:;
    /* $B316: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB316); return;
label_B317:;
    /* $B317: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB317); return;
label_B318:;
    /* $B318: DA */ maybe_trigger_vblank(2); /* NOP */
label_B319:;
    /* $B319: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB319); return;
label_B31A:;
    /* $B31A: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B31C:;
    /* $B31C: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xCA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B31E:;
    /* $B31E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB31E); return;
label_B31F:;
    /* $B31F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB31F); return;
label_B320:;
    /* $B320: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB320); return;
label_B321:;
    /* $B321: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB321); return;
label_B322:;
    /* $B322: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_B324:;
    /* $B324: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xF6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B326:;
    /* $B326: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B328:;
    /* $B328: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_B32A:;
    /* $B32A: 95 */ maybe_trigger_vblank(4); nes_write((0x06 + g_cpu.X) & 0xFF, g_cpu.A);
label_B32C:;
    /* $B32C: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x57 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B32E:;
    /* $B32E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B330:;
    /* $B330: 8E */ maybe_trigger_vblank(4); nes_write(0x218F, g_cpu.X);
label_B333:;
    /* $B333: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B335:;
    /* $B335: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B337:;
    /* $B337: 82 */ maybe_trigger_vblank(2); /* NOP */
label_B339:;
    /* $B339: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB339); return;
label_B33A:;
    /* $B33A: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B33C:;
    /* $B33C: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B33E:;
    /* $B33E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x12D1), 3); return; }
label_B340:;
    /* $B340: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_B341:;
    /* $B341: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B343:;
    /* $B343: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xB4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B345:;
    /* $B345: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B347:;
    /* $B347: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xA0)?1:0; g_cpu.X=(t-0xA0)&0xFF; FLAG_NZ(g_cpu.X); }
label_B349:;
    /* $B349: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B34B:;
    /* $B34B: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B34D:;
    /* $B34D: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B34F:;
    /* $B34F: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xCA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B351:;
    /* $B351: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB351); return;
label_B352:;
    /* $B352: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCECD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B355:;
    /* $B355: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_B357:;
    /* $B357: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xF6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B359:;
    /* $B359: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xDC); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B35B:;
    /* $B35B: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDFDE + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B35E:;
    /* $B35E: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x21; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B360:;
    /* $B360: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
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
label_B385:;
    /* $B385: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCECD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B388:;
    /* $B388: CF */ maybe_trigger_vblank(6); { uint16_t a=0x2100; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B38B:;
    /* $B38B: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B38D:;
    /* $B38D: DC */ maybe_trigger_vblank(4); (void)nes_read((0xDEDD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B390:;
    /* $B390: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x2106 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B393:;
    /* $B393: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B395:;
    /* $B395: 8D */ maybe_trigger_vblank(4); nes_write(0x8F8E, g_cpu.A);
label_B398:;
    /* $B398: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x76 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B39A:;
    /* $B39A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_B39C:;
    /* $B39C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B39D:;
    /* $B39D: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B39F:;
    /* $B39F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB39F); return;
label_B3A0:;
    /* $B3A0: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x95 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3A2:;
    /* $B3A2: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3A4:;
    /* $B3A4: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_B3A6:;
    /* $B3A6: 99 */ maybe_trigger_vblank(5); nes_write((0x0087 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B3A9:;
    /* $B3A9: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xB4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3AB:;
    /* $B3AB: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B3AD:;
    /* $B3AD: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xA7)?1:0; g_cpu.X=(t-0xA7)&0xFF; FLAG_NZ(g_cpu.X); }
label_B3AF:;
    /* $B3AF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B3B0:;
    /* $B3B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBF; FLAG_NZ(g_cpu.A);
label_B3B2:;
    /* $B3B2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB3B2); return;
label_B3B3:;
    /* $B3B3: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3B5:;
    /* $B3B5: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xCA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B3B7:;
    /* $B3B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB3B7); return;
label_B3B8:;
    /* $B3B8: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCECD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B3BB:;
    /* $B3BB: CF */ maybe_trigger_vblank(6); { uint16_t a=0x2100; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B3BE:;
    /* $B3BE: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3C0:;
    /* $B3C0: DC */ maybe_trigger_vblank(4); (void)nes_read((0xDEDD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B3C3:;
    /* $B3C3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x1000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B3C6:;
    /* $B3C6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3C8:;
    /* $B3C8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB3C8); return;
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
    /* $B3D4: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_B3E8;
label_B3D6:;
    /* $B3D6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B3D8:;
    /* $B3D8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_B3ED;
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
}

void func_A84D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A84D_b3");
#endif
    func_A84D_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD60_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD60_b3");
#endif
    func_A84D_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B035_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B035_b3");
#endif
    func_A84D_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B069_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B069_b3");
#endif
    func_A84D_b3_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B083_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B083_b3");
#endif
    func_A84D_b3_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0C8_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0C8_b3");
#endif
    func_A84D_b3_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AFD0_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFD0_b3");
#endif
    func_A84D_b3_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B009_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B009_b3");
#endif
    func_A84D_b3_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF9B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF9B_b3");
#endif
    func_A84D_b3_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9E6_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E6_b3");
#endif
    func_A84D_b3_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9E2_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E2_b3");
#endif
    func_A84D_b3_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A902_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A902_b3");
#endif
    func_A84D_b3_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A904_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b3");
#endif
    func_A84D_b3_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A900_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A900_b3");
#endif
    func_A84D_b3_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A960_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A960_b3");
#endif
    func_A84D_b3_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AFAF_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFAF_b3");
#endif
    func_A84D_b3_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1B1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1B1_b3");
#endif
    func_A84D_b3_body(16);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1C9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1C9_b3");
#endif
    func_A84D_b3_body(17);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B2C9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B2C9_b3");
#endif
    func_A84D_b3_body(18);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3C9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3C9_b3");
#endif
    func_A84D_b3_body(19);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9AE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9AE_b3");
#endif
    func_A84D_b3_body(20);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0AD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0AD_b3");
#endif
    func_A84D_b3_body(21);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_80B9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80B9_b3");
#endif
label_80B9:;
    /* $80B9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80B9); return;
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

void func_8505_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8505_b3");
#endif
label_8505:;
    /* $8505: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8507:;
    /* $8507: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8507); return;
}

void func_85AB_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AB_b3");
#endif
label_85AB:;
    /* $85AB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_85BE;
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
    maybe_trigger_vblank(2);
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
    /* $8C94: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CD4;
label_8C96:;
    /* $8C96: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8C98:;
    /* $8C98: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8C9A:;
    /* $8C9A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CD4;
label_8C9C:;
    /* $8C9C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA1); FLAG_NZ(g_cpu.A);
label_8C9E:;
    /* $8C9E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8CA0:;
    /* $8CA0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CA5;
label_8CA2:;
    /* $8CA2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8D29, 3); return;
label_8CA5:;
    /* $8CA5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_8CA8:;
    /* $8CA8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8CAA:;
    /* $8CAA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D29;
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
    /* $8CBA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8CC1;
label_8CBC:;
    /* $8CBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8CBE:;
    /* $8CBE: 8D */ maybe_trigger_vblank(4); nes_write(0x040B, g_cpu.A);
label_8CC1:;
    /* $8CC1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_8CC4:;
    /* $8CC4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_8CC6:;
    /* $8CC6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8CD1;
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
    /* $8CD8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CFC;
label_8CDA:;
    /* $8CDA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8CDD:;
    /* $8CDD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8CDF:;
    /* $8CDF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8CF9;
label_8CE1:;
    /* $8CE1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_8CE3:;
    /* $8CE3: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_8CE6:;
    /* $8CE6: CE */ maybe_trigger_vblank(6); { uint16_t a=0x04A8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CE9:;
    /* $8CE9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8CF4;
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
    /* $8D00: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D29;
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
    /* $8D16: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8D21;
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
    /* $8D1E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8CF9;
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
    /* $8D2D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D42;
label_8D2F:;
    /* $8D2F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D32:;
    /* $8D32: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8D34:;
    /* $8D34: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D7C;
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
    /* $8D46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8D5B;
label_8D48:;
    /* $8D48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_8D4B:;
    /* $8D4B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8D4D:;
    /* $8D4D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D7C;
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
    /* $8D5F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D69;
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
    /* $8D6E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8D7C;
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
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
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
    maybe_trigger_vblank(2);
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
    /* $A71A: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
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
    /* $9098: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90A2;
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
    /* $90A7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90BE;
label_90A9:;
    /* $90A9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCE); FLAG_NZ(g_cpu.A);
label_90AB:;
    /* $90AB: 8D */ maybe_trigger_vblank(4); nes_write(0x03F9, g_cpu.A);
label_90AE:;
    /* $90AE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0487); FLAG_NZ(g_cpu.A);
label_90B1:;
    /* $90B1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_90B3:;
    /* $90B3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_90BE;
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
    /* $9727: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_972E;
label_9729:;
    /* $9729: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_972A:;
    /* $972A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC6); g_cpu.A=r&0xFF; }
label_972C:;
    /* $972C: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_972E:;
    /* $972E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_9730:;
    /* $9730: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9737;
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
    /* $974F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9756;
label_9751:;
    /* $9751: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9752:;
    /* $9752: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC6); g_cpu.A=r&0xFF; }
label_9754:;
    /* $9754: 85 */ maybe_trigger_vblank(3); nes_write(0x15, g_cpu.A);
label_9756:;
    /* $9756: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x97); FLAG_NZ(g_cpu.A);
label_9758:;
    /* $9758: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_975F;
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
    /* $90B3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_90BE;
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
    /* $A4BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x046D), 3); return; }
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
    /* $A4DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x048D), 3); return; }
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

void func_A46D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A46D_b3");
#endif
label_A46D:;
    /* $A46D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A46F:;
    /* $A46F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A471:;
    /* $A471: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A473:;
    /* $A473: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
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
    /* $A49A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x044D), 3); return; }
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
    /* $A4BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A46D;
    }
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
    /* $A4DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x048D), 3); return; }
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

void func_A48D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A48D_b3");
#endif
label_A48D:;
    /* $A48D: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8D, g_cpu.Y);
label_A490:;
    /* $A490: 8D */ maybe_trigger_vblank(4); nes_write(0x9B9C, g_cpu.A);
label_A493:;
    /* $A493: 8E */ maybe_trigger_vblank(4); nes_write(0x0202, g_cpu.X);
label_A496:;
    /* $A496: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A497:;
    /* $A497: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A498:;
    /* $A498: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A499:;
    /* $A499: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A49A:;
    /* $A49A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x044D), 3); return; }
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
    /* $A4BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x046D), 3); return; }
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
    /* $A4DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A48D;
    }
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
    maybe_trigger_vblank(2);
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
    /* $A4BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x046D), 3); return; }
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
    /* $A4DA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x048D), 3); return; }
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

