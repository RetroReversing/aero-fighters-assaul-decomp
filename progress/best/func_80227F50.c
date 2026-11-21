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
s32 func_80227458();
extern s32 D_80275234;

s32 func_80227F50(s32 arg0) {
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_80223840(*(s32 *)(D_80275234 + (arg0 * 4)));
    var_v0 = func_8022393C(temp_v0, &sp34, &sp30, 0);
    if (var_v0 != 0) {
        do {
            if (var_v0 == 0x434F4D4D) {
                sp2C = func_80227458(sp30);
            }
            var_v0 = func_8022393C(temp_v0, &sp34, &sp30, 0);
        } while (var_v0 != 0);
    }
    func_802238F0(temp_v0);
    return sp2C;
}
