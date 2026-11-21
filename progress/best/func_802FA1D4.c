/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

void func_802FA1D4(s32 *arg0) {
    char *var_a1;
    s32 var_v0;
    register char *var_v1;

    var_a1 = arg0;
    var_v1 = arg0;
    var_v0 = 0;
    do {
        *(s32 *)var_v1 = 0;
        ++var_v0;
        (*(s16 *)((char *)(var_a1) + 8)) = -1;
        var_v1 += 4;
        var_a1 += 2;
    } while (var_v0 != 2);
}
