/* compiler: 2.0/sp1p5  */
/* OS_InitArena from projets/blue-dragon-awakened-shadow/src/auto/OS_InitArena.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02052278(M2C_UNK);
extern s32 func_0205235c(M2C_UNK);
extern M2C_UNK func_02052404(M2C_UNK, s32);
extern M2C_UNK func_02052418(M2C_UNK, s32);
extern s32 data_0208e33c;
void func_020520e0(void) {
    if (data_0208e33c != 0) {
        return;
    }
    data_0208e33c = 1;
    func_02052404(0, func_02052278(0));
    func_02052418(0, func_0205235c(0));
    func_02052418(2, 0);
    func_02052404(2, 0);
    func_02052404(3, func_02052278(3));
    func_02052418(3, func_0205235c(3));
    func_02052404(4, func_02052278(4));
    func_02052418(4, func_0205235c(4));
    func_02052404(5, func_02052278(5));
    func_02052418(5, func_0205235c(5));
    func_02052404(6, func_02052278(6));
    func_02052418(6, func_0205235c(6));
}
