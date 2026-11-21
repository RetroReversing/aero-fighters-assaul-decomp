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

extern char D_80100002[];

void func_80309CC8(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_t2;
    char *var_t0;
    s16 temp_t1;

    temp_t1 = (arg0 << 0xB) | ((arg1 & 0xFF) << 6) | ((arg2 & 0xFF) * 2);
    var_t0 = (s16 *)0x800DA800;
    var_t2 = D_80100002;
    do {
        *(s16 *)var_t0 = temp_t1;
        M2C_FIELD(var_t2, s16 *, -2) = temp_t1;
        var_t0 += 2;
    } while ((u32) var_t2 < 0x80125800U);
}
