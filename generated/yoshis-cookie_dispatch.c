/* AUTO-GENERATED dispatch table. DO NOT EDIT. */
#include "nes_runtime.h"
extern int g_current_bank;

void call_by_address(uint16_t addr) {
    switch (addr) {
        case 0xF6DD:
            func_F6DD(); break;
        case 0xC5C8:
            func_C5C8(); break;
        case 0xD2E7:
            func_D2E7(); break;
        case 0x8000:
            switch (g_current_bank) {
                case 7: func_C000(); break;
                case 0: func_8000_b0(); break;
                case 1: func_8000_b1(); break;
                case 2: func_8000_b2(); break;
                case 3: func_8000_b3(); break;
                case 4: func_8000_b4(); break;
                case 5: func_8000_b5(); break;
                case 6: func_8000_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xC078:
            func_C078(); break;
        case 0xC6E1:
            func_C6E1(); break;
        case 0xF4C0:
            func_F4C0(); break;
        case 0xF50E:
            func_F50E(); break;
        case 0xE2F1:
            func_E2F1(); break;
        case 0xC638:
            func_C638(); break;
        case 0xE550:
            func_E550(); break;
        case 0xD373:
            func_D373(); break;
        case 0xE264:
            func_E264(); break;
        case 0xF5AD:
            func_F5AD(); break;
        case 0xC6E7:
            func_C6E7(); break;
        case 0xCA38:
            func_CA38(); break;
        case 0xF599:
            func_F599(); break;
        case 0xE36F:
            func_E36F(); break;
        case 0xF424:
            func_F424(); break;
        case 0x8106:
            switch (g_current_bank) {
                case 2: func_8106_b2(); break;
                case 4: func_8106_b4(); break;
                case 3: func_8106_b3(); break;
                case 6: func_8106_b6(); break;
                case 1: func_8106_b1(); break;
                case 5: func_8106_b5(); break;
                case 0: func_8106_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xF5F3:
            func_F5F3(); break;
        case 0xF58A:
            func_F58A(); break;
        case 0xE696:
            func_E696(); break;
        case 0x8100:
            switch (g_current_bank) {
                case 2: func_8100_b2(); break;
                case 3: func_8100_b3(); break;
                case 1: func_8100_b1(); break;
                case 6: func_8100_b6(); break;
                case 4: func_8100_b4(); break;
                case 5: func_8100_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xF497:
            func_F497(); break;
        case 0xF485:
            func_F485(); break;
        case 0xC136:
            func_C136(); break;
        case 0xF54B:
            func_F54B(); break;
        case 0xC12B:
            func_C12B(); break;
        case 0xF480:
            func_F480(); break;
        case 0xF48D:
            func_F48D(); break;
        case 0xC101:
            func_C101(); break;
        case 0xF4A1:
            func_F4A1(); break;
        case 0xF4C9:
            func_F4C9(); break;
        case 0xE59E:
            func_E59E(); break;
        case 0xF516:
            func_F516(); break;
        case 0x811B:
            switch (g_current_bank) {
                case 4: func_811B_b4(); break;
                case 3: func_811B_b3(); break;
                case 0: func_811B_b0(); break;
                case 5: func_811B_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD393:
            func_D393(); break;
        case 0xD2E8:
            func_D2E8(); break;
        case 0xD322:
            func_D322(); break;
        case 0xF5C4:
            func_F5C4(); break;
        case 0xF5E6:
            func_F5E6(); break;
        case 0xC7CE:
            func_C7CE(); break;
        case 0xE64C:
            func_E64C(); break;
        case 0xC854:
            func_C854(); break;
        case 0x81AE:
            func_81AE_b0(); break;
        case 0xC855:
            func_C855(); break;
        case 0xC876:
            func_C876(); break;
        case 0xC87A:
            func_C87A(); break;
        case 0xC87E:
            func_C87E(); break;
        case 0xC87F:
            func_C87F(); break;
        case 0xC880:
            func_C880(); break;
        case 0xC881:
            func_C881(); break;
        case 0xC888:
            func_C888(); break;
        case 0xC8AE:
            func_C8AE(); break;
        case 0xC8B5:
            func_C8B5(); break;
        case 0xC8DF:
            func_C8DF(); break;
        case 0xC8E5:
            func_C8E5(); break;
        case 0xC8EC:
            func_C8EC(); break;
        case 0xC8F3:
            func_C8F3(); break;
        case 0xC8F4:
            func_C8F4(); break;
        case 0xC8F5:
            func_C8F5(); break;
        case 0xC8FC:
            func_C8FC(); break;
        case 0xC923:
            func_C923(); break;
        case 0xC939:
            func_C939(); break;
        case 0xC93A:
            func_C93A(); break;
        case 0xC93B:
            func_C93B(); break;
        case 0xC93C:
            func_C93C(); break;
        case 0xC93D:
            func_C93D(); break;
        case 0xC93E:
            func_C93E(); break;
        case 0xC93F:
            func_C93F(); break;
        case 0xC940:
            func_C940(); break;
        case 0xC947:
            func_C947(); break;
        case 0xC9B0:
            func_C9B0(); break;
        case 0xC9B1:
            func_C9B1(); break;
        case 0xC9B2:
            func_C9B2(); break;
        case 0xC9B3:
            func_C9B3(); break;
        case 0xC9B4:
            func_C9B4(); break;
        case 0xC9B5:
            func_C9B5(); break;
        case 0xC9B6:
            func_C9B6(); break;
        case 0xC9FB:
            func_C9FB(); break;
        case 0xC9FC:
            func_C9FC(); break;
        case 0xC9FD:
            func_C9FD(); break;
        case 0xC9FE:
            func_C9FE(); break;
        case 0xC9FF:
            func_C9FF(); break;
        case 0xCA00:
            func_CA00(); break;
        case 0xCA01:
            func_CA01(); break;
        case 0xCA02:
            func_CA02(); break;
        case 0xCA03:
            func_CA03(); break;
        case 0xCA04:
            func_CA04(); break;
        case 0xCA05:
            func_CA05(); break;
        case 0xCA06:
            func_CA06(); break;
        case 0xCA07:
            func_CA07(); break;
        case 0xCA08:
            func_CA08(); break;
        case 0xCA09:
            func_CA09(); break;
        case 0xCA0A:
            func_CA0A(); break;
        case 0xCA20:
            func_CA20(); break;
        case 0xCA21:
            func_CA21(); break;
        case 0xCA22:
            func_CA22(); break;
        case 0xCA23:
            func_CA23(); break;
        case 0xCA2A:
            func_CA2A(); break;
        case 0xCA31:
            func_CA31(); break;
        case 0xCA32:
            func_CA32(); break;
        case 0xCA33:
            func_CA33(); break;
        case 0xCA34:
            func_CA34(); break;
        case 0xCA35:
            func_CA35(); break;
        case 0xCA36:
            func_CA36(); break;
        case 0xCA37:
            func_CA37(); break;
        case 0xAD60:
            switch (g_current_bank) {
                case 0: func_AD60_b0(); break;
                case 1: func_AD60_b1(); break;
                case 2: func_AD60_b2(); break;
                case 3: func_AD60_b3(); break;
                case 4: func_AD60_b4(); break;
                case 5: func_AD60_b5(); break;
                case 6: func_AD60_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8157:
            switch (g_current_bank) {
                case 3: func_8157_b3(); break;
                case 5: func_8157_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xC869:
            func_C869(); break;
        case 0x8148:
            switch (g_current_bank) {
                case 3: func_8148_b3(); break;
                case 5: func_8148_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8103:
            switch (g_current_bank) {
                case 6: func_8103_b6(); break;
                case 1: func_8103_b1(); break;
                case 4: func_8103_b4(); break;
                case 3: func_8103_b3(); break;
                case 2: func_8103_b2(); break;
                case 5: func_8103_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCABE:
            func_CABE(); break;
        case 0xCABF:
            func_CABF(); break;
        case 0xCBAC:
            func_CBAC(); break;
        case 0xCBB9:
            func_CBB9(); break;
        case 0xCBBD:
            func_CBBD(); break;
        case 0xCBE7:
            func_CBE7(); break;
        case 0xCBEE:
            func_CBEE(); break;
        case 0xCBF5:
            func_CBF5(); break;
        case 0xCBF6:
            func_CBF6(); break;
        case 0xCBF7:
            func_CBF7(); break;
        case 0xCBF8:
            func_CBF8(); break;
        case 0xCBF9:
            func_CBF9(); break;
        case 0xCBFA:
            func_CBFA(); break;
        case 0xCBFB:
            func_CBFB(); break;
        case 0xCBFC:
            func_CBFC(); break;
        case 0xCC54:
            func_CC54(); break;
        case 0xCCDF:
            func_CCDF(); break;
        case 0xCCE0:
            func_CCE0(); break;
        case 0xCCE1:
            func_CCE1(); break;
        case 0xCD18:
            func_CD18(); break;
        case 0xCD1F:
            func_CD1F(); break;
        case 0xCD5E:
            func_CD5E(); break;
        case 0xCDAC:
            func_CDAC(); break;
        case 0xCDB3:
            func_CDB3(); break;
        case 0xCDBA:
            func_CDBA(); break;
        case 0xCDBB:
            func_CDBB(); break;
        case 0xCDC2:
            func_CDC2(); break;
        case 0xCDC9:
            func_CDC9(); break;
        case 0xCDCA:
            func_CDCA(); break;
        case 0xCDE2:
            func_CDE2(); break;
        case 0xCE0F:
            func_CE0F(); break;
        case 0xCE10:
            func_CE10(); break;
        case 0xCE11:
            func_CE11(); break;
        case 0xCE12:
            func_CE12(); break;
        case 0xCE19:
            func_CE19(); break;
        case 0xCE26:
            func_CE26(); break;
        case 0xCE27:
            func_CE27(); break;
        case 0xCE28:
            func_CE28(); break;
        case 0xCE29:
            func_CE29(); break;
        case 0xCE2A:
            func_CE2A(); break;
        case 0xCE2B:
            func_CE2B(); break;
        case 0xCE2C:
            func_CE2C(); break;
        case 0xCE2D:
            func_CE2D(); break;
        case 0xCE2E:
            func_CE2E(); break;
        case 0xCE2F:
            func_CE2F(); break;
        case 0xCE30:
            func_CE30(); break;
        case 0xCE31:
            func_CE31(); break;
        case 0xCE32:
            func_CE32(); break;
        case 0xCE33:
            func_CE33(); break;
        case 0xCE34:
            func_CE34(); break;
        case 0xCE35:
            func_CE35(); break;
        case 0xCE72:
            func_CE72(); break;
        case 0xCE79:
            func_CE79(); break;
        case 0xCEA5:
            func_CEA5(); break;
        case 0xCEBD:
            func_CEBD(); break;
        case 0xCF1D:
            func_CF1D(); break;
        case 0xCF49:
            func_CF49(); break;
        case 0xCF50:
            func_CF50(); break;
        case 0xCF51:
            func_CF51(); break;
        case 0xCF52:
            func_CF52(); break;
        case 0xCF53:
            func_CF53(); break;
        case 0xCF54:
            func_CF54(); break;
        case 0xCF55:
            func_CF55(); break;
        case 0xE3F4:
            func_E3F4(); break;
        case 0xE3D5:
            func_E3D5(); break;
        case 0xC024:
            func_C024(); break;
        case 0x811E:
            switch (g_current_bank) {
                case 0: func_811E_b0(); break;
                case 1: func_811E_b1(); break;
                case 4: func_811E_b4(); break;
                case 5: func_811E_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xF46D:
            func_F46D(); break;
        case 0xF46A:
            func_F46A(); break;
        case 0x816E:
            func_816E_b2(); break;
        case 0xF605:
            func_F605(); break;
        case 0x8109:
            switch (g_current_bank) {
                case 2: func_8109_b2(); break;
                case 3: func_8109_b3(); break;
                case 6: func_8109_b6(); break;
                case 4: func_8109_b4(); break;
                case 0: func_8109_b0(); break;
                case 1: func_8109_b1(); break;
                case 5: func_8109_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xC1BC:
            func_C1BC(); break;
        case 0xC1BD:
            func_C1BD(); break;
        case 0xC1FF:
            func_C1FF(); break;
        case 0xC2C3:
            func_C2C3(); break;
        case 0xC2C4:
            func_C2C4(); break;
        case 0xC2F7:
            func_C2F7(); break;
        case 0xC36C:
            func_C36C(); break;
        case 0xC36D:
            func_C36D(); break;
        case 0xC36E:
            func_C36E(); break;
        case 0xC36F:
            func_C36F(); break;
        case 0xC370:
            func_C370(); break;
        case 0xC371:
            func_C371(); break;
        case 0xC372:
            func_C372(); break;
        case 0xC373:
            func_C373(); break;
        case 0xC374:
            func_C374(); break;
        case 0xC375:
            func_C375(); break;
        case 0xC376:
            func_C376(); break;
        case 0xC377:
            func_C377(); break;
        case 0xC378:
            func_C378(); break;
        case 0xC38D:
            func_C38D(); break;
        case 0xC38E:
            func_C38E(); break;
        case 0xC3E6:
            func_C3E6(); break;
        case 0xC3E7:
            func_C3E7(); break;
        case 0xC3E8:
            func_C3E8(); break;
        case 0xC3E9:
            func_C3E9(); break;
        case 0xC3EA:
            func_C3EA(); break;
        case 0xC3EB:
            func_C3EB(); break;
        case 0xC435:
            func_C435(); break;
        case 0xC436:
            func_C436(); break;
        case 0xC4CC:
            func_C4CC(); break;
        case 0xC4CD:
            func_C4CD(); break;
        case 0xC4CE:
            func_C4CE(); break;
        case 0xC4CF:
            func_C4CF(); break;
        case 0xC4D0:
            func_C4D0(); break;
        case 0xC4D1:
            func_C4D1(); break;
        case 0xC4D8:
            func_C4D8(); break;
        case 0xC4D9:
            func_C4D9(); break;
        case 0xC4DA:
            func_C4DA(); break;
        case 0xC4DB:
            func_C4DB(); break;
        case 0xC4DC:
            func_C4DC(); break;
        case 0xC4DD:
            func_C4DD(); break;
        case 0xC4DE:
            func_C4DE(); break;
        case 0xC4DF:
            func_C4DF(); break;
        case 0xC4E0:
            func_C4E0(); break;
        case 0xC4E1:
            func_C4E1(); break;
        case 0xC4E2:
            func_C4E2(); break;
        case 0xC4E3:
            func_C4E3(); break;
        case 0xC4E4:
            func_C4E4(); break;
        case 0xC4E5:
            func_C4E5(); break;
        case 0xC4E6:
            func_C4E6(); break;
        case 0xC4E7:
            func_C4E7(); break;
        case 0xC524:
            func_C524(); break;
        case 0xC54F:
            func_C54F(); break;
        case 0xC56C:
            func_C56C(); break;
        case 0xC58C:
            func_C58C(); break;
        case 0xC596:
            func_C596(); break;
        case 0xC5C1:
            func_C5C1(); break;
        case 0xC5C2:
            func_C5C2(); break;
        case 0xC5C3:
            func_C5C3(); break;
        case 0xC5C4:
            func_C5C4(); break;
        case 0xC5C5:
            func_C5C5(); break;
        case 0xC5C6:
            func_C5C6(); break;
        case 0xC5C7:
            func_C5C7(); break;
        case 0x869C:
            func_869C_b4(); break;
        case 0xD312:
            func_D312(); break;
        case 0xF540:
            func_F540(); break;
        case 0x8112:
            switch (g_current_bank) {
                case 0: func_8112_b0(); break;
                case 3: func_8112_b3(); break;
                case 5: func_8112_b5(); break;
                case 4: func_8112_b4(); break;
                case 1: func_8112_b1(); break;
                case 6: func_8112_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xE66B:
            func_E66B(); break;
        case 0x8130:
            switch (g_current_bank) {
                case 0: func_8130_b0(); break;
                case 1: func_8130_b1(); break;
                case 3: func_8130_b3(); break;
                case 4: func_8130_b4(); break;
                case 5: func_8130_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xE66C:
            func_E66C(); break;
        case 0x8552:
            switch (g_current_bank) {
                case 0: func_8552_b0(); break;
                case 1: func_8552_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD0F0:
            func_D0F0(); break;
        case 0xD2BA:
            func_D2BA(); break;
        case 0xC8AD:
            func_C8AD(); break;
        case 0xE1C0:
            func_E1C0(); break;
        case 0xDA52:
            func_DA52(); break;
        case 0xC8DE:
            func_C8DE(); break;
        case 0xD8DB:
            func_D8DB(); break;
        case 0x8121:
            switch (g_current_bank) {
                case 7: func_C121(); break;
                case 1: func_8121_b1(); break;
                case 4: func_8121_b4(); break;
                case 5: func_8121_b5(); break;
                case 0: func_8121_b0(); break;
                case 6: func_8121_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x812D:
            switch (g_current_bank) {
                case 1: func_812D_b1(); break;
                case 3: func_812D_b3(); break;
                case 4: func_812D_b4(); break;
                case 5: func_812D_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xC922:
            func_C922(); break;
        case 0xDBA8:
            func_DBA8(); break;
        case 0x81E1:
            func_81E1_b0(); break;
        case 0xC9AF:
            func_C9AF(); break;
        case 0x8124:
            switch (g_current_bank) {
                case 4: func_8124_b4(); break;
                case 5: func_8124_b5(); break;
                case 3: func_8124_b3(); break;
                case 1: func_8124_b1(); break;
                case 0: func_8124_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8127:
            switch (g_current_bank) {
                case 4: func_8127_b4(); break;
                case 3: func_8127_b3(); break;
                case 5: func_8127_b5(); break;
                case 1: func_8127_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xC9FA:
            func_C9FA(); break;
        case 0x810F:
            switch (g_current_bank) {
                case 6: func_810F_b6(); break;
                case 3: func_810F_b3(); break;
                case 5: func_810F_b5(); break;
                case 4: func_810F_b4(); break;
                case 1: func_810F_b1(); break;
                case 0: func_810F_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAD7B:
            func_AD7B_b5(); break;
        case 0xB80C:
            func_B80C_b5(); break;
        case 0xAD91:
            func_AD91_b5(); break;
        case 0xAD5D:
            func_AD5D_b5(); break;
        case 0x9524:
            func_9524_b3(); break;
        case 0x9491:
            switch (g_current_bank) {
                case 3: func_9491_b3(); break;
                case 6: func_9491_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9479:
            switch (g_current_bank) {
                case 3: func_9479_b3(); break;
                case 5: func_9479_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8128:
            func_8128_b6(); break;
        case 0xCAE6:
            func_CAE6(); break;
        case 0xE002:
            func_E002(); break;
        case 0xEE0E:
            func_EE0E(); break;
        case 0xEE99:
            func_EE99(); break;
        case 0x8118:
            switch (g_current_bank) {
                case 3: func_8118_b3(); break;
                case 0: func_8118_b0(); break;
                case 4: func_8118_b4(); break;
                case 5: func_8118_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCBE6:
            func_CBE6(); break;
        case 0x813C:
            switch (g_current_bank) {
                case 3: func_813C_b3(); break;
                case 0: func_813C_b0(); break;
                case 1: func_813C_b1(); break;
                case 6: func_813C_b6(); break;
                case 5: func_813C_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCC1D:
            func_CC1D(); break;
        case 0xCC2F:
            func_CC2F(); break;
        case 0x813F:
            switch (g_current_bank) {
                case 3: func_813F_b3(); break;
                case 0: func_813F_b0(); break;
                case 5: func_813F_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8115:
            switch (g_current_bank) {
                case 7: func_C115(); break;
                case 3: func_8115_b3(); break;
                case 5: func_8115_b5(); break;
                case 1: func_8115_b1(); break;
                case 4: func_8115_b4(); break;
                case 0: func_8115_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCC8E:
            func_CC8E(); break;
        case 0xE017:
            func_E017(); break;
        case 0xCCDE:
            func_CCDE(); break;
        case 0xE07F:
            func_E07F(); break;
        case 0x8142:
            switch (g_current_bank) {
                case 3: func_8142_b3(); break;
                case 0: func_8142_b0(); break;
                case 5: func_8142_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xDDFE:
            func_DDFE(); break;
        case 0xDF3A:
            func_DF3A(); break;
        case 0xDEDC:
            func_DEDC(); break;
        case 0xDE8D:
            func_DE8D(); break;
        case 0xDE38:
            func_DE38(); break;
        case 0x8145:
            switch (g_current_bank) {
                case 3: func_8145_b3(); break;
                case 0: func_8145_b0(); break;
                case 5: func_8145_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x810C:
            switch (g_current_bank) {
                case 3: func_810C_b3(); break;
                case 4: func_810C_b4(); break;
                case 6: func_810C_b6(); break;
                case 1: func_810C_b1(); break;
                case 0: func_810C_b0(); break;
                case 5: func_810C_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCD17:
            func_CD17(); break;
        case 0x8133:
            switch (g_current_bank) {
                case 3: func_8133_b3(); break;
                case 1: func_8133_b1(); break;
                case 5: func_8133_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8166:
            switch (g_current_bank) {
                case 3: func_8166_b3(); break;
                case 5: func_8166_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD32E:
            func_D32E(); break;
        case 0xCDAB:
            func_CDAB(); break;
        case 0x81E4:
            func_81E4_b0(); break;
        case 0x812A:
            switch (g_current_bank) {
                case 3: func_812A_b3(); break;
                case 1: func_812A_b1(); break;
                case 4: func_812A_b4(); break;
                case 5: func_812A_b5(); break;
                case 6: func_812A_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCE71:
            func_CE71(); break;
        case 0x815A:
            switch (g_current_bank) {
                case 3: func_815A_b3(); break;
                case 5: func_815A_b5(); break;
                case 0: func_815A_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x815D:
            switch (g_current_bank) {
                case 3: func_815D_b3(); break;
                case 5: func_815D_b5(); break;
                case 0: func_815D_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCEBC:
            func_CEBC(); break;
        case 0xCF1C:
            func_CF1C(); break;
        case 0xCF48:
            func_CF48(); break;
        case 0x82BC:
            func_82BC_b0(); break;
        case 0x8540:
            switch (g_current_bank) {
                case 2: func_8540_b2(); break;
                case 0: func_8540_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x84B7:
            func_84B7_b2(); break;
        case 0x84FE:
            func_84FE_b2(); break;
        case 0x8491:
            func_8491_b2(); break;
        case 0x81E2:
            switch (g_current_bank) {
                case 2: func_81E2_b2(); break;
                case 6: func_81E2_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8249:
            func_8249_b2(); break;
        case 0x8477:
            func_8477_b2(); break;
        case 0x8309:
            func_8309_b2(); break;
        case 0x83D1:
            func_83D1_b2(); break;
        case 0x825F:
            func_825F_b2(); break;
        case 0x8459:
            switch (g_current_bank) {
                case 2: func_8459_b2(); break;
                case 6: func_8459_b6(); break;
                case 1: func_8459_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x82A7:
            func_82A7_b2(); break;
        case 0xE7C9:
            func_E7C9(); break;
        case 0xC21B:
            func_C21B(); break;
        case 0xE77D:
            func_E77D(); break;
        case 0xE84E:
            func_E84E(); break;
        case 0xE906:
            func_E906(); break;
        case 0xE92C:
            func_E92C(); break;
        case 0xE8F1:
            func_E8F1(); break;
        case 0xDC53:
            func_DC53(); break;
        case 0xE72F:
            func_E72F(); break;
        case 0xE6FC:
            func_E6FC(); break;
        case 0xE76D:
            func_E76D(); break;
        case 0xDC7B:
            func_DC7B(); break;
        case 0xC2E0:
            func_C2E0(); break;
        case 0xD316:
            func_D316(); break;
        case 0x81C6:
            func_81C6_b0(); break;
        case 0xC313:
            func_C313(); break;
        case 0xC3AA:
            func_C3AA(); break;
        case 0x81DE:
            func_81DE_b0(); break;
        case 0x8160:
            switch (g_current_bank) {
                case 3: func_8160_b3(); break;
                case 6: func_8160_b6(); break;
                case 5: func_8160_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x81BD:
            func_81BD_b0(); break;
        case 0x81C3:
            func_81C3_b0(); break;
        case 0xC5C0:
            func_C5C0(); break;
        case 0x81C9:
            func_81C9_b0(); break;
        case 0x86A8:
            func_86A8_b4(); break;
        case 0x81E7:
            switch (g_current_bank) {
                case 0: func_81E7_b0(); break;
                case 4: func_81E7_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8362:
            switch (g_current_bank) {
                case 0: func_8362_b0(); break;
                case 5: func_8362_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xE695:
            func_E695(); break;
        case 0xEC47:
            func_EC47(); break;
        case 0xE41D:
            func_E41D(); break;
        case 0xE3F5:
            func_E3F5(); break;
        case 0xEDE8:
            func_EDE8(); break;
        case 0xD2B9:
            func_D2B9(); break;
        case 0xE461:
            func_E461(); break;
        case 0xE43A:
            func_E43A(); break;
        case 0xCF56:
            func_CF56(); break;
        case 0x8139:
            switch (g_current_bank) {
                case 3: func_8139_b3(); break;
                case 1: func_8139_b1(); break;
                case 5: func_8139_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD049:
            func_D049(); break;
        case 0xD29A:
            func_D29A(); break;
        case 0xD2E6:
            func_D2E6(); break;
        case 0xD2D9:
            func_D2D9(); break;
        case 0x8F9C:
            func_8F9C_b1(); break;
        case 0xE23D:
            func_E23D(); break;
        case 0xE23E:
            func_E23E(); break;
        case 0xE1D9:
            func_E1D9(); break;
        case 0xD8B9:
            func_D8B9(); break;
        case 0xDFEA:
            func_DFEA(); break;
        case 0xD8A2:
            func_D8A2(); break;
        case 0xDFDE:
            func_DFDE(); break;
        case 0x8E6B:
            func_8E6B_b1(); break;
        case 0x8CFE:
            func_8CFE_b1(); break;
        case 0xB059:
            func_B059_b1(); break;
        case 0x8C30:
            switch (g_current_bank) {
                case 7: func_CC30(); break;
                case 3: func_8C30_b3(); break;
                case 6: func_8C30_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAEA4:
            func_AEA4_b0(); break;
        case 0xB03E:
            func_B03E_b4(); break;
        case 0x969E:
            func_969E_b4(); break;
        case 0xA240:
            func_A240_b4(); break;
        case 0x8B3D:
            func_8B3D_b4(); break;
        case 0x8FD7:
            func_8FD7_b3(); break;
        case 0x8421:
            func_8421_b6(); break;
        case 0x8EF8:
            func_8EF8_b6(); break;
        case 0xB845:
            func_B845_b5(); break;
        case 0xB81E:
            func_B81E_b5(); break;
        case 0xB837:
            switch (g_current_bank) {
                case 5: func_B837_b5(); break;
                case 4: func_B837_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9442:
            func_9442_b3(); break;
        case 0x9546:
            func_9546_b3(); break;
        case 0x942A:
            func_942A_b3(); break;
        case 0x9513:
            func_9513_b3(); break;
        case 0x81DB:
            func_81DB_b0(); break;
        case 0x9501:
            func_9501_b3(); break;
        case 0x93FA:
            func_93FA_b3(); break;
        case 0x9523:
            func_9523_b3(); break;
        case 0x9412:
            func_9412_b3(); break;
        case 0xC00F:
            func_C00F(); break;
        case 0x8132:
            func_8132_b6(); break;
        case 0x9F5B:
            func_9F5B_b6(); break;
        case 0xA03E:
            func_A03E_b6(); break;
        case 0xCBAB:
            func_CBAB(); break;
        case 0x8154:
            switch (g_current_bank) {
                case 3: func_8154_b3(); break;
                case 5: func_8154_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xDDB5:
            func_DDB5(); break;
        case 0xEE26:
            func_EE26(); break;
        case 0xEE27:
            func_EE27(); break;
        case 0xEE5A:
            func_EE5A(); break;
        case 0xEEAD:
            func_EEAD(); break;
        case 0xEEAE:
            func_EEAE(); break;
        case 0xEEB2:
            func_EEB2(); break;
        case 0xEEB6:
            func_EEB6(); break;
        case 0xEEBA:
            func_EEBA(); break;
        case 0x8812:
            func_8812_b3(); break;
        case 0xADA2:
            func_ADA2_b1(); break;
        case 0xB022:
            switch (g_current_bank) {
                case 3: func_B022_b3(); break;
                case 4: func_B022_b4(); break;
                case 0: func_B022_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB1E9:
            switch (g_current_bank) {
                case 3: func_B1E9_b3(); break;
                case 4: func_B1E9_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x823F:
            func_823F_b0(); break;
        case 0x8181:
            switch (g_current_bank) {
                case 3: func_8181_b3(); break;
                case 0: func_8181_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8169:
            switch (g_current_bank) {
                case 3: func_8169_b3(); break;
                case 5: func_8169_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xDFCC:
            func_DFCC(); break;
        case 0xB1F5:
            func_B1F5_b3(); break;
        case 0xE49F:
            func_E49F(); break;
        case 0xDF72:
            func_DF72(); break;
        case 0xDF0E:
            func_DF0E(); break;
        case 0xE4C1:
            func_E4C1(); break;
        case 0xB201:
            func_B201_b3(); break;
        case 0x8A58:
            func_8A58_b3(); break;
        case 0x8A82:
            func_8A82_b3(); break;
        case 0x8199:
            switch (g_current_bank) {
                case 3: func_8199_b3(); break;
                case 0: func_8199_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x81B1:
            switch (g_current_bank) {
                case 3: func_81B1_b3(); break;
                case 0: func_81B1_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB00A:
            switch (g_current_bank) {
                case 7: func_F00A(); break;
                case 3: func_B00A_b3(); break;
                case 1: func_B00A_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD362:
            func_D362(); break;
        case 0xF656:
            func_F656(); break;
        case 0xB210:
            func_B210_b4(); break;
        case 0x9832:
            func_9832_b4(); break;
        case 0xAEE2:
            func_AEE2_b1(); break;
        case 0x86BF:
            func_86BF_b5(); break;
        case 0x8844:
            func_8844_b5(); break;
        case 0xAEBC:
            func_AEBC_b0(); break;
        case 0x9565:
            func_9565_b5(); break;
        case 0xB9F9:
            func_B9F9_b4(); break;
        case 0x9F37:
            func_9F37_b4(); break;
        case 0x9167:
            func_9167_b5(); break;
        case 0x8ADA:
            func_8ADA_b3(); break;
        case 0x8B2E:
            func_8B2E_b3(); break;
        case 0x81DC:
            func_81DC_b3(); break;
        case 0x8207:
            func_8207_b3(); break;
        case 0x8469:
            func_8469_b2(); break;
        case 0x84B6:
            func_84B6_b2(); break;
        case 0x8176:
            switch (g_current_bank) {
                case 2: func_8176_b2(); break;
                case 6: func_8176_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8338:
            func_8338_b2(); break;
        case 0x81F7:
            func_81F7_b2(); break;
        case 0x8494:
            func_8494_b2(); break;
        case 0x833B:
            func_833B_b0(); break;
        case 0x9547:
            func_9547_b3(); break;
        case 0xE815:
            func_E815(); break;
        case 0xE117:
            func_E117(); break;
        case 0xE954:
            func_E954(); break;
        case 0xE485:
            func_E485(); break;
        case 0xA045:
            switch (g_current_bank) {
                case 7: func_E045(); break;
                case 1: func_A045_b1(); break;
                case 5: func_A045_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA118:
            func_A118_b1(); break;
        case 0x8136:
            switch (g_current_bank) {
                case 7: func_C136(); break;
                case 1: func_8136_b1(); break;
                case 5: func_8136_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xDD14:
            func_DD14(); break;
        case 0xDD6A:
            func_DD6A(); break;
        case 0x87E9:
            func_87E9_b3(); break;
        case 0x861B:
            func_861B_b0(); break;
        case 0x8BAA:
            func_8BAA_b3(); break;
        case 0xAE7E:
            switch (g_current_bank) {
                case 0: func_AE7E_b0(); break;
                case 1: func_AE7E_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8314:
            func_8314_b4(); break;
        case 0x8BBF:
            func_8BBF_b3(); break;
        case 0x8354:
            switch (g_current_bank) {
                case 4: func_8354_b4(); break;
                case 6: func_8354_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x82D6:
            func_82D6_b4(); break;
        case 0x8216:
            switch (g_current_bank) {
                case 4: func_8216_b4(); break;
                case 1: func_8216_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8311:
            func_8311_b3(); break;
        case 0x85B8:
            switch (g_current_bank) {
                case 0: func_85B8_b0(); break;
                case 1: func_85B8_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x83FC:
            func_83FC_b6(); break;
        case 0x8EBF:
            func_8EBF_b6(); break;
        case 0x85FA:
            func_85FA_b0(); break;
        case 0x8634:
            func_8634_b0(); break;
        case 0x8597:
            switch (g_current_bank) {
                case 0: func_8597_b0(); break;
                case 5: func_8597_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8220:
            func_8220_b0(); break;
        case 0x82D8:
            func_82D8_b0(); break;
        case 0x82F9:
            func_82F9_b0(); break;
        case 0x831A:
            func_831A_b0(); break;
        case 0x8385:
            func_8385_b0(); break;
        case 0x8384:
            func_8384_b0(); break;
        case 0x8655:
            func_8655_b0(); break;
        case 0x8676:
            func_8676_b0(); break;
        case 0x8409:
            func_8409_b0(); break;
        case 0x83E8:
            func_83E8_b0(); break;
        case 0x842A:
            func_842A_b0(); break;
        case 0x8123:
            func_8123_b2(); break;
        case 0xEC57:
            func_EC57(); break;
        case 0xECCD:
            func_ECCD(); break;
        case 0xE429:
            func_E429(); break;
        case 0xEE0D:
            func_EE0D(); break;
        case 0x8273:
            func_8273_b0(); break;
        case 0xE471:
            func_E471(); break;
        case 0xD043:
            func_D043(); break;
        case 0x9886:
            switch (g_current_bank) {
                case 1: func_9886_b1(); break;
                case 3: func_9886_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9CEA:
            func_9CEA_b1(); break;
        case 0xAF76:
            switch (g_current_bank) {
                case 3: func_AF76_b3(); break;
                case 0: func_AF76_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD06F:
            func_D06F(); break;
        case 0xD070:
            func_D070(); break;
        case 0xD080:
            func_D080(); break;
        case 0xD090:
            func_D090(); break;
        case 0xD0A3:
            func_D0A3(); break;
        case 0xD0B6:
            func_D0B6(); break;
        case 0xD0C0:
            func_D0C0(); break;
        case 0xD0CA:
            func_D0CA(); break;
        case 0xD0D4:
            func_D0D4(); break;
        case 0xD0DE:
            func_D0DE(); break;
        case 0xD0DF:
            func_D0DF(); break;
        case 0xD0EA:
            func_D0EA(); break;
        case 0x9072:
            func_9072_b1(); break;
        case 0x9064:
            func_9064_b1(); break;
        case 0x9260:
            func_9260_b1(); break;
        case 0x9360:
            func_9360_b1(); break;
        case 0xC048:
            func_C048(); break;
        case 0x9003:
            switch (g_current_bank) {
                case 7: func_D003(); break;
                case 1: func_9003_b1(); break;
                case 2: func_9003_b2(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x88E2:
            func_88E2_b1(); break;
        case 0x8906:
            func_8906_b1(); break;
        case 0x9060:
            func_9060_b1(); break;
        case 0x9078:
            func_9078_b1(); break;
        case 0xC04E:
            func_C04E(); break;
        case 0xC054:
            func_C054(); break;
        case 0xC03F:
            func_C03F(); break;
        case 0x906F:
            func_906F_b1(); break;
        case 0x9079:
            func_9079_b1(); break;
        case 0x918E:
            func_918E_b1(); break;
        case 0x90F0:
            func_90F0_b1(); break;
        case 0x8C08:
            func_8C08_b1(); break;
        case 0xEBDE:
            func_EBDE(); break;
        case 0xE24F:
            func_E24F(); break;
        case 0xDFAA:
            func_DFAA(); break;
        case 0x8210:
            func_8210_b1(); break;
        case 0x8202:
            func_8202_b1(); break;
        case 0x8739:
            func_8739_b1(); break;
        case 0x87F2:
            func_87F2_b1(); break;
        case 0xC04B:
            func_C04B(); break;
        case 0x81A5:
            func_81A5_b1(); break;
        case 0x81FE:
            func_81FE_b1(); break;
        case 0xC051:
            func_C051(); break;
        case 0xC057:
            func_C057(); break;
        case 0x820D:
            func_820D_b1(); break;
        case 0x8217:
            func_8217_b1(); break;
        case 0x8854:
            func_8854_b1(); break;
        case 0x8C2E:
            func_8C2E_b1(); break;
        case 0x8E7E:
            func_8E7E_b1(); break;
        case 0x8E7F:
            func_8E7F_b1(); break;
        case 0x8E83:
            func_8E83_b1(); break;
        case 0x8E84:
            func_8E84_b1(); break;
        case 0x8E85:
            func_8E85_b1(); break;
        case 0x8E86:
            func_8E86_b1(); break;
        case 0x8E8D:
            func_8E8D_b1(); break;
        case 0x8D11:
            switch (g_current_bank) {
                case 1: func_8D11_b1(); break;
                case 3: func_8D11_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D12:
            func_8D12_b1(); break;
        case 0x8D16:
            switch (g_current_bank) {
                case 1: func_8D16_b1(); break;
                case 3: func_8D16_b3(); break;
                case 6: func_8D16_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D17:
            func_8D17_b1(); break;
        case 0x8D18:
            switch (g_current_bank) {
                case 7: func_CD18(); break;
                case 1: func_8D18_b1(); break;
                case 0: func_8D18_b0(); break;
                case 6: func_8D18_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D19:
            func_8D19_b1(); break;
        case 0x8D20:
            func_8D20_b1(); break;
        case 0xB06C:
            func_B06C_b1(); break;
        case 0xB06D:
            func_B06D_b1(); break;
        case 0xB0CE:
            func_B0CE_b1(); break;
        case 0xB0D2:
            func_B0D2_b1(); break;
        case 0xB0D3:
            func_B0D3_b1(); break;
        case 0xB0DA:
            func_B0DA_b1(); break;
        case 0xB121:
            func_B121_b1(); break;
        case 0xA960:
            switch (g_current_bank) {
                case 1: func_A960_b1(); break;
                case 0: func_A960_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D00:
            switch (g_current_bank) {
                case 1: func_8D00_b1(); break;
                case 0: func_8D00_b0(); break;
                case 6: func_8D00_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xC05D:
            func_C05D(); break;
        case 0xB0CD:
            func_B0CD_b1(); break;
        case 0x8C70:
            func_8C70_b3(); break;
        case 0x8D79:
            func_8D79_b3(); break;
        case 0x8D7C:
            switch (g_current_bank) {
                case 3: func_8D7C_b3(); break;
                case 4: func_8D7C_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D29:
            switch (g_current_bank) {
                case 3: func_8D29_b3(); break;
                case 5: func_8D29_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8CF9:
            func_8CF9_b3(); break;
        case 0x8EAE:
            switch (g_current_bank) {
                case 7: func_CEAE(); break;
                case 3: func_8EAE_b3(); break;
                case 4: func_8EAE_b4(); break;
                case 6: func_8EAE_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8E38:
            func_8E38_b3(); break;
        case 0x8D89:
            func_8D89_b3(); break;
        case 0x8DE5:
            func_8DE5_b3(); break;
        case 0x9390:
            func_9390_b3(); break;
        case 0xA2A0:
            func_A2A0_b4(); break;
        case 0xBB24:
            func_BB24_b4(); break;
        case 0xBB44:
            func_BB44_b4(); break;
        case 0xA30A:
            switch (g_current_bank) {
                case 4: func_A30A_b4(); break;
                case 2: func_A30A_b2(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA30B:
            func_A30B_b4(); break;
        case 0xA30C:
            func_A30C_b4(); break;
        case 0xA310:
            func_A310_b4(); break;
        case 0xA314:
            func_A314_b4(); break;
        case 0xA318:
            func_A318_b4(); break;
        case 0xA3FB:
            func_A3FB_b4(); break;
        case 0xA407:
            func_A407_b4(); break;
        case 0xA434:
            func_A434_b4(); break;
        case 0xA438:
            func_A438_b4(); break;
        case 0xA439:
            func_A439_b4(); break;
        case 0xA43A:
            func_A43A_b4(); break;
        case 0xA43B:
            func_A43B_b4(); break;
        case 0xA43C:
            func_A43C_b4(); break;
        case 0xA43D:
            func_A43D_b4(); break;
        case 0xA444:
            func_A444_b4(); break;
        case 0x8B88:
            switch (g_current_bank) {
                case 4: func_8B88_b4(); break;
                case 6: func_8B88_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8BD7:
            func_8BD7_b4(); break;
        case 0x9FC1:
            func_9FC1_b4(); break;
        case 0x9FE1:
            func_9FE1_b4(); break;
        case 0x814B:
            func_814B_b5(); break;
        case 0x8C4C:
            switch (g_current_bank) {
                case 7: func_CC4C(); break;
                case 4: func_8C4C_b4(); break;
                case 6: func_8C4C_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8518:
            func_8518_b4(); break;
        case 0x8C4D:
            func_8C4D_b4(); break;
        case 0x8C4E:
            func_8C4E_b4(); break;
        case 0x8C52:
            func_8C52_b4(); break;
        case 0x8C56:
            func_8C56_b4(); break;
        case 0x8C5A:
            func_8C5A_b4(); break;
        case 0x8D3D:
            switch (g_current_bank) {
                case 4: func_8D3D_b4(); break;
                case 6: func_8D3D_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D49:
            func_8D49_b4(); break;
        case 0x8D76:
            func_8D76_b4(); break;
        case 0x8D7A:
            func_8D7A_b4(); break;
        case 0x8D7B:
            func_8D7B_b4(); break;
        case 0x8D7D:
            switch (g_current_bank) {
                case 4: func_8D7D_b4(); break;
                case 1: func_8D7D_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D7E:
            func_8D7E_b4(); break;
        case 0x8D7F:
            func_8D7F_b4(); break;
        case 0x8DDC:
            switch (g_current_bank) {
                case 4: func_8DDC_b4(); break;
                case 6: func_8DDC_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x903E:
            func_903E_b3(); break;
        case 0x900E:
            func_900E_b3(); break;
        case 0x90BE:
            func_90BE_b3(); break;
        case 0x90CB:
            switch (g_current_bank) {
                case 7: func_D0CB(); break;
                case 3: func_90CB_b3(); break;
                case 6: func_90CB_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9363:
            func_9363_b3(); break;
        case 0x92B9:
            func_92B9_b3(); break;
        case 0x9310:
            func_9310_b3(); break;
        case 0x928A:
            func_928A_b3(); break;
        case 0x8433:
            func_8433_b6(); break;
        case 0x8F09:
            func_8F09_b6(); break;
        case 0xB85E:
            func_B85E_b5(); break;
        case 0xB852:
            func_B852_b5(); break;
        case 0x858E:
            func_858E_b0(); break;
        case 0x82A4:
            func_82A4_b6(); break;
        case 0x8382:
            func_8382_b6(); break;
        case 0x9FB0:
            func_9FB0_b6(); break;
        case 0x982D:
            func_982D_b3(); break;
        case 0xDDE3:
            func_DDE3(); break;
        case 0xDDF9:
            func_DDF9(); break;
        case 0xEE55:
            func_EE55(); break;
        case 0xDD6B:
            func_DD6B(); break;
        case 0xEE31:
            func_EE31(); break;
        case 0xEE8B:
            func_EE8B(); break;
        case 0xEE94:
            func_EE94(); break;
        case 0xDD90:
            func_DD90(); break;
        case 0xEE64:
            func_EE64(); break;
        case 0xEF96:
            func_EF96(); break;
        case 0xF03B:
            func_F03B(); break;
        case 0xC00C:
            func_C00C(); break;
        case 0xC027:
            func_C027(); break;
        case 0x889C:
            func_889C_b3(); break;
        case 0xADF9:
            func_ADF9_b1(); break;
        case 0xADFA:
            func_ADFA_b1(); break;
        case 0xADFE:
            func_ADFE_b1(); break;
        case 0xAE02:
            func_AE02_b1(); break;
        case 0xAE06:
            func_AE06_b1(); break;
        case 0xAE0A:
            func_AE0A_b1(); break;
        case 0xAE0E:
            func_AE0E_b1(); break;
        case 0xAE12:
            switch (g_current_bank) {
                case 1: func_AE12_b1(); break;
                case 4: func_AE12_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAE16:
            func_AE16_b1(); break;
        case 0xB035:
            func_B035_b3(); break;
        case 0xB036:
            func_B036_b3(); break;
        case 0xB056:
            func_B056_b3(); break;
        case 0xB06A:
            func_B06A_b3(); break;
        case 0xB084:
            func_B084_b3(); break;
        case 0xB10E:
            switch (g_current_bank) {
                case 3: func_B10E_b3(); break;
                case 4: func_B10E_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xE54F:
            func_E54F(); break;
        case 0xE4EC:
            func_E4EC(); break;
        case 0xE4F2:
            func_E4F2(); break;
        case 0xE4F8:
            func_E4F8(); break;
        case 0xE4FE:
            func_E4FE(); break;
        case 0xE504:
            func_E504(); break;
        case 0x88E4:
            func_88E4_b3(); break;
        case 0x8A66:
            func_8A66_b3(); break;
        case 0x8941:
            func_8941_b3(); break;
        case 0x8A81:
            func_8A81_b3(); break;
        case 0x8A96:
            func_8A96_b3(); break;
        case 0x8AD9:
            func_8AD9_b3(); break;
        case 0xF65F:
            func_F65F(); break;
        case 0xF665:
            func_F665(); break;
        case 0xA18A:
            func_A18A_b4(); break;
        case 0xAF11:
            func_AF11_b1(); break;
        case 0xAF70:
            func_AF70_b1(); break;
        case 0xAF71:
            func_AF71_b1(); break;
        case 0xAF75:
            switch (g_current_bank) {
                case 1: func_AF75_b1(); break;
                case 0: func_AF75_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAF79:
            func_AF79_b1(); break;
        case 0xAF7D:
            func_AF7D_b1(); break;
        case 0xAF81:
            switch (g_current_bank) {
                case 1: func_AF81_b1(); break;
                case 4: func_AF81_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAF85:
            switch (g_current_bank) {
                case 1: func_AF85_b1(); break;
                case 3: func_AF85_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAF89:
            func_AF89_b1(); break;
        case 0xAF8D:
            func_AF8D_b1(); break;
        case 0x86E9:
            func_86E9_b5(); break;
        case 0x8733:
            func_8733_b5(); break;
        case 0x86EA:
            func_86EA_b5(); break;
        case 0x886E:
            switch (g_current_bank) {
                case 5: func_886E_b5(); break;
                case 1: func_886E_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x88B8:
            func_88B8_b5(); break;
        case 0x886F:
            func_886F_b5(); break;
        case 0xAF4F:
            func_AF4F_b0(); break;
        case 0xAF10:
            func_AF10_b0(); break;
        case 0xB3C6:
            func_B3C6_b0(); break;
        case 0xB07B:
            func_B07B_b0(); break;
        case 0xB0AA:
            switch (g_current_bank) {
                case 0: func_B0AA_b0(); break;
                case 3: func_B0AA_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB0ED:
            func_B0ED_b0(); break;
        case 0xB182:
            func_B182_b0(); break;
        case 0xB1F3:
            func_B1F3_b0(); break;
        case 0xB239:
            func_B239_b0(); break;
        case 0xB29D:
            func_B29D_b0(); break;
        case 0xB342:
            func_B342_b0(); break;
        case 0x81B5:
            func_81B5_b4(); break;
        case 0x81B7:
            func_81B7_b0(); break;
        case 0x81B6:
            func_81B6_b4(); break;
        case 0x81B4:
            func_81B4_b0(); break;
        case 0xBA1F:
            func_BA1F_b4(); break;
        case 0xBA20:
            func_BA20_b4(); break;
        case 0xBA21:
            func_BA21_b4(); break;
        case 0xBA28:
            func_BA28_b4(); break;
        case 0xBA2F:
            func_BA2F_b4(); break;
        case 0xBA4B:
            func_BA4B_b4(); break;
        case 0xBA4C:
            func_BA4C_b4(); break;
        case 0xBA4D:
            func_BA4D_b4(); break;
        case 0xBA4E:
            func_BA4E_b4(); break;
        case 0xBA6A:
            func_BA6A_b4(); break;
        case 0xBA6B:
            func_BA6B_b4(); break;
        case 0xBA6C:
            func_BA6C_b4(); break;
        case 0xBA6D:
            func_BA6D_b4(); break;
        case 0xBA6E:
            func_BA6E_b4(); break;
        case 0xBA6F:
            func_BA6F_b4(); break;
        case 0xBA70:
            func_BA70_b4(); break;
        case 0x9F5D:
            switch (g_current_bank) {
                case 4: func_9F5D_b4(); break;
                case 6: func_9F5D_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9F5E:
            func_9F5E_b4(); break;
        case 0x9F5F:
            func_9F5F_b4(); break;
        case 0x9F66:
            func_9F66_b4(); break;
        case 0x9F6D:
            func_9F6D_b4(); break;
        case 0x9F89:
            func_9F89_b4(); break;
        case 0x9F8A:
            func_9F8A_b4(); break;
        case 0x9F8B:
            func_9F8B_b4(); break;
        case 0x9F8C:
            func_9F8C_b4(); break;
        case 0x9FA8:
            func_9FA8_b4(); break;
        case 0x9FA9:
            func_9FA9_b4(); break;
        case 0x9FAA:
            func_9FAA_b4(); break;
        case 0x9FAB:
            func_9FAB_b4(); break;
        case 0x9FAC:
            func_9FAC_b4(); break;
        case 0x9FAD:
            func_9FAD_b4(); break;
        case 0x9FAE:
            func_9FAE_b4(); break;
        case 0x9195:
            func_9195_b5(); break;
        case 0x91C3:
            func_91C3_b5(); break;
        case 0x8AE8:
            func_8AE8_b3(); break;
        case 0x8B2D:
            func_8B2D_b3(); break;
        case 0x8B45:
            switch (g_current_bank) {
                case 3: func_8B45_b3(); break;
                case 6: func_8B45_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8BA9:
            func_8BA9_b3(); break;
        case 0x81D9:
            func_81D9_b2(); break;
        case 0x98B5:
            func_98B5_b3(); break;
        case 0x9A1D:
            func_9A1D_b3(); break;
        case 0x988B:
            func_988B_b3(); break;
        case 0x9989:
            func_9989_b3(); break;
        case 0x9593:
            func_9593_b3(); break;
        case 0x9634:
            func_9634_b3(); break;
        case 0x96E1:
            func_96E1_b3(); break;
        case 0x957F:
            func_957F_b3(); break;
        case 0x9786:
            func_9786_b3(); break;
        case 0xC063:
            func_C063(); break;
        case 0x9D7C:
            func_9D7C_b6(); break;
        case 0x9CAF:
            func_9CAF_b6(); break;
        case 0x9D71:
            func_9D71_b6(); break;
        case 0x9488:
            func_9488_b5(); break;
        case 0xA01B:
            func_A01B_b1(); break;
        case 0x9FE4:
            func_9FE4_b1(); break;
        case 0x9FCA:
            func_9FCA_b1(); break;
        case 0xA182:
            func_A182_b1(); break;
        case 0xA185:
            func_A185_b1(); break;
        case 0xA1A8:
            func_A1A8_b1(); break;
        case 0xA16E:
            switch (g_current_bank) {
                case 1: func_A16E_b1(); break;
                case 4: func_A16E_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA099:
            switch (g_current_bank) {
                case 1: func_A099_b1(); break;
                case 6: func_A099_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA782:
            func_A782_b1(); break;
        case 0xA8CD:
            switch (g_current_bank) {
                case 7: func_E8CD(); break;
                case 1: func_A8CD_b1(); break;
                case 3: func_A8CD_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9EB8:
            func_9EB8_b1(); break;
        case 0xA4BC:
            func_A4BC_b1(); break;
        case 0x9EE7:
            func_9EE7_b1(); break;
        case 0x9901:
            func_9901_b3(); break;
        case 0x9A29:
            func_9A29_b3(); break;
        case 0x99D1:
            func_99D1_b3(); break;
        case 0x85A0:
            switch (g_current_bank) {
                case 4: func_85A0_b4(); break;
                case 1: func_85A0_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xBA74:
            func_BA74_b4(); break;
        case 0x99F7:
            func_99F7_b3(); break;
        case 0x8650:
            func_8650_b4(); break;
        case 0x86B3:
            func_86B3_b4(); break;
        case 0xBC45:
            func_BC45_b4(); break;
        case 0x82E1:
            func_82E1_b4(); break;
        case 0xA0E2:
            func_A0E2_b4(); break;
        case 0x82FC:
            func_82FC_b4(); break;
        case 0x852F:
            switch (g_current_bank) {
                case 4: func_852F_b4(); break;
                case 0: func_852F_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8544:
            func_8544_b4(); break;
        case 0x8233:
            func_8233_b4(); break;
        case 0x9A35:
            func_9A35_b3(); break;
        case 0xA05F:
            func_A05F_b6(); break;
        case 0x9EEF:
            func_9EEF_b6(); break;
        case 0x9CBB:
            func_9CBB_b6(); break;
        case 0x8EEC:
            func_8EEC_b6(); break;
        case 0xA07E:
            func_A07E_b6(); break;
        case 0xA066:
            func_A066_b6(); break;
        case 0xECCC:
            func_ECCC(); break;
        case 0xEC86:
            func_EC86(); break;
        case 0xEC68:
            func_EC68(); break;
        case 0xED45:
            func_ED45(); break;
        case 0xECF7:
            func_ECF7(); break;
        case 0xECDE:
            func_ECDE(); break;
        case 0x937F:
            func_937F_b5(); break;
        case 0x9896:
            func_9896_b1(); break;
        case 0x9897:
            func_9897_b1(); break;
        case 0x98A7:
            func_98A7_b1(); break;
        case 0x9931:
            func_9931_b1(); break;
        case 0x994D:
            func_994D_b1(); break;
        case 0x9CFA:
            switch (g_current_bank) {
                case 1: func_9CFA_b1(); break;
                case 6: func_9CFA_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9CFB:
            func_9CFB_b1(); break;
        case 0x9D0B:
            switch (g_current_bank) {
                case 1: func_9D0B_b1(); break;
                case 5: func_9D0B_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9D95:
            switch (g_current_bank) {
                case 1: func_9D95_b1(); break;
                case 6: func_9D95_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9DB1:
            func_9DB1_b1(); break;
        case 0xAF9C:
            func_AF9C_b3(); break;
        case 0xAFD1:
            switch (g_current_bank) {
                case 3: func_AFD1_b3(); break;
                case 4: func_AFD1_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xF26A:
            func_F26A(); break;
        case 0xF2BF:
            func_F2BF(); break;
        case 0xF31B:
            func_F31B(); break;
        case 0xF36B:
            func_F36B(); break;
        case 0xF3C4:
            func_F3C4(); break;
        case 0xF3DC:
            func_F3DC(); break;
        case 0xF3F4:
            func_F3F4(); break;
        case 0xF40C:
            func_F40C(); break;
        case 0xC01E:
            func_C01E(); break;
        case 0xC021:
            func_C021(); break;
        case 0xC003:
            func_C003(); break;
        case 0xF0E4:
            func_F0E4(); break;
        case 0x829D:
            func_829D_b0(); break;
        case 0x88E5:
            func_88E5_b1(); break;
        case 0x890E:
            func_890E_b1(); break;
        case 0x904E:
            func_904E_b5(); break;
        case 0x90CA:
            func_90CA_b1(); break;
        case 0x93C4:
            func_93C4_b1(); break;
        case 0x90C9:
            func_90C9_b1(); break;
        case 0x91DE:
            func_91DE_b1(); break;
        case 0x91DF:
            func_91DF_b1(); break;
        case 0x91DB:
            func_91DB_b1(); break;
        case 0x918D:
            func_918D_b1(); break;
        case 0x9158:
            func_9158_b1(); break;
        case 0x90FA:
            func_90FA_b1(); break;
        case 0x84E3:
            func_84E3_b1(); break;
        case 0x8C2D:
            func_8C2D_b1(); break;
        case 0x8556:
            func_8556_b1(); break;
        case 0x85D5:
            func_85D5_b1(); break;
        case 0x816C:
            func_816C_b5(); break;
        case 0xEBFB:
            func_EBFB(); break;
        case 0xEBEF:
            func_EBEF(); break;
        case 0xC009:
            func_C009(); break;
        case 0xF171:
            func_F171(); break;
        case 0x8948:
            switch (g_current_bank) {
                case 1: func_8948_b1(); break;
                case 6: func_8948_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x896D:
            func_896D_b1(); break;
        case 0x825C:
            func_825C_b1(); break;
        case 0x8896:
            switch (g_current_bank) {
                case 1: func_8896_b1(); break;
                case 6: func_8896_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8893:
            func_8893_b1(); break;
        case 0x82F1:
            func_82F1_b1(); break;
        case 0x8C53:
            func_8C53_b1(); break;
        case 0x835E:
            func_835E_b1(); break;
        case 0x83D7:
            func_83D7_b1(); break;
        case 0x8438:
            func_8438_b5(); break;
        case 0x8AF1:
            func_8AF1_b1(); break;
        case 0x8F9B:
            func_8F9B_b1(); break;
        case 0x8C54:
            func_8C54_b1(); break;
        case 0x8E6A:
            switch (g_current_bank) {
                case 1: func_8E6A_b1(); break;
                case 6: func_8E6A_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA2E3:
            func_A2E3_b1(); break;
        case 0xC01B:
            func_C01B(); break;
        case 0xB163:
            func_B163_b1(); break;
        case 0x8897:
            func_8897_b1(); break;
        case 0xB120:
            func_B120_b1(); break;
        case 0xB162:
            func_B162_b1(); break;
        case 0xA96B:
            func_A96B_b1(); break;
        case 0xEBFC:
            func_EBFC(); break;
        case 0x8F47:
            switch (g_current_bank) {
                case 3: func_8F47_b3(); break;
                case 6: func_8F47_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8FD6:
            func_8FD6_b3(); break;
        case 0x8E5F:
            switch (g_current_bank) {
                case 3: func_8E5F_b3(); break;
                case 6: func_8E5F_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8DDF:
            func_8DDF_b3(); break;
        case 0x8E15:
            func_8E15_b3(); break;
        case 0x93F1:
            func_93F1_b3(); break;
        case 0xBB43:
            func_BB43_b4(); break;
        case 0xBB48:
            func_BB48_b4(); break;
        case 0x9B3A:
            func_9B3A_b5(); break;
        case 0xB5F5:
            func_B5F5_b4(); break;
        case 0xB9C4:
            func_B9C4_b4(); break;
        case 0xA6D4:
            func_A6D4_b4(); break;
        case 0xA3FA:
            func_A3FA_b4(); break;
        case 0xA89C:
            func_A89C_b4(); break;
        case 0xA48B:
            func_A48B_b4(); break;
        case 0xA420:
            func_A420_b4(); break;
        case 0xA433:
            func_A433_b4(); break;
        case 0xA77F:
            func_A77F_b4(); break;
        case 0xA445:
            func_A445_b4(); break;
        case 0x9FE0:
            func_9FE0_b4(); break;
        case 0x9FE5:
            func_9FE5_b4(); break;
        case 0xAC2C:
            func_AC2C_b5(); break;
        case 0x852E:
            func_852E_b4(); break;
        case 0x9B29:
            func_9B29_b4(); break;
        case 0x9F02:
            func_9F02_b4(); break;
        case 0x9324:
            func_9324_b4(); break;
        case 0x8D3C:
            func_8D3C_b4(); break;
        case 0x94EC:
            func_94EC_b4(); break;
        case 0x90DB:
            func_90DB_b4(); break;
        case 0x8D62:
            func_8D62_b4(); break;
        case 0x8D75:
            func_8D75_b4(); break;
        case 0x93CF:
            func_93CF_b4(); break;
        case 0x86DD:
            func_86DD_b4(); break;
        case 0x9095:
            func_9095_b4(); break;
        case 0x8DDB:
            func_8DDB_b4(); break;
        case 0x8E4D:
            func_8E4D_b4(); break;
        case 0x8E4E:
            func_8E4E_b4(); break;
        case 0x8FDE:
            func_8FDE_b4(); break;
        case 0x8E29:
            func_8E29_b4(); break;
        case 0x91AA:
            func_91AA_b3(); break;
        case 0x9150:
            func_9150_b3(); break;
        case 0x91A7:
            func_91A7_b3(); break;
        case 0x9289:
            func_9289_b3(); break;
        case 0x938A:
            func_938A_b3(); break;
        case 0x92DF:
            func_92DF_b3(); break;
        case 0x930A:
            func_930A_b3(); break;
        case 0x9340:
            func_9340_b3(); break;
        case 0x844F:
            func_844F_b6(); break;
        case 0x8539:
            func_8539_b6(); break;
        case 0x861D:
            func_861D_b6(); break;
        case 0x874D:
            switch (g_current_bank) {
                case 6: func_874D_b6(); break;
                case 1: func_874D_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x88A6:
            func_88A6_b6(); break;
        case 0x89D0:
            func_89D0_b6(); break;
        case 0x8AB6:
            func_8AB6_b6(); break;
        case 0x8BA4:
            func_8BA4_b6(); break;
        case 0x8C88:
            func_8C88_b6(); break;
        case 0x84EA:
            func_84EA_b6(); break;
        case 0x851A:
            func_851A_b6(); break;
        case 0x8F6B:
            func_8F6B_b6(); break;
        case 0x8F71:
            func_8F71_b6(); break;
        case 0x8F81:
            func_8F81_b6(); break;
        case 0x8F87:
            func_8F87_b6(); break;
        case 0x8FA1:
            func_8FA1_b6(); break;
        case 0x8FA7:
            func_8FA7_b6(); break;
        case 0x8FB7:
            func_8FB7_b6(); break;
        case 0x8FBD:
            func_8FBD_b6(); break;
        case 0x8FEC:
            func_8FEC_b6(); break;
        case 0x9024:
            func_9024_b6(); break;
        case 0x903A:
            switch (g_current_bank) {
                case 6: func_903A_b6(); break;
                case 2: func_903A_b2(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x81A9:
            func_81A9_b6(); break;
        case 0xFE8D:
            func_FE8D(); break;
        case 0xA905:
            func_A905_b6(); break;
        case 0x8DA0:
            func_8DA0_b6(); break;
        case 0x9074:
            func_9074_b6(); break;
        case 0x8189:
            func_8189_b6(); break;
        case 0x8195:
            func_8195_b6(); break;
        case 0x81C0:
            switch (g_current_bank) {
                case 7: func_C1C0(); break;
                case 6: func_81C0_b6(); break;
                case 0: func_81C0_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x81D4:
            func_81D4_b6(); break;
        case 0x81F5:
            func_81F5_b6(); break;
        case 0x8208:
            func_8208_b6(); break;
        case 0x8219:
            func_8219_b6(); break;
        case 0x822D:
            func_822D_b6(); break;
        case 0x8241:
            func_8241_b6(); break;
        case 0x8256:
            func_8256_b6(); break;
        case 0x826C:
            func_826C_b6(); break;
        case 0x827F:
            func_827F_b6(); break;
        case 0xF3AD:
            func_F3AD(); break;
        case 0xD005:
            func_D005(); break;
        case 0xA910:
            switch (g_current_bank) {
                case 6: func_A910_b6(); break;
                case 4: func_A910_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D81:
            switch (g_current_bank) {
                case 6: func_8D81_b6(); break;
                case 3: func_8D81_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x82C0:
            func_82C0_b6(); break;
        case 0x82C1:
            func_82C1_b6(); break;
        case 0x82D3:
            func_82D3_b6(); break;
        case 0x82D9:
            func_82D9_b6(); break;
        case 0x831B:
            func_831B_b6(); break;
        case 0x832A:
            func_832A_b6(); break;
        case 0x833C:
            func_833C_b6(); break;
        case 0x834E:
            func_834E_b6(); break;
        case 0x8369:
            func_8369_b6(); break;
        case 0xA260:
            func_A260_b6(); break;
        case 0xAD00:
            func_AD00_b6(); break;
        case 0x8394:
            func_8394_b6(); break;
        case 0x839F:
            func_839F_b6(); break;
        case 0x83B6:
            func_83B6_b6(); break;
        case 0x83BC:
            func_83BC_b6(); break;
        case 0x83D0:
            func_83D0_b6(); break;
        case 0x83D6:
            func_83D6_b6(); break;
        case 0xFFA9:
            func_FFA9(); break;
        case 0x9FBE:
            func_9FBE_b6(); break;
        case 0x9839:
            func_9839_b3(); break;
        case 0xF035:
            func_F035(); break;
        case 0xF028:
            func_F028(); break;
        case 0xEEBE:
            func_EEBE(); break;
        case 0xF023:
            func_F023(); break;
        case 0xEFE3:
            func_EFE3(); break;
        case 0xF0E3:
            func_F0E3(); break;
        case 0xF0D1:
            func_F0D1(); break;
        case 0xEF2A:
            func_EF2A(); break;
        case 0xF0CC:
            func_F0CC(); break;
        case 0xF089:
            func_F089(); break;
        case 0xE0F3:
            func_E0F3(); break;
        case 0xAE4C:
            func_AE4C_b1(); break;
        case 0xAE65:
            func_AE65_b1(); break;
        case 0xC072:
            func_C072(); break;
        case 0xB20D:
            func_B20D_b3(); break;
        case 0xB069:
            func_B069_b3(); break;
        case 0xB219:
            func_B219_b3(); break;
        case 0xB083:
            func_B083_b3(); break;
        case 0xB0C9:
            func_B0C9_b3(); break;
        case 0x88B4:
            func_88B4_b3(); break;
        case 0x88CC:
            switch (g_current_bank) {
                case 3: func_88CC_b3(); break;
                case 6: func_88CC_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB0C8:
            func_B0C8_b3(); break;
        case 0x88F4:
            func_88F4_b3(); break;
        case 0x8951:
            func_8951_b3(); break;
        case 0xF662:
            func_F662(); break;
        case 0xA1C3:
            func_A1C3_b4(); break;
        case 0xA19C:
            func_A19C_b4(); break;
        case 0xA1B5:
            func_A1B5_b4(); break;
        case 0xAFDC:
            func_AFDC_b1(); break;
        case 0xAFF5:
            func_AFF5_b1(); break;
        case 0xAFC3:
            func_AFC3_b1(); break;
        case 0x87EF:
            func_87EF_b5(); break;
        case 0x8786:
            func_8786_b5(); break;
        case 0x8787:
            func_8787_b5(); break;
        case 0x8732:
            switch (g_current_bank) {
                case 5: func_8732_b5(); break;
                case 0: func_8732_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8979:
            func_8979_b5(); break;
        case 0x890B:
            switch (g_current_bank) {
                case 7: func_C90B(); break;
                case 5: func_890B_b5(); break;
                case 6: func_890B_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x890C:
            func_890C_b5(); break;
        case 0x88B7:
            func_88B7_b5(); break;
        case 0xB3DE:
            func_B3DE_b0(); break;
        case 0xB3DF:
            func_B3DF_b0(); break;
        case 0xB3F1:
            func_B3F1_b0(); break;
        case 0xB42A:
            func_B42A_b0(); break;
        case 0xB42E:
            func_B42E_b0(); break;
        case 0xB432:
            func_B432_b0(); break;
        case 0xB07A:
            func_B07A_b0(); break;
        case 0xB17E:
            func_B17E_b0(); break;
        case 0xB3C2:
            func_B3C2_b0(); break;
        case 0x857D:
            func_857D_b0(); break;
        case 0x856C:
            func_856C_b0(); break;
        case 0xBCB1:
            func_BCB1_b4(); break;
        case 0x8163:
            func_8163_b5(); break;
        case 0xA14E:
            func_A14E_b4(); break;
        case 0xC060:
            func_C060(); break;
        case 0x96BE:
            func_96BE_b3(); break;
        case 0x96BD:
            func_96BD_b3(); break;
        case 0x97F9:
            func_97F9_b3(); break;
        case 0x9785:
            func_9785_b3(); break;
        case 0x9FA4:
            func_9FA4_b1(); break;
        case 0x9729:
            func_9729_b5(); break;
        case 0xA24A:
            func_A24A_b1(); break;
        case 0xA117:
            func_A117_b1(); break;
        case 0xA8C8:
            func_A8C8_b1(); break;
        case 0xA83D:
            func_A83D_b1(); break;
        case 0xC02A:
            func_C02A(); break;
        case 0xA9A0:
            func_A9A0_b1(); break;
        case 0xA99F:
            switch (g_current_bank) {
                case 1: func_A99F_b1(); break;
                case 4: func_A99F_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA5F1:
            func_A5F1_b1(); break;
        case 0xA570:
            func_A570_b1(); break;
        case 0xA5D8:
            func_A5D8_b1(); break;
        case 0x8643:
            switch (g_current_bank) {
                case 4: func_8643_b4(); break;
                case 6: func_8643_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x856A:
            func_856A_b4(); break;
        case 0xBB17:
            func_BB17_b4(); break;
        case 0xA193:
            func_A193_b5(); break;
        case 0xB285:
            func_B285_b5(); break;
        case 0x91C4:
            func_91C4_b5(); break;
        case 0x9318:
            func_9318_b5(); break;
        case 0x91F4:
            func_91F4_b5(); break;
        case 0x9205:
            func_9205_b5(); break;
        case 0xBCAB:
            func_BCAB_b4(); break;
        case 0xBC8A:
            func_BC8A_b4(); break;
        case 0xA148:
            func_A148_b4(); break;
        case 0xA127:
            func_A127_b4(); break;
        case 0x81D8:
            func_81D8_b0(); break;
        case 0x81A8:
            func_81A8_b0(); break;
        case 0x81D5:
            func_81D5_b0(); break;
        case 0x81D2:
            func_81D2_b0(); break;
        case 0x9440:
            func_9440_b6(); break;
        case 0x9458:
            func_9458_b6(); break;
        case 0x93C8:
            func_93C8_b5(); break;
        case 0x943C:
            func_943C_b5(); break;
        case 0x9698:
            func_9698_b1(); break;
        case 0x947E:
            switch (g_current_bank) {
                case 1: func_947E_b1(); break;
                case 5: func_947E_b5(); break;
                case 0: func_947E_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAA0C:
            func_AA0C_b1(); break;
        case 0x9930:
            func_9930_b1(); break;
        case 0x9CC5:
            func_9CC5_b1(); break;
        case 0xA34E:
            func_A34E_b1(); break;
        case 0x96A5:
            func_96A5_b1(); break;
        case 0x949B:
            func_949B_b1(); break;
        case 0x9957:
            func_9957_b1(); break;
        case 0x96B6:
            func_96B6_b1(); break;
        case 0x94EE:
            func_94EE_b1(); break;
        case 0x96EC:
            func_96EC_b1(); break;
        case 0x9587:
            func_9587_b1(); break;
        case 0x97E5:
            func_97E5_b1(); break;
        case 0x9AC4:
            func_9AC4_b1(); break;
        case 0x9D94:
            func_9D94_b1(); break;
        case 0x9CA0:
            func_9CA0_b1(); break;
        case 0xA5F6:
            func_A5F6_b1(); break;
        case 0x97F4:
            func_97F4_b1(); break;
        case 0x9AEA:
            func_9AEA_b1(); break;
        case 0x9DBB:
            func_9DBB_b1(); break;
        case 0x980D:
            func_980D_b1(); break;
        case 0x9B38:
            func_9B38_b1(); break;
        case 0x9851:
            func_9851_b1(); break;
        case 0x9BB1:
            func_9BB1_b1(); break;
        case 0xB1DD:
            func_B1DD_b3(); break;
        case 0xAFBB:
            func_AFBB_b3(); break;
        case 0xB1C5:
            func_B1C5_b3(); break;
        case 0xAFD0:
            func_AFD0_b3(); break;
        case 0xB1D1:
            func_B1D1_b3(); break;
        case 0xB1B9:
            func_B1B9_b3(); break;
        case 0xB195:
            func_B195_b3(); break;
        case 0xAFF2:
            func_AFF2_b3(); break;
        case 0xB1AD:
            func_B1AD_b3(); break;
        case 0xB009:
            switch (g_current_bank) {
                case 3: func_B009_b3(); break;
                case 0: func_B009_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB189:
            func_B189_b3(); break;
        case 0xB1A1:
            func_B1A1_b3(); break;
        case 0xB16C:
            func_B16C_b3(); break;
        case 0xAF9B:
            func_AF9B_b3(); break;
        case 0xB14F:
            func_B14F_b3(); break;
        case 0xF2BE:
            func_F2BE(); break;
        case 0xF2B4:
            func_F2B4(); break;
        case 0xF292:
            func_F292(); break;
        case 0x8281:
            func_8281_b0(); break;
        case 0xF31A:
            func_F31A(); break;
        case 0xF2E6:
            func_F2E6(); break;
        case 0xF33D:
            func_F33D(); break;
        case 0xF38C:
            func_F38C(); break;
        case 0xF3DB:
            func_F3DB(); break;
        case 0xF3F3:
            func_F3F3(); break;
        case 0xF40B:
            func_F40B(); break;
        case 0xF423:
            func_F423(); break;
        case 0xE142:
            func_E142(); break;
        case 0xDAFB:
            func_DAFB(); break;
        case 0xF16B:
            func_F16B(); break;
        case 0xF0F9:
            func_F0F9(); break;
        case 0x9136:
            switch (g_current_bank) {
                case 5: func_9136_b5(); break;
                case 6: func_9136_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9073:
            func_9073_b5(); break;
        case 0x9082:
            func_9082_b5(); break;
        case 0x9091:
            switch (g_current_bank) {
                case 5: func_9091_b5(); break;
                case 3: func_9091_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8FFB:
            func_8FFB_b5(); break;
        case 0xC012:
            func_C012(); break;
        case 0x93C9:
            func_93C9_b1(); break;
        case 0x944D:
            switch (g_current_bank) {
                case 1: func_944D_b1(); break;
                case 4: func_944D_b4(); break;
                case 5: func_944D_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x944C:
            func_944C_b1(); break;
        case 0x925B:
            func_925B_b1(); break;
        case 0x921D:
            func_921D_b1(); break;
        case 0x91A6:
            switch (g_current_bank) {
                case 1: func_91A6_b1(); break;
                case 4: func_91A6_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8553:
            func_8553_b1(); break;
        case 0x8496:
            func_8496_b1(); break;
        case 0x85D2:
            switch (g_current_bank) {
                case 1: func_85D2_b1(); break;
                case 4: func_85D2_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8344:
            func_8344_b5(); break;
        case 0x8301:
            func_8301_b5(); break;
        case 0x8365:
            func_8365_b5(); break;
        case 0x83C4:
            func_83C4_b5(); break;
        case 0x82B4:
            func_82B4_b5(); break;
        case 0x82B9:
            func_82B9_b5(); break;
        case 0xC015:
            func_C015(); break;
        case 0x8343:
            func_8343_b5(); break;
        case 0xD995:
            func_D995(); break;
        case 0xF1F0:
            func_F1F0(); break;
        case 0xF183:
            func_F183(); break;
        case 0x8972:
            func_8972_b1(); break;
        case 0x89EC:
            switch (g_current_bank) {
                case 7: func_C9EC(); break;
                case 1: func_89EC_b1(); break;
                case 6: func_89EC_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x89EB:
            func_89EB_b1(); break;
        case 0x825D:
            func_825D_b1(); break;
        case 0x835B:
            func_835B_b1(); break;
        case 0x82A0:
            func_82A0_b1(); break;
        case 0x83D4:
            func_83D4_b1(); break;
        case 0x8672:
            func_8672_b5(); break;
        case 0x85E5:
            switch (g_current_bank) {
                case 5: func_85E5_b5(); break;
                case 6: func_85E5_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8625:
            func_8625_b5(); break;
        case 0x859C:
            func_859C_b5(); break;
        case 0x8624:
            func_8624_b5(); break;
        case 0x8B95:
            switch (g_current_bank) {
                case 1: func_8B95_b1(); break;
                case 6: func_8B95_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8B87:
            func_8B87_b1(); break;
        case 0x8B58:
            func_8B58_b1(); break;
        case 0x8A1D:
            func_8A1D_b1(); break;
        case 0x8B83:
            func_8B83_b1(); break;
        case 0x8CF7:
            func_8CF7_b1(); break;
        case 0x8CE9:
            func_8CE9_b1(); break;
        case 0x8CBD:
            func_8CBD_b1(); break;
        case 0x864F:
            func_864F_b1(); break;
        case 0x8CE5:
            func_8CE5_b1(); break;
        case 0xA34B:
            func_A34B_b1(); break;
        case 0xA337:
            func_A337_b1(); break;
        case 0xB1E5:
            func_B1E5_b1(); break;
        case 0x8797:
            func_8797_b1(); break;
        case 0xC05A:
            func_C05A(); break;
        case 0xB1C9:
            func_B1C9_b1(); break;
        case 0xB243:
            func_B243_b1(); break;
        case 0xB1E1:
            func_B1E1_b1(); break;
        case 0xB295:
            func_B295_b1(); break;
        case 0xB1F7:
            func_B1F7_b1(); break;
        case 0xB21D:
            func_B21D_b1(); break;
        case 0x88E1:
            func_88E1_b1(); break;
        case 0x88DE:
            func_88DE_b1(); break;
        case 0xEC46:
            func_EC46(); break;
        case 0xEC02:
            func_EC02(); break;
        case 0xBB7F:
            func_BB7F_b4(); break;
        case 0xBBA7:
            func_BBA7_b4(); break;
        case 0x9ADE:
            func_9ADE_b5(); break;
        case 0xB5E2:
            func_B5E2_b4(); break;
        case 0xB586:
            func_B586_b4(); break;
        case 0xB5AD:
            func_B5AD_b4(); break;
        case 0x9AE1:
            func_9AE1_b4(); break;
        case 0x9A9C:
            func_9A9C_b4(); break;
        case 0xB332:
            func_B332_b4(); break;
        case 0xB3AB:
            func_B3AB_b4(); break;
        case 0xB413:
            func_B413_b4(); break;
        case 0xB6FA:
            func_B6FA_b4(); break;
        case 0xB6CE:
            func_B6CE_b4(); break;
        case 0xBBAA:
            func_BBAA_b4(); break;
        case 0xB6FB:
            func_B6FB_b4(); break;
        case 0xB7B0:
            func_B7B0_b4(); break;
        case 0xB6F2:
            func_B6F2_b4(); break;
        case 0xB9F8:
            func_B9F8_b4(); break;
        case 0xB9EB:
            func_B9EB_b4(); break;
        case 0xA77E:
            func_A77E_b4(); break;
        case 0xA5F7:
            func_A5F7_b4(); break;
        case 0xB8C0:
            func_B8C0_b4(); break;
        case 0x9B8F:
            func_9B8F_b5(); break;
        case 0x9BDB:
            func_9BDB_b5(); break;
        case 0xA8A8:
            func_A8A8_b4(); break;
        case 0xA976:
            switch (g_current_bank) {
                case 4: func_A976_b4(); break;
                case 5: func_A976_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA4CE:
            func_A4CE_b4(); break;
        case 0xA58D:
            func_A58D_b4(); break;
        case 0xA595:
            func_A595_b4(); break;
        case 0xA818:
            func_A818_b4(); break;
        case 0xA657:
            func_A657_b4(); break;
        case 0xB8F8:
            func_B8F8_b4(); break;
        case 0xA01C:
            func_A01C_b4(); break;
        case 0xA044:
            switch (g_current_bank) {
                case 4: func_A044_b4(); break;
                case 5: func_A044_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xABD0:
            func_ABD0_b5(); break;
        case 0x9B16:
            func_9B16_b4(); break;
        case 0x9954:
            func_9954_b4(); break;
        case 0x99BD:
            func_99BD_b4(); break;
        case 0x9A25:
            func_9A25_b4(); break;
        case 0x9C38:
            func_9C38_b4(); break;
        case 0x9C0C:
            func_9C0C_b4(); break;
        case 0xA047:
            func_A047_b4(); break;
        case 0x9C39:
            func_9C39_b4(); break;
        case 0x9CEE:
            func_9CEE_b4(); break;
        case 0x9C30:
            func_9C30_b4(); break;
        case 0x9F36:
            func_9F36_b4(); break;
        case 0x9F29:
            func_9F29_b4(); break;
        case 0x93CE:
            func_93CE_b4(); break;
        case 0x9247:
            func_9247_b4(); break;
        case 0x9DFE:
            func_9DFE_b4(); break;
        case 0xAC81:
            func_AC81_b5(); break;
        case 0xACCD:
            func_ACCD_b5(); break;
        case 0x94F8:
            func_94F8_b4(); break;
        case 0x95C4:
            func_95C4_b4(); break;
        case 0x911E:
            func_911E_b4(); break;
        case 0x91DD:
            func_91DD_b4(); break;
        case 0x91E5:
            func_91E5_b4(); break;
        case 0x9468:
            func_9468_b4(); break;
        case 0x92A7:
            func_92A7_b4(); break;
        case 0x9E36:
            func_9E36_b4(); break;
        case 0x82CA:
            func_82CA_b0(); break;
        case 0x8E7A:
            func_8E7A_b4(); break;
        case 0x8E5C:
            func_8E5C_b4(); break;
        case 0x8E94:
            func_8E94_b4(); break;
        case 0x8E60:
            switch (g_current_bank) {
                case 7: func_CE60(); break;
                case 4: func_8E60_b4(); break;
                case 6: func_8E60_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9094:
            func_9094_b4(); break;
        case 0x9204:
            func_9204_b3(); break;
        case 0x9223:
            func_9223_b3(); break;
        case 0x8543:
            func_8543_b6(); break;
        case 0x85AA:
            func_85AA_b6(); break;
        case 0x8627:
            func_8627_b6(); break;
        case 0x869B:
            func_869B_b6(); break;
        case 0x86D8:
            func_86D8_b6(); break;
        case 0x8757:
            func_8757_b6(); break;
        case 0x87CC:
            func_87CC_b6(); break;
        case 0x881F:
            func_881F_b6(); break;
        case 0x88B3:
            func_88B3_b6(); break;
        case 0x8927:
            func_8927_b6(); break;
        case 0x897D:
            func_897D_b6(); break;
        case 0x89F2:
            func_89F2_b6(); break;
        case 0x8A49:
            func_8A49_b6(); break;
        case 0x8AA1:
            func_8AA1_b6(); break;
        case 0x8AC0:
            func_8AC0_b6(); break;
        case 0x8B36:
            func_8B36_b6(); break;
        case 0x8B76:
            func_8B76_b6(); break;
        case 0x8BAE:
            switch (g_current_bank) {
                case 6: func_8BAE_b6(); break;
                case 4: func_8BAE_b4(); break;
                case 5: func_8BAE_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8C0B:
            func_8C0B_b6(); break;
        case 0x8C3B:
            func_8C3B_b6(); break;
        case 0x8C95:
            func_8C95_b6(); break;
        case 0x8D4B:
            func_8D4B_b6(); break;
        case 0x8DCB:
            func_8DCB_b6(); break;
        case 0x8DE9:
            func_8DE9_b6(); break;
        case 0x8E51:
            func_8E51_b6(); break;
        case 0x8E81:
            func_8E81_b6(); break;
        case 0x8EA0:
            func_8EA0_b6(); break;
        case 0x846D:
            switch (g_current_bank) {
                case 6: func_846D_b6(); break;
                case 0: func_846D_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8476:
            func_8476_b6(); break;
        case 0x848C:
            func_848C_b6(); break;
        case 0x84A4:
            func_84A4_b6(); break;
        case 0x84BD:
            func_84BD_b6(); break;
        case 0x84D1:
            func_84D1_b6(); break;
        case 0x84DF:
            switch (g_current_bank) {
                case 7: func_C4DF(); break;
                case 6: func_84DF_b6(); break;
                case 0: func_84DF_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x84F8:
            func_84F8_b6(); break;
        case 0x84F9:
            func_84F9_b6(); break;
        case 0x850E:
            func_850E_b6(); break;
        case 0x8514:
            func_8514_b6(); break;
        case 0x8526:
            switch (g_current_bank) {
                case 6: func_8526_b6(); break;
                case 0: func_8526_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8527:
            func_8527_b6(); break;
        case 0x9069:
            func_9069_b6(); break;
        case 0x9014:
            func_9014_b6(); break;
        case 0x8FCD:
            func_8FCD_b6(); break;
        case 0x905A:
            switch (g_current_bank) {
                case 6: func_905A_b6(); break;
                case 5: func_905A_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9046:
            func_9046_b6(); break;
        case 0xFEAF:
            func_FEAF(); break;
        case 0x826B:
            func_826B_b6(); break;
        case 0x8221:
            func_8221_b0(); break;
        case 0xA1DC:
            func_A1DC_b4(); break;
        case 0xA1D0:
            func_A1D0_b4(); break;
        case 0xB436:
            func_B436_b0(); break;
        case 0xB5B4:
            func_B5B4_b0(); break;
        case 0xB4E8:
            func_B4E8_b0(); break;
        case 0xB4AD:
            func_B4AD_b0(); break;
        case 0xB477:
            func_B477_b0(); break;
        case 0xB530:
            func_B530_b0(); break;
        case 0xB534:
            func_B534_b0(); break;
        case 0xB538:
            func_B538_b0(); break;
        case 0xB53C:
            func_B53C_b0(); break;
        case 0xB540:
            func_B540_b0(); break;
        case 0xB544:
            func_B544_b0(); break;
        case 0xB548:
            func_B548_b0(); break;
        case 0xB54C:
            func_B54C_b0(); break;
        case 0xB550:
            func_B550_b0(); break;
        case 0xB554:
            func_B554_b0(); break;
        case 0xB558:
            func_B558_b0(); break;
        case 0xB55C:
            func_B55C_b0(); break;
        case 0xB560:
            func_B560_b0(); break;
        case 0xB564:
            func_B564_b0(); break;
        case 0xB568:
            func_B568_b0(); break;
        case 0xB56C:
            func_B56C_b0(); break;
        case 0xB570:
            func_B570_b0(); break;
        case 0xB574:
            func_B574_b0(); break;
        case 0xB578:
            func_B578_b0(); break;
        case 0xB57C:
            func_B57C_b0(); break;
        case 0xB580:
            func_B580_b0(); break;
        case 0xB584:
            func_B584_b0(); break;
        case 0xB588:
            func_B588_b0(); break;
        case 0xB58C:
            func_B58C_b0(); break;
        case 0xB590:
            func_B590_b0(); break;
        case 0xB594:
            func_B594_b0(); break;
        case 0xB598:
            func_B598_b0(); break;
        case 0xB59C:
            func_B59C_b0(); break;
        case 0xB5A0:
            func_B5A0_b0(); break;
        case 0xB5A4:
            func_B5A4_b0(); break;
        case 0xB5A8:
            func_B5A8_b0(); break;
        case 0xB5AC:
            func_B5AC_b0(); break;
        case 0xB5B0:
            func_B5B0_b0(); break;
        case 0x828F:
            func_828F_b0(); break;
        case 0x844B:
            func_844B_b0(); break;
        case 0x845C:
            func_845C_b0(); break;
        case 0x848E:
            func_848E_b0(); break;
        case 0x8497:
            func_8497_b0(); break;
        case 0x84A0:
            func_84A0_b0(); break;
        case 0x84A9:
            func_84A9_b0(); break;
        case 0x84B2:
            func_84B2_b0(); break;
        case 0x84BB:
            func_84BB_b0(); break;
        case 0x84C4:
            func_84C4_b0(); break;
        case 0x84CD:
            func_84CD_b0(); break;
        case 0x84D6:
            func_84D6_b0(); break;
        case 0x84E8:
            func_84E8_b0(); break;
        case 0x84F1:
            func_84F1_b0(); break;
        case 0x84FA:
            func_84FA_b0(); break;
        case 0x8503:
            func_8503_b0(); break;
        case 0x850C:
            func_850C_b0(); break;
        case 0x8515:
            func_8515_b0(); break;
        case 0x8549:
            func_8549_b0(); break;
        case 0x855B:
            func_855B_b0(); break;
        case 0x8255:
            func_8255_b0(); break;
        case 0x82A6:
            func_82A6_b0(); break;
        case 0x83A6:
            func_83A6_b0(); break;
        case 0x83C7:
            func_83C7_b0(); break;
        case 0x85D9:
            func_85D9_b0(); break;
        case 0x976D:
            func_976D_b5(); break;
        case 0x98E2:
            func_98E2_b5(); break;
        case 0x9917:
            func_9917_b5(); break;
        case 0x99A6:
            func_99A6_b5(); break;
        case 0xBCD1:
            func_BCD1_b4(); break;
        case 0xBCD0:
            func_BCD0_b4(); break;
        case 0xA84E:
            func_A84E_b5(); break;
        case 0xA9D4:
            func_A9D4_b5(); break;
        case 0xAA09:
            func_AA09_b5(); break;
        case 0xAA98:
            func_AA98_b5(); break;
        case 0xA16D:
            func_A16D_b4(); break;
        case 0x9FBF:
            func_9FBF_b1(); break;
        case 0x9753:
            func_9753_b5(); break;
        case 0x966E:
            func_966E_b5(); break;
        case 0xA7F6:
            func_A7F6_b1(); break;
        case 0xA9C5:
            func_A9C5_b1(); break;
        case 0x959E:
            func_959E_b5(); break;
        case 0xA529:
            func_A529_b1(); break;
        case 0xA5C3:
            func_A5C3_b5(); break;
        case 0xA5F2:
            func_A5F2_b5(); break;
        case 0xA645:
            func_A645_b5(); break;
        case 0xA698:
            func_A698_b5(); break;
        case 0xA6EB:
            func_A6EB_b5(); break;
        case 0xA533:
            func_A533_b5(); break;
        case 0xA563:
            func_A563_b5(); break;
        case 0xA593:
            func_A593_b5(); break;
        case 0xA1E1:
            func_A1E1_b5(); break;
        case 0xA231:
            func_A231_b5(); break;
        case 0xA317:
            func_A317_b5(); break;
        case 0xA3FD:
            func_A3FD_b5(); break;
        case 0xA4E3:
            func_A4E3_b5(); break;
        case 0xB6B5:
            func_B6B5_b5(); break;
        case 0xB6E4:
            func_B6E4_b5(); break;
        case 0xB737:
            func_B737_b5(); break;
        case 0xB78A:
            func_B78A_b5(); break;
        case 0xB7DD:
            func_B7DD_b5(); break;
        case 0xB625:
            func_B625_b5(); break;
        case 0xB655:
            func_B655_b5(); break;
        case 0xB685:
            func_B685_b5(); break;
        case 0xB2D3:
            func_B2D3_b5(); break;
        case 0xB323:
            func_B323_b5(); break;
        case 0xB409:
            func_B409_b5(); break;
        case 0xB4EF:
            func_B4EF_b5(); break;
        case 0xB5D5:
            func_B5D5_b5(); break;
        case 0x9284:
            func_9284_b5(); break;
        case 0x933B:
            func_933B_b5(); break;
        case 0x8697:
            func_8697_b0(); break;
        case 0x86A9:
            func_86A9_b0(); break;
        case 0x86B4:
            switch (g_current_bank) {
                case 7: func_C6B4(); break;
                case 0: func_86B4_b0(); break;
                case 6: func_86B4_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9487:
            func_9487_b6(); break;
        case 0x9475:
            func_9475_b6(); break;
        case 0x9470:
            func_9470_b6(); break;
        case 0x947D:
            func_947D_b6(); break;
        case 0x9456:
            func_9456_b5(); break;
        case 0x945B:
            func_945B_b5(); break;
        case 0x9460:
            func_9460_b5(); break;
        case 0x9465:
            func_9465_b5(); break;
        case 0x946A:
            func_946A_b5(); break;
        case 0x946F:
            func_946F_b5(); break;
        case 0x9474:
            func_9474_b5(); break;
        case 0x9483:
            func_9483_b5(); break;
        case 0x9715:
            func_9715_b1(); break;
        case 0x966B:
            func_966B_b1(); break;
        case 0xACC4:
            func_ACC4_b1(); break;
        case 0xAA54:
            func_AA54_b1(); break;
        case 0x9CE9:
            switch (g_current_bank) {
                case 1: func_9CE9_b1(); break;
                case 5: func_9CE9_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA46B:
            func_A46B_b1(); break;
        case 0xA40E:
            func_A40E_b1(); break;
        case 0xA470:
            func_A470_b1(); break;
        case 0xA452:
            func_A452_b1(); break;
        case 0x9643:
            func_9643_b1(); break;
        case 0x9A55:
            func_9A55_b1(); break;
        case 0x9F3A:
            func_9F3A_b1(); break;
        case 0x9A56:
            func_9A56_b1(); break;
        case 0xC033:
            func_C033(); break;
        case 0xC036:
            func_C036(); break;
        case 0x96EB:
            func_96EB_b1(); break;
        case 0x9586:
            func_9586_b1(); break;
        case 0x9574:
            func_9574_b1(); break;
        case 0x9562:
            func_9562_b1(); break;
        case 0x9642:
            func_9642_b1(); break;
        case 0x9776:
            func_9776_b1(); break;
        case 0x9A94:
            func_9A94_b1(); break;
        case 0x9CC4:
            func_9CC4_b1(); break;
        case 0xA72A:
            func_A72A_b1(); break;
        case 0xA6C8:
            switch (g_current_bank) {
                case 1: func_A6C8_b1(); break;
                case 5: func_A6C8_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA72F:
            func_A72F_b1(); break;
        case 0x9C78:
            func_9C78_b1(); break;
        case 0x9EB7:
            func_9EB7_b1(); break;
        case 0x9F6A:
            func_9F6A_b1(); break;
        case 0x9A77:
            func_9A77_b1(); break;
        case 0x9F16:
            func_9F16_b1(); break;
        case 0x9850:
            func_9850_b1(); break;
        case 0x9BB0:
            func_9BB0_b1(); break;
        case 0x9BA7:
            func_9BA7_b1(); break;
        case 0x9B9E:
            func_9B9E_b1(); break;
        case 0x9C77:
            func_9C77_b1(); break;
        case 0xB185:
            func_B185_b3(); break;
        case 0xB168:
            func_B168_b3(); break;
        case 0xE1BF:
            func_E1BF(); break;
        case 0xE15B:
            func_E15B(); break;
        case 0x9452:
            func_9452_b1(); break;
        case 0x8391:
            func_8391_b5(); break;
        case 0x83E1:
            func_83E1_b5(); break;
        case 0x83F0:
            func_83F0_b5(); break;
        case 0x83FF:
            func_83FF_b5(); break;
        case 0x8437:
            func_8437_b5(); break;
        case 0x89F1:
            func_89F1_b1(); break;
        case 0x86BC:
            func_86BC_b5(); break;
        case 0x866F:
            func_866F_b5(); break;
        case 0xC02D:
            func_C02D(); break;
        case 0xC030:
            func_C030(); break;
        case 0x89CF:
            func_89CF_b5(); break;
        case 0x8D27:
            func_8D27_b5(); break;
        case 0xF1F6:
            func_F1F6(); break;
        case 0xB21C:
            func_B21C_b1(); break;
        case 0xB242:
            func_B242_b1(); break;
        case 0x88B9:
            func_88B9_b1(); break;
        case 0x9AC9:
            func_9AC9_b5(); break;
        case 0xB813:
            func_B813_b5(); break;
        case 0x9B06:
            func_9B06_b5(); break;
        case 0xBBF5:
            func_BBF5_b4(); break;
        case 0xB59E:
            func_B59E_b4(); break;
        case 0x9AE0:
            func_9AE0_b4(); break;
        case 0xA092:
            func_A092_b4(); break;
        case 0x9AB4:
            func_9AB4_b4(); break;
        case 0xB48A:
            func_B48A_b4(); break;
        case 0xB39A:
            func_B39A_b4(); break;
        case 0xB412:
            func_B412_b4(); break;
        case 0xA819:
            func_A819_b4(); break;
        case 0xB489:
            func_B489_b4(); break;
        case 0xB7AF:
            func_B7AF_b4(); break;
        case 0xB7F5:
            func_B7F5_b4(); break;
        case 0xB7F2:
            func_B7F2_b4(); break;
        case 0xB810:
            func_B810_b4(); break;
        case 0xB811:
            func_B811_b4(); break;
        case 0xB824:
            func_B824_b4(); break;
        case 0xB84A:
            func_B84A_b4(); break;
        case 0xB85D:
            func_B85D_b4(); break;
        case 0xB867:
            func_B867_b4(); break;
        case 0xB871:
            func_B871_b4(); break;
        case 0xB87B:
            func_B87B_b4(); break;
        case 0xB885:
            func_B885_b4(); break;
        case 0xB886:
            func_B886_b4(); break;
        case 0xB887:
            func_B887_b4(); break;
        case 0xA60F:
            func_A60F_b4(); break;
        case 0x9FB2:
            func_9FB2_b4(); break;
        case 0x9BA8:
            func_9BA8_b5(); break;
        case 0x9BA9:
            func_9BA9_b5(); break;
        case 0x9BB3:
            func_9BB3_b5(); break;
        case 0x9BBD:
            func_9BBD_b5(); break;
        case 0x9BC7:
            func_9BC7_b5(); break;
        case 0x9BD1:
            func_9BD1_b5(); break;
        case 0x9BF4:
            func_9BF4_b5(); break;
        case 0x9BF5:
            func_9BF5_b5(); break;
        case 0x9BFF:
            func_9BFF_b5(); break;
        case 0x9C09:
            func_9C09_b5(); break;
        case 0x9C13:
            func_9C13_b5(); break;
        case 0x9C1D:
            func_9C1D_b5(); break;
        case 0xA975:
            func_A975_b4(); break;
        case 0xA8E0:
            func_A8E0_b4(); break;
        case 0xAA52:
            func_AA52_b4(); break;
        case 0xAA51:
            func_AA51_b4(); break;
        case 0xA9B2:
            switch (g_current_bank) {
                case 4: func_A9B2_b4(); break;
                case 1: func_A9B2_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA9E5:
            func_A9E5_b4(); break;
        case 0xA9A3:
            func_A9A3_b4(); break;
        case 0xA527:
            func_A527_b4(); break;
        case 0xA5B3:
            func_A5B3_b4(); break;
        case 0xA681:
            func_A681_b4(); break;
        case 0xA65C:
            func_A65C_b4(); break;
        case 0xABBB:
            func_ABBB_b5(); break;
        case 0xABF8:
            func_ABF8_b5(); break;
        case 0x99BC:
            func_99BC_b4(); break;
        case 0x976E:
            func_976E_b4(); break;
        case 0x9A24:
            func_9A24_b4(); break;
        case 0x9469:
            func_9469_b4(); break;
        case 0x9A9B:
            func_9A9B_b4(); break;
        case 0x9CED:
            func_9CED_b4(); break;
        case 0x9D33:
            switch (g_current_bank) {
                case 4: func_9D33_b4(); break;
                case 5: func_9D33_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9D30:
            func_9D30_b4(); break;
        case 0x9D4E:
            switch (g_current_bank) {
                case 4: func_9D4E_b4(); break;
                case 6: func_9D4E_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9D4F:
            func_9D4F_b4(); break;
        case 0x9D62:
            func_9D62_b4(); break;
        case 0x9D75:
            switch (g_current_bank) {
                case 4: func_9D75_b4(); break;
                case 5: func_9D75_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9D88:
            func_9D88_b4(); break;
        case 0x9D9B:
            func_9D9B_b4(); break;
        case 0x9DA5:
            switch (g_current_bank) {
                case 4: func_9DA5_b4(); break;
                case 5: func_9DA5_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9DAF:
            func_9DAF_b4(); break;
        case 0x9DB9:
            func_9DB9_b4(); break;
        case 0x9DC3:
            switch (g_current_bank) {
                case 4: func_9DC3_b4(); break;
                case 1: func_9DC3_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9DC4:
            func_9DC4_b4(); break;
        case 0x9DC5:
            func_9DC5_b4(); break;
        case 0x925F:
            func_925F_b4(); break;
        case 0xAC9A:
            func_AC9A_b5(); break;
        case 0xAC9B:
            func_AC9B_b5(); break;
        case 0xACA5:
            func_ACA5_b5(); break;
        case 0xACAF:
            switch (g_current_bank) {
                case 5: func_ACAF_b5(); break;
                case 4: func_ACAF_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xACB9:
            func_ACB9_b5(); break;
        case 0xACC3:
            func_ACC3_b5(); break;
        case 0xACE6:
            switch (g_current_bank) {
                case 5: func_ACE6_b5(); break;
                case 1: func_ACE6_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xACE7:
            switch (g_current_bank) {
                case 5: func_ACE7_b5(); break;
                case 1: func_ACE7_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xACF1:
            func_ACF1_b5(); break;
        case 0xACFB:
            func_ACFB_b5(); break;
        case 0xAD05:
            switch (g_current_bank) {
                case 5: func_AD05_b5(); break;
                case 4: func_AD05_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAD0F:
            func_AD0F_b5(); break;
        case 0x95C3:
            func_95C3_b4(); break;
        case 0x9530:
            func_9530_b4(); break;
        case 0x9560:
            func_9560_b4(); break;
        case 0x969D:
            func_969D_b4(); break;
        case 0x9600:
            func_9600_b4(); break;
        case 0x9633:
            func_9633_b4(); break;
        case 0x95F1:
            func_95F1_b4(); break;
        case 0x9177:
            switch (g_current_bank) {
                case 4: func_9177_b4(); break;
                case 6: func_9177_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9203:
            func_9203_b4(); break;
        case 0x92D1:
            func_92D1_b4(); break;
        case 0x92AC:
            func_92AC_b4(); break;
        case 0x8E89:
            func_8E89_b4(); break;
        case 0x8EFD:
            func_8EFD_b4(); break;
        case 0x8F46:
            func_8F46_b4(); break;
        case 0x8EA3:
            func_8EA3_b4(); break;
        case 0x8F95:
            func_8F95_b4(); break;
        case 0x8E79:
            func_8E79_b4(); break;
        case 0x8559:
            switch (g_current_bank) {
                case 6: func_8559_b6(); break;
                case 0: func_8559_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x855C:
            func_855C_b6(); break;
        case 0x855F:
            func_855F_b6(); break;
        case 0x8570:
            func_8570_b6(); break;
        case 0x857F:
            func_857F_b6(); break;
        case 0x8594:
            func_8594_b6(); break;
        case 0x85C1:
            switch (g_current_bank) {
                case 7: func_C5C1(); break;
                case 6: func_85C1_b6(); break;
                case 1: func_85C1_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x85C2:
            func_85C2_b6(); break;
        case 0x85C5:
            switch (g_current_bank) {
                case 7: func_C5C5(); break;
                case 6: func_85C5_b6(); break;
                case 4: func_85C5_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x85C8:
            switch (g_current_bank) {
                case 7: func_C5C8(); break;
                case 6: func_85C8_b6(); break;
                case 2: func_85C8_b2(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x85CE:
            func_85CE_b6(); break;
        case 0x85BC:
            func_85BC_b6(); break;
        case 0x85FC:
            func_85FC_b6(); break;
        case 0x85FD:
            switch (g_current_bank) {
                case 6: func_85FD_b6(); break;
                case 1: func_85FD_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8600:
            switch (g_current_bank) {
                case 7: func_C600(); break;
                case 6: func_8600_b6(); break;
                case 4: func_8600_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8606:
            func_8606_b6(); break;
        case 0x85F7:
            switch (g_current_bank) {
                case 6: func_85F7_b6(); break;
                case 4: func_85F7_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x863D:
            func_863D_b6(); break;
        case 0x8640:
            func_8640_b6(); break;
        case 0x866C:
            func_866C_b6(); break;
        case 0x8678:
            func_8678_b6(); break;
        case 0x868B:
            func_868B_b6(); break;
        case 0x86B0:
            func_86B0_b6(); break;
        case 0x86B1:
            func_86B1_b6(); break;
        case 0x86AB:
            func_86AB_b6(); break;
        case 0x86E8:
            func_86E8_b6(); break;
        case 0x86EE:
            func_86EE_b6(); break;
        case 0x8702:
            func_8702_b6(); break;
        case 0x876F:
            func_876F_b6(); break;
        case 0x8772:
            func_8772_b6(); break;
        case 0x877D:
            switch (g_current_bank) {
                case 6: func_877D_b6(); break;
                case 0: func_877D_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8793:
            func_8793_b6(); break;
        case 0x879F:
            func_879F_b6(); break;
        case 0x87B8:
            func_87B8_b6(); break;
        case 0x87DC:
            func_87DC_b6(); break;
        case 0x87DD:
            func_87DD_b6(); break;
        case 0x87E0:
            func_87E0_b6(); break;
        case 0x87E6:
            func_87E6_b6(); break;
        case 0x8819:
            func_8819_b6(); break;
        case 0x8831:
            func_8831_b6(); break;
        case 0x8832:
            func_8832_b6(); break;
        case 0x8866:
            func_8866_b6(); break;
        case 0x8875:
            func_8875_b6(); break;
        case 0x8890:
            func_8890_b6(); break;
        case 0xAC60:
            func_AC60_b6(); break;
        case 0x9D24:
            func_9D24_b6(); break;
        case 0x88C9:
            func_88C9_b6(); break;
        case 0x88D7:
            func_88D7_b6(); break;
        case 0x88EF:
            switch (g_current_bank) {
                case 6: func_88EF_b6(); break;
                case 1: func_88EF_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8935:
            func_8935_b6(); break;
        case 0x8936:
            func_8936_b6(); break;
        case 0x8939:
            func_8939_b6(); break;
        case 0x8956:
            func_8956_b6(); break;
        case 0x8957:
            func_8957_b6(); break;
        case 0x896E:
            func_896E_b6(); break;
        case 0x898D:
            func_898D_b6(); break;
        case 0x898E:
            func_898E_b6(); break;
        case 0x89A6:
            func_89A6_b6(); break;
        case 0x89B5:
            func_89B5_b6(); break;
        case 0x89C7:
            func_89C7_b6(); break;
        case 0x8A04:
            func_8A04_b6(); break;
        case 0x8A10:
            func_8A10_b6(); break;
        case 0x8A23:
            func_8A23_b6(); break;
        case 0x8A36:
            func_8A36_b6(); break;
        case 0x8A5C:
            func_8A5C_b6(); break;
        case 0x8A5D:
            func_8A5D_b6(); break;
        case 0x8A7B:
            func_8A7B_b6(); break;
        case 0x8A57:
            func_8A57_b6(); break;
        case 0x8AB2:
            func_8AB2_b6(); break;
        case 0x8AB3:
            func_8AB3_b6(); break;
        case 0x8AAD:
            switch (g_current_bank) {
                case 6: func_8AAD_b6(); break;
                case 0: func_8AAD_b0(); break;
                case 1: func_8AAD_b1(); break;
                case 2: func_8AAD_b2(); break;
                case 3: func_8AAD_b3(); break;
                case 4: func_8AAD_b4(); break;
                case 5: func_8AAD_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8AD8:
            func_8AD8_b6(); break;
        case 0x8ADB:
            func_8ADB_b6(); break;
        case 0x8AE6:
            func_8AE6_b6(); break;
        case 0x8AFC:
            func_8AFC_b6(); break;
        case 0x8B08:
            func_8B08_b6(); break;
        case 0x8B1C:
            switch (g_current_bank) {
                case 6: func_8B1C_b6(); break;
                case 3: func_8B1C_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8B44:
            func_8B44_b6(); break;
        case 0x8B48:
            func_8B48_b6(); break;
        case 0x8B70:
            func_8B70_b6(); break;
        case 0x8B89:
            func_8B89_b6(); break;
        case 0x8B8C:
            func_8B8C_b6(); break;
        case 0x8B92:
            func_8B92_b6(); break;
        case 0x8B9E:
            func_8B9E_b6(); break;
        case 0x8BC4:
            func_8BC4_b6(); break;
        case 0x8BC7:
            func_8BC7_b6(); break;
        case 0x8BCA:
            func_8BCA_b6(); break;
        case 0x8BDB:
            func_8BDB_b6(); break;
        case 0x8BF1:
            func_8BF1_b6(); break;
        case 0x8C19:
            func_8C19_b6(); break;
        case 0x8C1A:
            func_8C1A_b6(); break;
        case 0x8C1D:
            func_8C1D_b6(); break;
        case 0x8C4B:
            func_8C4B_b6(); break;
        case 0x8C4F:
            func_8C4F_b6(); break;
        case 0x8C55:
            func_8C55_b6(); break;
        case 0x8C68:
            func_8C68_b6(); break;
        case 0x8CA9:
            func_8CA9_b6(); break;
        case 0x8CAC:
            func_8CAC_b6(); break;
        case 0x8CB7:
            func_8CB7_b6(); break;
        case 0x8CC8:
            func_8CC8_b6(); break;
        case 0x8CDB:
            func_8CDB_b6(); break;
        case 0x8CF2:
            func_8CF2_b6(); break;
        case 0x8D0E:
            switch (g_current_bank) {
                case 6: func_8D0E_b6(); break;
                case 3: func_8D0E_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D0F:
            func_8D0F_b6(); break;
        case 0x8D2E:
            switch (g_current_bank) {
                case 6: func_8D2E_b6(); break;
                case 4: func_8D2E_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D34:
            switch (g_current_bank) {
                case 6: func_8D34_b6(); break;
                case 4: func_8D34_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D5B:
            func_8D5B_b6(); break;
        case 0x8D5C:
            func_8D5C_b6(); break;
        case 0x8D5F:
            func_8D5F_b6(); break;
        case 0x8D97:
            func_8D97_b6(); break;
        case 0x8D9D:
            func_8D9D_b6(); break;
        case 0x8DFB:
            func_8DFB_b6(); break;
        case 0x8DFE:
            func_8DFE_b6(); break;
        case 0x8E1B:
            func_8E1B_b6(); break;
        case 0x8E37:
            func_8E37_b6(); break;
        case 0x8E63:
            func_8E63_b6(); break;
        case 0x8E8F:
            func_8E8F_b6(); break;
        case 0x8E90:
            func_8E90_b6(); break;
        case 0x8E93:
            func_8E93_b6(); break;
        case 0x8E9A:
            func_8E9A_b6(); break;
        case 0x8EAF:
            func_8EAF_b6(); break;
        case 0x8EB2:
            func_8EB2_b6(); break;
        case 0x8EB9:
            func_8EB9_b6(); break;
        case 0x9CD7:
            func_9CD7_b6(); break;
        case 0x9CD0:
            func_9CD0_b6(); break;
        case 0x9278:
            func_9278_b6(); break;
        case 0x90E2:
            func_90E2_b6(); break;
        case 0x91E6:
            func_91E6_b6(); break;
        case 0x923A:
            func_923A_b6(); break;
        case 0x9165:
            func_9165_b6(); break;
        case 0x90F5:
            func_90F5_b6(); break;
        case 0x910B:
            func_910B_b6(); break;
        case 0x9121:
            func_9121_b6(); break;
        case 0x914E:
            func_914E_b6(); break;
        case 0x9890:
            func_9890_b5(); break;
        case 0x9842:
            func_9842_b5(); break;
        case 0x9791:
            func_9791_b5(); break;
        case 0x98F5:
            func_98F5_b5(); break;
        case 0x9906:
            func_9906_b5(); break;
        case 0x9907:
            switch (g_current_bank) {
                case 5: func_9907_b5(); break;
                case 2: func_9907_b2(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x990B:
            func_990B_b5(); break;
        case 0x990F:
            func_990F_b5(); break;
        case 0x9913:
            func_9913_b5(); break;
        case 0xC06C:
            func_C06C(); break;
        case 0x9999:
            func_9999_b5(); break;
        case 0x9A1F:
            func_9A1F_b5(); break;
        case 0xA96E:
            func_A96E_b5(); break;
        case 0xA920:
            func_A920_b5(); break;
        case 0xA872:
            func_A872_b5(); break;
        case 0xA9E7:
            func_A9E7_b5(); break;
        case 0xA9F8:
            func_A9F8_b5(); break;
        case 0xA9F9:
            switch (g_current_bank) {
                case 5: func_A9F9_b5(); break;
                case 3: func_A9F9_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA9FD:
            func_A9FD_b5(); break;
        case 0xAA01:
            func_AA01_b5(); break;
        case 0xAA05:
            func_AA05_b5(); break;
        case 0xAA8B:
            func_AA8B_b5(); break;
        case 0xAB11:
            func_AB11_b5(); break;
        case 0x969C:
            func_969C_b5(); break;
        case 0xA9A8:
            switch (g_current_bank) {
                case 1: func_A9A8_b1(); break;
                case 4: func_A9A8_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x95DE:
            func_95DE_b5(); break;
        case 0xA5EB:
            func_A5EB_b5(); break;
        case 0xA644:
            func_A644_b5(); break;
        case 0xA63E:
            func_A63E_b5(); break;
        case 0xA697:
            func_A697_b5(); break;
        case 0xA691:
            func_A691_b5(); break;
        case 0xA6EA:
            func_A6EA_b5(); break;
        case 0xA6E4:
            func_A6E4_b5(); break;
        case 0xA713:
            func_A713_b5(); break;
        case 0xA2C7:
            func_A2C7_b5(); break;
        case 0xA316:
            func_A316_b5(); break;
        case 0xA3AD:
            func_A3AD_b5(); break;
        case 0xA3FC:
            func_A3FC_b5(); break;
        case 0xA493:
            func_A493_b5(); break;
        case 0xA4E2:
            func_A4E2_b5(); break;
        case 0xB6DD:
            func_B6DD_b5(); break;
        case 0xB736:
            func_B736_b5(); break;
        case 0xB730:
            func_B730_b5(); break;
        case 0xB789:
            func_B789_b5(); break;
        case 0xB783:
            func_B783_b5(); break;
        case 0xB7DC:
            func_B7DC_b5(); break;
        case 0xB7D6:
            func_B7D6_b5(); break;
        case 0xB805:
            func_B805_b5(); break;
        case 0xB3B9:
            func_B3B9_b5(); break;
        case 0xB408:
            func_B408_b5(); break;
        case 0xB49F:
            func_B49F_b5(); break;
        case 0xB4EE:
            func_B4EE_b5(); break;
        case 0xB585:
            func_B585_b5(); break;
        case 0xB5D4:
            func_B5D4_b5(); break;
        case 0x921C:
            func_921C_b5(); break;
        case 0x929D:
            func_929D_b5(); break;
        case 0x924C:
            func_924C_b5(); break;
        case 0x9354:
            func_9354_b5(); break;
        case 0x9268:
            func_9268_b5(); break;
        case 0x87F3:
            func_87F3_b0(); break;
        case 0x86F2:
            func_86F2_b0(); break;
        case 0x8723:
            func_8723_b0(); break;
        case 0x8728:
            func_8728_b0(); break;
        case 0x872D:
            func_872D_b0(); break;
        case 0x8737:
            switch (g_current_bank) {
                case 0: func_8737_b0(); break;
                case 2: func_8737_b2(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x873C:
            func_873C_b0(); break;
        case 0x8761:
            func_8761_b0(); break;
        case 0xF8AD:
            func_F8AD(); break;
        case 0xAE05:
            func_AE05_b0(); break;
        case 0x879C:
            func_879C_b0(); break;
        case 0x87B1:
            func_87B1_b0(); break;
        case 0x870F:
            func_870F_b0(); break;
        case 0xACD5:
            func_ACD5_b1(); break;
        case 0xACD6:
            func_ACD6_b1(); break;
        case 0xACDA:
            func_ACDA_b1(); break;
        case 0xACDE:
            func_ACDE_b1(); break;
        case 0xACE2:
            func_ACE2_b1(); break;
        case 0xAA13:
            func_AA13_b1(); break;
        case 0xAA68:
            func_AA68_b1(); break;
        case 0xAA69:
            switch (g_current_bank) {
                case 1: func_AA69_b1(); break;
                case 3: func_AA69_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAA6D:
            func_AA6D_b1(); break;
        case 0xAA71:
            func_AA71_b1(); break;
        case 0xAA75:
            func_AA75_b1(); break;
        case 0xAA79:
            func_AA79_b1(); break;
        case 0xA4BB:
            func_A4BB_b1(); break;
        case 0xA492:
            func_A492_b1(); break;
        case 0xA781:
            func_A781_b1(); break;
        case 0xA752:
            func_A752_b1(); break;
        case 0x9F1C:
            func_9F1C_b1(); break;
        case 0x83C3:
            func_83C3_b5(); break;
        case 0xE122:
            func_E122(); break;
        case 0x8AD7:
            func_8AD7_b5(); break;
        case 0x8A94:
            func_8A94_b5(); break;
        case 0x8C75:
            func_8C75_b5(); break;
        case 0x8AD6:
            func_8AD6_b5(); break;
        case 0x8E44:
            func_8E44_b5(); break;
        case 0x8E04:
            func_8E04_b5(); break;
        case 0x8E43:
            switch (g_current_bank) {
                case 5: func_8E43_b5(); break;
                case 6: func_8E43_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xF264:
            func_F264(); break;
        case 0xF20B:
            func_F20B(); break;
        case 0x9AEB:
            func_9AEB_b5(); break;
        case 0xBC44:
            func_BC44_b4(); break;
        case 0xBC1C:
            func_BC1C_b4(); break;
        case 0xA0E1:
            func_A0E1_b4(); break;
        case 0xA0B9:
            func_A0B9_b4(); break;
        case 0xB4DB:
            func_B4DB_b4(); break;
        case 0xB4E0:
            func_B4E0_b4(); break;
        case 0xB1C7:
            func_B1C7_b4(); break;
        case 0xB1AB:
            func_B1AB_b4(); break;
        case 0x814E:
            func_814E_b5(); break;
        case 0xA82A:
            func_A82A_b4(); break;
        case 0xA860:
            func_A860_b4(); break;
        case 0xB888:
            func_B888_b4(); break;
        case 0xB934:
            func_B934_b4(); break;
        case 0xB970:
            func_B970_b4(); break;
        case 0xB986:
            func_B986_b4(); break;
        case 0xB99A:
            func_B99A_b4(); break;
        case 0xB9B0:
            func_B9B0_b4(); break;
        case 0xA5FB:
            func_A5FB_b4(); break;
        case 0x9C27:
            func_9C27_b5(); break;
        case 0x9E05:
            func_9E05_b5(); break;
        case 0x9C5F:
            func_9C5F_b5(); break;
        case 0x9E61:
            func_9E61_b5(); break;
        case 0x9CA9:
            func_9CA9_b5(); break;
        case 0x9F53:
            func_9F53_b5(); break;
        case 0x9CF3:
            switch (g_current_bank) {
                case 5: func_9CF3_b5(); break;
                case 6: func_9CF3_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9DD5:
            func_9DD5_b5(); break;
        case 0x9D3D:
            func_9D3D_b5(); break;
        case 0xA137:
            func_A137_b5(); break;
        case 0xA8D1:
            func_A8D1_b4(); break;
        case 0xAA9A:
            func_AA9A_b4(); break;
        case 0xAA9B:
            func_AA9B_b4(); break;
        case 0xAADF:
            func_AADF_b4(); break;
        case 0xAB0F:
            func_AB0F_b4(); break;
        case 0xAB40:
            func_AB40_b4(); break;
        case 0xAB41:
            func_AB41_b4(); break;
        case 0xAB42:
            func_AB42_b4(); break;
        case 0xABFD:
            func_ABFD_b4(); break;
        case 0xABFE:
            func_ABFE_b4(); break;
        case 0xABFF:
            func_ABFF_b4(); break;
        case 0xAC00:
            func_AC00_b4(); break;
        case 0xACAE:
            func_ACAE_b4(); break;
        case 0xACB0:
            func_ACB0_b4(); break;
        case 0xAD6B:
            func_AD6B_b4(); break;
        case 0xAD6C:
            func_AD6C_b4(); break;
        case 0xAD6D:
            func_AD6D_b4(); break;
        case 0xAD6E:
            func_AD6E_b4(); break;
        case 0xADB2:
            func_ADB2_b4(); break;
        case 0xADE2:
            switch (g_current_bank) {
                case 4: func_ADE2_b4(); break;
                case 5: func_ADE2_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAE13:
            func_AE13_b4(); break;
        case 0xAE14:
            func_AE14_b4(); break;
        case 0xAE15:
            switch (g_current_bank) {
                case 4: func_AE15_b4(); break;
                case 5: func_AE15_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAED0:
            func_AED0_b4(); break;
        case 0xAED1:
            func_AED1_b4(); break;
        case 0xAED2:
            func_AED2_b4(); break;
        case 0xAED3:
            func_AED3_b4(); break;
        case 0xAF7F:
            func_AF7F_b4(); break;
        case 0xAF80:
            switch (g_current_bank) {
                case 4: func_AF80_b4(); break;
                case 0: func_AF80_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB03C:
            func_B03C_b4(); break;
        case 0xB03D:
            func_B03D_b4(); break;
        case 0xAADE:
            func_AADE_b4(); break;
        case 0xABDD:
            func_ABDD_b5(); break;
        case 0x980B:
            func_980B_b4(); break;
        case 0x8151:
            func_8151_b5(); break;
        case 0x947A:
            func_947A_b4(); break;
        case 0x94B0:
            func_94B0_b4(); break;
        case 0x9DC6:
            func_9DC6_b4(); break;
        case 0x9E72:
            func_9E72_b4(); break;
        case 0x9EAE:
            switch (g_current_bank) {
                case 7: func_DEAE(); break;
                case 4: func_9EAE_b4(); break;
                case 5: func_9EAE_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9EC4:
            func_9EC4_b4(); break;
        case 0x9ED8:
            switch (g_current_bank) {
                case 4: func_9ED8_b4(); break;
                case 2: func_9ED8_b2(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9EEE:
            func_9EEE_b4(); break;
        case 0x924B:
            func_924B_b4(); break;
        case 0xAD19:
            func_AD19_b5(); break;
        case 0xAE67:
            func_AE67_b5(); break;
        case 0xAEF7:
            func_AEF7_b5(); break;
        case 0xAD51:
            switch (g_current_bank) {
                case 5: func_AD51_b5(); break;
                case 4: func_AD51_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAF53:
            func_AF53_b5(); break;
        case 0xAD9B:
            func_AD9B_b5(); break;
        case 0xAE97:
            func_AE97_b5(); break;
        case 0xB045:
            func_B045_b5(); break;
        case 0xADE5:
            func_ADE5_b5(); break;
        case 0xB137:
            func_B137_b5(); break;
        case 0xAE2F:
            func_AE2F_b5(); break;
        case 0xAEC7:
            func_AEC7_b5(); break;
        case 0xB229:
            func_B229_b5(); break;
        case 0x9521:
            func_9521_b4(); break;
        case 0x9CDE:
            func_9CDE_b6(); break;
        case 0x9D40:
            func_9D40_b6(); break;
        case 0x8493:
            func_8493_b6(); break;
        case 0x9D1D:
            switch (g_current_bank) {
                case 6: func_9D1D_b6(); break;
                case 5: func_9D1D_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8877:
            func_8877_b6(); break;
        case 0xABE3:
            switch (g_current_bank) {
                case 6: func_ABE3_b6(); break;
                case 4: func_ABE3_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8190:
            switch (g_current_bank) {
                case 0: func_8190_b0(); break;
                case 6: func_8190_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9D08:
            func_9D08_b6(); break;
        case 0x9D55:
            switch (g_current_bank) {
                case 6: func_9D55_b6(); break;
                case 4: func_9D55_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9CC2:
            func_9CC2_b6(); break;
        case 0x9D16:
            switch (g_current_bank) {
                case 6: func_9D16_b6(); break;
                case 3: func_9D16_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9D63:
            func_9D63_b6(); break;
        case 0x9D39:
            func_9D39_b6(); break;
        case 0x9CEC:
            func_9CEC_b6(); break;
        case 0x9D6A:
            func_9D6A_b6(); break;
        case 0x9D32:
            func_9D32_b6(); break;
        case 0x9D0F:
            func_9D0F_b6(); break;
        case 0x8E70:
            func_8E70_b6(); break;
        case 0x8175:
            func_8175_b0(); break;
        case 0x8172:
            func_8172_b0(); break;
        case 0x940B:
            func_940B_b6(); break;
        case 0x9309:
            func_9309_b6(); break;
        case 0x928E:
            switch (g_current_bank) {
                case 6: func_928E_b6(); break;
                case 3: func_928E_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x929F:
            func_929F_b6(); break;
        case 0x92BA:
            func_92BA_b6(); break;
        case 0x92D2:
            func_92D2_b6(); break;
        case 0x92EF:
            func_92EF_b6(); break;
        case 0x920A:
            func_920A_b6(); break;
        case 0x9222:
            func_9222_b6(); break;
        case 0x925E:
            func_925E_b6(); break;
        case 0x926B:
            func_926B_b6(); break;
        case 0x9214:
            func_9214_b6(); break;
        case 0x9171:
            func_9171_b6(); break;
        case 0x9183:
            func_9183_b6(); break;
        case 0x98C7:
            func_98C7_b5(); break;
        case 0x98DD:
            func_98DD_b5(); break;
        case 0x9869:
            func_9869_b5(); break;
        case 0x986E:
            func_986E_b5(); break;
        case 0x984A:
            func_984A_b5(); break;
        case 0x981F:
            func_981F_b5(); break;
        case 0x9820:
            func_9820_b5(); break;
        case 0x97AC:
            func_97AC_b5(); break;
        case 0xE0E2:
            func_E0E2(); break;
        case 0x993A:
            func_993A_b5(); break;
        case 0x99C0:
            func_99C0_b5(); break;
        case 0xA9A5:
            func_A9A5_b5(); break;
        case 0xA9BB:
            func_A9BB_b5(); break;
        case 0xA947:
            switch (g_current_bank) {
                case 5: func_A947_b5(); break;
                case 1: func_A947_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA94C:
            func_A94C_b5(); break;
        case 0xA928:
            func_A928_b5(); break;
        case 0xA8FD:
            func_A8FD_b5(); break;
        case 0xA8FE:
            func_A8FE_b5(); break;
        case 0xA88D:
            switch (g_current_bank) {
                case 7: func_E88D(); break;
                case 5: func_A88D_b5(); break;
                case 3: func_A88D_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAA2C:
            func_AA2C_b5(); break;
        case 0xAAB2:
            func_AAB2_b5(); break;
        case 0xA5CF:
            func_A5CF_b5(); break;
        case 0xA622:
            switch (g_current_bank) {
                case 5: func_A622_b5(); break;
                case 6: func_A622_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA675:
            switch (g_current_bank) {
                case 5: func_A675_b5(); break;
                case 1: func_A675_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA6F7:
            func_A6F7_b5(); break;
        case 0xB6C1:
            func_B6C1_b5(); break;
        case 0xB714:
            func_B714_b5(); break;
        case 0xB767:
            func_B767_b5(); break;
        case 0xB7BA:
            func_B7BA_b5(); break;
        case 0xB7E9:
            func_B7E9_b5(); break;
        case 0x924E:
            func_924E_b5(); break;
        case 0x926A:
            func_926A_b5(); break;
        case 0x873E:
            func_873E_b0(); break;
        case 0x87D3:
            func_87D3_b0(); break;
        case 0xAD0D:
            switch (g_current_bank) {
                case 1: func_AD0D_b1(); break;
                case 5: func_AD0D_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAD33:
            func_AD33_b1(); break;
        case 0xAD80:
            func_AD80_b1(); break;
        case 0xAA53:
            func_AA53_b1(); break;
        case 0xAA7A:
            func_AA7A_b1(); break;
        case 0xAAFF:
            func_AAFF_b1(); break;
        case 0xAB80:
            func_AB80_b1(); break;
        case 0xAC75:
            func_AC75_b1(); break;
        case 0x8AFF:
            func_8AFF_b5(); break;
        case 0x8BCE:
            func_8BCE_b5(); break;
        case 0x8B00:
            func_8B00_b5(); break;
        case 0x8CF4:
            func_8CF4_b5(); break;
        case 0x8D26:
            func_8D26_b5(); break;
        case 0x8E6C:
            func_8E6C_b5(); break;
        case 0x8F4A:
            func_8F4A_b5(); break;
        case 0x8E6D:
            func_8E6D_b5(); break;
        case 0xB54A:
            func_B54A_b4(); break;
        case 0xB54B:
            func_B54B_b4(); break;
        case 0xB1C4:
            func_B1C4_b4(); break;
        case 0x9A2F:
            func_9A2F_b5(); break;
        case 0xA85F:
            func_A85F_b4(); break;
        case 0xA89B:
            func_A89B_b4(); break;
        case 0xB985:
            func_B985_b4(); break;
        case 0xB999:
            func_B999_b4(); break;
        case 0xB9AF:
            func_B9AF_b4(); break;
        case 0xB9C3:
            func_B9C3_b4(); break;
        case 0x9C55:
            func_9C55_b5(); break;
        case 0x9C89:
            func_9C89_b5(); break;
        case 0x9C9F:
            func_9C9F_b5(); break;
        case 0x9EF7:
            func_9EF7_b5(); break;
        case 0x9F52:
            func_9F52_b5(); break;
        case 0x9CD3:
            func_9CD3_b5(); break;
        case 0x9FE9:
            func_9FE9_b5(); break;
        case 0xA0DB:
            func_A0DB_b5(); break;
        case 0xA136:
            func_A136_b5(); break;
        case 0x9D6B:
            func_9D6B_b5(); break;
        case 0xAB0E:
            func_AB0E_b4(); break;
        case 0xAB3F:
            func_AB3F_b4(); break;
        case 0xAB6E:
            func_AB6E_b4(); break;
        case 0xABFC:
            func_ABFC_b4(); break;
        case 0xACAD:
            func_ACAD_b4(); break;
        case 0xAC3C:
            func_AC3C_b4(); break;
        case 0xAC94:
            func_AC94_b4(); break;
        case 0xACDC:
            func_ACDC_b4(); break;
        case 0xAD6A:
            func_AD6A_b4(); break;
        case 0xADB1:
            func_ADB1_b4(); break;
        case 0xADE1:
            func_ADE1_b4(); break;
        case 0xAE41:
            func_AE41_b4(); break;
        case 0xAECF:
            func_AECF_b4(); break;
        case 0xAEB6:
            func_AEB6_b4(); break;
        case 0xAF7E:
            func_AF7E_b4(); break;
        case 0xAF0F:
            func_AF0F_b4(); break;
        case 0xAF65:
            func_AF65_b4(); break;
        case 0xAFAD:
            func_AFAD_b4(); break;
        case 0xB03B:
            func_B03B_b4(); break;
        case 0xAB21:
            func_AB21_b5(); break;
        case 0x94AF:
            func_94AF_b4(); break;
        case 0x94EB:
            func_94EB_b4(); break;
        case 0x9EC3:
            func_9EC3_b4(); break;
        case 0x9ED7:
            func_9ED7_b4(); break;
        case 0x9EED:
            func_9EED_b4(); break;
        case 0x9F01:
            switch (g_current_bank) {
                case 4: func_9F01_b4(); break;
                case 2: func_9F01_b2(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAD47:
            func_AD47_b5(); break;
        case 0xAFE9:
            func_AFE9_b5(); break;
        case 0xB044:
            func_B044_b5(); break;
        case 0xADC5:
            func_ADC5_b5(); break;
        case 0xADDB:
            func_ADDB_b5(); break;
        case 0xB0DB:
            func_B0DB_b5(); break;
        case 0xB136:
            func_B136_b5(); break;
        case 0xAE0F:
            func_AE0F_b5(); break;
        case 0xAE25:
            func_AE25_b5(); break;
        case 0xB1CD:
            func_B1CD_b5(); break;
        case 0xB228:
            func_B228_b5(); break;
        case 0xAE5D:
            func_AE5D_b5(); break;
        case 0x8178:
            func_8178_b0(); break;
        case 0x818D:
            func_818D_b0(); break;
        case 0x817E:
            func_817E_b0(); break;
        case 0x8184:
            func_8184_b0(); break;
        case 0x819F:
            func_819F_b0(); break;
        case 0x816F:
            func_816F_b0(); break;
        case 0x818A:
            func_818A_b0(); break;
        case 0x81A2:
            func_81A2_b0(); break;
        case 0x8196:
            func_8196_b0(); break;
        case 0x817B:
            func_817B_b0(); break;
        case 0x81AB:
            func_81AB_b0(); break;
        case 0x8193:
            func_8193_b0(); break;
        case 0x819C:
            func_819C_b0(); break;
        case 0x8187:
            func_8187_b0(); break;
        case 0x9315:
            func_9315_b6(); break;
        case 0x9321:
            func_9321_b6(); break;
        case 0xFF8D:
            func_FF8D(); break;
        case 0x932D:
            func_932D_b6(); break;
        case 0x9356:
            func_9356_b6(); break;
        case 0x922C:
            func_922C_b6(); break;
        case 0x918F:
            func_918F_b6(); break;
        case 0x91BA:
            func_91BA_b6(); break;
        case 0x91D0:
            func_91D0_b6(); break;
        case 0x870B:
            func_870B_b0(); break;
        case 0x8C21:
            func_8C21_b5(); break;
        case 0x8B69:
            func_8B69_b5(); break;
        case 0x8F9E:
            func_8F9E_b5(); break;
        case 0x8EDB:
            func_8EDB_b5(); break;
        case 0x9C33:
            func_9C33_b5(); break;
        case 0x9C6B:
            func_9C6B_b5(); break;
        case 0x9CB5:
            func_9CB5_b5(); break;
        case 0x9CFF:
            func_9CFF_b5(); break;
        case 0x9D49:
            func_9D49_b5(); break;
        case 0xAD25:
            func_AD25_b5(); break;
        case 0xADA7:
            switch (g_current_bank) {
                case 5: func_ADA7_b5(); break;
                case 1: func_ADA7_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xADF1:
            func_ADF1_b5(); break;
        case 0xAE3B:
            func_AE3B_b5(); break;
        case 0xF573:
            func_F573(); break;
        case 0xF574:
            func_F574(); break;
        case 0xDE4C:
            func_DE4C(); break;
        case 0xDE4D:
            func_DE4D(); break;
        case 0xEBDF:
            func_EBDF(); break;
        case 0xC000:
            func_C000(); break;
        case 0xD996:
            func_D996(); break;
        case 0xF34C:
            func_F34C(); break;
        case 0xF34D:
            func_F34D(); break;
        case 0xE0F4:
            func_E0F4(); break;
        case 0xF657:
            func_F657(); break;
        case 0xDFDF:
            func_DFDF(); break;
        case 0xE003:
            func_E003(); break;
        case 0xC94C:
            func_C94C(); break;
        case 0xC94D:
            func_C94D(); break;
        case 0xD8C9:
            func_D8C9(); break;
        case 0xCC4C:
            func_CC4C(); break;
        case 0xCC4D:
            func_CC4D(); break;
        case 0xE143:
            func_E143(); break;
        case 0xFB4C:
            func_FB4C(); break;
        case 0xFB4D:
            func_FB4D(); break;
        case 0xF425:
            func_F425(); break;
        case 0xE4A0:
            func_E4A0(); break;
        case 0xE486:
            func_E486(); break;
        case 0xEC58:
            func_EC58(); break;
        case 0xCD4C:
            func_CD4C(); break;
        case 0xCD4D:
            func_CD4D(); break;
        case 0xECCE:
            func_ECCE(); break;
        case 0xC039:
            func_C039(); break;
        case 0xC03A:
            func_C03A(); break;
        case 0xC03C:
            func_C03C(); break;
        case 0xDE39:
            func_DE39(); break;
        case 0xDE8E:
            func_DE8E(); break;
        case 0xC045:
            func_C045(); break;
        case 0xC046:
            func_C046(); break;
        case 0xE44C:
            func_E44C(); break;
        case 0xE44D:
            func_E44D(); break;
        case 0xF0E5:
            func_F0E5(); break;
        case 0xF172:
            func_F172(); break;
        case 0xE41E:
            func_E41E(); break;
        case 0xE462:
            func_E462(); break;
        case 0xF54D:
            func_F54D(); break;
        case 0xE3F6:
            func_E3F6(); break;
        case 0xE43B:
            func_E43B(); break;
        case 0xF64C:
            func_F64C(); break;
        case 0xF1F7:
            func_F1F7(); break;
        case 0xFC4C:
            func_FC4C(); break;
        case 0xFC4D:
            func_FC4D(); break;
        case 0xEBFD:
            func_EBFD(); break;
        case 0xF46E:
            func_F46E(); break;
        case 0xC04C:
            func_C04C(); break;
        case 0xC04D:
            func_C04D(); break;
        case 0xF4C1:
            func_F4C1(); break;
        case 0xC066:
            func_C066(); break;
        case 0xC067:
            func_C067(); break;
        case 0xC069:
            func_C069(); break;
        case 0xC06A:
            func_C06A(); break;
        case 0xE24C:
            func_E24C(); break;
        case 0xE24D:
            func_E24D(); break;
        case 0xE0E3:
            func_E0E3(); break;
        case 0xE697:
            func_E697(); break;
        case 0xC14C:
            func_C14C(); break;
        case 0xE4C2:
            func_E4C2(); break;
        case 0xF50F:
            func_F50F(); break;
        case 0xE807:
            func_E807(); break;
        case 0xE808:
            func_E808(); break;
        case 0xD0E8:
            func_D0E8(); break;
        case 0xD0E9:
            func_D0E9(); break;
        case 0xE6D0:
            func_E6D0(); break;
        case 0xE185:
            func_E185(); break;
        case 0xF321:
            func_F321(); break;
        case 0xF5F4:
            func_F5F4(); break;
        case 0xF58B:
            func_F58B(); break;
        case 0xD0A9:
            func_D0A9(); break;
        case 0xD0AA:
            func_D0AA(); break;
        case 0xD08E:
            func_D08E(); break;
        case 0xD18D:
            func_D18D(); break;
        case 0xD28D:
            func_D28D(); break;
        case 0xD38D:
            func_D38D(); break;
        case 0xD68D:
            func_D68D(); break;
        case 0xD68E:
            func_D68E(); break;
        case 0xC98D:
            func_C98D(); break;
        case 0xC98E:
            func_C98E(); break;
        case 0xCA8D:
            func_CA8D(); break;
        case 0xCB8D:
            func_CB8D(); break;
        case 0xCB8E:
            func_CB8E(); break;
        case 0xCC8D:
            func_CC8D(); break;
        case 0xCD8D:
            func_CD8D(); break;
        case 0xCD8E:
            func_CD8E(); break;
        case 0xCE8D:
            func_CE8D(); break;
        case 0xCE8E:
            func_CE8E(); break;
        case 0xCF8E:
            func_CF8E(); break;
        case 0xC3A9:
            func_C3A9(); break;
        case 0xF18D:
            func_F18D(); break;
        case 0xF18E:
            func_F18E(); break;
        case 0xD98D:
            func_D98D(); break;
        case 0xD98E:
            func_D98E(); break;
        case 0xDA8D:
            func_DA8D(); break;
        case 0xDA8E:
            func_DA8E(); break;
        case 0xF498:
            func_F498(); break;
        case 0xF486:
            func_F486(); break;
        case 0xC137:
            func_C137(); break;
        case 0xD9AD:
            func_D9AD(); break;
        case 0xD9AE:
            func_D9AE(); break;
        case 0xC904:
            func_C904(); break;
        case 0xD012:
            func_D012(); break;
        case 0xD013:
            func_D013(); break;
        case 0xE086:
            func_E086(); break;
        case 0xC12C:
            func_C12C(); break;
        case 0xC9C1:
            func_C9C1(); break;
        case 0xC9C2:
            func_C9C2(); break;
        case 0xF032:
            func_F032(); break;
        case 0xF033:
            func_F033(); break;
        case 0xF5F0:
            func_F5F0(); break;
        case 0xF5F1:
            func_F5F1(); break;
        case 0xF481:
            func_F481(); break;
        case 0xF48E:
            func_F48E(); break;
        case 0xF004:
            func_F004(); break;
        case 0xFBF0:
            func_FBF0(); break;
        case 0xFBF1:
            func_FBF1(); break;
        case 0xC102:
            func_C102(); break;
        case 0xC1BE:
            func_C1BE(); break;
        case 0xFFC1:
            func_FFC1(); break;
        case 0xFFC2:
            func_FFC2(); break;
        case 0xC3C1:
            func_C3C1(); break;
        case 0xC3C2:
            func_C3C2(); break;
        case 0xC4C2:
            func_C4C2(); break;
        case 0xC4C3:
            func_C4C3(); break;
        case 0xF7C2:
            func_F7C2(); break;
        case 0xF7C3:
            func_F7C3(); break;
        case 0xC379:
            func_C379(); break;
        case 0xE6C3:
            func_E6C3(); break;
        case 0xE6C4:
            func_E6C4(); break;
        case 0xE7C3:
            func_E7C3(); break;
        case 0xE7C4:
            func_E7C4(); break;
        case 0xE8C3:
            func_E8C3(); break;
        case 0xE8C4:
            func_E8C4(); break;
        case 0xE9C3:
            func_E9C3(); break;
        case 0xE9C4:
            func_E9C4(); break;
        case 0xEAC3:
            func_EAC3(); break;
        case 0xEAC4:
            func_EAC4(); break;
        case 0xEBC3:
            func_EBC3(); break;
        case 0xEBC4:
            func_EBC4(); break;
        case 0xC3EC:
            func_C3EC(); break;
        case 0xC437:
            func_C437(); break;
        case 0xCCC4:
            func_CCC4(); break;
        case 0xCCC5:
            func_CCC5(); break;
        case 0xCDC5:
            func_CDC5(); break;
        case 0xCEC4:
            func_CEC4(); break;
        case 0xCEC5:
            func_CEC5(); break;
        case 0xCFC4:
            func_CFC4(); break;
        case 0xD0C5:
            func_D0C5(); break;
        case 0xD1C4:
            func_D1C4(); break;
        case 0xC4D2:
            func_C4D2(); break;
        case 0xD8C4:
            func_D8C4(); break;
        case 0xD8C5:
            func_D8C5(); break;
        case 0xD9C4:
            func_D9C4(); break;
        case 0xD9C5:
            func_D9C5(); break;
        case 0xDAC4:
            func_DAC4(); break;
        case 0xDAC5:
            func_DAC5(); break;
        case 0xDBC4:
            func_DBC4(); break;
        case 0xDBC5:
            func_DBC5(); break;
        case 0xDCC4:
            func_DCC4(); break;
        case 0xDCC5:
            func_DCC5(); break;
        case 0xDDC5:
            func_DDC5(); break;
        case 0xDEC4:
            func_DEC4(); break;
        case 0xDEC5:
            func_DEC5(); break;
        case 0xDFC4:
            func_DFC4(); break;
        case 0xDFC5:
            func_DFC5(); break;
        case 0xE0C4:
            func_E0C4(); break;
        case 0xE0C5:
            func_E0C5(); break;
        case 0xE1C4:
            func_E1C4(); break;
        case 0xE1C5:
            func_E1C5(); break;
        case 0xE2C4:
            func_E2C4(); break;
        case 0xE3C4:
            func_E3C4(); break;
        case 0xE3C5:
            func_E3C5(); break;
        case 0xE4C4:
            func_E4C4(); break;
        case 0xE6C5:
            func_E6C5(); break;
        case 0xE7C5:
            func_E7C5(); break;
        case 0xC4E8:
            func_C4E8(); break;
        case 0xC525:
            func_C525(); break;
        case 0xC550:
            func_C550(); break;
        case 0xC56D:
            func_C56D(); break;
        case 0xC58D:
            func_C58D(); break;
        case 0xC3C5:
            func_C3C5(); break;
        case 0xC3C6:
            func_C3C6(); break;
        case 0xC4C5:
            func_C4C5(); break;
        case 0xC6C5:
            func_C6C5(); break;
        case 0xC6C6:
            func_C6C6(); break;
        case 0xC7C5:
            func_C7C5(); break;
        case 0xC7C6:
            func_C7C6(); break;
        case 0xE58D:
            func_E58D(); break;
        case 0xE58E:
            func_E58E(); break;
        case 0xF98D:
            func_F98D(); break;
        case 0xF98E:
            func_F98E(); break;
        case 0xE68D:
            func_E68D(); break;
        case 0xE68E:
            func_E68E(); break;
        case 0xF517:
            func_F517(); break;
        case 0xC905:
            func_C905(); break;
        case 0xE7CA:
            func_E7CA(); break;
        case 0xD323:
            func_D323(); break;
        case 0xC21C:
            func_C21C(); break;
        case 0xE77E:
            func_E77E(); break;
        case 0xE820:
            func_E820(); break;
        case 0xE821:
            func_E821(); break;
        case 0xD2E9:
            func_D2E9(); break;
        case 0xE84F:
            func_E84F(); break;
        case 0xF120:
            func_F120(); break;
        case 0xF121:
            func_F121(); break;
        case 0xE8F2:
            func_E8F2(); break;
        case 0xC020:
            func_C020(); break;
        case 0xE1C1:
            func_E1C1(); break;
        case 0xDC54:
            func_DC54(); break;
        case 0xE730:
            func_E730(); break;
        case 0xFC20:
            func_FC20(); break;
        case 0xFC21:
            func_FC21(); break;
        case 0xE6FD:
            func_E6FD(); break;
        case 0xE76E:
            func_E76E(); break;
        case 0xFE20:
            func_FE20(); break;
        case 0xFE21:
            func_FE21(); break;
        case 0xDDFF:
            func_DDFF(); break;
        case 0xDB8D:
            func_DB8D(); break;
        case 0xDB8E:
            func_DB8E(); break;
        case 0xDC7C:
            func_DC7C(); break;
        case 0xFFAA:
            func_FFAA(); break;
        case 0xE04C:
            func_E04C(); break;
        case 0xE04D:
            func_E04D(); break;
        case 0xC2E1:
            func_C2E1(); break;
        case 0xD317:
            func_D317(); break;
        case 0xC600:
            func_C600(); break;
        case 0xC601:
            func_C601(); break;
        case 0xC314:
            func_C314(); break;
        case 0xDC20:
            func_DC20(); break;
        case 0xDC21:
            func_DC21(); break;
        case 0xDEDD:
            func_DEDD(); break;
        case 0xE8A9:
            func_E8A9(); break;
        case 0xE8AA:
            func_E8AA(); break;
        case 0xF58E:
            func_F58E(); break;
        case 0xC3AB:
            func_C3AB(); break;
        case 0xDE01:
            func_DE01(); break;
        case 0xE7AD:
            func_E7AD(); break;
        case 0xEA8E:
            func_EA8E(); break;
        case 0xEB8D:
            func_EB8D(); break;
        case 0xEB8E:
            func_EB8E(); break;
        case 0xEC8D:
            func_EC8D(); break;
        case 0xEC8E:
            func_EC8E(); break;
        case 0xEF8D:
            func_EF8D(); break;
        case 0xE98D:
            func_E98D(); break;
        case 0xE98E:
            func_E98E(); break;
        case 0xED8D:
            func_ED8D(); break;
        case 0xEE8E:
            func_EE8E(); break;
        case 0xE88D:
            func_E88D(); break;
        case 0xE88E:
            func_E88E(); break;
        case 0xE78E:
            func_E78E(); break;
        case 0xEE85:
            func_EE85(); break;
        case 0xFBA9:
            func_FBA9(); break;
        case 0xFBAA:
            func_FBAA(); break;
        case 0xFA8D:
            func_FA8D(); break;
        case 0xFA8E:
            func_FA8E(); break;
        case 0xFB8D:
            func_FB8D(); break;
        case 0xFB8E:
            func_FB8E(); break;
        case 0xF68E:
            func_F68E(); break;
        case 0xEE81:
            func_EE81(); break;
        case 0xEE82:
            func_EE82(); break;
        case 0xD9EE:
            func_D9EE(); break;
        case 0xD9EF:
            func_D9EF(); break;
        case 0xE38D:
            func_E38D(); break;
        case 0xE38E:
            func_E38E(); break;
        case 0xE28D:
            func_E28D(); break;
        case 0xE28E:
            func_E28E(); break;
        case 0xF0A9:
            func_F0A9(); break;
        case 0xF038:
            func_F038(); break;
        case 0xC301:
            func_C301(); break;
        case 0xC900:
            func_C900(); break;
        case 0xE0A5:
            func_E0A5(); break;
        case 0xE0A6:
            func_E0A6(); break;
        case 0xF091:
            func_F091(); break;
        case 0xE14D:
            func_E14D(); break;
        case 0xC6E2:
            func_C6E2(); break;
        case 0xFFA2:
            func_FFA2(); break;
        case 0xFFA3:
            func_FFA3(); break;
        case 0xF001:
            func_F001(); break;
        case 0xF002:
            func_F002(); break;
        case 0xC906:
            func_C906(); break;
        case 0xD00F:
            func_D00F(); break;
        case 0xD010:
            func_D010(); break;
        case 0xF00F:
            func_F00F(); break;
        case 0xF010:
            func_F010(); break;
        case 0xF3F0:
            func_F3F0(); break;
        case 0xD007:
            func_D007(); break;
        case 0xC9C7:
            func_C9C7(); break;
        case 0xD015:
            func_D015(); break;
        case 0xD016:
            func_D016(); break;
        case 0xF0AE:
            func_F0AE(); break;
        case 0xCE17:
            func_CE17(); break;
        case 0xCE18:
            func_CE18(); break;
        case 0xF0CE:
            func_F0CE(); break;
        case 0xD01C:
            func_D01C(); break;
        case 0xE265:
            func_E265(); break;
        case 0xF5AE:
            func_F5AE(); break;
        case 0xF005:
            func_F005(); break;
        case 0xCCA5:
            func_CCA5(); break;
        case 0xC94E:
            func_C94E(); break;
        case 0xC94F:
            func_C94F(); break;
        case 0xC94A:
            func_C94A(); break;
        case 0xF013:
            func_F013(); break;
        case 0xC946:
            func_C946(); break;
        case 0xF014:
            func_F014(); break;
        case 0xC943:
            func_C943(); break;
        case 0xF015:
            func_F015(); break;
        case 0xF016:
            func_F016(); break;
        case 0xC936:
            func_C936(); break;
        case 0xC937:
            func_C937(); break;
        case 0xF034:
            func_F034(); break;
        case 0xC932:
            func_C932(); break;
        case 0xC933:
            func_C933(); break;
        case 0xC92E:
            func_C92E(); break;
        case 0xC92F:
            func_C92F(); break;
        case 0xF036:
            func_F036(); break;
        case 0xF037:
            func_F037(); break;
        case 0xC92A:
            func_C92A(); break;
        case 0xC926:
            func_C926(); break;
        case 0xC927:
            func_C927(); break;
        case 0xF01A:
            func_F01A(); break;
        case 0xF01B:
            func_F01B(); break;
        case 0xC91F:
            func_C91F(); break;
        case 0xF01D:
            func_F01D(); break;
        case 0xF0B4:
            func_F0B4(); break;
        case 0xC602:
            func_C602(); break;
        case 0xC603:
            func_C603(); break;
        case 0xC6B4:
            func_C6B4(); break;
        case 0xC6B5:
            func_C6B5(); break;
        case 0xD0AF:
            func_D0AF(); break;
        case 0xE6AE:
            func_E6AE(); break;
        case 0xE6AF:
            func_E6AF(); break;
        case 0xD0AB:
            func_D0AB(); break;
        case 0xD0AC:
            func_D0AC(); break;
        case 0xE602:
            func_E602(); break;
        case 0xE603:
            func_E603(); break;
        case 0xE6AA:
            func_E6AA(); break;
        case 0xE6AB:
            func_E6AB(); break;
        case 0xD0AD:
            func_D0AD(); break;
        case 0xE721:
            func_E721(); break;
        case 0xC6E8:
            func_C6E8(); break;
        case 0xCA39:
            func_CA39(); break;
        case 0xEEA5:
            func_EEA5(); break;
        case 0xEEA6:
            func_EEA6(); break;
        case 0xF59A:
            func_F59A(); break;
        case 0xE370:
            func_E370(); break;
        case 0xD001:
            func_D001(); break;
        case 0xD002:
            func_D002(); break;
        case 0xCE4C:
            func_CE4C(); break;
        case 0xCE4D:
            func_CE4D(); break;
        case 0xC7CF:
            func_C7CF(); break;
        case 0xC9C8:
            func_C9C8(); break;
        case 0xF9F0:
            func_F9F0(); break;
        case 0xF9F1:
            func_F9F1(); break;
        case 0xC9F9:
            func_C9F9(); break;
        case 0xC9F5:
            func_C9F5(); break;
        case 0xC9F6:
            func_C9F6(); break;
        case 0xF007:
            func_F007(); break;
        case 0xF1F1:
            func_F1F1(); break;
        case 0xC9F1:
            func_C9F1(); break;
        case 0xC9F2:
            func_C9F2(); break;
        case 0xF00E:
            func_F00E(); break;
        case 0xEDF0:
            func_EDF0(); break;
        case 0xEDF1:
            func_EDF1(); break;
        case 0xC9ED:
            func_C9ED(); break;
        case 0xC9EE:
            func_C9EE(); break;
        case 0xE9F0:
            func_E9F0(); break;
        case 0xE9F1:
            func_E9F1(); break;
        case 0xC9E9:
            func_C9E9(); break;
        case 0xC9E5:
            func_C9E5(); break;
        case 0xC9E6:
            func_C9E6(); break;
        case 0xE1F0:
            func_E1F0(); break;
        case 0xC9E2:
            func_C9E2(); break;
        case 0xDDF0:
            func_DDF0(); break;
        case 0xDDF1:
            func_DDF1(); break;
        case 0xC9DD:
            func_C9DD(); break;
        case 0xC9DE:
            func_C9DE(); break;
        case 0xF017:
            func_F017(); break;
        case 0xD9F1:
            func_D9F1(); break;
        case 0xC9D9:
            func_C9D9(); break;
        case 0xC9DA:
            func_C9DA(); break;
        case 0xD5F0:
            func_D5F0(); break;
        case 0xD5F1:
            func_D5F1(); break;
        case 0xC9D6:
            func_C9D6(); break;
        case 0xF01E:
            func_F01E(); break;
        case 0xD1F0:
            func_D1F0(); break;
        case 0xD1F1:
            func_D1F1(); break;
        case 0xC9D1:
            func_C9D1(); break;
        case 0xC9D2:
            func_C9D2(); break;
        case 0xCDF0:
            func_CDF0(); break;
        case 0xCDF1:
            func_CDF1(); break;
        case 0xC9CE:
            func_C9CE(); break;
        case 0xC9F0:
            func_C9F0(); break;
        case 0xC9C9:
            func_C9C9(); break;
        case 0xC9CA:
            func_C9CA(); break;
        case 0xC5F1:
            func_C5F1(); break;
        case 0xC9C5:
            func_C9C5(); break;
        case 0xC1F0:
            func_C1F0(); break;
        case 0xC1F1:
            func_C1F1(); break;
        case 0xC9BD:
            func_C9BD(); break;
        case 0xD0CD:
            func_D0CD(); break;
        case 0xFC8D:
            func_FC8D(); break;
        case 0xFC8E:
            func_FC8E(); break;
        case 0xF011:
            func_F011(); break;
        case 0xFCAD:
            func_FCAD(); break;
        case 0xFCAE:
            func_FCAE(); break;
        case 0xF08D:
            func_F08D(); break;
        case 0xE64D:
            func_E64D(); break;
        case 0xD022:
            func_D022(); break;
        case 0xC877:
            func_C877(); break;
        case 0xC87B:
            func_C87B(); break;
        case 0xC882:
            func_C882(); break;
        case 0xC8AF:
            func_C8AF(); break;
        case 0xC8B6:
            func_C8B6(); break;
        case 0xDFC8:
            func_DFC8(); break;
        case 0xDFC9:
            func_DFC9(); break;
        case 0xE5C9:
            func_E5C9(); break;
        case 0xC8E6:
            func_C8E6(); break;
        case 0xECC9:
            func_ECC9(); break;
        case 0xC8ED:
            func_C8ED(); break;
        case 0xF4C8:
            func_F4C8(); break;
        case 0xF5C8:
            func_F5C8(); break;
        case 0xF5C9:
            func_F5C9(); break;
        case 0xC8F6:
            func_C8F6(); break;
        case 0xFCC8:
            func_FCC8(); break;
        case 0xFCC9:
            func_FCC9(); break;
        case 0xC924:
            func_C924(); break;
        case 0xC941:
            func_C941(); break;
        case 0xC9B7:
            func_C9B7(); break;
        case 0xFBC9:
            func_FBC9(); break;
        case 0xFBCA:
            func_FBCA(); break;
        case 0xFCCA:
            func_FCCA(); break;
        case 0xFDC9:
            func_FDC9(); break;
        case 0xFDCA:
            func_FDCA(); break;
        case 0xFEC9:
            func_FEC9(); break;
        case 0xFECA:
            func_FECA(); break;
        case 0xFFC9:
            func_FFC9(); break;
        case 0xFFCA:
            func_FFCA(); break;
        case 0xCA0B:
            func_CA0B(); break;
        case 0xCA24:
            func_CA24(); break;
        case 0xCA2B:
            func_CA2B(); break;
        case 0xC86A:
            func_C86A(); break;
        case 0xF020:
            func_F020(); break;
        case 0xD2BB:
            func_D2BB(); break;
        case 0xCD04:
            func_CD04(); break;
        case 0xCD05:
            func_CD05(); break;
        case 0xE5CD:
            func_E5CD(); break;
        case 0xE5CE:
            func_E5CE(); break;
        case 0xEEDA:
            func_EEDA(); break;
        case 0xEE04:
            func_EE04(); break;
        case 0xEE05:
            func_EE05(); break;
        case 0xE939:
            func_E939(); break;
        case 0xCD02:
            func_CD02(); break;
        case 0xF1CD:
            func_F1CD(); break;
        case 0xDB20:
            func_DB20(); break;
        case 0xDB21:
            func_DB21(); break;
        case 0xD8DC:
            func_D8DC(); break;
        case 0xEED8:
            func_EED8(); break;
        case 0xE100:
            func_E100(); break;
        case 0xCE06:
            func_CE06(); break;
        case 0xCE07:
            func_CE07(); break;
        case 0xCEC9:
            func_CEC9(); break;
        case 0xCECA:
            func_CECA(); break;
        case 0xFA4C:
            func_FA4C(); break;
        case 0xFA4D:
            func_FA4D(); break;
        case 0xCAC0:
            func_CAC0(); break;
        case 0xCBBA:
            func_CBBA(); break;
        case 0xCBBE:
            func_CBBE(); break;
        case 0xE7CB:
            func_E7CB(); break;
        case 0xE7CC:
            func_E7CC(); break;
        case 0xCBE8:
            func_CBE8(); break;
        case 0xEECC:
            func_EECC(); break;
        case 0xCBEF:
            func_CBEF(); break;
        case 0xF5CB:
            func_F5CB(); break;
        case 0xF5CC:
            func_F5CC(); break;
        case 0xF6CB:
            func_F6CB(); break;
        case 0xF6CC:
            func_F6CC(); break;
        case 0xF7CB:
            func_F7CB(); break;
        case 0xF7CC:
            func_F7CC(); break;
        case 0xF8CB:
            func_F8CB(); break;
        case 0xF8CC:
            func_F8CC(); break;
        case 0xF9CB:
            func_F9CB(); break;
        case 0xF9CC:
            func_F9CC(); break;
        case 0xFACB:
            func_FACB(); break;
        case 0xFACC:
            func_FACC(); break;
        case 0xFBCB:
            func_FBCB(); break;
        case 0xFBCC:
            func_FBCC(); break;
        case 0xFCCB:
            func_FCCB(); break;
        case 0xFCCC:
            func_FCCC(); break;
        case 0xCC55:
            func_CC55(); break;
        case 0xE0CC:
            func_E0CC(); break;
        case 0xE0CD:
            func_E0CD(); break;
        case 0xE1CC:
            func_E1CC(); break;
        case 0xCCE2:
            func_CCE2(); break;
        case 0xCD19:
            func_CD19(); break;
        case 0xCD20:
            func_CD20(); break;
        case 0xCDAD:
            func_CDAD(); break;
        case 0xCDB4:
            func_CDB4(); break;
        case 0xCDBC:
            func_CDBC(); break;
        case 0xC2CE:
            func_C2CE(); break;
        case 0xCDC3:
            func_CDC3(); break;
        case 0xCACD:
            func_CACD(); break;
        case 0xCACE:
            func_CACE(); break;
        case 0xCDCB:
            func_CDCB(); break;
        case 0xCDE3:
            func_CDE3(); break;
        case 0xCE13:
            func_CE13(); break;
        case 0xCE1A:
            func_CE1A(); break;
        case 0xCE36:
            func_CE36(); break;
        case 0xCE73:
            func_CE73(); break;
        case 0xCE7A:
            func_CE7A(); break;
        case 0xCEBE:
            func_CEBE(); break;
        case 0xCF1E:
            func_CF1E(); break;
        case 0xCAE7:
            func_CAE7(); break;
        case 0xC9CF:
            func_C9CF(); break;
        case 0xC5C9:
            func_C5C9(); break;
        case 0xC5CA:
            func_C5CA(); break;
        case 0xD0C6:
            func_D0C6(); break;
        case 0xF1AD:
            func_F1AD(); break;
        case 0xF1AE:
            func_F1AE(); break;
        case 0xF1CF:
            func_F1CF(); break;
        case 0xE4AD:
            func_E4AD(); break;
        case 0xE2AC:
            func_E2AC(); break;
        case 0xE2AD:
            func_E2AD(); break;
        case 0xE3AF:
            func_E3AF(); break;
        case 0xEE0F:
            func_EE0F(); break;
        case 0xC025:
            func_C025(); break;
        case 0xF019:
            func_F019(); break;
        case 0xE9B0:
            func_E9B0(); break;
        case 0xE9B1:
            func_E9B1(); break;
        case 0xCC30:
            func_CC30(); break;
        case 0xEECD:
            func_EECD(); break;
        case 0xC8AA:
            func_C8AA(); break;
        case 0xF0B1:
            func_F0B1(); break;
        case 0xDBAD:
            func_DBAD(); break;
        case 0xDBAE:
            func_DBAE(); break;
        case 0xCC8F:
            func_CC8F(); break;
        case 0xC9CC:
            func_C9CC(); break;
        case 0xCEE0:
            func_CEE0(); break;
        case 0xCEE1:
            func_CEE1(); break;
        case 0xDBCE:
            func_DBCE(); break;
        case 0xDBCF:
            func_DBCF(); break;
        case 0xE080:
            func_E080(); break;
        case 0xF080:
            func_F080(); break;
        case 0xF081:
            func_F081(); break;
        case 0xC9BB:
            func_C9BB(); break;
        case 0xC9BC:
            func_C9BC(); break;
        case 0xE400:
            func_E400(); break;
        case 0xE401:
            func_E401(); break;
        case 0xDF8D:
            func_DF8D(); break;
        case 0xDF8E:
            func_DF8E(); break;
        case 0xE3CE:
            func_E3CE(); break;
        case 0xE3CF:
            func_E3CF(); break;
        case 0xF9AD:
            func_F9AD(); break;
        case 0xF9AE:
            func_F9AE(); break;
        case 0xF0FF:
            func_F0FF(); break;
        case 0xE8AD:
            func_E8AD(); break;
        case 0xE8AE:
            func_E8AE(); break;
        case 0xD008:
            func_D008(); break;
        case 0xD00A:
            func_D00A(); break;
        case 0xD00B:
            func_D00B(); break;
        case 0xEECF:
            func_EECF(); break;
        case 0xEED0:
            func_EED0(); break;
        case 0xD0FF:
            func_D0FF(); break;
        case 0xE0AD:
            func_E0AD(); break;
        case 0xE0AE:
            func_E0AE(); break;
        case 0xE08E:
            func_E08E(); break;
        case 0xF041:
            func_F041(); break;
        case 0xCE03:
            func_CE03(); break;
        case 0xF5CE:
            func_F5CE(); break;
        case 0xF5CF:
            func_F5CF(); break;
        case 0xD044:
            func_D044(); break;
        case 0xDFAD:
            func_DFAD(); break;
        case 0xDFAE:
            func_DFAE(); break;
        case 0xD071:
            func_D071(); break;
        case 0xD081:
            func_D081(); break;
        case 0xD0B7:
            func_D0B7(); break;
        case 0xC0D0:
            func_C0D0(); break;
        case 0xC0D1:
            func_C0D1(); break;
        case 0xD0C1:
            func_D0C1(); break;
        case 0xCAD0:
            func_CAD0(); break;
        case 0xD0CB:
            func_D0CB(); break;
        case 0xD0D5:
            func_D0D5(); break;
        case 0xDED0:
            func_DED0(); break;
        case 0xDED1:
            func_DED1(); break;
        case 0xDFD0:
            func_DFD0(); break;
        case 0xDFD1:
            func_DFD1(); break;
        case 0xD0E0:
            func_D0E0(); break;
        case 0xEAD0:
            func_EAD0(); break;
        case 0xEAD1:
            func_EAD1(); break;
        case 0xD0EB:
            func_D0EB(); break;
        case 0xF26B:
            func_F26B(); break;
        case 0xE2AE:
            func_E2AE(); break;
        case 0xF2C0:
            func_F2C0(); break;
        case 0xF31C:
            func_F31C(); break;
        case 0xF36C:
            func_F36C(); break;
        case 0xDB00:
            func_DB00(); break;
        case 0xDB01:
            func_DB01(); break;
        case 0xC420:
            func_C420(); break;
        case 0xC421:
            func_C421(); break;
        case 0xF420:
            func_F420(); break;
        case 0xEC48:
            func_EC48(); break;
        case 0xF063:
            func_F063(); break;
        case 0xED39:
            func_ED39(); break;
        case 0xE6ED:
            func_E6ED(); break;
        case 0xF520:
            func_F520(); break;
        case 0xF521:
            func_F521(); break;
        case 0xDEAD:
            func_DEAD(); break;
        case 0xDEAE:
            func_DEAE(); break;
        case 0xE18D:
            func_E18D(); break;
        case 0xF06C:
            func_F06C(); break;
        case 0xF06D:
            func_F06D(); break;
        case 0xE5AD:
            func_E5AD(); break;
        case 0xE5AE:
            func_E5AE(); break;
        case 0xE4ED:
            func_E4ED(); break;
        case 0xFDAD:
            func_FDAD(); break;
        case 0xFDAE:
            func_FDAE(); break;
        case 0xFDED:
            func_FDED(); break;
        case 0xFDEE:
            func_FDEE(); break;
        case 0xFD8D:
            func_FD8D(); break;
        case 0xFD8E:
            func_FD8E(); break;
        case 0xCF57:
            func_CF57(); break;
        case 0xCED2:
            func_CED2(); break;
        case 0xD04A:
            func_D04A(); break;
        case 0xD29B:
            func_D29B(); break;
        case 0xEEEE:
            func_EEEE(); break;
        case 0xDD8D:
            func_DD8D(); break;
        case 0xDD8E:
            func_DD8E(); break;
        case 0xFE8E:
            func_FE8E(); break;
        case 0xFEAD:
            func_FEAD(); break;
        case 0xFEAE:
            func_FEAE(); break;
        case 0xFECE:
            func_FECE(); break;
        case 0xFECF:
            func_FECF(); break;
        case 0xD94D:
            func_D94D(); break;
        case 0xC9A1:
            func_C9A1(); break;
        case 0xC9A2:
            func_C9A2(); break;
        case 0xE9A9:
            func_E9A9(); break;
        case 0xD3AA:
            func_D3AA(); break;
        case 0xD313:
            func_D313(); break;
        case 0xC0A9:
            func_C0A9(); break;
        case 0xC0AA:
            func_C0AA(); break;
        case 0xD363:
            func_D363(); break;
        case 0xCEF7:
            func_CEF7(); break;
        case 0xD394:
            func_D394(); break;
        case 0xE402:
            func_E402(); break;
        case 0xE403:
            func_E403(); break;
        case 0xE4E5:
            func_E4E5(); break;
        case 0xE303:
            func_E303(); break;
        case 0xE4E3:
            func_E4E3(); break;
        case 0xD1D0:
            func_D1D0(); break;
        case 0xF2D2:
            func_F2D2(); break;
        case 0xF067:
            func_F067(); break;
        case 0xF068:
            func_F068(); break;
        case 0xC0F0:
            func_C0F0(); break;
        case 0xC1C0:
            func_C1C0(); break;
        case 0xC1C1:
            func_C1C1(); break;
        case 0xC2C2:
            func_C2C2(); break;
        case 0xD0C3:
            func_D0C3(); break;
        case 0xD0D0:
            func_D0D0(); break;
        case 0xF2D0:
            func_F2D0(); break;
        case 0xE1E2:
            func_E1E2(); break;
        case 0xE06A:
            func_E06A(); break;
        case 0xE06B:
            func_E06B(); break;
        case 0xE1E0:
            func_E1E0(); break;
        case 0xF079:
            func_F079(); break;
        case 0xC3F1:
            func_C3F1(); break;
        case 0xF4F0:
            func_F4F0(); break;
        case 0xF4F4:
            func_F4F4(); break;
        case 0xF4F5:
            func_F4F5(); break;
        case 0xF5F5:
            func_F5F5(); break;
        case 0xF303:
            func_F303(); break;
        case 0xF4F3:
            func_F4F3(); break;
        case 0xCA30:
            func_CA30(); break;
        case 0xCDCD:
            func_CDCD(); break;
        case 0xCECE:
            func_CECE(); break;
        case 0xCFCE:
            func_CFCE(); break;
        case 0xDC00:
            func_DC00(); break;
        case 0xDC01:
            func_DC01(); break;
        case 0xDDDC:
            func_DDDC(); break;
        case 0xDDDD:
            func_DDDD(); break;
        case 0xDEDE:
            func_DEDE(); break;
        case 0xFF02:
            func_FF02(); break;
        case 0xFF03:
            func_FF03(); break;
        case 0xCF10:
            func_CF10(); break;
        case 0xFF0F:
            func_FF0F(); break;
        case 0xFF10:
            func_FF10(); break;
        case 0xFF00:
            func_FF00(); break;
        case 0xFF01:
            func_FF01(); break;
        case 0xF3FF:
            func_F3FF(); break;
        case 0xF0F3:
            func_F0F3(); break;
        case 0xF0F4:
            func_F0F4(); break;
        case 0xF0F0:
            func_F0F0(); break;
        case 0xF0F1:
            func_F0F1(); break;
        case 0xFCF0:
            func_FCF0(); break;
        case 0xFCF1:
            func_FCF1(); break;
        case 0xC811:
            func_C811(); break;
        case 0xF8B0:
            func_F8B0(); break;
        case 0xF8B1:
            func_F8B1(); break;
        case 0xFC29:
            func_FC29(); break;
        case 0xFC2A:
            func_FC2A(); break;
        case 0xCE60:
            func_CE60(); break;
        case 0xD8A3:
            func_D8A3(); break;
        case 0xE802:
            func_E802(); break;
        case 0xC5A9:
            func_C5A9(); break;
        case 0xC5AA:
            func_C5AA(); break;
        case 0xC6A8:
            func_C6A8(); break;
        case 0xC6A9:
            func_C6A9(); break;
        case 0xEA20:
            func_EA20(); break;
        case 0xDE20:
            func_DE20(); break;
        case 0xDE21:
            func_DE21(); break;
        case 0xE61D:
            func_E61D(); break;
        case 0xE61E:
            func_E61E(); break;
        case 0xE6E8:
            func_E6E8(); break;
        case 0xE6E9:
            func_E6E9(); break;
        case 0xD017:
            func_D017(); break;
        case 0xC801:
            func_C801(); break;
        case 0xC802:
            func_C802(); break;
        case 0xE8C9:
            func_E8C9(); break;
        case 0xF4D0:
            func_F4D0(); break;
        case 0xF4D1:
            func_F4D1(); break;
        case 0xC8E8:
            func_C8E8(); break;
        case 0xC8E9:
            func_C8E9(); break;
        case 0xC0C8:
            func_C0C8(); break;
        case 0xF491:
            func_F491(); break;
        case 0xC6C8:
            func_C6C8(); break;
        case 0xC8C9:
            func_C8C9(); break;
        case 0xD000:
            func_D000(); break;
        case 0xE817:
            func_E817(); break;
        case 0xE818:
            func_E818(); break;
        case 0xD8AA:
            func_D8AA(); break;
        case 0xC7AD:
            func_C7AD(); break;
        case 0xC7AE:
            func_C7AE(); break;
        case 0xE34C:
            func_E34C(); break;
        case 0xE34D:
            func_E34D(); break;
        case 0xDDE4:
            func_DDE4(); break;
        case 0xF94C:
            func_F94C(); break;
        case 0xF94D:
            func_F94D(); break;
        case 0xDDFA:
            func_DDFA(); break;
        case 0xCEDD:
            func_CEDD(); break;
        case 0xCEDE:
            func_CEDE(); break;
        case 0xCEA9:
            func_CEA9(); break;
        case 0xCEAA:
            func_CEAA(); break;
        case 0xDF9E:
            func_DF9E(); break;
        case 0xDF9F:
            func_DF9F(); break;
        case 0xDFA0:
            func_DFA0(); break;
        case 0xE895:
            func_E895(); break;
        case 0xE896:
            func_E896(); break;
        case 0xC9AD:
            func_C9AD(); break;
        case 0xCAAE:
            func_CAAE(); break;
        case 0xCCAD:
            func_CCAD(); break;
        case 0xCCAE:
            func_CCAE(); break;
        case 0xCDAE:
            func_CDAE(); break;
        case 0xCEAD:
            func_CEAD(); break;
        case 0xCEAE:
            func_CEAE(); break;
        case 0xCFAE:
            func_CFAE(); break;
        case 0xC120:
            func_C120(); break;
        case 0xC121:
            func_C121(); break;
        case 0xD5A9:
            func_D5A9(); break;
        case 0xD5AA:
            func_D5AA(); break;
        case 0xD1AD:
            func_D1AD(); break;
        case 0xD1AE:
            func_D1AE(); break;
        case 0xD2AE:
            func_D2AE(); break;
        case 0xD3AE:
            func_D3AE(); break;
        case 0xD6AD:
            func_D6AD(); break;
        case 0xD6AE:
            func_D6AE(); break;
        case 0xD069:
            func_D069(); break;
        case 0xD06A:
            func_D06A(); break;
        case 0xDF0F:
            func_DF0F(); break;
        case 0xC4AA:
            func_C4AA(); break;
        case 0xDF73:
            func_DF73(); break;
        case 0xF829:
            func_F829(); break;
        case 0xF82A:
            func_F82A(); break;
        case 0xDFAB:
            func_DFAB(); break;
        case 0xC78E:
            func_C78E(); break;
        case 0xC88E:
            func_C88E(); break;
        case 0xCC20:
            func_CC20(); break;
        case 0xCC21:
            func_CC21(); break;
        case 0xF008:
            func_F008(); break;
        case 0xC951:
            func_C951(); break;
        case 0xC952:
            func_C952(); break;
        case 0xF00A:
            func_F00A(); break;
        case 0xF8D0:
            func_F8D0(); break;
        case 0xF8D1:
            func_F8D1(); break;
        case 0xE803:
            func_E803(); break;
        case 0xE0E8:
            func_E0E8(); break;
        case 0xE0E9:
            func_E0E9(); break;
        case 0xF890:
            func_F890(); break;
        case 0xF891:
            func_F891(); break;
        case 0xC803:
            func_C803(); break;
        case 0xD0C9:
            func_D0C9(); break;
        case 0xFAD0:
            func_FAD0(); break;
        case 0xFAD1:
            func_FAD1(); break;
        case 0xEDAE:
            func_EDAE(); break;
        case 0xC8E2:
            func_C8E2(); break;
        case 0xEEC9:
            func_EEC9(); break;
        case 0xEDEE:
            func_EDEE(); break;
        case 0xE7CE:
            func_E7CE(); break;
        case 0xF0B6:
            func_F0B6(); break;
        case 0xF0B7:
            func_F0B7(); break;
        case 0xEEB5:
            func_EEB5(); break;
        case 0xECEE:
            func_ECEE(); break;
        case 0xECEF:
            func_ECEF(); break;
        case 0xE15C:
            func_E15C(); break;
        case 0xE1DA:
            func_E1DA(); break;
        case 0xFCA9:
            func_FCA9(); break;
        case 0xFCAA:
            func_FCAA(); break;
        case 0xC6FC:
            func_C6FC(); break;
        case 0xC6FD:
            func_C6FD(); break;
        case 0xE250:
            func_E250(); break;
        case 0xE585:
            func_E585(); break;
        case 0xE586:
            func_E586(); break;
        case 0xD9AC:
            func_D9AC(); break;
        case 0xE2B2:
            func_E2B2(); break;
        case 0xE4A5:
            func_E4A5(); break;
        case 0xE4A6:
            func_E4A6(); break;
        case 0xE6A5:
            func_E6A5(); break;
        case 0xE6A6:
            func_E6A6(); break;
        case 0xE5A5:
            func_E5A5(); break;
        case 0xE5A6:
            func_E5A6(); break;
        case 0xE7A5:
            func_E7A5(); break;
        case 0xE1A5:
            func_E1A5(); break;
        case 0xE1A6:
            func_E1A6(); break;
        case 0xFF60:
            func_FF60(); break;
        case 0xFF61:
            func_FF61(); break;
        case 0xC97E:
            func_C97E(); break;
        case 0xC97F:
            func_C97F(); break;
        case 0xC97A:
            func_C97A(); break;
        case 0xC97B:
            func_C97B(); break;
        case 0xC976:
            func_C976(); break;
        case 0xC972:
            func_C972(); break;
        case 0xC973:
            func_C973(); break;
        case 0xC96E:
            func_C96E(); break;
        case 0xC96A:
            func_C96A(); break;
        case 0xC96B:
            func_C96B(); break;
        case 0xC966:
            func_C966(); break;
        case 0xC967:
            func_C967(); break;
        case 0xC962:
            func_C962(); break;
        case 0xC95F:
            func_C95F(); break;
        case 0xC95A:
            func_C95A(); break;
        case 0xC95B:
            func_C95B(); break;
        case 0xE48D:
            func_E48D(); break;
        case 0xF44C:
            func_F44C(); break;
        case 0xF44D:
            func_F44D(); break;
        case 0xD54C:
            func_D54C(); break;
        case 0xD54D:
            func_D54D(); break;
        case 0xE3D6:
            func_E3D6(); break;
        case 0xD00D:
            func_D00D(); break;
        case 0xD0B4:
            func_D0B4(); break;
        case 0xD0B5:
            func_D0B5(); break;
        case 0xC902:
            func_C902(); break;
        case 0xD01A:
            func_D01A(); break;
        case 0xC805:
            func_C805(); break;
        case 0xE42A:
            func_E42A(); break;
        case 0xE472:
            func_E472(); break;
        case 0xCA9A:
            func_CA9A(); break;
        case 0xCA9B:
            func_CA9B(); break;
        case 0xC598:
            func_C598(); break;
        case 0xE505:
            func_E505(); break;
        case 0xCA99:
            func_CA99(); break;
        case 0xEDD0:
            func_EDD0(); break;
        case 0xEDD1:
            func_EDD1(); break;
        case 0xF0E6:
            func_F0E6(); break;
        case 0xEC4C:
            func_EC4C(); break;
        case 0xD1CD:
            func_D1CD(); break;
        case 0xD2CE:
            func_D2CE(); break;
        case 0xF24C:
            func_F24C(); break;
        case 0xD3CD:
            func_D3CD(); break;
        case 0xF84C:
            func_F84C(); break;
        case 0xF84D:
            func_F84D(); break;
        case 0xE4F9:
            func_E4F9(); break;
        case 0xFE4C:
            func_FE4C(); break;
        case 0xFE4D:
            func_FE4D(); break;
        case 0xE4FF:
            func_E4FF(); break;
        case 0xD5CD:
            func_D5CD(); break;
        case 0xD5CE:
            func_D5CE(); break;
        case 0xD6CD:
            func_D6CD(); break;
        case 0xD6CE:
            func_D6CE(); break;
        case 0xE6A9:
            func_E6A9(); break;
        case 0xE5A9:
            func_E5A9(); break;
        case 0xE5AA:
            func_E5AA(); break;
        case 0xCCA9:
            func_CCA9(); break;
        case 0xCCAA:
            func_CCAA(); break;
        case 0xECA9:
            func_ECA9(); break;
        case 0xECAA:
            func_ECAA(); break;
        case 0xF810:
            func_F810(); break;
        case 0xF811:
            func_F811(); break;
        case 0xE66D:
            func_E66D(); break;
        case 0xD00E:
            func_D00E(); break;
        case 0xE805:
            func_E805(); break;
        case 0xD7A9:
            func_D7A9(); break;
        case 0xD7AA:
            func_D7AA(); break;
        case 0xE816:
            func_E816(); break;
        case 0xC086:
            func_C086(); break;
        case 0xF690:
            func_F690(); break;
        case 0xF691:
            func_F691(); break;
        case 0xC820:
            func_C820(); break;
        case 0xC821:
            func_C821(); break;
        case 0xE6F8:
            func_E6F8(); break;
        case 0xE6F9:
            func_E6F9(); break;
        case 0xCA14:
            func_CA14(); break;
        case 0xCA15:
            func_CA15(); break;
        case 0xE118:
            func_E118(); break;
        case 0xC90B:
            func_C90B(); break;
        case 0xE955:
            func_E955(); break;
        case 0xE538:
            func_E538(); break;
        case 0xE539:
            func_E539(); break;
        case 0xE575:
            func_E575(); break;
        case 0xE576:
            func_E576(); break;
        case 0xFE29:
            func_FE29(); break;
        case 0xFE2A:
            func_FE2A(); break;
        case 0xE903:
            func_E903(); break;
        case 0xE904:
            func_E904(); break;
        case 0xE46D:
            func_E46D(); break;
        case 0xE46E:
            func_E46E(); break;
        case 0xC503:
            func_C503(); break;
        case 0xE0A9:
            func_E0A9(); break;
        case 0xE0AA:
            func_E0AA(); break;
        case 0xE0A0:
            func_E0A0(); break;
        case 0xE0A1:
            func_E0A1(); break;
        case 0xC613:
            func_C613(); break;
        case 0xC614:
            func_C614(); break;
        case 0xE2A9:
            func_E2A9(); break;
        case 0xE2AA:
            func_E2AA(); break;
        case 0xFEB9:
            func_FEB9(); break;
        case 0xFEBA:
            func_FEBA(); break;
        case 0xC501:
            func_C501(); break;
        case 0xF092:
            func_F092(); break;
        case 0xC604:
            func_C604(); break;
        case 0xC605:
            func_C605(); break;
        case 0xD014:
            func_D014(); break;
        case 0xC2D1:
            func_C2D1(); break;
        case 0xC615:
            func_C615(); break;
        case 0xEBF1:
            func_EBF1(); break;
        case 0xE4F0:
            func_E4F0(); break;
        case 0xC676:
            func_C676(); break;
        case 0xC90E:
            func_C90E(); break;
        case 0xC9EB:
            func_C9EB(); break;
        case 0xC9EC:
            func_C9EC(); break;
        case 0xEE91:
            func_EE91(); break;
        case 0xEF4C:
            func_EF4C(); break;
        case 0xE96D:
            func_E96D(); break;
        case 0xE96E:
            func_E96E(); break;
        case 0xCEED:
            func_CEED(); break;
        case 0xE9CE:
            func_E9CE(); break;
        case 0xE9AE:
            func_E9AE(); break;
        case 0xD0FE:
            func_D0FE(); break;
        case 0xD8D0:
            func_D8D0(); break;
        case 0xD8D1:
            func_D8D1(); break;
        case 0xEC03:
            func_EC03(); break;
        case 0xD063:
            func_D063(); break;
        case 0xD064:
            func_D064(); break;
        case 0xEC87:
            func_EC87(); break;
        case 0xC814:
            func_C814(); break;
        case 0xC815:
            func_C815(); break;
        case 0xD076:
            func_D076(); break;
        case 0xC816:
            func_C816(); break;
        case 0xC817:
            func_C817(); break;
        case 0xCCC8:
            func_CCC8(); break;
        case 0xCCC9:
            func_CCC9(); break;
        case 0xE6EF:
            func_E6EF(); break;
        case 0xEC69:
            func_EC69(); break;
        case 0xED46:
            func_ED46(); break;
        case 0xF74C:
            func_F74C(); break;
        case 0xF74D:
            func_F74D(); break;
        case 0xECF8:
            func_ECF8(); break;
        case 0xECDF:
            func_ECDF(); break;
        case 0xE74C:
            func_E74C(); break;
        case 0xEDE7:
            func_EDE7(); break;
        case 0xCE6D:
            func_CE6D(); break;
        case 0xDACA:
            func_DACA(); break;
        case 0xED6B:
            func_ED6B(); break;
        case 0xED6C:
            func_ED6C(); break;
        case 0xCD6E:
            func_CD6E(); break;
        case 0xED8A:
            func_ED8A(); break;
        case 0xED8B:
            func_ED8B(); break;
        case 0xCCEE:
            func_CCEE(); break;
        case 0xCCEF:
            func_CCEF(); break;
        case 0xCC6D:
            func_CC6D(); break;
        case 0xEDA9:
            func_EDA9(); break;
        case 0xCB6D:
            func_CB6D(); break;
        case 0xCAEE:
            func_CAEE(); break;
        case 0xCAEF:
            func_CAEF(); break;
        case 0xCA6D:
            func_CA6D(); break;
        case 0xCA6E:
            func_CA6E(); break;
        case 0xC913:
            func_C913(); break;
        case 0xDEEE:
            func_DEEE(); break;
        case 0xDEEF:
            func_DEEF(); break;
        case 0xDDB6:
            func_DDB6(); break;
        case 0xEE28:
            func_EE28(); break;
        case 0xEE5B:
            func_EE5B(); break;
        case 0xEAAD:
            func_EAAD(); break;
        case 0xEAAE:
            func_EAAE(); break;
        case 0xCD14:
            func_CD14(); break;
        case 0xEE56:
            func_EE56(); break;
        case 0xDD6C:
            func_DD6C(); break;
        case 0xEEDD:
            func_EEDD(); break;
        case 0xEAEE:
            func_EAEE(); break;
        case 0xEE32:
            func_EE32(); break;
        case 0xEBAD:
            func_EBAD(); break;
        case 0xEBAE:
            func_EBAE(); break;
        case 0xE3CD:
            func_E3CD(); break;
        case 0xEE95:
            func_EE95(); break;
        case 0xEBAF:
            func_EBAF(); break;
        case 0xDD91:
            func_DD91(); break;
        case 0xEBEE:
            func_EBEE(); break;
        case 0xEEAF:
            func_EEAF(); break;
        case 0xEEB3:
            func_EEB3(); break;
        case 0xEF97:
            func_EF97(); break;
        case 0xF03C:
            func_F03C(); break;
        case 0xDDAD:
            func_DDAD(); break;
        case 0xDDAE:
            func_DDAE(); break;
        case 0xEEBF:
            func_EEBF(); break;
        case 0xDC8D:
            func_DC8D(); break;
        case 0xDC8E:
            func_DC8E(); break;
        case 0xC804:
            func_C804(); break;
        case 0xEEAA:
            func_EEAA(); break;
        case 0xEEAB:
            func_EEAB(); break;
        case 0xE9EE:
            func_E9EE(); break;
        case 0xE9EF:
            func_E9EF(); break;
        case 0xDCAD:
            func_DCAD(); break;
        case 0xDCAE:
            func_DCAE(); break;
        case 0xD14C:
            func_D14C(); break;
        case 0xEF2B:
            func_EF2B(); break;
        case 0xE8CD:
            func_E8CD(); break;
        case 0xE8CE:
            func_E8CE(); break;
        case 0xF08A:
            func_F08A(); break;
        case 0xF16C:
            func_F16C(); break;
        case 0xE9AF:
            func_E9AF(); break;
        case 0xEEF6:
            func_EEF6(); break;
        case 0xF0FA:
            func_F0FA(); break;
        case 0xE8AC:
            func_E8AC(); break;
        case 0xC004:
            func_C004(); break;
        case 0xF04C:
            func_F04C(); break;
        case 0xF04D:
            func_F04D(); break;
        case 0xF184:
            func_F184(); break;
        case 0xF265:
            func_F265(); break;
        case 0xF20C:
            func_F20C(); break;
        case 0xE7AF:
            func_E7AF(); break;
        case 0xE6CD:
            func_E6CD(); break;
        case 0xF2B5:
            func_F2B5(); break;
        case 0xC9F3:
            func_C9F3(); break;
        case 0xF293:
            func_F293(); break;
        case 0xEE1A:
            func_EE1A(); break;
        case 0xEE1B:
            func_EE1B(); break;
        case 0xFF99:
            func_FF99(); break;
        case 0xFF9A:
            func_FF9A(); break;
        case 0xF2E7:
            func_F2E7(); break;
        case 0xC8F2:
            func_C8F2(); break;
        case 0xCC03:
            func_CC03(); break;
        case 0xCC04:
            func_CC04(); break;
        case 0xE4CC:
            func_E4CC(); break;
        case 0xE4CD:
            func_E4CD(); break;
        case 0xC847:
            func_C847(); break;
        case 0xE88C:
            func_E88C(); break;
        case 0xC918:
            func_C918(); break;
        case 0xC919:
            func_C919(); break;
        case 0xF33E:
            func_F33E(); break;
        case 0xF099:
            func_F099(); break;
        case 0xF199:
            func_F199(); break;
        case 0xF19A:
            func_F19A(); break;
        case 0xF38D:
            func_F38D(); break;
        case 0xDB4C:
            func_DB4C(); break;
        case 0xDB4D:
            func_DB4D(); break;
        case 0xEEF4:
            func_EEF4(); break;
        case 0xE3EE:
            func_E3EE(); break;
        case 0xE3EF:
            func_E3EF(); break;
        case 0xCE09:
            func_CE09(); break;
        case 0xEE09:
            func_EE09(); break;
        case 0xEE0A:
            func_EE0A(); break;
        case 0xC80B:
            func_C80B(); break;
        case 0xC80D:
            func_C80D(); break;
        case 0xC80E:
            func_C80E(); break;
        case 0xFFAD:
            func_FFAD(); break;
        case 0xFFAE:
            func_FFAE(); break;
        case 0xF46B:
            func_F46B(); break;
        case 0xF4CA:
            func_F4CA(); break;
        case 0xCB86:
            func_CB86(); break;
        case 0xCB87:
            func_CB87(); break;
        case 0xC910:
            func_C910(); break;
        case 0xC911:
            func_C911(); break;
        case 0xC0CA:
            func_C0CA(); break;
        case 0xC4B0:
            func_C4B0(); break;
        case 0xD020:
            func_D020(); break;
        case 0xD021:
            func_D021(); break;
        case 0xF9D0:
            func_F9D0(); break;
        case 0xF9D1:
            func_F9D1(); break;
        case 0xCBA6:
            func_CBA6(); break;
        case 0xCBA7:
            func_CBA7(); break;
        case 0xFB29:
            func_FB29(); break;
        case 0xFB2A:
            func_FB2A(); break;
        case 0xFB30:
            func_FB30(); break;
        case 0xFB31:
            func_FB31(); break;
        case 0xFB10:
            func_FB10(); break;
        case 0xFB11:
            func_FB11(); break;
        case 0xEDA6:
            func_EDA6(); break;
        case 0xF0EE:
            func_F0EE(); break;
        case 0xED85:
            func_ED85(); break;
        case 0xF590:
            func_F590(); break;
        case 0xF591:
            func_F591(); break;
        case 0xC849:
            func_C849(); break;
        case 0xE285:
            func_E285(); break;
        case 0xE286:
            func_E286(); break;
        case 0xE385:
            func_E385(); break;
        case 0xE386:
            func_E386(); break;
        case 0xE685:
            func_E685(); break;
        case 0xE785:
            func_E785(); break;
        case 0xF0EF:
            func_F0EF(); break;
        case 0xE00F:
            func_E00F(); break;
        case 0xE010:
            func_E010(); break;
        case 0xFFE0:
            func_FFE0(); break;
        case 0xFFE1:
            func_FFE1(); break;
        case 0xF8A9:
            func_F8A9(); break;
        case 0xF8AA:
            func_F8AA(); break;
        case 0xE8E9:
            func_E8E9(); break;
        case 0xF7D0:
            func_F7D0(); break;
        case 0xF7D1:
            func_F7D1(); break;
        case 0xF5C5:
            func_F5C5(); break;
        case 0xE621:
            func_E621(); break;
        case 0xCCB6:
            func_CCB6(); break;
        case 0xCE55:
            func_CE55(); break;
        case 0xCE56:
            func_CE56(); break;
        case 0xCC35:
            func_CC35(); break;
        case 0xCE94:
            func_CE94(); break;
        case 0xCE95:
            func_CE95(); break;
        case 0xF210:
            func_F210(); break;
        case 0xE800:
            func_E800(); break;
        case 0xCA40:
            func_CA40(); break;
        case 0xCA41:
            func_CA41(); break;
        case 0xCC26:
            func_CC26(); break;
        case 0xCD26:
            func_CD26(); break;
        case 0xEBD0:
            func_EBD0(); break;
        case 0xEBD1:
            func_EBD1(); break;
        case 0xCC06:
            func_CC06(); break;
        case 0xCC85:
            func_CC85(); break;
        case 0xCD06:
            func_CD06(); break;
        case 0xCD86:
            func_CD86(); break;
        case 0xF606:
            func_F606(); break;
        case 0xD089:
            func_D089(); break;
        case 0xCAFA:
            func_CAFA(); break;
        case 0xCAFB:
            func_CAFB(); break;
        case 0xE0EF:
            func_E0EF(); break;
        case 0xD08A:
            func_D08A(); break;
        case 0xF7F0:
            func_F7F0(); break;
        case 0xF7F1:
            func_F7F1(); break;
        case 0xF6B0:
            func_F6B0(); break;
        case 0xF6B1:
            func_F6B1(); break;
        case 0xC807:
            func_C807(); break;
        case 0xC808:
            func_C808(); break;
        case 0xFF49:
            func_FF49(); break;
        case 0xFF4A:
            func_FF4A(); break;
        case 0xC915:
            func_C915(); break;
        case 0xC916:
            func_C916(); break;
        case 0xF9C9:
            func_F9C9(); break;
        case 0xF9CA:
            func_F9CA(); break;
        case 0xF0E8:
            func_F0E8(); break;
        case 0xF0E9:
            func_F0E9(); break;
        case 0xC812:
            func_C812(); break;
        case 0xC813:
            func_C813(); break;
        case 0xF660:
            func_F660(); break;
        case 0xE690:
            func_E690(); break;
        case 0xF666:
            func_F666(); break;
        case 0xCAFC:
            func_CAFC(); break;
        case 0xF310:
            func_F310(); break;
        case 0xF311:
            func_F311(); break;
        case 0xC079:
            func_C079(); break;
        case 0xDB4E:
            func_DB4E(); break;
        case 0xDB4F:
            func_DB4F(); break;
        case 0xC894:
            func_C894(); break;
        case 0xDDC6:
            func_DDC6(); break;
        case 0xF6DE:
            func_F6DE(); break;
        case 0xE7F6:
            func_E7F6(); break;
        case 0xEB71:
            func_EB71(); break;
        case 0xF3AB:
            func_F3AB(); break;
        case 0xF648:
            func_F648(); break;
        case 0xC115:
            func_C115(); break;
        case 0xCA83:
            func_CA83(); break;
        case 0xD97F:
            func_D97F(); break;
        case 0xD939:
            func_D939(); break;
        case 0xEA99:
            func_EA99(); break;
        case 0xEA90:
            func_EA90(); break;
        case 0xD84C:
            func_D84C(); break;
        case 0xD9BD:
            func_D9BD(); break;
        case 0xDABE:
            func_DABE(); break;
        case 0xC8B0:
            func_C8B0(); break;
        case 0xE047:
            func_E047(); break;
        case 0xC267:
            func_C267(); break;
        case 0xC5FC:
            func_C5FC(); break;
        case 0xDE6C:
            func_DE6C(); break;
        case 0xE045:
            func_E045(); break;
        case 0xCFB2:
            func_CFB2(); break;
        case 0xC180:
            func_C180(); break;
        case 0xDB1E:
            func_DB1E(); break;
        case 0xF6B3:
            func_F6B3(); break;
        case 0xE4AB:
            func_E4AB(); break;
        case 0xDBCA:
            func_DBCA(); break;
        case 0x80B9:
            switch (g_current_bank) {
                case 0: func_80B9_b0(); break;
                case 1: func_80B9_b1(); break;
                case 2: func_80B9_b2(); break;
                case 3: func_80B9_b3(); break;
                case 4: func_80B9_b4(); break;
                case 5: func_80B9_b5(); break;
                case 6: func_80B9_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xC038:
            func_C038(); break;
        case 0x81AD:
            switch (g_current_bank) {
                case 0: func_81AD_b0(); break;
                case 1: func_81AD_b1(); break;
                case 2: func_81AD_b2(); break;
                case 3: func_81AD_b3(); break;
                case 4: func_81AD_b4(); break;
                case 5: func_81AD_b5(); break;
                case 6: func_81AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x82AD:
            switch (g_current_bank) {
                case 0: func_82AD_b0(); break;
                case 1: func_82AD_b1(); break;
                case 2: func_82AD_b2(); break;
                case 3: func_82AD_b3(); break;
                case 4: func_82AD_b4(); break;
                case 5: func_82AD_b5(); break;
                case 6: func_82AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x83AD:
            switch (g_current_bank) {
                case 0: func_83AD_b0(); break;
                case 1: func_83AD_b1(); break;
                case 2: func_83AD_b2(); break;
                case 3: func_83AD_b3(); break;
                case 4: func_83AD_b4(); break;
                case 5: func_83AD_b5(); break;
                case 6: func_83AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x84AD:
            switch (g_current_bank) {
                case 0: func_84AD_b0(); break;
                case 1: func_84AD_b1(); break;
                case 2: func_84AD_b2(); break;
                case 3: func_84AD_b3(); break;
                case 4: func_84AD_b4(); break;
                case 5: func_84AD_b5(); break;
                case 6: func_84AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x85AD:
            switch (g_current_bank) {
                case 0: func_85AD_b0(); break;
                case 1: func_85AD_b1(); break;
                case 2: func_85AD_b2(); break;
                case 3: func_85AD_b3(); break;
                case 4: func_85AD_b4(); break;
                case 5: func_85AD_b5(); break;
                case 6: func_85AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x86AD:
            switch (g_current_bank) {
                case 0: func_86AD_b0(); break;
                case 1: func_86AD_b1(); break;
                case 2: func_86AD_b2(); break;
                case 3: func_86AD_b3(); break;
                case 4: func_86AD_b4(); break;
                case 5: func_86AD_b5(); break;
                case 6: func_86AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x87AD:
            switch (g_current_bank) {
                case 7: func_C7AD(); break;
                case 0: func_87AD_b0(); break;
                case 1: func_87AD_b1(); break;
                case 2: func_87AD_b2(); break;
                case 3: func_87AD_b3(); break;
                case 4: func_87AD_b4(); break;
                case 5: func_87AD_b5(); break;
                case 6: func_87AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x88AD:
            switch (g_current_bank) {
                case 7: func_C8AD(); break;
                case 0: func_88AD_b0(); break;
                case 1: func_88AD_b1(); break;
                case 2: func_88AD_b2(); break;
                case 3: func_88AD_b3(); break;
                case 4: func_88AD_b4(); break;
                case 5: func_88AD_b5(); break;
                case 6: func_88AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x89AD:
            switch (g_current_bank) {
                case 7: func_C9AD(); break;
                case 0: func_89AD_b0(); break;
                case 1: func_89AD_b1(); break;
                case 2: func_89AD_b2(); break;
                case 3: func_89AD_b3(); break;
                case 4: func_89AD_b4(); break;
                case 5: func_89AD_b5(); break;
                case 6: func_89AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8BAD:
            switch (g_current_bank) {
                case 0: func_8BAD_b0(); break;
                case 1: func_8BAD_b1(); break;
                case 2: func_8BAD_b2(); break;
                case 3: func_8BAD_b3(); break;
                case 4: func_8BAD_b4(); break;
                case 5: func_8BAD_b5(); break;
                case 6: func_8BAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8CAD:
            switch (g_current_bank) {
                case 7: func_CCAD(); break;
                case 0: func_8CAD_b0(); break;
                case 1: func_8CAD_b1(); break;
                case 2: func_8CAD_b2(); break;
                case 3: func_8CAD_b3(); break;
                case 4: func_8CAD_b4(); break;
                case 5: func_8CAD_b5(); break;
                case 6: func_8CAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8DAD:
            switch (g_current_bank) {
                case 7: func_CDAD(); break;
                case 0: func_8DAD_b0(); break;
                case 1: func_8DAD_b1(); break;
                case 2: func_8DAD_b2(); break;
                case 3: func_8DAD_b3(); break;
                case 4: func_8DAD_b4(); break;
                case 5: func_8DAD_b5(); break;
                case 6: func_8DAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8EAD:
            switch (g_current_bank) {
                case 7: func_CEAD(); break;
                case 0: func_8EAD_b0(); break;
                case 1: func_8EAD_b1(); break;
                case 2: func_8EAD_b2(); break;
                case 3: func_8EAD_b3(); break;
                case 4: func_8EAD_b4(); break;
                case 5: func_8EAD_b5(); break;
                case 6: func_8EAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8FAD:
            switch (g_current_bank) {
                case 0: func_8FAD_b0(); break;
                case 1: func_8FAD_b1(); break;
                case 2: func_8FAD_b2(); break;
                case 3: func_8FAD_b3(); break;
                case 4: func_8FAD_b4(); break;
                case 5: func_8FAD_b5(); break;
                case 6: func_8FAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xF4EF:
            func_F4EF(); break;
        case 0xC654:
            func_C654(); break;
        case 0xC11D:
            func_C11D(); break;
        case 0xD058:
            func_D058(); break;
        case 0xD04B:
            func_D04B(); break;
        case 0xE0E5:
            func_E0E5(); break;
        case 0xC6F3:
            func_C6F3(); break;
        case 0xE5A0:
            func_E5A0(); break;
        case 0xD51F:
            func_D51F(); break;
        case 0xD530:
            func_D530(); break;
        case 0xD532:
            func_D532(); break;
        case 0xD534:
            func_D534(); break;
        case 0xD520:
            func_D520(); break;
        case 0xEC9F:
            func_EC9F(); break;
        case 0xC07B:
            func_C07B(); break;
        case 0xE50A:
            func_E50A(); break;
        case 0xE8FB:
            func_E8FB(); break;
        case 0xD03C:
            func_D03C(); break;
        case 0xD048:
            func_D048(); break;
        case 0xD030:
            func_D030(); break;
        case 0xCC5F:
            func_CC5F(); break;
        case 0xCC64:
            func_CC64(); break;
        case 0xCCC0:
            func_CCC0(); break;
        case 0xEAA8:
            func_EAA8(); break;
        case 0xC0C4:
            func_C0C4(); break;
        case 0x89AE:
            switch (g_current_bank) {
                case 3: func_89AE_b3(); break;
                case 5: func_89AE_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8A0B:
            func_8A0B_b3(); break;
        case 0x8B98:
            func_8B98_b3(); break;
        case 0x8C2A:
            func_8C2A_b3(); break;
        case 0x839D:
            func_839D_b5(); break;
        case 0x86AA:
            func_86AA_b4(); break;
        case 0x874F:
            func_874F_b3(); break;
        case 0x8834:
            func_8834_b3(); break;
        case 0x897E:
            func_897E_b1(); break;
        case 0x899F:
            func_899F_b5(); break;
        case 0x8BD1:
            func_8BD1_b1(); break;
        case 0xFF0C:
            func_FF0C(); break;
        case 0x8C47:
            func_8C47_b2(); break;
        case 0x8C85:
            func_8C85_b2(); break;
        case 0xB00C:
            switch (g_current_bank) {
                case 2: func_B00C_b2(); break;
                case 1: func_B00C_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCFDC:
            func_CFDC(); break;
        case 0xCFEE:
            func_CFEE(); break;
        case 0xD003:
            func_D003(); break;
        case 0xD018:
            func_D018(); break;
        case 0xD024:
            func_D024(); break;
        case 0xD4F1:
            func_D4F1(); break;
        case 0xD4F3:
            func_D4F3(); break;
        case 0xD4F5:
            func_D4F5(); break;
        case 0xD50B:
            func_D50B(); break;
        case 0xD4F2:
            func_D4F2(); break;
        case 0xD4F4:
            func_D4F4(); break;
        case 0xD518:
            func_D518(); break;
        case 0xCFE8:
            func_CFE8(); break;
        case 0x8DD8:
            func_8DD8_b6(); break;
        case 0xD4E0:
            func_D4E0(); break;
        case 0xD4DC:
            func_D4DC(); break;
        case 0xD4F0:
            func_D4F0(); break;
        case 0xB24D:
            switch (g_current_bank) {
                case 0: func_B24D_b0(); break;
                case 4: func_B24D_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x844D:
            func_844D_b0(); break;
        case 0x8501:
            switch (g_current_bank) {
                case 7: func_C501(); break;
                case 0: func_8501_b0(); break;
                case 1: func_8501_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB1A9:
            func_B1A9_b0(); break;
        case 0xB101:
            switch (g_current_bank) {
                case 0: func_B101_b0(); break;
                case 3: func_B101_b3(); break;
                case 4: func_B101_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB361:
            func_B361_b0(); break;
        case 0x9123:
            func_9123_b0(); break;
        case 0x8601:
            func_8601_b0(); break;
        case 0x89ED:
            func_89ED_b0(); break;
        case 0x944F:
            func_944F_b0(); break;
        case 0xA1A4:
            func_A1A4_b0(); break;
        case 0xAF01:
            func_AF01_b0(); break;
        case 0xB1B2:
            func_B1B2_b0(); break;
        case 0xB401:
            switch (g_current_bank) {
                case 0: func_B401_b0(); break;
                case 4: func_B401_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB6AA:
            func_B6AA_b0(); break;
        case 0xA523:
            func_A523_b0(); break;
        case 0xA9B1:
            func_A9B1_b0(); break;
        case 0x8595:
            func_8595_b0(); break;
        case 0xB68E:
            func_B68E_b0(); break;
        case 0xA99A:
            func_A99A_b0(); break;
        case 0x8599:
            func_8599_b0(); break;
        case 0x85A9:
            func_85A9_b0(); break;
        case 0xA967:
            func_A967_b0(); break;
        case 0xA9B4:
            func_A9B4_b0(); break;
        case 0xA9BC:
            func_A9BC_b0(); break;
        case 0xA99D:
            switch (g_current_bank) {
                case 0: func_A99D_b0(); break;
                case 1: func_A99D_b1(); break;
                case 4: func_A99D_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8547:
            switch (g_current_bank) {
                case 0: func_8547_b0(); break;
                case 3: func_8547_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x88B6:
            func_88B6_b0(); break;
        case 0xB221:
            func_B221_b0(); break;
        case 0xB801:
            func_B801_b0(); break;
        case 0x9051:
            func_9051_b0(); break;
        case 0x9C4D:
            func_9C4D_b1(); break;
        case 0xAD83:
            switch (g_current_bank) {
                case 1: func_AD83_b1(); break;
                case 6: func_AD83_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA405:
            func_A405_b1(); break;
        case 0xA906:
            func_A906_b1(); break;
        case 0x8504:
            func_8504_b1(); break;
        case 0xA999:
            func_A999_b1(); break;
        case 0x9861:
            func_9861_b1(); break;
        case 0xA9C1:
            switch (g_current_bank) {
                case 1: func_A9C1_b1(); break;
                case 5: func_A9C1_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA18E:
            func_A18E_b1(); break;
        case 0xA28E:
            func_A28E_b1(); break;
        case 0x85A2:
            switch (g_current_bank) {
                case 1: func_85A2_b1(); break;
                case 2: func_85A2_b2(); break;
                case 4: func_85A2_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA68E:
            func_A68E_b1(); break;
        case 0xA98E:
            func_A98E_b1(); break;
        case 0xAC8E:
            switch (g_current_bank) {
                case 7: func_EC8E(); break;
                case 1: func_AC8E_b1(); break;
                case 4: func_AC8E_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB08E:
            func_B08E_b1(); break;
        case 0xAE8E:
            switch (g_current_bank) {
                case 7: func_EE8E(); break;
                case 1: func_AE8E_b1(); break;
                case 3: func_AE8E_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA51D:
            switch (g_current_bank) {
                case 1: func_A51D_b1(); break;
                case 4: func_A51D_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9D20:
            func_9D20_b1(); break;
        case 0x8E02:
            switch (g_current_bank) {
                case 1: func_8E02_b1(); break;
                case 4: func_8E02_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA402:
            func_A402_b1(); break;
        case 0x82AA:
            func_82AA_b1(); break;
        case 0xA461:
            func_A461_b1(); break;
        case 0xA903:
            switch (g_current_bank) {
                case 7: func_E903(); break;
                case 1: func_A903_b1(); break;
                case 2: func_A903_b2(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA91C:
            func_A91C_b1(); break;
        case 0xA416:
            func_A416_b1(); break;
        case 0x8D2D:
            func_8D2D_b1(); break;
        case 0x85D1:
            func_85D1_b1(); break;
        case 0x8805:
            switch (g_current_bank) {
                case 7: func_C805(); break;
                case 1: func_8805_b1(); break;
                case 3: func_8805_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAC61:
            func_AC61_b1(); break;
        case 0xA58A:
            func_A58A_b1(); break;
        case 0xA579:
            func_A579_b1(); break;
        case 0x9686:
            func_9686_b1(); break;
        case 0x95A6:
            func_95A6_b1(); break;
        case 0xA9F2:
            func_A9F2_b1(); break;
        case 0x8D6D:
            switch (g_current_bank) {
                case 1: func_8D6D_b1(); break;
                case 5: func_8D6D_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D14:
            switch (g_current_bank) {
                case 7: func_CD14(); break;
                case 1: func_8D14_b1(); break;
                case 3: func_8D14_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9DD9:
            func_9DD9_b1(); break;
        case 0xA919:
            func_A919_b1(); break;
        case 0xA809:
            func_A809_b1(); break;
        case 0x9D81:
            func_9D81_b1(); break;
        case 0x868F:
            func_868F_b1(); break;
        case 0x9B4D:
            func_9B4D_b1(); break;
        case 0xA990:
            func_A990_b1(); break;
        case 0xA964:
            func_A964_b1(); break;
        case 0xA491:
            func_A491_b1(); break;
        case 0x8592:
            switch (g_current_bank) {
                case 1: func_8592_b1(); break;
                case 4: func_8592_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9849:
            switch (g_current_bank) {
                case 1: func_9849_b1(); break;
                case 4: func_9849_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB005:
            func_B005_b1(); break;
        case 0x9D69:
            func_9D69_b1(); break;
        case 0x854B:
            func_854B_b1(); break;
        case 0x8519:
            switch (g_current_bank) {
                case 1: func_8519_b1(); break;
                case 5: func_8519_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8516:
            switch (g_current_bank) {
                case 1: func_8516_b1(); break;
                case 5: func_8516_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA597:
            func_A597_b1(); break;
        case 0x9D04:
            func_9D04_b1(); break;
        case 0xAE61:
            switch (g_current_bank) {
                case 1: func_AE61_b1(); break;
                case 5: func_AE61_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAD10:
            func_AD10_b1(); break;
        case 0x851B:
            func_851B_b1(); break;
        case 0xA5EC:
            func_A5EC_b1(); break;
        case 0xB012:
            func_B012_b1(); break;
        case 0x96C1:
            func_96C1_b1(); break;
        case 0xA799:
            func_A799_b1(); break;
        case 0xA521:
            switch (g_current_bank) {
                case 1: func_A521_b1(); break;
                case 4: func_A521_b4(); break;
                case 5: func_A521_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9B21:
            func_9B21_b1(); break;
        case 0x8C8E:
            func_8C8E_b1(); break;
        case 0xA99B:
            switch (g_current_bank) {
                case 1: func_A99B_b1(); break;
                case 4: func_A99B_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA9BE:
            func_A9BE_b1(); break;
        case 0xA264:
            func_A264_b1(); break;
        case 0x9964:
            func_9964_b1(); break;
        case 0x8864:
            func_8864_b1(); break;
        case 0xAD1E:
            func_AD1E_b1(); break;
        case 0x92E7:
            switch (g_current_bank) {
                case 7: func_D2E7(); break;
                case 1: func_92E7_b1(); break;
                case 4: func_92E7_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x91C6:
            func_91C6_b1(); break;
        case 0x81EF:
            func_81EF_b1(); break;
        case 0x900B:
            func_900B_b1(); break;
        case 0x88F2:
            func_88F2_b1(); break;
        case 0x90AA:
            func_90AA_b1(); break;
        case 0x9A86:
            switch (g_current_bank) {
                case 1: func_9A86_b1(); break;
                case 5: func_9A86_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA59A:
            func_A59A_b1(); break;
        case 0x9031:
            func_9031_b1(); break;
        case 0x8D93:
            switch (g_current_bank) {
                case 1: func_8D93_b1(); break;
                case 3: func_8D93_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x94A6:
            switch (g_current_bank) {
                case 1: func_94A6_b1(); break;
                case 4: func_94A6_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8509:
            func_8509_b1(); break;
        case 0xA994:
            func_A994_b1(); break;
        case 0x99A3:
            func_99A3_b1(); break;
        case 0xA24F:
            func_A24F_b1(); break;
        case 0x9D0D:
            func_9D0D_b1(); break;
        case 0xA958:
            func_A958_b1(); break;
        case 0x8D1B:
            func_8D1B_b1(); break;
        case 0xA898:
            func_A898_b1(); break;
        case 0x904B:
            switch (g_current_bank) {
                case 7: func_D04B(); break;
                case 1: func_904B_b1(); break;
                case 5: func_904B_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAEF1:
            func_AEF1_b1(); break;
        case 0xA5AF:
            func_A5AF_b1(); break;
        case 0xA02B:
            func_A02B_b1(); break;
        case 0xAA04:
            func_AA04_b1(); break;
        case 0x85AC:
            func_85AC_b1(); break;
        case 0xA0A6:
            func_A0A6_b1(); break;
        case 0x9BC6:
            func_9BC6_b1(); break;
        case 0x8598:
            func_8598_b1(); break;
        case 0x859D:
            func_859D_b1(); break;
        case 0x9DA6:
            func_9DA6_b1(); break;
        case 0x9E66:
            func_9E66_b1(); break;
        case 0xA515:
            func_A515_b1(); break;
        case 0x9099:
            switch (g_current_bank) {
                case 1: func_9099_b1(); break;
                case 6: func_9099_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8520:
            switch (g_current_bank) {
                case 1: func_8520_b1(); break;
                case 4: func_8520_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8561:
            switch (g_current_bank) {
                case 1: func_8561_b1(); break;
                case 3: func_8561_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA261:
            func_A261_b1(); break;
        case 0x9D35:
            func_9D35_b1(); break;
        case 0xAFA6:
            func_AFA6_b1(); break;
        case 0x8143:
            func_8143_b1(); break;
        case 0xA9AE:
            func_A9AE_b1(); break;
        case 0x8529:
            func_8529_b1(); break;
        case 0xA2AA:
            switch (g_current_bank) {
                case 7: func_E2AA(); break;
                case 1: func_A2AA_b1(); break;
                case 5: func_A2AA_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xADB0:
            func_ADB0_b1(); break;
        case 0xB065:
            func_B065_b1(); break;
        case 0xA9B0:
            func_A9B0_b1(); break;
        case 0x8D37:
            func_8D37_b1(); break;
        case 0x81B0:
            func_81B0_b1(); break;
        case 0xA9B8:
            switch (g_current_bank) {
                case 1: func_A9B8_b1(); break;
                case 6: func_A9B8_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D65:
            func_8D65_b1(); break;
        case 0xA5B2:
            func_A5B2_b1(); break;
        case 0xA86E:
            func_A86E_b1(); break;
        case 0xA907:
            switch (g_current_bank) {
                case 2: func_A907_b2(); break;
                case 6: func_A907_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x87AA:
            func_87AA_b2(); break;
        case 0xA007:
            func_A007_b2(); break;
        case 0x9D01:
            switch (g_current_bank) {
                case 2: func_9D01_b2(); break;
                case 3: func_9D01_b3(); break;
                case 5: func_9D01_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAA07:
            func_AA07_b2(); break;
        case 0x8D04:
            func_8D04_b2(); break;
        case 0xA807:
            func_A807_b2(); break;
        case 0x8D86:
            func_8D86_b2(); break;
        case 0x9D10:
            func_9D10_b2(); break;
        case 0x9D0C:
            func_9D0C_b2(); break;
        case 0xA2CA:
            func_A2CA_b2(); break;
        case 0xA80B:
            switch (g_current_bank) {
                case 2: func_A80B_b2(); break;
                case 5: func_A80B_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9421:
            func_9421_b2(); break;
        case 0x90FF:
            func_90FF_b2(); break;
        case 0x8D0C:
            func_8D0C_b2(); break;
        case 0x8D80:
            func_8D80_b2(); break;
        case 0x938F:
            func_938F_b2(); break;
        case 0x9294:
            func_9294_b2(); break;
        case 0x9393:
            switch (g_current_bank) {
                case 7: func_D393(); break;
                case 2: func_9393_b2(); break;
                case 3: func_9393_b3(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x931F:
            func_931F_b2(); break;
        case 0x939A:
            func_939A_b2(); break;
        case 0x939D:
            func_939D_b2(); break;
        case 0x93A1:
            func_93A1_b2(); break;
        case 0xA1B0:
            func_A1B0_b2(); break;
        case 0xA1E7:
            func_A1E7_b2(); break;
        case 0x93A3:
            func_93A3_b2(); break;
        case 0xA201:
            switch (g_current_bank) {
                case 2: func_A201_b2(); break;
                case 4: func_A201_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA220:
            func_A220_b2(); break;
        case 0xA10B:
            func_A10B_b2(); break;
        case 0xAA20:
            func_AA20_b2(); break;
        case 0xA00D:
            func_A00D_b2(); break;
        case 0xA019:
            func_A019_b2(); break;
        case 0xA306:
            func_A306_b2(); break;
        case 0xA024:
            func_A024_b2(); break;
        case 0xA003:
            func_A003_b2(); break;
        case 0xA30D:
            func_A30D_b2(); break;
        case 0x8E20:
            func_8E20_b2(); break;
        case 0xA08E:
            func_A08E_b2(); break;
        case 0xA2FF:
            func_A2FF_b2(); break;
        case 0xA001:
            func_A001_b2(); break;
        case 0xA218:
            switch (g_current_bank) {
                case 2: func_A218_b2(); break;
                case 6: func_A218_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA215:
            func_A215_b2(); break;
        case 0xA015:
            switch (g_current_bank) {
                case 2: func_A015_b2(); break;
                case 4: func_A015_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB04B:
            func_B04B_b3(); break;
        case 0x856D:
            func_856D_b3(); break;
        case 0x8506:
            func_8506_b3(); break;
        case 0x838E:
            switch (g_current_bank) {
                case 7: func_C38E(); break;
                case 3: func_838E_b3(); break;
                case 4: func_838E_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x888E:
            func_888E_b3(); break;
        case 0x9AA6:
            func_9AA6_b3(); break;
        case 0x9804:
            func_9804_b3(); break;
        case 0x9983:
            func_9983_b3(); break;
        case 0xB105:
            func_B105_b3(); break;
        case 0x8DD1:
            func_8DD1_b3(); break;
        case 0x8D23:
            func_8D23_b3(); break;
        case 0x8DE1:
            func_8DE1_b3(); break;
        case 0xADAA:
            func_ADAA_b3(); break;
        case 0xB3AE:
            func_B3AE_b3(); break;
        case 0x8DB3:
            func_8DB3_b3(); break;
        case 0xABAA:
            func_ABAA_b3(); break;
        case 0xAF8E:
            func_AF8E_b3(); break;
        case 0xAD04:
            func_AD04_b3(); break;
        case 0x90C1:
            func_90C1_b3(); break;
        case 0x8D05:
            func_8D05_b3(); break;
        case 0x8D02:
            switch (g_current_bank) {
                case 7: func_CD02(); break;
                case 3: func_8D02_b3(); break;
                case 6: func_8D02_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8DCF:
            func_8DCF_b3(); break;
        case 0x8CAA:
            switch (g_current_bank) {
                case 7: func_CCAA(); break;
                case 3: func_8CAA_b3(); break;
                case 4: func_8CAA_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x858D:
            func_858D_b3(); break;
        case 0xA51A:
            func_A51A_b3(); break;
        case 0x9005:
            func_9005_b3(); break;
        case 0xA3A6:
            func_A3A6_b3(); break;
        case 0x894D:
            func_894D_b3(); break;
        case 0xA91A:
            func_A91A_b3(); break;
        case 0xA6A6:
            func_A6A6_b3(); break;
        case 0x9D03:
            func_9D03_b3(); break;
        case 0xADE9:
            func_ADE9_b3(); break;
        case 0x9AAA:
            func_9AAA_b3(); break;
        case 0x8F01:
            func_8F01_b3(); break;
        case 0x8FAE:
            switch (g_current_bank) {
                case 7: func_CFAE(); break;
                case 3: func_8FAE_b3(); break;
                case 5: func_8FAE_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8DB6:
            func_8DB6_b3(); break;
        case 0x85C7:
            func_85C7_b3(); break;
        case 0x85B6:
            func_85B6_b3(); break;
        case 0x9D14:
            func_9D14_b3(); break;
        case 0x9015:
            func_9015_b3(); break;
        case 0xA9F6:
            func_A9F6_b3(); break;
        case 0x9D25:
            func_9D25_b3(); break;
        case 0x9029:
            func_9029_b3(); break;
        case 0x9041:
            func_9041_b3(); break;
        case 0xAF56:
            func_AF56_b3(); break;
        case 0x8803:
            func_8803_b3(); break;
        case 0x8B31:
            func_8B31_b3(); break;
        case 0xAFBF:
            func_AFBF_b3(); break;
        case 0xACAA:
            func_ACAA_b3(); break;
        case 0xA7A9:
            func_A7A9_b3(); break;
        case 0x9596:
            func_9596_b3(); break;
        case 0x8D8D:
            func_8D8D_b3(); break;
        case 0x9C8E:
            switch (g_current_bank) {
                case 7: func_DC8E(); break;
                case 3: func_9C8E_b3(); break;
                case 4: func_9C8E_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x96B2:
            func_96B2_b3(); break;
        case 0x9A01:
            func_9A01_b3(); break;
        case 0xB19B:
            func_B19B_b3(); break;
        case 0xB1A7:
            func_B1A7_b3(); break;
        case 0xA0A1:
            func_A0A1_b3(); break;
        case 0x9701:
            func_9701_b3(); break;
        case 0x908E:
            func_908E_b3(); break;
        case 0x90AE:
            func_90AE_b3(); break;
        case 0x91AE:
            func_91AE_b3(); break;
        case 0x834D:
            func_834D_b3(); break;
        case 0x978E:
            switch (g_current_bank) {
                case 3: func_978E_b3(); break;
                case 4: func_978E_b4(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x852C:
            func_852C_b3(); break;
        case 0x9522:
            func_9522_b3(); break;
        case 0x99AE:
            func_99AE_b3(); break;
        case 0xAF9A:
            func_AF9A_b3(); break;
        case 0x8801:
            func_8801_b3(); break;
        case 0xB54D:
            func_B54D_b4(); break;
        case 0x81DF:
            func_81DF_b4(); break;
        case 0xA904:
            func_A904_b4(); break;
        case 0x9C21:
            func_9C21_b4(); break;
        case 0xA987:
            func_A987_b4(); break;
        case 0xA2A9:
            func_A2A9_b4(); break;
        case 0xAD61:
            func_AD61_b4(); break;
        case 0x8D21:
            func_8D21_b4(); break;
        case 0xA8A4:
            func_A8A4_b4(); break;
        case 0x8253:
            func_8253_b4(); break;
        case 0x9332:
            func_9332_b4(); break;
        case 0x868E:
            func_868E_b4(); break;
        case 0x8E8E:
            func_8E8E_b4(); break;
        case 0x958E:
            func_958E_b4(); break;
        case 0x8E00:
            func_8E00_b4(); break;
        case 0x9905:
            switch (g_current_bank) {
                case 4: func_9905_b4(); break;
                case 5: func_9905_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9286:
            func_9286_b4(); break;
        case 0x9486:
            func_9486_b4(); break;
        case 0x94E7:
            func_94E7_b4(); break;
        case 0x9993:
            func_9993_b4(); break;
        case 0x8505:
            switch (g_current_bank) {
                case 4: func_8505_b4(); break;
                case 5: func_8505_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D53:
            func_8D53_b4(); break;
        case 0x94BA:
            func_94BA_b4(); break;
        case 0x8587:
            func_8587_b4(); break;
        case 0x870A:
            func_870A_b4(); break;
        case 0x9589:
            func_9589_b4(); break;
        case 0x9696:
            func_9696_b4(); break;
        case 0xA602:
            func_A602_b4(); break;
        case 0x8689:
            func_8689_b4(); break;
        case 0xB7B5:
            func_B7B5_b4(); break;
        case 0xB7C7:
            func_B7C7_b4(); break;
        case 0xAD8C:
            func_AD8C_b4(); break;
        case 0x814C:
            func_814C_b4(); break;
        case 0xAD0E:
            func_AD0E_b4(); break;
        case 0xA98C:
            switch (g_current_bank) {
                case 4: func_A98C_b4(); break;
                case 5: func_A98C_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8D0A:
            func_8D0A_b4(); break;
        case 0x9CAA:
            func_9CAA_b4(); break;
        case 0x9D8E:
            switch (g_current_bank) {
                case 7: func_DD8E(); break;
                case 4: func_9D8E_b4(); break;
                case 6: func_9D8E_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9DAA:
            func_9DAA_b4(); break;
        case 0x8EAA:
            func_8EAA_b4(); break;
        case 0x9EAA:
            func_9EAA_b4(); break;
        case 0x9DA0:
            func_9DA0_b4(); break;
        case 0xAE5B:
            func_AE5B_b4(); break;
        case 0xAE91:
            func_AE91_b4(); break;
        case 0x8502:
            switch (g_current_bank) {
                case 4: func_8502_b4(); break;
                case 5: func_8502_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAD14:
            switch (g_current_bank) {
                case 4: func_AD14_b4(); break;
                case 5: func_AD14_b5(); break;
                case 6: func_AD14_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x850B:
            func_850B_b4(); break;
        case 0xA415:
            func_A415_b4(); break;
        case 0xA586:
            func_A586_b4(); break;
        case 0x9D99:
            func_9D99_b4(); break;
        case 0xA5C2:
            func_A5C2_b4(); break;
        case 0xB2B1:
            func_B2B1_b4(); break;
        case 0xA006:
            func_A006_b4(); break;
        case 0x992C:
            func_992C_b4(); break;
        case 0x9903:
            func_9903_b4(); break;
        case 0x82BA:
            func_82BA_b4(); break;
        case 0xA995:
            switch (g_current_bank) {
                case 4: func_A995_b4(); break;
                case 6: func_A995_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA85B:
            func_A85B_b4(); break;
        case 0xB021:
            func_B021_b4(); break;
        case 0xAF4D:
            func_AF4D_b4(); break;
        case 0xAD1C:
            func_AD1C_b4(); break;
        case 0x85F1:
            func_85F1_b4(); break;
        case 0xAE4F:
            func_AE4F_b4(); break;
        case 0x9DEE:
            func_9DEE_b4(); break;
        case 0x9D07:
            func_9D07_b4(); break;
        case 0x9D60:
            func_9D60_b4(); break;
        case 0x8BBE:
            func_8BBE_b4(); break;
        case 0x9D19:
            func_9D19_b4(); break;
        case 0x8152:
            func_8152_b4(); break;
        case 0xA516:
            func_A516_b4(); break;
        case 0xA9C7:
            func_A9C7_b4(); break;
        case 0x85B4:
            func_85B4_b4(); break;
        case 0xAD1A:
            func_AD1A_b4(); break;
        case 0x92AE:
            func_92AE_b4(); break;
        case 0xABAE:
            func_ABAE_b4(); break;
        case 0xA9EF:
            func_A9EF_b4(); break;
        case 0x8621:
            func_8621_b4(); break;
        case 0xA504:
            func_A504_b4(); break;
        case 0xAD07:
            func_AD07_b4(); break;
        case 0xAD22:
            func_AD22_b4(); break;
        case 0xA59E:
            func_A59E_b4(); break;
        case 0xB91A:
            func_B91A_b4(); break;
        case 0x8D4C:
            func_8D4C_b4(); break;
        case 0x9DB8:
            func_9DB8_b4(); break;
        case 0x9019:
            func_9019_b4(); break;
        case 0xB019:
            func_B019_b4(); break;
        case 0x83AE:
            func_83AE_b4(); break;
        case 0x84AE:
            func_84AE_b4(); break;
        case 0x82AE:
            switch (g_current_bank) {
                case 4: func_82AE_b4(); break;
                case 5: func_82AE_b5(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8137:
            func_8137_b4(); break;
        case 0x813A:
            func_813A_b4(); break;
        case 0x8B21:
            func_8B21_b4(); break;
        case 0xA4A7:
            func_A4A7_b4(); break;
        case 0xAD0C:
            func_AD0C_b4(); break;
        case 0x866E:
            func_866E_b4(); break;
        case 0x86AE:
            func_86AE_b4(); break;
        case 0xAC6E:
            func_AC6E_b4(); break;
        case 0xA542:
            func_A542_b4(); break;
        case 0x814F:
            func_814F_b4(); break;
        case 0x8C49:
            func_8C49_b4(); break;
        case 0xA205:
            func_A205_b4(); break;
        case 0xBCF6:
            func_BCF6_b4(); break;
        case 0x9DAE:
            func_9DAE_b4(); break;
        case 0x9CCF:
            func_9CCF_b4(); break;
        case 0x9DBE:
            func_9DBE_b4(); break;
        case 0xB989:
            func_B989_b4(); break;
        case 0xADBD:
            func_ADBD_b4(); break;
        case 0xA8CF:
            func_A8CF_b4(); break;
        case 0xADB4:
            func_ADB4_b4(); break;
        case 0xA9BA:
            func_A9BA_b4(); break;
        case 0xA74D:
            func_A74D_b4(); break;
        case 0xAEBD:
            func_AEBD_b4(); break;
        case 0x8F4D:
            func_8F4D_b5(); break;
        case 0xA984:
            func_A984_b5(); break;
        case 0x8D39:
            func_8D39_b5(); break;
        case 0x913B:
            func_913B_b5(); break;
        case 0x95A5:
            func_95A5_b5(); break;
        case 0xA50C:
            func_A50C_b5(); break;
        case 0x8591:
            func_8591_b5(); break;
        case 0xADEF:
            func_ADEF_b5(); break;
        case 0xA961:
            func_A961_b5(); break;
        case 0x8557:
            func_8557_b5(); break;
        case 0xAD18:
            func_AD18_b5(); break;
        case 0x974D:
            func_974D_b5(); break;
        case 0xA9AB:
            func_A9AB_b5(); break;
        case 0x858B:
            func_858B_b5(); break;
        case 0xAD30:
            func_AD30_b5(); break;
        case 0x900D:
            func_900D_b5(); break;
        case 0xAC1F:
            func_AC1F_b5(); break;
        case 0xA52A:
            func_A52A_b5(); break;
        case 0xAD76:
            func_AD76_b5(); break;
        case 0x9D61:
            func_9D61_b5(); break;
        case 0x9D05:
            func_9D05_b5(); break;
        case 0x85E9:
            func_85E9_b5(); break;
        case 0xA811:
            func_A811_b5(); break;
        case 0xA5CD:
            func_A5CD_b5(); break;
        case 0x8596:
            func_8596_b5(); break;
        case 0xA98F:
            func_A98F_b5(); break;
        case 0xA5DA:
            func_A5DA_b5(); break;
        case 0xA992:
            func_A992_b5(); break;
        case 0xADA9:
            func_ADA9_b5(); break;
        case 0xA869:
            func_A869_b5(); break;
        case 0x9218:
            func_9218_b5(); break;
        case 0x97A6:
            func_97A6_b5(); break;
        case 0x9D4D:
            func_9D4D_b5(); break;
        case 0xA700:
            func_A700_b5(); break;
        case 0x878E:
            func_878E_b5(); break;
        case 0x93CD:
            func_93CD_b5(); break;
        case 0x8395:
            func_8395_b5(); break;
        case 0x8583:
            func_8583_b5(); break;
        case 0x84AA:
            func_84AA_b5(); break;
        case 0xA902:
            func_A902_b5(); break;
        case 0x850D:
            func_850D_b5(); break;
        case 0xA615:
            func_A615_b5(); break;
        case 0x95E4:
            func_95E4_b5(); break;
        case 0xA2F6:
            func_A2F6_b5(); break;
        case 0x95FC:
            func_95FC_b5(); break;
        case 0x9641:
            func_9641_b5(); break;
        case 0x964F:
            func_964F_b5(); break;
        case 0x9658:
            func_9658_b5(); break;
        case 0x9666:
            func_9666_b5(); break;
        case 0xA5EF:
            func_A5EF_b5(); break;
        case 0x96DF:
            func_96DF_b5(); break;
        case 0x8A24:
            func_8A24_b5(); break;
        case 0xA6EF:
            func_A6EF_b5(); break;
        case 0xAC99:
            func_AC99_b5(); break;
        case 0xA604:
            func_A604_b5(); break;
        case 0xA598:
            func_A598_b5(); break;
        case 0x8569:
            func_8569_b5(); break;
        case 0xACC1:
            func_ACC1_b5(); break;
        case 0x8889:
            func_8889_b5(); break;
        case 0xB004:
            switch (g_current_bank) {
                case 7: func_F004(); break;
                case 5: func_B004_b5(); break;
                case 2: func_B004_b2(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8A14:
            func_8A14_b5(); break;
        case 0x9D15:
            func_9D15_b5(); break;
        case 0xA278:
            func_A278_b5(); break;
        case 0x8522:
            func_8522_b5(); break;
        case 0x9DA8:
            func_9DA8_b5(); break;
        case 0xB39C:
            func_B39C_b5(); break;
        case 0x9DDA:
            func_9DDA_b5(); break;
        case 0x9D3A:
            func_9D3A_b5(); break;
        case 0x9D43:
            func_9D43_b5(); break;
        case 0x9D23:
            func_9D23_b5(); break;
        case 0xA9A7:
            func_A9A7_b5(); break;
        case 0xA251:
            func_A251_b5(); break;
        case 0x9AAE:
            func_9AAE_b5(); break;
        case 0x98AE:
            func_98AE_b5(); break;
        case 0xB016:
            func_B016_b5(); break;
        case 0x81BA:
            func_81BA_b5(); break;
        case 0xB861:
            func_B861_b5(); break;
        case 0xB863:
            func_B863_b5(); break;
        case 0x9D37:
            switch (g_current_bank) {
                case 5: func_9D37_b5(); break;
                case 1: func_9D37_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8A21:
            func_8A21_b5(); break;
        case 0x9721:
            func_9721_b5(); break;
        case 0xA91E:
            func_A91E_b5(); break;
        case 0x9D3F:
            func_9D3F_b5(); break;
        case 0x9D47:
            func_9D47_b5(); break;
        case 0x9DE0:
            func_9DE0_b5(); break;
        case 0x9D50:
            func_9D50_b5(); break;
        case 0x9DD8:
            func_9DD8_b5(); break;
        case 0x85AE:
            func_85AE_b5(); break;
        case 0x87AE:
            func_87AE_b5(); break;
        case 0xA7AE:
            func_A7AE_b5(); break;
        case 0x9D5D:
            func_9D5D_b5(); break;
        case 0xB4AA:
            func_B4AA_b5(); break;
        case 0x9DE6:
            func_9DE6_b5(); break;
        case 0xA9B7:
            func_A9B7_b5(); break;
        case 0x9A23:
            func_9A23_b5(); break;
        case 0xA421:
            func_A421_b6(); break;
        case 0xA911:
            func_A911_b6(); break;
        case 0x90F9:
            func_90F9_b6(); break;
        case 0xA203:
            func_A203_b6(); break;
        case 0xA688:
            func_A688_b6(); break;
        case 0xB087:
            func_B087_b6(); break;
        case 0x9F88:
            func_9F88_b6(); break;
        case 0x90A1:
            func_90A1_b6(); break;
        case 0x8D09:
            func_8D09_b6(); break;
        case 0xA901:
            func_A901_b6(); break;
        case 0x9089:
            func_9089_b6(); break;
        case 0xA917:
            func_A917_b6(); break;
        case 0x8E22:
            func_8E22_b6(); break;
        case 0xAD8B:
            func_AD8B_b6(); break;
        case 0x886A:
            func_886A_b6(); break;
        case 0x8E27:
            func_8E27_b6(); break;
        case 0x8D2A:
            func_8D2A_b6(); break;
        case 0x9E8C:
            func_9E8C_b6(); break;
        case 0xA989:
            func_A989_b6(); break;
        case 0x8C2C:
            func_8C2C_b6(); break;
        case 0x8C64:
            func_8C64_b6(); break;
        case 0x901F:
            func_901F_b6(); break;
        case 0x8E32:
            func_8E32_b6(); break;
        case 0x8E7C:
            func_8E7C_b6(); break;
        case 0x908F:
            func_908F_b6(); break;
        case 0x8E41:
            func_8E41_b6(); break;
        case 0x902A:
            func_902A_b6(); break;
        case 0x8BBA:
            func_8BBA_b6(); break;
        case 0x908D:
            func_908D_b6(); break;
        case 0xA913:
            func_A913_b6(); break;
        case 0x8392:
            func_8392_b6(); break;
        case 0x8F21:
            func_8F21_b6(); break;
        case 0x8D68:
            func_8D68_b6(); break;
        case 0x9367:
            func_9367_b6(); break;
        case 0xB0A9:
            func_B0A9_b6(); break;
        case 0xA0A9:
            func_A0A9_b6(); break;
        case 0x8F86:
            func_8F86_b6(); break;
        case 0x9191:
            func_9191_b6(); break;
        case 0x9292:
            func_9292_b6(); break;
        case 0x8989:
            func_8989_b6(); break;
        case 0xA1A1:
            func_A1A1_b6(); break;
        case 0xA601:
            func_A601_b6(); break;
        case 0x817F:
            func_817F_b6(); break;
        case 0x818B:
            func_818B_b6(); break;
        case 0x819D:
            func_819D_b6(); break;
        case 0xAF61:
            func_AF61_b6(); break;
        case 0x9DD0:
            func_9DD0_b6(); break;
        case 0x9DF0:
            func_9DF0_b6(); break;
        case 0x9E10:
            func_9E10_b6(); break;
        case 0x9E30:
            func_9E30_b6(); break;
        case 0x9E50:
            func_9E50_b6(); break;
        case 0x9E70:
            func_9E70_b6(); break;
        case 0x9E90:
            func_9E90_b6(); break;
        case 0x9EB0:
            func_9EB0_b6(); break;
        case 0x9ED0:
            func_9ED0_b6(); break;
        case 0x9F0D:
            func_9F0D_b6(); break;
        case 0x8A3D:
            func_8A3D_b6(); break;
        case 0xA08D:
            func_A08D_b6(); break;
        case 0xA60A:
            func_A60A_b6(); break;
        case 0xA004:
            func_A004_b6(); break;
        case 0xA9C9:
            func_A9C9_b6(); break;
        case 0x9EA2:
            func_9EA2_b6(); break;
        case 0x9EA4:
            func_9EA4_b6(); break;
        case 0xA3CA:
            func_A3CA_b6(); break;
        case 0xA6F1:
            func_A6F1_b6(); break;
        case 0xA8F1:
            func_A8F1_b6(); break;
        case 0x81E9:
            func_81E9_b6(); break;
        case 0xA2F1:
            func_A2F1_b6(); break;
        case 0x9FA5:
            func_9FA5_b6(); break;
        case 0xB0A5:
            func_B0A5_b6(); break;
        case 0xA68B:
            func_A68B_b6(); break;
        case 0x8BA7:
            func_8BA7_b6(); break;
        case 0xA6AE:
            func_A6AE_b6(); break;
        case 0xA6E2:
            func_A6E2_b6(); break;
        case 0xA74E:
            func_A74E_b6(); break;
        case 0xAFE1:
            func_AFE1_b6(); break;
        case 0x8EF1:
            func_8EF1_b6(); break;
        case 0x9EF9:
            func_9EF9_b6(); break;
        case 0xA810:
            func_A810_b6(); break;
        case 0xABF1:
            func_ABF1_b6(); break;
        case 0xABAB:
            func_ABAB_b6(); break;
        case 0xACEF:
            func_ACEF_b6(); break;
        case 0xAD3A:
            func_AD3A_b6(); break;
        case 0xA9FF:
            func_A9FF_b6(); break;
        case 0xAD7A:
            func_AD7A_b6(); break;
        case 0xA4AE:
            func_A4AE_b6(); break;
        case 0x82B0:
            func_82B0_b6(); break;
        case 0xA4B0:
            func_A4B0_b6(); break;
        case 0xB024:
            func_B024_b6(); break;
        case 0xB068:
            func_B068_b6(); break;
        case 0xB0AC:
            func_B0AC_b6(); break;
        case 0xA2E9:
            func_A2E9_b6(); break;
        case 0xA3E9:
            func_A3E9_b6(); break;
        case 0xA0E9:
            func_A0E9_b6(); break;
        case 0xA6E9:
            func_A6E9_b6(); break;
        case 0x83F1:
            func_83F1_b6(); break;
        case 0xADD1:
            func_ADD1_b6(); break;
        case 0xAE70:
            func_AE70_b6(); break;
        case 0xAF1B:
            func_AF1B_b6(); break;
        case 0xB664:
            func_B664_b0(); break;
        case 0xAFD4:
            func_AFD4_b0(); break;
        case 0xAFED:
            func_AFED_b0(); break;
        case 0xB688:
            func_B688_b0(); break;
        case 0xA2CC:
            func_A2CC_b1(); break;
        case 0xA284:
            func_A284_b1(); break;
        case 0x9683:
            func_9683_b1(); break;
        case 0xA020:
            func_A020_b1(); break;
        case 0xB03A:
            func_B03A_b1(); break;
        case 0xB043:
            func_B043_b1(); break;
        case 0x8008:
            func_8008_b1(); break;
        case 0xBA10:
            func_BA10_b1(); break;
        case 0xC628:
            func_C628(); break;
        case 0xB508:
            func_B508_b1(); break;
        case 0xC828:
            func_C828(); break;
        case 0xD218:
            func_D218(); break;
        case 0xD620:
            func_D620(); break;
        case 0xE228:
            func_E228(); break;
        case 0xE630:
            func_E630(); break;
        case 0xCB08:
            func_CB08(); break;
        case 0xD320:
            func_D320(); break;
        case 0xE028:
            func_E028(); break;
        case 0xE430:
            func_E430(); break;
        case 0xD220:
            func_D220(); break;
        case 0xBC18:
            func_BC18_b1(); break;
        case 0xC428:
            func_C428(); break;
        case 0xBB18:
            func_BB18_b1(); break;
        case 0xD828:
            func_D828(); break;
        case 0xDC30:
            func_DC30(); break;
        case 0xD118:
            func_D118(); break;
        case 0xE128:
            func_E128(); break;
        case 0xE530:
            func_E530(); break;
        case 0xB910:
            func_B910_b1(); break;
        case 0xBD18:
            func_BD18_b1(); break;
        case 0xC320:
            func_C320(); break;
        case 0xC728:
            func_C728(); break;
        case 0xC930:
            func_C930(); break;
        case 0xB708:
            func_B708_b1(); break;
        case 0xCD10:
            func_CD10(); break;
        case 0x8CC1:
            func_8CC1_b2(); break;
        case 0x9EE6:
            func_9EE6_b2(); break;
        case 0xD0C8:
            func_D0C8(); break;
        case 0xA4CD:
            func_A4CD_b3(); break;
        case 0xB0D8:
            func_B0D8_b3(); break;
        case 0x9BC1:
            func_9BC1_b4(); break;
        case 0xB09F:
            func_B09F_b4(); break;
        case 0x92DE:
            func_92DE_b4(); break;
        case 0x9482:
            func_9482_b4(); break;
        case 0x94B8:
            func_94B8_b4(); break;
        case 0x9192:
            func_9192_b4(); break;
        case 0x918C:
            func_918C_b4(); break;
        case 0xA53C:
            func_A53C_b4(); break;
        case 0xA5B9:
            func_A5B9_b4(); break;
        case 0x9929:
            func_9929_b4(); break;
        case 0x9911:
            func_9911_b4(); break;
        case 0xA832:
            func_A832_b4(); break;
        case 0x9DE2:
            func_9DE2_b4(); break;
        case 0xA4D5:
            func_A4D5_b4(); break;
        case 0xB914:
            func_B914_b4(); break;
        case 0x854E:
            func_854E_b4(); break;
        case 0xA51E:
            func_A51E_b5(); break;
        case 0xA95C:
            func_A95C_b6(); break;
        case 0xA96F:
            func_A96F_b6(); break;
        case 0xA982:
            func_A982_b6(); break;
        case 0xF000:
            func_F000(); break;
        case 0xF600:
            func_F600(); break;
        case 0xFC00:
            func_FC00(); break;
        case 0xF800:
            func_F800(); break;
        case 0x900F:
            func_900F_b6(); break;
        case 0x9D8A:
            func_9D8A_b6(); break;
        case 0xA173:
            func_A173_b6(); break;
        case 0xA138:
            func_A138_b6(); break;
        case 0xA13B:
            func_A13B_b6(); break;
        case 0xA13E:
            func_A13E_b6(); break;
        case 0xA5CB:
            func_A5CB_b6(); break;
        case 0xA5D0:
            func_A5D0_b6(); break;
        case 0xA5D6:
            func_A5D6_b6(); break;
        case 0xA5DB:
            func_A5DB_b6(); break;
        case 0x9FC0:
            func_9FC0_b6(); break;
        case 0xA65B:
            func_A65B_b6(); break;
        case 0xA660:
            func_A660_b6(); break;
        case 0xA67F:
            func_A67F_b6(); break;
        case 0xA682:
            func_A682_b6(); break;
        case 0xA693:
            func_A693_b6(); break;
        case 0xA696:
            func_A696_b6(); break;
        case 0xA730:
            func_A730_b6(); break;
        case 0xA734:
            func_A734_b6(); break;
        case 0xAF12:
            func_AF12_b6(); break;
        case 0xAFA8:
            func_AFA8_b0(); break;
        case 0xB499:
            func_B499_b1(); break;
        case 0xA48D:
            func_A48D_b3(); break;
        case 0xA5BC:
            func_A5BC_b6(); break;
        case 0xA5C6:
            func_A5C6_b6(); break;
        case 0xA648:
            func_A648_b6(); break;
        case 0xA64B:
            func_A64B_b6(); break;
        case 0xA6C6:
            func_A6C6_b6(); break;
        case 0xA6CB:
            func_A6CB_b6(); break;
        case 0xAF73:
            func_AF73_b0(); break;
        case 0xA44D:
            func_A44D_b3(); break;
        case 0xA46D:
            func_A46D_b3(); break;
        case 0xA84D:
            func_A84D_b3(); break;
        case 0xA86D:
            func_A86D_b3(); break;
        case 0xA61F:
            func_A61F_b6(); break;
        case 0x8101:
            func_8101_b0(); break;
        case 0x8146:
            func_8146_b1(); break;
        default:
            nes_log_dispatch_miss(addr);
            break;
    }
}
