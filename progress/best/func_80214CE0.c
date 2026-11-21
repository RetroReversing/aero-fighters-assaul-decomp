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

s32 func_80216464(f32, f32, s32, s32, f32, f32, f32);
s32 func_80216EFC(f32, f32, s32, void *);
extern void *D_8024E710;
extern s32 D_8025C394;
extern s32 D_8025C3E0;
extern s32 D_8025C3E4;
extern u16 D_80280BE6;

s32 func_80214CE0(f32 arg0, f32 arg1, f32 arg2) {
    s32 temp_t0;
    s32 var_s1;
    u16 temp_v1;
    void *temp_s0;
    void *temp_s2;
    void *temp_v0;

    var_s1 = 0;
    if ((s32) D_80280BE6 > 0) {
        for (;;) {
            temp_s0 = (var_s1 * 0x24) + D_8025C3E0;
            temp_v1 = M2C_FIELD(temp_s0, u16 *, 0);
            if ((temp_v1 != 0xFFFF) && (M2C_FIELD(temp_s0, u8 *, 8) & 1)) {
void *__repair_cached_pointer = D_8024E710;

                temp_v0 = (*M2C_FIELD(temp_s0, u16 **, 4) << 6) + D_8025C3E4;
                temp_s2 = *(s32 *)(M2C_FIELD(__repair_cached_pointer, s32 *, 0x1C) + (temp_v1 * 4));
                if (func_80216464(arg0, arg1, arg2, M2C_FIELD(temp_v0, s32 *, 0x30), M2C_FIELD(temp_v0, f32 *, 0x34), M2C_FIELD(temp_v0, f32 *, 0x38), M2C_FIELD(temp_s0, f32 *, 0xC)) != 0) {
                    if (!(M2C_FIELD(temp_s2, u8 *, 0x11) & 2)) {
                        return var_s1;
                    }
                    D_8025C394 = var_s1;
                    if (func_80216EFC(arg0, arg1, arg2, temp_s0) >= 0) {
                        return D_8025C394;
                    }
                    goto block_9;
                }
block_9:
                goto block_10;
            }
block_10:
            temp_t0 = (var_s1 + 1) & 0xFFFF;
            var_s1 = temp_t0;
            if (temp_t0 >= (s32) D_80280BE6) {
                goto block_11;
            }
            continue;
            break;
        }
    }
block_11:
    return 0xFFFF;
}
