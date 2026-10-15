/* compiler: 2.0/sp1p5  */
/* SeqDisposeCallback from projets/blue-dragon-awakened-shadow/src/auto/SeqDisposeCallback.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02053998(s32, s32);
extern M2C_UNK func_02065d18(s32, M2C_UNK, M2C_UNK);
void func_02065d70(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02065d18(arg0, arg2, arg3);
    func_02053998(arg0, arg0 + arg1);
}
