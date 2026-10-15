/* compiler: 2.0/sp1p5  */
/* NNS_FndFreeToFrmHeap from projets/blue-dragon-awakened-shadow/src/auto/NNS_FndFreeToFrmHeap.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02063894();
extern M2C_UNK func_020638a8(M2C_UNK);
void func_0206394c(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_02063894();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_020638a8(arg0);
}
