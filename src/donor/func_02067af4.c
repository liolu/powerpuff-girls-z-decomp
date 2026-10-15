/* compiler: 2.0/sp1p5  */
/* NNSi_SndFaderSet from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndFaderSet.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 func_02067b1c();
void func_02067af4(void *arg0, s32 arg1, s32 arg2) {
    (*(s32 *) ((s8 *) (arg0) + (0)))   = func_02067b1c();
    (*(s32 *) ((s8 *) (arg0) + (4)))   = arg1;
    (*(s32 *) ((s8 *) (arg0) + (0xC))) = arg2;
    (*(s32 *) ((s8 *) (arg0) + (8)))   = 0;
}
