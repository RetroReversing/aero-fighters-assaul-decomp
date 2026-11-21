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

s32 func_8024A710();                                /* extern */
M2C_UNK osInvalDCache(s32, M2C_UNK);                /* extern */
s32 osVirtualToPhysical(s32);                       /* extern */
M2C_UNK osWritebackDCache(s32, M2C_UNK);            /* extern */
extern s32 D_A4800000;
extern s32 D_A4800004;
extern s32 D_A4800010;

s32 func_802465B0(s32 arg0, s32 arg1) {
int *__repair_home0 = &arg0;

    if (func_8024A710() != 0) {
        return -1;
    }
    if ((*__repair_home0) == 1) {
        osWritebackDCache(arg1, 0x40);
    }
    D_A4800000 = osVirtualToPhysical(arg1);
    if ((*__repair_home0) == 0) {
        D_A4800004 = 0x1FC007C0;
    } else {
        D_A4800010 = 0x1FC007C0;
    }
    if ((*__repair_home0) == 0) {
        osInvalDCache(arg1, 0x40);
    }
    return 0;
}
