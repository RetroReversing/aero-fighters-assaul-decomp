/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_802011D0();
s32 func_80231C58();
extern char D_80251C90[];
extern char D_80251CA8[];
extern s32 D_80256DE4;
extern u16 D_80280BFA;

extern char D_80251CC0[];
u8 func_80201388(void) {
u16 *__base_D_80280BFA;

    char *__repair_addr;
    u8 sp27;
    s32 sp18;
    s32 temp_lo;
    s32 temp_t1;
    u8 var_v1;

    func_802011D0(D_80251C90);
    var_v1 = 0;
    __base_D_80280BFA = &D_80280BFA;
    if ((s32) (*__base_D_80280BFA) > 0) {
loop_2:
        temp_lo = var_v1 * 0xB4;
        if ((*(u8 *)((char *)((D_80256DE4 + temp_lo)) + 0xAC)) == 0) {
            sp27 = var_v1;
            sp18 = temp_lo;
            func_802011D0(D_80251CA8, var_v1, temp_lo);
            (*(s8 *)((char *)((__repair_addr = (char *)((D_80256DE4 + temp_lo)))) + 0xAC)) = 1;
            return sp27;
        }
        var_v1 = (u8) temp_t1;
        temp_t1 = (var_v1 + 1) & 0xFF;
        if (temp_t1 >= (s32) (*__base_D_80280BFA)) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    func_80231C58(var_v1, D_80251CC0, __base_D_80280BFA);
    return 0xFFU;
}
