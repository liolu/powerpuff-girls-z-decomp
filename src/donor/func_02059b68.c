/* compiler: 2.0/sp1p5  */
/* WMi_SendCommandDirect from projets/blue-dragon-awakened-shadow/src/auto/WMi_SendCommandDirect.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051bfc(M2C_UNK *, s32, M2C_UNK);
extern M2C_UNK func_02052010(s32, M2C_UNK);
extern M2C_UNK func_02053574(M2C_UNK, s32, M2C_UNK);
extern s32 func_02054990(M2C_UNK, s32, M2C_UNK);
extern s32 func_02059a64();
extern M2C_UNK data_02090a88;
s32 func_02059b68(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02059a64();
    if (temp_r0 == 0) {
        return 8;
    }
    func_02053574(arg0, temp_r0, arg1);
    func_02052010(temp_r0, arg1);
    temp_r4 = func_02054990(0xA, temp_r0, 0);
    func_02051bfc(&data_02090a88, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
