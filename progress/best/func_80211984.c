/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80231A24(f32);
extern void *D_8024E710;
extern char D_80252D7C[];

s32 func_80211984(s32 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4) {
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_lo_2;
    u8 temp_t0;
    void *temp_v1;

    *arg3 = arg1;
    *arg4 = arg2;
    temp_v1 = *(s32 *)((*(s32 *)((char *)(D_8024E710) + 4)) + (arg0 * 4));
    if (temp_v1 == NULL) {
        func_80231A24(arg1);
        return 0;
    }
    temp_t0 = (*(u8 *)((char *)(temp_v1) + 0x18));
    temp_lo = (s32) (arg1 - (*(f32 *)((char *)(temp_v1) + 0))) / (s32) (*(f32 *)((char *)(temp_v1) + 0x1C));
    temp_lo_2 = (s32) (arg2 - (*(f32 *)((char *)(temp_v1) + 4))) / (s32) (*(f32 *)((char *)(temp_v1) + 0x20));
    if ((temp_lo >= (s32) temp_t0) || (temp_lo < 0) || (temp_lo_2 >= (s32) (*(u8 *)((char *)(temp_v1) + 0x19))) || (temp_lo_2 < 0)) {
        return 0;
    }
    temp_a0 = (((unsigned)temp_t0 * temp_lo_2) + temp_lo) * 0x4C;
    *arg3 = (*(f32 *)((char *)(((*(s32 *)((char *)(temp_v1) + 0x28)) + temp_a0)) + 0x30));
    *arg4 = (*(f32 *)((char *)(((*(s32 *)((char *)(temp_v1) + 0x28)) + temp_a0)) + 0x34));
    return 1;
}
