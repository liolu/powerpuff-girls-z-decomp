/* compiler: 2.0/sp1p5  */
/* func_020139b0 from projets/mysims/src/auto/func_020139b0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02055c24(void *, s32);
extern M2C_UNK func_02055f78(M2C_UNK *);
extern s32 func_020561a0(M2C_UNK *, s32, s32, s32, s32);
extern M2C_UNK func_020562a0(M2C_UNK *);
extern s32 func_020563e4(M2C_UNK *, s32, s32);
void func_0205c8f8(void *arg0) {
    u8 sp4[72];
    s32 temp_r5_2;
    void *temp_r4;
    void *temp_r5;

    temp_r5 = (*(void **) ((s8 *) (arg0) + (0x14)));
    temp_r4 = (*(void **) ((s8 *) (arg0) + (0x10)));
    func_02055f78(sp4);
    temp_r5_2 = (*(s32 *) ((s8 *) (temp_r4) + (0)));
    if (func_020561a0(sp4, func_02055c24(temp_r5 + 0x10, (*(s32 *) ((s8 *) (temp_r5) + (0x14)))), temp_r5_2,
                      temp_r5_2 + (*(s32 *) ((s8 *) (temp_r4) + (4))), -1) != 0) {
        if ((*(s32 *) ((s8 *) (temp_r4) + (4))) ==
            func_020563e4(sp4, (*(s32 *) ((s8 *) (temp_r4) + (8))), (*(s32 *) ((s8 *) (temp_r4) + (4))))) {
            (*(s32 *) ((s8 *) (temp_r4) + (0xC))) = 2;
        }
        func_020562a0(sp4);
    }
    if ((*(s32 *) ((s8 *) (temp_r4) + (0xC))) == 2) {
        return;
    }
    (*(s32 *) ((s8 *) (temp_r4) + (0)))   = 0;
    (*(s32 *) ((s8 *) (temp_r4) + (0xC))) = 2;
}
