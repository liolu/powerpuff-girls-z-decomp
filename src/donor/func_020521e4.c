/* compiler: 2.0/sp1p5  */
/* OS_InitArenaEx from projets/blue-dragon-awakened-shadow/src/auto/OS_InitArenaEx.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02051bbc();
extern s32 func_02052278(M2C_UNK);
extern s32 func_0205235c(M2C_UNK);
extern M2C_UNK func_02052404(M2C_UNK, s32);
extern M2C_UNK func_02052418(M2C_UNK, s32);
extern M2C_UNK func_020528ac(s32);
extern M2C_UNK func_020528b4(s32);
extern M2C_UNK data_0208e33c;
void func_020521e4(void) {
    func_02052404(2, func_02052278(2));
    func_02052418(2, func_0205235c(2));
    if (((*(s32 *) ((s8 *) (&data_0208e33c) + (4))) != 0) && ((func_02051bbc() & 3) != 1)) {
        return;
    }
    func_020528ac(0x0200002B);
    func_020528b4(0x023E0021);
}
