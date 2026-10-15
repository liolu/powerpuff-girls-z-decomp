/* compiler: 2.0/sp1p5  */
/* FS_ConvertPathToFileID from projets/blue-dragon-awakened-shadow/src/auto/FS_ConvertPathToFileID.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02055f78(M2C_UNK *);
extern s32 func_02055fa0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02056160(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_02055f78(sp0);
    if (func_02055fa0(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
