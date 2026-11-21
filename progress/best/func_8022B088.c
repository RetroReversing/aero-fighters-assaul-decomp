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

s32 func_80204530();
extern u32 D_80275F84;
extern char D_80349530[];
extern s32 func_802000A0;

void func_8022B088(void) {
    u32 *__base_D_80275F84;
    s32 *var_v1_6;
    u32 var_a1;
    u32 var_v1;
    u32 var_v1_2;
    u32 var_v1_3;
    u32 var_v1_4;
    u32 var_v1_5;
    void *temp_v0;

    __base_D_80275F84 = &D_80275F84;
    if ((u32) (*__base_D_80275F84) < 0x800DA801U) {
        var_v1 = (*__base_D_80275F84);
        if ((u32) (*__base_D_80275F84) < 0x800DA800U) {
            do {
                var_v1 += 4;
                M2C_FIELD(var_v1, s32 *, -4) = 0;
            } while (var_v1 < 0x800DA800U);
        }
    } else {
        var_v1_2 = func_80204530() + 0x80000400;
        if (var_v1_2 < 0x800DA800U) {
            do {
                var_v1_2 += 4;
                M2C_FIELD(var_v1_2, s32 *, -4) = 0;
            } while (var_v1_2 < 0x800DA800U);
        }
    }
    var_a1 = (*__base_D_80275F84);
    if ((var_a1 >= 0x80125801U) && (var_a1 < (u32) &func_802000A0)) {
        var_v1_3 = var_a1;
        if (var_a1 < (u32) &func_802000A0) {
            do {
                var_v1_3 += 4;
                M2C_FIELD(var_v1_3, s32 *, -4) = 0;
            } while (var_v1_3 < (u32) &func_802000A0);
            goto block_16;
        }
    } else {
        if (&func_802000A0 != NULL) {
            var_v1_4 = 0x80125800;
            do {
                var_v1_4 += 4;
                M2C_FIELD(var_v1_4, s32 *, -4) = 0;
            } while (var_v1_4 < (u32) &func_802000A0);
block_16:
            var_a1 = (*__base_D_80275F84);
        }
    }
    temp_v0 = D_80349530 + 1;
    if (var_a1 >= (u32) temp_v0) {
        var_v1_5 = var_a1;
        if (var_a1 < 0x803DA800U) {
            do {
                var_v1_5 += 4;
                M2C_FIELD(var_v1_5, s32 *, -4) = 0;
            } while (var_v1_5 < 0x803DA800U);
        }
    } else {
        var_v1_6 = D_80349530;
        if (temp_v0 != NULL) {
            do {
                var_v1_6 += 1;
                M2C_FIELD(var_v1_6, s32 *, -4) = 0;
            } while ((u32) var_v1_6 < 0x803DA800U);
        }
    }
}
