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

s32 func_8022D04C();
s32 func_80231A24();
extern char D_8025479C[];
extern char D_802547B4[];
extern char D_802547EC[];
extern char D_802786F0[];
extern s32 D_80278738;
extern s32 D_80278744;

void func_8022D3F0(void) {
    s32 sp34;
    s32 temp_hi;
    s32 var_s1;
    s32 var_s2;
    void *temp_t7;

    sp34 = D_80278738;
    func_80231A24(D_8025479C, D_80278738);
    var_s1 = 0;
    var_s2 = sp34 + 1;
    do {
        temp_hi = var_s2 % 5;
        temp_t7 = D_802786F0 + (temp_hi * 8);
        func_80231A24(D_802547B4, temp_hi, M2C_FIELD(temp_t7, s32 *, 0), M2C_FIELD(temp_t7, s32 *, 4));
        func_8022D04C(temp_hi);
        var_s1 += 1;
        var_s2 += 1;
    } while (var_s1 != 5);
    D_80278744 = 0;
    func_80231A24(D_802547EC, sp34, D_80278738);
}
