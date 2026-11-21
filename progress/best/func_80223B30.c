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

s32 func_8022393C();
s32 func_80223C3C();
extern char D_80275110[];

s32 func_80223B30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp48;
    void *sp3C;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = (arg0 * 0x10) + D_80275110;
    var_s0 = 0;
    sp3C = temp_v0;
    sp48 = M2C_FIELD(temp_v0, s32 *, 0xC);
    func_80223C3C();
    if (arg4 <= 0) {
        var_s1 = arg5;
    } else {
        var_s1 = 2;
    }
    var_v0 = func_8022393C(arg0, arg1, arg2, var_s1);
    var_v1 = var_v0;
    if (var_v0 != 0) {
loop_4:
        if (var_v0 == arg3) {
            var_s0 += 1;
            if (var_s0 < arg4) {
                if (var_s0 >= arg4) {
                    var_s1 = arg5;
                }
                goto block_8;
            }
        } else {
block_8:
            var_v0 = func_8022393C(arg0, arg1, arg2, var_s1);
            var_v1 = var_v0;
            if (var_v0 != 0) {
                goto loop_4;
            }
        }
    }
    M2C_FIELD(sp3C, s32 *, 0xC) = sp48;
    return var_v1;
}
