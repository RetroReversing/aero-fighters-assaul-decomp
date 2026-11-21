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
extern s32 D_80340998;
extern f32 D_8034099C;
extern f32 D_803409A0;
extern f32 D_803409A4;

s32 func_802A089C(s32 arg0) {
    func_803084B0(0xC, 1, 4, 2, 2, 2, D_80340998, -500.0f, 1000.0f, 45.0f);
    func_803084B0(arg0, 6, 1, 3, 2, 2, 2, D_8034099C, -1000.0f, 1000.0f, 45.0f);
    func_803084B0(arg0, 8, 1, 4, 2, 2, 2, 1000.0f, D_803409A0, 1000.0f, 235.0f);
    func_803084B0(arg0, 7, 1, 4, 2, 2, 2, D_803409A4, 2000.0f, 1000.0f, 235.0f);
    return 1;
}
