/* compiler: 2.0/sp1p5  */
/* PxiFifoCallback from projets/blue-dragon-awakened-shadow/src/auto/PxiFifoCallback.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern M2C_UNK func_0205429c(M2C_UNK);
void func_020540e8(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02052c30();
    func_0205429c(arg1);
    func_02052c44(temp_r4);
}
