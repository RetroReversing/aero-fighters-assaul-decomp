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

s32 func_802011D0();
s32 func_80231C58();
extern char D_80251C90[];
extern char D_80251CA8[];
extern s32 D_80256DE4;
extern u16 D_80280BFA;

u8 func_80201388(void) {
    u8 sp27;
    s32 sp18;
    s32 temp_lo;
    s32 temp_t1;
    u8 var_v1;

    func_802011D0(D_80251C90);
    var_v1 = 0;
    if ((s32) D_80280BFA > 0) {
loop_2:
        temp_lo = var_v1 * 0xB4;
        if (M2C_FIELD((D_80256DE4 + temp_lo), u8 *, 0xAC) == 0) {
            sp27 = var_v1;
            sp18 = temp_lo;
            func_802011D0(D_80251CA8, var_v1, temp_lo);
            M2C_FIELD((D_80256DE4 + temp_lo), s8 *, 0xAC) = 1;
            return sp27;
        }
        temp_t1 = (var_v1 + 1) & 0xFF;
        var_v1 = (u8) temp_t1;
        if (temp_t1 >= (s32) D_80280BFA) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    func_80231C58((s32) var_v1, "AUD_NEMITTERS", &D_80280BFA);
    return 0xFFU;
}
