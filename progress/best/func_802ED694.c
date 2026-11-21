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

s32 func_8023413C();
s32 func_802344CC();
s32 func_802344F4();
extern u8 D_8032AA80;

void func_802ED694(void *arg0) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;

    func_802344F4(M2C_FIELD(arg0, s32 *, 0x20), 9, 0x13, 0xB, 1, 2, 0x7D, func_802344CC(M2C_FIELD(arg0, s32 *, 0xC)) + 0x5F, 0);
    func_802344F4(M2C_FIELD(arg0, s32 *, 0x24), 9, 0x13, 0xB, 1, 2, 0x96, func_802344CC(M2C_FIELD(arg0, s32 *, 0xC)) + 0x5F, 0);
    func_802344F4(M2C_FIELD(arg0, s32 *, 0x28), 9, 0x13, 0xB, 1, 2, 0xAF, func_802344CC(M2C_FIELD(arg0, s32 *, 0xC)) + 0x5F, 0);
    func_802344F4(M2C_FIELD(arg0, s32 *, 0x1C), 9, 0x13, 0xB, 1, 2, 0xC8, func_802344CC(M2C_FIELD(arg0, s32 *, 0xC)) + 0x5F, 0);
    func_802344F4(M2C_FIELD(arg0, s32 *, 0x10), 9, 0x13, 0xB, 1, 2, 0x7D, func_802344CC(M2C_FIELD(arg0, s32 *, 0xC)) + 0x4B, 0);
    func_802344F4(M2C_FIELD(arg0, s32 *, 0x14), 9, 0x13, 0xB, 1, 2, 0x96, func_802344CC(M2C_FIELD(arg0, s32 *, 0xC)) + 0x4B, 0);
    func_802344F4(M2C_FIELD(arg0, s32 *, 0x2C), 9, 0x13, 0xB, 1, 2, 0xAF, func_802344CC(M2C_FIELD(arg0, s32 *, 0xC)) + 0x4B, 0);
    func_802344F4(M2C_FIELD(arg0, s32 *, 0x30), 9, 0x13, 0xB, 1, 2, 0xC8, func_802344CC(M2C_FIELD(arg0, s32 *, 0xC)) + 0x4B, 0);
    if (M2C_FIELD(arg0, s32 *, 0x60) & 8) {
        func_802344F4(M2C_FIELD(arg0, s32 *, 0x1C), 9, 0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x60) & 1) {
        func_802344F4(M2C_FIELD(arg0, s32 *, 0x20), 9, 0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x60) & 2) {
        func_802344F4(M2C_FIELD(arg0, s32 *, 0x24), 9, 0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x60) & 4) {
        func_802344F4(M2C_FIELD(arg0, s32 *, 0x28), 9, 0, 0);
    }
    temp_v0 = D_8032AA80;
    if (temp_v0 == 1) {
        func_802344F4(M2C_FIELD(arg0, s32 *, 0x2C), 9, 0x13, 0xB, 1, 0);
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x1C));
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 0xA4);
        switch (temp_v0_2) {                        /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            break;
        default:                                    /* switch 1 */
            if (M2C_FIELD(arg0, s32 *, 0xFC) != 0) {
                func_802344F4(M2C_FIELD(arg0, s32 *, 0x2C), 9, 0, 0);
            }
            /* fallthrough */
        case 2:                                     /* switch 1 */
            if (M2C_FIELD(arg0, s32 *, 0xF0) != 0) {
                func_802344F4(M2C_FIELD(arg0, s32 *, 0x14), 9, 0, 0);
            }
            /* fallthrough */
        case 1:                                     /* switch 1 */
            if (M2C_FIELD(arg0, s32 *, 0xEC) != 0) {
                func_802344F4(M2C_FIELD(arg0, s32 *, 0x10), 9, 0, 0);
            }
            break;
        }
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x2C));
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x1C));
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x14));
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x10));
    }
    if ((temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 4) || (temp_v0 == 5)) {
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x1C));
        temp_v0_3 = M2C_FIELD(arg0, u8 *, 0xA4);
        if (temp_v0_3 != 1) {
            if (temp_v0_3 != 0) {
                if (M2C_FIELD(arg0, s32 *, 0xF0) != 0) {
                    func_802344F4(M2C_FIELD(arg0, s32 *, 0x14), 9, 0, 0);
                }
                goto block_27;
            }
        } else {
block_27:
            if (M2C_FIELD(arg0, s32 *, 0xEC) != 0) {
                func_802344F4(M2C_FIELD(arg0, s32 *, 0x10), 9, 0, 0);
            }
        }
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x10));
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x14));
    }
    if (temp_v0 == 8) {
        func_802344F4(M2C_FIELD(arg0, s32 *, 0x1C), 9, 0x13, 0xB, 1, 2, 0xC8, func_802344CC(M2C_FIELD(arg0, s32 *, 0xC)) + 0x5F, 0);
        temp_v0_4 = M2C_FIELD(arg0, u8 *, 0xA4);
        switch (temp_v0_4) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        default:                                    /* switch 2 */
            if (M2C_FIELD(arg0, s32 *, 0x60) & 0x80) {
                func_802344F4(M2C_FIELD(arg0, s32 *, 0x30), 9, 0, 0);
            }
            /* fallthrough */
        case 2:                                     /* switch 2 */
            if (M2C_FIELD(arg0, s32 *, 0x60) & 0x40) {
                func_802344F4(M2C_FIELD(arg0, s32 *, 0x2C), 9, 0, 0);
            }
            /* fallthrough */
        case 1:                                     /* switch 2 */
            if (M2C_FIELD(arg0, s32 *, 0x60) & 0x200) {
                func_802344F4(M2C_FIELD(arg0, s32 *, 0x14), 9, 0, 0);
            }
            break;
        }
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x14));
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x2C));
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x30));
    }
    if ((temp_v0 == 7) || (temp_v0 == 0xB)) {
        func_802344F4(M2C_FIELD(arg0, s32 *, 0x1C), 9, 0x13, 0xB, 1, 2, 0xC8, func_802344CC(M2C_FIELD(arg0, s32 *, 0xC)) + 0x5F, 0);
        if ((M2C_FIELD(arg0, u8 *, 0xA4) != 0) && (M2C_FIELD(arg0, s32 *, 0x60) & 0x200)) {
            func_802344F4(M2C_FIELD(arg0, s32 *, 0x14), 9, 0, 0);
        }
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x14));
    }
    if (temp_v0 == 6) {
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x1C));
        temp_v0_5 = M2C_FIELD(arg0, u8 *, 0xA4);
        if (temp_v0_5 != 1) {
            if (temp_v0_5 != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x60) & 0x100) {
                    func_802344F4(M2C_FIELD(arg0, s32 *, 0x10), 9, 0, 0);
                }
                goto block_52;
            }
        } else {
block_52:
            if (M2C_FIELD(arg0, s32 *, 0x60) & 0x200) {
                func_802344F4(M2C_FIELD(arg0, s32 *, 0x14), 9, 0, 0);
            }
        }
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x10));
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x14));
    }
    if (temp_v0 == 0xA) {
        if ((M2C_FIELD(arg0, u8 *, 0xA4) != 0) && (M2C_FIELD(arg0, s32 *, 0x60) & 0x200)) {
            func_802344F4(M2C_FIELD(arg0, s32 *, 0x14), 9, 0, 0);
        }
        func_8023413C(M2C_FIELD(arg0, s32 *, 0x14));
    }
    func_8023413C(M2C_FIELD(arg0, s32 *, 0x20));
    func_8023413C(M2C_FIELD(arg0, s32 *, 0x24));
    func_8023413C(M2C_FIELD(arg0, s32 *, 0x28));
}
