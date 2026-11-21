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

extern unsigned short D_80280BF4;
extern unsigned short D_80280BD6;
s32 func_8022B780();
s32 func_8022BA58();
extern char D_80280BC0[];
extern s32 D_80283940;
extern s32 D_80283944;
extern s32 D_80283948;
extern s32 D_8028394C;
extern s8 D_80283954;

void func_80233224(void) {
    unsigned short *__base_D_80280BD6;
    s32 sp24;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v0;
    
    void *temp_v0_2;

    temp_v0 = func_8022BA58(D_80280BF4 * 0x1C);
    D_80283940 = temp_v0;
    do { func_8022B780(temp_v0, 0, D_80280BF4 * 0x1C, &D_80283940); } while (0);
    temp_v0 = 0;
    if ((s32) D_80280BF4 > 0) {
        var_a0 = 0;
        do {
            temp_v0 += 1;
            temp_v0_2 = var_a0 + D_80283940;
            M2C_FIELD(temp_v0_2, s8 *, 0x1A) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 0x1B) = 0;
            M2C_FIELD(temp_v0_2, f32 *, 0x14) = 0.0f;
            M2C_FIELD(temp_v0_2, f32 *, 0x10) = 0.0f;
            M2C_FIELD(temp_v0_2, f32 *, 0xC) = 0.0f;
            M2C_FIELD(temp_v0_2, f32 *, 8) = 0.0f;
            M2C_FIELD(temp_v0_2, f32 *, 4) = 0.0f;
            M2C_FIELD(temp_v0_2, f32 *, 0) = 0.0f;
            M2C_FIELD(temp_v0_2, s8 *, 0x18) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 0x19) = 0;
            var_a0 += 0x1C;
        } while (temp_v0 < (s32) D_80280BF4);
        temp_v0 = 0;
    }
    if (D_80283944 == 0) {
        sp24 = 0;
        __base_D_80280BD6 = &D_80280BD6;
        D_80283944 = func_8022BA58((*__base_D_80280BD6) * 2, &D_80283944);
        temp_v0 = 0;
    }
    if (D_8028394C == 0) {
        sp24 = temp_v0;
        D_8028394C = func_8022BA58((*__base_D_80280BD6) * 8, &D_80283944);
    }
    var_v0 = 0;
    if ((s32) (*__base_D_80280BD6) > 0) {
        do {
            temp_v0 += 1;
            *(s16 *)(D_80283944 + var_v0) = 0xFF;
            var_v0 += 2;
        } while (temp_v0 < (s32) (*__base_D_80280BD6));
    }
    D_80283948 = 0;
    D_80283954 = 1;
}
