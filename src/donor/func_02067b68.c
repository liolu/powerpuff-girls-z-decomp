/* compiler: 2.0/sp1p5  */
/* NNSi_SndFaderIsFinished from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndFaderIsFinished.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_02067b68(void *arg0) {
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (8))) >= (s32) (*(s32 *) ((s8 *) (arg0) + (0xC)))) {
        return 1;
    }
    return 0;
}
