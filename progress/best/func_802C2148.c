/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_8022970C(s32 *);                   /* extern */
s32 func_8022A0D0(s32 *, s32, s32, s32); /* extern */
s32 func_802AAE40(s32, s32 *, s32, s32, f32, f32, s32, s32, s32); /* extern */
s32 func_802AD4E8(s32, void *, s32 *, f32 *, f32 *, s32, f32, f32, f32, f32); /* extern */
s32 func_802C47B8(void *);                      /* extern */
s32 func_802C5150(void *arg0, s32 *);                   /* extern */
s32 func_802D0154(s32 *, f32, s32);     /* extern */
s32 func_802E93A0(s32,f32,f32, s32, f32, f32, f32); /* extern */
s32 func_802E97AC(s32, s32);                    /* extern */

void func_802C2148(void *arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5) {
int *__repair_home2 = &arg2;

    f32 sp98[3];
    char sp68[0x30];
    f32 sp54;
    s32 sp5C;
    f32 sp4C;
    s32 sp64;
    f32 sp3C[3];
    s32 temp_v0;

    func_802C5150(arg0, sp68);
    if ((*(u8 *)((char *)(arg0) + 0xFC)) != 0) {
        if (func_802AD4E8((*(s32 *)((char *)(arg0) + 0)), arg0, &sp5C, &sp54, &sp4C, 2, (*(f32 *)((char *)(arg0) + 0x154)), (*(f32 *)((char *)(arg0) + 0x15C)), (*(f32 *)((char *)(arg0) + 0x160)), (*(f32 *)((char *)(arg0) + 0x164))) > 0) {
            sp3C[2] = sp98[0];
            sp3C[1] = sp98[1];
            sp3C[0] = sp98[2];
            func_8022970C(sp68);
            sp98[0] = sp3C[2];
            sp98[1] = sp3C[1];
            sp98[2] = sp3C[0];
            func_802C47B8(arg0);
            func_802D0154(sp68, sp54 + (*(f32 *)((char *)(arg0) + 0x104)), 0x7A);
            func_802D0154(sp68, sp4C + (*(f32 *)((char *)(arg0) + 0x108)), 0x78);
        }
    } else {
        func_8022A0D0(sp68, 0, 0xC1D00000, 0xBF400000);
    }
    temp_v0 = func_802AAE40((*(s32 *)((char *)(arg0) + 0)), sp68, 0x44480000, arg4, arg5, 1.0f, (*(s32 *)((char *)(arg0) + 0x8C)), (*__repair_home2), 1);
    if (temp_v0 != 0) {
        sp64 = temp_v0;
        func_802E93A0(temp_v0,1.0f,1.0f, 0x3E800000, 1.0f, 0.0f, 0.0f);
        func_802E97AC(sp64, arg3);
    }
    (*(f32 *)((char *)(arg0) + 0xF4)) = arg1;
}
