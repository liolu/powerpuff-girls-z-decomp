/* compiler: 2.0/sp1p5  */
/* NNSi_SndPlayerStopSeq from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndPlayerStopSeq.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020642a8(M2C_UNK);
extern void func_0206441c(M2C_UNK, M2C_UNK);
extern void func_02067af4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206411c(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && ((*(u8 *) ((s8 *) (arg0) + (0x2C))) != 0)) {
        if (arg1 == 0) {
            func_020642a8(arg0);
            return;
        }
        func_02067af4(arg0 + 0x1C, 0, arg1);
        func_0206441c(arg0, 0);
        (*(u8 *) ((s8 *) (arg0) + (0x2C))) = 2U;
    }
}
