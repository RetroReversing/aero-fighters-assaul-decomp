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

extern u8 D_80329360;
extern f32 D_80344E34;
extern f32 D_80344E38;
extern f32 D_80344E3C;
extern s16 D_80348240;
extern f32 D_80348244;
extern f32 D_80348248;
extern f32 D_8034824C;
extern char D_80348250[];

f32 func_803003A4(f32 arg0) {
    f32 var_fa0;
    void *temp_v1;

    var_fa0 = arg0;
    if (var_fa0 == D_80344E34) {
        return 1.0f;
    }
    if (var_fa0 == 0.0f) {
        return 0.0f;
    }
    D_80329360 = 0;
    if (D_80344E38 <= var_fa0) {
        do {
            var_fa0 -= D_80344E38;
            D_80329360 = ~D_80329360;
        } while (D_80344E38 <= var_fa0);
    }
    if (var_fa0 < 0.0f) {
        do {
            var_fa0 += D_80344E38;
            D_80329360 = ~D_80329360;
        } while (var_fa0 < 0.0f);
    }
    if (D_80344E34 <= var_fa0) {
        var_fa0 = D_80344E38 - var_fa0;
    }
    D_80348244 = var_fa0 * D_80344E3C;
    D_80348240 = (s16) (s32) D_80348244;
    temp_v1 = (D_80348240 * 4) + D_80348250;
    D_80348248 = M2C_FIELD(temp_v1, f32 *, 0);
    D_8034824C = M2C_FIELD(temp_v1, f32 *, 4);
    D_80348244 -= (f32) D_80348240;
    if (D_80329360 != 0) {
        return (D_80348244 * (D_80348248 - D_8034824C)) - D_80348248;
    }
    return D_80348248 + (D_80348244 * (D_8034824C - D_80348248));
}
