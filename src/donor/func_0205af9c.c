/* compiler: 2.0/sp1p5  */
/* func_02012838 from projets/mysims/src/auto/func_02012838.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051ff4(void *, M2C_UNK);
extern M2C_UNK func_02052010(s32, u32);
extern s32 func_02059abc(M2C_UNK, M2C_UNK, s32, u32, s32, s32, s32, s32, s32);
extern void *func_02059bd8();
extern s32 func_02059c4c(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0205af9c(s32 arg0, s32 arg1, s32 arg2, u32 arg3, u16 arg4, u16 arg5, u16 arg6) {
    s32 temp_r0;
    s32 var_r0;
    u16 var_r4;
    void *temp_r5;

    var_r4  = 1;
    temp_r5 = (*(void **) ((s8 *) (func_02059bd8()) + (4)));
    temp_r0 = func_02059c4c(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02051ff4(temp_r5 + 0x3C, 2);
    func_02051ff4(temp_r5 + 0x188, 2);
    if ((*(u16 *) ((s8 *) (temp_r5) + (0x188))) == 0) {
        func_02051ff4(temp_r5 + 0x182, 2);
        var_r4 = (*(u16 *) ((s8 *) (temp_r5) + (0x182)));
        func_02051ff4(temp_r5 + 0x86, 2);
    }
    if (arg2 == 0) {
        return 6;
    }
    if (var_r4 == 0) {
        return 7;
    }
    func_02051ff4(temp_r5 + 0x7C, 2);
    if (arg2 == (*(s32 *) ((s8 *) (temp_r5) + (0x7C)))) {
        return 6;
    }
    if (arg3 > 0x200U) {
        return 6;
    }
    if (arg3 == 0) {
        return 6;
    }
    func_02052010(arg2, arg3);
    var_r0 = func_02059abc(0xF, 7, arg2, arg3, (s32) arg4, (s32) arg5, (s32) arg6, arg0, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
