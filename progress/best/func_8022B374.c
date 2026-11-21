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

s32 func_80231A24();
extern char D_80253FD4[];
extern s32 D_80275E70;
extern char D_80275E80[];
extern s32 D_80275F88;

s32 func_8022B374(u32 *arg0) {
    s32 var_s0;
    s32 var_s6;
    u32 temp_t0;
    u32 temp_v1;
    void *temp_v0;

    var_s6 = 1;
    var_s0 = 0;
    if (D_80275E70 > 0) {
        do {
            temp_v0 = D_80275E80 + (var_s0 * 8);
            if (((temp_v1 = *arg0) >= (u32) M2C_FIELD(temp_v0, u32 *, 0)) && (temp_v1 < (u32) M2C_FIELD(temp_v0, u32 *, 4))) {
                temp_t0 = M2C_FIELD(temp_v0, u32 *, 4);
                var_s0 = 0;
                var_s6 = 0;
                *arg0 = temp_t0;
                if (D_80275F88 != 0) {
                    func_80231A24(D_80253FD4, temp_t0);
                }
            }
            var_s0 += 1;
        } while (var_s0 < D_80275E70);
    }
    return var_s6;
}
