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

s32 func_803084B0();
extern s32 D_80343560;
extern f32 D_80343564;
extern f32 D_80343568;

s32 func_802D7ED0(s32 arg0) {
    func_803084B0(4, 2, 4, 0, 0, 2, D_80343560, -10.0f, 60.0f, 270.0f);
    func_803084B0(arg0, 1, 2, 4, 0, 0, 2, D_80343564, -15.0f, 59.0f, 270.0f);
    func_803084B0(arg0, 2, 2, 4, 0, 0, 2, D_80343568, -25.0f, 57.0f, 270.0f);
    func_803084B0(arg0, 3, 2, 4, 0, 0, 2, -1080.0f, -5.0f, 58.0f, 270.0f);
    return 1;
}
