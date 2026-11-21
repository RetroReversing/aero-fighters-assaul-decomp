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
extern char D_80253528[];
extern char D_8025354C[];

void func_8021D228(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_s0;
    f32 *temp_t4;
    f32 temp_fv0;
    f32 var_fv1;
    s32 temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_s0_13;
    s32 temp_s0_14;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    u32 temp_a1;
    void *temp_s1;

    temp_s1 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x14) + (arg0 * 4));
    var_s0 = &arg1;
    if (temp_s1 == NULL) {
        func_80231A24(D_80253528, arg0);
        return;
    }
loop_3:
    temp_s0 = (s32) (var_s0 + 3) & ~3;
    temp_a1 = *(u32 *)temp_s0;
    var_s0 = temp_s0 + 4;
    switch (temp_a1) {
    case 3:
        temp_fv0 = M2C_FIELD(temp_s1, f32 *, 0x18);
        temp_s0_2 = (s32) (var_s0 + 3) & ~3;
        if (temp_fv0 != 0.0f) {
            var_fv1 = M2C_FIELD(temp_s1, f32 *, 0x14) / temp_fv0;
        } else {
            var_fv1 = 0.0f;
        }
        temp_t4 = *(s32 *)temp_s0_2;
        var_s0 = temp_s0_2 + 4;
        *temp_t4 = var_fv1;
        goto loop_3;
    case 4:
        temp_s0_3 = (s32) (var_s0 + 3) & ~3;
        temp_s0_4 = (temp_s0_3 + 7) & ~3;
        *(s32 *)*(s32 *)temp_s0_3 = M2C_FIELD(temp_s1, u8 *, 8);
        temp_s0_5 = (temp_s0_4 + 7) & ~3;
        *(s32 *)*(s32 *)temp_s0_4 = M2C_FIELD(temp_s1, u8 *, 9);
        temp_s0_6 = (temp_s0_5 + 7) & ~3;
        *(s32 *)*(s32 *)temp_s0_5 = M2C_FIELD(temp_s1, u8 *, 0xA);
        var_s0 = temp_s0_6 + 4;
        *(s32 *)*(s32 *)temp_s0_6 = M2C_FIELD(temp_s1, u8 *, 0xB);
        goto loop_3;
    case 1:
        temp_s0_7 = (s32) (var_s0 + 3) & ~3;
        temp_s0_8 = (temp_s0_7 + 7) & ~3;
        *(s32 *)*(s32 *)temp_s0_7 = M2C_FIELD(temp_s1, u8 *, 4);
        temp_s0_9 = (temp_s0_8 + 7) & ~3;
        *(s32 *)*(s32 *)temp_s0_8 = M2C_FIELD(temp_s1, u8 *, 5);
        temp_s0_10 = (temp_s0_9 + 7) & ~3;
        *(s32 *)*(s32 *)temp_s0_9 = M2C_FIELD(temp_s1, u8 *, 6);
        var_s0 = temp_s0_10 + 4;
        *(s32 *)*(s32 *)temp_s0_10 = M2C_FIELD(temp_s1, u8 *, 7);
        goto loop_3;
    case 2:
        temp_s0_11 = (s32) (var_s0 + 3) & ~3;
        temp_s0_12 = (temp_s0_11 + 7) & ~3;
        *(s32 *)*(s32 *)temp_s0_11 = M2C_FIELD(temp_s1, u8 *, 0);
        temp_s0_13 = (temp_s0_12 + 7) & ~3;
        *(s32 *)*(s32 *)temp_s0_12 = M2C_FIELD(temp_s1, u8 *, 0);
        temp_s0_14 = (temp_s0_13 + 7) & ~3;
        *(s32 *)*(s32 *)temp_s0_13 = M2C_FIELD(temp_s1, u8 *, 0);
        var_s0 = temp_s0_14 + 4;
        *(s32 *)*(s32 *)temp_s0_14 = M2C_FIELD(temp_s1, u8 *, 0);
        goto loop_3;
    default:
        func_80231A24(D_8025354C, temp_a1);
        goto loop_3;
    }
}
