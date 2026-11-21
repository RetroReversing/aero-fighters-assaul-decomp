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

s32 func_80305E10(s32 arg0, s8 arg1, M2C_UNK arg2, M2C_UNK arg3) {
int *__repair_home0 = &arg0;

    s32 var_a1;
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0;
    var_v0 = (*__repair_home0);
    var_a1 = (s32) &arg1 & ~3;
    if ((*__repair_home0) != 0) {
        do {
            if (var_v0 != 1) {
                var_a1 = (var_a1 + 7) & ~3;
                var_v1 += (*__repair_home0);
                var_v0 = M2C_FIELD(var_a1, s32 *, -4);
            }
        } while (var_v0 != 0);
    }
    return var_v1;
}
