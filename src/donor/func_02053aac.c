/* compiler: 2.0/sp1p5  */
/* SND_Init from projets/blue-dragon-awakened-shadow/src/auto/SND_Init.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051dd0(M2C_UNK *);
extern M2C_UNK func_02053b0c();
extern M2C_UNK func_0205421c();
extern s32 data_0208e444;
extern M2C_UNK data_0208e448;
void func_02053aac(void) {
    if (data_0208e444 != 0) {
        return;
    }
    data_0208e444 = 1;
    func_02051dd0(&data_0208e448);
    func_02053b0c();
    func_0205421c();
}
