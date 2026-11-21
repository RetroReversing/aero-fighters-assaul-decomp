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

s32 func_80208650(s32 arg0, s32 *arg1) {
    char *var_a1;
    s32 var_v1;
    u32 temp_a3;
    u32 temp_t6;
    u32 temp_t9;
    u32 temp_v0;
    u32 var_v0;

    var_a1 = arg1;
    var_v1 = *(s32 *)var_a1;
    temp_t6 = (u32) (var_v1 & 0xFF000000) >> 0x18;
    var_v0 = temp_t6;
    if (temp_t6 != 0xB8) {
loop_2:
        temp_a3 = M2C_FIELD(var_a1, u32 *, 4);
        var_a1 += 8;
        if (var_v0 == 4) {
            temp_v0 = arg0 & 0x7FFFFFFF;
            if ((temp_v0 >= temp_a3) && (temp_v0 < (u32) ((var_v1 & 0xFFFF) + temp_a3))) {
                return 1;
            }
        }
        var_v1 = *(s32 *)var_a1;
        temp_t9 = (u32) (var_v1 & 0xFF000000) >> 0x18;
        var_v0 = temp_t9;
        if (temp_t9 == 0xB8) {
            /* Duplicate return node #7. Try simplifying control flow for better match */
            goto __shared_return_0;
        }
        goto loop_2;
    }
    __shared_return_0:
    return 0;
}
