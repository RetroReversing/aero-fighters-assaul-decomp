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

void *func_8022FB4C();
s32 func_80231A24();
extern char D_80254AFC[];
extern char D_80254B28[];

void func_8022FBDC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_v1;
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    void *temp_v0;

    temp_v0 = func_8022FB4C();
    var_v1 = &arg1;
    if (temp_v0 == NULL) {
        func_80231A24(D_80254AFC, arg0);
        return;
    }
loop_3:
    temp_v1 = (s32) ((s8 *) var_v1 + 3) & ~3;
    temp_a1 = *(s32 *)temp_v1;
    temp_v1_2 = temp_v1 + 4;
    switch (temp_a1) {                              /* irregular */
    case 0:
        break;
    case 1:
        temp_v1_3 = (temp_v1_2 + 3) & ~3;
        var_v1 = temp_v1_3 + 4;
        M2C_FIELD(temp_v0, s32 *, 0x1C) = (s32) *(s32 *)temp_v1_3;
        goto loop_3;
    case 2:
        temp_v1_4 = (temp_v1_2 + 3) & ~3;
        M2C_FIELD(temp_v0, s32 *, 0x1C) &= ~(1 << *(s32 *)temp_v1_4);
        var_v1 = temp_v1_4 + 4;
        goto loop_3;
    case 3:
        temp_v1_5 = (temp_v1_2 + 3) & ~3;
        M2C_FIELD(temp_v0, s32 *, 0x1C) |= (1 << *(s32 *)temp_v1_5);
        var_v1 = temp_v1_5 + 4;
        goto loop_3;
    default:
        func_80231A24(D_80254B28, (*(s32 *)temp_v1), 1, 2);
        break;
    }
}
