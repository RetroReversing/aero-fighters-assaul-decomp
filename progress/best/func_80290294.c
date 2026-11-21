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

void func_80290294(s32 arg0, s8 arg1, s16 arg2, s32 arg3, s32 arg4) {
    s16 temp_t1;
    s16 temp_t9;
    s16 var_v1;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_at;
    s32 temp_t2;
    s32 temp_t4;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_t0;
    void *temp_a0;
    void *temp_t9_2;
    void *temp_v0;

    temp_t9 = arg3 & 0xFF;
    temp_v0 = arg0 + (arg2 * 0x3A);
    M2C_FIELD(temp_v0, s8 *, 0x1DA) = arg1;
    if (arg1 & 0xFF) {
        var_v1 = (temp_t9 * 2) & 0xFF;
        var_a1 = 0;
        if (var_v1 > 0) {
            temp_a3 = arg0 + (arg2 * 0x3A);
            var_t0 = 0;
            do {
                temp_a0 = arg4 + ((var_t0 / 2) * 2);
                M2C_FIELD((temp_a3 + (var_a1 * 2)), s16 *, 0x1A8) = (s16) ((s16) M2C_FIELD(temp_a0, s16 *, 0) >> 8);
                temp_t4 = var_t0 * 2;
                var_t0 = (var_t0 + 2) & 0xFF;
                var_a1 = var_t0;
                M2C_FIELD((temp_a3 + temp_t4), s16 *, 0x1AA) = (s16) M2C_FIELD(temp_a0, u8 *, 1);
            } while (var_t0 < var_v1);
        }
    } else {
        var_a1_2 = 0;
        var_v1 = temp_t9;
        if (temp_t9 > 0) {
            do {
                temp_a0_2 = var_a1_2 * 2;
                temp_t1 = *(s16 *)(arg4 + temp_a0_2);
                temp_t2 = (var_a1_2 + 1) & 0xFF;
                temp_t9_2 = arg0 + (arg2 * 0x3A) + temp_a0_2;
                temp_at = temp_t2 < var_v1;
                var_a1_2 = temp_t2;
                M2C_FIELD(temp_t9_2, s16 *, 0x1A8) = temp_t1;
            } while (temp_at != 0);
        }
    }
    M2C_FIELD(temp_v0, s16 *, 0x1A2) = var_v1;
    M2C_FIELD(temp_v0, s16 *, 0x1D8) = 0;
}
