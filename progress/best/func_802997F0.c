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
extern f32 D_80340200;
extern f32 D_80340204;
extern f32 D_80340208;

s32 func_802997F0(s32 arg0) {
    func_803084B0(1, 2, 4, 1, 1, 2, 0xC59B0000, -85.0f, 30.0f, 270.0f);
    func_803084B0(arg0, 3, 2, 4, 1, 1, 2, D_80340200, -80.0f, 25.0f, 270.0f);
    func_803084B0(arg0, 2, 2, 4, 1, 1, 2, D_80340204, -70.0f, 23.0f, 270.0f);
    func_803084B0(arg0, 4, 2, 4, 1, 1, 2, D_80340208, -75.0f, 27.0f, 270.0f);
    return 1;
}
