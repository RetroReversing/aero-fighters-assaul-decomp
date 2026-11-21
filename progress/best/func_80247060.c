/* adapted from similar verified C in func_8024A710 in AERO FIGHTERS ASSAUL (matched), with its names changed by decompdecomp */
/* Partial candidate from function #47244642447 in project #11; rechecked locally. */
/* identical to __osSiDeviceBusy in 1080-decomp (matched), with its names changed by decompdecomp */
s32 func_80247060(void) {
    register u32 status = *(volatile u32*)0xA4800018;
    if (status & 28) {
        return 1;
    }
    return 0;
}
