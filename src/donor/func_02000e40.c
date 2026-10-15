/* compiler: 2.0/sp1p5  */
/* func_0208fb8c from projets/blue-dragon-awakened-shadow/src/auto/func_0208fb8c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02069214();
extern s32 data_0208c580;
void func_02000e40(void) {
    if (data_0208c580 == 0) {
        return;
    }
    if (data_0208c580 != 0) {
        func_02069214();
    }
    data_0208c580 = 0;
}
