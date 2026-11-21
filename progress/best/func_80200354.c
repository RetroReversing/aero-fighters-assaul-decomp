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
/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80202288();
s32 func_802057A0();
s32 func_80231C9C();
typedef struct { u16 f0; u8 pad[78]; } Slot_80256DB4;
extern Slot_80256DB4 D_80256DB4[];

void func_80200354(u16 arg0) {
    if ((s32) arg0 > 0) {
        func_80231C9C(arg0);
    }
    func_80202288(arg0);
    func_802057A0(D_80256DB4[arg0].f0);
}
