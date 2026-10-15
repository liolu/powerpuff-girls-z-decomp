/* compiler: 2.0/sp1p5  */
/* NNS_SndStrmFreeChannel from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndStrmFreeChannel.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02063b10();
void func_02064554(void *arg0) {
    if ((*(s32 *) ((s8 *) (arg0) + (0x44))) == 0) {
        return;
    }
    func_02063b10();
    (*(s32 *) ((s8 *) (arg0) + (0x44))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x48))) = 0;
}
