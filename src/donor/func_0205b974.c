/* compiler: 2.0/sp1p5  */
/* WM_SetBeaconIndication from projets/blue-dragon-awakened-shadow/src/auto/WM_SetBeaconIndication.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02059a4c(M2C_UNK, M2C_UNK);
extern s32 func_02059abc(M2C_UNK, M2C_UNK, s32);
extern s32 func_02059c04();
s32 func_0205b974(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02059c04();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if ((arg1 != 0) && (arg1 != 1)) {
        return 6;
    }
    func_02059a4c(0x19, arg0);
    var_r0 = func_02059abc(0x19, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
