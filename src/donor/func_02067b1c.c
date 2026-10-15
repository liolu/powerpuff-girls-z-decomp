/* compiler: 2.0/sp1p5  */
/* NNSi_SndFaderGet from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndFaderGet.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206ee68(M2C_UNK, M2C_UNK);
s32 func_02067b1c(s32 arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r4;

    temp_r1 = (*(s32 *) ((s8 *) (arg0) + (0xC)));
    temp_r2 = (*(s32 *) ((s8 *) (arg0) + (8)));
    if (temp_r2 >= temp_r1) {
        return (*(s32 *) ((s8 *) (arg0) + (4)));
    }
    temp_r4 = (*(s32 *) ((s8 *) (arg0) + (0)));
    return temp_r4 + func_0206ee68(temp_r2 * ((*(s32 *) ((s8 *) (arg0) + (4))) - temp_r4), temp_r1);
}
