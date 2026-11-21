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

f32 func_803003A4();
extern f32 D_80342A18;
extern f32 D_80342A1C;
extern f32 D_80342A20;

void func_802CF280(f32 arg0, f32 arg1, f32 arg2, void *arg3) {
    f32 sp4C;
    f32 sp40;
    f32 temp_fv0;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fs1;
    f32 var_fs2;
    f32 var_fs3;
    f32 var_ft4;
    f32 var_ft5;
    f32 var_fv1;

    if (arg0 == 0.0f) {
        var_fs2 = 1.0f;
        var_fs3 = 0.0f;
    } else {
        var_fs3 = func_803003A4();
        var_fs2 = func_803003A4(arg0 + D_80342A18);
    }
    if (arg1 == 0.0f) {
        var_fa1 = 1.0f;
        var_fs1 = 0.0f;
    } else {
        var_fs1 = func_803003A4(arg1);
        var_fa1 = func_803003A4(arg1 + D_80342A1C);
    }
    if (arg2 == 0.0f) {
        var_fa0 = 1.0f;
        var_fv1 = 0.0f;
        var_ft4 = 0.0f;
        var_ft5 = var_fs1;
    } else {
        sp4C = var_fa1;
        sp40 = func_803003A4(arg2, var_fa1);
        temp_fv0 = func_803003A4(arg2 + D_80342A20);
        var_fv1 = sp40;
        var_fa0 = temp_fv0;
        var_ft4 = var_fv1 * var_fs1;
        var_ft5 = temp_fv0 * var_fs1;
    }
    M2C_FIELD(arg3, f32 *, 0x30) = 0.0f;
    M2C_FIELD(arg3, f32 *, 0x34) = 0.0f;
    M2C_FIELD(arg3, f32 *, 0x18) = var_fs1;
    M2C_FIELD(arg3, f32 *, 0x38) = 0.0f;
    M2C_FIELD(arg3, f32 *, 0xC) = 0.0f;
    M2C_FIELD(arg3, f32 *, 0x1C) = 0.0f;
    M2C_FIELD(arg3, f32 *, 0x2C) = 0.0f;
    M2C_FIELD(arg3, f32 *, 0) = (f32) ((var_fa0 * var_fs2) - (var_ft4 * var_fs3));
    M2C_FIELD(arg3, f32 *, 0x10) = (f32) (-var_fa1 * var_fs3);
    M2C_FIELD(arg3, f32 *, 0x20) = (f32) ((var_fv1 * var_fs2) + (var_ft5 * var_fs3));
    M2C_FIELD(arg3, f32 *, 0x14) = (f32) (var_fa1 * var_fs2);
    M2C_FIELD(arg3, f32 *, 4) = (f32) ((var_fa0 * var_fs3) + (var_ft4 * var_fs2));
    M2C_FIELD(arg3, f32 *, 0x24) = (f32) ((var_fv1 * var_fs3) - (var_ft5 * var_fs2));
    M2C_FIELD(arg3, f32 *, 8) = (f32) (-var_fv1 * var_fa1);
    M2C_FIELD(arg3, f32 *, 0x3C) = 1.0f;
    M2C_FIELD(arg3, f32 *, 0x28) = (f32) (var_fa0 * var_fa1);
}
