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
extern char D_80255054[];
extern char D_80255068[];

void func_80231B6C(u8 *arg0, u32 arg1, u32 arg2) {
    u32 var_s0;
    char *var_s1;

    var_s0 = 0;
    if (arg1 != 0) {
        var_s1 = arg0;
        do {
            if ((var_s0 % arg2) == 0) {
                if (var_s0 != 0) {
                    func_80231A24(D_80255054);
                }
                func_80231A24("%d: ", var_s0 / arg2);
            }
            func_80231A24("%2x ", (u32) *(u8 *)var_s1);
            var_s0 += 1;
            var_s1 += 1;
        } while (var_s0 < arg1);
    }
    func_80231A24(D_80255068);
}
