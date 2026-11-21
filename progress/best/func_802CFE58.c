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

extern char D_80327804[];
extern char D_80327808[];
extern char D_8032780C[];
extern char D_80327810[];
extern char D_80327814[];
extern s32 D_80327818;
extern s32 D_8032AA74;

void func_802CFE58(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 temp_v0;

    temp_v0 = arg3 * 2;
    *(s16 *)(D_80327804 + temp_v0) = arg0;
    *(s16 *)(D_80327808 + temp_v0) = arg1;
    *(D_8032780C + arg3) = arg2;
    *(D_80327810 + arg3) = arg4;
    *(D_80327814 + arg3) = 3;
    D_80327818 = D_8032AA74;
}
