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

M2C_UNK func_802000DC(s32);                         /* extern */

void func_802000A0(void) {
    s32 temp_t6;
    s32 var_s0;

    var_s0 = 0;
    do {
        func_802000DC(var_s0 & 0xFFFF);
        temp_t6 = (var_s0 + 1) & 0xFFFF;
        var_s0 = temp_t6;
    } while (temp_t6 <= 0);
}
