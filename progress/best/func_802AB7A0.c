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
extern char D_80326270[];
extern u8 D_80348B98;

s32 func_802AB7A0(s32 arg0) {
    u8 sp1F;
    s32 sp18;
    s32 var_v1;
    u8 temp_a1;

    temp_a1 = D_80348B98;
    sp1F = temp_a1;
    sp18 = (s32) temp_a1;
    func_80231A24(D_80326270, temp_a1);
    var_v1 = 0;
    if ((s32) temp_a1 > 0) {
        D_80348B98 = sp1F - 1;
        var_v1 = 1;
    }
    return var_v1 & 0xFF;
}
