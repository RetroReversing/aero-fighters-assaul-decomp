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

s32 func_802E7734();
s32 func_803084B0();
extern f32 D_8033FEA0;
extern f32 D_8033FEA4;
extern f32 D_8033FEA8;
extern f32 D_8033FEAC;
extern f32 D_8033FEB0;
extern f32 D_8033FEB4;

s32 func_80297D2C(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;

    if (arg1 == 2) {
        var_s0 = func_803084B0(3, 2, 0, 2, 2, 2, 0, 0.0f, 0.0f, 0.0f);
        var_s1 = func_803084B0(arg0, 1, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
        var_v0 = func_803084B0(arg0, 4, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
    } else if (arg1 == 1) {
        var_s0 = func_803084B0(arg0, 3, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
        var_s1 = func_803084B0(arg0, 2, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
        var_v0 = func_803084B0(arg0, 4, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
    } else if (arg1 == 4) {
        var_s0 = func_803084B0(arg0, 3, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
        var_s1 = func_803084B0(arg0, 2, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
        var_v0 = func_803084B0(arg0, 1, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
    } else {
        var_s0 = func_803084B0(arg0, 2, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
        var_s1 = func_803084B0(arg0, 1, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
        var_v0 = func_803084B0(arg0, 4, 2, 0, 2, 2, 2, 0.0f, 0.0f, 0.0f, 0.0f);
    }
    func_802E7734(var_s0, 0, 0x42F00000, 0xC528C000, 596.0f, 400.0f, 1.0f);
    func_802E7734(var_s0, 1, 0x42F80000, 0xC3B40000, 620.0f, 400.0f, 0.5f);
    func_802E7734(var_s0, 2, 0x42F80000, 0x437A0000, 620.0f, 400.0f, 0.5f);
    func_802E7734(var_s0, 3, 0xC3B40000, 0xC3B40000, 620.0f, 100.0f, 1.0f);
    func_802E7734(var_s0, 4, 0xC3B40000, 0xC4960000, 620.0f, 75.0f, 0.5f);
    func_802E7734(var_s0, 5, 0x42F80000, 0xC4938000, D_8033FEA0, 50.0f, D_8033FEA4);
    func_802E7734(var_s0, 6, 0x42F80000, 0xC3B40000, 528.0f, 42.0f, 0.5f);
    func_802E7734(var_s0, 7, 0x42F80000, 0xC3480000, 524.0f, 42.0f, 0.5f);
    func_802E7734(var_s1, 0, 0x42F00000, 0xC52F0000, 596.0f, 400.0f, 1.0f);
    func_802E7734(var_s1, 1, 0x42F80000, 0xC3B40000, 620.0f, 400.0f, 0.5f);
    func_802E7734(var_s1, 2, 0x42F80000, 0x449C4000, 620.0f, 400.0f, 0.5f);
    func_802E7734(var_s1, 3, 0xC3B40000, 0xC3B40000, 620.0f, 100.0f, 1.0f);
    func_802E7734(var_s1, 4, 0xC3B40000, 0xC4960000, 620.0f, 75.0f, 0.5f);
    func_802E7734(var_s1, 5, 0x42F80000, 0xC4938000, D_8033FEA8, 50.0f, D_8033FEAC);
    func_802E7734(var_s1, 6, 0x42F80000, 0xC3B40000, 528.0f, 42.0f, 0.5f);
    func_802E7734(var_s1, 7, 0x42F80000, 0xC3480000, 524.0f, 42.0f, 0.5f);
    func_802E7734(var_v0, 0, 0x42F00000, 0xC5354000, 596.0f, 400.0f, 1.0f);
    func_802E7734(var_v0, 1, 0x42F80000, 0xC3B40000, 620.0f, 400.0f, 0.5f);
    func_802E7734(var_v0, 2, 0x42F80000, 0x450CA000, 620.0f, 400.0f, 0.5f);
    func_802E7734(var_v0, 3, 0xC3B40000, 0xC3B40000, 620.0f, 100.0f, 1.0f);
    func_802E7734(var_v0, 4, 0xC3B40000, 0xC4960000, 620.0f, 75.0f, 0.5f);
    func_802E7734(var_v0, 5, 0x42F80000, 0xC4938000, D_8033FEB0, 50.0f, D_8033FEB4);
    func_802E7734(var_v0, 6, 0x42F80000, 0xC3B40000, 528.0f, 42.0f, 0.5f);
    func_802E7734(var_v0, 7, 0x42F80000, 0xC3480000, 524.0f, 42.0f, 0.5f);
    return 1;
}
