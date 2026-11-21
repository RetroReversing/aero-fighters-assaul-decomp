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

s32 func_8023EDC0();
s32 osContGetReadData();
s32 osRecvMesg();
extern s32 D_80278740;
extern char D_80280C58[];
extern char D_80280CE0[];

s32 func_80231848(void *arg0, s32 arg1) {
    s32 sp34;
    f32 var_fv0;
    f32 var_fv1;
    s32 temp_t8;
    s8 var_v0;
    s8 var_v1;
    void *temp_a0;

    if (D_80278740 != 0) {
        return 0;
    }
    if (func_8023EDC0(D_80280C58) & ~4) {
        temp_t8 = M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, f32 *, 4) = 0.0f;
        M2C_FIELD(arg0, f32 *, 8) = 0.0f;
        M2C_FIELD(arg0, s32 *, 0x14) = temp_t8;
        return 0;
    }
    osRecvMesg(D_80280C58, &sp34, 1, arg0);
    osContGetReadData(D_80280CE0);
    temp_a0 = (arg1 * 6) + D_80280CE0;
    var_v0 = M2C_FIELD(temp_a0, s8 *, 2);
    var_v1 = M2C_FIELD(temp_a0, s8 *, 3);
    if (var_v0 < 0) {
        if (var_v0 < -0x44) {
            var_v0 = -0x44;
        } else if (var_v0 >= -6) {
            var_v0 = -7;
        }
        var_fv1 = (f32) (var_v0 + 7) / 61.0f;
    } else {
        if (var_v0 >= 0x45) {
            var_v0 = 0x44;
        } else if (var_v0 < 7) {
            var_v0 = 7;
        }
        var_fv1 = (f32) (var_v0 - 7) / 61.0f;
    }
    if (var_v1 < 0) {
        if (var_v1 < -0x46) {
            var_v1 = -0x46;
        } else if (var_v1 >= -6) {
            var_v1 = -7;
        }
        var_fv0 = (f32) (var_v1 + 7) / 63.0f;
    } else {
        if (var_v1 >= 0x47) {
            var_v1 = 0x46;
        } else if (var_v1 < 7) {
            var_v1 = 7;
        }
        var_fv0 = (f32) (var_v1 - 7) / 63.0f;
    }
    M2C_FIELD(arg0, f32 *, 4) = var_fv1;
    M2C_FIELD(arg0, f32 *, 8) = var_fv0;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(temp_a0, u16 *, 0);
    return 1;
}
