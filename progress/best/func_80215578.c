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

s32 func_80215578(f32 arg0, f32 arg1, s32 arg2, s32 arg3, u16 arg4, u16 arg5, f32 arg6) {
int *__repair_home3 = &arg3;

    f32 temp_fa0;
    f32 var_fs0;
    f32 var_fs1;
    f32 var_ft4;
    f32 var_ft5;
    f32 var_fv0;
    f32 var_fv1;
    s32 var_v0;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg2 + (arg4 * 0x10);
    temp_v0 = arg2 + (((*__repair_home3) & 0xFFFF) * 0x10);
    var_ft4 = (f32) M2C_FIELD(temp_v1, s16 *, 0);
    temp_a0 = arg2 + (arg5 * 0x10);
    var_ft5 = (f32) M2C_FIELD(temp_v1, s16 *, 2);
    var_fv0 = (f32) M2C_FIELD(temp_v0, s16 *, 0);
    var_fv1 = (f32) M2C_FIELD(temp_v0, s16 *, 2);
    var_fs0 = (f32) M2C_FIELD(temp_a0, s16 *, 0);
    var_fs1 = (f32) M2C_FIELD(temp_a0, s16 *, 2);
    if (arg6 != 1.0f) {
        temp_fa0 = 1.0f / arg6;
        var_fv0 *= temp_fa0;
        var_fv1 *= temp_fa0;
        var_ft4 *= temp_fa0;
        var_ft5 *= temp_fa0;
        var_fs0 *= temp_fa0;
        var_fs1 *= temp_fa0;
    }
    if (((arg1 - var_fv1) * (var_ft4 - var_fv0)) < ((arg0 - var_fv0) * (var_ft5 - var_fv1))) {
        return 0;
    }
    if (((arg1 - var_ft5) * (var_fs0 - var_ft4)) < ((arg0 - var_ft4) * (var_fs1 - var_ft5))) {
        return 0;
    }
    var_v0 = 1;
    if (((arg1 - var_fs1) * (var_fv0 - var_fs0)) < ((arg0 - var_fs0) * (var_fv1 - var_fs1))) {
        var_v0 = 0;
    }
    return var_v0;
}
