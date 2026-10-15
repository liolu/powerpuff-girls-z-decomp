/* compiler: 2.0/sp1p5  */
/* WM_SetGameInfo from projets/blue-dragon-awakened-shadow/src/auto/WM_SetGameInfo.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052010(M2C_UNK *, u32);
extern M2C_UNK func_0205344c(s32, M2C_UNK *, u32);
extern M2C_UNK func_02059a4c(M2C_UNK, M2C_UNK);
extern s32 func_02059abc(M2C_UNK, M2C_UNK, M2C_UNK *, u32, s32, s32, s32);
extern s32 func_02059c4c(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02091520;
s32 func_0205b8bc(M2C_UNK arg0, s32 arg1, u32 arg2, s32 arg3, u16 arg4, u8 arg5) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02059c4c(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == 0) {
        return 6;
    }
    if (arg2 > 0x70U) {
        return 6;
    }
    func_0205344c(arg1, &data_02091520, arg2);
    func_02052010(&data_02091520, arg2);
    func_02059a4c(0x18, arg0);
    var_r0 = func_02059abc(0x18, 5, &data_02091520, arg2, arg3, (s32) arg4, (s32) arg5);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
