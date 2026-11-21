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

s32 func_80241760();                                /* extern */
M2C_UNK func_80241780(s32);                         /* extern */
extern void *D_80251774;

s32 func_8023DB20(void) {
    s32 sp20;
    s32 temp_a0;

    temp_a0 = func_80241760();
    sp20 = M2C_FIELD(D_80251774, s32 *, 4);
    func_80241780(temp_a0);
    return sp20;
}
