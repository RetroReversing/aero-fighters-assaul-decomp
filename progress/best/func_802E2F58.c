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

f32 func_80234AF0();
f32 func_802CF450();
f32 func_80317E40();
f32 func_803185F8();
extern f32 D_8032AA78;
extern f32 D_8032AA7C;
extern f32 D_80343DC4;
extern f32 D_80343DC8;
extern f32 D_80343DCC;
extern f32 D_80343DD0;
extern f32 D_80343DD4;
extern f32 D_80343DD8;
extern f32 D_80343DDC;

void func_802E2F58(void *arg0, s32 arg1, s32 arg2) {
    f32 sp24;
    f32 temp_fa0;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 2) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((D_8032AA78 * 0.5f) + ((f32) M2C_FIELD(arg0, s32 *, 0x2C) * 0.25f));
    } else if (temp_v0 == 1) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((D_8032AA7C * 0.5f) + ((f32) M2C_FIELD(arg0, s32 *, 0x2C) * 0.25f));
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38) * D_80343DC4) + D_80343DC8);
    sp24 = func_803185F8(arg0, M2C_FIELD(arg0, s32 *, 0xE4));
    M2C_FIELD(arg0, f32 *, 0x10C) = func_802CF450(M2C_FIELD(arg0, f32 *, 0xB0), func_80317E40(arg0, M2C_FIELD(arg0, s32 *, 0xE4)));
    if (M2C_FIELD(arg0, u8 *, 0xFA) != 0) {
        temp_fv0 = M2C_FIELD(arg0, f32 *, 0x10C) - M2C_FIELD(arg0, f32 *, 0xFC);
        if (M2C_FIELD(arg0, f32 *, 0x9C) > 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x9C) = 1.0f;
        } else {
            M2C_FIELD(arg0, f32 *, 0x9C) = -1.0f;
        }
        if (!(sp24 < M2C_FIELD(arg0, f32 *, 0x100))) {
            if (temp_fv0 > 0.0f) {
                var_fv1 = temp_fv0;
            } else {
                var_fv1 = -temp_fv0;
            }
            if (var_fv1 < D_80343DCC) {
                goto block_13;
            }
        } else {
block_13:
            M2C_FIELD(arg0, f32 *, 0x9C) = 0.0f;
            M2C_FIELD(arg0, u8 *, 0xFA) = 0U;
        }
    } else if ((((func_80234AF0() - 0.5f) * 500.0f) + D_80343DD0) < sp24) {
        temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0x10C);
        if (temp_fv0_2 > 0.0f) {
            var_fv1_2 = temp_fv0_2;
        } else {
            var_fv1_2 = -temp_fv0_2;
        }
        if (D_80343DD4 < var_fv1_2) {
            M2C_FIELD(arg0, f32 *, 0xFC) = (f32) (func_80234AF0(0.0f) - 0.5f);
            temp_fa0 = M2C_FIELD(arg0, f32 *, 0x5C8);
            temp_fv1 = ((func_80234AF0() - 0.5f) * 1000.0f) + M2C_FIELD(arg0, f32 *, 0xAC);
            M2C_FIELD(arg0, f32 *, 0x5CC) = temp_fv1;
            if (temp_fv1 < temp_fa0) {
                M2C_FIELD(arg0, f32 *, 0x5CC) = temp_fa0;
            }
            temp_fv0_3 = M2C_FIELD(arg0, f32 *, 0x5D0);
            if (temp_fv0_3 < M2C_FIELD(arg0, f32 *, 0x5CC)) {
                M2C_FIELD(arg0, f32 *, 0x5CC) = temp_fv0_3;
            }
            temp_ft1 = (func_80234AF0(temp_fa0) - 0.5f) * D_80343DD8;
            M2C_FIELD(arg0, f32 *, 0x9C) = 1.0f;
            M2C_FIELD(arg0, f32 *, 0x98) = (f32) ((temp_ft1 + D_80343DDC) * M2C_FIELD(arg0, f32 *, 0x8C));
            if (func_80234AF0() > 0.5f) {
                M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (M2C_FIELD(arg0, f32 *, 0x9C) * -1.0f);
            }
            M2C_FIELD(arg0, u8 *, 0xFA) = 1U;
        }
    }
}
