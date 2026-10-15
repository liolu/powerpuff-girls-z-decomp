/* compiler: 2.0/sp1p5  */
/* NNS_SndFreeAlarm from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndFreeAlarm.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02099ac0;
void func_02063ba4(s32 arg0) {
    (*(s32 *) ((s8 *) (&data_02099ac0) + (4))) = (s32) ((*(s32 *) ((s8 *) (&data_02099ac0) + (4))) & ~(1 << arg0));
}
