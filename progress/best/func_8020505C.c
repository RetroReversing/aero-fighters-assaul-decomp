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

s32 alLink();
s32 alUnlink();
s32 func_80231C9C();
s32 osPiStartDma();
s32 osVirtualToPhysical();
extern s32 D_8024E5A0;
extern char D_8025B8B0[];
extern s32 D_8025B8C0;
extern s32 D_8025B8D0;
extern char D_8025B8D8[];

s32 func_8020505C(u32 arg0, s32 arg1, s32 arg2) {
    s32 sp30;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_t3;
    s32 temp_v0_3;
    u32 temp_v0;
    void *temp_s0;
    void *temp_v0_2;
    void *var_s0;
    void *var_s1;

    var_s0 = M2C_FIELD(D_8025B8B0, void **, 4);
    var_s1 = NULL;
    if (var_s0 != NULL) {
loop_1:
        temp_v0 = M2C_FIELD(var_s0, u32 *, 8);
        if (arg0 >= temp_v0) {
            var_s1 = var_s0;
            if ((temp_v0 + 0x800) >= (arg0 + arg1)) {
                M2C_FIELD(var_s0, s32 *, 0xC) = (s32) D_8025B8C0;
                return osVirtualToPhysical((M2C_FIELD(var_s0, s32 *, 0x10) + arg0) - temp_v0, arg0);
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0);
            if (var_s0 == NULL) {
                goto block_5;
            }
            goto loop_1;
        }
        goto block_5;
    }
block_5:
    temp_s0 = M2C_FIELD(D_8025B8B0, void **, 8);
    if (temp_s0 == NULL) {
        func_80231C9C("dmaPtr", "_audiomgr.c", 0x21A, arg0);
    }
    M2C_FIELD(D_8025B8B0, void **, 8) = (void *) M2C_FIELD(temp_s0, void **, 0);
    alUnlink(temp_s0);
    if (var_s1 != NULL) {
        alLink(temp_s0, var_s1);
    } else {
        temp_v0_2 = M2C_FIELD(D_8025B8B0, void **, 4);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(D_8025B8B0, void **, 4) = temp_s0;
            M2C_FIELD(temp_s0, void **, 0) = temp_v0_2;
            M2C_FIELD(temp_s0, s32 *, 4) = 0;
            M2C_FIELD(temp_v0_2, void **, 4) = temp_s0;
        } else {
            M2C_FIELD(D_8025B8B0, void **, 4) = temp_s0;
            M2C_FIELD(temp_s0, void **, 0) = NULL;
            M2C_FIELD(temp_s0, s32 *, 4) = 0;
        }
    }
    temp_v0_3 = arg0 & 1;
    temp_s1 = M2C_FIELD(temp_s0, s32 *, 0x10);
    sp30 = temp_v0_3;
    temp_a3 = arg0 - temp_v0_3;
    M2C_FIELD(temp_s0, s32 *, 8) = temp_a3;
    M2C_FIELD(temp_s0, s32 *, 0xC) = (s32) D_8025B8C0;
    temp_t3 = D_8024E5A0 * 0x18;
    D_8024E5A0 += 1;
    osPiStartDma(temp_t3 + D_8025B8D0, 1, 0, temp_a3, temp_s1, 0x800, D_8025B8D8);
    return osVirtualToPhysical(temp_s1) + sp30;
}
