/* compiler: 2.0/sp1p5  */
/* DisposeCallback from projets/blue-dragon-awakened-shadow/src/auto/DisposeCallback.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern s32 func_02064f10(s32);
extern s32 func_02065340(M2C_UNK);
extern M2C_UNK func_02065368(M2C_UNK, M2C_UNK);
void func_02065d18(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_02052c30();
    temp_r4 = func_02064f10(arg1);
    if (arg0 == func_02065340(arg2)) {
        func_02065368(arg2, 0);
    }
    func_02064f10(temp_r4);
    func_02052c44(temp_r5);
}
