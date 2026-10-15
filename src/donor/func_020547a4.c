/* compiler: 2.0/sp1p5  */
/* SND_SetWaveDataAddress from projets/blue-dragon-awakened-shadow/src/auto/SND_SetWaveDataAddress.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052010(s32, M2C_UNK);
extern M2C_UNK func_02053ae4();
extern M2C_UNK func_02053af8();
void func_020547a4(s32 arg0, s32 arg1, s32 arg2) {
    func_02053ae4();
    (*(s32 *) ((s8 *) ((arg0 + (arg1 * 4))) + (0x3C))) = arg2;
    func_02052010(arg0 + 0x3C + (arg1 * 4), 4);
    func_02053af8();
}
