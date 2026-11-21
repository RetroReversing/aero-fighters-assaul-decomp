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
s32 func_802A5430();
s32 func_80320CE0();
extern char D_80324E38[];
extern char D_80324E58[];

s32 func_802A2EB0(s32 arg0, u8 *arg1, u8 arg2, u8 *arg3, s32 arg4) {
    s32 sp38;
    u8 sp37;
    u8 sp36;
    s32 *sp2C;
    s32 *temp_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_t0;
    u8 var_s0;

    sp38 = 0;
    sp36 = 0;
    var_s0 = 0;
    if ((s32) *arg1 > 0) {
loop_1:
        temp_a0 = *(s32 *)(arg0 + (var_s0 * 4));
        if ((temp_a0 != 0) && (func_80320CE0(temp_a0) == 0)) {
            sp37 = var_s0;
            sp36 = 1;
        } else {
            temp_t0 = (var_s0 + 1) & 0xFF;
            var_s0 = (u8) temp_t0;
            if (temp_t0 < (s32) *arg1) {
                goto loop_1;
            }
        }
    }
    if (sp36 != 0) {
        sp38 = *(s32 *)(arg0 + (sp37 * 4));
    } else if ((s32) var_s0 >= (s32) arg2) {
        func_80231A24(D_80324E38, arg4, *arg1 + 1, arg2);
        *arg3 += 1;
    } else {
        temp_a1 = arg0 + (var_s0 * 4);
        sp2C = temp_a1;
        func_802A5430(temp_a1, temp_a1);
        temp_a0_2 = *temp_a1;
        sp38 = temp_a0_2;
        if (temp_a0_2 == 0) {
            func_80231A24(D_80324E58, 4, arg4);
        } else {
            *arg1 += 1;
        }
    }
    return sp38;
}
