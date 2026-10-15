/* compiler: 2.0/sp1p5  */
/* WM_PowerOn from projets/blue-dragon-awakened-shadow/src/auto/WM_PowerOn.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02059a4c(M2C_UNK, M2C_UNK);
extern s32 func_02059abc(M2C_UNK, M2C_UNK);
extern s32 func_02059c4c(M2C_UNK, M2C_UNK);
s32 func_0205a768(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02059c4c(1, 1);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02059a4c(5, arg0);
    var_r0 = func_02059abc(5, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
