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

s32 func_80205C7C(s32, s32, f32, f32, f32, f32, f32, f32);
s32 func_80228DE0();
s32 func_8022A0D0();
f32 func_802CF808();
s32 func_802D0154();
extern f32 D_80341FA4;
extern f32 D_80341FA8;
extern f32 D_80341FAC;
extern f32 D_80341FB0;
extern f32 D_80341FB4;
extern f32 D_80341FB8;

void func_802C8E54(void *arg0, s32 arg1, s32 arg2) {
    s32 sp40;
    f32 temp_fv0;
    f32 temp_fv1;

    func_80228DE0(&sp40);
    func_8022A0D0(arg1, 0, arg2, 8.0f);
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_fv0 = temp_fv1 * temp_fv1;
    func_8022A0D0(0x41200000, arg1, 0, temp_fv0 * -100.0f, temp_fv0 * 10.0f);
    func_802D0154(arg1, func_802CF808(&sp40) + D_80341FA4);
    if ((M2C_FIELD(arg0, u8 *, 0x95B4) == 0) && (M2C_FIELD(arg0, f32 *, 0x20) < D_80341FA8)) {
        M2C_FIELD(arg0, u8 *, 0x95B4) = 1U;
        func_80205C7C(0x41200000, 0, D_80341FAC * 10.0f, D_80341FB0 * 10.0f, D_80341FB4 * 10.0f, D_80341FB8 * 10.0f, 10.0f, 2000.0f);
    }
}
