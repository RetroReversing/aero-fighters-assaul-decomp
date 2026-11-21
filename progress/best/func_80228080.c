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

extern unsigned short D_80280BFE;
extern unsigned short D_80280C02;
extern unsigned short D_80280C00;
s32 func_8022BA58();
extern s32 D_80275A30;
extern s32 D_80275A44;
extern s32 D_80275A48;
extern s32 D_80275A4C;
extern s32 D_80275A50;
extern s32 D_80275A54;
extern s32 D_80275A58;
extern s32 D_80275A5C;
extern char D_80280BC0[];

void func_80228080(void) {
    s32 var_v0;
    s32 var_v1;

    D_80275A44 = func_8022BA58(D_80280BFE << 5);
    D_80275A48 = func_8022BA58(D_80280C02 * 0x10);
    D_80275A4C = func_8022BA58(D_80280C02 * 0x10);
    D_80275A50 = func_8022BA58(D_80280C00 * 8);
    D_80275A54 = func_8022BA58(D_80280C00 * 8);
    var_v0 = 0;
    var_v1 = 0;
    if ((s32) D_80280BFE > 0) {
        do {
            var_v1 += 1;
            *(s32 *)(D_80275A44 + var_v0) = 0;
            M2C_FIELD((D_80275A44 + var_v0), s8 *, 1) = 0;
            var_v0 += 0x20;
        } while (var_v1 < (s32) D_80280BFE);
    }
    D_80275A30 = 0;
    D_80275A5C = 0;
    D_80275A58 = 0;
}
