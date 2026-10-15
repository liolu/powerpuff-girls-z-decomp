/* compiler: 2.0/sp1p5  */
/* NNSi_SndFaderUpdate from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndFaderUpdate.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_02067b50(void *arg0) {
    s32 temp_r2;

    temp_r2 = (*(s32 *) ((s8 *) (arg0) + (8)));
    if (temp_r2 < (s32) (*(s32 *) ((s8 *) (arg0) + (0xC)))) {
        (*(s32 *) ((s8 *) (arg0) + (8))) = (s32) (temp_r2 + 1);
    }
}
