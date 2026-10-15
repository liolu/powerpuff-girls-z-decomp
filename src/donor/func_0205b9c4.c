/* compiler: 2.0/sp1p5  */
/* WM_SetLifeTime from projets/blue-dragon-awakened-shadow/src/auto/WM_SetLifeTime.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02059a4c(M2C_UNK, M2C_UNK);
extern s32 func_02059abc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);
extern s32 func_02059c04();
s32 func_0205b9c4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u16 arg4) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02059c04();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02059a4c(0x1D, arg0);
    var_r0 = func_02059abc(0x1D, 4, arg1, arg2, arg3, (s32) arg4);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
