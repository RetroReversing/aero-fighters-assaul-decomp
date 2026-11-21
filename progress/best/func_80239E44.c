/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80244AC0();
s32 func_802456A0();
s32 func_80245710();

s32 func_80239E44(void *arg0, u8 arg1, u16 *arg2, s32 arg3) {
int *__repair_home3 = &arg3;

    s32 sp58;
    register s32 var_s0;
    register s32 temp_v0;
    register s32 temp_v0_2;
    unsigned long sp38;

    (*(s8 *)((char *)(arg0) + 0x65)) = (*__repair_home3);
    temp_v0_2 = func_802456A0();
    var_s0 = 0;
    if (temp_v0_2) {
        return temp_v0_2;
    }
loop_3:
    temp_v0 = func_80245710((*(s32 *)((char *)(arg0) + 4)), (*(s32 *)((char *)(arg0) + 8)), (((arg1 & 0xFF) * 8) + var_s0) & 0xFFFF, &sp38);
    if (temp_v0 != 0) {
        sp58 = temp_v0;
        (*(s8 *)((char *)(arg0) + 0x65)) = 0;
        func_802456A0(arg0);
        return temp_v0;
    }
    *arg2 += func_80244AC0(&sp38, 0x20);
    var_s0 += 1;
    if (var_s0 == 8) {
        (*(s8 *)((char *)(arg0) + 0x65)) = 0;
        return func_802456A0(arg0);
    }
    goto loop_3;
}
