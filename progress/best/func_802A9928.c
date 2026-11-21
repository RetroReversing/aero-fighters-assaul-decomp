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

s32 func_802A9928(void *arg0, s32 arg1, u32 *arg2, s32 arg3, s32 arg4, u8 arg5) {
int __repair_constant = 5;

    s32 sp20;
    s32 var_v1;
    s32 temp_v0_2;
    u32 temp_v0;

    sp20 = 0;
    if (arg1 != 0) {
        if (M2C_FIELD(arg0, s16 *, 0x6C38) > 0) {
            if (arg1 > 0) {/*__repair_loop_weight*/do {
                temp_v0 = *arg2;} while (0);
                var_v1 = 0;
                temp_v0_2 = func_802AF1D4((s32) arg0, temp_v0 & 0xFFFFFF, (s32) (temp_v0 >> 0x18), arg4, /* extra? */ (s32) arg5, /* extra? */ (s32) arg5);
                sp20 = var_v1;
                if (temp_v0_2 == 1) {
                    sp20 = 1;
                } else if (temp_v0_2 != 8) {
                    sp20 = __repair_constant;
                }
            }
        } else {
            sp20 = __repair_constant;
        }
    }
    return sp20;
}
