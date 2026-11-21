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

s32 func_802456A0();
s32 func_80246660();

void func_8023A524(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 var_s0;
    s32 var_s1;

    M2C_FIELD(arg0, s8 *, 0x65) = arg3;
    var_s0 = 0;
    if (func_802456A0() != 0) {
        return;
    }
    var_s1 = arg1 * 8;
loop_3:
    var_s0 += 1;
    if (func_80246660(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), var_s1 & 0xFFFF, arg2, 0) == 0) {
        var_s1 += 1;
        if (var_s0 != 8) {
            goto loop_3;
        }
    }
    M2C_FIELD(arg0, s8 *, 0x65) = 0;
    func_802456A0(arg0);
}
