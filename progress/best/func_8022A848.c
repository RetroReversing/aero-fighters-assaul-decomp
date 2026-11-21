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

s32 func_80229CD4();

void func_8022A848(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp_fa0;
    f32 temp_fv1;

    temp_fv1 = arg2 - arg1;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (2.0f / temp_fv1);
    M2C_FIELD(arg0, f32 *, 0x28) = -1.0f;
    temp_fa0 = arg4 - arg3;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (2.0f / temp_fa0);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (-(arg2 + arg1) / temp_fv1);
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x10) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x18) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x24) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x3C) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (-(arg4 + arg3) / temp_fa0);
    func_80229CD4(temp_fa0, arg2, 0x3FC90FDA, 0x78);
}
