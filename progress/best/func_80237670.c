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

s32 func_80242300();                                /* extern */
s32 osVirtualToPhysical(s32);                       /* extern */
extern u8 D_80250920;
extern s32 D_A4500000;
extern s32 D_A4500004;

s32 func_80237670(s32 arg0, s32 arg1) {
    u8 *__base_D_80250920;
int *__repair_home0 = &arg0;

    s32 sp1C;

    sp1C = (*__repair_home0);
    __base_D_80250920 = &D_80250920;
    if ((*__base_D_80250920) != 0) {
        sp1C = (*__repair_home0) - 0x2000;
    }
    if ((((*__repair_home0) + arg1) & 0x3FFF) == 0x2000) {
        (*__base_D_80250920) = 1;
    } else {
        (*__base_D_80250920) = 0;
    }
    if (func_80242300() != 0) {
        return -1;
    }
    D_A4500000 = osVirtualToPhysical(sp1C);
    D_A4500004 = arg1;
    return 0;
}
