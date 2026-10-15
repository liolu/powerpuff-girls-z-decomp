/* compiler: 2.0/sp1p5  */
/* SND_WaitForCommandProc from projets/blue-dragon-awakened-shadow/src/auto/SND_WaitForCommandProc.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02053be0();
extern s32 func_02054004();
extern M2C_UNK func_0205416c();
void func_02053f6c(M2C_UNK arg0) {
    if (func_02054004() != 0) {
        return;
    }
    do {

    } while (func_02053be0(0) != 0);
    if (func_02054004(arg0) != 0) {
        return;
    }
    func_0205416c();
    if (func_02054004(arg0) != 0) {
        return;
    }
    do {
        func_02053be0(1);
    } while (func_02054004(arg0) == 0);
}
