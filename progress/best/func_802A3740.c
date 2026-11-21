/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80231A24();
s32 func_802A575C();
extern char D_80325030[];
extern char D_80325050[];

s32 func_802A3740(s32 arg0, u8 *arg1, s32 arg2, u8 *arg3, s32 arg4) {
int *__repair_home2 = &arg2;

    s32 *temp_a0;
    u8 sp2F;
    s32 *sp24;
    s32 sp30;
    
    s32 temp_t6;
s32 __repair_phase_temp_t6;
    
    s32 var_t2;
    
    register s32 temp_t1;
    u8 var_t0;
    void *temp_v1;

    temp_t1 = *arg1;
    __repair_phase_temp_t6 = (*__repair_home2) & 0xFF;
    var_t2 = 0;
    var_t0 = 0;
    if (temp_t1 > 0) {
loop_1:
        temp_v1 = *(s32 *)(arg0 + (var_t0 * 4));
        if ((temp_v1 != NULL) && ((*(u8 *)((char *)(temp_v1) + 0x275)) == 0)) {
            sp2F = var_t0;
            var_t2 = 1;
        } else {
            sp30 = (var_t0 + 1) & 0xFF;
            var_t0 = (u8) sp30;
            if (sp30 < temp_t1) {
                goto loop_1;
            }
        }
    }
    if (var_t2) {
        var_t2 = *(s32 *)(arg0 + (sp2F * 4));
    } else if (var_t0 >= __repair_phase_temp_t6) {
        sp30 = 0;
        var_t2 = 0;
        func_80231A24(D_80325030, arg4, temp_t1 + 1);
        *arg3 += 1;
    } else {
        temp_a0 = arg0 + (var_t0 * 4);
        sp24 = temp_a0;
        func_802A575C(temp_a0);
        var_t2 = __repair_phase_temp_t6;
        temp_t6 = *temp_a0;
        if (!temp_t6) {
            sp30 = temp_t6;temp_t6=0;
            var_t2 = sp30;
            func_80231A24(D_80325050, 4, arg4);
        } else {
            *arg1 += 1;
        }
    }
    return var_t2;
}
