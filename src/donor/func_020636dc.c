/* compiler: 2.0/sp1p5  */
/* FindListContainHeap from projets/blue-dragon-awakened-shadow/src/auto/FindListContainHeap.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02063674(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_020976b4;
M2C_UNK *func_020636dc(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4  = &data_020976b4;
    temp_r0 = func_02063674(&data_020976b4, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
