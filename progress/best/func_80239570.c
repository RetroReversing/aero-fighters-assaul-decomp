/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80245404();

s32 func_80239570(void *arg0, u8 *arg1, s32 arg2, void *arg3) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_v0_2;
    u16 temp_at;
    int temp_v0_3;

    temp_v0_2 = (*(u8 *)((char *)(arg3) + 0));
    if (temp_v0_2 != *arg1) {
        temp_v0 = func_80245404(arg0, arg2, 0, *arg1);
        *arg1 = temp_v0_2;
        if (temp_v0 != 0) {
            return temp_v0;
        }
    }
    temp_v0_3 = (u16)(*(u16 *)(arg2 + ((*(u8 *)((char *)(arg3) + 1)) * 2)));
    (*(u8 *)((char *)(arg3) + 0)) = temp_v0_3;
    temp_v1 = temp_v0_3 & 0xFFFF;
    if ((temp_v1 >= (*(s32 *)((char *)(arg0) + 0x60))) && ((s32) (*(u8 *)((char *)(arg3) + 0)) < (s32) (*(u8 *)((char *)(arg0) + 0x64)))) {
        temp_v0_3 = (*(u8 *)((char *)(arg3) + 1));
        if (((s32) (unsigned)temp_v0_3 <= 0) || (var_v0 = 0, (((s32) (unsigned)temp_v0_3 < 0x80) == 0))) {
            if (temp_v1 == 1) {
                __shared_return_5:
    return 5;
            }
            var_v0 = 3;
            return var_v0;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_v0;
    }
    if (temp_v1 == 1) {
        goto __shared_return_5;
    }
    var_v0 = 3;
    return var_v0;
}
