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
extern char D_80253F70[];
extern char D_80253FA4[];
extern s32 D_80275E70;
extern char D_80275E80[];

void func_8022B1F4(void) {
    s32 temp_v0;
    u32 var_a2;
    u32 var_s3;
    void *temp_s0;
    void *temp_s1;

    temp_v0 = D_80275E70;
    var_s3 = 0;
    if (temp_v0 > 0) {
        do {
            var_a2 = 0;
            if (temp_v0 > 0) {
loop_3:
                if ((var_s3 != var_a2) && (temp_s1 = D_80275E80 + (var_s3 * 8), temp_s0 = D_80275E80 + (var_a2 * 8), (((u32) M2C_FIELD(temp_s0, u32 *, 0) < (u32) M2C_FIELD(temp_s1, u32 *, 4)) != 0)) && ((u32) M2C_FIELD(temp_s1, u32 *, 0) < (u32) M2C_FIELD(temp_s0, u32 *, 4))) {
                    func_80231A24(D_80253F70, var_s3, var_a2);
                    func_80231A24(D_80253FA4, M2C_FIELD(temp_s1, u32 *, 0), M2C_FIELD(temp_s1, u32 *, 4), M2C_FIELD(temp_s0, u32 *, 0), M2C_FIELD(temp_s0, u32 *, 4));
                } else {
                    var_a2 += 1;
                    if ((s32) var_a2 < temp_v0) {
                        goto loop_3;
                    }
                }
            }
            var_s3 += 1;
        } while ((s32) var_s3 < temp_v0);
    }
}
