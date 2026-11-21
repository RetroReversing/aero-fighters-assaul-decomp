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

s32 func_8022FF40();
s32 func_8022FF90();
extern f32 D_8024E77C;
extern s32 D_8024E788;

s32 func_8021E73C(void *arg0, u8 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    char *var_s2;
    u8 temp_a1;

    temp_v0 = func_8022FF90(arg1);
    var_s0 = 0;
    var_s1 = 0;
    if (temp_v0 > 0) {
        var_s2 = arg1;
loop_2:
        temp_a1 = *(u8 *)var_s2;
        if (temp_a1 == 0) {
            return var_s0;
        }
        if (temp_a1 != 0xA) {
            temp_v0_2 = func_8022FF40(M2C_FIELD(arg0, s32 *, 0), temp_a1);
            if (temp_v0_2 != 0) {
                var_s0 += *(s32 *)(M2C_FIELD(arg0, s32 *, 0xC) + ((temp_v0_2 - M2C_FIELD(arg0, s32 *, 0)) * 0x10));
            } else {
                var_s0 += D_8024E788;
            }
        }
        var_s1 += 1;
        var_s2 += 1;
        if (var_s1 >= temp_v0) {
            goto block_9;
        }
        goto loop_2;
    }
block_9:
    return (s32) ((f32) var_s0 * D_8024E77C);
}
