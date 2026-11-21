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

s32 osVirtualToPhysical(s32);                       /* extern */
extern s32 D_A4600000;
extern s32 D_A4600004;
extern s32 D_A4600008;
extern s32 D_A460000C;
extern s32 D_A4600010;

s32 func_80248C50(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
int *__repair_home1 = &arg1;

    if (D_A4600010 & 3) {
        do {

        } while (D_A4600010 & 3);
    }
    D_A4600000 = osVirtualToPhysical(arg3);
    D_A4600004 = (M2C_FIELD(arg0, s32 *, 0xC) | arg2) & 0x1FFFFFFF;
    switch ((*__repair_home1)) {                                 /* irregular */
    case 0:
        D_A460000C = arg4 - 1;
block_8:
        return 0;
    case 1:
        D_A4600008 = arg4 - 1;
        goto block_8;
    default:
        return -1;
    }
}
