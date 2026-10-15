/* compiler: 2.0/sp1p5  */
/* InitPXI from projets/blue-dragon-awakened-shadow/src/auto/InitPXI.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052ca0(M2C_UNK);
extern s32 func_020541dc();
extern M2C_UNK func_02054920(M2C_UNK, M2C_UNK *);
extern s32 func_0205496c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020540e8;
void func_0205410c(void) {
    func_02054920(7, &func_020540e8);
    if (func_020541dc() == 0) {
        return;
    }
    if (func_0205496c(7, 1) != 0) {
        return;
    }
    do {
        func_02052ca0(0x64);
    } while (func_0205496c(7, 1) == 0);
}
