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

extern int D_80280B8C;
s32 func_80225424();
s32 func_8022B780();
u8 *func_8022B948();
extern char D_80280B68[];

u8 *func_802272B0(s32 arg0) {
    u8 sp3F;
    s32 temp_lo;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_s0;
    u8 *temp_v0;

    temp_v0 = func_8022B948(0x2C, 4);
    func_80225424(temp_v0, &arg0, 0x18);
    func_80225424(temp_v0 + 0x18, &arg0, 1);
    func_80225424(temp_v0 + 0x19, &arg0, 1);
    func_80225424(temp_v0 + 0x1C, &arg0, 4);
    func_80225424(temp_v0 + 0x20, &arg0, 4);
    func_80225424(temp_v0 + 0x24, &arg0, 4);
    temp_lo = M2C_FIELD(temp_v0, u8 *, 0x18) * M2C_FIELD(temp_v0, u8 *, 0x19);
    M2C_FIELD(temp_v0, u8 **, 0x28) = func_8022B948(temp_lo * 0x4C, 4);
    var_s1 = 0;
    if (temp_lo > 0) {
        var_s2 = 0;
        do {
            temp_s0 = &M2C_FIELD(temp_v0, u8 **, 0x28)[var_s2];
            func_80225424(&sp3F, &arg0, 1);
            if (sp3F == 0) {
                func_8022B780(temp_s0, 0, 0x4C);
            } else {
                func_80225424(temp_s0, &arg0, 0x40);
                func_80225424(temp_s0 + 0x48, &arg0, 1);
                M2C_FIELD(temp_s0, s32 *, 0x44) = 0;
                func_80225424(temp_s0 + 0x4A, &arg0, 2);
                M2C_FIELD(temp_s0, s32 *, 0x40) = (s32) *(s32 *)(D_80280B8C + (M2C_FIELD(temp_s0, u16 *, 0x4A) * 4));
            }
            var_s1 += 1;
            var_s2 += 0x4C;
        } while (var_s1 != temp_lo);
    }
    return temp_v0;
}
