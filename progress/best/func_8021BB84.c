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

extern unsigned short D_80280BE6;
extern unsigned short D_80280BEA;
extern unsigned short D_80280BE8;
s32 func_8022970C();
s32 func_8022B780();
s32 func_8022BA58();
extern s32 D_8025C3E0;
extern s32 D_8025C3E4;
extern s32 D_8025C3E8;
extern s32 D_8025C3EC;
extern s32 D_8025C3F0;
extern s32 D_8025C3F4;
extern s16 D_8025C3FA;
extern char D_80280BC0[];

void func_8021BB84(void) {
char *__repair_addr;

    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    u16 temp_v0;
    unsigned short *__base_D_80280BE8;

    __base_D_80280BE8 = &D_80280BE8;

    D_8025C3E0 = func_8022BA58(D_80280BE6 * 0x24);
    D_8025C3E4 = func_8022BA58(D_80280BEA << 6);
    D_8025C3EC = func_8022BA58(D_80280BEA);
    D_8025C3F4 = func_8022BA58(D_80280BE6 * 4);
    D_8025C3F0 = func_8022BA58(D_80280BE6 * 2);
    D_8025C3E8 = func_8022BA58(D_80280BEA * 4);
    func_8022B780(D_8025C3E0, 0, D_80280BE6 * 0x24);
    func_8022B780(D_8025C3E4, 0, D_80280BEA << 6);
    func_8022B780(D_8025C3EC, 0, D_80280BEA);
    func_8022B780(D_8025C3F4, 0, D_80280BE6 * 4);
    func_8022B780(D_8025C3F0, 0, D_80280BE6 * 2);
    func_8022B780(D_8025C3E8, 0, D_80280BEA * 4);
    temp_v0 = D_80280BE6;
    var_s1 = 0;
    var_s0 = 0;
    if ((s32) temp_v0 > 0) {
        do {
__repair_addr = (char *)(D_8025C3E0 + var_s0);

            *(s32 *)(__repair_addr) = 0xFFFF;
            M2C_FIELD((D_8025C3E0 + var_s0), s32 *, 4) = func_8022BA58((*__base_D_80280BE8) * 2);
            func_8022B780(M2C_FIELD((D_8025C3E0 + var_s0), s32 *, 4), 0, (*__base_D_80280BE8) * 2);
            var_s1 += 1;
            var_s0 += 0x24;
        } while (var_s1 < (s32) D_80280BE6);
        var_s1 = 0;
    }
    if ((s32) D_80280BE6 > 0) {
        var_v0 = 0;
        do {/*__repair_loop_weight*/do {do {do {
            var_s1 += 1;} while (0);} while (0);} while (0);
            *(s32 *)(D_8025C3F0 + var_v0) = 0xFFFF;
            var_v0 += 2;
        } while (var_s1 < (s32) D_80280BE6);
        var_s1 = 0;
    }
    var_s0_2 = 0;
    if ((s32) D_80280BEA > 0) {
        do {
            *(s32 *)(D_8025C3EC + var_s1) = 0;
            var_s1 += 1;
        } while (var_s1 < (s32) D_80280BEA);
        var_s1 = 0;
    }
    if ((s32) D_80280BEA > 0) {
        do {
            func_8022970C(D_8025C3E4 + var_s0_2);
            var_s1 += 1;
            var_s0_2 += 0x40;
        } while (var_s1 < (s32) D_80280BEA);
    }
    D_8025C3FA = 0;
}
