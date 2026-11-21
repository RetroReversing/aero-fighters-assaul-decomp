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

s32 func_80217940();
s32 func_80228CE0();
s32 func_80228CF0();
s32 func_80228D0C();
s32 func_80228D9C();
s32 func_80228DE0();
s32 func_8022A210();
extern void *D_8024E710;
extern s32 D_8025C394;
extern s32 D_8025C3E4;

s32 func_802165D0(f32 arg0, f32 arg1, s32 arg2, s32 arg3, void *arg4) {
    s16 spE4;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    s32 sp80;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s16 temp_s1;
    s16 var_s0_2;
    s16 var_s2;
    s16 var_s3;
    s32 *temp_s5;
    s32 temp_s4;
    s32 var_s0;
    u8 temp_fp;
    void *temp_s7;
    void *temp_v0;
    void *temp_v0_2;

    temp_s7 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x1C) + (M2C_FIELD(arg4, u16 *, 0) * 4));
    temp_s5 = M2C_FIELD(temp_s7, s32 **, 8);
    temp_fv0 = M2C_FIELD(temp_s7, f32 *, 0x1C) / M2C_FIELD(arg4, f32 *, 0xC);
    temp_fp = M2C_FIELD(temp_s5, u8 *, 4);
    spE4 = -1;
    temp_fs1 = temp_fv0 * temp_fv0;
    temp_fs0 = 1.0f / (M2C_FIELD(temp_s7, f32 *, 0x20) * temp_fs1);
    func_80228CE0(arg4);
    var_s2 = 0;
    var_s3 = 0;
    if ((s32) temp_fp > 0) {
loop_2:
        temp_s4 = var_s3 * 0x24;
        temp_v0 = M2C_FIELD(temp_s5, s32 *, 0) + temp_s4;
        if ((M2C_FIELD(arg4, s32 *, 0x10) & (1 << var_s3)) || (var_s0 = 1, ((M2C_FIELD(temp_v0, u8 *, 7) & 1) != 0))) {
            var_s0 = 0;
        }
        if ((var_s0 != 0) || !(M2C_FIELD(temp_v0, u8 *, 7) & 2)) {
            func_80228DE0(&sp80, D_8025C3E4 + (*(s32 *)(M2C_FIELD(arg4, s32 *, 4) + (var_s3 * 2)) << 6));
            if (var_s3 == 0) {
                temp_fv0_2 = M2C_FIELD(temp_s7, f32 *, 0x20) * temp_fs1;
                func_8022A210(&sp80, temp_fv0_2, temp_fv0_2, temp_fv0_2);
            } else {
                spB0 *= temp_fs0;
                spB4 *= temp_fs0;
                spB8 *= temp_fs0;
            }
            func_80228D0C(&sp80);
            var_s2 += 1;
            if (var_s0 != 0) {
                D_8025C394 = (D_8025C394 & 0xFFFFFF) | (var_s3 << 0x18);
                spE4 += func_80217940(arg0, arg1, arg2, arg3, func_80228CF0(), M2C_FIELD(temp_s5, s32 *, 0) + temp_s4, temp_s7);
            }
            if (var_s3 == (temp_fp - 1)) {

            } else {
                var_s0_2 = 0;
                temp_v0_2 = M2C_FIELD(temp_s5, s32 *, 0) + temp_s4;
                temp_s1 = M2C_FIELD(temp_v0_2, u8 *, 6) - M2C_FIELD(temp_v0_2, u8 *, 0x2A);
                if (temp_s1 >= 0) {
                    do {
                        func_80228D9C();
                        var_s0_2 += 1;
                        var_s2 -= 1;
                    } while (temp_s1 >= var_s0_2);
                }
                goto block_17;
            }
        } else {
block_17:
            var_s3 += 1;
            if (var_s3 < (s32) temp_fp) {
                goto loop_2;
            }
        }
        var_s3 = 0;
    }
    if (var_s2 > 0) {
        do {
            func_80228D9C();
            var_s3 += 1;
        } while (var_s3 < var_s2);
    }
    return -1;
}
