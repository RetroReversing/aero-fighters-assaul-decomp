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
extern s32 D_80344F78;
extern f32 D_80344F7C;
extern f32 D_80344F80;
extern f32 D_80344F84;
extern f32 D_80344F88;
extern f32 D_80344F8C;
extern f32 D_80344F90;

void func_80300C20(s32 arg0) {
    func_803084B0(9, 1, 4, 1, 0, 2, D_80344F78, 2000.0f, D_80344F7C, 90.0f);
    func_803084B0(arg0, 9, 1, 4, 2, 0, 1, D_80344F80, -2000.0f, D_80344F84, 90.0f);
    func_803084B0(arg0, 9, 1, 4, 1, 0, 1, -4000.0f, 0.0f, D_80344F88, 90.0f);
    func_803084B0(arg0, 6, 1, 3, 2, 0, 2, D_80344F8C, -2000.0f, D_80344F90, 90.0f);
}
