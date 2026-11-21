/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_80231A24();
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
    temp_v1 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 4) + (arg0 * 4));
    if (temp_v1 == NULL) {
        func_80231A24(arg1, arg2, D_80252D7C, arg0);
        return 0;
    }
    temp_t0 = M2C_FIELD(temp_v1, u8 *, 0x18);
    temp_lo = (s32) (arg1 - M2C_FIELD(temp_v1, f32 *, 0)) / (s32) M2C_FIELD(temp_v1, f32 *, 0x1C);
    temp_lo_2 = (s32) (arg2 - M2C_FIELD(temp_v1, f32 *, 4)) / (s32) M2C_FIELD(temp_v1, f32 *, 0x20);
    if ((temp_lo >= (s32) temp_t0) || (temp_lo < 0) || (temp_lo_2 >= (s32) M2C_FIELD(temp_v1, u8 *, 0x19)) || (temp_lo_2 < 0)) {
        return 0;
    }
    temp_a0 = ((temp_t0 * temp_lo_2) + temp_lo) * 0x4C;
    *arg3 = M2C_FIELD((M2C_FIELD(temp_v1, s32 *, 0x28) + temp_a0), f32 *, 0x30);
    *arg4 = M2C_FIELD((M2C_FIELD(temp_v1, s32 *, 0x28) + temp_a0), f32 *, 0x34);
    return 1;
}
