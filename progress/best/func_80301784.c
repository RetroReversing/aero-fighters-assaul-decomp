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

s32 func_8022A0D0();

void func_80301784(void *arg0, f32 arg1, f32 arg2) {
    f32 temp_fv0;
    f32 temp_fv1;

    func_8022A0D0(arg2, arg1, 0.0f);
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_fv0 = temp_fv1 * temp_fv1;
    func_8022A0D0(arg1, 0.0f, temp_fv0 * -25.0f, temp_fv0 * 2.0f);
}
