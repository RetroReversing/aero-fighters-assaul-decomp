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
extern s32 D_80344F20;
extern f32 D_80344F24;
extern f32 D_80344F28;
extern f32 D_80344F2C;
extern f32 D_80344F30;
extern f32 D_80344F34;
extern f32 D_80344F38;
extern f32 D_80344F3C;
extern f32 D_80344F40;
extern f32 D_80344F44;
extern f32 D_80344F48;
extern f32 D_80344F4C;

void func_80300660(s32 arg0) {
    func_803084B0(1, 2, 4, 0, 0, 2, D_80344F20, D_80344F24, D_80344F28, 135.0f);
    func_803084B0(arg0, 3, 2, 4, 0, 0, 2, D_80344F2C, D_80344F30, D_80344F34, 135.0f);
    func_803084B0(arg0, 4, 2, 4, 0, 0, 2, D_80344F38, D_80344F3C, D_80344F40, 135.0f);
    func_803084B0(arg0, 2, 2, 4, 0, 0, 2, D_80344F44, D_80344F48, D_80344F4C, 135.0f);
}
