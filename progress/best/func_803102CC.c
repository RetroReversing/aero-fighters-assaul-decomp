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
extern s32 D_80346AEC;
extern f32 D_80346AF0;
extern f32 D_80346AF4;
extern f32 D_80346AF8;
extern f32 D_80346AFC;
extern f32 D_80346B00;
extern f32 D_80346B04;
extern f32 D_80346B08;
extern f32 D_80346B0C;

s32 func_803102CC(s32 arg0) {
    func_803084B0(6, 1, 3, 1, 0, 0, D_80346AEC, D_80346AF0, D_80346AF4, 140.0f);
    func_803084B0(arg0, 5, 1, 2, 0, 1, 0, D_80346AF8, -278.0f, 600.0f, 90.0f);
    func_803084B0(arg0, 5, 1, 2, 0, 1, 0, D_80346AFC, D_80346B00, D_80346B04, 90.0f);
    func_803084B0(arg0, 5, 1, 2, 0, 1, 0, D_80346B08, D_80346B0C, 680.0f, 90.0f);
    return 1;
}
