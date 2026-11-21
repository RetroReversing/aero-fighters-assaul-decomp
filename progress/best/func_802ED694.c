/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_8023413C();
s32 func_802344CC();
s32 func_802344F4();
extern u8 D_8032AA80;

void func_802ED694(void *arg0) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v0_4;

    func_802344F4((*(s32 *)((char *)(arg0) + 0x20)), 9, 0x13, 0xB, 1, 2, 0x7D, func_802344CC((*(s32 *)((char *)(arg0) + 0xC))) + 0x5F, 0);
    func_802344F4((*(s32 *)((char *)(arg0) + 0x24)), 9, 0x13, 0xB, 1, 2, 0x96, func_802344CC((*(s32 *)((char *)(arg0) + 0xC))) + 0x5F, 0);
    func_802344F4((*(s32 *)((char *)(arg0) + 0x28)), 9, 0x13, 0xB, 1, 2, 0xAF, func_802344CC((*(s32 *)((char *)(arg0) + 0xC))) + 0x5F, 0);
    func_802344F4((*(s32 *)((char *)(arg0) + 0x1C)), 9, 0x13, 0xB, 1, 2, 0xC8, func_802344CC((*(s32 *)((char *)(arg0) + 0xC))) + 0x5F, 0);
    func_802344F4((*(s32 *)((char *)(arg0) + 0x10)), 9, 0x13, 0xB, 1, 2, 0x7D, func_802344CC((*(s32 *)((char *)(arg0) + 0xC))) + 0x4B, 0);
    func_802344F4((*(s32 *)((char *)(arg0) + 0x14)), 9, 0x13, 0xB, 1, 2, 0x96, func_802344CC((*(s32 *)((char *)(arg0) + 0xC))) + 0x4B, 0);
    func_802344F4((*(s32 *)((char *)(arg0) + 0x2C)), 9, 0x13, 0xB, 1, 2, 0xAF, func_802344CC((*(s32 *)((char *)(arg0) + 0xC))) + 0x4B, 0);
    func_802344F4((*(s32 *)((char *)(arg0) + 0x30)), 9, 0x13, 0xB, 1, 2, 0xC8, func_802344CC((*(s32 *)((char *)(arg0) + 0xC))) + 0x4B, 0);
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 8) {
        func_802344F4((*(s32 *)((char *)(arg0) + 0x1C)), 9, 0, 0);
    }
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 1) {
        func_802344F4((*(s32 *)((char *)(arg0) + 0x20)), 9, 0, 0);
    }
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 2) {
        func_802344F4((*(s32 *)((char *)(arg0) + 0x24)), 9, 0, 0);
    }
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 4) {
        func_802344F4((*(s32 *)((char *)(arg0) + 0x28)), 9, 0, 0);
    }
    temp_v0 = D_8032AA80;
    if (D_8032AA80 == 1) {
        func_802344F4((*(s32 *)((char *)(arg0) + 0x2C)), 9, 0x13, 0xB, 1, 0);
        func_8023413C((*(s32 *)((char *)(arg0) + 0x1C)));
        temp_v0_2 = (*(u8 *)((char *)(arg0) + 0xA4));
        switch (temp_v0_2) {                        /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            break;
        default:                                    /* switch 1 */
            if ((*(s32 *)((char *)(arg0) + 0xFC)) != 0) {
                func_802344F4((*(s32 *)((char *)(arg0) + 0x2C)), 9, 0, 0);
            }
            /* fallthrough */
        case 2:                                     /* switch 1 */
            if ((*(s32 *)((char *)(arg0) + 0xF0)) != 0) {
                func_802344F4((*(s32 *)((char *)(arg0) + 0x14)), 9, 0, 0);
            }
            /* fallthrough */
        case 1:                                     /* switch 1 */
            if ((*(s32 *)((char *)(arg0) + 0xEC)) != 0) {
                func_802344F4((*(s32 *)((char *)(arg0) + 0x10)), 9, 0, 0);
            }
            break;
        }
        func_8023413C((*(s32 *)((char *)(arg0) + 0x2C)));
        func_8023413C((*(s32 *)((char *)(arg0) + 0x1C)));
        func_8023413C((*(s32 *)((char *)(arg0) + 0x14)));
        func_8023413C((*(s32 *)((char *)(arg0) + 0x10)));
    }
    if ((temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 4) || (temp_v0 == 5)) {
        func_8023413C((*(s32 *)((char *)(arg0) + 0x1C)));
        temp_v0_3 = (*(u8 *)((char *)(arg0) + 0xA4));
        if ((int)temp_v0_3 != 1) {
            if (temp_v0_3 != 0) {
                if ((*(s32 *)((char *)(arg0) + 0xF0)) != 0) {
                    func_802344F4((*(s32 *)((char *)(arg0) + 0x14)), 9, 0, 0);
                }
                goto block_27;
            }
        } else {
block_27:
            if ((*(s32 *)((char *)(arg0) + 0xEC)) != 0) {
                func_802344F4((*(s32 *)((char *)(arg0) + 0x10)), 9, 0, 0);
            }
        }
        func_8023413C((*(s32 *)((char *)(arg0) + 0x10)));
        func_8023413C((*(s32 *)((char *)(arg0) + 0x14)));
    }
    if ((unsigned)temp_v0 == 8) {
        func_802344F4((*(s32 *)((char *)(arg0) + 0x1C)), 9, 0x13, 0xB, 1, 2, 0xC8, func_802344CC((*(s32 *)((char *)(arg0) + 0xC))) + 0x5F, 0);
        temp_v0_4 = (*(u8 *)((char *)(arg0) + 0xA4));
        switch (temp_v0_4) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        default:                                    /* switch 2 */
            if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x80) {
                func_802344F4((*(s32 *)((char *)(arg0) + 0x30)), 9, 0, 0);
            }
            /* fallthrough */
        case 2:                                     /* switch 2 */
            if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x40) {
                func_802344F4((*(s32 *)((char *)(arg0) + 0x2C)), 9, 0, 0);
            }
            /* fallthrough */
        case 1:                                     /* switch 2 */
            if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x200) {
                func_802344F4((*(s32 *)((char *)(arg0) + 0x14)), 9, 0, 0);
            }
            break;
        }
        func_8023413C((*(s32 *)((char *)(arg0) + 0x14)));
        func_8023413C((*(s32 *)((char *)(arg0) + 0x2C)));
        func_8023413C((*(s32 *)((char *)(arg0) + 0x30)));
    }
    if ((D_8032AA80 == 7) || (D_8032AA80 == 0xB)) {
        func_802344F4((*(s32 *)((char *)(arg0) + 0x1C)), 9, 0x13, 0xB, 1, 2, 0xC8, func_802344CC((*(s32 *)((char *)(arg0) + 0xC))) + 0x5F, 0);
        if (((*(u8 *)((char *)(arg0) + 0xA4)) != 0) && ((*(s32 *)((char *)(arg0) + 0x60)) & 0x200)) {
            func_802344F4((*(s32 *)((char *)(arg0) + 0x14)), 9, 0, 0);
        }
        func_8023413C((*(s32 *)((char *)(arg0) + 0x14)));
    }
    if (D_8032AA80 == 6) {
        func_8023413C((*(s32 *)((char *)(arg0) + 0x1C)));
        temp_v0_5 = (*(u8 *)((char *)(arg0) + 0xA4));
        if (temp_v0_5 != 1) {
            if (temp_v0_5) {
                if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x100) {
                    func_802344F4((*(s32 *)((char *)(arg0) + 0x10)), 9, 0, 0);
                }
                goto block_52;
            }
        } else {
block_52:
            if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x200) {
                func_802344F4((*(s32 *)((char *)(arg0) + 0x14)), 9, 0, 0);
            }
        }
        func_8023413C((*(s32 *)((char *)(arg0) + 0x10)));
        func_8023413C((*(s32 *)((char *)(arg0) + 0x14)));
    }
    if ((u32)temp_v0 == 0xA) {
        if (((*(u8 *)((char *)(arg0) + 0xA4)) != 0) && ((*(s32 *)((char *)(arg0) + 0x60)) & 0x200)) {
            func_802344F4((*(s32 *)((char *)(arg0) + 0x14)), 9, 0, 0);
        }
        func_8023413C((*(s32 *)((char *)(arg0) + 0x14)));
    }
    func_8023413C((*(s32 *)((char *)(arg0) + 0x20)));
    func_8023413C((*(s32 *)((char *)(arg0) + 0x24)));
    func_8023413C((*(s32 *)((char *)(arg0) + 0x28)));
}
