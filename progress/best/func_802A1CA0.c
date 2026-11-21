/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80231A24();
s32 func_802A4D64();
extern char D_80324A00[];
extern char D_80324A20[];

s32 func_802A1CA0(s32 arg0, u8 *arg1, s32 arg2, u8 *arg3, s32 arg4) {
    s32 sp30;
    u8 sp2F;
    s32 *sp24;
    s32 *temp_a0;
    
    s32 temp_t6;
    s32 temp_v1_2;
    s32 var_t2;
    s32 var_t3;
    u8 temp_t1;
    u8 var_t0;
    void *temp_v1;

    temp_t1 = *arg1;
    temp_t6 = arg2 & 0xFF;
    var_t2 = 0;
    var_t0 = 0;
    if ((s32) temp_t1 > 0) {
        for (;;) {
            temp_v1 = *(s32 *)(arg0 + (var_t0 * 4));
            if ((temp_v1 != NULL) && ((*(u8 *)((char *)(temp_v1) + 0x1891)) == 0)) {
                sp2F = var_t0;
                var_t2 = 1;
            } else {
                sp30 = ((u32)var_t0 + 1) & 0xFF;
                var_t0 = (u8) sp30;
                if (sp30 < (s32) temp_t1) {
                    continue;
                }
            }
            break;
        }
    }
    if (var_t2 != 0) {
        var_t3 = *(s32 *)(arg0 + (sp2F * 4));
    } else if ((s32) var_t0 >= temp_t6) {
        sp30 = 0;
        func_80231A24(D_80324A00, arg4, temp_t1 + 1);
        var_t3 = 0;
        *arg3 += 1;
    } else {
        temp_a0 = arg0 + (var_t0 * 4);
        sp24 = temp_a0;
        func_802A4D64(temp_a0);
        temp_v1_2 = *temp_a0;
        var_t3 = temp_v1_2;
        if (temp_v1_2 == 0) {
            sp30 = temp_v1_2;temp_v1_2=0;
            var_t3 = sp30;
            func_80231A24(D_80324A20, 4, arg4);
        } else {
            *arg1 += 1;
        }
    }
    return var_t3;
}
