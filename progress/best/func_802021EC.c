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

M2C_UNK func_802011D0(M2C_UNK *);                   /* extern */
extern M2C_UNK D_80252030;
extern M2C_UNK D_80256DC0;
extern M2C_UNK D_80256DD0;
extern s32 D_80256DE0;

void func_802021EC(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_v1;

    func_802011D0(&D_80252030);
    var_v1 = &D_80256DD0;
    var_a0 = &D_80256DC0;
    __repair_rows: {
        var_v1 += 4;
        M2C_FIELD(var_a0, s8 *, 1) = 0xFF;
        M2C_FIELD(var_v1, s8 *, -3) = 0xFF;
        M2C_FIELD(var_a0, s8 *, 2) = 0xFF;
        M2C_FIELD(var_v1, s8 *, -2) = 0xFF;
        M2C_FIELD(var_a0, s8 *, 3) = 0xFF;
        M2C_FIELD(var_v1, s8 *, -1) = 0xFF;
        var_a0 += 4;
        M2C_FIELD(var_a0, s8 *, -4) = 0xFF;
        M2C_FIELD(var_v1, s8 *, -4) = 0xFF;
    }
if (var_v1 != &D_80256DE0) goto __repair_rows;
    D_80256DE0 = 0;
}
