/* Draft from identical target func_802BD5EC, retargeted and judged independently. */
/* Draft from identical target func_80307DDC, retargeted and judged independently. */
/* Draft from identical target func_802B21A4, retargeted and judged independently. */
/* Draft from identical target func_802B43FC, retargeted and judged independently. */
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

s32 func_802D4F90(s32 arg0, f32, f32, s32);

void func_802B21A4(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
int *__repair_home0 = &arg0;

    do { func_802D4F90(arg0, arg2, arg3, (*__repair_home0) + 0x1A4); } while (0);
}
