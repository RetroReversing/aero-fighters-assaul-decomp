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

s32 func_802160EC();
s32 func_80216464();
s32 func_80216BD8();
s32 func_80231A24();
extern void *D_8024E710;
extern char D_80252F20[];
extern s32 D_8025C394;

s32 func_80212E24(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 sp76;
    u16 sp74;
    f32 sp70;
    f32 sp6C;
    s32 sp68;
    u16 var_v1;
    u32 var_s2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s3;
    void *temp_v0;

    temp_s0 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 4) + (arg0 * 4));
    if (temp_s0 == NULL) {
        func_80231A24(arg1, arg2, D_80252F20, arg0);
        goto block_15;
    }
    if (func_802160EC(arg1, arg2, temp_s0, arg1, arg2, arg3, &sp70, &sp6C, &sp68, &sp74, &sp76, 0) == 0) {
        goto block_15;
    }
    temp_s3 = M2C_FIELD(temp_s0, s32 *, 0x28) + (sp74 * 0x4C);
    temp_v0 = M2C_FIELD(temp_s3, void **, 0x40);
    if (temp_v0 == NULL) {
        goto block_15;
    }
    var_v1 = M2C_FIELD(temp_v0, u16 *, 0x14);
    var_s2 = 0;
    if (var_v1 != 0) {
loop_7:
        temp_s0_2 = M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x40), s32 *, 0x10) + (var_s2 << 5);
        if (sp76 & M2C_FIELD(temp_s0_2, u16 *, 0x18)) {
            temp_s1 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x1C) + (M2C_FIELD(temp_s0_2, u16 *, 0) * 4));
            if (func_80216464(sp70, sp6C, sp68, M2C_FIELD(temp_s0_2, s32 *, 0xC), M2C_FIELD(temp_s0_2, f32 *, 0x10), M2C_FIELD(temp_s0_2, f32 *, 0x14), M2C_FIELD(temp_s1, f32 *, 0x1C)) != 0) {
                D_8025C394 = (M2C_FIELD(temp_s3, u16 *, 0x4A) << 0xC) | var_s2;
                if (M2C_FIELD(temp_s1, u8 *, 0x11) & 2) {
                    if (func_80216BD8(sp70, sp6C, sp68, temp_s0_2, M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x40), f32 *, 0x2C)) >= 0) {
                        return D_8025C394;
                    }
                    goto block_13;
                }
                return D_8025C394;
            }
block_13:
            var_v1 = M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x40), u16 *, 0x14);
            goto block_14;
        }
block_14:
        var_s2 += 1;
        if (var_s2 >= var_v1) {
            goto block_15;
        }
        goto loop_7;
    }
block_15:
    return -1;
}
