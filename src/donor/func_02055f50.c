/* compiler: 2.0/sp1p5  */
/* FS_Init from projets/blue-dragon-awakened-shadow/src/auto/FS_Init.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02056550();
extern s32 data_02090038;
void func_02055f50(s32 arg0) {
    if (data_02090038 != 0) {
        return;
    }
    data_02090038 = 1;
    func_02056550(arg0);
}
