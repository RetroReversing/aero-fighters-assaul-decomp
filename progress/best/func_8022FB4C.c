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

s32 func_80231A24();
extern void *D_8024E710;
extern char D_80254AAC[];
extern char D_80254AD0[];

s32 func_8022FB4C(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;
    u32 temp_a1;
    u32 temp_t6;
    void *temp_v0;

    temp_v0 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x24) + ((temp_t6 = (u32) (arg0 & 0xFFF000) >> 0xC) * 4));
    if (temp_v0 == NULL) {
        func_80231A24(D_80254AAC, temp_t6);
        return 0;
    }
    temp_a1 = arg0 & 0xFFF;
    var_v0 = M2C_FIELD(temp_v0, s32 *, 0x10) + (temp_a1 << 5);
    arg0 = var_v0;
    if (var_v0 == 0) {
        func_80231A24(D_80254AD0, temp_a1, temp_t6);
        arg0 = 0;
    }
    return arg0;
}
