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

u32 func_8030A850(s32, u8);                         /* extern */
extern f64 D_803465F0;
extern u8 D_80348BAD;
extern u8 D_80348BAF;
extern u8 D_80348BB0;
extern u8 D_80348BB1;
extern u8 D_80348BB3;
extern u8 D_80348BB4;

s32 func_8030A56C(s32 arg0, s32 arg1) {
int *__repair_home1 = &arg1;

    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 var_ft1;
    f32 var_ft2;
    f32 var_ft3;
    f32 var_ft3_2;
    f32 var_ft5;
    f32 var_fv1;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v1;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;

    temp_v0 = arg0 & 0xFF;
    var_fv1 = 0.0f;
    temp_s0 = (*__repair_home1) & 0xFF;
    if (temp_v0 == 1) {
        temp_fs0 = (f32) func_8030A850(temp_s0, D_80348BAF);
        temp_v0_2 = func_8030A850(temp_s0, D_80348BB3);
        var_ft3 = (f32) temp_s0;
        if (temp_s0 < 0) {
            var_ft3 += 4294967296.0f;
        }
        var_ft3_2 = (f32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            var_ft3_2 += 4294967296.0f;
        }
        var_fv1 = (f32) ((f64) (var_ft3 * (1.0f - temp_fs0)) * (1.5 + (f64) var_ft3_2) * 2.0);
    } else if (temp_v0 == 4) {
        temp_fs0_2 = (f32) func_8030A850(temp_s0, D_80348BB0);
        temp_v0_3 = func_8030A850(temp_s0, D_80348BB4);
        var_ft2 = (f32) temp_s0;
        if (temp_s0 < 0) {
            var_ft2 += 4294967296.0f;
        }
        var_ft5 = (f32) temp_v0_3;
        if ((s32) temp_v0_3 < 0) {
            var_ft5 += 4294967296.0f;
        }
        var_fv1 = (var_ft2 * (1.0f - temp_fs0_2) * (2.0f + var_ft5) * 2.0f) + (f32) ((f64) (D_80348BB4 & 2) * D_803465F0);
    } else if (temp_v0 == 3) {
        temp_fs0_3 = (f32) func_8030A850(temp_s0, D_80348BAD);
        temp_v0_4 = func_8030A850(temp_s0, D_80348BB1);
        var_ft1 = (f32) temp_v0_4;
        if ((s32) temp_v0_4 < 0) {
            var_ft1 += 4294967296.0f;
        }
        var_fv1 = (f32) temp_s0 * (1.0f - temp_fs0_3) * (3.0f + var_ft1) * 2.0f;
    }
    var_v1 = 0;
    if (var_fv1 >= 3.0f) {
        var_v1 = 1;
    }
    return var_v1 & 0xFF;
}
