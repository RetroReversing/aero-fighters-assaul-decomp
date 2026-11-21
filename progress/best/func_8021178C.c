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
extern char D_80252D1C[];
extern char D_80252D50[];

void func_8021178C(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_s0;
    f32 *temp_t0;
    f32 *temp_t9;
    s32 *temp_t2;
    s32 *temp_t4;
    s32 *temp_t6;
    s32 *temp_t7;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s8 *temp_t3;
    s8 var_v0;
    u32 temp_a1;
    void *temp_s2;

    if (arg0 != 0xFFFF) {
        var_s0 = &arg1;
        temp_s2 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x1C) + (arg0 * 4));
        if (temp_s2 == NULL) {
            func_80231A24(D_80252D1C, arg0);
            return;
        }
loop_4:
        temp_s0 = (s32) (var_s0 + 3) & ~3;
        temp_a1 = *(u32 *)temp_s0;
        var_s0 = temp_s0 + 4;
        switch (temp_a1) {
        case 2:
            temp_s0_2 = (s32) (var_s0 + 3) & ~3;
            temp_t6 = *(s32 *)temp_s0_2;
            var_s0 = temp_s0_2 + 4;
            *temp_t6 = (s32) M2C_FIELD(temp_s2, u8 *, 0x10);
            goto loop_4;
        case 5:
            var_v0 = 0;
            temp_s0_3 = (s32) (var_s0 + 3) & ~3;
            if (*(s32 *)*M2C_FIELD(M2C_FIELD(temp_s2, void **, 8), s32 ***, 0) & 0x02000000) {
                var_v0 = 1;
            }
            temp_t3 = *(s32 *)temp_s0_3;
            var_s0 = temp_s0_3 + 4;
            *temp_t3 = var_v0;
            goto loop_4;
        case 4:
            temp_s0_4 = (s32) (var_s0 + 3) & ~3;
            temp_t7 = *(s32 *)temp_s0_4;
            var_s0 = temp_s0_4 + 4;
            *temp_t7 = (s32) M2C_FIELD(M2C_FIELD(temp_s2, void **, 8), u8 *, 4);
            goto loop_4;
        case 1:
            temp_s0_5 = (s32) (var_s0 + 3) & ~3;
            temp_t0 = *(s32 *)temp_s0_5;
            var_s0 = temp_s0_5 + 4;
            *temp_t0 = M2C_FIELD(temp_s2, f32 *, 0x1C);
            goto loop_4;
        case 9:
            temp_s0_6 = (s32) (var_s0 + 3) & ~3;
            temp_t9 = *(s32 *)temp_s0_6;
            var_s0 = temp_s0_6 + 4;
            *temp_t9 = M2C_FIELD(temp_s2, f32 *, 0x20);
            goto loop_4;
        case 8:
            temp_s0_7 = (s32) (var_s0 + 3) & ~3;
            temp_t4 = *(s32 *)temp_s0_7;
            var_s0 = temp_s0_7 + 4;
            *temp_t4 = (s32) M2C_FIELD(temp_s2, u8 *, 0x11);
            goto loop_4;
        case 7:
            temp_s0_8 = (s32) (var_s0 + 3) & ~3;
            temp_lo = *(s32 *)temp_s0_8 * 0x24;
            temp_s0_9 = (temp_s0_8 + 7) & ~3;
            temp_t2 = *(s32 *)temp_s0_9;
            var_s0 = temp_s0_9 + 4;
            *temp_t2 = (s32) M2C_FIELD((M2C_FIELD(M2C_FIELD(temp_s2, void **, 8), s32 ***, 0) + temp_lo), u8 *, 6);
            goto loop_4;
        default:
            func_80231A24(D_80252D50, temp_a1);
            goto loop_4;
        }
    }
}
