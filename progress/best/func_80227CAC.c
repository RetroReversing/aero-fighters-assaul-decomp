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

s32 func_80223840();
s32 func_802238F0();
s32 func_8022393C();
s32 func_8022573C();
extern s32 D_8027520C;

s32 func_80227CAC(s32 arg0) {
    s32 sp3C;
    s32 sp38;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    temp_v0 = func_80223840(*(s32 *)(D_8027520C + (arg0 * 4)));
    var_v0 = func_8022393C(temp_v0, &sp3C, &sp38, 1);
    if (var_v0 != 0) {
        do {
            if (var_v0 == 0x434F4D4D) {
                var_s1 = func_8022573C(sp38);
            }
            var_v0 = func_8022393C(temp_v0, &sp3C, &sp38, 1);
        } while (var_v0 != 0);
    }
    func_802238F0(temp_v0);
    return var_s1;
}
