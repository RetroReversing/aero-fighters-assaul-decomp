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

s32 func_802057FC();
u8 func_8030361C();
s32 func_8030363C();
s32 func_80303894();
extern char D_8032A4F8[];
extern s32 D_8032AA8C;

u8 func_803036F8(s32 *arg0, s32 arg1, s32 arg2) {
    u8 sp27;
    u8 temp_v0;

    *arg0 = arg1;
    if (arg1 == 0x1E) {
        func_802057FC(arg0, arg1);
        func_8030363C(arg0, 0);
        func_80303894(arg0, 0, 0, 1);
        return 1U;
    }
    if (arg1 >= 0x1F) {
        func_802057FC((s32) arg0);
        func_8030363C(arg0);
        func_80303894(arg0, 0, 0, 1);
        return 2U;
    }
    func_8030363C(arg0, arg2);
    temp_v0 = func_8030361C(arg0, *(D_8032A4F8 + (arg1 * 0xC)), arg1);
    sp27 = temp_v0;
    if (temp_v0 != 0) {
        D_8032AA8C = *arg0;
        func_80303894(arg0, 0, 0, 0);
        func_8030363C(arg0, arg2);
    }
    return sp27;
}
