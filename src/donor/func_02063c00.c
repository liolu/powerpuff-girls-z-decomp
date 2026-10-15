/* compiler: 2.0/sp1p5  */
/* NNS_SndPlayerSetAllocatableChannel from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndPlayerSetAllocatableChannel.c
 * (same code in another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02099f40;
void func_02063c00(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02099f40 + (arg0 * 0x24))) = arg1;
}
