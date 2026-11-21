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

s32 func_80201448();
s32 func_80201FB8();
s32 func_80301C20();

void func_80301FF0(s32 arg0) {
    s32 temp_t8;
    s32 var_s0;

    var_s0 = 0;
    do {
        if (*(s32 *)(arg0 + (var_s0 << 5)) >= 0.0f) {
            func_80201FB8(var_s0);
            func_80201448(var_s0);
        }
        func_80301C20(arg0, var_s0);
        temp_t8 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t8;
    } while (temp_t8 < 0xFF);
}
