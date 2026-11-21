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

s32 func_8022B2F4(s32 arg0);
s32 func_80231A24();
extern char D_80254198[];
extern s32 D_80275E74;
extern char D_80275ED0[];

void func_8022BBAC(s32 arg0, s32 arg1) {
    s32 temp_a1;
    void *temp_v1;

    if (arg0 != arg1) {
        temp_a1 = arg1 - arg0;
        if (D_80275E74 >= 0x14) {
            func_80231A24(D_80254198, temp_a1);
            return;
        }
        if (func_8022B2F4(arg0) != 0) {
            temp_v1 = (D_80275E74 * 8) + D_80275ED0;
            M2C_FIELD(temp_v1, s32 *, 0) = arg0;
            M2C_FIELD(temp_v1, s32 *, 4) = arg1;
            D_80275E74 += 1;
        }
    }
}
