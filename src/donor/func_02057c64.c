/* compiler: 2.0/sp1p5  */
/* func_02050924 from projets/fairy-tail-kardia/src/auto/func_02050924.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02057bf0(M2C_UNK, M2C_UNK *, M2C_UNK);
extern M2C_UNK func_0205826c();
extern M2C_UNK data_02090154;
extern M2C_UNK func_0205825c;
s32 func_02057c64(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                       = func_02057bf0(arg0, &func_0205825c, 0);
    (*(s32 *) ((s8 *) (&data_02090154) + (0x24))) = temp_r0;
    if (temp_r0 == 0) {
        func_0205826c();
    }
    return (*(s32 *) ((s8 *) (&data_02090154) + (0x24)));
}
