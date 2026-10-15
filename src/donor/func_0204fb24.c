/* compiler: 2.0/sp1p5  */
/* resetBankForX_ from projets/blue-dragon-awakened-shadow/src/auto/resetBankForX_.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204efe8(u16);
extern u16 data_0208e020;
u16 func_0204fb24(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_0208e020 |= temp_r4;
    func_0204efe8(temp_r4);
    return temp_r4;
}
