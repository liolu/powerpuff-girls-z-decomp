/* compiler: 2.0/sp1p5  */
/* SND_GetCurrentCommandTag from projets/blue-dragon-awakened-shadow/src/auto/SND_GetCurrentCommandTag.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern M2C_UNK data_0208e460;
s32 func_02053fd8(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02052c30();
    if ((*(s32 *) ((s8 *) (&data_0208e460) + (8))) == 0) {
        var_r4 = (*(s32 *) ((s8 *) (&data_0208e460) + (4)));
    } else {
        var_r4 = (*(s32 *) ((s8 *) (&data_0208e460) + (0x20)));
    }
    func_02052c44(temp_r0);
    return var_r4;
}
