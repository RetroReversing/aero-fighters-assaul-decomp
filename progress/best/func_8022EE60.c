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
extern char D_80254A40[];
extern char D_80278750[];

s32 func_8022EE60(s32 arg0, s32 arg1, s32 **arg2) {
    s32 temp_t9;
    s32 var_a0;
    s32 var_a3;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_a1;
    void *temp_a2;
    void *temp_t3;
    void *temp_v1;

    temp_t3 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 4) + (arg0 * 4));
    var_a3 = 0;
    if (temp_t3 == NULL) {
        func_80231A24(D_80254A40, 0);
        return 0;
    }
    *arg2 = D_80278750;
    var_t2 = 0;
    var_a0 = M2C_FIELD(temp_t3, u8 *, 0x18) * M2C_FIELD(temp_t3, u8 *, 0x19);
    if (var_a0 > 0) {
loop_3:
        temp_a2 = M2C_FIELD(temp_t3, s32 *, 0x28) + var_t2;
        var_t2 += 0x4C;
        if (temp_a2 == NULL) {
            var_v0 = var_a0 * 0x13;
            goto block_16;
        }
        temp_v1 = M2C_FIELD(temp_a2, void **, 0x40);
        if (temp_v1 == NULL) {
            var_v0 = var_a0 * 0x13;
            goto block_16;
        }
        var_a1 = M2C_FIELD(temp_v1, u16 *, 0x14);
        var_v0_2 = 0;
        if ((s32) var_a1 > 0) {
loop_8:
            if ((arg1 == 0xFFFE) || (arg1 == *(s32 *)(M2C_FIELD(M2C_FIELD(temp_a2, void **, 0x40), s32 *, 0x10) + (var_v0_2 << 5)))) {
                temp_t9 = var_a3 * 4;
                var_a3 += 1;
                *(D_80278750 + temp_t9) = ((M2C_FIELD(temp_a2, u16 *, 0x4A) & 0xFFF) << 0xC) | (var_v0_2 & 0xFFF);
                if (var_a3 >= 0x80) {
                    return 0x80;
                }
                var_a1 = M2C_FIELD(M2C_FIELD(temp_a2, void **, 0x40), u16 *, 0x14);
                goto block_13;
            }
block_13:
            var_v0_2 += 1;
            if (var_v0_2 >= (s32) var_a1) {
                var_a0 = M2C_FIELD(temp_t3, u8 *, 0x18) * M2C_FIELD(temp_t3, u8 *, 0x19);
                goto block_15;
            }
            goto loop_8;
        }
block_15:
        var_v0 = var_a0 * 0x13;
block_16:
        if (var_t2 >= (var_v0 * 4)) {
            goto block_17;
        }
        goto loop_3;
    }
block_17:
    return var_a3;
}
