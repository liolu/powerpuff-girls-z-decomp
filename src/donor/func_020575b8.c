/* compiler: 2.0/sp1p5  */
/* func_020be948 from projets/dragon-ball-origins/src/auto/func_020be948.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052ca0(s32);
extern M2C_UNK func_020573a4(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_02057590(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0205768c(s32 *, s32 *);
extern s32 func_02057a18(M2C_UNK);
extern s32 func_02057a38();
void func_020575b8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_02052ca0(0x996A00);
    if (func_02057a38() != 1) {
        func_0205768c(&sp4, &sp0);
        if (sp4 != 0) {
            func_02057590(0, 0);
        }
        if (sp0 != 0) {
            func_02057590(1, 0);
        }
        if (func_02057a18(1) == 0) {
            do {
                func_02052ca0(0x996A00);
            } while (func_02057a18(1) == 0);
        }
    }
    func_020573a4(0xE, arg0, arg1);
}
