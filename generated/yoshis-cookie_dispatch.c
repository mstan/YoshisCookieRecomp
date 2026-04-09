/* AUTO-GENERATED dispatch table. DO NOT EDIT. */
#include "nes_runtime.h"
extern int g_current_bank;

int call_by_address(uint16_t addr) {
    if (addr < 0x8000) { nes_log_dispatch_miss(addr); return 0; }
    extern int g_mmc3_r6_odd, g_mmc3_r7_even;
    if (g_mmc3_r6_odd && addr >= 0x8000 && addr < 0xA000)
        addr += 0x2000; /* 8KB bank odd: $8000 range -> $A000 offset */
    else if (g_mmc3_r7_even && addr >= 0xA000 && addr < 0xC000)
        addr -= 0x2000; /* 8KB bank even: $A000 range -> $8000 offset */
    switch (addr) {
        case 0xF6DD:
            func_F6DD(); break;
        case 0xF703:
            func_F703(); break;
        case 0xF6EC:
            func_F6EC(); break;
        case 0xC5C8:
            func_C5C8(); break;
        case 0xC6C5:
            func_C6C5(); break;
        case 0xC602:
            func_C602(); break;
        case 0xC6B4:
            func_C6B4(); break;
        case 0xC5C9:
            func_C5C9(); break;
        case 0xC6A8:
            func_C6A8(); break;
        case 0xC6C8:
            func_C6C8(); break;
        case 0xC613:
            func_C613(); break;
        case 0xC5FC:
            func_C5FC(); break;
        case 0xC6C0:
            func_C6C0(); break;
        case 0xC605:
            func_C605(); break;
        case 0xC682:
            func_C682(); break;
        case 0xC678:
            func_C678(); break;
        case 0xC690:
            func_C690(); break;
        case 0xC61F:
            func_C61F(); break;
        case 0xC61A:
            func_C61A(); break;
        case 0xC69C:
            func_C69C(); break;
        case 0xC69A:
            func_C69A(); break;
        case 0xC607:
            func_C607(); break;
        case 0xC6AA:
            func_C6AA(); break;
        case 0xC6B8:
            func_C6B8(); break;
        case 0xC688:
            func_C688(); break;
        case 0xC68C:
            func_C68C(); break;
        case 0xC633:
            func_C633(); break;
        case 0xC610:
            func_C610(); break;
        case 0xC6A6:
            func_C6A6(); break;
        case 0xC6A0:
            func_C6A0(); break;
        case 0xC616:
            func_C616(); break;
        case 0xC68A:
            func_C68A(); break;
        case 0xC686:
            func_C686(); break;
        case 0xC609:
            func_C609(); break;
        case 0xC68E:
            func_C68E(); break;
        case 0xC621:
            func_C621(); break;
        case 0xC672:
            func_C672(); break;
        case 0xC5F8:
            func_C5F8(); break;
        case 0xC6AE:
            func_C6AE(); break;
        case 0xD2E7:
            func_D2E7(); break;
        case 0xA000:
            switch (g_current_bank) {
                case 4: func_A000_b4(); break;
                case 5: func_A000_b5(); break;
                case 1: func_A000_b1(); break;
                case 6: func_A000_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC078:
            func_C078(); break;
        case 0xC0D0:
            func_C0D0(); break;
        case 0xC0F0:
            func_C0F0(); break;
        case 0xC0C7:
            func_C0C7(); break;
        case 0xC0CA:
            func_C0CA(); break;
        case 0xC0D6:
            func_C0D6(); break;
        case 0xC0D3:
            func_C0D3(); break;
        case 0xC0A8:
            func_C0A8(); break;
        case 0xC0F6:
            func_C0F6(); break;
        case 0xC0B0:
            func_C0B0(); break;
        case 0xC106:
            func_C106(); break;
        case 0xC10C:
            func_C10C(); break;
        case 0xC0B9:
            func_C0B9(); break;
        case 0xC083:
            func_C083(); break;
        case 0xC0E1:
            func_C0E1(); break;
        case 0xC086:
            func_C086(); break;
        case 0xC07B:
            func_C07B(); break;
        case 0xC6E1:
            func_C6E1(); break;
        case 0xF4C0:
            func_F4C0(); break;
        case 0xF4F0:
            func_F4F0(); break;
        case 0xF4F4:
            func_F4F4(); break;
        case 0xF4F3:
            func_F4F3(); break;
        case 0xF4D0:
            func_F4D0(); break;
        case 0xF4EF:
            func_F4EF(); break;
        case 0xF500:
            func_F500(); break;
        case 0xF4D9:
            func_F4D9(); break;
        case 0xF4FB:
            func_F4FB(); break;
        case 0xF50E:
            func_F50E(); break;
        case 0xF510:
            func_F510(); break;
        case 0xE2F1:
            func_E2F1(); break;
        case 0xE34C:
            func_E34C(); break;
        case 0xE301:
            func_E301(); break;
        case 0xC638:
            func_C638(); break;
        case 0xE550:
            func_E550(); break;
        case 0xE58D:
            func_E58D(); break;
        case 0xE5A5:
            func_E5A5(); break;
        case 0xE575:
            func_E575(); break;
        case 0xE5A0:
            func_E5A0(); break;
        case 0xE56D:
            func_E56D(); break;
        case 0xD373:
            func_D373(); break;
        case 0xD38D:
            func_D38D(); break;
        case 0xE264:
            func_E264(); break;
        case 0xE2A9:
            func_E2A9(); break;
        case 0xE26D:
            func_E26D(); break;
        case 0xF5AD:
            func_F5AD(); break;
        case 0xF5C0:
            func_F5C0(); break;
        case 0xF5B5:
            func_F5B5(); break;
        case 0xC6E7:
            func_C6E7(); break;
        case 0xC7AD:
            func_C7AD(); break;
        case 0xC6FC:
            func_C6FC(); break;
        case 0xC728:
            func_C728(); break;
        case 0xC6F3:
            func_C6F3(); break;
        case 0xC74C:
            func_C74C(); break;
        case 0xC720:
            func_C720(); break;
        case 0xC700:
            func_C700(); break;
        case 0xC726:
            func_C726(); break;
        case 0xC765:
            func_C765(); break;
        case 0xC72E:
            func_C72E(); break;
        case 0xC712:
            func_C712(); break;
        case 0xC702:
            func_C702(); break;
        case 0xC714:
            func_C714(); break;
        case 0xC79D:
            func_C79D(); break;
        case 0xC799:
            func_C799(); break;
        case 0xC6EF:
            func_C6EF(); break;
        case 0xC79B:
            func_C79B(); break;
        case 0xC78B:
            func_C78B(); break;
        case 0xC6F8:
            func_C6F8(); break;
        case 0xCA38:
            func_CA38(); break;
        case 0xCABE:
            func_CABE(); break;
        case 0xF599:
            func_F599(); break;
        case 0xF59B:
            func_F59B(); break;
        case 0xE36F:
            func_E36F(); break;
        case 0xE3F4:
            func_E3F4(); break;
        case 0xE3CD:
            func_E3CD(); break;
        case 0xE3EE:
            func_E3EE(); break;
        case 0xE3E2:
            func_E3E2(); break;
        case 0xE380:
            func_E380(); break;
        case 0xF424:
            func_F424(); break;
        case 0xF44C:
            func_F44C(); break;
        case 0x8106:
            switch (g_current_bank) {
                case 7: func_C106(); break;
                case 2: func_8106_b2(); break;
                case 4: func_8106_b4(); break;
                case 3: func_8106_b3(); break;
                case 6: func_8106_b6(); break;
                case 1: func_8106_b1(); break;
                case 5: func_8106_b5(); break;
                case 0: func_8106_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA01C:
            func_A01C_b4(); break;
        case 0xA044:
            switch (g_current_bank) {
                case 4: func_A044_b4(); break;
                case 5: func_A044_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF5F3:
            func_F5F3(); break;
        case 0xF600:
            func_F600(); break;
        case 0xF602:
            func_F602(); break;
        case 0xF58A:
            func_F58A(); break;
        case 0xF590:
            func_F590(); break;
        case 0xE696:
            func_E696(); break;
        case 0xE6C4:
            func_E6C4(); break;
        case 0xE6AE:
            func_E6AE(); break;
        case 0xE6AA:
            func_E6AA(); break;
        case 0xE6ED:
            func_E6ED(); break;
        case 0xE6E8:
            func_E6E8(); break;
        case 0xE6A5:
            func_E6A5(); break;
        case 0xE6A8:
            func_E6A8(); break;
        case 0xE6AC:
            func_E6AC(); break;
        case 0xE698:
            func_E698(); break;
        case 0xE6BA:
            func_E6BA(); break;
        case 0xE6B0:
            func_E6B0(); break;
        case 0xE6F5:
            func_E6F5(); break;
        case 0x8100:
            switch (g_current_bank) {
                case 2: func_8100_b2(); break;
                case 3: func_8100_b3(); break;
                case 1: func_8100_b1(); break;
                case 6: func_8100_b6(); break;
                case 4: func_8100_b4(); break;
                case 5: func_8100_b5(); break;
                case 0: func_8100_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF497:
            func_F497(); break;
        case 0xF485:
            func_F485(); break;
        case 0xC136:
            func_C136(); break;
        case 0xC1BC:
            func_C1BC(); break;
        case 0xF54B:
            func_F54B(); break;
        case 0xC12B:
            func_C12B(); break;
        case 0xF480:
            func_F480(); break;
        case 0xF48D:
            func_F48D(); break;
        case 0xF496:
            func_F496(); break;
        case 0xC101:
            func_C101(); break;
        case 0xF4A1:
            func_F4A1(); break;
        case 0xF4A9:
            func_F4A9(); break;
        case 0xF4AA:
            func_F4AA(); break;
        case 0xF4C9:
            func_F4C9(); break;
        case 0xE59E:
            func_E59E(); break;
        case 0xF516:
            func_F516(); break;
        case 0x811B:
            switch (g_current_bank) {
                case 4: func_811B_b4(); break;
                case 2: func_811B_b2(); break;
                case 3: func_811B_b3(); break;
                case 0: func_811B_b0(); break;
                case 5: func_811B_b5(); break;
                case 1: func_811B_b1(); break;
                case 6: func_811B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD393:
            func_D393(); break;
        case 0xD2E8:
            func_D2E8(); break;
        case 0xD2F0:
            func_D2F0(); break;
        case 0xD322:
            func_D322(); break;
        case 0xF5C4:
            func_F5C4(); break;
        case 0xF5CB:
            func_F5CB(); break;
        case 0xF5CE:
            func_F5CE(); break;
        case 0xF5D0:
            func_F5D0(); break;
        case 0xF5E6:
            func_F5E6(); break;
        case 0xF5F0:
            func_F5F0(); break;
        case 0xC7CE:
            func_C7CE(); break;
        case 0xE64C:
            func_E64C(); break;
        case 0xE66B:
            func_E66B(); break;
        case 0xC854:
            func_C854(); break;
        case 0x81AE:
            switch (g_current_bank) {
                case 0: func_81AE_b0(); break;
                case 2: func_81AE_b2(); break;
                case 5: func_81AE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC855:
            func_C855(); break;
        case 0xC860:
            func_C860(); break;
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
        case 0xC8AD:
            func_C8AD(); break;
        case 0xC894:
            func_C894(); break;
        case 0xC8AA:
            func_C8AA(); break;
        case 0xC8AE:
            func_C8AE(); break;
        case 0xC8B5:
            func_C8B5(); break;
        case 0xC8DE:
            func_C8DE(); break;
        case 0xC8CF:
            func_C8CF(); break;
        case 0xC8D2:
            func_C8D2(); break;
        case 0xC8C7:
            func_C8C7(); break;
        case 0xC8CC:
            func_C8CC(); break;
        case 0xC8C9:
            func_C8C9(); break;
        case 0xC8C4:
            func_C8C4(); break;
        case 0xC8C0:
            func_C8C0(); break;
        case 0xC8B9:
            func_C8B9(); break;
        case 0xC8DF:
            func_C8DF(); break;
        case 0xC8E5:
            func_C8E5(); break;
        case 0xC8EB:
            func_C8EB(); break;
        case 0xC8EC:
            func_C8EC(); break;
        case 0xC8F2:
            func_C8F2(); break;
        case 0xC8F3:
            func_C8F3(); break;
        case 0xC8F4:
            func_C8F4(); break;
        case 0xC8F5:
            func_C8F5(); break;
        case 0xC8FC:
            func_C8FC(); break;
        case 0xC922:
            func_C922(); break;
        case 0xC904:
            func_C904(); break;
        case 0xC902:
            func_C902(); break;
        case 0xC913:
            func_C913(); break;
        case 0xC910:
            func_C910(); break;
        case 0xC91C:
            func_C91C(); break;
        case 0xC90B:
            func_C90B(); break;
        case 0xC906:
            func_C906(); break;
        case 0xC908:
            func_C908(); break;
        case 0xC90E:
            func_C90E(); break;
        case 0xC916:
            func_C916(); break;
        case 0xC919:
            func_C919(); break;
        case 0xC923:
            func_C923(); break;
        case 0xC926:
            func_C926(); break;
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
        case 0xC946:
            func_C946(); break;
        case 0xC947:
            func_C947(); break;
        case 0xC94C:
            func_C94C(); break;
        case 0xC94E:
            func_C94E(); break;
        case 0xC94A:
            func_C94A(); break;
        case 0xC9A1:
            func_C9A1(); break;
        case 0xC951:
            func_C951(); break;
        case 0xC97E:
            func_C97E(); break;
        case 0xC96E:
            func_C96E(); break;
        case 0xC966:
            func_C966(); break;
        case 0xC962:
            func_C962(); break;
        case 0xC95C:
            func_C95C(); break;
        case 0xC99B:
            func_C99B(); break;
        case 0xC981:
            func_C981(); break;
        case 0xC9A9:
            func_C9A9(); break;
        case 0xC9A6:
            func_C9A6(); break;
        case 0xC996:
            func_C996(); break;
        case 0xC998:
            func_C998(); break;
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
        case 0xC9FA:
            func_C9FA(); break;
        case 0xC9C7:
            func_C9C7(); break;
        case 0xC9E9:
            func_C9E9(); break;
        case 0xC9DD:
            func_C9DD(); break;
        case 0xC9D1:
            func_C9D1(); break;
        case 0xC9F0:
            func_C9F0(); break;
        case 0xC9C9:
            func_C9C9(); break;
        case 0xC9C5:
            func_C9C5(); break;
        case 0xC9CC:
            func_C9CC(); break;
        case 0xC9E6:
            func_C9E6(); break;
        case 0xC9EB:
            func_C9EB(); break;
        case 0xC9EE:
            func_C9EE(); break;
        case 0xC9F2:
            func_C9F2(); break;
        case 0xC9DA:
            func_C9DA(); break;
        case 0xC9CF:
            func_C9CF(); break;
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
        case 0xCA30:
            func_CA30(); break;
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
                case 4: func_AD60_b4(); break;
                case 5: func_AD60_b5(); break;
                case 6: func_AD60_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8148:
            switch (g_current_bank) {
                case 3: func_8148_b3(); break;
                case 4: func_8148_b4(); break;
                case 5: func_8148_b5(); break;
                case 0: func_8148_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
                case 0: func_8103_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCABF:
            func_CABF(); break;
        case 0xCBAC:
            func_CBAC(); break;
        case 0xCBB9:
            func_CBB9(); break;
        case 0xCBBD:
            func_CBBD(); break;
        case 0xCBE6:
            func_CBE6(); break;
        case 0xCBC1:
            func_CBC1(); break;
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
        case 0xCC20:
            func_CC20(); break;
        case 0xCC35:
            func_CC35(); break;
        case 0xCC26:
            func_CC26(); break;
        case 0xCC02:
            func_CC02(); break;
        case 0xCC29:
            func_CC29(); break;
        case 0xCC54:
            func_CC54(); break;
        case 0xCCDE:
            func_CCDE(); break;
        case 0xCC6D:
            func_CC6D(); break;
        case 0xCC85:
            func_CC85(); break;
        case 0xCCC0:
            func_CCC0(); break;
        case 0xCCD4:
            func_CCD4(); break;
        case 0xCC88:
            func_CC88(); break;
        case 0xCCAA:
            func_CCAA(); break;
        case 0xCCDF:
            func_CCDF(); break;
        case 0xCCE0:
            func_CCE0(); break;
        case 0xCCE1:
            func_CCE1(); break;
        case 0xCD17:
            func_CD17(); break;
        case 0xCD02:
            func_CD02(); break;
        case 0xCD14:
            func_CD14(); break;
        case 0xCD18:
            func_CD18(); break;
        case 0xCD1F:
            func_CD1F(); break;
        case 0xCD5E:
            func_CD5E(); break;
        case 0xCDAB:
            func_CDAB(); break;
        case 0xCD77:
            func_CD77(); break;
        case 0xCDAC:
            func_CDAC(); break;
        case 0xCDB3:
            func_CDB3(); break;
        case 0xCDB9:
            func_CDB9(); break;
        case 0xCDBA:
            func_CDBA(); break;
        case 0xCDBB:
            func_CDBB(); break;
        case 0xCDC2:
            func_CDC2(); break;
        case 0xCDC8:
            func_CDC8(); break;
        case 0xCDC9:
            func_CDC9(); break;
        case 0xCDCA:
            func_CDCA(); break;
        case 0xCDD0:
            func_CDD0(); break;
        case 0xCDE2:
            func_CDE2(); break;
        case 0xCDF0:
            func_CDF0(); break;
        case 0xCE06:
            func_CE06(); break;
        case 0xCE03:
            func_CE03(); break;
        case 0xCE00:
            func_CE00(); break;
        case 0xCE0E:
            func_CE0E(); break;
        case 0xCE0B:
            func_CE0B(); break;
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
        case 0xCE71:
            func_CE71(); break;
        case 0xCE6D:
            func_CE6D(); break;
        case 0xCE55:
            func_CE55(); break;
        case 0xCE72:
            func_CE72(); break;
        case 0xCE79:
            func_CE79(); break;
        case 0xCE8D:
            func_CE8D(); break;
        case 0xCE94:
            func_CE94(); break;
        case 0xCE89:
            func_CE89(); break;
        case 0xCE85:
            func_CE85(); break;
        case 0xCEA4:
            func_CEA4(); break;
        case 0xCE87:
            func_CE87(); break;
        case 0xCEA5:
            func_CEA5(); break;
        case 0xCEBC:
            func_CEBC(); break;
        case 0xCEAD:
            func_CEAD(); break;
        case 0xCEB0:
            func_CEB0(); break;
        case 0xCEBD:
            func_CEBD(); break;
        case 0xCF1C:
            func_CF1C(); break;
        case 0xCEC4:
            func_CEC4(); break;
        case 0xCECE:
            func_CECE(); break;
        case 0xCEC6:
            func_CEC6(); break;
        case 0xCF00:
            func_CF00(); break;
        case 0xCECA:
            func_CECA(); break;
        case 0xCECC:
            func_CECC(); break;
        case 0xCEC0:
            func_CEC0(); break;
        case 0xCEF4:
            func_CEF4(); break;
        case 0xCEF0:
            func_CEF0(); break;
        case 0xCF1D:
            func_CF1D(); break;
        case 0xCF48:
            func_CF48(); break;
        case 0xCF20:
            func_CF20(); break;
        case 0xCF49:
            func_CF49(); break;
        case 0xCF4C:
            func_CF4C(); break;
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
        case 0xE3D5:
            func_E3D5(); break;
        case 0xC024:
            func_C024(); break;
        case 0x811E:
            switch (g_current_bank) {
                case 0: func_811E_b0(); break;
                case 2: func_811E_b2(); break;
                case 1: func_811E_b1(); break;
                case 4: func_811E_b4(); break;
                case 5: func_811E_b5(); break;
                case 3: func_811E_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF46D:
            func_F46D(); break;
        case 0xF46A:
            func_F46A(); break;
        case 0x816E:
            func_816E_b2(); break;
        case 0x81C6:
            switch (g_current_bank) {
                case 2: func_81C6_b2(); break;
                case 0: func_81C6_b0(); break;
                case 1: func_81C6_b1(); break;
                case 4: func_81C6_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81BD:
            switch (g_current_bank) {
                case 7: func_C1BD(); break;
                case 2: func_81BD_b2(); break;
                case 0: func_81BD_b0(); break;
                case 1: func_81BD_b1(); break;
                case 3: func_81BD_b3(); break;
                case 4: func_81BD_b4(); break;
                case 5: func_81BD_b5(); break;
                case 6: func_81BD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81C3:
            switch (g_current_bank) {
                case 2: func_81C3_b2(); break;
                case 0: func_81C3_b0(); break;
                case 3: func_81C3_b3(); break;
                case 5: func_81C3_b5(); break;
                case 6: func_81C3_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81C9:
            switch (g_current_bank) {
                case 2: func_81C9_b2(); break;
                case 0: func_81C9_b0(); break;
                case 1: func_81C9_b1(); break;
                case 3: func_81C9_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9FBE:
            func_9FBE_b6(); break;
        case 0xF605:
            func_F605(); break;
        case 0xF64C:
            func_F64C(); break;
        case 0xF648:
            func_F648(); break;
        case 0xF621:
            func_F621(); break;
        case 0xF610:
            func_F610(); break;
        case 0x8109:
            switch (g_current_bank) {
                case 2: func_8109_b2(); break;
                case 3: func_8109_b3(); break;
                case 6: func_8109_b6(); break;
                case 4: func_8109_b4(); break;
                case 0: func_8109_b0(); break;
                case 1: func_8109_b1(); break;
                case 5: func_8109_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8114:
            func_8114_b2(); break;
        case 0xC1BD:
            func_C1BD(); break;
        case 0xC1F0:
            func_C1F0(); break;
        case 0xC1CE:
            func_C1CE(); break;
        case 0xC1FE:
            func_C1FE(); break;
        case 0xC1FF:
            func_C1FF(); break;
        case 0xC289:
            func_C289(); break;
        case 0xC24C:
            func_C24C(); break;
        case 0xC269:
            func_C269(); break;
        case 0xC218:
            func_C218(); break;
        case 0xC221:
            func_C221(); break;
        case 0xC276:
            func_C276(); break;
        case 0xC2C3:
            func_C2C3(); break;
        case 0xC2C4:
            func_C2C4(); break;
        case 0xC2D4:
            func_C2D4(); break;
        case 0xC2F6:
            func_C2F6(); break;
        case 0xC2E6:
            func_C2E6(); break;
        case 0xC2E8:
            func_C2E8(); break;
        case 0xC2EB:
            func_C2EB(); break;
        case 0xC2ED:
            func_C2ED(); break;
        case 0xC2F7:
            func_C2F7(); break;
        case 0xC30D:
            func_C30D(); break;
        case 0xC2FA:
            func_C2FA(); break;
        case 0xC2FC:
            func_C2FC(); break;
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
        case 0xC3C1:
            func_C3C1(); break;
        case 0xC3B9:
            func_C3B9(); break;
        case 0xC3AD:
            func_C3AD(); break;
        case 0xC3D0:
            func_C3D0(); break;
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
        case 0xC409:
            func_C409(); break;
        case 0xC435:
            func_C435(); break;
        case 0xC436:
            func_C436(); break;
        case 0xC4C5:
            func_C4C5(); break;
        case 0xC4C3:
            func_C4C3(); break;
        case 0xC4B0:
            func_C4B0(); break;
        case 0xC4C1:
            func_C4C1(); break;
        case 0xC4AD:
            func_C4AD(); break;
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
        case 0xC503:
            func_C503(); break;
        case 0xC520:
            func_C520(); break;
        case 0xC50C:
            func_C50C(); break;
        case 0xC514:
            func_C514(); break;
        case 0xC4F8:
            func_C4F8(); break;
        case 0xC524:
            func_C524(); break;
        case 0xC54F:
            func_C54F(); break;
        case 0xC56C:
            func_C56C(); break;
        case 0xC585:
            func_C585(); break;
        case 0xC58C:
            func_C58C(); break;
        case 0xC596:
            func_C596(); break;
        case 0xC5C0:
            func_C5C0(); break;
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
                case 2: func_8112_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8130:
            switch (g_current_bank) {
                case 0: func_8130_b0(); break;
                case 1: func_8130_b1(); break;
                case 3: func_8130_b3(); break;
                case 4: func_8130_b4(); break;
                case 2: func_8130_b2(); break;
                case 5: func_8130_b5(); break;
                case 6: func_8130_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE66C:
            func_E66C(); break;
        case 0xE695:
            func_E695(); break;
        case 0x8552:
            func_8552_b0(); break;
        case 0x8157:
            switch (g_current_bank) {
                case 3: func_8157_b3(); break;
                case 2: func_8157_b2(); break;
                case 0: func_8157_b0(); break;
                case 1: func_8157_b1(); break;
                case 5: func_8157_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC869:
            func_C869(); break;
        case 0xD0F0:
            func_D0F0(); break;
        case 0xD2B9:
            func_D2B9(); break;
        case 0xD18D:
            func_D18D(); break;
        case 0xD0FF:
            func_D0FF(); break;
        case 0xD1AD:
            func_D1AD(); break;
        case 0xD0FE:
            func_D0FE(); break;
        case 0xD14C:
            func_D14C(); break;
        case 0xD218:
            func_D218(); break;
        case 0xD1C8:
            func_D1C8(); break;
        case 0xD1C0:
            func_D1C0(); break;
        case 0xD1CF:
            func_D1CF(); break;
        case 0xD1C6:
            func_D1C6(); break;
        case 0xD24C:
            func_D24C(); break;
        case 0xD2B0:
            func_D2B0(); break;
        case 0xD120:
            func_D120(); break;
        case 0xD2AE:
            func_D2AE(); break;
        case 0xD1B0:
            func_D1B0(); break;
        case 0xD292:
            func_D292(); break;
        case 0xD2BA:
            func_D2BA(); break;
        case 0xD2E6:
            func_D2E6(); break;
        case 0xD2D3:
            func_D2D3(); break;
        case 0xD2CE:
            func_D2CE(); break;
        case 0xE1C0:
            func_E1C0(); break;
        case 0xE1C4:
            func_E1C4(); break;
        case 0xE1F0:
            func_E1F0(); break;
        case 0xE1E0:
            func_E1E0(); break;
        case 0xE228:
            func_E228(); break;
        case 0xE202:
            func_E202(); break;
        case 0xE200:
            func_E200(); break;
        case 0xE1CE:
            func_E1CE(); break;
        case 0xE1E8:
            func_E1E8(); break;
        case 0xE1F8:
            func_E1F8(); break;
        case 0xDA52:
            func_DA52(); break;
        case 0xDA8D:
            func_DA8D(); break;
        case 0xDAC4:
            func_DAC4(); break;
        case 0xDABE:
            func_DABE(); break;
        case 0xDAAC:
            func_DAAC(); break;
        case 0xDAB0:
            func_DAB0(); break;
        case 0xDA5F:
            func_DA5F(); break;
        case 0xD8DB:
            func_D8DB(); break;
        case 0xD98D:
            func_D98D(); break;
        case 0xD97F:
            func_D97F(); break;
        case 0xD920:
            func_D920(); break;
        case 0xD991:
            func_D991(); break;
        case 0xD982:
            func_D982(); break;
        case 0xD8F8:
            func_D8F8(); break;
        case 0xD8F0:
            func_D8F0(); break;
        case 0x8121:
            switch (g_current_bank) {
                case 1: func_8121_b1(); break;
                case 4: func_8121_b4(); break;
                case 0: func_8121_b0(); break;
                case 5: func_8121_b5(); break;
                case 3: func_8121_b3(); break;
                case 6: func_8121_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x812D:
            switch (g_current_bank) {
                case 1: func_812D_b1(); break;
                case 3: func_812D_b3(); break;
                case 4: func_812D_b4(); break;
                case 2: func_812D_b2(); break;
                case 5: func_812D_b5(); break;
                case 0: func_812D_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xDBA8:
            func_DBA8(); break;
        case 0xDBC4:
            func_DBC4(); break;
        case 0xDBAD:
            func_DBAD(); break;
        case 0xDC00:
            func_DC00(); break;
        case 0xDC30:
            func_DC30(); break;
        case 0xDBD0:
            func_DBD0(); break;
        case 0xDC4C:
            func_DC4C(); break;
        case 0xDC04:
            func_DC04(); break;
        case 0xDC21:
            func_DC21(); break;
        case 0xDC22:
            func_DC22(); break;
        case 0xDBCA:
            func_DBCA(); break;
        case 0x81E1:
            switch (g_current_bank) {
                case 0: func_81E1_b0(); break;
                case 1: func_81E1_b1(); break;
                case 5: func_81E1_b5(); break;
                case 6: func_81E1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC9AF:
            func_C9AF(); break;
        case 0x8124:
            switch (g_current_bank) {
                case 4: func_8124_b4(); break;
                case 5: func_8124_b5(); break;
                case 3: func_8124_b3(); break;
                case 6: func_8124_b6(); break;
                case 1: func_8124_b1(); break;
                case 0: func_8124_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8127:
            switch (g_current_bank) {
                case 4: func_8127_b4(); break;
                case 3: func_8127_b3(); break;
                case 6: func_8127_b6(); break;
                case 5: func_8127_b5(); break;
                case 1: func_8127_b1(); break;
                case 2: func_8127_b2(); break;
                case 0: func_8127_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x810F:
            switch (g_current_bank) {
                case 6: func_810F_b6(); break;
                case 3: func_810F_b3(); break;
                case 5: func_810F_b5(); break;
                case 4: func_810F_b4(); break;
                case 1: func_810F_b1(); break;
                case 0: func_810F_b0(); break;
                case 2: func_810F_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD51:
            switch (g_current_bank) {
                case 4: func_AD51_b4(); break;
                case 5: func_AD51_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
        case 0x9491:
            switch (g_current_bank) {
                case 3: func_9491_b3(); break;
                case 6: func_9491_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9523:
            func_9523_b3(); break;
        case 0x94CC:
            switch (g_current_bank) {
                case 3: func_94CC_b3(); break;
                case 1: func_94CC_b1(); break;
                case 5: func_94CC_b5(); break;
                case 4: func_94CC_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9479:
            switch (g_current_bank) {
                case 3: func_9479_b3(); break;
                case 5: func_9479_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x948D:
            switch (g_current_bank) {
                case 3: func_948D_b3(); break;
                case 1: func_948D_b1(); break;
                case 4: func_948D_b4(); break;
                case 5: func_948D_b5(); break;
                case 6: func_948D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8128:
            func_8128_b6(); break;
        case 0xCAE6:
            func_CAE6(); break;
        case 0xCBAB:
            func_CBAB(); break;
        case 0xCB6D:
            func_CB6D(); break;
        case 0xCAEE:
            func_CAEE(); break;
        case 0xCB86:
            func_CB86(); break;
        case 0xCAFA:
            func_CAFA(); break;
        case 0xCB20:
            func_CB20(); break;
        case 0xCBA9:
            func_CBA9(); break;
        case 0xCBA1:
            func_CBA1(); break;
        case 0xE002:
            func_E002(); break;
        case 0xE00F:
            func_E00F(); break;
        case 0xE003:
            func_E003(); break;
        case 0xE007:
            func_E007(); break;
        case 0xE004:
            func_E004(); break;
        case 0xE010:
            func_E010(); break;
        case 0xE00C:
            func_E00C(); break;
        case 0xEE0E:
            func_EE0E(); break;
        case 0xEE26:
            func_EE26(); break;
        case 0xEE1A:
            func_EE1A(); break;
        case 0xEE23:
            func_EE23(); break;
        case 0xEE20:
            func_EE20(); break;
        case 0xEE12:
            func_EE12(); break;
        case 0xEE17:
            func_EE17(); break;
        case 0xEE99:
            func_EE99(); break;
        case 0xEEAD:
            func_EEAD(); break;
        case 0xEE9E:
            func_EE9E(); break;
        case 0xEEA0:
            func_EEA0(); break;
        case 0xEE9C:
            func_EE9C(); break;
        case 0x8118:
            switch (g_current_bank) {
                case 3: func_8118_b3(); break;
                case 0: func_8118_b0(); break;
                case 4: func_8118_b4(); break;
                case 1: func_8118_b1(); break;
                case 5: func_8118_b5(); break;
                case 2: func_8118_b2(); break;
                case 6: func_8118_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x813C:
            switch (g_current_bank) {
                case 3: func_813C_b3(); break;
                case 0: func_813C_b0(); break;
                case 1: func_813C_b1(); break;
                case 4: func_813C_b4(); break;
                case 2: func_813C_b2(); break;
                case 6: func_813C_b6(); break;
                case 5: func_813C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
                case 4: func_813F_b4(); break;
                case 6: func_813F_b6(); break;
                case 5: func_813F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8115:
            switch (g_current_bank) {
                case 3: func_8115_b3(); break;
                case 5: func_8115_b5(); break;
                case 1: func_8115_b1(); break;
                case 4: func_8115_b4(); break;
                case 0: func_8115_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCC8E:
            func_CC8E(); break;
        case 0xE017:
            func_E017(); break;
        case 0xE020:
            func_E020(); break;
        case 0xE07F:
            func_E07F(); break;
        case 0xE0A5:
            func_E0A5(); break;
        case 0xE0CC:
            func_E0CC(); break;
        case 0xE0AD:
            func_E0AD(); break;
        case 0xE0A1:
            func_E0A1(); break;
        case 0xE099:
            func_E099(); break;
        case 0xE0B9:
            func_E0B9(); break;
        case 0xE0C9:
            func_E0C9(); break;
        case 0x8142:
            switch (g_current_bank) {
                case 3: func_8142_b3(); break;
                case 0: func_8142_b0(); break;
                case 4: func_8142_b4(); break;
                case 2: func_8142_b2(); break;
                case 6: func_8142_b6(); break;
                case 5: func_8142_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xDDFE:
            func_DDFE(); break;
        case 0xDE20:
            func_DE20(); break;
        case 0xDE03:
            func_DE03(); break;
        case 0xDE06:
            func_DE06(); break;
        case 0xDF3A:
            func_DF3A(); break;
        case 0xDF8D:
            func_DF8D(); break;
        case 0xDF4C:
            func_DF4C(); break;
        case 0xDF86:
            func_DF86(); break;
        case 0xDF8A:
            func_DF8A(); break;
        case 0xDF8E:
            func_DF8E(); break;
        case 0xDEDC:
            func_DEDC(); break;
        case 0xDEEE:
            func_DEEE(); break;
        case 0xDEF5:
            func_DEF5(); break;
        case 0xDF31:
            func_DF31(); break;
        case 0xDF00:
            func_DF00(); break;
        case 0xDF29:
            func_DF29(); break;
        case 0xDEF8:
            func_DEF8(); break;
        case 0xDEF0:
            func_DEF0(); break;
        case 0xDE8D:
            func_DE8D(); break;
        case 0xDEC4:
            func_DEC4(); break;
        case 0xDEAC:
            func_DEAC(); break;
        case 0xDEBE:
            func_DEBE(); break;
        case 0xDE96:
            func_DE96(); break;
        case 0xDEA9:
            func_DEA9(); break;
        case 0xDED8:
            func_DED8(); break;
        case 0xDE90:
            func_DE90(); break;
        case 0xDE38:
            func_DE38(); break;
        case 0xDE4C:
            func_DE4C(); break;
        case 0xDE89:
            func_DE89(); break;
        case 0xDE68:
            func_DE68(); break;
        case 0xDE80:
            func_DE80(); break;
        case 0x8145:
            switch (g_current_bank) {
                case 3: func_8145_b3(); break;
                case 0: func_8145_b0(); break;
                case 1: func_8145_b1(); break;
                case 4: func_8145_b4(); break;
                case 5: func_8145_b5(); break;
                case 6: func_8145_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x810C:
            switch (g_current_bank) {
                case 7: func_C10C(); break;
                case 3: func_810C_b3(); break;
                case 4: func_810C_b4(); break;
                case 6: func_810C_b6(); break;
                case 1: func_810C_b1(); break;
                case 0: func_810C_b0(); break;
                case 5: func_810C_b5(); break;
                case 2: func_810C_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8133:
            switch (g_current_bank) {
                case 3: func_8133_b3(); break;
                case 1: func_8133_b1(); break;
                case 4: func_8133_b4(); break;
                case 5: func_8133_b5(); break;
                case 0: func_8133_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8166:
            switch (g_current_bank) {
                case 3: func_8166_b3(); break;
                case 2: func_8166_b2(); break;
                case 0: func_8166_b0(); break;
                case 4: func_8166_b4(); break;
                case 5: func_8166_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD32E:
            func_D32E(); break;
        case 0x81E4:
            switch (g_current_bank) {
                case 0: func_81E4_b0(); break;
                case 1: func_81E4_b1(); break;
                case 3: func_81E4_b3(); break;
                case 5: func_81E4_b5(); break;
                case 2: func_81E4_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x812A:
            switch (g_current_bank) {
                case 3: func_812A_b3(); break;
                case 1: func_812A_b1(); break;
                case 4: func_812A_b4(); break;
                case 2: func_812A_b2(); break;
                case 5: func_812A_b5(); break;
                case 0: func_812A_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x815A:
            switch (g_current_bank) {
                case 3: func_815A_b3(); break;
                case 4: func_815A_b4(); break;
                case 2: func_815A_b2(); break;
                case 0: func_815A_b0(); break;
                case 1: func_815A_b1(); break;
                case 5: func_815A_b5(); break;
                case 6: func_815A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x815D:
            switch (g_current_bank) {
                case 3: func_815D_b3(); break;
                case 1: func_815D_b1(); break;
                case 2: func_815D_b2(); break;
                case 0: func_815D_b0(); break;
                case 4: func_815D_b4(); break;
                case 5: func_815D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82BC:
            func_82BC_b0(); break;
        case 0x8540:
            switch (g_current_bank) {
                case 2: func_8540_b2(); break;
                case 0: func_8540_b0(); break;
                case 3: func_8540_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8563:
            switch (g_current_bank) {
                case 2: func_8563_b2(); break;
                case 1: func_8563_b1(); break;
                case 4: func_8563_b4(); break;
                case 5: func_8563_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x855C:
            switch (g_current_bank) {
                case 2: func_855C_b2(); break;
                case 4: func_855C_b4(); break;
                case 3: func_855C_b3(); break;
                case 6: func_855C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8560:
            switch (g_current_bank) {
                case 2: func_8560_b2(); break;
                case 4: func_8560_b4(); break;
                case 6: func_8560_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x856D:
            switch (g_current_bank) {
                case 2: func_856D_b2(); break;
                case 5: func_856D_b5(); break;
                case 4: func_856D_b4(); break;
                case 6: func_856D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84B7:
            func_84B7_b2(); break;
        case 0x84FE:
            func_84FE_b2(); break;
        case 0x8518:
            switch (g_current_bank) {
                case 2: func_8518_b2(); break;
                case 4: func_8518_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8503:
            switch (g_current_bank) {
                case 7: func_C503(); break;
                case 2: func_8503_b2(); break;
                case 5: func_8503_b5(); break;
                case 4: func_8503_b4(); break;
                case 6: func_8503_b6(); break;
                case 0: func_8503_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x853C:
            switch (g_current_bank) {
                case 2: func_853C_b2(); break;
                case 1: func_853C_b1(); break;
                case 3: func_853C_b3(); break;
                case 4: func_853C_b4(); break;
                case 6: func_853C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8508:
            switch (g_current_bank) {
                case 2: func_8508_b2(); break;
                case 4: func_8508_b4(); break;
                case 5: func_8508_b5(); break;
                case 6: func_8508_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8501:
            switch (g_current_bank) {
                case 2: func_8501_b2(); break;
                case 1: func_8501_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8510:
            switch (g_current_bank) {
                case 2: func_8510_b2(); break;
                case 4: func_8510_b4(); break;
                case 6: func_8510_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8516:
            switch (g_current_bank) {
                case 2: func_8516_b2(); break;
                case 1: func_8516_b1(); break;
                case 4: func_8516_b4(); break;
                case 6: func_8516_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x851D:
            switch (g_current_bank) {
                case 2: func_851D_b2(); break;
                case 4: func_851D_b4(); break;
                case 5: func_851D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8513:
            switch (g_current_bank) {
                case 2: func_8513_b2(); break;
                case 4: func_8513_b4(); break;
                case 6: func_8513_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x850B:
            switch (g_current_bank) {
                case 2: func_850B_b2(); break;
                case 4: func_850B_b4(); break;
                case 5: func_850B_b5(); break;
                case 0: func_850B_b0(); break;
                case 3: func_850B_b3(); break;
                case 6: func_850B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x852C:
            switch (g_current_bank) {
                case 2: func_852C_b2(); break;
                case 5: func_852C_b5(); break;
                case 3: func_852C_b3(); break;
                case 4: func_852C_b4(); break;
                case 6: func_852C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x851B:
            switch (g_current_bank) {
                case 2: func_851B_b2(); break;
                case 4: func_851B_b4(); break;
                case 1: func_851B_b1(); break;
                case 6: func_851B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8491:
            func_8491_b2(); break;
        case 0x84B6:
            func_84B6_b2(); break;
        case 0x84A9:
            switch (g_current_bank) {
                case 2: func_84A9_b2(); break;
                case 4: func_84A9_b4(); break;
                case 1: func_84A9_b1(); break;
                case 6: func_84A9_b6(); break;
                case 0: func_84A9_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84AD:
            switch (g_current_bank) {
                case 7: func_C4AD(); break;
                case 2: func_84AD_b2(); break;
                case 5: func_84AD_b5(); break;
                case 1: func_84AD_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84C8:
            switch (g_current_bank) {
                case 7: func_C4C8(); break;
                case 2: func_84C8_b2(); break;
                case 4: func_84C8_b4(); break;
                case 5: func_84C8_b5(); break;
                case 6: func_84C8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84F2:
            switch (g_current_bank) {
                case 2: func_84F2_b2(); break;
                case 5: func_84F2_b5(); break;
                case 4: func_84F2_b4(); break;
                case 6: func_84F2_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81E2:
            switch (g_current_bank) {
                case 2: func_81E2_b2(); break;
                case 6: func_81E2_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8249:
            func_8249_b2(); break;
        case 0x8477:
            func_8477_b2(); break;
        case 0x8309:
            func_8309_b2(); break;
        case 0x83AD:
            switch (g_current_bank) {
                case 7: func_C3AD(); break;
                case 2: func_83AD_b2(); break;
                case 1: func_83AD_b1(); break;
                case 5: func_83AD_b5(); break;
                case 3: func_83AD_b3(); break;
                case 6: func_83AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83D1:
            func_83D1_b2(); break;
        case 0x8401:
            switch (g_current_bank) {
                case 2: func_8401_b2(); break;
                case 6: func_8401_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83FE:
            func_83FE_b2(); break;
        case 0x825F:
            func_825F_b2(); break;
        case 0x8459:
            switch (g_current_bank) {
                case 2: func_8459_b2(); break;
                case 6: func_8459_b6(); break;
                case 1: func_8459_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82A7:
            func_82A7_b2(); break;
        case 0xE7C9:
            func_E7C9(); break;
        case 0xE807:
            func_E807(); break;
        case 0xE7CB:
            func_E7CB(); break;
        case 0xE800:
            func_E800(); break;
        case 0xE7F6:
            func_E7F6(); break;
        case 0xE7CE:
            func_E7CE(); break;
        case 0xE7EE:
            func_E7EE(); break;
        case 0xE802:
            func_E802(); break;
        case 0xE805:
            func_E805(); break;
        case 0xE814:
            func_E814(); break;
        case 0xE7F8:
            func_E7F8(); break;
        case 0xE80C:
            func_E80C(); break;
        case 0xE7F3:
            func_E7F3(); break;
        case 0xC21B:
            func_C21B(); break;
        case 0xE77D:
            func_E77D(); break;
        case 0xE7C3:
            func_E7C3(); break;
        case 0xE7A5:
            func_E7A5(); break;
        case 0xE7AC:
            func_E7AC(); break;
        case 0xE7B9:
            func_E7B9(); break;
        case 0xE84E:
            func_E84E(); break;
        case 0xE8C3:
            func_E8C3(); break;
        case 0xE8A9:
            func_E8A9(); break;
        case 0xE88D:
            func_E88D(); break;
        case 0xE8AD:
            func_E8AD(); break;
        case 0xE895:
            func_E895(); break;
        case 0xE8CD:
            func_E8CD(); break;
        case 0xE8E7:
            func_E8E7(); break;
        case 0xE887:
            func_E887(); break;
        case 0xE8F0:
            func_E8F0(); break;
        case 0xE8AF:
            func_E8AF(); break;
        case 0xE8D0:
            func_E8D0(); break;
        case 0xE906:
            func_E906(); break;
        case 0xE920:
            func_E920(); break;
        case 0xE91E:
            func_E91E(); break;
        case 0xE92C:
            func_E92C(); break;
        case 0xE9F0:
            func_E9F0(); break;
        case 0xE9B0:
            func_E9B0(); break;
        case 0xEAD0:
            func_EAD0(); break;
        case 0xE9A9:
            func_E9A9(); break;
        case 0xE96D:
            func_E96D(); break;
        case 0xE9CE:
            func_E9CE(); break;
        case 0xEAEE:
            func_EAEE(); break;
        case 0xE9EE:
            func_E9EE(); break;
        case 0xE9AE:
            func_E9AE(); break;
        case 0xE98E:
            func_E98E(); break;
        case 0xEA99:
            func_EA99(); break;
        case 0xEA90:
            func_EA90(); break;
        case 0xE992:
            func_E992(); break;
        case 0xEA4C:
            func_EA4C(); break;
        case 0xE9D0:
            func_E9D0(); break;
        case 0xE9ED:
            func_E9ED(); break;
        case 0xEA00:
            func_EA00(); break;
        case 0xE9E9:
            func_E9E9(); break;
        case 0xE9E8:
            func_E9E8(); break;
        case 0xEB01:
            func_EB01(); break;
        case 0xEAB9:
            func_EAB9(); break;
        case 0xEAEA:
            func_EAEA(); break;
        case 0xE9F3:
            func_E9F3(); break;
        case 0xEA48:
            func_EA48(); break;
        case 0xEAA8:
            func_EAA8(); break;
        case 0xE8F1:
            func_E8F1(); break;
        case 0xE903:
            func_E903(); break;
        case 0xE8FB:
            func_E8FB(); break;
        case 0xDC53:
            func_DC53(); break;
        case 0xE72F:
            func_E72F(); break;
        case 0xE74C:
            func_E74C(); break;
        case 0xE6FC:
            func_E6FC(); break;
        case 0xE76D:
            func_E76D(); break;
        case 0xDC7B:
            func_DC7B(); break;
        case 0xDD6A:
            func_DD6A(); break;
        case 0xDCC4:
            func_DCC4(); break;
        case 0xDCAD:
            func_DCAD(); break;
        case 0xDC8A:
            func_DC8A(); break;
        case 0xDD06:
            func_DD06(); break;
        case 0xDD01:
            func_DD01(); break;
        case 0xDD00:
            func_DD00(); break;
        case 0xDD20:
            func_DD20(); break;
        case 0xDD4C:
            func_DD4C(); break;
        case 0xDC8C:
            func_DC8C(); break;
        case 0xDCD8:
            func_DCD8(); break;
        case 0xC2E0:
            func_C2E0(); break;
        case 0xD316:
            func_D316(); break;
        case 0xC313:
            func_C313(); break;
        case 0xC3AA:
            func_C3AA(); break;
        case 0x81DE:
            switch (g_current_bank) {
                case 0: func_81DE_b0(); break;
                case 2: func_81DE_b2(); break;
                case 3: func_81DE_b3(); break;
                case 5: func_81DE_b5(); break;
                case 6: func_81DE_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8160:
            switch (g_current_bank) {
                case 3: func_8160_b3(); break;
                case 1: func_8160_b1(); break;
                case 2: func_8160_b2(); break;
                case 0: func_8160_b0(); break;
                case 4: func_8160_b4(); break;
                case 5: func_8160_b5(); break;
                case 6: func_8160_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86A8:
            func_86A8_b4(); break;
        case 0x81E7:
            switch (g_current_bank) {
                case 0: func_81E7_b0(); break;
                case 4: func_81E7_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8220:
            func_8220_b0(); break;
        case 0x8362:
            switch (g_current_bank) {
                case 0: func_8362_b0(); break;
                case 5: func_8362_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8384:
            func_8384_b0(); break;
        case 0x9524:
            func_9524_b3(); break;
        case 0x9546:
            func_9546_b3(); break;
        case 0xEC47:
            func_EC47(); break;
        case 0xEC4C:
            func_EC4C(); break;
        case 0xE41D:
            func_E41D(); break;
        case 0xE430:
            func_E430(); break;
        case 0xE3F5:
            func_E3F5(); break;
        case 0xE403:
            func_E403(); break;
        case 0xEDE8:
            func_EDE8(); break;
        case 0xEE0D:
            func_EE0D(); break;
        case 0xEDF0:
            func_EDF0(); break;
        case 0xEE04:
            func_EE04(); break;
        case 0xEE05:
            func_EE05(); break;
        case 0xEDEE:
            func_EDEE(); break;
        case 0xEDEC:
            func_EDEC(); break;
        case 0xEE02:
            func_EE02(); break;
        case 0xEE0A:
            func_EE0A(); break;
        case 0xEDF8:
            func_EDF8(); break;
        case 0xE461:
            func_E461(); break;
        case 0xE46D:
            func_E46D(); break;
        case 0xE480:
            func_E480(); break;
        case 0xE43A:
            func_E43A(); break;
        case 0xCF56:
            func_CF56(); break;
        case 0xD012:
            func_D012(); break;
        case 0xCFC4:
            func_CFC4(); break;
        case 0xD005:
            func_D005(); break;
        case 0xD00F:
            func_D00F(); break;
        case 0xD015:
            func_D015(); break;
        case 0xD022:
            func_D022(); break;
        case 0xD002:
            func_D002(); break;
        case 0xD008:
            func_D008(); break;
        case 0xD00A:
            func_D00A(); break;
        case 0xCFCE:
            func_CFCE(); break;
        case 0xD017:
            func_D017(); break;
        case 0xD000:
            func_D000(); break;
        case 0xD01A:
            func_D01A(); break;
        case 0xD00D:
            func_D00D(); break;
        case 0xD013:
            func_D013(); break;
        case 0xD020:
            func_D020(); break;
        case 0xD048:
            func_D048(); break;
        case 0xCFDC:
            func_CFDC(); break;
        case 0xD030:
            func_D030(); break;
        case 0xD038:
            func_D038(); break;
        case 0xCFD4:
            func_CFD4(); break;
        case 0xCFCC:
            func_CFCC(); break;
        case 0xD040:
            func_D040(); break;
        case 0xD03B:
            func_D03B(); break;
        case 0xCFD0:
            func_CFD0(); break;
        case 0xCFA8:
            func_CFA8(); break;
        case 0x8139:
            switch (g_current_bank) {
                case 3: func_8139_b3(); break;
                case 1: func_8139_b1(); break;
                case 2: func_8139_b2(); break;
                case 0: func_8139_b0(); break;
                case 5: func_8139_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD049:
            func_D049(); break;
        case 0xD06F:
            func_D06F(); break;
        case 0xD04B:
            func_D04B(); break;
        case 0xD29A:
            func_D29A(); break;
        case 0xD2D9:
            func_D2D9(); break;
        case 0x8F9C:
            func_8F9C_b1(); break;
        case 0x9078:
            func_9078_b1(); break;
        case 0x9006:
            switch (g_current_bank) {
                case 1: func_9006_b1(); break;
                case 3: func_9006_b3(); break;
                case 5: func_9006_b5(); break;
                case 4: func_9006_b4(); break;
                case 6: func_9006_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9008:
            switch (g_current_bank) {
                case 7: func_D008(); break;
                case 1: func_9008_b1(); break;
                case 3: func_9008_b3(); break;
                case 4: func_9008_b4(); break;
                case 5: func_9008_b5(); break;
                case 6: func_9008_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9020:
            switch (g_current_bank) {
                case 7: func_D020(); break;
                case 1: func_9020_b1(); break;
                case 3: func_9020_b3(); break;
                case 5: func_9020_b5(); break;
                case 6: func_9020_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x903C:
            func_903C_b1(); break;
        case 0xE23D:
            func_E23D(); break;
        case 0xE23E:
            func_E23E(); break;
        case 0xE1D9:
            func_E1D9(); break;
        case 0xD8B9:
            func_D8B9(); break;
        case 0xD8C4:
            func_D8C4(); break;
        case 0xD8BF:
            func_D8BF(); break;
        case 0xDFEA:
            func_DFEA(); break;
        case 0xDFEF:
            func_DFEF(); break;
        case 0xDFF0:
            func_DFF0(); break;
        case 0x8216:
            switch (g_current_bank) {
                case 1: func_8216_b1(); break;
                case 4: func_8216_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD8A2:
            func_D8A2(); break;
        case 0xD8AE:
            func_D8AE(); break;
        case 0xD8AC:
            func_D8AC(); break;
        case 0xDFDE:
            func_DFDE(); break;
        case 0x8E6B:
            func_8E6B_b1(); break;
        case 0x8E7F:
            func_8E7F_b1(); break;
        case 0x8CFE:
            func_8CFE_b1(); break;
        case 0x8D15:
            switch (g_current_bank) {
                case 1: func_8D15_b1(); break;
                case 5: func_8D15_b5(); break;
                case 0: func_8D15_b0(); break;
                case 2: func_8D15_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D12:
            switch (g_current_bank) {
                case 1: func_8D12_b1(); break;
                case 5: func_8D12_b5(); break;
                case 0: func_8D12_b0(); break;
                case 4: func_8D12_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D0F:
            switch (g_current_bank) {
                case 1: func_8D0F_b1(); break;
                case 0: func_8D0F_b0(); break;
                case 4: func_8D0F_b4(); break;
                case 6: func_8D0F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D0B:
            switch (g_current_bank) {
                case 1: func_8D0B_b1(); break;
                case 3: func_8D0B_b3(); break;
                case 4: func_8D0B_b4(); break;
                case 5: func_8D0B_b5(); break;
                case 6: func_8D0B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB059:
            func_B059_b1(); break;
        case 0x9059:
            func_9059_b1(); break;
        case 0x9FEE:
            func_9FEE_b1(); break;
        case 0x90C9:
            func_90C9_b1(); break;
        case 0x918D:
            func_918D_b1(); break;
        case 0x91DE:
            func_91DE_b1(); break;
        case 0x944C:
            switch (g_current_bank) {
                case 1: func_944C_b1(); break;
                case 3: func_944C_b3(); break;
                case 6: func_944C_b6(); break;
                case 0: func_944C_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9586:
            switch (g_current_bank) {
                case 1: func_9586_b1(); break;
                case 4: func_9586_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9642:
            func_9642_b1(); break;
        case 0x96EB:
            func_96EB_b1(); break;
        case 0x9850:
            func_9850_b1(); break;
        case 0x9930:
            func_9930_b1(); break;
        case 0x9A55:
            func_9A55_b1(); break;
        case 0x9BB0:
            func_9BB0_b1(); break;
        case 0x9C77:
            func_9C77_b1(); break;
        case 0x9CC4:
            func_9CC4_b1(); break;
        case 0x9CE9:
            switch (g_current_bank) {
                case 1: func_9CE9_b1(); break;
                case 5: func_9CE9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D94:
            func_9D94_b1(); break;
        case 0x9EB7:
            func_9EB7_b1(); break;
        case 0xA117:
            func_A117_b1(); break;
        case 0x964C:
            switch (g_current_bank) {
                case 1: func_964C_b1(); break;
                case 4: func_964C_b4(); break;
                case 3: func_964C_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95AA:
            switch (g_current_bank) {
                case 1: func_95AA_b1(); break;
                case 4: func_95AA_b4(); break;
                case 5: func_95AA_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D01:
            switch (g_current_bank) {
                case 7: func_DD01(); break;
                case 1: func_9D01_b1(); break;
                case 5: func_9D01_b5(); break;
                case 6: func_9D01_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D04:
            func_9D04_b1(); break;
        case 0x9720:
            switch (g_current_bank) {
                case 1: func_9720_b1(); break;
                case 4: func_9720_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9085:
            switch (g_current_bank) {
                case 1: func_9085_b1(); break;
                case 4: func_9085_b4(); break;
                case 5: func_9085_b5(); break;
                case 6: func_9085_b6(); break;
                case 0: func_9085_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x96C5:
            switch (g_current_bank) {
                case 1: func_96C5_b1(); break;
                case 4: func_96C5_b4(); break;
                case 3: func_96C5_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9B85:
            switch (g_current_bank) {
                case 1: func_9B85_b1(); break;
                case 2: func_9B85_b2(); break;
                case 5: func_9B85_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D85:
            switch (g_current_bank) {
                case 1: func_9D85_b1(); break;
                case 3: func_9D85_b3(); break;
                case 6: func_9D85_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9E85:
            switch (g_current_bank) {
                case 1: func_9E85_b1(); break;
                case 4: func_9E85_b4(); break;
                case 5: func_9E85_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x97A9:
            switch (g_current_bank) {
                case 7: func_D7A9(); break;
                case 1: func_97A9_b1(); break;
                case 3: func_97A9_b3(); break;
                case 4: func_97A9_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x90A5:
            switch (g_current_bank) {
                case 1: func_90A5_b1(); break;
                case 3: func_90A5_b3(); break;
                case 5: func_90A5_b5(); break;
                case 4: func_90A5_b4(); break;
                case 6: func_90A5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x92AD:
            switch (g_current_bank) {
                case 1: func_92AD_b1(); break;
                case 3: func_92AD_b3(); break;
                case 6: func_92AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0AD:
            switch (g_current_bank) {
                case 7: func_E0AD(); break;
                case 1: func_A0AD_b1(); break;
                case 4: func_A0AD_b4(); break;
                case 6: func_A0AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95F0:
            switch (g_current_bank) {
                case 1: func_95F0_b1(); break;
                case 5: func_95F0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95AD:
            switch (g_current_bank) {
                case 1: func_95AD_b1(); break;
                case 3: func_95AD_b3(); break;
                case 4: func_95AD_b4(); break;
                case 5: func_95AD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A8D:
            switch (g_current_bank) {
                case 7: func_DA8D(); break;
                case 1: func_9A8D_b1(); break;
                case 4: func_9A8D_b4(); break;
                case 5: func_9A8D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9BAD:
            switch (g_current_bank) {
                case 7: func_DBAD(); break;
                case 1: func_9BAD_b1(); break;
                case 4: func_9BAD_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x90D0:
            switch (g_current_bank) {
                case 7: func_D0D0(); break;
                case 1: func_90D0_b1(); break;
                case 3: func_90D0_b3(); break;
                case 5: func_90D0_b5(); break;
                case 4: func_90D0_b4(); break;
                case 6: func_90D0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x934C:
            switch (g_current_bank) {
                case 1: func_934C_b1(); break;
                case 5: func_934C_b5(); break;
                case 6: func_934C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA048:
            switch (g_current_bank) {
                case 1: func_A048_b1(); break;
                case 4: func_A048_b4(); break;
                case 5: func_A048_b5(); break;
                case 6: func_A048_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DC0:
            switch (g_current_bank) {
                case 1: func_9DC0_b1(); break;
                case 4: func_9DC0_b4(); break;
                case 5: func_9DC0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DC5:
            switch (g_current_bank) {
                case 7: func_DDC5(); break;
                case 1: func_9DC5_b1(); break;
                case 4: func_9DC5_b4(); break;
                case 5: func_9DC5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D16:
            switch (g_current_bank) {
                case 1: func_9D16_b1(); break;
                case 2: func_9D16_b2(); break;
                case 6: func_9D16_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D40:
            switch (g_current_bank) {
                case 1: func_9D40_b1(); break;
                case 6: func_9D40_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D0E:
            switch (g_current_bank) {
                case 1: func_9D0E_b1(); break;
                case 4: func_9D0E_b4(); break;
                case 5: func_9D0E_b5(); break;
                case 6: func_9D0E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D20:
            switch (g_current_bank) {
                case 7: func_DD20(); break;
                case 1: func_9D20_b1(); break;
                case 0: func_9D20_b0(); break;
                case 2: func_9D20_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA165:
            switch (g_current_bank) {
                case 1: func_A165_b1(); break;
                case 3: func_A165_b3(); break;
                case 4: func_A165_b4(); break;
                case 5: func_A165_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9EB9:
            func_9EB9_b1(); break;
        case 0x9FB9:
            switch (g_current_bank) {
                case 1: func_9FB9_b1(); break;
                case 2: func_9FB9_b2(); break;
                case 4: func_9FB9_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95A9:
            switch (g_current_bank) {
                case 7: func_D5A9(); break;
                case 1: func_95A9_b1(); break;
                case 3: func_95A9_b3(); break;
                case 5: func_95A9_b5(); break;
                case 0: func_95A9_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DE8:
            switch (g_current_bank) {
                case 1: func_9DE8_b1(); break;
                case 4: func_9DE8_b4(); break;
                case 5: func_9DE8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D07:
            switch (g_current_bank) {
                case 1: func_9D07_b1(); break;
                case 5: func_9D07_b5(); break;
                case 6: func_9D07_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9985:
            switch (g_current_bank) {
                case 1: func_9985_b1(); break;
                case 3: func_9985_b3(); break;
                case 5: func_9985_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9885:
            switch (g_current_bank) {
                case 1: func_9885_b1(); break;
                case 5: func_9885_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F20:
            switch (g_current_bank) {
                case 1: func_9F20_b1(); break;
                case 3: func_9F20_b3(); break;
                case 5: func_9F20_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9AA5:
            func_9AA5_b1(); break;
        case 0x97A5:
            switch (g_current_bank) {
                case 1: func_97A5_b1(); break;
                case 3: func_97A5_b3(); break;
                case 4: func_97A5_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D10:
            switch (g_current_bank) {
                case 1: func_9D10_b1(); break;
                case 4: func_9D10_b4(); break;
                case 2: func_9D10_b2(); break;
                case 5: func_9D10_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DAA:
            switch (g_current_bank) {
                case 1: func_9DAA_b1(); break;
                case 3: func_9DAA_b3(); break;
                case 4: func_9DAA_b4(); break;
                case 5: func_9DAA_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA060:
            switch (g_current_bank) {
                case 1: func_A060_b1(); break;
                case 4: func_A060_b4(); break;
                case 2: func_A060_b2(); break;
                case 5: func_A060_b5(); break;
                case 6: func_A060_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9900:
            switch (g_current_bank) {
                case 1: func_9900_b1(); break;
                case 4: func_9900_b4(); break;
                case 3: func_9900_b3(); break;
                case 6: func_9900_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9517:
            switch (g_current_bank) {
                case 1: func_9517_b1(); break;
                case 4: func_9517_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x968D:
            switch (g_current_bank) {
                case 1: func_968D_b1(); break;
                case 5: func_968D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x978D:
            switch (g_current_bank) {
                case 1: func_978D_b1(); break;
                case 5: func_978D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x96AD:
            switch (g_current_bank) {
                case 1: func_96AD_b1(); break;
                case 0: func_96AD_b0(); break;
                case 3: func_96AD_b3(); break;
                case 4: func_96AD_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x97AD:
            switch (g_current_bank) {
                case 1: func_97AD_b1(); break;
                case 4: func_97AD_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x96A4:
            switch (g_current_bank) {
                case 1: func_96A4_b1(); break;
                case 4: func_96A4_b4(); break;
                case 3: func_96A4_b3(); break;
                case 5: func_96A4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9746:
            switch (g_current_bank) {
                case 1: func_9746_b1(); break;
                case 4: func_9746_b4(); break;
                case 3: func_9746_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9097:
            func_9097_b1(); break;
        case 0x9865:
            switch (g_current_bank) {
                case 1: func_9865_b1(); break;
                case 3: func_9865_b3(); break;
                case 4: func_9865_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9785:
            switch (g_current_bank) {
                case 1: func_9785_b1(); break;
                case 3: func_9785_b3(); break;
                case 4: func_9785_b4(); break;
                case 5: func_9785_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA001:
            switch (g_current_bank) {
                case 1: func_A001_b1(); break;
                case 4: func_A001_b4(); break;
                case 5: func_A001_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F85:
            switch (g_current_bank) {
                case 7: func_DF85(); break;
                case 1: func_9F85_b1(); break;
                case 6: func_9F85_b6(); break;
                case 4: func_9F85_b4(); break;
                case 5: func_9F85_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x998D:
            switch (g_current_bank) {
                case 7: func_D98D(); break;
                case 1: func_998D_b1(); break;
                case 3: func_998D_b3(); break;
                case 2: func_998D_b2(); break;
                case 5: func_998D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA014:
            switch (g_current_bank) {
                case 1: func_A014_b1(); break;
                case 6: func_A014_b6(); break;
                case 5: func_A014_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA081:
            switch (g_current_bank) {
                case 1: func_A081_b1(); break;
                case 6: func_A081_b6(); break;
                case 3: func_A081_b3(); break;
                case 4: func_A081_b4(); break;
                case 5: func_A081_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9991:
            switch (g_current_bank) {
                case 7: func_D991(); break;
                case 1: func_9991_b1(); break;
                case 3: func_9991_b3(); break;
                case 2: func_9991_b2(); break;
                case 6: func_9991_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x92A5:
            switch (g_current_bank) {
                case 1: func_92A5_b1(); break;
                case 3: func_92A5_b3(); break;
                case 5: func_92A5_b5(); break;
                case 4: func_92A5_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9993:
            switch (g_current_bank) {
                case 1: func_9993_b1(); break;
                case 2: func_9993_b2(); break;
                case 3: func_9993_b3(); break;
                case 4: func_9993_b4(); break;
                case 5: func_9993_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x990A:
            switch (g_current_bank) {
                case 1: func_990A_b1(); break;
                case 5: func_990A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98EC:
            switch (g_current_bank) {
                case 1: func_98EC_b1(); break;
                case 3: func_98EC_b3(); break;
                case 0: func_98EC_b0(); break;
                case 5: func_98EC_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9816:
            switch (g_current_bank) {
                case 1: func_9816_b1(); break;
                case 3: func_9816_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x908D:
            switch (g_current_bank) {
                case 1: func_908D_b1(); break;
                case 5: func_908D_b5(); break;
                case 4: func_908D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DEB:
            switch (g_current_bank) {
                case 1: func_9DEB_b1(); break;
                case 4: func_9DEB_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D2D:
            switch (g_current_bank) {
                case 1: func_9D2D_b1(); break;
                case 4: func_9D2D_b4(); break;
                case 0: func_9D2D_b0(); break;
                case 3: func_9D2D_b3(); break;
                case 5: func_9D2D_b5(); break;
                case 6: func_9D2D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D1D:
            switch (g_current_bank) {
                case 1: func_9D1D_b1(); break;
                case 5: func_9D1D_b5(); break;
                case 6: func_9D1D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9902:
            switch (g_current_bank) {
                case 1: func_9902_b1(); break;
                case 6: func_9902_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x924C:
            switch (g_current_bank) {
                case 7: func_D24C(); break;
                case 1: func_924C_b1(); break;
                case 5: func_924C_b5(); break;
                case 3: func_924C_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9814:
            switch (g_current_bank) {
                case 1: func_9814_b1(); break;
                case 3: func_9814_b3(); break;
                case 5: func_9814_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA020:
            switch (g_current_bank) {
                case 7: func_E020(); break;
                case 1: func_A020_b1(); break;
                case 4: func_A020_b4(); break;
                case 5: func_A020_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99A8:
            switch (g_current_bank) {
                case 1: func_99A8_b1(); break;
                case 4: func_99A8_b4(); break;
                case 3: func_99A8_b3(); break;
                case 5: func_99A8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9401:
            func_9401_b1(); break;
        case 0x9082:
            switch (g_current_bank) {
                case 1: func_9082_b1(); break;
                case 5: func_9082_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA074:
            func_A074_b1(); break;
        case 0x95ED:
            func_95ED_b1(); break;
        case 0x9342:
            func_9342_b1(); break;
        case 0x9D37:
            func_9D37_b1(); break;
        case 0x9792:
            func_9792_b1(); break;
        case 0x98D3:
            func_98D3_b1(); break;
        case 0x9683:
            func_9683_b1(); break;
        case 0xA07C:
            func_A07C_b1(); break;
        case 0x93D7:
            func_93D7_b1(); break;
        case 0x9897:
            switch (g_current_bank) {
                case 1: func_9897_b1(); break;
                case 3: func_9897_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9CFB:
            func_9CFB_b1(); break;
        case 0x9D0B:
            func_9D0B_b1(); break;
        case 0x9D95:
            switch (g_current_bank) {
                case 1: func_9D95_b1(); break;
                case 6: func_9D95_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DB1:
            func_9DB1_b1(); break;
        case 0x8C30:
            switch (g_current_bank) {
                case 3: func_8C30_b3(); break;
                case 6: func_8C30_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D00:
            switch (g_current_bank) {
                case 3: func_8D00_b3(); break;
                case 5: func_8D00_b5(); break;
                case 4: func_8D00_b4(); break;
                case 6: func_8D00_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D05:
            switch (g_current_bank) {
                case 3: func_8D05_b3(); break;
                case 4: func_8D05_b4(); break;
                case 5: func_8D05_b5(); break;
                case 6: func_8D05_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D02:
            switch (g_current_bank) {
                case 7: func_CD02(); break;
                case 3: func_8D02_b3(); break;
                case 4: func_8D02_b4(); break;
                case 5: func_8D02_b5(); break;
                case 6: func_8D02_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D70:
            switch (g_current_bank) {
                case 3: func_8D70_b3(); break;
                case 1: func_8D70_b1(); break;
                case 4: func_8D70_b4(); break;
                case 6: func_8D70_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D07:
            switch (g_current_bank) {
                case 3: func_8D07_b3(); break;
                case 5: func_8D07_b5(); break;
                case 6: func_8D07_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D32:
            switch (g_current_bank) {
                case 3: func_8D32_b3(); break;
                case 5: func_8D32_b5(); break;
                case 4: func_8D32_b4(); break;
                case 6: func_8D32_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D34:
            switch (g_current_bank) {
                case 3: func_8D34_b3(); break;
                case 1: func_8D34_b1(); break;
                case 4: func_8D34_b4(); break;
                case 6: func_8D34_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D21:
            switch (g_current_bank) {
                case 3: func_8D21_b3(); break;
                case 4: func_8D21_b4(); break;
                case 6: func_8D21_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D09:
            switch (g_current_bank) {
                case 3: func_8D09_b3(); break;
                case 5: func_8D09_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D63:
            switch (g_current_bank) {
                case 3: func_8D63_b3(); break;
                case 6: func_8D63_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D6C:
            switch (g_current_bank) {
                case 3: func_8D6C_b3(); break;
                case 4: func_8D6C_b4(); break;
                case 6: func_8D6C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D3F:
            switch (g_current_bank) {
                case 3: func_8D3F_b3(); break;
                case 1: func_8D3F_b1(); break;
                case 5: func_8D3F_b5(); break;
                case 4: func_8D3F_b4(); break;
                case 6: func_8D3F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D58:
            switch (g_current_bank) {
                case 3: func_8D58_b3(); break;
                case 6: func_8D58_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D75:
            switch (g_current_bank) {
                case 7: func_CD75(); break;
                case 3: func_8D75_b3(); break;
                case 1: func_8D75_b1(); break;
                case 4: func_8D75_b4(); break;
                case 6: func_8D75_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D23:
            switch (g_current_bank) {
                case 3: func_8D23_b3(); break;
                case 5: func_8D23_b5(); break;
                case 6: func_8D23_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CC8:
            switch (g_current_bank) {
                case 7: func_CCC8(); break;
                case 3: func_8CC8_b3(); break;
                case 4: func_8CC8_b4(); break;
                case 5: func_8CC8_b5(); break;
                case 6: func_8CC8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D1E:
            switch (g_current_bank) {
                case 3: func_8D1E_b3(); break;
                case 4: func_8D1E_b4(); break;
                case 6: func_8D1E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D7F:
            switch (g_current_bank) {
                case 3: func_8D7F_b3(); break;
                case 1: func_8D7F_b1(); break;
                case 5: func_8D7F_b5(); break;
                case 6: func_8D7F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D2D:
            switch (g_current_bank) {
                case 3: func_8D2D_b3(); break;
                case 5: func_8D2D_b5(); break;
                case 6: func_8D2D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAEA4:
            func_AEA4_b0(); break;
        case 0xAEA8:
            switch (g_current_bank) {
                case 0: func_AEA8_b0(); break;
                case 4: func_AEA8_b4(); break;
                case 5: func_AEA8_b5(); break;
                case 6: func_AEA8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB03E:
            func_B03E_b4(); break;
        case 0xB08D:
            switch (g_current_bank) {
                case 4: func_B08D_b4(); break;
                case 0: func_B08D_b0(); break;
                case 3: func_B08D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB04A:
            switch (g_current_bank) {
                case 7: func_F04A(); break;
                case 4: func_B04A_b4(); break;
                case 1: func_B04A_b1(); break;
                case 5: func_B04A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB101:
            switch (g_current_bank) {
                case 4: func_B101_b4(); break;
                case 0: func_B101_b0(); break;
                case 3: func_B101_b3(); break;
                case 5: func_B101_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0C0:
            switch (g_current_bank) {
                case 7: func_F0C0(); break;
                case 4: func_B0C0_b4(); break;
                case 0: func_B0C0_b0(); break;
                case 3: func_B0C0_b3(); break;
                case 5: func_B0C0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0F9:
            switch (g_current_bank) {
                case 7: func_F0F9(); break;
                case 4: func_B0F9_b4(); break;
                case 0: func_B0F9_b0(); break;
                case 3: func_B0F9_b3(); break;
                case 1: func_B0F9_b1(); break;
                case 5: func_B0F9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB09F:
            func_B09F_b4(); break;
        case 0xB0B5:
            func_B0B5_b4(); break;
        case 0x903E:
            switch (g_current_bank) {
                case 4: func_903E_b4(); break;
                case 3: func_903E_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9060:
            switch (g_current_bank) {
                case 4: func_9060_b4(); break;
                case 3: func_9060_b3(); break;
                case 1: func_9060_b1(); break;
                case 5: func_9060_b5(); break;
                case 6: func_9060_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x904A:
            switch (g_current_bank) {
                case 4: func_904A_b4(); break;
                case 2: func_904A_b2(); break;
                case 6: func_904A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9094:
            func_9094_b4(); break;
        case 0x969E:
            func_969E_b4(); break;
        case 0x96A6:
            switch (g_current_bank) {
                case 4: func_96A6_b4(); break;
                case 3: func_96A6_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9715:
            switch (g_current_bank) {
                case 4: func_9715_b4(); break;
                case 1: func_9715_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x96FF:
            func_96FF_b4(); break;
        case 0xA240:
            switch (g_current_bank) {
                case 4: func_A240_b4(); break;
                case 1: func_A240_b1(); break;
                case 5: func_A240_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA28D:
            switch (g_current_bank) {
                case 7: func_E28D(); break;
                case 4: func_A28D_b4(); break;
                case 5: func_A28D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA260:
            switch (g_current_bank) {
                case 4: func_A260_b4(); break;
                case 5: func_A260_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA29A:
            switch (g_current_bank) {
                case 4: func_A29A_b4(); break;
                case 1: func_A29A_b1(); break;
                case 2: func_A29A_b2(); break;
                case 5: func_A29A_b5(); break;
                case 6: func_A29A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA285:
            switch (g_current_bank) {
                case 4: func_A285_b4(); break;
                case 1: func_A285_b1(); break;
                case 6: func_A285_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2DF:
            switch (g_current_bank) {
                case 4: func_A2DF_b4(); break;
                case 1: func_A2DF_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2F5:
            func_A2F5_b4(); break;
        case 0xA268:
            switch (g_current_bank) {
                case 4: func_A268_b4(); break;
                case 5: func_A268_b5(); break;
                case 0: func_A268_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA30B:
            func_A30B_b4(); break;
        case 0x8240:
            func_8240_b4(); break;
        case 0x8B3D:
            func_8B3D_b4(); break;
        case 0x8B8D:
            switch (g_current_bank) {
                case 4: func_8B8D_b4(); break;
                case 5: func_8B8D_b5(); break;
                case 1: func_8B8D_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C06:
            switch (g_current_bank) {
                case 4: func_8C06_b4(); break;
                case 5: func_8C06_b5(); break;
                case 1: func_8C06_b1(); break;
                case 6: func_8C06_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8FD7:
            func_8FD7_b3(); break;
        case 0x900B:
            switch (g_current_bank) {
                case 7: func_D00B(); break;
                case 3: func_900B_b3(); break;
                case 5: func_900B_b5(); break;
                case 4: func_900B_b4(); break;
                case 6: func_900B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9011:
            switch (g_current_bank) {
                case 3: func_9011_b3(); break;
                case 5: func_9011_b5(); break;
                case 4: func_9011_b4(); break;
                case 6: func_9011_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x90A9:
            switch (g_current_bank) {
                case 7: func_D0A9(); break;
                case 3: func_90A9_b3(); break;
                case 4: func_90A9_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9009:
            switch (g_current_bank) {
                case 3: func_9009_b3(); break;
                case 5: func_9009_b5(); break;
                case 1: func_9009_b1(); break;
                case 4: func_9009_b4(); break;
                case 6: func_9009_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9015:
            switch (g_current_bank) {
                case 7: func_D015(); break;
                case 3: func_9015_b3(); break;
                case 5: func_9015_b5(); break;
                case 0: func_9015_b0(); break;
                case 4: func_9015_b4(); break;
                case 6: func_9015_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9098:
            switch (g_current_bank) {
                case 3: func_9098_b3(); break;
                case 4: func_9098_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8421:
            func_8421_b6(); break;
        case 0x8EF8:
            func_8EF8_b6(); break;
        case 0xB845:
            func_B845_b5(); break;
        case 0xB81E:
            func_B81E_b5(); break;
        case 0xB837:
            func_B837_b5(); break;
        case 0x9513:
            func_9513_b3(); break;
        case 0x81DB:
            switch (g_current_bank) {
                case 0: func_81DB_b0(); break;
                case 3: func_81DB_b3(); break;
                case 2: func_81DB_b2(); break;
                case 6: func_81DB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9501:
            func_9501_b3(); break;
        case 0x93FA:
            func_93FA_b3(); break;
        case 0x9412:
            func_9412_b3(); break;
        case 0xC00F:
            func_C00F(); break;
        case 0x8132:
            func_8132_b6(); break;
        case 0x9F5B:
            func_9F5B_b6(); break;
        case 0x9F8D:
            switch (g_current_bank) {
                case 7: func_DF8D(); break;
                case 6: func_9F8D_b6(); break;
                case 4: func_9F8D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F5D:
            switch (g_current_bank) {
                case 6: func_9F5D_b6(); break;
                case 4: func_9F5D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA03E:
            func_A03E_b6(); break;
        case 0x8154:
            switch (g_current_bank) {
                case 3: func_8154_b3(); break;
                case 0: func_8154_b0(); break;
                case 5: func_8154_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xDDB5:
            func_DDB5(); break;
        case 0xDDF0:
            func_DDF0(); break;
        case 0xDDC5:
            func_DDC5(); break;
        case 0xDDB9:
            func_DDB9(); break;
        case 0xDDD8:
            func_DDD8(); break;
        case 0xEE27:
            func_EE27(); break;
        case 0xEE4F:
            func_EE4F(); break;
        case 0xEE4C:
            func_EE4C(); break;
        case 0xEE5A:
            func_EE5A(); break;
        case 0xEE85:
            func_EE85(); break;
        case 0xEE8E:
            func_EE8E(); break;
        case 0xEEAE:
            func_EEAE(); break;
        case 0xEEB2:
            func_EEB2(); break;
        case 0xEEB6:
            func_EEB6(); break;
        case 0xEEB9:
            func_EEB9(); break;
        case 0xEEBA:
            func_EEBA(); break;
        case 0xEEBD:
            func_EEBD(); break;
        case 0x8812:
            func_8812_b3(); break;
        case 0x8820:
            switch (g_current_bank) {
                case 7: func_C820(); break;
                case 3: func_8820_b3(); break;
                case 5: func_8820_b5(); break;
                case 4: func_8820_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADA2:
            switch (g_current_bank) {
                case 1: func_ADA2_b1(); break;
                case 4: func_ADA2_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADF9:
            func_ADF9_b1(); break;
        case 0xADC6:
            switch (g_current_bank) {
                case 1: func_ADC6_b1(); break;
                case 4: func_ADC6_b4(); break;
                case 6: func_ADC6_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADC8:
            switch (g_current_bank) {
                case 1: func_ADC8_b1(); break;
                case 3: func_ADC8_b3(); break;
                case 4: func_ADC8_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADCB:
            switch (g_current_bank) {
                case 1: func_ADCB_b1(); break;
                case 4: func_ADCB_b4(); break;
                case 5: func_ADCB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADD3:
            switch (g_current_bank) {
                case 1: func_ADD3_b1(); break;
                case 4: func_ADD3_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADD8:
            switch (g_current_bank) {
                case 7: func_EDD8(); break;
                case 1: func_ADD8_b1(); break;
                case 4: func_ADD8_b4(); break;
                case 5: func_ADD8_b5(); break;
                case 6: func_ADD8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADF6:
            switch (g_current_bank) {
                case 1: func_ADF6_b1(); break;
                case 4: func_ADF6_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DA2:
            func_8DA2_b1(); break;
        case 0xB022:
            switch (g_current_bank) {
                case 3: func_B022_b3(); break;
                case 4: func_B022_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9022:
            func_9022_b3(); break;
        case 0xB1E9:
            switch (g_current_bank) {
                case 3: func_B1E9_b3(); break;
                case 4: func_B1E9_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x91E9:
            func_91E9_b3(); break;
        case 0x823F:
            func_823F_b0(); break;
        case 0x8181:
            switch (g_current_bank) {
                case 3: func_8181_b3(); break;
                case 0: func_8181_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8183:
            func_8183_b3(); break;
        case 0x8185:
            func_8185_b3(); break;
        case 0x8169:
            switch (g_current_bank) {
                case 3: func_8169_b3(); break;
                case 0: func_8169_b0(); break;
                case 5: func_8169_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8180:
            func_8180_b3(); break;
        case 0xDFCC:
            func_DFCC(); break;
        case 0xDFD0:
            func_DFD0(); break;
        case 0xDFD8:
            func_DFD8(); break;
        case 0xB1F5:
            func_B1F5_b3(); break;
        case 0x91F5:
            func_91F5_b3(); break;
        case 0xE49F:
            func_E49F(); break;
        case 0xE4AD:
            func_E4AD(); break;
        case 0xE4A5:
            func_E4A5(); break;
        case 0xE4AB:
            func_E4AB(); break;
        case 0xE4A9:
            func_E4A9(); break;
        case 0xE4B9:
            func_E4B9(); break;
        case 0xDF72:
            func_DF72(); break;
        case 0xDF0E:
            func_DF0E(); break;
        case 0xE4C1:
            func_E4C1(); break;
        case 0xE54F:
            func_E54F(); break;
        case 0xE4C4:
            func_E4C4(); break;
        case 0xE4CC:
            func_E4CC(); break;
        case 0xE530:
            func_E530(); break;
        case 0xE50A:
            func_E50A(); break;
        case 0xE520:
            func_E520(); break;
        case 0xE4C9:
            func_E4C9(); break;
        case 0xB201:
            func_B201_b3(); break;
        case 0x9201:
            func_9201_b3(); break;
        case 0x8A58:
            func_8A58_b3(); break;
        case 0x8A81:
            func_8A81_b3(); break;
        case 0x8A60:
            switch (g_current_bank) {
                case 3: func_8A60_b3(); break;
                case 1: func_8A60_b1(); break;
                case 4: func_8A60_b4(); break;
                case 6: func_8A60_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A82:
            func_8A82_b3(); break;
        case 0x8A8D:
            switch (g_current_bank) {
                case 3: func_8A8D_b3(); break;
                case 5: func_8A8D_b5(); break;
                case 6: func_8A8D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8AA8:
            switch (g_current_bank) {
                case 3: func_8AA8_b3(); break;
                case 1: func_8AA8_b1(); break;
                case 6: func_8AA8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8199:
            switch (g_current_bank) {
                case 7: func_C199(); break;
                case 3: func_8199_b3(); break;
                case 0: func_8199_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81AD:
            switch (g_current_bank) {
                case 3: func_81AD_b3(); break;
                case 4: func_81AD_b4(); break;
                case 2: func_81AD_b2(); break;
                case 6: func_81AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81B1:
            switch (g_current_bank) {
                case 7: func_C1B1(); break;
                case 3: func_81B1_b3(); break;
                case 0: func_81B1_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB00A:
            func_B00A_b3(); break;
        case 0x900A:
            switch (g_current_bank) {
                case 7: func_D00A(); break;
                case 3: func_900A_b3(); break;
                case 1: func_900A_b1(); break;
                case 5: func_900A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD362:
            func_D362(); break;
        case 0xF656:
            func_F656(); break;
        case 0xF6CB:
            func_F6CB(); break;
        case 0xF690:
            func_F690(); break;
        case 0xF6B3:
            func_F6B3(); break;
        case 0xF6A9:
            func_F6A9(); break;
        case 0xF6AD:
            func_F6AD(); break;
        case 0xF6CE:
            func_F6CE(); break;
        case 0xF6C9:
            func_F6C9(); break;
        case 0xF669:
            func_F669(); break;
        case 0xB210:
            func_B210_b4(); break;
        case 0xB28D:
            switch (g_current_bank) {
                case 4: func_B28D_b4(); break;
                case 0: func_B28D_b0(); break;
                case 5: func_B28D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB2C9:
            switch (g_current_bank) {
                case 4: func_B2C9_b4(); break;
                case 3: func_B2C9_b3(); break;
                case 1: func_B2C9_b1(); break;
                case 5: func_B2C9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB2B1:
            switch (g_current_bank) {
                case 4: func_B2B1_b4(); break;
                case 0: func_B2B1_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9210:
            func_9210_b4(); break;
        case 0x9832:
            func_9832_b4(); break;
        case 0x98E8:
            switch (g_current_bank) {
                case 4: func_98E8_b4(); break;
                case 5: func_98E8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98A9:
            switch (g_current_bank) {
                case 4: func_98A9_b4(); break;
                case 3: func_98A9_b3(); break;
                case 5: func_98A9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98C5:
            switch (g_current_bank) {
                case 4: func_98C5_b4(); break;
                case 3: func_98C5_b3(); break;
                case 5: func_98C5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98E5:
            switch (g_current_bank) {
                case 4: func_98E5_b4(); break;
                case 1: func_98E5_b1(); break;
                case 3: func_98E5_b3(); break;
                case 5: func_98E5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x988D:
            switch (g_current_bank) {
                case 4: func_988D_b4(); break;
                case 3: func_988D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9913:
            switch (g_current_bank) {
                case 4: func_9913_b4(); break;
                case 3: func_9913_b3(); break;
                case 5: func_9913_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9909:
            switch (g_current_bank) {
                case 4: func_9909_b4(); break;
                case 3: func_9909_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x990B:
            switch (g_current_bank) {
                case 4: func_990B_b4(); break;
                case 3: func_990B_b3(); break;
                case 0: func_990B_b0(); break;
                case 1: func_990B_b1(); break;
                case 5: func_990B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9903:
            switch (g_current_bank) {
                case 4: func_9903_b4(); break;
                case 3: func_9903_b3(); break;
                case 0: func_9903_b0(); break;
                case 1: func_9903_b1(); break;
                case 5: func_9903_b5(); break;
                case 6: func_9903_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9919:
            switch (g_current_bank) {
                case 4: func_9919_b4(); break;
                case 5: func_9919_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9911:
            func_9911_b4(); break;
        case 0xAEE2:
            func_AEE2_b1(); break;
        case 0xAF4C:
            switch (g_current_bank) {
                case 7: func_EF4C(); break;
                case 1: func_AF4C_b1(); break;
                case 0: func_AF4C_b0(); break;
                case 5: func_AF4C_b5(); break;
                case 6: func_AF4C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAEEE:
            switch (g_current_bank) {
                case 7: func_EEEE(); break;
                case 1: func_AEEE_b1(); break;
                case 0: func_AEEE_b0(); break;
                case 3: func_AEEE_b3(); break;
                case 4: func_AEEE_b4(); break;
                case 5: func_AEEE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAF71:
            func_AF71_b1(); break;
        case 0x8EE2:
            func_8EE2_b1(); break;
        case 0x86BF:
            func_86BF_b5(); break;
        case 0x86E9:
            func_86E9_b5(); break;
        case 0x8844:
            func_8844_b5(); break;
        case 0x886E:
            switch (g_current_bank) {
                case 5: func_886E_b5(); break;
                case 1: func_886E_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAEBC:
            func_AEBC_b0(); break;
        case 0xAF75:
            switch (g_current_bank) {
                case 0: func_AF75_b0(); break;
                case 1: func_AF75_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAEC6:
            switch (g_current_bank) {
                case 0: func_AEC6_b0(); break;
                case 5: func_AEC6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9565:
            func_9565_b5(); break;
        case 0x81B5:
            func_81B5_b4(); break;
        case 0xB9F9:
            func_B9F9_b4(); break;
        case 0x99F9:
            func_99F9_b4(); break;
        case 0x9F37:
            func_9F37_b4(); break;
        case 0x9167:
            func_9167_b5(); break;
        case 0x91C3:
            func_91C3_b5(); break;
        case 0x91A5:
            switch (g_current_bank) {
                case 5: func_91A5_b5(); break;
                case 0: func_91A5_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8ADA:
            func_8ADA_b3(); break;
        case 0x8B2E:
            func_8B2E_b3(); break;
        case 0x81DC:
            func_81DC_b3(); break;
        case 0x8207:
            func_8207_b3(); break;
        case 0x82A9:
            switch (g_current_bank) {
                case 3: func_82A9_b3(); break;
                case 5: func_82A9_b5(); break;
                case 4: func_82A9_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8469:
            func_8469_b2(); break;
        case 0x8176:
            switch (g_current_bank) {
                case 2: func_8176_b2(); break;
                case 6: func_8176_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
        case 0xE817:
            func_E817(); break;
        case 0xE840:
            func_E840(); break;
        case 0xE843:
            func_E843(); break;
        case 0xE117:
            func_E117(); break;
        case 0xE954:
            func_E954(); break;
        case 0xE485:
            func_E485(); break;
        case 0xE48D:
            func_E48D(); break;
        case 0xA045:
            switch (g_current_bank) {
                case 1: func_A045_b1(); break;
                case 5: func_A045_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA118:
            func_A118_b1(); break;
        case 0x8136:
            switch (g_current_bank) {
                case 7: func_C136(); break;
                case 1: func_8136_b1(); break;
                case 2: func_8136_b2(); break;
                case 0: func_8136_b0(); break;
                case 3: func_8136_b3(); break;
                case 5: func_8136_b5(); break;
                case 6: func_8136_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xDD14:
            func_DD14(); break;
        case 0x87E9:
            func_87E9_b3(); break;
        case 0x8801:
            switch (g_current_bank) {
                case 7: func_C801(); break;
                case 3: func_8801_b3(); break;
                case 5: func_8801_b5(); break;
                case 0: func_8801_b0(); break;
                case 1: func_8801_b1(); break;
                case 4: func_8801_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x861B:
            func_861B_b0(); break;
        case 0x8BAA:
            func_8BAA_b3(); break;
        case 0x8BAD:
            switch (g_current_bank) {
                case 3: func_8BAD_b3(); break;
                case 0: func_8BAD_b0(); break;
                case 1: func_8BAD_b1(); break;
                case 6: func_8BAD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE7E:
            switch (g_current_bank) {
                case 0: func_AE7E_b0(); break;
                case 1: func_AE7E_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8500:
            switch (g_current_bank) {
                case 4: func_8500_b4(); break;
                case 5: func_8500_b5(); break;
                case 6: func_8500_b6(); break;
                case 2: func_8500_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8505:
            switch (g_current_bank) {
                case 4: func_8505_b4(); break;
                case 5: func_8505_b5(); break;
                case 1: func_8505_b1(); break;
                case 2: func_8505_b2(); break;
                case 6: func_8505_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83A9:
            switch (g_current_bank) {
                case 7: func_C3A9(); break;
                case 4: func_83A9_b4(); break;
                case 3: func_83A9_b3(); break;
                case 6: func_83A9_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8509:
            switch (g_current_bank) {
                case 4: func_8509_b4(); break;
                case 1: func_8509_b1(); break;
                case 2: func_8509_b2(); break;
                case 6: func_8509_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84F8:
            switch (g_current_bank) {
                case 7: func_C4F8(); break;
                case 4: func_84F8_b4(); break;
                case 1: func_84F8_b1(); break;
                case 2: func_84F8_b2(); break;
                case 6: func_84F8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8502:
            switch (g_current_bank) {
                case 4: func_8502_b4(); break;
                case 6: func_8502_b6(); break;
                case 0: func_8502_b0(); break;
                case 1: func_8502_b1(); break;
                case 2: func_8502_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x848D:
            switch (g_current_bank) {
                case 4: func_848D_b4(); break;
                case 1: func_848D_b1(); break;
                case 0: func_848D_b0(); break;
                case 6: func_848D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8403:
            switch (g_current_bank) {
                case 4: func_8403_b4(); break;
                case 2: func_8403_b2(); break;
                case 6: func_8403_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8511:
            func_8511_b4(); break;
        case 0x82D6:
            func_82D6_b4(); break;
        case 0x8311:
            func_8311_b3(); break;
        case 0x8383:
            func_8383_b3(); break;
        case 0x85B8:
            switch (g_current_bank) {
                case 7: func_C5B8(); break;
                case 0: func_85B8_b0(); break;
                case 5: func_85B8_b5(); break;
                case 2: func_85B8_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85D8:
            switch (g_current_bank) {
                case 0: func_85D8_b0(); break;
                case 5: func_85D8_b5(); break;
                case 6: func_85D8_b6(); break;
                case 2: func_85D8_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83FC:
            func_83FC_b6(); break;
        case 0x841D:
            switch (g_current_bank) {
                case 6: func_841D_b6(); break;
                case 1: func_841D_b1(); break;
                case 2: func_841D_b2(); break;
                case 5: func_841D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8EBF:
            func_8EBF_b6(); break;
        case 0x8EE8:
            switch (g_current_bank) {
                case 6: func_8EE8_b6(); break;
                case 4: func_8EE8_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85FA:
            func_85FA_b0(); break;
        case 0x8634:
            func_8634_b0(); break;
        case 0x8597:
            switch (g_current_bank) {
                case 0: func_8597_b0(); break;
                case 4: func_8597_b4(); break;
                case 5: func_8597_b5(); break;
                case 6: func_8597_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82D8:
            func_82D8_b0(); break;
        case 0x82F9:
            func_82F9_b0(); break;
        case 0x831A:
            func_831A_b0(); break;
        case 0x8385:
            func_8385_b0(); break;
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
        case 0x9442:
            func_9442_b3(); break;
        case 0x942A:
            func_942A_b3(); break;
        case 0xEC57:
            func_EC57(); break;
        case 0xEC8D:
            func_EC8D(); break;
        case 0xEC9F:
            func_EC9F(); break;
        case 0xEC8F:
            func_EC8F(); break;
        case 0xECCD:
            func_ECCD(); break;
        case 0xECEE:
            func_ECEE(); break;
        case 0xECD0:
            func_ECD0(); break;
        case 0xECEB:
            func_ECEB(); break;
        case 0xED05:
            func_ED05(); break;
        case 0xECE8:
            func_ECE8(); break;
        case 0xECF0:
            func_ECF0(); break;
        case 0xED18:
            func_ED18(); break;
        case 0xE429:
            func_E429(); break;
        case 0x8273:
            func_8273_b0(); break;
        case 0xE471:
            func_E471(); break;
        case 0xD043:
            func_D043(); break;
        case 0x9886:
            func_9886_b1(); break;
        case 0x9CEA:
            func_9CEA_b1(); break;
        case 0xAF76:
            switch (g_current_bank) {
                case 3: func_AF76_b3(); break;
                case 0: func_AF76_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8F76:
            func_8F76_b3(); break;
        case 0xD070:
            func_D070(); break;
        case 0xD080:
            func_D080(); break;
        case 0xD090:
            func_D090(); break;
        case 0xD0A2:
            func_D0A2(); break;
        case 0xD0A3:
            func_D0A3(); break;
        case 0xD0A9:
            func_D0A9(); break;
        case 0xD0B6:
            func_D0B6(); break;
        case 0xD0BF:
            func_D0BF(); break;
        case 0xD0C0:
            func_D0C0(); break;
        case 0xD0C9:
            func_D0C9(); break;
        case 0xD0C6:
            func_D0C6(); break;
        case 0xD0CA:
            func_D0CA(); break;
        case 0xD0D0:
            func_D0D0(); break;
        case 0xD0D4:
            func_D0D4(); break;
        case 0xD0DE:
            func_D0DE(); break;
        case 0xD0DF:
            func_D0DF(); break;
        case 0xD0EA:
            func_D0EA(); break;
        case 0xD0EC:
            func_D0EC(); break;
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
                case 5: func_9003_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x88E2:
            func_88E2_b1(); break;
        case 0x8906:
            func_8906_b1(); break;
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
        case 0x8C2D:
            func_8C2D_b1(); break;
        case 0xEBDE:
            func_EBDE(); break;
        case 0xEBF8:
            func_EBF8(); break;
        case 0xE24F:
            func_E24F(); break;
        case 0xDFAA:
            func_DFAA(); break;
        case 0xDFC4:
            func_DFC4(); break;
        case 0xDFB3:
            func_DFB3(); break;
        case 0x8210:
            func_8210_b1(); break;
        case 0x8202:
            func_8202_b1(); break;
        case 0x8739:
            func_8739_b1(); break;
        case 0x878D:
            switch (g_current_bank) {
                case 1: func_878D_b1(); break;
                case 0: func_878D_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x87F2:
            func_87F2_b1(); break;
        case 0x8810:
            switch (g_current_bank) {
                case 1: func_8810_b1(); break;
                case 0: func_8810_b0(); break;
                case 3: func_8810_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
        case 0x825C:
            func_825C_b1(); break;
        case 0x8854:
            func_8854_b1(); break;
        case 0x8896:
            switch (g_current_bank) {
                case 1: func_8896_b1(); break;
                case 6: func_8896_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x888D:
            switch (g_current_bank) {
                case 1: func_888D_b1(); break;
                case 0: func_888D_b0(); break;
                case 5: func_888D_b5(); break;
                case 6: func_888D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C2E:
            func_8C2E_b1(); break;
        case 0x8C53:
            func_8C53_b1(); break;
        case 0x8C50:
            switch (g_current_bank) {
                case 1: func_8C50_b1(); break;
                case 5: func_8C50_b5(); break;
                case 6: func_8C50_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C40:
            func_8C40_b1(); break;
        case 0xC000:
            func_C000(); break;
        case 0x8AF1:
            func_8AF1_b1(); break;
        case 0x8C54:
            func_8C54_b1(); break;
        case 0x8CC5:
            switch (g_current_bank) {
                case 1: func_8CC5_b1(); break;
                case 5: func_8CC5_b5(); break;
                case 6: func_8CC5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CAD:
            switch (g_current_bank) {
                case 1: func_8CAD_b1(); break;
                case 5: func_8CAD_b5(); break;
                case 0: func_8CAD_b0(); break;
                case 4: func_8CAD_b4(); break;
                case 6: func_8CAD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8FFF:
            func_8FFF_b1(); break;
        case 0x90CA:
            func_90CA_b1(); break;
        case 0x93C4:
            func_93C4_b1(); break;
        case 0xC00C:
            func_C00C(); break;
        case 0x9158:
            func_9158_b1(); break;
        case 0xC003:
            func_C003(); break;
        case 0x90FA:
            func_90FA_b1(); break;
        case 0x91DF:
            func_91DF_b1(); break;
        case 0x91DB:
            switch (g_current_bank) {
                case 1: func_91DB_b1(); break;
                case 3: func_91DB_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x925B:
            func_925B_b1(); break;
        case 0x921D:
            func_921D_b1(); break;
        case 0xC01E:
            func_C01E(); break;
        case 0xC021:
            func_C021(); break;
        case 0xC02D:
            func_C02D(); break;
        case 0xC030:
            func_C030(); break;
        case 0xC012:
            func_C012(); break;
        case 0x93C9:
            func_93C9_b1(); break;
        case 0x944D:
            func_944D_b1(); break;
        case 0x9452:
            func_9452_b1(); break;
        case 0x966B:
            func_966B_b1(); break;
        case 0xC01B:
            func_C01B(); break;
        case 0x9643:
            func_9643_b1(); break;
        case 0x9574:
            func_9574_b1(); break;
        case 0x9562:
            func_9562_b1(); break;
        case 0x9776:
            func_9776_b1(); break;
        case 0xA4BC:
            func_A4BC_b1(); break;
        case 0xA585:
            switch (g_current_bank) {
                case 1: func_A585_b1(); break;
                case 3: func_A585_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5E7:
            func_A5E7_b1(); break;
        case 0xA50B:
            switch (g_current_bank) {
                case 1: func_A50B_b1(); break;
                case 4: func_A50B_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA51A:
            switch (g_current_bank) {
                case 1: func_A51A_b1(); break;
                case 3: func_A51A_b3(); break;
                case 5: func_A51A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5AD:
            switch (g_current_bank) {
                case 1: func_A5AD_b1(); break;
                case 5: func_A5AD_b5(); break;
                case 3: func_A5AD_b3(); break;
                case 4: func_A5AD_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA50E:
            switch (g_current_bank) {
                case 1: func_A50E_b1(); break;
                case 4: func_A50E_b4(); break;
                case 5: func_A50E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5C7:
            switch (g_current_bank) {
                case 1: func_A5C7_b1(); break;
                case 5: func_A5C7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA560:
            switch (g_current_bank) {
                case 1: func_A560_b1(); break;
                case 3: func_A560_b3(); break;
                case 5: func_A560_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA50D:
            func_A50D_b1(); break;
        case 0xA52C:
            switch (g_current_bank) {
                case 1: func_A52C_b1(); break;
                case 5: func_A52C_b5(); break;
                case 4: func_A52C_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA505:
            switch (g_current_bank) {
                case 1: func_A505_b1(); break;
                case 4: func_A505_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA51D:
            switch (g_current_bank) {
                case 1: func_A51D_b1(); break;
                case 3: func_A51D_b3(); break;
                case 4: func_A51D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA503:
            switch (g_current_bank) {
                case 1: func_A503_b1(); break;
                case 5: func_A503_b5(); break;
                case 3: func_A503_b3(); break;
                case 0: func_A503_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA536:
            switch (g_current_bank) {
                case 1: func_A536_b1(); break;
                case 5: func_A536_b5(); break;
                case 3: func_A536_b3(); break;
                case 4: func_A536_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5EC:
            switch (g_current_bank) {
                case 1: func_A5EC_b1(); break;
                case 5: func_A5EC_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5D3:
            switch (g_current_bank) {
                case 1: func_A5D3_b1(); break;
                case 5: func_A5D3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5F4:
            switch (g_current_bank) {
                case 1: func_A5F4_b1(); break;
                case 4: func_A5F4_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5DD:
            switch (g_current_bank) {
                case 1: func_A5DD_b1(); break;
                case 4: func_A5DD_b4(); break;
                case 5: func_A5DD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5E4:
            func_A5E4_b1(); break;
        case 0xA51E:
            switch (g_current_bank) {
                case 1: func_A51E_b1(); break;
                case 5: func_A51E_b5(); break;
                case 3: func_A51E_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA517:
            switch (g_current_bank) {
                case 1: func_A517_b1(); break;
                case 4: func_A517_b4(); break;
                case 5: func_A517_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA597:
            switch (g_current_bank) {
                case 1: func_A597_b1(); break;
                case 3: func_A597_b3(); break;
                case 0: func_A597_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4F1:
            switch (g_current_bank) {
                case 1: func_A4F1_b1(); break;
                case 5: func_A4F1_b5(); break;
                case 2: func_A4F1_b2(); break;
                case 0: func_A4F1_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5F2:
            switch (g_current_bank) {
                case 1: func_A5F2_b1(); break;
                case 4: func_A5F2_b4(); break;
                case 5: func_A5F2_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5F3:
            func_A5F3_b1(); break;
        case 0xA548:
            switch (g_current_bank) {
                case 1: func_A548_b1(); break;
                case 5: func_A548_b5(); break;
                case 3: func_A548_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA59A:
            switch (g_current_bank) {
                case 1: func_A59A_b1(); break;
                case 4: func_A59A_b4(); break;
                case 3: func_A59A_b3(); break;
                case 5: func_A59A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5CC:
            switch (g_current_bank) {
                case 1: func_A5CC_b1(); break;
                case 4: func_A5CC_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4F7:
            switch (g_current_bank) {
                case 1: func_A4F7_b1(); break;
                case 4: func_A4F7_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA501:
            switch (g_current_bank) {
                case 1: func_A501_b1(); break;
                case 2: func_A501_b2(); break;
                case 3: func_A501_b3(); break;
                case 4: func_A501_b4(); break;
                case 5: func_A501_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA507:
            switch (g_current_bank) {
                case 1: func_A507_b1(); break;
                case 4: func_A507_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA556:
            func_A556_b1(); break;
        case 0xA5D5:
            func_A5D5_b1(); break;
        case 0xA5C0:
            func_A5C0_b1(); break;
        case 0x84BC:
            func_84BC_b1(); break;
        case 0x9698:
            func_9698_b1(); break;
        case 0x947E:
            switch (g_current_bank) {
                case 1: func_947E_b1(); break;
                case 5: func_947E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA0C:
            func_AA0C_b1(); break;
        case 0x8A0C:
            func_8A0C_b1(); break;
        case 0xA8CD:
            func_A8CD_b1(); break;
        case 0xA99F:
            switch (g_current_bank) {
                case 1: func_A99F_b1(); break;
                case 2: func_A99F_b2(); break;
                case 3: func_A99F_b3(); break;
                case 4: func_A99F_b4(); break;
                case 5: func_A99F_b5(); break;
                case 6: func_A99F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA903:
            switch (g_current_bank) {
                case 7: func_E903(); break;
                case 1: func_A903_b1(); break;
                case 3: func_A903_b3(); break;
                case 5: func_A903_b5(); break;
                case 6: func_A903_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA907:
            switch (g_current_bank) {
                case 1: func_A907_b1(); break;
                case 5: func_A907_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA901:
            switch (g_current_bank) {
                case 1: func_A901_b1(); break;
                case 3: func_A901_b3(); break;
                case 6: func_A901_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA960:
            switch (g_current_bank) {
                case 1: func_A960_b1(); break;
                case 3: func_A960_b3(); break;
                case 4: func_A960_b4(); break;
                case 6: func_A960_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA920:
            switch (g_current_bank) {
                case 7: func_E920(); break;
                case 1: func_A920_b1(); break;
                case 3: func_A920_b3(); break;
                case 0: func_A920_b0(); break;
                case 4: func_A920_b4(); break;
                case 5: func_A920_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA910:
            switch (g_current_bank) {
                case 1: func_A910_b1(); break;
                case 4: func_A910_b4(); break;
                case 5: func_A910_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA91C:
            switch (g_current_bank) {
                case 1: func_A91C_b1(); break;
                case 3: func_A91C_b3(); break;
                case 4: func_A91C_b4(); break;
                case 5: func_A91C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA90D:
            switch (g_current_bank) {
                case 1: func_A90D_b1(); break;
                case 4: func_A90D_b4(); break;
                case 5: func_A90D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA922:
            switch (g_current_bank) {
                case 1: func_A922_b1(); break;
                case 3: func_A922_b3(); break;
                case 5: func_A922_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA915:
            switch (g_current_bank) {
                case 1: func_A915_b1(); break;
                case 4: func_A915_b4(); break;
                case 5: func_A915_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA913:
            switch (g_current_bank) {
                case 1: func_A913_b1(); break;
                case 4: func_A913_b4(); break;
                case 5: func_A913_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA90B:
            switch (g_current_bank) {
                case 1: func_A90B_b1(); break;
                case 4: func_A90B_b4(); break;
                case 5: func_A90B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA900:
            switch (g_current_bank) {
                case 1: func_A900_b1(); break;
                case 3: func_A900_b3(); break;
                case 4: func_A900_b4(); break;
                case 5: func_A900_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA931:
            switch (g_current_bank) {
                case 1: func_A931_b1(); break;
                case 5: func_A931_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA999:
            switch (g_current_bank) {
                case 1: func_A999_b1(); break;
                case 3: func_A999_b3(); break;
                case 4: func_A999_b4(); break;
                case 5: func_A999_b5(); break;
                case 6: func_A999_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA985:
            switch (g_current_bank) {
                case 1: func_A985_b1(); break;
                case 3: func_A985_b3(); break;
                case 4: func_A985_b4(); break;
                case 5: func_A985_b5(); break;
                case 6: func_A985_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA980:
            switch (g_current_bank) {
                case 1: func_A980_b1(); break;
                case 3: func_A980_b3(); break;
                case 6: func_A980_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA906:
            switch (g_current_bank) {
                case 7: func_E906(); break;
                case 1: func_A906_b1(); break;
                case 4: func_A906_b4(); break;
                case 5: func_A906_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA96C:
            switch (g_current_bank) {
                case 1: func_A96C_b1(); break;
                case 3: func_A96C_b3(); break;
                case 5: func_A96C_b5(); break;
                case 6: func_A96C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA92D:
            switch (g_current_bank) {
                case 1: func_A92D_b1(); break;
                case 5: func_A92D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8E2:
            switch (g_current_bank) {
                case 1: func_A8E2_b1(); break;
                case 3: func_A8E2_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x88CD:
            func_88CD_b1(); break;
        case 0x9CC5:
            func_9CC5_b1(); break;
        case 0xA34E:
            func_A34E_b1(); break;
        case 0xA38D:
            switch (g_current_bank) {
                case 7: func_E38D(); break;
                case 1: func_A38D_b1(); break;
                case 5: func_A38D_b5(); break;
                case 4: func_A38D_b4(); break;
                case 6: func_A38D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3D0:
            switch (g_current_bank) {
                case 7: func_E3D0(); break;
                case 1: func_A3D0_b1(); break;
                case 5: func_A3D0_b5(); break;
                case 4: func_A3D0_b4(); break;
                case 6: func_A3D0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA448:
            switch (g_current_bank) {
                case 1: func_A448_b1(); break;
                case 5: func_A448_b5(); break;
                case 4: func_A448_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA416:
            switch (g_current_bank) {
                case 1: func_A416_b1(); break;
                case 5: func_A416_b5(); break;
                case 6: func_A416_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA463:
            switch (g_current_bank) {
                case 1: func_A463_b1(); break;
                case 4: func_A463_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA46C:
            switch (g_current_bank) {
                case 1: func_A46C_b1(); break;
                case 2: func_A46C_b2(); break;
                case 4: func_A46C_b4(); break;
                case 5: func_A46C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3C0:
            func_A3C0_b1(); break;
        case 0x834E:
            switch (g_current_bank) {
                case 1: func_834E_b1(); break;
                case 6: func_834E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
        case 0x9EE7:
            func_9EE7_b1(); break;
        case 0x9F3A:
            func_9F3A_b1(); break;
        case 0x9A56:
            func_9A56_b1(); break;
        case 0xC033:
            func_C033(); break;
        case 0xC036:
            func_C036(); break;
        case 0x9A94:
            func_9A94_b1(); break;
        case 0x9C78:
            func_9C78_b1(); break;
        case 0x9BA7:
            func_9BA7_b1(); break;
        case 0x9B9E:
            func_9B9E_b1(); break;
        case 0xA782:
            func_A782_b1(); break;
        case 0xA820:
            switch (g_current_bank) {
                case 7: func_E820(); break;
                case 1: func_A820_b1(); break;
                case 4: func_A820_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA80A:
            func_A80A_b1(); break;
        case 0xA8A1:
            switch (g_current_bank) {
                case 1: func_A8A1_b1(); break;
                case 6: func_A8A1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA800:
            func_A800_b1(); break;
        case 0xA785:
            switch (g_current_bank) {
                case 7: func_E785(); break;
                case 1: func_A785_b1(); break;
                case 4: func_A785_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA804:
            func_A804_b1(); break;
        case 0xA803:
            func_A803_b1(); break;
        case 0xA81D:
            switch (g_current_bank) {
                case 1: func_A81D_b1(); break;
                case 4: func_A81D_b4(); break;
                case 6: func_A81D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8CC:
            switch (g_current_bank) {
                case 1: func_A8CC_b1(); break;
                case 3: func_A8CC_b3(); break;
                case 5: func_A8CC_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA860:
            switch (g_current_bank) {
                case 1: func_A860_b1(); break;
                case 4: func_A860_b4(); break;
                case 5: func_A860_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA797:
            func_A797_b1(); break;
        case 0x8782:
            func_8782_b1(); break;
        case 0xA2E3:
            func_A2E3_b1(); break;
        case 0xA2F1:
            func_A2F1_b1(); break;
        case 0x82E3:
            func_82E3_b1(); break;
        case 0x97E5:
            func_97E5_b1(); break;
        case 0x9AC4:
            func_9AC4_b1(); break;
        case 0x9CA0:
            func_9CA0_b1(); break;
        case 0xA5F6:
            switch (g_current_bank) {
                case 1: func_A5F6_b1(); break;
                case 4: func_A5F6_b4(); break;
                case 2: func_A5F6_b2(); break;
                case 3: func_A5F6_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5F8:
            switch (g_current_bank) {
                case 1: func_A5F8_b1(); break;
                case 2: func_A5F8_b2(); break;
                case 3: func_A5F8_b3(); break;
                case 5: func_A5F8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA685:
            switch (g_current_bank) {
                case 1: func_A685_b1(); break;
                case 5: func_A685_b5(); break;
                case 4: func_A685_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA61D:
            switch (g_current_bank) {
                case 7: func_E61D(); break;
                case 1: func_A61D_b1(); break;
                case 3: func_A61D_b3(); break;
                case 5: func_A61D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6F4:
            func_A6F4_b1(); break;
        case 0xA6FA:
            func_A6FA_b1(); break;
        case 0xA675:
            switch (g_current_bank) {
                case 1: func_A675_b1(); break;
                case 5: func_A675_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85F6:
            switch (g_current_bank) {
                case 1: func_85F6_b1(); break;
                case 6: func_85F6_b6(); break;
                case 2: func_85F6_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
        case 0x9EB8:
            func_9EB8_b1(); break;
        case 0x9F6A:
            func_9F6A_b1(); break;
        case 0x9A77:
            func_9A77_b1(); break;
        case 0x9F16:
            func_9F16_b1(); break;
        case 0xC02A:
            func_C02A(); break;
        case 0x9F1C:
            func_9F1C_b1(); break;
        case 0x9FBF:
            func_9FBF_b1(); break;
        case 0x9FA4:
            func_9FA4_b1(); break;
        case 0x9FCA:
            func_9FCA_b1(); break;
        case 0xC027:
            func_C027(); break;
        case 0x9FE4:
            func_9FE4_b1(); break;
        case 0xA182:
            func_A182_b1(); break;
        case 0xA185:
            switch (g_current_bank) {
                case 7: func_E185(); break;
                case 1: func_A185_b1(); break;
                case 3: func_A185_b3(); break;
                case 5: func_A185_b5(); break;
                case 6: func_A185_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1A8:
            func_A1A8_b1(); break;
        case 0xA24A:
            func_A24A_b1(); break;
        case 0xA220:
            switch (g_current_bank) {
                case 1: func_A220_b1(); break;
                case 3: func_A220_b3(); break;
                case 6: func_A220_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA213:
            switch (g_current_bank) {
                case 1: func_A213_b1(); break;
                case 5: func_A213_b5(); break;
                case 3: func_A213_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA21D:
            switch (g_current_bank) {
                case 1: func_A21D_b1(); break;
                case 3: func_A21D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA224:
            switch (g_current_bank) {
                case 1: func_A224_b1(); break;
                case 5: func_A224_b5(); break;
                case 3: func_A224_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA16E:
            switch (g_current_bank) {
                case 1: func_A16E_b1(); break;
                case 4: func_A16E_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA099:
            func_A099_b1(); break;
        case 0x8C70:
            func_8C70_b3(); break;
        case 0x8D79:
            func_8D79_b3(); break;
        case 0x8D7C:
            switch (g_current_bank) {
                case 3: func_8D7C_b3(); break;
                case 2: func_8D7C_b2(); break;
                case 4: func_8D7C_b4(); break;
                case 6: func_8D7C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D29:
            func_8D29_b3(); break;
        case 0x8CF9:
            func_8CF9_b3(); break;
        case 0x8EAE:
            switch (g_current_bank) {
                case 3: func_8EAE_b3(); break;
                case 4: func_8EAE_b4(); break;
                case 6: func_8EAE_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8EF0:
            switch (g_current_bank) {
                case 7: func_CEF0(); break;
                case 3: func_8EF0_b3(); break;
                case 5: func_8EF0_b5(); break;
                case 1: func_8EF0_b1(); break;
                case 4: func_8EF0_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8E38:
            func_8E38_b3(); break;
        case 0x8D89:
            func_8D89_b3(); break;
        case 0x8DB4:
            switch (g_current_bank) {
                case 3: func_8DB4_b3(); break;
                case 1: func_8DB4_b1(); break;
                case 6: func_8DB4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DA5:
            switch (g_current_bank) {
                case 7: func_CDA5(); break;
                case 3: func_8DA5_b3(); break;
                case 1: func_8DA5_b1(); break;
                case 4: func_8DA5_b4(); break;
                case 5: func_8DA5_b5(); break;
                case 6: func_8DA5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D97:
            switch (g_current_bank) {
                case 3: func_8D97_b3(); break;
                case 5: func_8D97_b5(); break;
                case 6: func_8D97_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DE4:
            switch (g_current_bank) {
                case 3: func_8DE4_b3(); break;
                case 5: func_8DE4_b5(); break;
                case 4: func_8DE4_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DAD:
            switch (g_current_bank) {
                case 7: func_CDAD(); break;
                case 3: func_8DAD_b3(); break;
                case 1: func_8DAD_b1(); break;
                case 4: func_8DAD_b4(); break;
                case 5: func_8DAD_b5(); break;
                case 6: func_8DAD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DD7:
            switch (g_current_bank) {
                case 3: func_8DD7_b3(); break;
                case 5: func_8DD7_b5(); break;
                case 0: func_8DD7_b0(); break;
                case 4: func_8DD7_b4(); break;
                case 6: func_8DD7_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DE1:
            switch (g_current_bank) {
                case 3: func_8DE1_b3(); break;
                case 1: func_8DE1_b1(); break;
                case 2: func_8DE1_b2(); break;
                case 4: func_8DE1_b4(); break;
                case 5: func_8DE1_b5(); break;
                case 6: func_8DE1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DC0:
            switch (g_current_bank) {
                case 7: func_CDC0(); break;
                case 3: func_8DC0_b3(); break;
                case 5: func_8DC0_b5(); break;
                case 4: func_8DC0_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DE5:
            func_8DE5_b3(); break;
        case 0x8E01:
            switch (g_current_bank) {
                case 3: func_8E01_b3(); break;
                case 5: func_8E01_b5(); break;
                case 6: func_8E01_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DFE:
            switch (g_current_bank) {
                case 3: func_8DFE_b3(); break;
                case 1: func_8DFE_b1(); break;
                case 5: func_8DFE_b5(); break;
                case 6: func_8DFE_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DEB:
            switch (g_current_bank) {
                case 3: func_8DEB_b3(); break;
                case 5: func_8DEB_b5(); break;
                case 4: func_8DEB_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9390:
            func_9390_b3(); break;
        case 0x93A5:
            switch (g_current_bank) {
                case 3: func_93A5_b3(); break;
                case 4: func_93A5_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2A0:
            func_A2A0_b4(); break;
        case 0xBB24:
            func_BB24_b4(); break;
        case 0xBB43:
            func_BB43_b4(); break;
        case 0xBB44:
            func_BB44_b4(); break;
        case 0xA30A:
            func_A30A_b4(); break;
        case 0x8B88:
            switch (g_current_bank) {
                case 4: func_8B88_b4(); break;
                case 6: func_8B88_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8BD7:
            func_8BD7_b4(); break;
        case 0x9FC1:
            func_9FC1_b4(); break;
        case 0x9FE0:
            func_9FE0_b4(); break;
        case 0x9FE1:
            func_9FE1_b4(); break;
        case 0x814B:
            switch (g_current_bank) {
                case 5: func_814B_b5(); break;
                case 0: func_814B_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C4C:
            switch (g_current_bank) {
                case 4: func_8C4C_b4(); break;
                case 3: func_8C4C_b3(); break;
                case 6: func_8C4C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x852E:
            func_852E_b4(); break;
        case 0x8520:
            switch (g_current_bank) {
                case 7: func_C520(); break;
                case 4: func_8520_b4(); break;
                case 1: func_8520_b1(); break;
                case 5: func_8520_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x900E:
            func_900E_b3(); break;
        case 0x90BE:
            func_90BE_b3(); break;
        case 0x90CB:
            switch (g_current_bank) {
                case 3: func_90CB_b3(); break;
                case 6: func_90CB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
        case 0x844F:
            func_844F_b6(); break;
        case 0x8F09:
            func_8F09_b6(); break;
        case 0xB85E:
            func_B85E_b5(); break;
        case 0xB852:
            func_B852_b5(); break;
        case 0x858E:
            switch (g_current_bank) {
                case 0: func_858E_b0(); break;
                case 4: func_858E_b4(); break;
                case 1: func_858E_b1(); break;
                case 6: func_858E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82A4:
            func_82A4_b6(); break;
        case 0x82C1:
            func_82C1_b6(); break;
        case 0x8382:
            switch (g_current_bank) {
                case 6: func_8382_b6(); break;
                case 3: func_8382_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9FB0:
            func_9FB0_b6(); break;
        case 0x9FC0:
            func_9FC0_b6(); break;
        case 0xA002:
            switch (g_current_bank) {
                case 7: func_E002(); break;
                case 6: func_A002_b6(); break;
                case 4: func_A002_b4(); break;
                case 5: func_A002_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x982D:
            func_982D_b3(); break;
        case 0xDDE3:
            func_DDE3(); break;
        case 0xDDF9:
            func_DDF9(); break;
        case 0xEE55:
            func_EE55(); break;
        case 0xEE56:
            func_EE56(); break;
        case 0xDD6B:
            func_DD6B(); break;
        case 0xDD8D:
            func_DD8D(); break;
        case 0xEE31:
            func_EE31(); break;
        case 0xEE8B:
            func_EE8B(); break;
        case 0xEE94:
            func_EE94(); break;
        case 0xEE95:
            func_EE95(); break;
        case 0xEE96:
            func_EE96(); break;
        case 0xDD90:
            func_DD90(); break;
        case 0xDDAD:
            func_DDAD(); break;
        case 0xDDA1:
            func_DDA1(); break;
        case 0xDDAB:
            func_DDAB(); break;
        case 0xDDB0:
            func_DDB0(); break;
        case 0xEE64:
            func_EE64(); break;
        case 0xEF96:
            func_EF96(); break;
        case 0xF001:
            func_F001(); break;
        case 0xF004:
            func_F004(); break;
        case 0xF013:
            func_F013(); break;
        case 0xF014:
            func_F014(); break;
        case 0xF015:
            func_F015(); break;
        case 0xF01A:
            func_F01A(); break;
        case 0xF00E:
            func_F00E(); break;
        case 0xF016:
            func_F016(); break;
        case 0xF01D:
            func_F01D(); break;
        case 0xF010:
            func_F010(); break;
        case 0xF020:
            func_F020(); break;
        case 0xF019:
            func_F019(); break;
        case 0xEFAD:
            func_EFAD(); break;
        case 0xEFD0:
            func_EFD0(); break;
        case 0xF017:
            func_F017(); break;
        case 0xF00A:
            func_F00A(); break;
        case 0xEFA9:
            func_EFA9(); break;
        case 0xEFEE:
            func_EFEE(); break;
        case 0xF00C:
            func_F00C(); break;
        case 0xEFDB:
            func_EFDB(); break;
        case 0xEFE0:
            func_EFE0(); break;
        case 0xEFF3:
            func_EFF3(); break;
        case 0xF03B:
            func_F03B(); break;
        case 0xF0A9:
            func_F0A9(); break;
        case 0xF0B6:
            func_F0B6(); break;
        case 0xF091:
            func_F091(); break;
        case 0xF04C:
            func_F04C(); break;
        case 0xF099:
            func_F099(); break;
        case 0xF068:
            func_F068(); break;
        case 0xF0B9:
            func_F0B9(); break;
        case 0xF0B3:
            func_F0B3(); break;
        case 0xF07C:
            func_F07C(); break;
        case 0xF0A0:
            func_F0A0(); break;
        case 0xF0C9:
            func_F0C9(); break;
        case 0xF04A:
            func_F04A(); break;
        case 0xF0C0:
            func_F0C0(); break;
        case 0xF0A5:
            func_F0A5(); break;
        case 0xF0A7:
            func_F0A7(); break;
        case 0xF097:
            func_F097(); break;
        case 0x889C:
            func_889C_b3(); break;
        case 0x8E6A:
            switch (g_current_bank) {
                case 1: func_8E6A_b1(); break;
                case 6: func_8E6A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D4C:
            switch (g_current_bank) {
                case 1: func_8D4C_b1(); break;
                case 4: func_8D4C_b4(); break;
                case 5: func_8D4C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DFF:
            switch (g_current_bank) {
                case 1: func_8DFF_b1(); break;
                case 5: func_8DFF_b5(); break;
                case 3: func_8DFF_b3(); break;
                case 6: func_8DFF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DE8:
            switch (g_current_bank) {
                case 1: func_8DE8_b1(); break;
                case 4: func_8DE8_b4(); break;
                case 6: func_8DE8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D60:
            switch (g_current_bank) {
                case 1: func_8D60_b1(); break;
                case 5: func_8D60_b5(); break;
                case 3: func_8D60_b3(); break;
                case 4: func_8D60_b4(); break;
                case 6: func_8D60_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DFB:
            switch (g_current_bank) {
                case 1: func_8DFB_b1(); break;
                case 5: func_8DFB_b5(); break;
                case 3: func_8DFB_b3(); break;
                case 4: func_8DFB_b4(); break;
                case 6: func_8DFB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D83:
            switch (g_current_bank) {
                case 1: func_8D83_b1(); break;
                case 5: func_8D83_b5(); break;
                case 3: func_8D83_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DE0:
            switch (g_current_bank) {
                case 1: func_8DE0_b1(); break;
                case 5: func_8DE0_b5(); break;
                case 6: func_8DE0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8E4C:
            switch (g_current_bank) {
                case 7: func_CE4C(); break;
                case 1: func_8E4C_b1(); break;
                case 3: func_8E4C_b3(); break;
                case 5: func_8E4C_b5(); break;
                case 6: func_8E4C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D37:
            switch (g_current_bank) {
                case 1: func_8D37_b1(); break;
                case 4: func_8D37_b4(); break;
                case 5: func_8D37_b5(); break;
                case 6: func_8D37_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DA8:
            switch (g_current_bank) {
                case 1: func_8DA8_b1(); break;
                case 3: func_8DA8_b3(); break;
                case 4: func_8DA8_b4(); break;
                case 5: func_8DA8_b5(); break;
                case 6: func_8DA8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D57:
            switch (g_current_bank) {
                case 1: func_8D57_b1(); break;
                case 5: func_8D57_b5(); break;
                case 4: func_8D57_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D68:
            switch (g_current_bank) {
                case 1: func_8D68_b1(); break;
                case 5: func_8D68_b5(); break;
                case 6: func_8D68_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D3D:
            switch (g_current_bank) {
                case 1: func_8D3D_b1(); break;
                case 4: func_8D3D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAFB8:
            func_AFB8_b3(); break;
        case 0xC072:
            func_C072(); break;
        case 0xB20D:
            func_B20D_b3(); break;
        case 0xB219:
            func_B219_b3(); break;
        case 0xB0C9:
            switch (g_current_bank) {
                case 7: func_F0C9(); break;
                case 3: func_B0C9_b3(); break;
                case 0: func_B0C9_b0(); break;
                case 1: func_B0C9_b1(); break;
                case 4: func_B0C9_b4(); break;
                case 5: func_B0C9_b5(); break;
                case 6: func_B0C9_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x88B4:
            func_88B4_b3(); break;
        case 0x88C8:
            switch (g_current_bank) {
                case 3: func_88C8_b3(); break;
                case 5: func_88C8_b5(); break;
                case 1: func_88C8_b1(); break;
                case 6: func_88C8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8B4:
            func_A8B4_b3(); break;
        case 0x88CC:
            switch (g_current_bank) {
                case 7: func_C8CC(); break;
                case 3: func_88CC_b3(); break;
                case 6: func_88CC_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB168:
            func_B168_b3(); break;
        case 0xB10E:
            switch (g_current_bank) {
                case 3: func_B10E_b3(); break;
                case 4: func_B10E_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB185:
            func_B185_b3(); break;
        case 0x9223:
            func_9223_b3(); break;
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
        case 0x8920:
            func_8920_b3(); break;
        case 0x8A66:
            func_8A66_b3(); break;
        case 0x8941:
            func_8941_b3(); break;
        case 0x898D:
            switch (g_current_bank) {
                case 3: func_898D_b3(); break;
                case 5: func_898D_b5(); break;
                case 6: func_898D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
        case 0x9209:
            func_9209_b4(); break;
        case 0x9203:
            func_9203_b4(); break;
        case 0x818A:
            switch (g_current_bank) {
                case 4: func_818A_b4(); break;
                case 0: func_818A_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAF11:
            func_AF11_b1(); break;
        case 0xAF70:
            func_AF70_b1(); break;
        case 0xAFDC:
            func_AFDC_b1(); break;
        case 0x8733:
            func_8733_b5(); break;
        case 0x8786:
            func_8786_b5(); break;
        case 0x86EA:
            func_86EA_b5(); break;
        case 0x8732:
            switch (g_current_bank) {
                case 5: func_8732_b5(); break;
                case 0: func_8732_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86FF:
            switch (g_current_bank) {
                case 5: func_86FF_b5(); break;
                case 0: func_86FF_b0(); break;
                case 6: func_86FF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86EF:
            func_86EF_b5(); break;
        case 0x88B8:
            func_88B8_b5(); break;
        case 0x890B:
            switch (g_current_bank) {
                case 7: func_C90B(); break;
                case 5: func_890B_b5(); break;
                case 6: func_890B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x88BD:
            func_88BD_b5(); break;
        case 0x886F:
            func_886F_b5(); break;
        case 0x88B7:
            func_88B7_b5(); break;
        case 0xAF4F:
            func_AF4F_b0(); break;
        case 0xAF10:
            func_AF10_b0(); break;
        case 0xB3C6:
            switch (g_current_bank) {
                case 0: func_B3C6_b0(); break;
                case 5: func_B3C6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3C9:
            switch (g_current_bank) {
                case 0: func_B3C9_b0(); break;
                case 3: func_B3C9_b3(); break;
                case 4: func_B3C9_b4(); break;
                case 5: func_B3C9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3DF:
            func_B3DF_b0(); break;
        case 0xB07A:
            func_B07A_b0(); break;
        case 0xB002:
            switch (g_current_bank) {
                case 7: func_F002(); break;
                case 0: func_B002_b0(); break;
                case 1: func_B002_b1(); break;
                case 3: func_B002_b3(); break;
                case 5: func_B002_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB020:
            switch (g_current_bank) {
                case 7: func_F020(); break;
                case 0: func_B020_b0(); break;
                case 3: func_B020_b3(); break;
                case 5: func_B020_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB005:
            switch (g_current_bank) {
                case 7: func_F005(); break;
                case 0: func_B005_b0(); break;
                case 1: func_B005_b1(); break;
                case 3: func_B005_b3(); break;
                case 4: func_B005_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB07B:
            func_B07B_b0(); break;
        case 0xB0AA:
            func_B0AA_b0(); break;
        case 0xB0ED:
            func_B0ED_b0(); break;
        case 0xB11F:
            switch (g_current_bank) {
                case 0: func_B11F_b0(); break;
                case 3: func_B11F_b3(); break;
                case 1: func_B11F_b1(); break;
                case 4: func_B11F_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB182:
            func_B182_b0(); break;
        case 0xB1C8:
            switch (g_current_bank) {
                case 0: func_B1C8_b0(); break;
                case 4: func_B1C8_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB188:
            func_B188_b0(); break;
        case 0xB1F3:
            func_B1F3_b0(); break;
        case 0xB239:
            func_B239_b0(); break;
        case 0xB29D:
            func_B29D_b0(); break;
        case 0xB342:
            func_B342_b0(); break;
        case 0xB385:
            switch (g_current_bank) {
                case 0: func_B385_b0(); break;
                case 4: func_B385_b4(); break;
                case 5: func_B385_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81B7:
            func_81B7_b0(); break;
        case 0x81B6:
            func_81B6_b4(); break;
        case 0x81C8:
            switch (g_current_bank) {
                case 4: func_81C8_b4(); break;
                case 5: func_81C8_b5(); break;
                case 6: func_81C8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81B4:
            func_81B4_b0(); break;
        case 0x9195:
            func_9195_b5(); break;
        case 0x8AE8:
            func_8AE8_b3(); break;
        case 0x8B2D:
            func_8B2D_b3(); break;
        case 0x8B45:
            switch (g_current_bank) {
                case 3: func_8B45_b3(); break;
                case 6: func_8B45_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8BA9:
            func_8BA9_b3(); break;
        case 0x81D9:
            func_81D9_b2(); break;
        case 0x98B5:
            switch (g_current_bank) {
                case 3: func_98B5_b3(); break;
                case 1: func_98B5_b1(); break;
                case 5: func_98B5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A1D:
            func_9A1D_b3(); break;
        case 0x988B:
            func_988B_b3(); break;
        case 0x9989:
            func_9989_b3(); break;
        case 0x9994:
            switch (g_current_bank) {
                case 3: func_9994_b3(); break;
                case 4: func_9994_b4(); break;
                case 1: func_9994_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99A1:
            func_99A1_b3(); break;
        case 0x999B:
            func_999B_b3(); break;
        case 0x9593:
            func_9593_b3(); break;
        case 0x9634:
            func_9634_b3(); break;
        case 0x96BD:
            func_96BD_b3(); break;
        case 0x9685:
            switch (g_current_bank) {
                case 3: func_9685_b3(); break;
                case 5: func_9685_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x96E1:
            func_96E1_b3(); break;
        case 0x957F:
            func_957F_b3(); break;
        case 0x9786:
            func_9786_b3(); break;
        case 0x9796:
            func_9796_b3(); break;
        case 0xC063:
            func_C063(); break;
        case 0x9D7C:
            func_9D7C_b6(); break;
        case 0x9D8A:
            func_9D8A_b6(); break;
        case 0x9CAF:
            func_9CAF_b6(); break;
        case 0x9D71:
            func_9D71_b6(); break;
        case 0x9488:
            func_9488_b5(); break;
        case 0x94A5:
            switch (g_current_bank) {
                case 5: func_94A5_b5(); break;
                case 3: func_94A5_b3(); break;
                case 6: func_94A5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x94A0:
            func_94A0_b5(); break;
        case 0x949A:
            func_949A_b5(); break;
        case 0xA01B:
            func_A01B_b1(); break;
        case 0x8A1D:
            func_8A1D_b1(); break;
        case 0x8AAD:
            switch (g_current_bank) {
                case 1: func_8AAD_b1(); break;
                case 5: func_8AAD_b5(); break;
                case 6: func_8AAD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A4C:
            switch (g_current_bank) {
                case 1: func_8A4C_b1(); break;
                case 5: func_8A4C_b5(); break;
                case 3: func_8A4C_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8AC8:
            switch (g_current_bank) {
                case 7: func_CAC8(); break;
                case 1: func_8AC8_b1(); break;
                case 5: func_8AC8_b5(); break;
                case 3: func_8AC8_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9901:
            func_9901_b3(); break;
        case 0x9926:
            switch (g_current_bank) {
                case 3: func_9926_b3(); break;
                case 5: func_9926_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9908:
            switch (g_current_bank) {
                case 3: func_9908_b3(); break;
                case 1: func_9908_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x991A:
            switch (g_current_bank) {
                case 3: func_991A_b3(); break;
                case 5: func_991A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A29:
            func_9A29_b3(); break;
        case 0x99D1:
            func_99D1_b3(); break;
        case 0x85A0:
            func_85A0_b4(); break;
        case 0x85AD:
            switch (g_current_bank) {
                case 4: func_85AD_b4(); break;
                case 1: func_85AD_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85AA:
            switch (g_current_bank) {
                case 4: func_85AA_b4(); break;
                case 1: func_85AA_b1(); break;
                case 6: func_85AA_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85C8:
            switch (g_current_bank) {
                case 7: func_C5C8(); break;
                case 4: func_85C8_b4(); break;
                case 1: func_85C8_b1(); break;
                case 5: func_85C8_b5(); break;
                case 6: func_85C8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85D4:
            switch (g_current_bank) {
                case 4: func_85D4_b4(); break;
                case 1: func_85D4_b1(); break;
                case 3: func_85D4_b3(); break;
                case 6: func_85D4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85C0:
            switch (g_current_bank) {
                case 7: func_C5C0(); break;
                case 4: func_85C0_b4(); break;
                case 5: func_85C0_b5(); break;
                case 6: func_85C0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85E8:
            switch (g_current_bank) {
                case 4: func_85E8_b4(); break;
                case 2: func_85E8_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85EB:
            switch (g_current_bank) {
                case 4: func_85EB_b4(); break;
                case 5: func_85EB_b5(); break;
                case 2: func_85EB_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85F3:
            switch (g_current_bank) {
                case 4: func_85F3_b4(); break;
                case 5: func_85F3_b5(); break;
                case 1: func_85F3_b1(); break;
                case 2: func_85F3_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85E6:
            switch (g_current_bank) {
                case 4: func_85E6_b4(); break;
                case 1: func_85E6_b1(); break;
                case 2: func_85E6_b2(); break;
                case 6: func_85E6_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85A6:
            switch (g_current_bank) {
                case 4: func_85A6_b4(); break;
                case 1: func_85A6_b1(); break;
                case 3: func_85A6_b3(); break;
                case 6: func_85A6_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85A8:
            switch (g_current_bank) {
                case 4: func_85A8_b4(); break;
                case 1: func_85A8_b1(); break;
                case 5: func_85A8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85BC:
            switch (g_current_bank) {
                case 4: func_85BC_b4(); break;
                case 1: func_85BC_b1(); break;
                case 5: func_85BC_b5(); break;
                case 3: func_85BC_b3(); break;
                case 6: func_85BC_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8603:
            switch (g_current_bank) {
                case 4: func_8603_b4(); break;
                case 6: func_8603_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85E3:
            switch (g_current_bank) {
                case 4: func_85E3_b4(); break;
                case 1: func_85E3_b1(); break;
                case 5: func_85E3_b5(); break;
                case 2: func_85E3_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8600:
            switch (g_current_bank) {
                case 4: func_8600_b4(); break;
                case 5: func_8600_b5(); break;
                case 6: func_8600_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85C5:
            switch (g_current_bank) {
                case 7: func_C5C5(); break;
                case 4: func_85C5_b4(); break;
                case 5: func_85C5_b5(); break;
                case 6: func_85C5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85F7:
            switch (g_current_bank) {
                case 4: func_85F7_b4(); break;
                case 6: func_85F7_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA74:
            func_BA74_b4(); break;
        case 0xBACD:
            func_BACD_b4(); break;
        case 0xBAEE:
            func_BAEE_b4(); break;
        case 0xBACB:
            func_BACB_b4(); break;
        case 0xBAD4:
            func_BAD4_b4(); break;
        case 0xBA9C:
            func_BA9C_b4(); break;
        case 0xBA99:
            func_BA99_b4(); break;
        case 0x9A74:
            func_9A74_b4(); break;
        case 0x99F7:
            func_99F7_b3(); break;
        case 0x8650:
            func_8650_b4(); break;
        case 0x86B3:
            func_86B3_b4(); break;
        case 0x9B24:
            func_9B24_b4(); break;
        case 0x9C38:
            func_9C38_b4(); break;
        case 0x9B8D:
            switch (g_current_bank) {
                case 4: func_9B8D_b4(); break;
                case 1: func_9B8D_b1(); break;
                case 2: func_9B8D_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9B29:
            func_9B29_b4(); break;
        case 0xBC45:
            func_BC45_b4(); break;
        case 0xBC4C:
            func_BC4C_b4(); break;
        case 0xBC85:
            func_BC85_b4(); break;
        case 0x9C45:
            func_9C45_b4(); break;
        case 0x82E1:
            func_82E1_b4(); break;
        case 0xA0E2:
            func_A0E2_b4(); break;
        case 0xA0FF:
            switch (g_current_bank) {
                case 4: func_A0FF_b4(); break;
                case 5: func_A0FF_b5(); break;
                case 6: func_A0FF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82FC:
            func_82FC_b4(); break;
        case 0x852F:
            switch (g_current_bank) {
                case 4: func_852F_b4(); break;
                case 0: func_852F_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8539:
            switch (g_current_bank) {
                case 4: func_8539_b4(); break;
                case 6: func_8539_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8544:
            func_8544_b4(); break;
        case 0x854C:
            switch (g_current_bank) {
                case 4: func_854C_b4(); break;
                case 1: func_854C_b1(); break;
                case 5: func_854C_b5(); break;
                case 3: func_854C_b3(); break;
                case 6: func_854C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x854A:
            switch (g_current_bank) {
                case 4: func_854A_b4(); break;
                case 6: func_854A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8569:
            switch (g_current_bank) {
                case 4: func_8569_b4(); break;
                case 1: func_8569_b1(); break;
                case 6: func_8569_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
        case 0xA085:
            switch (g_current_bank) {
                case 6: func_A085_b6(); break;
                case 1: func_A085_b1(); break;
                case 3: func_A085_b3(); break;
                case 4: func_A085_b4(); break;
                case 5: func_A085_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
        case 0xAF9C:
            func_AF9C_b3(); break;
        case 0xAFD1:
            func_AFD1_b3(); break;
        case 0xAF85:
            switch (g_current_bank) {
                case 3: func_AF85_b3(); break;
                case 1: func_AF85_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF26A:
            func_F26A(); break;
        case 0xF2BE:
            func_F2BE(); break;
        case 0xF286:
            func_F286(); break;
        case 0xF290:
            func_F290(); break;
        case 0xF2BF:
            func_F2BF(); break;
        case 0xF31A:
            func_F31A(); break;
        case 0xF310:
            func_F310(); break;
        case 0xF300:
            func_F300(); break;
        case 0xF2F1:
            func_F2F1(); break;
        case 0xF31B:
            func_F31B(); break;
        case 0xF34C:
            func_F34C(); break;
        case 0xF329:
            func_F329(); break;
        case 0xF36B:
            func_F36B(); break;
        case 0xF3AD:
            func_F3AD(); break;
        case 0xF3A4:
            func_F3A4(); break;
        case 0xF380:
            func_F380(); break;
        case 0xF3C4:
            func_F3C4(); break;
        case 0xF3DB:
            func_F3DB(); break;
        case 0xF3D8:
            func_F3D8(); break;
        case 0xF3DC:
            func_F3DC(); break;
        case 0xF3F3:
            func_F3F3(); break;
        case 0xF3F0:
            func_F3F0(); break;
        case 0xF3F4:
            func_F3F4(); break;
        case 0xF40B:
            func_F40B(); break;
        case 0xF3FF:
            func_F3FF(); break;
        case 0xF402:
            func_F402(); break;
        case 0xF40C:
            func_F40C(); break;
        case 0xF423:
            func_F423(); break;
        case 0xF420:
            func_F420(); break;
        case 0xF0E4:
            func_F0E4(); break;
        case 0xF0FF:
            func_F0FF(); break;
        case 0xF0F3:
            func_F0F3(); break;
        case 0xF0F0:
            func_F0F0(); break;
        case 0xF0EE:
            func_F0EE(); break;
        case 0xF0E8:
            func_F0E8(); break;
        case 0xF0EC:
            func_F0EC(); break;
        case 0xF0FC:
            func_F0FC(); break;
        case 0xF0F6:
            func_F0F6(); break;
        case 0x829D:
            func_829D_b0(); break;
        case 0x88E5:
            func_88E5_b1(); break;
        case 0x890E:
            func_890E_b1(); break;
        case 0x904E:
            func_904E_b5(); break;
        case 0x9136:
            switch (g_current_bank) {
                case 5: func_9136_b5(); break;
                case 6: func_9136_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x90A8:
            switch (g_current_bank) {
                case 5: func_90A8_b5(); break;
                case 1: func_90A8_b1(); break;
                case 4: func_90A8_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x90F7:
            switch (g_current_bank) {
                case 5: func_90F7_b5(); break;
                case 4: func_90F7_b4(); break;
                case 6: func_90F7_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84E3:
            switch (g_current_bank) {
                case 7: func_C4E3(); break;
                case 1: func_84E3_b1(); break;
                case 5: func_84E3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8504:
            switch (g_current_bank) {
                case 1: func_8504_b1(); break;
                case 6: func_8504_b6(); break;
                case 2: func_8504_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8514:
            switch (g_current_bank) {
                case 7: func_C514(); break;
                case 1: func_8514_b1(); break;
                case 5: func_8514_b5(); break;
                case 0: func_8514_b0(); break;
                case 4: func_8514_b4(); break;
                case 6: func_8514_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8529:
            switch (g_current_bank) {
                case 1: func_8529_b1(); break;
                case 5: func_8529_b5(); break;
                case 4: func_8529_b4(); break;
                case 6: func_8529_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8549:
            switch (g_current_bank) {
                case 1: func_8549_b1(); break;
                case 5: func_8549_b5(); break;
                case 6: func_8549_b6(); break;
                case 0: func_8549_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x851E:
            func_851E_b1(); break;
        case 0x850C:
            switch (g_current_bank) {
                case 7: func_C50C(); break;
                case 1: func_850C_b1(); break;
                case 2: func_850C_b2(); break;
                case 4: func_850C_b4(); break;
                case 6: func_850C_b6(); break;
                case 0: func_850C_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8548:
            func_8548_b1(); break;
        case 0x8556:
            func_8556_b1(); break;
        case 0x85AC:
            switch (g_current_bank) {
                case 1: func_85AC_b1(); break;
                case 3: func_85AC_b3(); break;
                case 6: func_85AC_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x859D:
            switch (g_current_bank) {
                case 1: func_859D_b1(); break;
                case 4: func_859D_b4(); break;
                case 5: func_859D_b5(); break;
                case 6: func_859D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85BA:
            switch (g_current_bank) {
                case 1: func_85BA_b1(); break;
                case 5: func_85BA_b5(); break;
                case 6: func_85BA_b6(); break;
                case 2: func_85BA_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x856C:
            switch (g_current_bank) {
                case 7: func_C56C(); break;
                case 1: func_856C_b1(); break;
                case 0: func_856C_b0(); break;
                case 4: func_856C_b4(); break;
                case 2: func_856C_b2(); break;
                case 6: func_856C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85D3:
            switch (g_current_bank) {
                case 1: func_85D3_b1(); break;
                case 5: func_85D3_b5(); break;
                case 3: func_85D3_b3(); break;
                case 6: func_85D3_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8582:
            switch (g_current_bank) {
                case 1: func_8582_b1(); break;
                case 4: func_8582_b4(); break;
                case 6: func_8582_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8598:
            switch (g_current_bank) {
                case 1: func_8598_b1(); break;
                case 4: func_8598_b4(); break;
                case 6: func_8598_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85CC:
            switch (g_current_bank) {
                case 1: func_85CC_b1(); break;
                case 5: func_85CC_b5(); break;
                case 6: func_85CC_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85A2:
            switch (g_current_bank) {
                case 1: func_85A2_b1(); break;
                case 5: func_85A2_b5(); break;
                case 6: func_85A2_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x859A:
            switch (g_current_bank) {
                case 1: func_859A_b1(); break;
                case 4: func_859A_b4(); break;
                case 5: func_859A_b5(); break;
                case 6: func_859A_b6(); break;
                case 2: func_859A_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85CD:
            switch (g_current_bank) {
                case 1: func_85CD_b1(); break;
                case 5: func_85CD_b5(); break;
                case 6: func_85CD_b6(); break;
                case 2: func_85CD_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8577:
            func_8577_b1(); break;
        case 0x85B2:
            switch (g_current_bank) {
                case 1: func_85B2_b1(); break;
                case 3: func_85B2_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85B4:
            switch (g_current_bank) {
                case 1: func_85B4_b1(); break;
                case 3: func_85B4_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85B6:
            func_85B6_b1(); break;
        case 0x8561:
            func_8561_b1(); break;
        case 0x85D5:
            func_85D5_b1(); break;
        case 0x85E9:
            switch (g_current_bank) {
                case 1: func_85E9_b1(); break;
                case 5: func_85E9_b5(); break;
                case 2: func_85E9_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85EC:
            switch (g_current_bank) {
                case 1: func_85EC_b1(); break;
                case 2: func_85EC_b2(); break;
                case 6: func_85EC_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85E0:
            switch (g_current_bank) {
                case 1: func_85E0_b1(); break;
                case 5: func_85E0_b5(); break;
                case 6: func_85E0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x864C:
            switch (g_current_bank) {
                case 1: func_864C_b1(); break;
                case 2: func_864C_b2(); break;
                case 3: func_864C_b3(); break;
                case 5: func_864C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85F4:
            switch (g_current_bank) {
                case 1: func_85F4_b1(); break;
                case 2: func_85F4_b2(); break;
                case 6: func_85F4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85FB:
            func_85FB_b1(); break;
        case 0x816C:
            switch (g_current_bank) {
                case 5: func_816C_b5(); break;
                case 0: func_816C_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8343:
            func_8343_b5(); break;
        case 0x8231:
            func_8231_b5(); break;
        case 0xEBFB:
            func_EBFB(); break;
        case 0xEBEF:
            func_EBEF(); break;
        case 0xC009:
            func_C009(); break;
        case 0xF171:
            func_F171(); break;
        case 0xF18D:
            func_F18D(); break;
        case 0xF1AD:
            func_F1AD(); break;
        case 0xF199:
            func_F199(); break;
        case 0xF1B3:
            func_F1B3(); break;
        case 0xF1B9:
            func_F1B9(); break;
        case 0xF1B0:
            func_F1B0(); break;
        case 0x8948:
            switch (g_current_bank) {
                case 1: func_8948_b1(); break;
                case 6: func_8948_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x896D:
            func_896D_b1(); break;
        case 0x89EB:
            func_89EB_b1(); break;
        case 0x89AD:
            switch (g_current_bank) {
                case 7: func_C9AD(); break;
                case 1: func_89AD_b1(); break;
                case 6: func_89AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x897E:
            func_897E_b1(); break;
        case 0x8893:
            func_8893_b1(); break;
        case 0x82F1:
            func_82F1_b1(); break;
        case 0x835E:
            func_835E_b1(); break;
        case 0x838D:
            switch (g_current_bank) {
                case 7: func_C38D(); break;
                case 1: func_838D_b1(); break;
                case 2: func_838D_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83D7:
            func_83D7_b1(); break;
        case 0x8438:
            func_8438_b5(); break;
        case 0x8624:
            switch (g_current_bank) {
                case 5: func_8624_b5(); break;
                case 2: func_8624_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85A1:
            switch (g_current_bank) {
                case 5: func_85A1_b5(); break;
                case 6: func_85A1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85AB:
            switch (g_current_bank) {
                case 5: func_85AB_b5(); break;
                case 3: func_85AB_b3(); break;
                case 2: func_85AB_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85A4:
            func_85A4_b5(); break;
        case 0x8570:
            switch (g_current_bank) {
                case 5: func_8570_b5(); break;
                case 4: func_8570_b4(); break;
                case 6: func_8570_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8575:
            switch (g_current_bank) {
                case 5: func_8575_b5(); break;
                case 4: func_8575_b4(); break;
                case 1: func_8575_b1(); break;
                case 6: func_8575_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8589:
            switch (g_current_bank) {
                case 5: func_8589_b5(); break;
                case 4: func_8589_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85C3:
            switch (g_current_bank) {
                case 7: func_C5C3(); break;
                case 5: func_85C3_b5(); break;
                case 2: func_85C3_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85CA:
            func_85CA_b5(); break;
        case 0xF573:
            func_F573(); break;
        case 0x8B95:
            switch (g_current_bank) {
                case 1: func_8B95_b1(); break;
                case 6: func_8B95_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B87:
            func_8B87_b1(); break;
        case 0x8B58:
            func_8B58_b1(); break;
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
        case 0x8685:
            switch (g_current_bank) {
                case 1: func_8685_b1(); break;
                case 5: func_8685_b5(); break;
                case 2: func_8685_b2(); break;
                case 6: func_8685_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86E8:
            switch (g_current_bank) {
                case 7: func_C6E8(); break;
                case 1: func_86E8_b1(); break;
                case 4: func_86E8_b4(); break;
                case 5: func_86E8_b5(); break;
                case 6: func_86E8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CE5:
            func_8CE5_b1(); break;
        case 0xE0F3:
            func_E0F3(); break;
        case 0xE100:
            func_E100(); break;
        case 0xE102:
            func_E102(); break;
        case 0xE0F8:
            func_E0F8(); break;
        case 0xE0F4:
            func_E0F4(); break;
        case 0xE0FC:
            func_E0FC(); break;
        case 0x91A6:
            func_91A6_b1(); break;
        case 0xE142:
            func_E142(); break;
        case 0xE18D:
            func_E18D(); break;
        case 0xE1A5:
            func_E1A5(); break;
        case 0xE1B9:
            func_E1B9(); break;
        case 0xE1AD:
            func_E1AD(); break;
        case 0xE160:
            func_E160(); break;
        case 0xE180:
            func_E180(); break;
        case 0xDAFB:
            func_DAFB(); break;
        case 0xDB00:
            func_DB00(); break;
        case 0xDB4E:
            func_DB4E(); break;
        case 0xDB03:
            func_DB03(); break;
        case 0xDB8A:
            func_DB8A(); break;
        case 0xDB8C:
            func_DB8C(); break;
        case 0xE122:
            func_E122(); break;
        case 0xA5F1:
            switch (g_current_bank) {
                case 1: func_A5F1_b1(); break;
                case 5: func_A5F1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA570:
            func_A570_b1(); break;
        case 0xA5D8:
            func_A5D8_b1(); break;
        case 0xACC4:
            func_ACC4_b1(); break;
        case 0xACD5:
            func_ACD5_b1(); break;
        case 0xAA54:
            func_AA54_b1(); break;
        case 0xAA69:
            func_AA69_b1(); break;
        case 0x89F1:
            func_89F1_b1(); break;
        case 0xA96B:
            func_A96B_b1(); break;
        case 0xA9A0:
            switch (g_current_bank) {
                case 1: func_A9A0_b1(); break;
                case 3: func_A9A0_b3(); break;
                case 2: func_A9A0_b2(); break;
                case 6: func_A9A0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9A4:
            switch (g_current_bank) {
                case 1: func_A9A4_b1(); break;
                case 3: func_A9A4_b3(); break;
                case 2: func_A9A4_b2(); break;
                case 4: func_A9A4_b4(); break;
                case 6: func_A9A4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9AE:
            switch (g_current_bank) {
                case 7: func_E9AE(); break;
                case 1: func_A9AE_b1(); break;
                case 3: func_A9AE_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9CC:
            func_A9CC_b1(); break;
        case 0xA9BF:
            switch (g_current_bank) {
                case 1: func_A9BF_b1(); break;
                case 5: func_A9BF_b5(); break;
                case 6: func_A9BF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9BA:
            switch (g_current_bank) {
                case 1: func_A9BA_b1(); break;
                case 4: func_A9BA_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9BC:
            func_A9BC_b1(); break;
        case 0x88DE:
            func_88DE_b1(); break;
        case 0xA46B:
            func_A46B_b1(); break;
        case 0xA40E:
            func_A40E_b1(); break;
        case 0xA470:
            func_A470_b1(); break;
        case 0xA4BB:
            switch (g_current_bank) {
                case 1: func_A4BB_b1(); break;
                case 0: func_A4BB_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA48D:
            switch (g_current_bank) {
                case 7: func_E48D(); break;
                case 1: func_A48D_b1(); break;
                case 5: func_A48D_b5(); break;
                case 4: func_A48D_b4(); break;
                case 3: func_A48D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4B5:
            func_A4B5_b1(); break;
        case 0xA4AD:
            switch (g_current_bank) {
                case 7: func_E4AD(); break;
                case 1: func_A4AD_b1(); break;
                case 4: func_A4AD_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA484:
            func_A484_b1(); break;
        case 0xA452:
            func_A452_b1(); break;
        case 0x828F:
            func_828F_b0(); break;
        case 0xA8C8:
            func_A8C8_b1(); break;
        case 0xA83D:
            func_A83D_b1(); break;
        case 0xA34B:
            func_A34B_b1(); break;
        case 0xA337:
            func_A337_b1(); break;
        case 0xA72A:
            func_A72A_b1(); break;
        case 0xA6C8:
            switch (g_current_bank) {
                case 1: func_A6C8_b1(); break;
                case 5: func_A6C8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA72F:
            func_A72F_b1(); break;
        case 0xA781:
            func_A781_b1(); break;
        case 0x9729:
            func_9729_b5(); break;
        case 0x8F47:
            switch (g_current_bank) {
                case 3: func_8F47_b3(); break;
                case 6: func_8F47_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8FD6:
            func_8FD6_b3(); break;
        case 0x8FB7:
            switch (g_current_bank) {
                case 3: func_8FB7_b3(); break;
                case 6: func_8FB7_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8E5F:
            switch (g_current_bank) {
                case 3: func_8E5F_b3(); break;
                case 6: func_8E5F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DDF:
            func_8DDF_b3(); break;
        case 0x8E15:
            func_8E15_b3(); break;
        case 0x93F1:
            func_93F1_b3(); break;
        case 0xBB48:
            func_BB48_b4(); break;
        case 0x9B3A:
            func_9B3A_b5(); break;
        case 0x9FE5:
            func_9FE5_b4(); break;
        case 0xA02E:
            func_A02E_b4(); break;
        case 0xA02A:
            func_A02A_b4(); break;
        case 0xAC2C:
            func_AC2C_b5(); break;
        case 0xAC60:
            switch (g_current_bank) {
                case 5: func_AC60_b5(); break;
                case 2: func_AC60_b2(); break;
                case 6: func_AC60_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC5D:
            switch (g_current_bank) {
                case 5: func_AC5D_b5(); break;
                case 6: func_AC5D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC49:
            func_AC49_b5(); break;
        case 0x8C2C:
            func_8C2C_b5(); break;
        case 0x91AA:
            func_91AA_b3(); break;
        case 0x9289:
            func_9289_b3(); break;
        case 0x91C5:
            switch (g_current_bank) {
                case 3: func_91C5_b3(); break;
                case 5: func_91C5_b5(); break;
                case 6: func_91C5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x91EE:
            func_91EE_b3(); break;
        case 0x9150:
            func_9150_b3(); break;
        case 0x91A7:
            func_91A7_b3(); break;
        case 0x938A:
            func_938A_b3(); break;
        case 0x92DF:
            func_92DF_b3(); break;
        case 0x930A:
            func_930A_b3(); break;
        case 0x9340:
            func_9340_b3(); break;
        case 0x83D0:
            func_83D0_b6(); break;
        case 0x84EA:
            func_84EA_b6(); break;
        case 0x850A:
            switch (g_current_bank) {
                case 6: func_850A_b6(); break;
                case 1: func_850A_b1(); break;
                case 2: func_850A_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8507:
            switch (g_current_bank) {
                case 6: func_8507_b6(); break;
                case 2: func_8507_b2(); break;
                case 4: func_8507_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84F1:
            switch (g_current_bank) {
                case 6: func_84F1_b6(); break;
                case 2: func_84F1_b2(); break;
                case 0: func_84F1_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84F9:
            func_84F9_b6(); break;
        case 0x851A:
            func_851A_b6(); break;
        case 0x8EF1:
            func_8EF1_b6(); break;
        case 0x9074:
            func_9074_b6(); break;
        case 0x9839:
            func_9839_b3(); break;
        case 0x9848:
            switch (g_current_bank) {
                case 3: func_9848_b3(); break;
                case 5: func_9848_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9880:
            switch (g_current_bank) {
                case 3: func_9880_b3(); break;
                case 5: func_9880_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9860:
            switch (g_current_bank) {
                case 3: func_9860_b3(); break;
                case 4: func_9860_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x986D:
            func_986D_b3(); break;
        case 0xF035:
            func_F035(); break;
        case 0xF028:
            func_F028(); break;
        case 0xEEBE:
            func_EEBE(); break;
        case 0xEEDA:
            func_EEDA(); break;
        case 0xEECC:
            func_EECC(); break;
        case 0xEECF:
            func_EECF(); break;
        case 0xEEEE:
            func_EEEE(); break;
        case 0xEEDD:
            func_EEDD(); break;
        case 0xEEF6:
            func_EEF6(); break;
        case 0xEEC0:
            func_EEC0(); break;
        case 0xEF01:
            func_EF01(); break;
        case 0xEED7:
            func_EED7(); break;
        case 0xEEE0:
            func_EEE0(); break;
        case 0xF023:
            func_F023(); break;
        case 0xF032:
            func_F032(); break;
        case 0xF037:
            func_F037(); break;
        case 0xEFE3:
            func_EFE3(); break;
        case 0xF0D1:
            func_F0D1(); break;
        case 0xEF2A:
            func_EF2A(); break;
        case 0xEF8D:
            func_EF8D(); break;
        case 0xEF4C:
            func_EF4C(); break;
        case 0xEF6D:
            func_EF6D(); break;
        case 0xEF90:
            func_EF90(); break;
        case 0xEF88:
            func_EF88(); break;
        case 0xEF92:
            func_EF92(); break;
        case 0xF0CC:
            func_F0CC(); break;
        case 0xF0E3:
            func_F0E3(); break;
        case 0xF0CE:
            func_F0CE(); break;
        case 0xF0E0:
            func_F0E0(); break;
        case 0xF089:
            func_F089(); break;
        case 0xB1C5:
            func_B1C5_b3(); break;
        case 0xB1D1:
            func_B1D1_b3(); break;
        case 0xB1B9:
            switch (g_current_bank) {
                case 7: func_F1B9(); break;
                case 3: func_B1B9_b3(); break;
                case 1: func_B1B9_b1(); break;
                case 4: func_B1B9_b4(); break;
                case 5: func_B1B9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82CA:
            func_82CA_b0(); break;
        case 0x86DD:
            func_86DD_b4(); break;
        case 0x8221:
            func_8221_b0(); break;
        case 0xA86D:
            func_A86D_b3(); break;
        case 0xA88D:
            switch (g_current_bank) {
                case 7: func_E88D(); break;
                case 3: func_A88D_b3(); break;
                case 1: func_A88D_b1(); break;
                case 4: func_A88D_b4(); break;
                case 5: func_A88D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x88F4:
            func_88F4_b3(); break;
        case 0x8951:
            func_8951_b3(); break;
        case 0xF662:
            func_F662(); break;
        case 0xA1C3:
            func_A1C3_b4(); break;
        case 0xA1CE:
            switch (g_current_bank) {
                case 7: func_E1CE(); break;
                case 4: func_A1CE_b4(); break;
                case 1: func_A1CE_b1(); break;
                case 3: func_A1CE_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1C7:
            func_A1C7_b4(); break;
        case 0xA19C:
            func_A19C_b4(); break;
        case 0xA1B5:
            func_A1B5_b4(); break;
        case 0x87EF:
            func_87EF_b5(); break;
        case 0x8811:
            func_8811_b5(); break;
        case 0x8787:
            func_8787_b5(); break;
        case 0x8979:
            func_8979_b5(); break;
        case 0x899F:
            func_899F_b5(); break;
        case 0x890C:
            func_890C_b5(); break;
        case 0xB17E:
            func_B17E_b0(); break;
        case 0xB3C2:
            func_B3C2_b0(); break;
        case 0x857D:
            func_857D_b0(); break;
        case 0xC060:
            func_C060(); break;
        case 0x96BE:
            func_96BE_b3(); break;
        case 0x97F9:
            func_97F9_b3(); break;
        case 0x9808:
            switch (g_current_bank) {
                case 3: func_9808_b3(); break;
                case 4: func_9808_b4(); break;
                case 5: func_9808_b5(); break;
                case 6: func_9808_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x980A:
            switch (g_current_bank) {
                case 3: func_980A_b3(); break;
                case 4: func_980A_b4(); break;
                case 1: func_980A_b1(); break;
                case 6: func_980A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9810:
            func_9810_b3(); break;
        case 0x8643:
            switch (g_current_bank) {
                case 4: func_8643_b4(); break;
                case 6: func_8643_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x856A:
            func_856A_b4(); break;
        case 0x859B:
            switch (g_current_bank) {
                case 4: func_859B_b4(); break;
                case 1: func_859B_b1(); break;
                case 5: func_859B_b5(); break;
                case 6: func_859B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x859C:
            switch (g_current_bank) {
                case 4: func_859C_b4(); break;
                case 5: func_859C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8593:
            switch (g_current_bank) {
                case 4: func_8593_b4(); break;
                case 6: func_8593_b6(); break;
                case 5: func_8593_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8576:
            func_8576_b4(); break;
        case 0x8572:
            func_8572_b4(); break;
        case 0x8587:
            func_8587_b4(); break;
        case 0xBB17:
            func_BB17_b4(); break;
        case 0xA56A:
            func_A56A_b4(); break;
        case 0xA193:
            func_A193_b5(); break;
        case 0x8193:
            switch (g_current_bank) {
                case 7: func_C193(); break;
                case 5: func_8193_b5(); break;
                case 0: func_8193_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB285:
            switch (g_current_bank) {
                case 5: func_B285_b5(); break;
                case 0: func_B285_b0(); break;
                case 1: func_B285_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9285:
            func_9285_b5(); break;
        case 0x91C4:
            func_91C4_b5(); break;
        case 0x9318:
            func_9318_b5(); break;
        case 0x9B16:
            func_9B16_b4(); break;
        case 0x9A9C:
            func_9A9C_b4(); break;
        case 0x9AE0:
            func_9AE0_b4(); break;
        case 0x9AE1:
            func_9AE1_b4(); break;
        case 0xB5AD:
            func_B5AD_b4(); break;
        case 0xB5CA:
            func_B5CA_b4(); break;
        case 0xB586:
            func_B586_b4(); break;
        case 0x9954:
            func_9954_b4(); break;
        case 0x99BC:
            func_99BC_b4(); break;
        case 0x99A5:
            switch (g_current_bank) {
                case 4: func_99A5_b4(); break;
                case 1: func_99A5_b1(); break;
                case 3: func_99A5_b3(); break;
                case 5: func_99A5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99BD:
            func_99BD_b4(); break;
        case 0x9A24:
            func_9A24_b4(); break;
        case 0x9A25:
            func_9A25_b4(); break;
        case 0x9A9B:
            func_9A9B_b4(); break;
        case 0x9C0C:
            func_9C0C_b4(); break;
        case 0x94EC:
            func_94EC_b4(); break;
        case 0xA047:
            func_A047_b4(); break;
        case 0x9C39:
            func_9C39_b4(); break;
        case 0x9CED:
            func_9CED_b4(); break;
        case 0x9CEE:
            func_9CEE_b4(); break;
        case 0x9D4E:
            switch (g_current_bank) {
                case 4: func_9D4E_b4(); break;
                case 6: func_9D4E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D00:
            switch (g_current_bank) {
                case 7: func_DD00(); break;
                case 4: func_9D00_b4(); break;
                case 1: func_9D00_b1(); break;
                case 6: func_9D00_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D03:
            switch (g_current_bank) {
                case 4: func_9D03_b4(); break;
                case 5: func_9D03_b5(); break;
                case 6: func_9D03_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D05:
            switch (g_current_bank) {
                case 4: func_9D05_b4(); break;
                case 1: func_9D05_b1(); break;
                case 5: func_9D05_b5(); break;
                case 6: func_9D05_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D1F:
            switch (g_current_bank) {
                case 4: func_9D1F_b4(); break;
                case 0: func_9D1F_b0(); break;
                case 5: func_9D1F_b5(); break;
                case 6: func_9D1F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D15:
            switch (g_current_bank) {
                case 4: func_9D15_b4(); break;
                case 1: func_9D15_b1(); break;
                case 5: func_9D15_b5(); break;
                case 6: func_9D15_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D17:
            switch (g_current_bank) {
                case 4: func_9D17_b4(); break;
                case 6: func_9D17_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D13:
            switch (g_current_bank) {
                case 4: func_9D13_b4(); break;
                case 1: func_9D13_b1(); break;
                case 5: func_9D13_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9C30:
            func_9C30_b4(); break;
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
        case 0xB1DD:
            func_B1DD_b3(); break;
        case 0xAFBB:
            func_AFBB_b3(); break;
        case 0xB195:
            func_B195_b3(); break;
        case 0xAFF2:
            func_AFF2_b3(); break;
        case 0xB1AD:
            func_B1AD_b3(); break;
        case 0xB189:
            func_B189_b3(); break;
        case 0xB1A1:
            func_B1A1_b3(); break;
        case 0xB16C:
            func_B16C_b3(); break;
        case 0xB14F:
            func_B14F_b3(); break;
        case 0xF2B4:
            func_F2B4(); break;
        case 0xF292:
            func_F292(); break;
        case 0x8281:
            func_8281_b0(); break;
        case 0xF2E6:
            func_F2E6(); break;
        case 0xF33D:
            func_F33D(); break;
        case 0xF38C:
            func_F38C(); break;
        case 0xF16B:
            func_F16B(); break;
        case 0xF0F9:
            func_F0F9(); break;
        case 0x9073:
            func_9073_b5(); break;
        case 0x9091:
            func_9091_b5(); break;
        case 0x8FFB:
            func_8FFB_b5(); break;
        case 0x9029:
            switch (g_current_bank) {
                case 5: func_9029_b5(); break;
                case 4: func_9029_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x900F:
            switch (g_current_bank) {
                case 7: func_D00F(); break;
                case 5: func_900F_b5(); break;
                case 3: func_900F_b3(); break;
                case 4: func_900F_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9004:
            switch (g_current_bank) {
                case 7: func_D004(); break;
                case 5: func_9004_b5(); break;
                case 1: func_9004_b1(); break;
                case 4: func_9004_b4(); break;
                case 6: func_9004_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9040:
            switch (g_current_bank) {
                case 7: func_D040(); break;
                case 5: func_9040_b5(); break;
                case 4: func_9040_b4(); break;
                case 6: func_9040_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9018:
            switch (g_current_bank) {
                case 7: func_D018(); break;
                case 5: func_9018_b5(); break;
                case 0: func_9018_b0(); break;
                case 6: func_9018_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9002:
            switch (g_current_bank) {
                case 7: func_D002(); break;
                case 5: func_9002_b5(); break;
                case 4: func_9002_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8553:
            func_8553_b1(); break;
        case 0x8496:
            func_8496_b1(); break;
        case 0x85D2:
            switch (g_current_bank) {
                case 1: func_85D2_b1(); break;
                case 2: func_85D2_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8344:
            func_8344_b5(); break;
        case 0x834C:
            switch (g_current_bank) {
                case 7: func_C34C(); break;
                case 5: func_834C_b5(); break;
                case 1: func_834C_b1(); break;
                case 2: func_834C_b2(); break;
                case 6: func_834C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8301:
            func_8301_b5(); break;
        case 0x8365:
            func_8365_b5(); break;
        case 0x83C4:
            func_83C4_b5(); break;
        case 0x8437:
            func_8437_b5(); break;
        case 0x8410:
            switch (g_current_bank) {
                case 5: func_8410_b5(); break;
                case 2: func_8410_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83FD:
            func_83FD_b5(); break;
        case 0x82B4:
            func_82B4_b5(); break;
        case 0x82B9:
            func_82B9_b5(); break;
        case 0xC015:
            func_C015(); break;
        case 0xD995:
            func_D995(); break;
        case 0xD9AD:
            func_D9AD(); break;
        case 0xD9C4:
            func_D9C4(); break;
        case 0xD9EE:
            func_D9EE(); break;
        case 0xD9AC:
            func_D9AC(); break;
        case 0xD9BD:
            func_D9BD(); break;
        case 0xDA00:
            func_DA00(); break;
        case 0xD9D0:
            func_D9D0(); break;
        case 0xD9D8:
            func_D9D8(); break;
        case 0xDA21:
            func_DA21(); break;
        case 0xF1F0:
            func_F1F0(); break;
        case 0xF183:
            func_F183(); break;
        case 0x8972:
            func_8972_b1(); break;
        case 0x89EC:
            switch (g_current_bank) {
                case 1: func_89EC_b1(); break;
                case 6: func_89EC_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x825D:
            func_825D_b1(); break;
        case 0x835B:
            func_835B_b1(); break;
        case 0x82A0:
            func_82A0_b1(); break;
        case 0x82AD:
            switch (g_current_bank) {
                case 1: func_82AD_b1(); break;
                case 2: func_82AD_b2(); break;
                case 3: func_82AD_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83D4:
            func_83D4_b1(); break;
        case 0x8672:
            func_8672_b5(); break;
        case 0x86AD:
            switch (g_current_bank) {
                case 7: func_C6AD(); break;
                case 5: func_86AD_b5(); break;
                case 0: func_86AD_b0(); break;
                case 1: func_86AD_b1(); break;
                case 2: func_86AD_b2(); break;
                case 6: func_86AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86BA:
            switch (g_current_bank) {
                case 5: func_86BA_b5(); break;
                case 1: func_86BA_b1(); break;
                case 2: func_86BA_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8698:
            func_8698_b5(); break;
        case 0x85E5:
            switch (g_current_bank) {
                case 5: func_85E5_b5(); break;
                case 2: func_85E5_b2(); break;
                case 6: func_85E5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8625:
            func_8625_b5(); break;
        case 0x8645:
            func_8645_b5(); break;
        case 0x89CF:
            func_89CF_b5(); break;
        case 0x8AD6:
            func_8AD6_b5(); break;
        case 0x89D4:
            func_89D4_b5(); break;
        case 0x8A98:
            func_8A98_b5(); break;
        case 0x8AC6:
            func_8AC6_b5(); break;
        case 0x8D27:
            func_8D27_b5(); break;
        case 0x8E43:
            switch (g_current_bank) {
                case 5: func_8E43_b5(); break;
                case 6: func_8E43_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DC3:
            switch (g_current_bank) {
                case 5: func_8DC3_b5(); break;
                case 1: func_8DC3_b1(); break;
                case 3: func_8DC3_b3(); break;
                case 4: func_8DC3_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D80:
            switch (g_current_bank) {
                case 5: func_8D80_b5(); break;
                case 2: func_8D80_b2(); break;
                case 6: func_8D80_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DF0:
            switch (g_current_bank) {
                case 7: func_CDF0(); break;
                case 5: func_8DF0_b5(); break;
                case 1: func_8DF0_b1(); break;
                case 3: func_8DF0_b3(); break;
                case 4: func_8DF0_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D35:
            switch (g_current_bank) {
                case 5: func_8D35_b5(); break;
                case 1: func_8D35_b1(); break;
                case 4: func_8D35_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D2C:
            switch (g_current_bank) {
                case 5: func_8D2C_b5(); break;
                case 3: func_8D2C_b3(); break;
                case 6: func_8D2C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D2E:
            switch (g_current_bank) {
                case 5: func_8D2E_b5(); break;
                case 1: func_8D2E_b1(); break;
                case 4: func_8D2E_b4(); break;
                case 6: func_8D2E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D30:
            switch (g_current_bank) {
                case 5: func_8D30_b5(); break;
                case 3: func_8D30_b3(); break;
                case 4: func_8D30_b4(); break;
                case 6: func_8D30_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DE2:
            switch (g_current_bank) {
                case 7: func_CDE2(); break;
                case 5: func_8DE2_b5(); break;
                case 2: func_8DE2_b2(); break;
                case 6: func_8DE2_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE1BF:
            func_E1BF(); break;
        case 0xE15B:
            func_E15B(); break;
        case 0x959E:
            func_959E_b5(); break;
        case 0x95CC:
            switch (g_current_bank) {
                case 5: func_95CC_b5(); break;
                case 4: func_95CC_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95C3:
            switch (g_current_bank) {
                case 5: func_95C3_b5(); break;
                case 4: func_95C3_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA529:
            func_A529_b1(); break;
        case 0xAA13:
            switch (g_current_bank) {
                case 1: func_AA13_b1(); break;
                case 3: func_AA13_b3(); break;
                case 4: func_AA13_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA53:
            func_AA53_b1(); break;
        case 0xAA4C:
            switch (g_current_bank) {
                case 7: func_EA4C(); break;
                case 1: func_AA4C_b1(); break;
                case 3: func_AA4C_b3(); break;
                case 5: func_AA4C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA1E:
            switch (g_current_bank) {
                case 1: func_AA1E_b1(); break;
                case 5: func_AA1E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA1A:
            func_AA1A_b1(); break;
        case 0xAA7A:
            func_AA7A_b1(); break;
        case 0xAA85:
            switch (g_current_bank) {
                case 1: func_AA85_b1(); break;
                case 5: func_AA85_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9C5:
            func_A9C5_b1(); break;
        case 0x88B9:
            func_88B9_b1(); break;
        case 0x88E1:
            func_88E1_b1(); break;
        case 0xA492:
            func_A492_b1(); break;
        case 0x966E:
            func_966E_b5(); break;
        case 0xA7F6:
            func_A7F6_b1(); break;
        case 0xA752:
            func_A752_b1(); break;
        case 0x9753:
            func_9753_b5(); break;
        case 0xBB7F:
            func_BB7F_b4(); break;
        case 0xBBA7:
            func_BBA7_b4(); break;
        case 0x9ADE:
            func_9ADE_b5(); break;
        case 0xABD0:
            func_ABD0_b5(); break;
        case 0xAC13:
            switch (g_current_bank) {
                case 5: func_AC13_b5(); break;
                case 1: func_AC13_b1(); break;
                case 4: func_AC13_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9204:
            func_9204_b3(); break;
        case 0xA84D:
            func_A84D_b3(); break;
        case 0xB069:
            func_B069_b3(); break;
        case 0xB083:
            func_B083_b3(); break;
        case 0xB0C8:
            func_B0C8_b3(); break;
        case 0xAFD0:
            func_AFD0_b3(); break;
        case 0xB009:
            func_B009_b3(); break;
        case 0xAF9B:
            func_AF9B_b3(); break;
        case 0xA904:
            switch (g_current_bank) {
                case 3: func_A904_b3(); break;
                case 1: func_A904_b1(); break;
                case 4: func_A904_b4(); break;
                case 5: func_A904_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB18D:
            switch (g_current_bank) {
                case 7: func_F18D(); break;
                case 3: func_B18D_b3(); break;
                case 5: func_B18D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1C9:
            switch (g_current_bank) {
                case 3: func_B1C9_b3(); break;
                case 0: func_B1C9_b0(); break;
                case 1: func_B1C9_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9B4:
            switch (g_current_bank) {
                case 3: func_A9B4_b3(); break;
                case 4: func_A9B4_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3CD:
            switch (g_current_bank) {
                case 3: func_B3CD_b3(); break;
                case 0: func_B3CD_b0(); break;
                case 4: func_B3CD_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1A5:
            switch (g_current_bank) {
                case 3: func_B1A5_b3(); break;
                case 1: func_B1A5_b1(); break;
                case 4: func_B1A5_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA902:
            switch (g_current_bank) {
                case 7: func_E902(); break;
                case 3: func_A902_b3(); break;
                case 4: func_A902_b4(); break;
                case 5: func_A902_b5(); break;
                case 6: func_A902_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3E3:
            func_B3E3_b3(); break;
        case 0xB0E0:
            switch (g_current_bank) {
                case 7: func_F0E0(); break;
                case 3: func_B0E0_b3(); break;
                case 1: func_B0E0_b1(); break;
                case 4: func_B0E0_b4(); break;
                case 5: func_B0E0_b5(); break;
                case 6: func_B0E0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9E0:
            switch (g_current_bank) {
                case 3: func_A9E0_b3(); break;
                case 1: func_A9E0_b1(); break;
                case 4: func_A9E0_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA99A:
            switch (g_current_bank) {
                case 3: func_A99A_b3(); break;
                case 5: func_A99A_b5(); break;
                case 6: func_A99A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9DF:
            switch (g_current_bank) {
                case 3: func_A9DF_b3(); break;
                case 4: func_A9DF_b4(); break;
                case 6: func_A9DF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA976:
            switch (g_current_bank) {
                case 3: func_A976_b3(); break;
                case 0: func_A976_b0(); break;
                case 4: func_A976_b4(); break;
                case 5: func_A976_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA948:
            switch (g_current_bank) {
                case 3: func_A948_b3(); break;
                case 1: func_A948_b1(); break;
                case 4: func_A948_b4(); break;
                case 5: func_A948_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB003:
            switch (g_current_bank) {
                case 3: func_B003_b3(); break;
                case 1: func_B003_b1(); break;
                case 4: func_B003_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA998:
            switch (g_current_bank) {
                case 3: func_A998_b3(); break;
                case 4: func_A998_b4(); break;
                case 5: func_A998_b5(); break;
                case 6: func_A998_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA986:
            switch (g_current_bank) {
                case 3: func_A986_b3(); break;
                case 1: func_A986_b1(); break;
                case 5: func_A986_b5(); break;
                case 6: func_A986_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADA8:
            switch (g_current_bank) {
                case 3: func_ADA8_b3(); break;
                case 4: func_ADA8_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB016:
            switch (g_current_bank) {
                case 7: func_F016(); break;
                case 3: func_B016_b3(); break;
                case 1: func_B016_b1(); break;
                case 5: func_B016_b5(); break;
                case 6: func_B016_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB01E:
            switch (g_current_bank) {
                case 3: func_B01E_b3(); break;
                case 1: func_B01E_b1(); break;
                case 5: func_B01E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0DA:
            switch (g_current_bank) {
                case 3: func_B0DA_b3(); break;
                case 1: func_B0DA_b1(); break;
                case 4: func_B0DA_b4(); break;
                case 5: func_B0DA_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA94C:
            switch (g_current_bank) {
                case 3: func_A94C_b3(); break;
                case 4: func_A94C_b4(); break;
                case 5: func_A94C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD08:
            switch (g_current_bank) {
                case 3: func_AD08_b3(); break;
                case 1: func_AD08_b1(); break;
                case 5: func_AD08_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB160:
            switch (g_current_bank) {
                case 3: func_B160_b3(); break;
                case 1: func_B160_b1(); break;
                case 4: func_B160_b4(); break;
                case 5: func_B160_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA940:
            switch (g_current_bank) {
                case 3: func_A940_b3(); break;
                case 5: func_A940_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0D8:
            func_B0D8_b3(); break;
        case 0xA8DA:
            func_A8DA_b3(); break;
        case 0xA8DC:
            func_A8DC_b3(); break;
        case 0xA8DE:
            func_A8DE_b3(); break;
        case 0xA8E0:
            switch (g_current_bank) {
                case 3: func_A8E0_b3(); break;
                case 4: func_A8E0_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8E4:
            func_A8E4_b3(); break;
        case 0xA8E6:
            func_A8E6_b3(); break;
        case 0xB11C:
            func_B11C_b3(); break;
        case 0xA8D2:
            switch (g_current_bank) {
                case 3: func_A8D2_b3(); break;
                case 0: func_A8D2_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8D4:
            func_A8D4_b3(); break;
        case 0xA8D6:
            func_A8D6_b3(); break;
        case 0xA8D8:
            func_A8D8_b3(); break;
        case 0xA9E6:
            switch (g_current_bank) {
                case 3: func_A9E6_b3(); break;
                case 4: func_A9E6_b4(); break;
                case 6: func_A9E6_b6(); break;
                case 1: func_A9E6_b1(); break;
                case 2: func_A9E6_b2(); break;
                case 5: func_A9E6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9E2:
            func_A9E2_b3(); break;
        case 0xAFAF:
            func_AFAF_b3(); break;
        case 0xB1B1:
            func_B1B1_b3(); break;
        case 0xB0AD:
            func_B0AD_b3(); break;
        case 0xA1DC:
            func_A1DC_b4(); break;
        case 0xA1D0:
            func_A1D0_b4(); break;
        case 0xA542:
            func_A542_b4(); break;
        case 0xA53C:
            func_A53C_b4(); break;
        case 0xA581:
            switch (g_current_bank) {
                case 4: func_A581_b4(); break;
                case 3: func_A581_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA554:
            switch (g_current_bank) {
                case 4: func_A554_b4(); break;
                case 5: func_A554_b5(); break;
                case 1: func_A554_b1(); break;
                case 3: func_A554_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA540:
            switch (g_current_bank) {
                case 4: func_A540_b4(); break;
                case 1: func_A540_b1(); break;
                case 3: func_A540_b3(); break;
                case 5: func_A540_b5(); break;
                case 0: func_A540_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA595:
            func_A595_b4(); break;
        case 0xA5CA:
            switch (g_current_bank) {
                case 4: func_A5CA_b4(); break;
                case 5: func_A5CA_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5CB:
            switch (g_current_bank) {
                case 4: func_A5CB_b4(); break;
                case 5: func_A5CB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5D2:
            func_A5D2_b4(); break;
        case 0xA5E8:
            switch (g_current_bank) {
                case 4: func_A5E8_b4(); break;
                case 5: func_A5E8_b5(); break;
                case 1: func_A5E8_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5C8:
            func_A5C8_b4(); break;
        case 0xA5AA:
            switch (g_current_bank) {
                case 4: func_A5AA_b4(); break;
                case 5: func_A5AA_b5(); break;
                case 3: func_A5AA_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5E3:
            switch (g_current_bank) {
                case 4: func_A5E3_b4(); break;
                case 5: func_A5E3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5E5:
            switch (g_current_bank) {
                case 4: func_A5E5_b4(); break;
                case 1: func_A5E5_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5E0:
            switch (g_current_bank) {
                case 4: func_A5E0_b4(); break;
                case 1: func_A5E0_b1(); break;
                case 3: func_A5E0_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5B9:
            func_A5B9_b4(); break;
        case 0xA5C3:
            func_A5C3_b5(); break;
        case 0xA644:
            func_A644_b5(); break;
        case 0xA5FB:
            switch (g_current_bank) {
                case 5: func_A5FB_b5(); break;
                case 1: func_A5FB_b1(); break;
                case 3: func_A5FB_b3(); break;
                case 4: func_A5FB_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA602:
            switch (g_current_bank) {
                case 5: func_A602_b5(); break;
                case 3: func_A602_b3(); break;
                case 4: func_A602_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA600:
            switch (g_current_bank) {
                case 5: func_A600_b5(); break;
                case 3: func_A600_b3(); break;
                case 4: func_A600_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA645:
            func_A645_b5(); break;
        case 0xA697:
            func_A697_b5(); break;
        case 0xA698:
            func_A698_b5(); break;
        case 0xA6EA:
            func_A6EA_b5(); break;
        case 0xA6EB:
            func_A6EB_b5(); break;
        case 0xA533:
            func_A533_b5(); break;
        case 0xA563:
            func_A563_b5(); break;
        case 0xA593:
            func_A593_b5(); break;
        case 0xA5B6:
            switch (g_current_bank) {
                case 5: func_A5B6_b5(); break;
                case 1: func_A5B6_b1(); break;
                case 4: func_A5B6_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1E1:
            func_A1E1_b5(); break;
        case 0xA214:
            switch (g_current_bank) {
                case 5: func_A214_b5(); break;
                case 3: func_A214_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA21C:
            func_A21C_b5(); break;
        case 0xA200:
            func_A200_b5(); break;
        case 0xA228:
            func_A228_b5(); break;
        case 0xA1FA:
            func_A1FA_b5(); break;
        case 0xA231:
            func_A231_b5(); break;
        case 0xA2A8:
            switch (g_current_bank) {
                case 5: func_A2A8_b5(); break;
                case 2: func_A2A8_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA23C:
            func_A23C_b5(); break;
        case 0xA317:
            func_A317_b5(); break;
        case 0xA3FD:
            func_A3FD_b5(); break;
        case 0xA40A:
            func_A40A_b5(); break;
        case 0xA4E3:
            switch (g_current_bank) {
                case 7: func_E4E3(); break;
                case 5: func_A4E3_b5(); break;
                case 1: func_A4E3_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA50F:
            switch (g_current_bank) {
                case 5: func_A50F_b5(); break;
                case 1: func_A50F_b1(); break;
                case 4: func_A50F_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA506:
            func_A506_b5(); break;
        case 0xA528:
            func_A528_b5(); break;
        case 0xA504:
            switch (g_current_bank) {
                case 7: func_E504(); break;
                case 5: func_A504_b5(); break;
                case 3: func_A504_b3(); break;
                case 4: func_A504_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA51B:
            switch (g_current_bank) {
                case 5: func_A51B_b5(); break;
                case 2: func_A51B_b2(); break;
                case 3: func_A51B_b3(); break;
                case 4: func_A51B_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4E8:
            switch (g_current_bank) {
                case 5: func_A4E8_b5(); break;
                case 1: func_A4E8_b1(); break;
                case 0: func_A4E8_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA502:
            switch (g_current_bank) {
                case 5: func_A502_b5(); break;
                case 3: func_A502_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4F4:
            func_A4F4_b5(); break;
        case 0xA4FC:
            func_A4FC_b5(); break;
        case 0xA515:
            switch (g_current_bank) {
                case 5: func_A515_b5(); break;
                case 0: func_A515_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB6B5:
            func_B6B5_b5(); break;
        case 0xB6E4:
            func_B6E4_b5(); break;
        case 0xB736:
            func_B736_b5(); break;
        case 0xB737:
            func_B737_b5(); break;
        case 0xB789:
            func_B789_b5(); break;
        case 0xB78A:
            func_B78A_b5(); break;
        case 0xB7DC:
            func_B7DC_b5(); break;
        case 0xB78D:
            func_B78D_b5(); break;
        case 0xB7DD:
            func_B7DD_b5(); break;
        case 0xB625:
            func_B625_b5(); break;
        case 0xB655:
            func_B655_b5(); break;
        case 0xB685:
            func_B685_b5(); break;
        case 0xB68D:
            switch (g_current_bank) {
                case 5: func_B68D_b5(); break;
                case 4: func_B68D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB690:
            switch (g_current_bank) {
                case 7: func_F690(); break;
                case 5: func_B690_b5(); break;
                case 4: func_B690_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB2D3:
            func_B2D3_b5(); break;
        case 0xB323:
            func_B323_b5(); break;
        case 0xB38D:
            switch (g_current_bank) {
                case 5: func_B38D_b5(); break;
                case 0: func_B38D_b0(); break;
                case 4: func_B38D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB409:
            func_B409_b5(); break;
        case 0xB48D:
            switch (g_current_bank) {
                case 7: func_F48D(); break;
                case 5: func_B48D_b5(); break;
                case 4: func_B48D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB485:
            switch (g_current_bank) {
                case 7: func_F485(); break;
                case 5: func_B485_b5(); break;
                case 0: func_B485_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB44C:
            func_B44C_b5(); break;
        case 0xB4EF:
            func_B4EF_b5(); break;
        case 0xB520:
            switch (g_current_bank) {
                case 5: func_B520_b5(); break;
                case 0: func_B520_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5D5:
            func_B5D5_b5(); break;
        case 0xB5E6:
            switch (g_current_bank) {
                case 7: func_F5E6(); break;
                case 5: func_B5E6_b5(); break;
                case 0: func_B5E6_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x929D:
            func_929D_b5(); break;
        case 0x9284:
            func_9284_b5(); break;
        case 0x928D:
            switch (g_current_bank) {
                case 5: func_928D_b5(); break;
                case 4: func_928D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x933B:
            func_933B_b5(); break;
        case 0xA092:
            func_A092_b4(); break;
        case 0xA0E1:
            func_A0E1_b4(); break;
        case 0x9AB4:
            func_9AB4_b4(); break;
        case 0xB48A:
            func_B48A_b4(); break;
        case 0xB4C6:
            switch (g_current_bank) {
                case 4: func_B4C6_b4(); break;
                case 5: func_B4C6_b5(); break;
                case 0: func_B4C6_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4C9:
            switch (g_current_bank) {
                case 7: func_F4C9(); break;
                case 4: func_B4C9_b4(); break;
                case 0: func_B4C9_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x948A:
            func_948A_b4(); break;
        case 0xAA52:
            func_AA52_b4(); break;
        case 0x8A52:
            func_8A52_b4(); break;
        case 0xBBF5:
            func_BBF5_b4(); break;
        case 0xBC44:
            func_BC44_b4(); break;
        case 0xB59E:
            func_B59E_b4(); break;
        case 0x976E:
            func_976E_b4(); break;
        case 0x9469:
            func_9469_b4(); break;
        case 0x94F8:
            func_94F8_b4(); break;
        case 0x954C:
            switch (g_current_bank) {
                case 4: func_954C_b4(); break;
                case 1: func_954C_b1(); break;
                case 3: func_954C_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95A4:
            switch (g_current_bank) {
                case 4: func_95A4_b4(); break;
                case 1: func_95A4_b1(); break;
                case 3: func_95A4_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95C4:
            func_95C4_b4(); break;
        case 0x969D:
            func_969D_b4(); break;
        case 0x966D:
            func_966D_b4(); break;
        case 0x9D33:
            switch (g_current_bank) {
                case 4: func_9D33_b4(); break;
                case 5: func_9D33_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D30:
            func_9D30_b4(); break;
        case 0xAC81:
            switch (g_current_bank) {
                case 5: func_AC81_b5(); break;
                case 1: func_AC81_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C81:
            func_8C81_b5(); break;
        case 0xACCD:
            switch (g_current_bank) {
                case 7: func_ECCD(); break;
                case 5: func_ACCD_b5(); break;
                case 2: func_ACCD_b2(); break;
                case 6: func_ACCD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xACE6:
            switch (g_current_bank) {
                case 5: func_ACE6_b5(); break;
                case 1: func_ACE6_b1(); break;
                case 4: func_ACE6_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CCD:
            func_8CCD_b5(); break;
        case 0x8697:
            func_8697_b0(); break;
        case 0x846D:
            switch (g_current_bank) {
                case 0: func_846D_b0(); break;
                case 6: func_846D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86A9:
            func_86A9_b0(); break;
        case 0x86B4:
            switch (g_current_bank) {
                case 7: func_C6B4(); break;
                case 0: func_86B4_b0(); break;
                case 6: func_86B4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x870B:
            func_870B_b0(); break;
        case 0x9487:
            func_9487_b6(); break;
        case 0x9475:
            func_9475_b6(); break;
        case 0x94A1:
            func_94A1_b6(); break;
        case 0x9470:
            func_9470_b6(); break;
        case 0x947D:
            func_947D_b6(); break;
        case 0x8391:
            func_8391_b5(); break;
        case 0x83C3:
            func_83C3_b5(); break;
        case 0x839D:
            func_839D_b5(); break;
        case 0x83E1:
            func_83E1_b5(); break;
        case 0x83F0:
            func_83F0_b5(); break;
        case 0x83FF:
            func_83FF_b5(); break;
        case 0x86BC:
            func_86BC_b5(); break;
        case 0x866F:
            func_866F_b5(); break;
        case 0x8AD7:
            func_8AD7_b5(); break;
        case 0x8AFF:
            func_8AFF_b5(); break;
        case 0x8A94:
            func_8A94_b5(); break;
        case 0x8C75:
            func_8C75_b5(); break;
        case 0x8D26:
            func_8D26_b5(); break;
        case 0x8D10:
            switch (g_current_bank) {
                case 7: func_CD10(); break;
                case 5: func_8D10_b5(); break;
                case 0: func_8D10_b0(); break;
                case 4: func_8D10_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D0A:
            switch (g_current_bank) {
                case 5: func_8D0A_b5(); break;
                case 4: func_8D0A_b4(); break;
                case 6: func_8D0A_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D1D:
            switch (g_current_bank) {
                case 5: func_8D1D_b5(); break;
                case 1: func_8D1D_b1(); break;
                case 6: func_8D1D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D1B:
            switch (g_current_bank) {
                case 5: func_8D1B_b5(); break;
                case 1: func_8D1B_b1(); break;
                case 6: func_8D1B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D06:
            switch (g_current_bank) {
                case 5: func_8D06_b5(); break;
                case 4: func_8D06_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D08:
            switch (g_current_bank) {
                case 5: func_8D08_b5(); break;
                case 1: func_8D08_b1(); break;
                case 4: func_8D08_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D17:
            switch (g_current_bank) {
                case 7: func_CD17(); break;
                case 5: func_8D17_b5(); break;
                case 1: func_8D17_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D19:
            switch (g_current_bank) {
                case 5: func_8D19_b5(); break;
                case 1: func_8D19_b1(); break;
                case 4: func_8D19_b4(); break;
                case 6: func_8D19_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D22:
            switch (g_current_bank) {
                case 5: func_8D22_b5(); break;
                case 6: func_8D22_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C8D:
            switch (g_current_bank) {
                case 5: func_8C8D_b5(); break;
                case 4: func_8C8D_b4(); break;
                case 6: func_8C8D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8E44:
            func_8E44_b5(); break;
        case 0x8E6C:
            func_8E6C_b5(); break;
        case 0x8E04:
            func_8E04_b5(); break;
        case 0x95DE:
            func_95DE_b5(); break;
        case 0xA9A8:
            func_A9A8_b1(); break;
        case 0x969C:
            func_969C_b5(); break;
        case 0x9AC9:
            func_9AC9_b5(); break;
        case 0x9ACB:
            func_9ACB_b5(); break;
        case 0xB813:
            func_B813_b5(); break;
        case 0x9813:
            func_9813_b5(); break;
        case 0x981F:
            func_981F_b5(); break;
        case 0x9B06:
            func_9B06_b5(); break;
        case 0xABBB:
            func_ABBB_b5(); break;
        case 0xABF8:
            func_ABF8_b5(); break;
        case 0xA5B3:
            func_A5B3_b4(); break;
        case 0xA5EB:
            func_A5EB_b5(); break;
        case 0xA63E:
            func_A63E_b5(); break;
        case 0xA691:
            func_A691_b5(); break;
        case 0xA6E4:
            func_A6E4_b5(); break;
        case 0xA713:
            func_A713_b5(); break;
        case 0xA2C7:
            func_A2C7_b5(); break;
        case 0xA316:
            func_A316_b5(); break;
        case 0xA2D0:
            switch (g_current_bank) {
                case 5: func_A2D0_b5(); break;
                case 1: func_A2D0_b1(); break;
                case 6: func_A2D0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2D8:
            switch (g_current_bank) {
                case 5: func_A2D8_b5(); break;
                case 4: func_A2D8_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3AD:
            func_A3AD_b5(); break;
        case 0xA3FC:
            func_A3FC_b5(); break;
        case 0xA3C6:
            func_A3C6_b5(); break;
        case 0xA493:
            func_A493_b5(); break;
        case 0xA4E2:
            switch (g_current_bank) {
                case 5: func_A4E2_b5(); break;
                case 3: func_A4E2_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4D8:
            switch (g_current_bank) {
                case 5: func_A4D8_b5(); break;
                case 4: func_A4D8_b4(); break;
                case 3: func_A4D8_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4DF:
            switch (g_current_bank) {
                case 5: func_A4DF_b5(); break;
                case 3: func_A4DF_b3(); break;
                case 0: func_A4DF_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4CE:
            switch (g_current_bank) {
                case 5: func_A4CE_b5(); break;
                case 4: func_A4CE_b4(); break;
                case 3: func_A4CE_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB6DD:
            func_B6DD_b5(); break;
        case 0xB730:
            func_B730_b5(); break;
        case 0xB783:
            func_B783_b5(); break;
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
            switch (g_current_bank) {
                case 5: func_B585_b5(); break;
                case 4: func_B585_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5D4:
            func_B5D4_b5(); break;
        case 0xB58D:
            switch (g_current_bank) {
                case 5: func_B58D_b5(); break;
                case 0: func_B58D_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5C8:
            switch (g_current_bank) {
                case 7: func_F5C8(); break;
                case 5: func_B5C8_b5(); break;
                case 0: func_B5C8_b0(); break;
                case 4: func_B5C8_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5B4:
            switch (g_current_bank) {
                case 5: func_B5B4_b5(); break;
                case 4: func_B5B4_b4(); break;
                case 0: func_B5B4_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB596:
            switch (g_current_bank) {
                case 5: func_B596_b5(); break;
                case 0: func_B596_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5C0:
            func_B5C0_b5(); break;
        case 0x924E:
            func_924E_b5(); break;
        case 0x921C:
            func_921C_b5(); break;
        case 0x9354:
            func_9354_b5(); break;
        case 0x9268:
            func_9268_b5(); break;
        case 0x844B:
            func_844B_b0(); break;
        case 0xA0B9:
            switch (g_current_bank) {
                case 7: func_E0B9(); break;
                case 4: func_A0B9_b4(); break;
                case 1: func_A0B9_b1(); break;
                case 6: func_A0B9_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x845C:
            func_845C_b0(); break;
        case 0xB4DB:
            func_B4DB_b4(); break;
        case 0xB4E0:
            func_B4E0_b4(); break;
        case 0xB54A:
            func_B54A_b4(); break;
        case 0xB501:
            switch (g_current_bank) {
                case 4: func_B501_b4(); break;
                case 0: func_B501_b0(); break;
                case 5: func_B501_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9482:
            func_9482_b4(); break;
        case 0xBC1C:
            func_BC1C_b4(); break;
        case 0x980B:
            func_980B_b4(); break;
        case 0xB1C7:
            func_B1C7_b4(); break;
        case 0x91C7:
            func_91C7_b4(); break;
        case 0xB1AB:
            func_B1AB_b4(); break;
        case 0xB1C6:
            switch (g_current_bank) {
                case 4: func_B1C6_b4(); break;
                case 1: func_B1C6_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1B0:
            switch (g_current_bank) {
                case 7: func_F1B0(); break;
                case 4: func_B1B0_b4(); break;
                case 0: func_B1B0_b0(); break;
                case 1: func_B1B0_b1(); break;
                case 5: func_B1B0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1B2:
            func_B1B2_b4(); break;
        case 0x91AB:
            func_91AB_b4(); break;
        case 0x8151:
            switch (g_current_bank) {
                case 5: func_8151_b5(); break;
                case 0: func_8151_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x947A:
            func_947A_b4(); break;
        case 0x94AF:
            func_94AF_b4(); break;
        case 0x94B0:
            func_94B0_b4(); break;
        case 0x94EB:
            func_94EB_b4(); break;
        case 0x94C8:
            func_94C8_b4(); break;
        case 0x94B8:
            func_94B8_b4(); break;
        case 0x9530:
            func_9530_b4(); break;
        case 0x9560:
            func_9560_b4(); break;
        case 0x9600:
            func_9600_b4(); break;
        case 0x9633:
            func_9633_b4(); break;
        case 0x95F1:
            func_95F1_b4(); break;
        case 0x8CF4:
            func_8CF4_b5(); break;
        case 0x87F3:
            func_87F3_b0(); break;
        case 0x879C:
            func_879C_b0(); break;
        case 0x87B1:
            func_87B1_b0(); break;
        case 0x870F:
            func_870F_b0(); break;
        case 0x82A6:
            func_82A6_b0(); break;
        case 0x8BCE:
            func_8BCE_b5(); break;
        case 0x8BF3:
            func_8BF3_b5(); break;
        case 0x8BE6:
            func_8BE6_b5(); break;
        case 0x8B00:
            func_8B00_b5(); break;
        case 0x8B4C:
            switch (g_current_bank) {
                case 5: func_8B4C_b5(); break;
                case 1: func_8B4C_b1(); break;
                case 6: func_8B4C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B46:
            func_8B46_b5(); break;
        case 0x8B31:
            func_8B31_b5(); break;
        case 0x8F4A:
            func_8F4A_b5(); break;
        case 0x8F8C:
            func_8F8C_b5(); break;
        case 0x8F73:
            func_8F73_b5(); break;
        case 0x8E6D:
            func_8E6D_b5(); break;
        case 0x8EC3:
            switch (g_current_bank) {
                case 5: func_8EC3_b5(); break;
                case 1: func_8EC3_b1(); break;
                case 4: func_8EC3_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8ED0:
            switch (g_current_bank) {
                case 5: func_8ED0_b5(); break;
                case 4: func_8ED0_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8EBD:
            func_8EBD_b5(); break;
        case 0x8EA6:
            func_8EA6_b5(); break;
        case 0x9820:
            func_9820_b5(); break;
        case 0x9AEB:
            func_9AEB_b5(); break;
        case 0xABDD:
            func_ABDD_b5(); break;
        case 0xA5CF:
            func_A5CF_b5(); break;
        case 0xA622:
            func_A622_b5(); break;
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
        case 0x926A:
            func_926A_b5(); break;
        case 0xB54B:
            func_B54B_b4(); break;
        case 0x9192:
            func_9192_b4(); break;
        case 0x918C:
            func_918C_b4(); break;
        case 0x91E5:
            func_91E5_b4(); break;
        case 0xB1C4:
            func_B1C4_b4(); break;
        case 0xAB21:
            func_AB21_b5(); break;
        case 0xAB85:
            switch (g_current_bank) {
                case 5: func_AB85_b5(); break;
                case 1: func_AB85_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAB4C:
            switch (g_current_bank) {
                case 5: func_AB4C_b5(); break;
                case 1: func_AB4C_b1(); break;
                case 4: func_AB4C_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B21:
            func_8B21_b5(); break;
        case 0x9521:
            func_9521_b4(); break;
        case 0x87D3:
            func_87D3_b0(); break;
        case 0x8C21:
            func_8C21_b5(); break;
        case 0x8B69:
            func_8B69_b5(); break;
        case 0x8F9E:
            func_8F9E_b5(); break;
        case 0x8EDB:
            func_8EDB_b5(); break;
        case 0xD8C9:
            func_D8C9(); break;
        case 0x9F4C:
            switch (g_current_bank) {
                case 7: func_DF4C(); break;
                case 1: func_9F4C_b1(); break;
                case 5: func_9F4C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC039:
            func_C039(); break;
        case 0xC03C:
            func_C03C(); break;
        case 0xC045:
            func_C045(); break;
        case 0xF1F6:
            func_F1F6(); break;
        case 0xEBFC:
            func_EBFC(); break;
        case 0xC04C:
            func_C04C(); break;
        case 0xC066:
            func_C066(); break;
        case 0xC069:
            func_C069(); break;
        case 0xE0E2:
            func_E0E2(); break;
        case 0xA9F5:
            switch (g_current_bank) {
                case 4: func_A9F5_b4(); break;
                case 5: func_A9F5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA00:
            switch (g_current_bank) {
                case 7: func_EA00(); break;
                case 4: func_AA00_b4(); break;
                case 5: func_AA00_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D02:
            switch (g_current_bank) {
                case 1: func_9D02_b1(); break;
                case 6: func_9D02_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D06:
            switch (g_current_bank) {
                case 7: func_DD06(); break;
                case 1: func_9D06_b1(); break;
                case 5: func_9D06_b5(); break;
                case 6: func_9D06_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD0E8:
            func_D0E8(); break;
        case 0x8512:
            switch (g_current_bank) {
                case 7: func_C512(); break;
                case 1: func_8512_b1(); break;
                case 4: func_8512_b4(); break;
                case 6: func_8512_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A20:
            switch (g_current_bank) {
                case 7: func_CA20(); break;
                case 1: func_8A20_b1(); break;
                case 4: func_8A20_b4(); break;
                case 6: func_8A20_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA981:
            switch (g_current_bank) {
                case 1: func_A981_b1(); break;
                case 3: func_A981_b3(); break;
                case 4: func_A981_b4(); break;
                case 5: func_A981_b5(); break;
                case 6: func_A981_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DD0:
            switch (g_current_bank) {
                case 7: func_CDD0(); break;
                case 2: func_8DD0_b2(); break;
                case 4: func_8DD0_b4(); break;
                case 6: func_8DD0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D03:
            func_8D03_b4(); break;
        case 0xCD8D:
            func_CD8D(); break;
        case 0x8D01:
            switch (g_current_bank) {
                case 4: func_8D01_b4(); break;
                case 5: func_8D01_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D04:
            switch (g_current_bank) {
                case 7: func_CD04(); break;
                case 4: func_8D04_b4(); break;
                case 5: func_8D04_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC3A9:
            func_C3A9(); break;
        case 0xA905:
            func_A905_b4(); break;
        case 0xAB8D:
            func_AB8D_b1(); break;
        case 0xAC8D:
            func_AC8D_b5(); break;
        case 0xAD90:
            switch (g_current_bank) {
                case 1: func_AD90_b1(); break;
                case 4: func_AD90_b4(); break;
                case 5: func_AD90_b5(); break;
                case 6: func_AD90_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D20:
            switch (g_current_bank) {
                case 3: func_8D20_b3(); break;
                case 6: func_8D20_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADF4:
            switch (g_current_bank) {
                case 1: func_ADF4_b1(); break;
                case 4: func_ADF4_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADC1:
            func_ADC1_b6(); break;
        case 0xEBC3:
            func_EBC3(); break;
        case 0xD1C4:
            func_D1C4(); break;
        case 0xE3C4:
            func_E3C4(); break;
        case 0xE7C4:
            func_E7C4(); break;
        case 0xE820:
            func_E820(); break;
        case 0xF120:
            func_F120(); break;
        case 0xA9F4:
            func_A9F4_b5(); break;
        case 0xE04C:
            func_E04C(); break;
        case 0xDC20:
            func_DC20(); break;
        case 0xB88D:
            func_B88D_b4(); break;
        case 0x8580:
            func_8580_b1(); break;
        case 0xB985:
            func_B985_b4(); break;
        case 0xAD81:
            switch (g_current_bank) {
                case 1: func_AD81_b1(); break;
                case 4: func_AD81_b4(); break;
                case 5: func_AD81_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD01:
            switch (g_current_bank) {
                case 1: func_AD01_b1(); break;
                case 5: func_AD01_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE7AD:
            func_E7AD(); break;
        case 0xA925:
            func_A925_b4(); break;
        case 0xEB8D:
            func_EB8D(); break;
        case 0xED8D:
            func_ED8D(); break;
        case 0xA1A5:
            switch (g_current_bank) {
                case 7: func_E1A5(); break;
                case 1: func_A1A5_b1(); break;
                case 3: func_A1A5_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9E9:
            switch (g_current_bank) {
                case 7: func_E9E9(); break;
                case 5: func_A9E9_b5(); break;
                case 6: func_A9E9_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD04:
            switch (g_current_bank) {
                case 1: func_AD04_b1(); break;
                case 5: func_AD04_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x87AD:
            switch (g_current_bank) {
                case 7: func_C7AD(); break;
                case 0: func_87AD_b0(); break;
                case 3: func_87AD_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA08D:
            switch (g_current_bank) {
                case 1: func_A08D_b1(); break;
                case 6: func_A08D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA18D:
            func_A18D_b3(); break;
        case 0xA9EE:
            switch (g_current_bank) {
                case 7: func_E9EE(); break;
                case 5: func_A9EE_b5(); break;
                case 6: func_A9EE_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA58D:
            switch (g_current_bank) {
                case 7: func_E58D(); break;
                case 1: func_A58D_b1(); break;
                case 3: func_A58D_b3(); break;
                case 4: func_A58D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC85:
            switch (g_current_bank) {
                case 4: func_AC85_b4(); break;
                case 5: func_AC85_b5(); break;
                case 6: func_AC85_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD85:
            switch (g_current_bank) {
                case 7: func_ED85(); break;
                case 1: func_AD85_b1(); break;
                case 4: func_AD85_b4(); break;
                case 5: func_AD85_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE85:
            func_AE85_b4(); break;
        case 0x9C85:
            switch (g_current_bank) {
                case 1: func_9C85_b1(); break;
                case 2: func_9C85_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAF8D:
            switch (g_current_bank) {
                case 7: func_EF8D(); break;
                case 0: func_AF8D_b0(); break;
                case 1: func_AF8D_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE38D:
            func_E38D(); break;
        case 0xE28D:
            func_E28D(); break;
        case 0xAD05:
            switch (g_current_bank) {
                case 7: func_ED05(); break;
                case 1: func_AD05_b1(); break;
                case 4: func_AD05_b4(); break;
                case 5: func_AD05_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADF5:
            switch (g_current_bank) {
                case 4: func_ADF5_b4(); break;
                case 5: func_ADF5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC900:
            func_C900(); break;
        case 0x8A48:
            switch (g_current_bank) {
                case 0: func_8A48_b0(); break;
                case 3: func_8A48_b3(); break;
                case 6: func_8A48_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD48:
            switch (g_current_bank) {
                case 1: func_AD48_b1(); break;
                case 4: func_AD48_b4(); break;
                case 5: func_AD48_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA520:
            func_A520_b3(); break;
        case 0x9086:
            func_9086_b5(); break;
        case 0x8D90:
            switch (g_current_bank) {
                case 7: func_CD90(); break;
                case 1: func_8D90_b1(); break;
                case 4: func_8D90_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD14:
            switch (g_current_bank) {
                case 1: func_AD14_b1(); break;
                case 6: func_AD14_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC905:
            func_C905(); break;
        case 0xADF3:
            switch (g_current_bank) {
                case 1: func_ADF3_b1(); break;
                case 4: func_ADF3_b4(); break;
                case 5: func_ADF3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD10:
            func_AD10_b1(); break;
        case 0xAD0A:
            switch (g_current_bank) {
                case 1: func_AD0A_b1(); break;
                case 4: func_AD0A_b4(); break;
                case 5: func_AD0A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD20:
            switch (g_current_bank) {
                case 7: func_ED20(); break;
                case 0: func_AD20_b0(); break;
                case 1: func_AD20_b1(); break;
                case 4: func_AD20_b4(); break;
                case 6: func_AD20_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADEE:
            func_ADEE_b4(); break;
        case 0xF002:
            func_F002(); break;
        case 0xAD55:
            switch (g_current_bank) {
                case 1: func_AD55_b1(); break;
                case 5: func_AD55_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC936:
            func_C936(); break;
        case 0xF033:
            func_F033(); break;
        case 0xC92A:
            func_C92A(); break;
        case 0xB4A5:
            func_B4A5_b0(); break;
        case 0xF0B4:
            func_F0B4(); break;
        case 0xABE6:
            switch (g_current_bank) {
                case 1: func_ABE6_b1(); break;
                case 4: func_ABE6_b4(); break;
                case 6: func_ABE6_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD0AB:
            func_D0AB(); break;
        case 0xAAE6:
            switch (g_current_bank) {
                case 1: func_AAE6_b1(); break;
                case 4: func_AAE6_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADE6:
            switch (g_current_bank) {
                case 4: func_ADE6_b4(); break;
                case 5: func_ADE6_b5(); break;
                case 6: func_ADE6_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEEA5:
            func_EEA5(); break;
        case 0x8DEE:
            switch (g_current_bank) {
                case 1: func_8DEE_b1(); break;
                case 4: func_8DEE_b4(); break;
                case 5: func_8DEE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9920:
            func_9920_b5(); break;
        case 0xA868:
            func_A868_b4(); break;
        case 0xAA68:
            switch (g_current_bank) {
                case 0: func_AA68_b0(); break;
                case 1: func_AA68_b1(); break;
                case 4: func_AA68_b4(); break;
                case 5: func_AA68_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD40:
            switch (g_current_bank) {
                case 1: func_AD40_b1(); break;
                case 4: func_AD40_b4(); break;
                case 5: func_AD40_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD07:
            switch (g_current_bank) {
                case 4: func_AD07_b4(); break;
                case 5: func_AD07_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCE4C:
            func_CE4C(); break;
        case 0xC9F9:
            func_C9F9(); break;
        case 0xF005:
            func_F005(); break;
        case 0xC9F5:
            func_C9F5(); break;
        case 0xC9F1:
            func_C9F1(); break;
        case 0xB9F0:
            func_B9F0_b4(); break;
        case 0xB5F0:
            func_B5F0_b0(); break;
        case 0xB1F0:
            switch (g_current_bank) {
                case 7: func_F1F0(); break;
                case 1: func_B1F0_b1(); break;
                case 5: func_B1F0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADF0:
            switch (g_current_bank) {
                case 7: func_EDF0(); break;
                case 1: func_ADF0_b1(); break;
                case 4: func_ADF0_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD010:
            func_D010(); break;
        case 0xAD95:
            switch (g_current_bank) {
                case 1: func_AD95_b1(); break;
                case 4: func_AD95_b4(); break;
                case 5: func_AD95_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA58E:
            switch (g_current_bank) {
                case 3: func_A58E_b3(); break;
                case 5: func_A58E_b5(); break;
                case 0: func_A58E_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DCE:
            switch (g_current_bank) {
                case 7: func_CDCE(); break;
                case 2: func_8DCE_b2(); break;
                case 4: func_8DCE_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD03:
            switch (g_current_bank) {
                case 4: func_AD03_b4(); break;
                case 5: func_AD03_b5(); break;
                case 6: func_AD03_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD0B:
            func_AD0B_b5(); break;
        case 0xAD31:
            func_AD31_b5(); break;
        case 0xAD2C:
            switch (g_current_bank) {
                case 1: func_AD2C_b1(); break;
                case 5: func_AD2C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE00:
            switch (g_current_bank) {
                case 1: func_AE00_b1(); break;
                case 4: func_AE00_b4(); break;
                case 5: func_AE00_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAEC8:
            switch (g_current_bank) {
                case 0: func_AEC8_b0(); break;
                case 1: func_AEC8_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xDFC8:
            func_DFC8(); break;
        case 0xF4C8:
            func_F4C8(); break;
        case 0xF5C8:
            func_F5C8(); break;
        case 0xB5C9:
            switch (g_current_bank) {
                case 0: func_B5C9_b0(); break;
                case 4: func_B5C9_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA20:
            func_BA20_b4(); break;
        case 0xCD04:
            func_CD04(); break;
        case 0xA90F:
            switch (g_current_bank) {
                case 1: func_A90F_b1(); break;
                case 4: func_A90F_b4(); break;
                case 5: func_A90F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD4C:
            switch (g_current_bank) {
                case 1: func_AD4C_b1(); break;
                case 4: func_AD4C_b4(); break;
                case 5: func_AD4C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEED8:
            func_EED8(); break;
        case 0x9012:
            switch (g_current_bank) {
                case 7: func_D012(); break;
                case 0: func_9012_b0(); break;
                case 1: func_9012_b1(); break;
                case 3: func_9012_b3(); break;
                case 4: func_9012_b4(); break;
                case 5: func_9012_b5(); break;
                case 6: func_9012_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D11:
            switch (g_current_bank) {
                case 0: func_8D11_b0(); break;
                case 1: func_8D11_b1(); break;
                case 4: func_8D11_b4(); break;
                case 6: func_8D11_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD11:
            func_AD11_b1(); break;
        case 0x8EAD:
            switch (g_current_bank) {
                case 7: func_CEAD(); break;
                case 1: func_8EAD_b1(); break;
                case 4: func_8EAD_b4(); break;
                case 5: func_8EAD_b5(); break;
                case 6: func_8EAD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADC7:
            switch (g_current_bank) {
                case 1: func_ADC7_b1(); break;
                case 4: func_ADC7_b4(); break;
                case 5: func_ADC7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCEC9:
            func_CEC9(); break;
        case 0xADC9:
            switch (g_current_bank) {
                case 1: func_ADC9_b1(); break;
                case 4: func_ADC9_b4(); break;
                case 5: func_ADC9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD12:
            switch (g_current_bank) {
                case 1: func_AD12_b1(); break;
                case 4: func_AD12_b4(); break;
                case 5: func_AD12_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D0E:
            switch (g_current_bank) {
                case 7: func_CD0E(); break;
                case 1: func_8D0E_b1(); break;
                case 4: func_8D0E_b4(); break;
                case 5: func_8D0E_b5(); break;
                case 6: func_8D0E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD0F:
            switch (g_current_bank) {
                case 4: func_AD0F_b4(); break;
                case 5: func_AD0F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA908:
            switch (g_current_bank) {
                case 1: func_A908_b1(); break;
                case 4: func_A908_b4(); break;
                case 5: func_A908_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xACCA:
            switch (g_current_bank) {
                case 2: func_ACCA_b2(); break;
                case 5: func_ACCA_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE1CC:
            func_E1CC(); break;
        case 0xBBCD:
            func_BBCD_b4(); break;
        case 0xCACD:
            func_CACD(); break;
        case 0xADCA:
            func_ADCA_b1(); break;
        case 0xA51F:
            switch (g_current_bank) {
                case 1: func_A51F_b1(); break;
                case 2: func_A51F_b2(); break;
                case 3: func_A51F_b3(); break;
                case 4: func_A51F_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD19:
            func_AD19_b5(); break;
        case 0x8D1A:
            func_8D1A_b6(); break;
        case 0x8D14:
            switch (g_current_bank) {
                case 7: func_CD14(); break;
                case 0: func_8D14_b0(); break;
                case 1: func_8D14_b1(); break;
                case 6: func_8D14_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8F8D:
            switch (g_current_bank) {
                case 1: func_8F8D_b1(); break;
                case 6: func_8F8D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9CB:
            switch (g_current_bank) {
                case 1: func_A9CB_b1(); break;
                case 4: func_A9CB_b4(); break;
                case 6: func_A9CB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA928:
            switch (g_current_bank) {
                case 4: func_A928_b4(); break;
                case 5: func_A928_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9BB:
            switch (g_current_bank) {
                case 1: func_A9BB_b1(); break;
                case 4: func_A9BB_b4(); break;
                case 5: func_A9BB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE03:
            switch (g_current_bank) {
                case 1: func_AE03_b1(); break;
                case 4: func_AE03_b4(); break;
                case 5: func_AE03_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB6AD:
            func_B6AD_b4(); break;
        case 0xB6CE:
            func_B6CE_b4(); break;
        case 0xADCC:
            func_ADCC_b1(); break;
        case 0xB004:
            switch (g_current_bank) {
                case 7: func_F004(); break;
                case 3: func_B004_b3(); break;
                case 5: func_B004_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADE9:
            switch (g_current_bank) {
                case 3: func_ADE9_b3(); break;
                case 4: func_ADE9_b4(); break;
                case 5: func_ADE9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85F0:
            switch (g_current_bank) {
                case 2: func_85F0_b2(); break;
                case 5: func_85F0_b5(); break;
                case 6: func_85F0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9B1:
            func_A9B1_b3(); break;
        case 0xF0B1:
            func_F0B1(); break;
        case 0xA56F:
            switch (g_current_bank) {
                case 1: func_A56F_b1(); break;
                case 2: func_A56F_b2(); break;
                case 3: func_A56F_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCEE0:
            func_CEE0(); break;
        case 0x8D16:
            switch (g_current_bank) {
                case 0: func_8D16_b0(); break;
                case 1: func_8D16_b1(); break;
                case 4: func_8D16_b4(); break;
                case 6: func_8D16_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0A9:
            switch (g_current_bank) {
                case 7: func_F0A9(); break;
                case 0: func_B0A9_b0(); break;
                case 4: func_B0A9_b4(); break;
                case 5: func_B0A9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DB0:
            switch (g_current_bank) {
                case 4: func_8DB0_b4(); break;
                case 6: func_8DB0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF080:
            func_F080(); break;
        case 0xBBA5:
            func_BBA5_b4(); break;
        case 0x8D13:
            switch (g_current_bank) {
                case 4: func_8D13_b4(); break;
                case 5: func_8D13_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9B9:
            switch (g_current_bank) {
                case 1: func_A9B9_b1(); break;
                case 5: func_A9B9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD16:
            switch (g_current_bank) {
                case 1: func_AD16_b1(); break;
                case 5: func_AD16_b5(); break;
                case 6: func_AD16_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9CD:
            func_A9CD_b6(); break;
        case 0xA90C:
            switch (g_current_bank) {
                case 4: func_A90C_b4(); break;
                case 5: func_A90C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4A5:
            switch (g_current_bank) {
                case 7: func_E4A5(); break;
                case 1: func_A4A5_b1(); break;
                case 4: func_A4A5_b4(); break;
                case 5: func_A4A5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADA1:
            switch (g_current_bank) {
                case 1: func_ADA1_b1(); break;
                case 4: func_ADA1_b4(); break;
                case 5: func_ADA1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D33:
            switch (g_current_bank) {
                case 3: func_8D33_b3(); break;
                case 5: func_8D33_b5(); break;
                case 6: func_8D33_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9CE:
            func_A9CE_b4(); break;
        case 0xAD1B:
            switch (g_current_bank) {
                case 1: func_AD1B_b1(); break;
                case 5: func_AD1B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA914:
            switch (g_current_bank) {
                case 1: func_A914_b1(); break;
                case 5: func_A914_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADCF:
            switch (g_current_bank) {
                case 1: func_ADCF_b1(); break;
                case 4: func_ADCF_b4(); break;
                case 5: func_ADCF_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD24:
            switch (g_current_bank) {
                case 1: func_AD24_b1(); break;
                case 6: func_AD24_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD30:
            switch (g_current_bank) {
                case 1: func_AD30_b1(); break;
                case 5: func_AD30_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9D0:
            func_A9D0_b6(); break;
        case 0xB6D0:
            func_B6D0_b4(); break;
        case 0xCAD0:
            func_CAD0(); break;
        case 0xADF2:
            func_ADF2_b4(); break;
        case 0xE2AD:
            func_E2AD(); break;
        case 0xF063:
            func_F063(); break;
        case 0xAD63:
            switch (g_current_bank) {
                case 1: func_AD63_b1(); break;
                case 3: func_AD63_b3(); break;
                case 5: func_AD63_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9585:
            switch (g_current_bank) {
                case 1: func_9585_b1(); break;
                case 4: func_9585_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9E3:
            switch (g_current_bank) {
                case 1: func_A9E3_b1(); break;
                case 4: func_A9E3_b4(); break;
                case 5: func_A9E3_b5(); break;
                case 6: func_A9E3_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D7B:
            switch (g_current_bank) {
                case 4: func_8D7B_b4(); break;
                case 5: func_8D7B_b5(); break;
                case 6: func_8D7B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADED:
            switch (g_current_bank) {
                case 7: func_EDED(); break;
                case 4: func_ADED_b4(); break;
                case 5: func_ADED_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB94C:
            func_B94C_b4(); break;
        case 0xAD65:
            switch (g_current_bank) {
                case 1: func_AD65_b1(); break;
                case 5: func_AD65_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD96:
            switch (g_current_bank) {
                case 4: func_AD96_b4(); break;
                case 5: func_AD96_b5(); break;
                case 6: func_AD96_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9E4:
            switch (g_current_bank) {
                case 1: func_A9E4_b1(); break;
                case 4: func_A9E4_b4(); break;
                case 5: func_A9E4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADD2:
            switch (g_current_bank) {
                case 1: func_ADD2_b1(); break;
                case 4: func_ADD2_b4(); break;
                case 5: func_ADD2_b5(); break;
                case 6: func_ADD2_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD37:
            switch (g_current_bank) {
                case 1: func_AD37_b1(); break;
                case 4: func_AD37_b4(); break;
                case 5: func_AD37_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD32:
            switch (g_current_bank) {
                case 1: func_AD32_b1(); break;
                case 4: func_AD32_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD26:
            func_AD26_b1(); break;
        case 0xA921:
            switch (g_current_bank) {
                case 3: func_A921_b3(); break;
                case 4: func_A921_b4(); break;
                case 5: func_A921_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADD0:
            switch (g_current_bank) {
                case 7: func_EDD0(); break;
                case 1: func_ADD0_b1(); break;
                case 4: func_ADD0_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A4C:
            func_9A4C_b5(); break;
        case 0xAC0C:
            switch (g_current_bank) {
                case 1: func_AC0C_b1(); break;
                case 2: func_AC0C_b2(); break;
                case 4: func_AC0C_b4(); break;
                case 6: func_AC0C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADE1:
            func_ADE1_b4(); break;
        case 0xA9D8:
            func_A9D8_b6(); break;
        case 0xA9D3:
            switch (g_current_bank) {
                case 1: func_A9D3_b1(); break;
                case 4: func_A9D3_b4(); break;
                case 6: func_A9D3_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC0A9:
            func_C0A9(); break;
        case 0xB00B:
            switch (g_current_bank) {
                case 4: func_B00B_b4(); break;
                case 5: func_B00B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE4E3:
            func_E4E3(); break;
        case 0xB4B3:
            func_B4B3_b0(); break;
        case 0xD1D0:
            func_D1D0(); break;
        case 0xF2D0:
            func_F2D0(); break;
        case 0xE06A:
            func_E06A(); break;
        case 0xF5F4:
            func_F5F4(); break;
        case 0x8F8E:
            switch (g_current_bank) {
                case 1: func_8F8E_b1(); break;
                case 4: func_8F8E_b4(); break;
                case 5: func_8F8E_b5(); break;
                case 6: func_8F8E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9E9D:
            switch (g_current_bank) {
                case 4: func_9E9D_b4(); break;
                case 5: func_9E9D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC00:
            switch (g_current_bank) {
                case 1: func_AC00_b1(); break;
                case 4: func_AC00_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADAC:
            func_ADAC_b4(); break;
        case 0xAEAD:
            switch (g_current_bank) {
                case 7: func_EEAD(); break;
                case 0: func_AEAD_b0(); break;
                case 4: func_AEAD_b4(); break;
                case 5: func_AEAD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAFAE:
            switch (g_current_bank) {
                case 1: func_AFAE_b1(); break;
                case 3: func_AFAE_b3(); break;
                case 5: func_AFAE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBBBA:
            func_BBBA_b4(); break;
        case 0xBCBB:
            func_BCBB_b4(); break;
        case 0xDDDC:
            func_DDDC(); break;
        case 0xAE13:
            switch (g_current_bank) {
                case 1: func_AE13_b1(); break;
                case 4: func_AE13_b4(); break;
                case 5: func_AE13_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D23:
            switch (g_current_bank) {
                case 0: func_9D23_b0(); break;
                case 2: func_9D23_b2(); break;
                case 5: func_9D23_b5(); break;
                case 6: func_9D23_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9E8:
            switch (g_current_bank) {
                case 7: func_E9E8(); break;
                case 4: func_A9E8_b4(); break;
                case 5: func_A9E8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC5A9:
            func_C5A9(); break;
        case 0xAD1F:
            switch (g_current_bank) {
                case 0: func_AD1F_b0(); break;
                case 5: func_AD1F_b5(); break;
                case 6: func_AD1F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEA20:
            func_EA20(); break;
        case 0xADDF:
            switch (g_current_bank) {
                case 4: func_ADDF_b4(); break;
                case 5: func_ADDF_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD1D:
            switch (g_current_bank) {
                case 4: func_AD1D_b4(); break;
                case 5: func_AD1D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE61D:
            func_E61D(); break;
        case 0xAE1D:
            func_AE1D_b5(); break;
        case 0x9D60:
            switch (g_current_bank) {
                case 1: func_9D60_b1(); break;
                case 4: func_9D60_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADE8:
            switch (g_current_bank) {
                case 7: func_EDE8(); break;
                case 4: func_ADE8_b4(); break;
                case 6: func_ADE8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8515:
            switch (g_current_bank) {
                case 4: func_8515_b4(); break;
                case 0: func_8515_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D80:
            switch (g_current_bank) {
                case 3: func_9D80_b3(); break;
                case 5: func_9D80_b5(); break;
                case 6: func_9D80_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA810:
            func_A810_b6(); break;
        case 0xB91D:
            func_B91D_b4(); break;
        case 0xA9F0:
            switch (g_current_bank) {
                case 7: func_E9F0(); break;
                case 4: func_A9F0_b4(); break;
                case 5: func_A9F0_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB920:
            switch (g_current_bank) {
                case 0: func_B920_b0(); break;
                case 4: func_B920_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC801:
            func_C801(); break;
        case 0xC6E8:
            func_C6E8(); break;
        case 0x8EF4:
            switch (g_current_bank) {
                case 7: func_CEF4(); break;
                case 1: func_8EF4_b1(); break;
                case 4: func_8EF4_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA91F:
            switch (g_current_bank) {
                case 0: func_A91F_b0(); break;
                case 3: func_A91F_b3(); break;
                case 5: func_A91F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE18:
            switch (g_current_bank) {
                case 1: func_AE18_b1(); break;
                case 4: func_AE18_b4(); break;
                case 5: func_AE18_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA438:
            switch (g_current_bank) {
                case 4: func_A438_b4(); break;
                case 5: func_A438_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0E8:
            switch (g_current_bank) {
                case 7: func_E0E8(); break;
                case 1: func_A0E8_b1(); break;
                case 5: func_A0E8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC8E8:
            func_C8E8(); break;
        case 0x8521:
            switch (g_current_bank) {
                case 1: func_8521_b1(); break;
                case 6: func_8521_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADDD:
            switch (g_current_bank) {
                case 1: func_ADDD_b1(); break;
                case 5: func_ADDD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA500:
            switch (g_current_bank) {
                case 1: func_A500_b1(); break;
                case 3: func_A500_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB917:
            func_B917_b4(); break;
        case 0x93A9:
            switch (g_current_bank) {
                case 3: func_93A9_b3(); break;
                case 5: func_93A9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8EA9:
            func_8EA9_b6(); break;
        case 0xAD02:
            switch (g_current_bank) {
                case 1: func_AD02_b1(); break;
                case 5: func_AD02_b5(); break;
                case 6: func_AD02_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9DD:
            switch (g_current_bank) {
                case 4: func_A9DD_b4(); break;
                case 6: func_A9DD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DA9:
            func_9DA9_b3(); break;
        case 0xCEDD:
            func_CEDD(); break;
        case 0x9DCE:
            switch (g_current_bank) {
                case 1: func_9DCE_b1(); break;
                case 5: func_9DCE_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9A8:
            func_B9A8_b4(); break;
        case 0x9DDF:
            func_9DDF_b3(); break;
        case 0xC9AD:
            func_C9AD(); break;
        case 0xCDAD:
            func_CDAD(); break;
        case 0xD5A9:
            func_D5A9(); break;
        case 0x9DD5:
            func_9DD5_b5(); break;
        case 0x9A85:
            switch (g_current_bank) {
                case 3: func_9A85_b3(); break;
                case 4: func_9A85_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD069:
            func_D069(); break;
        case 0xAE04:
            switch (g_current_bank) {
                case 7: func_EE04(); break;
                case 1: func_AE04_b1(); break;
                case 4: func_AE04_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DC4:
            switch (g_current_bank) {
                case 4: func_9DC4_b4(); break;
                case 5: func_9DC4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD23:
            switch (g_current_bank) {
                case 0: func_AD23_b0(); break;
                case 4: func_AD23_b4(); break;
                case 5: func_AD23_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D84:
            func_9D84_b5(); break;
        case 0xA575:
            switch (g_current_bank) {
                case 7: func_E575(); break;
                case 1: func_A575_b1(); break;
                case 2: func_A575_b2(); break;
                case 3: func_A575_b3(); break;
                case 4: func_A575_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA20:
            switch (g_current_bank) {
                case 7: func_EA20(); break;
                case 1: func_AA20_b1(); break;
                case 4: func_AA20_b4(); break;
                case 5: func_AA20_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D50:
            func_8D50_b5(); break;
        case 0x8A03:
            switch (g_current_bank) {
                case 7: func_CA03(); break;
                case 3: func_8A03_b3(); break;
                case 6: func_8A03_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAEDF:
            switch (g_current_bank) {
                case 0: func_AEDF_b0(); break;
                case 4: func_AEDF_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF008:
            func_F008(); break;
        case 0x9DF8:
            switch (g_current_bank) {
                case 1: func_9DF8_b1(); break;
                case 4: func_9DF8_b4(); break;
                case 5: func_9DF8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB013:
            switch (g_current_bank) {
                case 7: func_F013(); break;
                case 1: func_B013_b1(); break;
                case 6: func_B013_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D90:
            switch (g_current_bank) {
                case 7: func_DD90(); break;
                case 1: func_9D90_b1(); break;
                case 3: func_9D90_b3(); break;
                case 5: func_9D90_b5(); break;
                case 6: func_9D90_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE803:
            func_E803(); break;
        case 0xE0E8:
            func_E0E8(); break;
        case 0xA9F8:
            switch (g_current_bank) {
                case 7: func_E9F8(); break;
                case 4: func_A9F8_b4(); break;
                case 5: func_A9F8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA19D:
            switch (g_current_bank) {
                case 1: func_A19D_b1(); break;
                case 3: func_A19D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA98D:
            switch (g_current_bank) {
                case 3: func_A98D_b3(); break;
                case 4: func_A98D_b4(); break;
                case 6: func_A98D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD8D:
            switch (g_current_bank) {
                case 7: func_ED8D(); break;
                case 1: func_AD8D_b1(); break;
                case 4: func_AD8D_b4(); break;
                case 5: func_AD8D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC802:
            func_C802(); break;
        case 0xA513:
            func_A513_b1(); break;
        case 0xADAA:
            func_ADAA_b4(); break;
        case 0xC8E2:
            func_C8E2(); break;
        case 0xA916:
            func_A916_b4(); break;
        case 0x85E4:
            switch (g_current_bank) {
                case 1: func_85E4_b1(); break;
                case 2: func_85E4_b2(); break;
                case 6: func_85E4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADE5:
            switch (g_current_bank) {
                case 4: func_ADE5_b4(); break;
                case 5: func_ADE5_b5(); break;
                case 6: func_ADE5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9E5:
            switch (g_current_bank) {
                case 1: func_A9E5_b1(); break;
                case 4: func_A9E5_b4(); break;
                case 5: func_A9E5_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADA0:
            func_ADA0_b4(); break;
        case 0x8DE6:
            switch (g_current_bank) {
                case 4: func_8DE6_b4(); break;
                case 6: func_8DE6_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADFF:
            switch (g_current_bank) {
                case 1: func_ADFF_b1(); break;
                case 6: func_ADFF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x88AD:
            func_88AD_b1(); break;
        case 0xC97A:
            func_C97A(); break;
        case 0xC95A:
            func_C95A(); break;
        case 0xA911:
            switch (g_current_bank) {
                case 1: func_A911_b1(); break;
                case 4: func_A911_b4(); break;
                case 5: func_A911_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADE3:
            func_ADE3_b1(); break;
        case 0xAD1A:
            switch (g_current_bank) {
                case 1: func_AD1A_b1(); break;
                case 4: func_AD1A_b4(); break;
                case 5: func_AD1A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x97CE:
            func_97CE_b4(); break;
        case 0xB995:
            func_B995_b4(); break;
        case 0xC805:
            func_C805(); break;
        case 0xADB5:
            func_ADB5_b4(); break;
        case 0x9A66:
            switch (g_current_bank) {
                case 0: func_9A66_b0(); break;
                case 1: func_9A66_b1(); break;
                case 5: func_9A66_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A26:
            switch (g_current_bank) {
                case 3: func_9A26_b3(); break;
                case 5: func_9A26_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9726:
            func_9726_b3(); break;
        case 0xEDD0:
            func_EDD0(); break;
        case 0xAD09:
            switch (g_current_bank) {
                case 1: func_AD09_b1(); break;
                case 3: func_AD09_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADE4:
            switch (g_current_bank) {
                case 4: func_ADE4_b4(); break;
                case 5: func_ADE4_b5(); break;
                case 6: func_ADE4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD1CD:
            func_D1CD(); break;
        case 0xAD27:
            switch (g_current_bank) {
                case 1: func_AD27_b1(); break;
                case 5: func_AD27_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF24C:
            func_F24C(); break;
        case 0x9E4C:
            func_9E4C_b4(); break;
        case 0xA52D:
            func_A52D_b4(); break;
        case 0xACA9:
            switch (g_current_bank) {
                case 7: func_ECA9(); break;
                case 1: func_ACA9_b1(); break;
                case 4: func_ACA9_b4(); break;
                case 5: func_ACA9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE5A9:
            func_E5A9(); break;
        case 0xECA9:
            func_ECA9(); break;
        case 0xC924:
            func_C924(); break;
        case 0xA9A7:
            switch (g_current_bank) {
                case 1: func_A9A7_b1(); break;
                case 3: func_A9A7_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA885:
            func_A885_b5(); break;
        case 0xA9A9:
            switch (g_current_bank) {
                case 7: func_E9A9(); break;
                case 1: func_A9A9_b1(); break;
                case 3: func_A9A9_b3(); break;
                case 4: func_A9A9_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA385:
            switch (g_current_bank) {
                case 7: func_E385(); break;
                case 1: func_A385_b1(); break;
                case 4: func_A385_b4(); break;
                case 6: func_A385_b6(); break;
                case 0: func_A385_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9A3:
            switch (g_current_bank) {
                case 2: func_A9A3_b2(); break;
                case 3: func_A9A3_b3(); break;
                case 4: func_A9A3_b4(); break;
                case 5: func_A9A3_b5(); break;
                case 6: func_A9A3_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA961:
            switch (g_current_bank) {
                case 3: func_A961_b3(); break;
                case 5: func_A961_b5(); break;
                case 6: func_A961_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D31:
            switch (g_current_bank) {
                case 1: func_8D31_b1(); break;
                case 4: func_8D31_b4(); break;
                case 5: func_8D31_b5(); break;
                case 6: func_8D31_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9014:
            switch (g_current_bank) {
                case 7: func_D014(); break;
                case 1: func_9014_b1(); break;
                case 5: func_9014_b5(); break;
                case 6: func_9014_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD7A9:
            func_D7A9(); break;
        case 0x9C8D:
            switch (g_current_bank) {
                case 7: func_DC8D(); break;
                case 1: func_9C8D_b1(); break;
                case 5: func_9C8D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9BD:
            func_A9BD_b5(); break;
        case 0xADAB:
            switch (g_current_bank) {
                case 4: func_ADAB_b4(); break;
                case 5: func_ADAB_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADAD:
            func_ADAD_b5(); break;
        case 0xA9AD:
            switch (g_current_bank) {
                case 3: func_A9AD_b3(); break;
                case 4: func_A9AD_b4(); break;
                case 5: func_A9AD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB100:
            func_B100_b5(); break;
        case 0x89A9:
            switch (g_current_bank) {
                case 7: func_C9A9(); break;
                case 1: func_89A9_b1(); break;
                case 5: func_89A9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB104:
            switch (g_current_bank) {
                case 0: func_B104_b0(); break;
                case 1: func_B104_b1(); break;
                case 4: func_B104_b4(); break;
                case 5: func_B104_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC820:
            func_C820(); break;
        case 0xE538:
            func_E538(); break;
        case 0xA875:
            switch (g_current_bank) {
                case 4: func_A875_b4(); break;
                case 5: func_A875_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9875:
            switch (g_current_bank) {
                case 1: func_9875_b1(); break;
                case 3: func_9875_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB901:
            func_B901_b4(); break;
        case 0xA599:
            func_A599_b3(); break;
        case 0x85FF:
            switch (g_current_bank) {
                case 1: func_85FF_b1(); break;
                case 5: func_85FF_b5(); break;
                case 6: func_85FF_b6(); break;
                case 2: func_85FF_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE0A9:
            func_E0A9(); break;
        case 0xE0A0:
            func_E0A0(); break;
        case 0x9992:
            func_9992_b1(); break;
        case 0xB904:
            func_B904_b4(); break;
        case 0xA9C2:
            switch (g_current_bank) {
                case 1: func_A9C2_b1(); break;
                case 4: func_A9C2_b4(); break;
                case 6: func_A9C2_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC614:
            func_C614(); break;
        case 0xA514:
            switch (g_current_bank) {
                case 4: func_A514_b4(); break;
                case 5: func_A514_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9EB:
            func_B9EB_b4(); break;
        case 0xE4F0:
            func_E4F0(); break;
        case 0xD014:
            func_D014(); break;
        case 0x9010:
            switch (g_current_bank) {
                case 7: func_D010(); break;
                case 3: func_9010_b3(); break;
                case 4: func_9010_b4(); break;
                case 6: func_9010_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9026:
            switch (g_current_bank) {
                case 5: func_9026_b5(); break;
                case 6: func_9026_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEC46:
            func_EC46(); break;
        case 0xD8D0:
            func_D8D0(); break;
        case 0xEC02:
            func_EC02(); break;
        case 0xD063:
            func_D063(); break;
        case 0xB975:
            func_B975_b4(); break;
        case 0xCCC8:
            func_CCC8(); break;
        case 0xB0A8:
            switch (g_current_bank) {
                case 0: func_B0A8_b0(); break;
                case 1: func_B0A8_b1(); break;
                case 5: func_B0A8_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB91C:
            func_B91C_b4(); break;
        case 0xAD6C:
            switch (g_current_bank) {
                case 4: func_AD6C_b4(); break;
                case 5: func_AD6C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEDE7:
            func_EDE7(); break;
        case 0xED6B:
            func_ED6B(); break;
        case 0xED8A:
            func_ED8A(); break;
        case 0xCCEE:
            func_CCEE(); break;
        case 0xEDA9:
            func_EDA9(); break;
        case 0xACEE:
            switch (g_current_bank) {
                case 7: func_ECEE(); break;
                case 1: func_ACEE_b1(); break;
                case 4: func_ACEE_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEBAD:
            func_EBAD(); break;
        case 0xEBAE:
            func_EBAE(); break;
        case 0xB2EE:
            func_B2EE_b0(); break;
        case 0xB6EE:
            func_B6EE_b4(); break;
        case 0x8D40:
            switch (g_current_bank) {
                case 3: func_8D40_b3(); break;
                case 4: func_8D40_b4(); break;
                case 6: func_8D40_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8568:
            switch (g_current_bank) {
                case 2: func_8568_b2(); break;
                case 6: func_8568_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADE0:
            switch (g_current_bank) {
                case 4: func_ADE0_b4(); break;
                case 5: func_ADE0_b5(); break;
                case 6: func_ADE0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xDC8D:
            func_DC8D(); break;
        case 0xA401:
            switch (g_current_bank) {
                case 4: func_A401_b4(); break;
                case 6: func_A401_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD00B:
            func_D00B(); break;
        case 0xC803:
            func_C803(); break;
        case 0xAA08:
            func_AA08_b5(); break;
        case 0xEEAA:
            func_EEAA(); break;
        case 0xA9EF:
            func_A9EF_b5(); break;
        case 0xACEF:
            switch (g_current_bank) {
                case 1: func_ACEF_b1(); break;
                case 5: func_ACEF_b5(); break;
                case 6: func_ACEF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x851C:
            func_851C_b6(); break;
        case 0x9803:
            switch (g_current_bank) {
                case 0: func_9803_b0(); break;
                case 1: func_9803_b1(); break;
                case 4: func_9803_b4(); break;
                case 5: func_9803_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D1C:
            switch (g_current_bank) {
                case 1: func_8D1C_b1(); break;
                case 4: func_8D1C_b4(); break;
                case 6: func_8D1C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC03:
            switch (g_current_bank) {
                case 1: func_AC03_b1(); break;
                case 4: func_AC03_b4(); break;
                case 5: func_AC03_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE8AC:
            func_E8AC(); break;
        case 0xF264:
            func_F264(); break;
        case 0xF20B:
            func_F20B(); break;
        case 0x8E1E:
            switch (g_current_bank) {
                case 1: func_8E1E_b1(); break;
                case 6: func_8E1E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE6CD:
            func_E6CD(); break;
        case 0xCC03:
            func_CC03(); break;
        case 0xE88C:
            func_E88C(); break;
        case 0xE4CD:
            func_E4CD(); break;
        case 0xEE09:
            func_EE09(); break;
        case 0xA511:
            func_A511_b1(); break;
        case 0xC80D:
            func_C80D(); break;
        case 0xAD0E:
            switch (g_current_bank) {
                case 1: func_AD0E_b1(); break;
                case 5: func_AD0E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C20:
            switch (g_current_bank) {
                case 7: func_CC20(); break;
                case 1: func_8C20_b1(); break;
                case 3: func_8C20_b3(); break;
                case 6: func_8C20_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2CB:
            switch (g_current_bank) {
                case 1: func_A2CB_b1(); break;
                case 2: func_A2CB_b2(); break;
                case 6: func_A2CB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9AFF:
            switch (g_current_bank) {
                case 1: func_9AFF_b1(); break;
                case 5: func_9AFF_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD9A:
            switch (g_current_bank) {
                case 1: func_AD9A_b1(); break;
                case 4: func_AD9A_b4(); break;
                case 5: func_AD9A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA06:
            switch (g_current_bank) {
                case 4: func_AA06_b4(); break;
                case 5: func_AA06_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xED85:
            func_ED85(); break;
        case 0xA9ED:
            switch (g_current_bank) {
                case 7: func_E9ED(); break;
                case 4: func_A9ED_b4(); break;
                case 5: func_A9ED_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85E2:
            switch (g_current_bank) {
                case 2: func_85E2_b2(); break;
                case 5: func_85E2_b5(); break;
                case 6: func_85E2_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE385:
            func_E385(); break;
        case 0xE785:
            func_E785(); break;
        case 0xA660:
            switch (g_current_bank) {
                case 0: func_A660_b0(); break;
                case 1: func_A660_b1(); break;
                case 4: func_A660_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEEA6:
            func_EEA6(); break;
        case 0xF210:
            func_F210(); break;
        case 0x8ECA:
            switch (g_current_bank) {
                case 7: func_CECA(); break;
                case 1: func_8ECA_b1(); break;
                case 4: func_8ECA_b4(); break;
                case 5: func_8ECA_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEBD0:
            func_EBD0(); break;
        case 0xA9F6:
            func_A9F6_b5(); break;
        case 0x8C00:
            switch (g_current_bank) {
                case 1: func_8C00_b1(); break;
                case 5: func_8C00_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF6B0:
            func_F6B0(); break;
        case 0xC807:
            func_C807(); break;
        case 0x9005:
            switch (g_current_bank) {
                case 7: func_D005(); break;
                case 1: func_9005_b1(); break;
                case 3: func_9005_b3(); break;
                case 4: func_9005_b4(); break;
                case 5: func_9005_b5(); break;
                case 6: func_9005_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC915:
            func_C915(); break;
        case 0x9D11:
            switch (g_current_bank) {
                case 1: func_9D11_b1(); break;
                case 2: func_9D11_b2(); break;
                case 5: func_9D11_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D68:
            switch (g_current_bank) {
                case 5: func_9D68_b5(); break;
                case 6: func_9D68_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC812:
            func_C812(); break;
        case 0xC8F6:
            func_C8F6(); break;
        case 0xC8E6:
            func_C8E6(); break;
        case 0xA9F3:
            switch (g_current_bank) {
                case 7: func_E9F3(); break;
                case 4: func_A9F3_b4(); break;
                case 5: func_A9F3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x848C:
            func_848C_b6(); break;
        case 0x8D62:
            func_8D62_b4(); break;
        case 0x980C:
            func_980C_b5(); break;
        case 0x9CFF:
            func_9CFF_b5(); break;
        case 0x8184:
            func_8184_b0(); break;
        case 0xF000:
            func_F000(); break;
        case 0xAA51:
            func_AA51_b4(); break;
        case 0xA9B2:
            func_A9B2_b4(); break;
        case 0xA9A5:
            switch (g_current_bank) {
                case 5: func_A9A5_b5(); break;
                case 4: func_A9A5_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DDB:
            func_8DDB_b4(); break;
        case 0x924B:
            func_924B_b4(); break;
        case 0x8B22:
            func_8B22_b1(); break;
        case 0xA8D1:
            func_A8D1_b4(); break;
        case 0x8F9B:
            func_8F9B_b1(); break;
        case 0xEB71:
            func_EB71(); break;
        case 0x8C8E:
            func_8C8E_b5(); break;
        case 0x8493:
            func_8493_b6(); break;
        case 0xB6FA:
            func_B6FA_b4(); break;
        case 0x9FB2:
            func_9FB2_b4(); break;
        case 0x8E4E:
            func_8E4E_b4(); break;
        case 0x8E4D:
            func_8E4D_b4(); break;
        case 0x8FDE:
            func_8FDE_b4(); break;
        case 0x8E29:
            func_8E29_b4(); break;
        case 0xADB1:
            func_ADB1_b4(); break;
        case 0xAA2C:
            func_AA2C_b5(); break;
        case 0xB045:
            func_B045_b5(); break;
        case 0xA95C:
            func_A95C_b6(); break;
        case 0xA96F:
            func_A96F_b6(); break;
        case 0xA982:
            func_A982_b6(); break;
        case 0xA995:
            func_A995_b6(); break;
        case 0xA17A:
            func_A17A_b5(); break;
        case 0x874F:
            func_874F_b3(); break;
        case 0xA38B:
            func_A38B_b6(); break;
        case 0xA527:
            func_A527_b4(); break;
        case 0x8476:
            func_8476_b6(); break;
        case 0xAC94:
            func_AC94_b4(); break;
        case 0xAEB6:
            func_AEB6_b4(); break;
        case 0xD004:
            func_D004(); break;
        case 0x9F52:
            func_9F52_b5(); break;
        case 0x8BD1:
            func_8BD1_b1(); break;
        case 0xAFC3:
            func_AFC3_b1(); break;
        case 0xB03D:
            switch (g_current_bank) {
                case 3: func_B03D_b3(); break;
                case 4: func_B03D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB228:
            func_B228_b5(); break;
        case 0x8255:
            func_8255_b0(); break;
        case 0xAA09:
            func_AA09_b5(); break;
        case 0x8A09:
            func_8A09_b5(); break;
        case 0xAD6A:
            func_AD6A_b4(); break;
        case 0xAE97:
            func_AE97_b5(); break;
        case 0xB137:
            func_B137_b5(); break;
        case 0xAE0F:
            func_AE0F_b5(); break;
        case 0xAE25:
            func_AE25_b5(); break;
        case 0xADF1:
            func_ADF1_b5(); break;
        case 0x8A0B:
            func_8A0B_b3(); break;
        case 0x9869:
            func_9869_b5(); break;
        case 0x986E:
            func_986E_b5(); break;
        case 0x984A:
            func_984A_b5(); break;
        case 0xAD25:
            func_AD25_b5(); break;
        case 0x8E81:
            func_8E81_b6(); break;
        case 0x8EA0:
            func_8EA0_b6(); break;
        case 0xB436:
            func_B436_b0(); break;
        case 0xB4E8:
            func_B4E8_b0(); break;
        case 0xB4AD:
            func_B4AD_b0(); break;
        case 0xB477:
            func_B477_b0(); break;
        case 0xA44B:
            func_A44B_b0(); break;
        case 0xA45C:
            func_A45C_b0(); break;
        case 0x848E:
            func_848E_b0(); break;
        case 0xA48E:
            func_A48E_b0(); break;
        case 0x8497:
            func_8497_b0(); break;
        case 0xA497:
            switch (g_current_bank) {
                case 0: func_A497_b0(); break;
                case 4: func_A497_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84A0:
            func_84A0_b0(); break;
        case 0xA4A0:
            func_A4A0_b0(); break;
        case 0xA4A9:
            func_A4A9_b0(); break;
        case 0x84B2:
            func_84B2_b0(); break;
        case 0xA4B2:
            switch (g_current_bank) {
                case 0: func_A4B2_b0(); break;
                case 3: func_A4B2_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84BB:
            func_84BB_b0(); break;
        case 0x84C4:
            func_84C4_b0(); break;
        case 0xA4C4:
            func_A4C4_b0(); break;
        case 0x84CD:
            func_84CD_b0(); break;
        case 0xA4CD:
            switch (g_current_bank) {
                case 7: func_E4CD(); break;
                case 0: func_A4CD_b0(); break;
                case 3: func_A4CD_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84D6:
            func_84D6_b0(); break;
        case 0xA4D6:
            switch (g_current_bank) {
                case 0: func_A4D6_b0(); break;
                case 3: func_A4D6_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84DF:
            switch (g_current_bank) {
                case 7: func_C4DF(); break;
                case 0: func_84DF_b0(); break;
                case 6: func_84DF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84E8:
            func_84E8_b0(); break;
        case 0x84FA:
            func_84FA_b0(); break;
        case 0xA4FA:
            func_A4FA_b0(); break;
        case 0xA50C:
            func_A50C_b0(); break;
        case 0x8526:
            func_8526_b0(); break;
        case 0xA526:
            func_A526_b0(); break;
        case 0xA52F:
            func_A52F_b0(); break;
        case 0xA549:
            func_A549_b0(); break;
        case 0xA552:
            func_A552_b0(); break;
        case 0x855B:
            func_855B_b0(); break;
        case 0xA55B:
            func_A55B_b0(); break;
        case 0xA56C:
            func_A56C_b0(); break;
        case 0xA57D:
            func_A57D_b0(); break;
        case 0xA947:
            func_A947_b5(); break;
        case 0xC8B0:
            func_C8B0(); break;
        case 0xAE12:
            switch (g_current_bank) {
                case 7: func_EE12(); break;
                case 4: func_AE12_b4(); break;
                case 1: func_AE12_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE2F:
            func_AE2F_b5(); break;
        case 0xAEC7:
            func_AEC7_b5(); break;
        case 0xB229:
            func_B229_b5(); break;
        case 0xA4D5:
            func_A4D5_b4(); break;
        case 0x8CAF:
            func_8CAF_b1(); break;
        case 0xC800:
            func_C800(); break;
        case 0xABE3:
            switch (g_current_bank) {
                case 4: func_ABE3_b4(); break;
                case 6: func_ABE3_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAB0E:
            func_AB0E_b4(); break;
        case 0xAD99:
            func_AD99_b6(); break;
        case 0xACDC:
            func_ACDC_b4(); break;
        case 0x9999:
            func_9999_b5(); break;
        case 0x9845:
            func_9845_b5(); break;
        case 0xA89B:
            func_A89B_b4(); break;
        case 0xB1F7:
            func_B1F7_b1(); break;
        case 0xB21D:
            func_B21D_b1(); break;
        case 0xB1E8:
            func_B1E8_b5(); break;
        case 0xAD47:
            switch (g_current_bank) {
                case 5: func_AD47_b5(); break;
                case 6: func_AD47_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xACFE:
            func_ACFE_b6(); break;
        case 0xAE65:
            func_AE65_b1(); break;
        case 0xB136:
            func_B136_b5(); break;
        case 0xB243:
            func_B243_b1(); break;
        case 0xB1E1:
            func_B1E1_b1(); break;
        case 0xB295:
            func_B295_b1(); break;
        case 0x8897:
            func_8897_b1(); break;
        case 0xA897:
            func_A897_b1(); break;
        case 0xB0F0:
            func_B0F0_b1(); break;
        case 0xB412:
            func_B412_b4(); break;
        case 0x9917:
            func_9917_b5(); break;
        case 0xADDB:
            func_ADDB_b5(); break;
        case 0xADA7:
            func_ADA7_b5(); break;
        case 0xAF0F:
            switch (g_current_bank) {
                case 1: func_AF0F_b1(); break;
                case 4: func_AF0F_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9890:
            func_9890_b5(); break;
        case 0x9842:
            func_9842_b5(); break;
        case 0x9791:
            func_9791_b5(); break;
        case 0x97AC:
            func_97AC_b5(); break;
        case 0x98C7:
            func_98C7_b5(); break;
        case 0x98DD:
            func_98DD_b5(); break;
        case 0x98F5:
            func_98F5_b5(); break;
        case 0x99A6:
            func_99A6_b5(); break;
        case 0xC06C:
            func_C06C(); break;
        case 0x9A1F:
            func_9A1F_b5(); break;
        case 0x8533:
            func_8533_b5(); break;
        case 0x85F2:
            func_85F2_b5(); break;
        case 0x8317:
            func_8317_b5(); break;
        case 0x86EB:
            func_86EB_b5(); break;
        case 0x9C27:
            func_9C27_b5(); break;
        case 0x9D75:
            func_9D75_b5(); break;
        case 0x9E05:
            func_9E05_b5(); break;
        case 0x9C5F:
            func_9C5F_b5(); break;
        case 0x9DA5:
            func_9DA5_b5(); break;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D3D:
            func_9D3D_b5(); break;
        case 0xA137:
            func_A137_b5(); break;
        case 0x8137:
            func_8137_b5(); break;
        case 0x9C55:
            func_9C55_b5(); break;
        case 0x9C89:
            func_9C89_b5(); break;
        case 0x9C9F:
            func_9C9F_b5(); break;
        case 0x9CD3:
            func_9CD3_b5(); break;
        case 0xAB6E:
            func_AB6E_b4(); break;
        case 0xABFC:
            func_ABFC_b4(); break;
        case 0xA9B8:
            func_A9B8_b6(); break;
        case 0x98E2:
            func_98E2_b5(); break;
        case 0x90DB:
            func_90DB_b4(); break;
        case 0xBBAA:
            func_BBAA_b4(); break;
        case 0xB6FB:
            func_B6FB_b4(); break;
        case 0xB7B0:
            func_B7B0_b4(); break;
        case 0xB6F2:
            func_B6F2_b4(); break;
        case 0x85D6:
            func_85D6_b2(); break;
        case 0x85EF:
            func_85EF_b2(); break;
        case 0x85DD:
            func_85DD_b2(); break;
        case 0x976D:
            func_976D_b5(); break;
        case 0xADC5:
            func_ADC5_b5(); break;
        case 0xA9D4:
            func_A9D4_b5(); break;
        case 0xA4E6:
            func_A4E6_b3(); break;
        case 0xA8B6:
            func_A8B6_b4(); break;
        case 0xA4C8:
            func_A4C8_b3(); break;
        case 0xA4CA:
            func_A4CA_b3(); break;
        case 0xA4CC:
            func_A4CC_b3(); break;
        case 0xA4D0:
            func_A4D0_b3(); break;
        case 0xA4D2:
            switch (g_current_bank) {
                case 3: func_A4D2_b3(); break;
                case 0: func_A4D2_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4D4:
            func_A4D4_b3(); break;
        case 0xA4DA:
            func_A4DA_b3(); break;
        case 0xA4DC:
            func_A4DC_b3(); break;
        case 0xA4DE:
            func_A4DE_b3(); break;
        case 0xA4E0:
            func_A4E0_b3(); break;
        case 0xA4E4:
            func_A4E4_b3(); break;
        case 0x905A:
            func_905A_b6(); break;
        case 0x90CC:
            func_90CC_b4(); break;
        case 0x9278:
            func_9278_b6(); break;
        case 0x9165:
            func_9165_b6(); break;
        case 0xE185:
            func_E185(); break;
        case 0xAAFF:
            func_AAFF_b1(); break;
        case 0xAB80:
            func_AB80_b1(); break;
        case 0xAC75:
            func_AC75_b1(); break;
        case 0xACE7:
            switch (g_current_bank) {
                case 1: func_ACE7_b1(); break;
                case 5: func_ACE7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD0D:
            func_AD0D_b1(); break;
        case 0xAD33:
            func_AD33_b1(); break;
        case 0xAD80:
            func_AD80_b1(); break;
        case 0xAE4C:
            func_AE4C_b1(); break;
        case 0xAFF5:
            func_AFF5_b1(); break;
        case 0xC05D:
            func_C05D(); break;
        case 0xB0CD:
            func_B0CD_b1(); break;
        case 0xB163:
            func_B163_b1(); break;
        case 0xA96D:
            func_A96D_b1(); break;
        case 0xB120:
            func_B120_b1(); break;
        case 0xB0CA:
            func_B0CA_b1(); break;
        case 0xB162:
            func_B162_b1(); break;
        case 0xB1E5:
            func_B1E5_b1(); break;
        case 0x8797:
            func_8797_b1(); break;
        case 0xA7F2:
            func_A7F2_b1(); break;
        case 0xC05A:
            func_C05A(); break;
        case 0xB21C:
            func_B21C_b1(); break;
        case 0xB242:
            func_B242_b1(); break;
        case 0xA35E:
            func_A35E_b1(); break;
        case 0xA3D7:
            func_A3D7_b1(); break;
        case 0xE630:
            func_E630(); break;
        case 0xA008:
            func_A008_b1(); break;
        case 0xC628:
            func_C628(); break;
        case 0xD520:
            func_D520(); break;
        case 0xC828:
            func_C828(); break;
        case 0xD620:
            func_D620(); break;
        case 0xCB08:
            func_CB08(); break;
        case 0xE028:
            func_E028(); break;
        case 0xD220:
            func_D220(); break;
        case 0xC020:
            func_C020(); break;
        case 0xC428:
            func_C428(); break;
        case 0xD828:
            func_D828(); break;
        case 0xD118:
            func_D118(); break;
        case 0xE128:
            func_E128(); break;
        case 0xC320:
            func_C320(); break;
        case 0xC930:
            func_C930(); break;
        case 0xCD10:
            func_CD10(); break;
        case 0x9D6B:
            func_9D6B_b5(); break;
        case 0xB39A:
            func_B39A_b4(); break;
        case 0xAD42:
            func_AD42_b6(); break;
        case 0x83C7:
            func_83C7_b0(); break;
        case 0x9BDB:
            func_9BDB_b5(); break;
        case 0xACAD:
            func_ACAD_b4(); break;
        case 0xAC3C:
            func_AC3C_b4(); break;
        case 0xABE1:
            func_ABE1_b6(); break;
        case 0xB0DB:
            func_B0DB_b5(); break;
        case 0xC038:
            func_C038(); break;
        case 0xB084:
            func_B084_b6(); break;
        case 0x8F88:
            func_8F88_b1(); break;
        case 0x9E8E:
            func_9E8E_b4(); break;
        case 0xB044:
            func_B044_b5(); break;
        case 0xBCD0:
            func_BCD0_b4(); break;
        case 0xA0DB:
            func_A0DB_b5(); break;
        case 0xA136:
            func_A136_b5(); break;
        case 0xA1F9:
            func_A1F9_b6(); break;
        case 0xA1FE:
            func_A1FE_b6(); break;
        case 0x8E8F:
            switch (g_current_bank) {
                case 1: func_8E8F_b1(); break;
                case 6: func_8E8F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2F9:
            func_A2F9_b0(); break;
        case 0xA31A:
            func_A31A_b0(); break;
        case 0xA33B:
            func_A33B_b0(); break;
        case 0xA3E8:
            func_A3E8_b0(); break;
        case 0x83A6:
            func_83A6_b0(); break;
        case 0xA3A6:
            func_A3A6_b0(); break;
        case 0xA409:
            func_A409_b0(); break;
        case 0xA3C7:
            func_A3C7_b0(); break;
        case 0xA42A:
            func_A42A_b0(); break;
        case 0xA46D:
            switch (g_current_bank) {
                case 7: func_E46D(); break;
                case 0: func_A46D_b0(); break;
                case 3: func_A46D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5B8:
            func_A5B8_b0(); break;
        case 0x85D9:
            func_85D9_b0(); break;
        case 0x8190:
            func_8190_b0(); break;
        case 0x9DFE:
            func_9DFE_b4(); break;
        case 0xB914:
            func_B914_b4(); break;
        case 0xAE41:
            func_AE41_b4(); break;
        case 0xAECF:
            func_AECF_b4(); break;
        case 0xD0C8:
            func_D0C8(); break;
        case 0x9CAD:
            func_9CAD_b4(); break;
        case 0x898E:
            func_898E_b6(); break;
        case 0xA16D:
            func_A16D_b4(); break;
        case 0xA82C:
            func_A82C_b6(); break;
        case 0xA831:
            func_A831_b6(); break;
        case 0x9DE2:
            func_9DE2_b4(); break;
        case 0x993A:
            func_993A_b5(); break;
        case 0x9F12:
            func_9F12_b5(); break;
        case 0xD058:
            func_D058(); break;
        case 0x9CD7:
            func_9CD7_b6(); break;
        case 0xAA8B:
            func_AA8B_b5(); break;
        case 0xAF7E:
            func_AF7E_b4(); break;
        case 0xAF65:
            func_AF65_b4(); break;
        case 0xAFF9:
            func_AFF9_b6(); break;
        case 0xE0E5:
            func_E0E5(); break;
        case 0x8D2F:
            func_8D2F_b4(); break;
        case 0x89AE:
            func_89AE_b3(); break;
        case 0x8B1C:
            switch (g_current_bank) {
                case 3: func_8B1C_b3(); break;
                case 6: func_8B1C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B98:
            func_8B98_b3(); break;
        case 0x8C2A:
            func_8C2A_b3(); break;
        case 0xDFA9:
            func_DFA9(); break;
        case 0xA2CC:
            func_A2CC_b1(); break;
        case 0xA284:
            func_A284_b1(); break;
        case 0x99C0:
            func_99C0_b5(); break;
        case 0x9EF7:
            func_9EF7_b5(); break;
        case 0x9FE9:
            func_9FE9_b5(); break;
        case 0xA96E:
            func_A96E_b5(); break;
        case 0xA872:
            func_A872_b5(); break;
        case 0xA8FD:
            func_A8FD_b5(); break;
        case 0xA8FE:
            func_A8FE_b5(); break;
        case 0xAD94:
            func_AD94_b6(); break;
        case 0xAC48:
            func_AC48_b1(); break;
        case 0x9CDE:
            func_9CDE_b6(); break;
        case 0xB11B:
            func_B11B_b4(); break;
        case 0x814E:
            switch (g_current_bank) {
                case 5: func_814E_b5(); break;
                case 0: func_814E_b0(); break;
                case 4: func_814E_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA681:
            func_A681_b4(); break;
        case 0xA65C:
            func_A65C_b4(); break;
        case 0xA657:
            func_A657_b4(); break;
        case 0xA818:
            func_A818_b4(); break;
        case 0xB8F8:
            func_B8F8_b4(); break;
        case 0xC075:
            func_C075(); break;
        case 0x9B8F:
            func_9B8F_b5(); break;
        case 0x8DE9:
            func_8DE9_b6(); break;
        case 0x8E51:
            func_8E51_b6(); break;
        case 0x9C6B:
            func_9C6B_b5(); break;
        case 0x8163:
            func_8163_b5(); break;
        case 0xB0F6:
            func_B0F6_b5(); break;
        case 0x8FB3:
            func_8FB3_b3(); break;
        case 0x92D1:
            func_92D1_b4(); break;
        case 0x92AC:
            func_92AC_b4(); break;
        case 0xAC43:
            func_AC43_b1(); break;
        case 0xD03C:
            func_D03C(); break;
        case 0x860E:
            func_860E_b2(); break;
        case 0x8649:
            func_8649_b2(); break;
        case 0x862B:
            func_862B_b2(); break;
        case 0x8644:
            func_8644_b2(); break;
        case 0x8606:
            switch (g_current_bank) {
                case 2: func_8606_b2(); break;
                case 6: func_8606_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x860D:
            func_860D_b2(); break;
        case 0x8641:
            func_8641_b2(); break;
        case 0x8635:
            func_8635_b2(); break;
        case 0x8639:
            func_8639_b2(); break;
        case 0xB7AF:
            func_B7AF_b4(); break;
        case 0x8D3C:
            func_8D3C_b4(); break;
        case 0xAD64:
            func_AD64_b6(); break;
        case 0x9CB2:
            func_9CB2_b6(); break;
        case 0xAE67:
            func_AE67_b5(); break;
        case 0xAF53:
            func_AF53_b5(); break;
        case 0x818D:
            func_818D_b0(); break;
        case 0xAE8B:
            func_AE8B_b6(); break;
        case 0x9D0F:
            func_9D0F_b6(); break;
        case 0x86EE:
            func_86EE_b6(); break;
        case 0xA60F:
            func_A60F_b4(); break;
        case 0x8E73:
            func_8E73_b5(); break;
        case 0xA0F6:
            func_A0F6_b5(); break;
        case 0x911E:
            func_911E_b4(); break;
        case 0x8FB0:
            func_8FB0_b1(); break;
        case 0x9D49:
            func_9D49_b5(); break;
        case 0x81AB:
            func_81AB_b0(); break;
        case 0x925F:
            func_925F_b4(); break;
        case 0x8E7A:
            func_8E7A_b4(); break;
        case 0x8E5C:
            func_8E5C_b4(); break;
        case 0x8E94:
            func_8E94_b4(); break;
        case 0x8E60:
            switch (g_current_bank) {
                case 4: func_8E60_b4(); break;
                case 6: func_8E60_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1CD:
            func_B1CD_b5(); break;
        case 0x8E70:
            func_8E70_b6(); break;
        case 0xAE5D:
            func_AE5D_b5(); break;
        case 0xACF0:
            func_ACF0_b6(); break;
        case 0x8DD8:
            func_8DD8_b6(); break;
        case 0xAEC0:
            func_AEC0_b1(); break;
        case 0x9C33:
            func_9C33_b5(); break;
        case 0x9CB5:
            func_9CB5_b5(); break;
        case 0x91DD:
            func_91DD_b4(); break;
        case 0xB7F5:
            func_B7F5_b4(); break;
        case 0xB7F2:
            func_B7F2_b4(); break;
        case 0xB810:
            func_B810_b4(); break;
        case 0xA9E7:
            func_A9E7_b5(); break;
        case 0xA975:
            func_A975_b4(); break;
        case 0x940B:
            func_940B_b6(); break;
        case 0x9309:
            func_9309_b6(); break;
        case 0xD4F2:
            func_D4F2(); break;
        case 0xD4F4:
            func_D4F4(); break;
        case 0xD518:
            func_D518(); break;
        case 0xD50B:
            func_D50B(); break;
        case 0xD51F:
            func_D51F(); break;
        case 0xCFEE:
            func_CFEE(); break;
        case 0xD003:
            func_D003(); break;
        case 0xD018:
            func_D018(); break;
        case 0xD024:
            func_D024(); break;
        case 0x8175:
            func_8175_b0(); break;
        case 0xAFAC:
            switch (g_current_bank) {
                case 6: func_AFAC_b6(); break;
                case 5: func_AFAC_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8178:
            func_8178_b0(); break;
        case 0x9A2F:
            func_9A2F_b5(); break;
        case 0x8DF4:
            func_8DF4_b6(); break;
        case 0xAA98:
            func_AA98_b5(); break;
        case 0x8607:
            func_8607_b2(); break;
        case 0x8605:
            func_8605_b2(); break;
        case 0x8611:
            func_8611_b2(); break;
        case 0x8623:
            func_8623_b2(); break;
        case 0x8621:
            func_8621_b2(); break;
        case 0x863B:
            func_863B_b2(); break;
        case 0x8629:
            switch (g_current_bank) {
                case 2: func_8629_b2(); break;
                case 6: func_8629_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x862C:
            func_862C_b2(); break;
        case 0xAFE9:
            func_AFE9_b5(); break;
        case 0x8187:
            func_8187_b0(); break;
        case 0x8F64:
            func_8F64_b1(); break;
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
        case 0x81C0:
            switch (g_current_bank) {
                case 0: func_81C0_b0(); break;
                case 6: func_81C0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE3B:
            func_AE3B_b5(); break;
        case 0xA44D:
            func_A44D_b3(); break;
        case 0x9177:
            func_9177_b4(); break;
        case 0xB7B2:
            func_B7B2_b4(); break;
        case 0x816F:
            func_816F_b0(); break;
        case 0x932D:
            func_932D_b6(); break;
        case 0xD4F1:
            func_D4F1(); break;
        case 0xD4F3:
            func_D4F3(); break;
        case 0xD4F5:
            func_D4F5(); break;
        case 0xD4E0:
            func_D4E0(); break;
        case 0xAF50:
            func_AF50_b6(); break;
        case 0xAFA3:
            func_AFA3_b6(); break;
        case 0xAF4E:
            func_AF4E_b6(); break;
        case 0xAB11:
            func_AB11_b5(); break;
        case 0x8614:
            func_8614_b2(); break;
        case 0xAF44:
            func_AF44_b6(); break;
        case 0xAF37:
            func_AF37_b6(); break;
        case 0xAAB2:
            func_AAB2_b5(); break;
        case 0xC44C:
            func_C44C(); break;
        case 0xC982:
            func_C982(); break;
        case 0xF082:
            func_F082(); break;
        case 0xC983:
            func_C983(); break;
        case 0xF2C0:
            func_F2C0(); break;
        case 0xD9AE:
            func_D9AE(); break;
        case 0xC594:
            func_C594(); break;
        case 0xCCF0:
            func_CCF0(); break;
        case 0xC813:
            func_C813(); break;
        case 0xF6D0:
            func_F6D0(); break;
        case 0xD320:
            func_D320(); break;
        case 0xE806:
            func_E806(); break;
        case 0xDB02:
            func_DB02(); break;
        case 0xD1C7:
            func_D1C7(); break;
        case 0xC4C8:
            func_C4C8(); break;
        case 0xC1CC:
            func_C1CC(); break;
        case 0xED22:
            func_ED22(); break;
        case 0xCDC0:
            func_CDC0(); break;
        case 0xD300:
            func_D300(); break;
        case 0xD1D3:
            func_D1D3(); break;
        case 0xD8D4:
            func_D8D4(); break;
        case 0xCAC0:
            func_CAC0(); break;
        case 0xC8CA:
            func_C8CA(); break;
        case 0xCAC8:
            func_CAC8(); break;
        case 0xC2C0:
            func_C2C0(); break;
        case 0xCDC6:
            func_CDC6(); break;
        case 0xD2C0:
            func_D2C0(); break;
        case 0xD8D1:
            func_D8D1(); break;
        case 0xC590:
            func_C590(); break;
        case 0xCD90:
            func_CD90(); break;
        case 0xC8CD:
            func_C8CD(); break;
        case 0xCFCD:
            func_CFCD(); break;
        case 0xC8CE:
            func_C8CE(); break;
        case 0xD394:
            func_D394(); break;
        case 0xCDCE:
            func_CDCE(); break;
        case 0xED20:
            func_ED20(); break;
        case 0xD0A1:
            func_D0A1(); break;
        case 0xF018:
            func_F018(); break;
        case 0xC18D:
            func_C18D(); break;
        case 0xC28D:
            func_C28D(); break;
        case 0xC58D:
            func_C58D(); break;
        case 0xC68D:
            func_C68D(); break;
        case 0xC960:
            func_C960(); break;
        case 0xE808:
            func_E808(); break;
        case 0xE810:
            func_E810(); break;
        case 0xC60F:
            func_C60F(); break;
        case 0xEE0C:
            func_EE0C(); break;
        case 0xD037:
            func_D037(); break;
        case 0xD06C:
            func_D06C(); break;
        case 0xEED0:
            func_EED0(); break;
        case 0xC94D:
            func_C94D(); break;
        case 0xC967:
            func_C967(); break;
        case 0xC944:
            func_C944(); break;
        case 0xC004:
            func_C004(); break;
        case 0xE290:
            func_E290(); break;
        case 0xCD75:
            func_CD75(); break;
        case 0xEC20:
            func_EC20(); break;
        case 0xF07B:
            func_F07B(); break;
        case 0xCE84:
            func_CE84(); break;
        case 0xCE83:
            func_CE83(); break;
        case 0xCE86:
            func_CE86(); break;
        case 0xC693:
            func_C693(); break;
        case 0xF095:
            func_F095(); break;
        case 0xC8D0:
            func_C8D0(); break;
        case 0xC615:
            func_C615(); break;
        case 0xF07D:
            func_F07D(); break;
        case 0xC97D:
            func_C97D(); break;
        case 0xEE93:
            func_EE93(); break;
        case 0xC995:
            func_C995(); break;
        case 0xC81B:
            func_C81B(); break;
        case 0xCE56:
            func_CE56(); break;
        case 0xE888:
            func_E888(); break;
        case 0xD01C:
            func_D01C(); break;
        case 0xE694:
            func_E694(); break;
        case 0xE0D0:
            func_E0D0(); break;
        case 0xC80B:
            func_C80B(); break;
        case 0xF190:
            func_F190(); break;
        case 0xEEA3:
            func_EEA3(); break;
        case 0xC7A9:
            func_C7A9(); break;
        case 0xEEAF:
            func_EEAF(); break;
        case 0xF4AD:
            func_F4AD(); break;
        case 0xF0B7:
            func_F0B7(); break;
        case 0xC784:
            func_C784(); break;
        case 0xC62D:
            func_C62D(); break;
        case 0xC3AC:
            func_C3AC(); break;
        case 0xC20D:
            func_C20D(); break;
        case 0xC884:
            func_C884(); break;
        case 0xC9C8:
            func_C9C8(); break;
        case 0xC029:
            func_C029(); break;
        case 0xC611:
            func_C611(); break;
        case 0xD068:
            func_D068(); break;
        case 0xC60D:
            func_C60D(); break;
        case 0xDD0A:
            func_DD0A(); break;
        case 0xDE29:
            func_DE29(); break;
        case 0xF406:
            func_F406(); break;
        case 0xE0F0:
            func_E0F0(); break;
        case 0xD0E0:
            func_D0E0(); break;
        case 0xC512:
            func_C512(); break;
        case 0xC199:
            func_C199(); break;
        case 0xC90C:
            func_C90C(); break;
        case 0xC193:
            func_C193(); break;
        case 0xC18E:
            func_C18E(); break;
        case 0xF51F:
            func_F51F(); break;
        case 0xC195:
            func_C195(); break;
        case 0xC917:
            func_C917(); break;
        case 0xC042:
            func_C042(); break;
        case 0xC528:
            func_C528(); break;
        case 0xC715:
            func_C715(); break;
        case 0xC228:
            func_C228(); break;
        case 0xC617:
            func_C617(); break;
        case 0xC99A:
            func_C99A(); break;
        case 0xC8AF:
            func_C8AF(); break;
        case 0xC9AA:
            func_C9AA(); break;
        case 0xCCCB:
            func_CCCB(); break;
        case 0xD8DA:
            func_D8DA(); break;
        case 0xDBBD:
            func_DBBD(); break;
        case 0xDCDB:
            func_DCDB(); break;
        case 0xF200:
            func_F200(); break;
        case 0xE1D0:
            func_E1D0(); break;
        case 0xC60A:
            func_C60A(); break;
        case 0xC9A2:
            func_C9A2(); break;
        case 0xCDA5:
            func_CDA5(); break;
        case 0xC62F:
            func_C62F(); break;
        case 0xC6A7:
            func_C6A7(); break;
        case 0xC9A7:
            func_C9A7(); break;
        case 0xCDA9:
            func_CDA9(); break;
        case 0xC669:
            func_C669(); break;
        case 0xD9A9:
            func_D9A9(); break;
        case 0xF0FA:
            func_F0FA(); break;
        case 0xC04F:
            func_C04F(); break;
        case 0xD05F:
            func_D05F(); break;
        case 0xEDD8:
            func_EDD8(); break;
        case 0xE01F:
            func_E01F(); break;
        case 0xE902:
            func_E902(); break;
        case 0xC002:
            func_C002(); break;
        case 0xCAC9:
            func_CAC9(); break;
        case 0xDAD9:
            func_DAD9(); break;
        case 0xC1B1:
            func_C1B1(); break;
        case 0xC8C1:
            func_C8C1(); break;
        case 0xDAD0:
            func_DAD0(); break;
        case 0xC185:
            func_C185(); break;
        case 0xDC02:
            func_DC02(); break;
        case 0xC703:
            func_C703(); break;
        case 0xDF01:
            func_DF01(); break;
        case 0xCBBA:
            func_CBBA(); break;
        case 0xC6BC:
            func_C6BC(); break;
        case 0xEEA9:
            func_EEA9(); break;
        case 0xE6F0:
            func_E6F0(); break;
        case 0xC041:
            func_C041(); break;
        case 0xC3B7:
            func_C3B7(); break;
        case 0xD3C5:
            func_D3C5(); break;
        case 0xCD0E:
            func_CD0E(); break;
        case 0xC7AE:
            func_C7AE(); break;
        case 0xC804:
            func_C804(); break;
        case 0xC34C:
            func_C34C(); break;
        case 0xCDB1:
            func_CDB1(); break;
        case 0xC49D:
            func_C49D(); break;
        case 0xC99F:
            func_C99F(); break;
        case 0xEE0F:
            func_EE0F(); break;
        case 0xEDB9:
            func_EDB9(); break;
        case 0xCEA3:
            func_CEA3(); break;
        case 0xD1AE:
            func_D1AE(); break;
        case 0xF5BD:
            func_F5BD(); break;
        case 0xCDBC:
            func_CDBC(); break;
        case 0xC68F:
            func_C68F(); break;
        case 0xC68B:
            func_C68B(); break;
        case 0xE0CE:
            func_E0CE(); break;
        case 0xCCD0:
            func_CCD0(); break;
        case 0xEEAC:
            func_EEAC(); break;
        case 0xE3B9:
            func_E3B9(); break;
        case 0xD996:
            func_D996(); break;
        case 0xEB96:
            func_EB96(); break;
        case 0xCFA9:
            func_CFA9(); break;
        case 0xC5B8:
            func_C5B8(); break;
        case 0xE36D:
            func_E36D(); break;
        case 0xEBB9:
            func_EBB9(); break;
        case 0xD19B:
            func_D19B(); break;
        case 0xC222:
            func_C222(); break;
        case 0xC622:
            func_C622(); break;
        case 0xD6A9:
            func_D6A9(); break;
        case 0xC6AD:
            func_C6AD(); break;
        case 0xF6EE:
            func_F6EE(); break;
        case 0xEE0B:
            func_EE0B(); break;
        case 0xF5B9:
            func_F5B9(); break;
        case 0xC182:
            func_C182(); break;
        case 0xDF85:
            func_DF85(); break;
        case 0xE8C0:
            func_E8C0(); break;
        case 0xE886:
            func_E886(); break;
        case 0xEE22:
            func_EE22(); break;
        case 0xDCC0:
            func_DCC0(); break;
        case 0xE087:
            func_E087(); break;
        case 0xF0EF:
            func_F0EF(); break;
        case 0xC220:
            func_C220(); break;
        case 0xDB8B:
            func_DB8B(); break;
        case 0xF18B:
            func_F18B(); break;
        case 0xC88C:
            func_C88C(); break;
        case 0xEDED:
            func_EDED(); break;
        case 0xD2A9:
            func_D2A9(); break;
        case 0xC80F:
            func_C80F(); break;
        case 0xF138:
            func_F138(); break;
        case 0xF4CE:
            func_F4CE(); break;
        case 0xC4A3:
            func_C4A3(); break;
        case 0xC7A3:
            func_C7A3(); break;
        case 0xEC08:
            func_EC08(); break;
        case 0xC1F8:
            func_C1F8(); break;
        case 0xC077:
            func_C077(); break;
        case 0xC076:
            func_C076(); break;
        case 0xC1E8:
            func_C1E8(); break;
        case 0xF0F4:
            func_F0F4(); break;
        case 0xE080:
            func_E080(); break;
        case 0xE3F8:
            func_E3F8(); break;
        case 0xF3F8:
            func_F3F8(); break;
        case 0xE3A4:
            func_E3A4(); break;
        case 0xC2E7:
            func_C2E7(); break;
        case 0xE9F8:
            func_E9F8(); break;
        case 0xC2E9:
            func_C2E9(); break;
        case 0xEAF8:
            func_EAF8(); break;
        case 0xC2EA:
            func_C2EA(); break;
        case 0xECEC:
            func_ECEC(); break;
        case 0xD8F4:
            func_D8F4(); break;
        case 0xD8FC:
            func_D8FC(); break;
        case 0xE0EC:
            func_E0EC(); break;
        case 0xC8F8:
            func_C8F8(); break;
        case 0xC9F8:
            func_C9F8(); break;
        case 0xD0FC:
            func_D0FC(); break;
        case 0xC8F0:
            func_C8F0(); break;
        case 0xF6E8:
            func_F6E8(); break;
        case 0xF4E8:
            func_F4E8(); break;
        case 0xD9F8:
            func_D9F8(); break;
        case 0xC4AB:
            func_C4AB(); break;
        case 0xE8AE:
            func_E8AE(); break;
        case 0xD8D8:
            func_D8D8(); break;
        case 0xE8F6:
            func_E8F6(); break;
        case 0xE2F8:
            func_E2F8(); break;
        case 0xF1D8:
            func_F1D8(); break;
        case 0xE3D0:
            func_E3D0(); break;
        case 0xF6D8:
            func_F6D8(); break;
        case 0xF1F8:
            func_F1F8(); break;
        case 0xE1F3:
            func_E1F3(); break;
        case 0xF1FB:
            func_F1FB(); break;
        case 0xE3F0:
            func_E3F0(); break;
        case 0xE3F3:
            func_E3F3(); break;
        case 0xE2F3:
            func_E2F3(); break;
        case 0xF2FB:
            func_F2FB(); break;
        case 0xEC15:
            func_EC15(); break;
        case 0xCC5F:
            func_CC5F(); break;
        case 0xCC64:
            func_CC64(); break;
        case 0xE055:
            func_E055(); break;
        case 0xF17E:
            func_F17E(); break;
        case 0xC180:
            func_C180(); break;
        case 0x86F2:
            func_86F2_b0(); break;
        case 0x8723:
            func_8723_b0(); break;
        case 0x8728:
            func_8728_b0(); break;
        case 0x872D:
            func_872D_b0(); break;
        case 0x8737:
            func_8737_b0(); break;
        case 0x873C:
            func_873C_b0(); break;
        case 0x8761:
            func_8761_b0(); break;
        case 0x93E9:
            func_93E9_b0(); break;
        case 0x941D:
            func_941D_b0(); break;
        case 0x9457:
            func_9457_b0(); break;
        case 0x94C5:
            func_94C5_b0(); break;
        case 0xB3DE:
            func_B3DE_b0(); break;
        case 0xB3F1:
            func_B3F1_b0(); break;
        case 0xB42A:
            func_B42A_b0(); break;
        case 0xB42E:
            func_B42E_b0(); break;
        case 0xB432:
            func_B432_b0(); break;
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
        case 0xB5F1:
            func_B5F1_b0(); break;
        case 0xB5F2:
            func_B5F2_b0(); break;
        case 0xB5F6:
            func_B5F6_b0(); break;
        case 0xB5FA:
            func_B5FA_b0(); break;
        case 0xB5FE:
            func_B5FE_b0(); break;
        case 0xB602:
            func_B602_b0(); break;
        case 0xB606:
            func_B606_b0(); break;
        case 0xB60A:
            func_B60A_b0(); break;
        case 0xB60E:
            func_B60E_b0(); break;
        case 0xB612:
            func_B612_b0(); break;
        case 0xB616:
            func_B616_b0(); break;
        case 0xB61A:
            func_B61A_b0(); break;
        case 0xB61E:
            func_B61E_b0(); break;
        case 0xB622:
            func_B622_b0(); break;
        case 0xB626:
            func_B626_b0(); break;
        case 0xB62A:
            func_B62A_b0(); break;
        case 0xB62E:
            func_B62E_b0(); break;
        case 0xB632:
            func_B632_b0(); break;
        case 0xB636:
            func_B636_b0(); break;
        case 0xB63A:
            func_B63A_b0(); break;
        case 0xB63E:
            func_B63E_b0(); break;
        case 0xB642:
            func_B642_b0(); break;
        case 0xB646:
            func_B646_b0(); break;
        case 0xB64A:
            func_B64A_b0(); break;
        case 0xA53A:
            func_A53A_b1(); break;
        case 0x8D18:
            func_8D18_b1(); break;
        case 0x8E7E:
            func_8E7E_b1(); break;
        case 0x8E83:
            func_8E83_b1(); break;
        case 0x8E84:
            func_8E84_b1(); break;
        case 0x8E85:
            func_8E85_b1(); break;
        case 0x8E86:
            func_8E86_b1(); break;
        case 0x9896:
            func_9896_b1(); break;
        case 0x8D8D:
            func_8D8D_b1(); break;
        case 0xAA6D:
            func_AA6D_b1(); break;
        case 0xAA71:
            func_AA71_b1(); break;
        case 0xAA75:
            func_AA75_b1(); break;
        case 0xAA79:
            func_AA79_b1(); break;
        case 0xACD6:
            func_ACD6_b1(); break;
        case 0xACDA:
            func_ACDA_b1(); break;
        case 0xACDE:
            func_ACDE_b1(); break;
        case 0xACE2:
            func_ACE2_b1(); break;
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
        case 0xAE16:
            func_AE16_b1(); break;
        case 0x8559:
            switch (g_current_bank) {
                case 1: func_8559_b1(); break;
                case 6: func_8559_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAF89:
            func_AF89_b1(); break;
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
        case 0xB121:
            func_B121_b1(); break;
        case 0x9A99:
            func_9A99_b3(); break;
        case 0x9D9C:
            func_9D9C_b3(); break;
        case 0x99B1:
            func_99B1_b3(); break;
        case 0xA5B1:
            func_A5B1_b3(); break;
        case 0x8551:
            func_8551_b3(); break;
        case 0xA9C1:
            func_A9C1_b3(); break;
        case 0x855E:
            func_855E_b3(); break;
        case 0x85B3:
            func_85B3_b3(); break;
        case 0xB5D0:
            func_B5D0_b4(); break;
        case 0xB402:
            func_B402_b4(); break;
        case 0xB7B7:
            func_B7B7_b4(); break;
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
        case 0x8D49:
            func_8D49_b4(); break;
        case 0x8D76:
            func_8D76_b4(); break;
        case 0x8D7A:
            func_8D7A_b4(); break;
        case 0x8D7D:
            func_8D7D_b4(); break;
        case 0x8D7E:
            func_8D7E_b4(); break;
        case 0xA992:
            func_A992_b4(); break;
        case 0xA2A1:
            func_A2A1_b4(); break;
        case 0xA026:
            func_A026_b4(); break;
        case 0xB91A:
            func_B91A_b4(); break;
        case 0xB92E:
            func_B92E_b4(); break;
        case 0xB940:
            func_B940_b4(); break;
        case 0xB942:
            func_B942_b4(); break;
        case 0x8506:
            func_8506_b4(); break;
        case 0xA415:
            func_A415_b4(); break;
        case 0xA91A:
            switch (g_current_bank) {
                case 4: func_A91A_b4(); break;
                case 5: func_A91A_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB915:
            func_B915_b4(); break;
        case 0x81B9:
            func_81B9_b4(); break;
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
        case 0xA30C:
            func_A30C_b4(); break;
        case 0xA310:
            func_A310_b4(); break;
        case 0xA314:
            func_A314_b4(); break;
        case 0xA434:
            func_A434_b4(); break;
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
        case 0xACAE:
            func_ACAE_b4(); break;
        case 0xACAF:
            func_ACAF_b4(); break;
        case 0xACB0:
            func_ACB0_b4(); break;
        case 0xAD6B:
            func_AD6B_b4(); break;
        case 0xAD6D:
            func_AD6D_b4(); break;
        case 0xAD6E:
            func_AD6E_b4(); break;
        case 0xADB2:
            func_ADB2_b4(); break;
        case 0xADE2:
            func_ADE2_b4(); break;
        case 0xAE14:
            func_AE14_b4(); break;
        case 0xAE15:
            func_AE15_b4(); break;
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
            func_AF80_b4(); break;
        case 0xB03C:
            func_B03C_b4(); break;
        case 0xA022:
            func_A022_b4(); break;
        case 0xBA1F:
            func_BA1F_b4(); break;
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
        case 0xB3A5:
            func_B3A5_b5(); break;
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
        case 0x85A9:
            func_85A9_b5(); break;
        case 0x9801:
            func_9801_b5(); break;
        case 0x85CF:
            func_85CF_b5(); break;
        case 0x9906:
            func_9906_b5(); break;
        case 0x9907:
            func_9907_b5(); break;
        case 0x990F:
            func_990F_b5(); break;
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
        case 0xA918:
            func_A918_b5(); break;
        case 0xA077:
            func_A077_b5(); break;
        case 0xA919:
            func_A919_b5(); break;
        case 0xA9F9:
            func_A9F9_b5(); break;
        case 0xA9FD:
            func_A9FD_b5(); break;
        case 0xAA01:
            func_AA01_b5(); break;
        case 0xAA05:
            func_AA05_b5(); break;
        case 0x9AC0:
            func_9AC0_b5(); break;
        case 0x9BAC:
            func_9BAC_b5(); break;
        case 0xA5AC:
            func_A5AC_b5(); break;
        case 0xACF1:
            func_ACF1_b5(); break;
        case 0xACFB:
            func_ACFB_b5(); break;
        case 0xA91E:
            func_A91E_b5(); break;
        case 0xA9B7:
            func_A9B7_b5(); break;
        case 0x8189:
            func_8189_b6(); break;
        case 0x8195:
            func_8195_b6(); break;
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
        case 0x82C0:
            func_82C0_b6(); break;
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
        case 0x8369:
            func_8369_b6(); break;
        case 0x8394:
            func_8394_b6(); break;
        case 0x839F:
            func_839F_b6(); break;
        case 0x83B6:
            func_83B6_b6(); break;
        case 0x83BC:
            func_83BC_b6(); break;
        case 0x83D6:
            func_83D6_b6(); break;
        case 0x861D:
            func_861D_b6(); break;
        case 0x874D:
            func_874D_b6(); break;
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
        case 0x8DDC:
            func_8DDC_b6(); break;
        case 0x84A4:
            func_84A4_b6(); break;
        case 0x84BD:
            func_84BD_b6(); break;
        case 0x84D1:
            func_84D1_b6(); break;
        case 0x850E:
            func_850E_b6(); break;
        case 0x855F:
            func_855F_b6(); break;
        case 0x857F:
            func_857F_b6(); break;
        case 0x8594:
            func_8594_b6(); break;
        case 0x85C1:
            func_85C1_b6(); break;
        case 0x85C2:
            func_85C2_b6(); break;
        case 0x85CE:
            func_85CE_b6(); break;
        case 0x85FC:
            func_85FC_b6(); break;
        case 0x85FD:
            func_85FD_b6(); break;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
        case 0x88C9:
            func_88C9_b6(); break;
        case 0x88D7:
            func_88D7_b6(); break;
        case 0x88EF:
            func_88EF_b6(); break;
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
        case 0x8CDB:
            func_8CDB_b6(); break;
        case 0x8CF2:
            func_8CF2_b6(); break;
        case 0x8D5B:
            func_8D5B_b6(); break;
        case 0x8D5C:
            func_8D5C_b6(); break;
        case 0x8D5F:
            func_8D5F_b6(); break;
        case 0x8D9D:
            func_8D9D_b6(); break;
        case 0x8E1B:
            func_8E1B_b6(); break;
        case 0x8E37:
            func_8E37_b6(); break;
        case 0x8E63:
            func_8E63_b6(); break;
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
        case 0x8FBD:
            func_8FBD_b6(); break;
        case 0x8FEC:
            func_8FEC_b6(); break;
        case 0x9024:
            func_9024_b6(); break;
        case 0x903A:
            func_903A_b6(); break;
        case 0x90F5:
            func_90F5_b6(); break;
        case 0x910B:
            func_910B_b6(); break;
        case 0x9121:
            func_9121_b6(); break;
        case 0x914E:
            func_914E_b6(); break;
        case 0x928E:
            func_928E_b6(); break;
        case 0x929F:
            func_929F_b6(); break;
        case 0x92BA:
            func_92BA_b6(); break;
        case 0x92D2:
            func_92D2_b6(); break;
        case 0x92EF:
            func_92EF_b6(); break;
        case 0xA347:
            func_A347_b6(); break;
        case 0xA36C:
            func_A36C_b6(); break;
        case 0xAB79:
            func_AB79_b6(); break;
        case 0xAB92:
            func_AB92_b6(); break;
        case 0xABAB:
            func_ABAB_b6(); break;
        case 0xABC4:
            func_ABC4_b6(); break;
        case 0x873E:
            func_873E_b0(); break;
        case 0xA273:
            func_A273_b0(); break;
        case 0x90AD:
            func_90AD_b3(); break;
        case 0x9F02:
            func_9F02_b4(); break;
        case 0x9324:
            func_9324_b4(); break;
        case 0x93CF:
            func_93CF_b4(); break;
        case 0xA420:
            func_A420_b4(); break;
        case 0xA433:
            func_A433_b4(); break;
        case 0xA14E:
            func_A14E_b4(); break;
        case 0xB5F5:
            func_B5F5_b4(); break;
        case 0xB9C4:
            func_B9C4_b4(); break;
        case 0xA6D4:
            func_A6D4_b4(); break;
        case 0xA77F:
            func_A77F_b4(); break;
        case 0xA445:
            func_A445_b4(); break;
        case 0xAADE:
            func_AADE_b4(); break;
        case 0xAB3F:
            func_AB3F_b4(); break;
        case 0xAFAD:
            func_AFAD_b4(); break;
        case 0xB03B:
            func_B03B_b4(); break;
        case 0xBCB1:
            func_BCB1_b4(); break;
        case 0xAEF7:
            func_AEF7_b5(); break;
        case 0xAD9B:
            func_AD9B_b5(); break;
        case 0x826B:
            func_826B_b6(); break;
        case 0x8543:
            func_8543_b6(); break;
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
            func_8BAE_b6(); break;
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
        case 0x9CD0:
            func_9CD0_b6(); break;
        case 0x8527:
            func_8527_b6(); break;
        case 0x9D24:
            func_9D24_b6(); break;
        case 0x8877:
            func_8877_b6(); break;
        case 0x9D08:
            func_9D08_b6(); break;
        case 0x9D55:
            func_9D55_b6(); break;
        case 0x9CC2:
            func_9CC2_b6(); break;
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
        case 0x9069:
            func_9069_b6(); break;
        case 0x8FCD:
            func_8FCD_b6(); break;
        case 0x9046:
            func_9046_b6(); break;
        case 0x9356:
            func_9356_b6(); break;
        case 0x9F36:
            func_9F36_b4(); break;
        case 0x9F29:
            func_9F29_b4(); break;
        case 0x93CE:
            func_93CE_b4(); break;
        case 0x9247:
            func_9247_b4(); break;
        case 0x9468:
            func_9468_b4(); break;
        case 0x92A7:
            func_92A7_b4(); break;
        case 0x9E36:
            func_9E36_b4(); break;
        case 0xA84E:
            func_A84E_b5(); break;
        case 0x884E:
            func_884E_b5(); break;
        case 0xB5E2:
            func_B5E2_b4(); break;
        case 0xBAE1:
            func_BAE1_b4(); break;
        case 0xB332:
            func_B332_b4(); break;
        case 0xB3AB:
            func_B3AB_b4(); break;
        case 0xB413:
            func_B413_b4(); break;
        case 0xA89C:
            func_A89C_b4(); break;
        case 0xB9F8:
            func_B9F8_b4(); break;
        case 0xA77E:
            func_A77E_b4(); break;
        case 0xA5F7:
            func_A5F7_b4(); break;
        case 0xB8C0:
            func_B8C0_b4(); break;
        case 0xBCD1:
            func_BCD1_b4(); break;
        case 0x862D:
            func_862D_b6(); break;
        case 0x87B7:
            func_87B7_b6(); break;
        case 0x8988:
            func_8988_b6(); break;
        case 0x8BA5:
            func_8BA5_b6(); break;
        case 0x8172:
            func_8172_b0(); break;
        case 0x817E:
            func_817E_b0(); break;
        case 0x819F:
            func_819F_b0(); break;
        case 0x81A2:
            func_81A2_b0(); break;
        case 0x8196:
            func_8196_b0(); break;
        case 0x817B:
            func_817B_b0(); break;
        case 0x819C:
            func_819C_b0(); break;
        case 0xA819:
            func_A819_b4(); break;
        case 0xB489:
            func_B489_b4(); break;
        case 0xA8A8:
            func_A8A8_b4(); break;
        case 0xA82A:
            func_A82A_b4(); break;
        case 0xA85F:
            func_A85F_b4(); break;
        default:
            nes_log_dispatch_miss(addr);
            return 0;
    }
    return 1;
}
