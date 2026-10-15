/* compiler: 2.0/sp1p5  */
/* NNSi_SndArcLoadFile from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndArcLoadFile.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052010(s32, s32);
extern s32 func_02065280();
extern s32 func_020652a8(M2C_UNK, s32, s32, M2C_UNK);
extern s32 func_020654ec(s32, s32, M2C_UNK, M2C_UNK, s32);
s32 func_020659c0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_02065280();
    if (temp_r0_2 == 0) {
        return 0;
    }
    if (arg4 == 0) {
        return 0;
    }
    temp_r0 = func_020654ec(arg4, temp_r0_2 + 0x20, arg1, arg2, arg3);
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0_2 != func_020652a8(arg0, temp_r0, temp_r0_2, 0)) {
        return 0;
    }
    func_02052010(temp_r0, temp_r0_2);
    return temp_r0;
}
