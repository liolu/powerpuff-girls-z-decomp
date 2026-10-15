/* compiler: 2.0/sp1p5  */
/* func_02095278 from projets/blue-dragon-awakened-shadow/src/auto/func_02095278.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02069214(s32);
extern M2C_UNK func_020027d4(s32);
extern s32 data_0208c58c;
void func_02002600(void) {
    s32 temp_r4;

    temp_r4 = data_0208c58c;
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_020027d4(temp_r4);
        func_02069214(temp_r4);
    }
    data_0208c58c = 0;
}
