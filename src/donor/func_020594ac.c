/* compiler: 2.0/sp1p5  */
/* CARDi_Request from projets/blue-dragon-awakened-shadow/src/auto/CARDi_Request.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205183c(M2C_UNK);
extern M2C_UNK func_02051ff4(s32 *, M2C_UNK);
extern M2C_UNK func_0205202c(s32 *, M2C_UNK);
extern M2C_UNK func_02052050();
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern M2C_UNK func_02052ca0(M2C_UNK);
extern s32 func_0205496c(M2C_UNK, M2C_UNK);
extern s32 func_02054990(M2C_UNK, s32 *, M2C_UNK);
s32 func_020594ac(void *arg0, s32 *arg1, s32 arg2) {
    s32 sp0;
    s32 *temp_r8;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r8_2;

    sp0 = arg2;
    if (!((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & 2)) {
        (*(volatile s32 *) ((s8 *) (arg0) + (0x114))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) | 2);
        if (func_0205496c(0xB, 1) == 0) {
            do {
                func_02052ca0(0x64);
            } while (func_0205496c(0xB, 1) == 0);
        }
        func_020594ac(arg0, ((void *) 0), 1);
    }
    func_0205202c((*(s32 **) ((s8 *) (arg0) + (0))), 0x60);
    func_02052050();
loop_6:
    (*(s32 **) ((s8 *) (arg0) + (4)))             = arg1;
    (*(volatile s32 *) ((s8 *) (arg0) + (0x114))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) | 0x20);
    do {

    } while (func_02054990(0xB, arg1, 1) < 0);
    if (arg1 == ((void *) 0)) {
        temp_r8 = (*(s32 **) ((s8 *) (arg0) + (0)));
        do {

        } while (func_02054990(0xB, temp_r8, 1) < 0);
    }
    temp_r8_2 = func_02052c30();
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & 0x20) {
        do {
            func_0205183c(0);
        } while ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & 0x20);
    }
    func_02052c44(temp_r8_2);
    func_02051ff4((*(s32 **) ((s8 *) (arg0) + (0))), 0x60);
    temp_r1 = *(*(s32 **) ((s8 *) (arg0) + (0)));
    if (temp_r1 == 4) {
        temp_r0 = sp0 - 1;
        sp0     = temp_r0;
        if (temp_r0 > 0) {
            goto loop_6;
        }
    }
    if (temp_r1 == 0) {
        return 1;
    }
    return 0;
}
