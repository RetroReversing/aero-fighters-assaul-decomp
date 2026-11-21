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
extern char D_80252C5C[];
extern s32 D_8025C398;
extern s32 D_8025C39C;
extern s32 D_8025C3A0;
extern s32 D_8025C3A4;
extern u16 D_80280BD8;

void func_80209508(void) {
    f32 temp_fa0;
    f32 temp_ft0;
    s32 *temp_t1;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t8;
    s32 var_a1;
    s32 var_s2;
    s32 var_t5;
    s32 var_v0;
    void *temp_a0;

    var_v0 = D_8025C398;
    if (var_v0 >= (s32) D_80280BD8) {
        func_80231A24(D_80252C5C);
        return;
    }
    var_s2 = 0;
    if (var_v0 > 0) {
        do {
            var_t5 = var_s2;
            if (var_s2 < var_v0) {
                var_a1 = var_t5 * 4;
                temp_t4 = var_s2 * 4;
                do {
                    temp_fa0 = *(f32 *)(D_8025C3A0 + temp_t4);
                    if (*(s32 *)(D_8025C3A0 + var_a1) < temp_fa0) {
                        temp_lo = var_s2 * 0xC;
                        temp_t1 = D_8025C39C + temp_t4;
                        temp_t3 = *temp_t1;
                        temp_a0 = D_8025C3A4 + temp_lo;
                        *temp_t1 = *(s32 *)(D_8025C39C + var_a1);
                        temp_lo_2 = var_t5 * 0xC;
                        *(s32 *)(D_8025C3A0 + temp_t4) = *(s32 *)(D_8025C3A0 + var_a1);
                        *(s32 *)(D_8025C3A4 + temp_lo) = *(s32 *)(D_8025C3A4 + temp_lo_2);
                        M2C_FIELD((D_8025C3A4 + temp_lo), f32 *, 4) = (f32) M2C_FIELD((D_8025C3A4 + temp_lo_2), f32 *, 4);
                        M2C_FIELD((D_8025C3A4 + temp_lo), f32 *, 8) = (f32) M2C_FIELD((D_8025C3A4 + temp_lo_2), f32 *, 8);
                        *(s32 *)(D_8025C39C + var_a1) = temp_t3;
                        *(f32 *)(D_8025C3A0 + var_a1) = temp_fa0;
                        *(s32 *)(D_8025C3A4 + temp_lo_2) = M2C_FIELD(temp_a0, f32 *, 0);
                        M2C_FIELD((D_8025C3A4 + temp_lo_2), f32 *, 4) = (f32) M2C_FIELD(temp_a0, f32 *, 4);
                        M2C_FIELD((D_8025C3A4 + temp_lo_2), f32 *, 8) = (f32) M2C_FIELD(temp_a0, f32 *, 8);
                        var_v0 = D_8025C398;
                    }
                    var_t5 += 1;
                    var_a1 += 4;
                } while (var_t5 < var_v0);
            }
            var_s2 += 1;
        } while (var_s2 < var_v0);
    }
    if (var_v0 != 0) {
loop_12:
        temp_ft0 = M2C_FIELD((D_8025C3A0 + (var_v0 * 4)), f32 *, -4);
        temp_t8 = var_v0 - 1;
        var_v0 = temp_t8;
        if (temp_ft0 == 2.0f) {
            D_8025C398 = temp_t8;
            if (temp_t8 != 0) {
                goto loop_12;
            }
        }
    }
}
