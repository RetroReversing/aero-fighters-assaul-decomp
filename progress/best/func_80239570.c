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

s32 func_80245404();

s32 func_80239570(void *arg0, u8 *arg1, s32 arg2, void *arg3) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    u16 temp_at;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0_2 = M2C_FIELD(arg3, u8 *, 0);
    if (temp_v0_2 != *arg1) {
        *arg1 = temp_v0_2;
        temp_v0 = func_80245404(arg0, arg2, 0, *arg1);
        if (temp_v0 != 0) {
            return temp_v0;
        }
    }
    temp_at = *(u16 *)(arg2 + (M2C_FIELD(arg3, u8 *, 1) * 2));
    M2C_FIELD(arg3, u8 *, 0) = temp_at;
    temp_v1 = temp_at & 0xFFFF;
    if ((temp_v1 >= M2C_FIELD(arg0, s32 *, 0x60)) && ((s32) M2C_FIELD(arg3, u8 *, 0) < (s32) M2C_FIELD(arg0, u8 *, 0x64))) {
        temp_v0_3 = M2C_FIELD(arg3, u8 *, 1);
        if (((s32) temp_v0_3 <= 0) || (var_v0 = 0, (((s32) temp_v0_3 < 0x80) == 0))) {
            goto block_8;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_v0;
    }
block_8:
    if (temp_v1 == 1) {
        return 5;
    }
    var_v0 = 3;
    return var_v0;
}
