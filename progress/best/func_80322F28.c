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

M2C_UNK func_80228DE0(M2C_UNK *);                   /* extern */
M2C_UNK func_8022A0D0(s32, M2C_UNK, f32, f32);      /* extern */
M2C_UNK func_802D0154(s32, f32, M2C_UNK);           /* extern */
extern f32 D_80347ADC;
extern f32 D_80347AE0;
extern f32 D_80347AE4;

void func_80322F28(void *arg0, s32 arg1, f32 arg2) {
int *__repair_home1 = &arg1;

    char sp20[0x40];
    f32 sp1C;
    f32 temp_fv0;
    f32 temp_fv1;

    func_80228DE0(sp20);
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_fv1 = temp_fv0 * temp_fv0;
    sp1C = (temp_fv0 * temp_fv0);
    func_8022A0D0((*__repair_home1), 0, arg2 + ((temp_fv0 * temp_fv0) * D_80347ADC), 8.0f);
    func_802D0154((*__repair_home1), (temp_fv0 * temp_fv0) * D_80347AE0, 0x7A);
    func_8022A0D0((*__repair_home1), 0, (temp_fv0 * temp_fv0) * D_80347AE4, (temp_fv0 * temp_fv0) * -5.0f);
}
