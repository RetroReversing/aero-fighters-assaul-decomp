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

s32 func_802AEDD4();
f32 func_80318340();
f32 func_80318348();
extern f32 D_8032AA74;
extern f32 D_8032AA7C;
extern u8 D_8032AA80;
extern f32 D_803465C0;
extern f32 D_803465C4;
extern f32 D_803465C8;
extern u8 D_80348B9A;

void func_80309964(void) {
    f32 sp40;
    s32 sp30;
    f32 sp24;
    f32 sp1C;
    f32 temp_fa1;
    f32 var_fv1;
    u8 var_v0;

    var_v0 = D_8032AA80;
    if ((s32) D_8032AA80 >= 7) {
        var_v0 = 6;
    }
    temp_fa1 = (f32) (D_80348B9A - 1) * 0.5f;
    sp1C = (f32) (var_v0 - 1) * D_803465C0;
    if ((s32) D_8032AA80 < 0xF) {
        sp40 = temp_fa1;
        sp30 = func_802AEDD4(temp_fa1, D_8032AA74, 1);
        sp24 = func_80318348(func_802AEDD4(D_8032AA74, 1e-45f));
        var_fv1 = ((func_80318340(sp30) / sp24) - D_803465C4) * D_803465C8;
    } else {
        var_fv1 = 1.0f;
    }
    if (var_fv1 < 0.0f) {
        var_fv1 = 0.0f;
    }
    D_8032AA7C = ((sp1C * 40.0f) + (temp_fa1 * 40.0f) + (var_fv1 * 20.0f)) / 100.0f;
}
