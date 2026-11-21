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

s32 func_8020153C();
s32 func_8020178C();
s32 func_80201A18();
s32 func_80201C00();
s32 func_80201CE0();
s32 func_80201F14();
s32 func_80231A24();
s32 func_80301C74();
s32 func_80301E20();
s32 func_80302D78();
extern char D_8032A284[];
extern char D_8032A2B0[];
extern char D_8032A2D4[];
extern u8 D_8032AA80;
extern f64 D_80345808;

s32 func_803021B8(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
char *__repair_addr;

    u8 temp_s0;
    u8 temp_s0_2;
    u8 temp_s0_3;
    u8 temp_s0_4;
    u8 temp_s0_5;
    void *temp_v0;

    if (arg1 == NULL) {
        func_80231A24(D_8032A284);
        return 0;
    }
    if (func_80301E20(arg0, arg1) == 0) {
        if (func_80301C74(arg0, arg1, arg2, arg3, arg4) == 0) {
            func_80231A24(D_8032A2B0);
            return 0;
        }
    } else {
__repair_addr = (char *)((arg0 + (M2C_FIELD(arg1, u8 *, 4) << 5)));

        if (M2C_FIELD(__repair_addr, u8 *, 0x1F) == 0) {
            return 0;
        }
        if (func_80302D78(arg0) != 0) {
            return 0;
        }
    }
    if (arg2 >= 0xFF) {
        func_80231A24(D_8032A2D4, arg2);
        return 0;
    }
    if (D_8032AA80 == 0xC) {
        temp_v0 = arg0 + (M2C_FIELD(arg1, u8 *, 4) << 5);
        M2C_FIELD(temp_v0, s32 *, 0x14) &= ~8;
    }
    temp_s0 = M2C_FIELD(arg1, u8 *, 4);
    func_8020153C(temp_s0, M2C_FIELD((arg0 + (temp_s0 << 5)), u8 *, 0x1D));
    temp_s0_2 = M2C_FIELD(arg1, u8 *, 4);
    func_80201CE0(temp_s0_2, 5, M2C_FIELD((arg0 + (temp_s0_2 << 5)), s32 *, 0x14), 2, D_80345808, 1, -10.0, 0);
    temp_s0_3 = M2C_FIELD(arg1, u8 *, 4);
    func_8020178C(temp_s0_3, M2C_FIELD((arg0 + (temp_s0_3 << 5)), s32 *, 0x10));
    temp_s0_4 = M2C_FIELD(arg1, u8 *, 4);
    func_80201A18(temp_s0_4, M2C_FIELD((arg0 + (temp_s0_4 << 5)), s32 *, 0xC));
    temp_s0_5 = M2C_FIELD(arg1, u8 *, 4);
    func_80201C00(temp_s0_5, M2C_FIELD((arg0 + (temp_s0_5 << 5)), s32 *, 0x18));
    func_80201F14(M2C_FIELD(arg1, u8 *, 4));
    return 1;
}
