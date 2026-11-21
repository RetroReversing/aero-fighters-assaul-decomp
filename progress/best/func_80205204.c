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

extern unsigned char D_8025B8B0;
extern int D_8025B8B4;
extern int D_8025B8B8;
extern s32 D_8025B8BC;
extern s32 func_8020505C;

s32 *func_80205204(s32 **arg0) {
    unsigned char *__base_D_8025B8B0;
    __base_D_8025B8B0 = &D_8025B8B0;
    if ((*__base_D_8025B8B0) == 0) {
        D_8025B8B4 = 0;
        (*__base_D_8025B8B0) = 1U;
        D_8025B8B8 = (s32) D_8025B8BC;
    }
    *arg0 = __base_D_8025B8B0;
    return &func_8020505C;
}
