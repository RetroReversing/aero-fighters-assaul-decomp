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

s32 func_80302074();
s32 func_80302B48();

s32 func_80301E20(s32 arg0, void *arg1) {
    s32 var_v0;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg1, u8 *, 4);
    if (temp_v0 == 0xFF) {
        return 0;
    }
    if ((s32) temp_v0 >= 0x80) {
        func_80302B48();
        func_80302074(arg0);
        return 0;
    }
    var_v0 = 0;
    if (M2C_FIELD(arg1, f32 *, 0) == *(s32 *)(arg0 + (temp_v0 << 5))) {
        var_v0 = 1;
    }
    return var_v0;
}
