/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

void func_8030AABC(s32 arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s32 temp_t0;
    unsigned int temp_t0_2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t1_4;
    register s32 temp_t1_5;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v1;
    s32 var_v0;

    *arg2 = 0;
    var_v0 = 0;
    if (arg3 > 0) {
        temp_v1 = arg3 & 3;
        if (temp_v1 != 0) {
            __repair_rows: {
                temp_t0 = *arg1;
                temp_t1 = temp_t0 % 32;
                *arg2 |= ((s32) (*(s32 *)(arg0 + (temp_t0 / 32)) & (1 << temp_t1)) >> temp_t1) << var_v0;
                var_v0 += 1;
                *arg1 += 1;
            }
if (temp_v1 != var_v0) goto __repair_rows;
            if (var_v0 != arg3) {
                goto loop_4;
            }
        } else {
            do {
loop_4:
                temp_t0_2 = *arg1;
                temp_t1_2 = temp_t0_2 % 32;
                *arg2 |= ((s32) (*(s32 *)(arg0 + (temp_t0_2 / 32)) & (1 << temp_t1_2)) >> temp_t1_2) << var_v0;
                temp_t5 = *arg1 + 1;
                *arg1 = temp_t5;
                temp_t1_3 = temp_t5 % 32;
                *arg2 |= ((s32) (*(s32 *)(arg0 + (temp_t5 / 32)) & (1 << temp_t1_3)) >> temp_t1_3) << (var_v0 + 1);
                temp_t6 = *arg1 + 1;
                *arg1 = temp_t6;
                temp_t1_4 = temp_t6 % 32;
                *arg2 |= ((s32) (*(s32 *)(arg0 + (temp_t6 / 32)) & (1 << temp_t1_4)) >> temp_t1_4) << (var_v0 + 2);
                temp_t5 = *arg1 + 1;
                *arg1 = temp_t5;
                temp_t1_5 = temp_t5 % 32;
                *arg2 |= ((s32) (*(s32 *)(arg0 + ((u32)temp_t5 / 32)) & (1 << temp_t1_5)) >> temp_t1_5) << (var_v0 + 3);
                var_v0 += 4;
                *arg1 += 1;
            } while (var_v0 != arg3);
        }
    }
}
