/* compiler: 2.0/sp1p5  */
/* SND_IsFinishedCommandTag from projets/blue-dragon-awakened-shadow/src/auto/SND_IsFinishedCommandTag.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern M2C_UNK data_0208e460;
s32 func_02054004(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02052c30();
    if ((u32) arg0 > (u32) (*(u32 *) ((s8 *) (&data_0208e460) + (4)))) {
        if ((u32) (arg0 - (*(u32 *) ((s8 *) (&data_0208e460) + (4)))) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) ((*(u32 *) ((s8 *) (&data_0208e460) + (4))) - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02052c44(temp_r0);
    return var_r4;
}
