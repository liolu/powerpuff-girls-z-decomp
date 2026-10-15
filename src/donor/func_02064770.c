/* compiler: 2.0/sp1p5  */
/* NNS_SndStrmStop from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndStrmStop.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02064828();
void func_02064770(void *arg0) {
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x24))) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02064828(arg0);
}
