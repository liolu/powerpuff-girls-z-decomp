/* compiler: 2.0/sp1p5  */
/* SND_SetupAlarm from projets/blue-dragon-awakened-shadow/src/auto/SND_SetupAlarm.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02053a68(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
extern s32 func_0205426c(M2C_UNK, M2C_UNK, s32);
void func_02053884(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_02053a68(0x12, arg0, arg1, arg2, func_0205426c(arg0, arg3, arg4));
}
