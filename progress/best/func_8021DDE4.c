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

s32 func_8021E1BC();
extern s32 D_8025C600;
extern u16 D_80280BF6;

void func_8021DDE4(void) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    if ((s32) D_80280BF6 > 0) {
        var_s0 = 0;
        do {
            if (*(s32 *)(D_8025C600 + var_s0) != 0) {
                func_8021E1BC(var_s1);
            }
            var_s1 += 1;
            var_s0 += 0x18;
        } while (var_s1 < (s32) D_80280BF6);
    }
}
