/* compiler: 2.0/sp1p5  */
/* NNS_SndUnlockChannel from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndUnlockChannel.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020538e4(s32, M2C_UNK);
extern M2C_UNK data_02099ac0;
void func_02063b10(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020538e4(arg0, 0);
    (*(s32 *) ((s8 *) (&data_02099ac0) + (8))) = (s32) ((*(s32 *) ((s8 *) (&data_02099ac0) + (8))) & ~arg0);
}
