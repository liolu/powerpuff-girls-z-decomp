/* compiler: 2.0/sp1p5  */
/* CTRDG_Enable from projets/blue-dragon-awakened-shadow/src/auto/CTRDG_Enable.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052898(M2C_UNK, M2C_UNK);
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern s32 func_02060ac8();
extern s32 data_020970b8;
void func_02060d60(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_02052c30();
    data_020970b8 = arg0;
    if (func_02060ac8() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_02052898(0xF000, var_r1);
    }
    func_02052c44(temp_r4);
}
