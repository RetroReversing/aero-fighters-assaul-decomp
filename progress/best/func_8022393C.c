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

s32 func_8022B460();
u64 func_8022B5E0();
s32 func_8022BA94();
s32 func_8022BB00();
s32 func_80234DF0();
extern u16 D_8024E874;
extern char D_80274380[];
extern char D_80275110[];

u32 func_8022393C(s32 arg0, u32 *arg1, s32 *arg2, s32 arg3) {
    u32 sp40;
    u32 sp3C;
    u32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 *temp_a3;
    s32 temp_a0_2;
    s32 temp_v0_2;
    u32 *var_s1;
    u32 temp_a0;
    u32 temp_v0;
    u32 temp_v1;
    void *temp_s0;

    temp_s0 = (arg0 * 0x10) + D_80275110;
    temp_v0 = M2C_FIELD(temp_s0, u32 *, 0xC);
    var_s1 = arg1;
    if (temp_v0 >= (u32) M2C_FIELD(temp_s0, u32 *, 8)) {
        return 0U;
    }
    if (var_s1 == NULL) {
        var_s1 = &sp3C;
    }
    sp40 = (u32) func_8022B5E0(M2C_FIELD(temp_s0, s32 *, 0) + temp_v0, 4);
    *var_s1 = (u32) func_8022B5E0(M2C_FIELD(temp_s0, s32 *, 0) + M2C_FIELD(temp_s0, u32 *, 0xC) + 4, 4);
    *arg2 = M2C_FIELD(temp_s0, s32 *, 0) + M2C_FIELD(temp_s0, u32 *, 0xC) + 8;
    if (sp40 == 0x475A4950) {
        temp_v1 = (u32) func_8022B5E0(M2C_FIELD(temp_s0, s32 *, 0) + M2C_FIELD(temp_s0, u32 *, 0xC) + 0xC, 4, arg2);
        temp_a0 = temp_v1;
        if (!(arg3 & 2)) {
            sp38 = temp_v1;
            sp34 = func_8022BB00(temp_a0);
            temp_a3 = D_80274380 + (D_8024E874 * 4);
            temp_a0_2 = *temp_a3;
            sp30 = temp_a0_2;
            func_8022B460(temp_a0_2, *arg2, *var_s1, temp_a3);
            func_80234DF0(sp30 + 8, sp34);
            func_8022BA94(sp34);
            *arg2 = sp34;
            sp40 = (u32) func_8022B5E0(M2C_FIELD(temp_s0, s32 *, 0) + M2C_FIELD(temp_s0, u32 *, 0xC) + 8, 4);
            M2C_FIELD(temp_s0, u32 *, 0xC) += *var_s1 + 8;
            *var_s1 = sp38;
        }
    } else {
        if (!(*arg2 & 0x80000000) && (arg3 & 1)) {
            temp_v0_2 = func_8022BB00(*var_s1);
            sp2C = temp_v0_2;
            func_8022BA94(temp_v0_2);
            func_8022B460(sp2C, *arg2, *var_s1);
            *arg2 = sp2C;
        }
        M2C_FIELD(temp_s0, u32 *, 0xC) += *var_s1 + 8;
    }
    return sp40;
}
