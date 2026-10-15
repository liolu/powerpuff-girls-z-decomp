/* compiler: 2.0/sp1p5  */
/* NNS_SndPlayerSetPlayableSeqCount from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndPlayerSetPlayableSeqCount.c (same
 * code in another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02099f3c;
void func_02063be0(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02099f3c + (arg0 * 0x24))) = (s32) (u16) arg1;
}
