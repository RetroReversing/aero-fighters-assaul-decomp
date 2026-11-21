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

extern void *D_8024E710;

s32 func_80208E78(s32 arg0, s32 arg1, s8 arg2, s32 arg3) {
    s16 *temp_t1;
    s16 *temp_t1_2;
    s16 *temp_t6;
    s16 *temp_t6_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 var_v0;
    s8 *var_v0_2;
    u8 *temp_t1_3;
    u8 *temp_t1_4;
    u8 *temp_t6_3;
    u8 *temp_t6_4;
    void *var_v1;

    var_v0_2 = &arg2;
    if (arg0 & 0x80000000) {
        var_v1 = *(s32 *)*(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x24) + (((u32) (arg0 & 0x7FFF0000) >> 0x10) * 4)) + ((arg0 & 0xFFFF) * 0x10);
    } else {
        var_v1 = *(s32 *)*(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x1C) + (((u32) (arg0 & 0x7FFF0000) >> 0x10) * 4)) + ((arg0 & 0xFFFF) * 0x10);
    }
    if (arg1 & 1) {
        temp_v0 = (s32) &arg2 & ~3;
        var_v0_2 = temp_v0 + 4;
        *(s32 *)*(s32 *)temp_v0 = M2C_FIELD(var_v1, s16 *, 0);
    }
    if (arg1 & 2) {
        temp_v0_2 = (s32) (var_v0_2 + 3) & ~3;
        temp_t6 = *(s32 *)temp_v0_2;
        var_v0_2 = temp_v0_2 + 4;
        *temp_t6 = M2C_FIELD(var_v1, s16 *, 2);
    }
    if (arg1 & 4) {
        temp_v0_3 = (s32) (var_v0_2 + 3) & ~3;
        temp_t1 = *(s32 *)temp_v0_3;
        var_v0_2 = temp_v0_3 + 4;
        *temp_t1 = M2C_FIELD(var_v1, s16 *, 4);
    }
    if (arg1 & 8) {
        temp_v0_4 = (s32) (var_v0_2 + 3) & ~3;
        temp_t6_2 = *(s32 *)temp_v0_4;
        var_v0_2 = temp_v0_4 + 4;
        *temp_t6_2 = M2C_FIELD(var_v1, s16 *, 8);
    }
    if (arg1 & 0x10) {
        temp_v0_5 = (s32) (var_v0_2 + 3) & ~3;
        temp_t1_2 = *(s32 *)temp_v0_5;
        var_v0_2 = temp_v0_5 + 4;
        *temp_t1_2 = M2C_FIELD(var_v1, s16 *, 0xA);
    }
    if (arg1 & 0x20) {
        temp_v0_6 = (s32) (var_v0_2 + 3) & ~3;
        temp_t6_3 = *(s32 *)temp_v0_6;
        var_v0_2 = temp_v0_6 + 4;
        *temp_t6_3 = M2C_FIELD(var_v1, u8 *, 0xC);
    }
    if (arg1 & 0x40) {
        temp_v0_7 = (s32) (var_v0_2 + 3) & ~3;
        temp_t1_3 = *(s32 *)temp_v0_7;
        var_v0_2 = temp_v0_7 + 4;
        *temp_t1_3 = M2C_FIELD(var_v1, u8 *, 0xD);
    }
    if (arg1 & 0x80) {
        temp_v0_8 = (s32) (var_v0_2 + 3) & ~3;
        temp_t6_4 = *(s32 *)temp_v0_8;
        var_v0_2 = temp_v0_8 + 4;
        *temp_t6_4 = M2C_FIELD(var_v1, u8 *, 0xE);
    }
    var_v0 = (s32) (var_v0_2 + 3) & ~3;
    if (arg1 & 0x100) {
        temp_t1_4 = *(s32 *)var_v0;
        var_v0 += 4;
        *temp_t1_4 = M2C_FIELD(var_v1, u8 *, 0xF);
    }
    return var_v0;
}
