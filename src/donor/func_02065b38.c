/* compiler: 2.0/sp1p5  */
/* LoadSeq from projets/blue-dragon-awakened-shadow/src/auto/LoadSeq.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02064f28();
extern s32 func_02065340();
extern M2C_UNK func_02065368(M2C_UNK, s32);
extern s32 func_020659c0(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32);
extern M2C_UNK func_02065d98;
s32 func_02065b38(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02065340();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_02064f28();
        }
        var_r4 = func_020659c0(arg0, &func_02065d98, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_02065368(arg0, var_r4);
        }
    }
    return var_r4;
}
