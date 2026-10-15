/* compiler: 2.0/sp1p5  */
/* NNS_FndAllocFromFrmHeapEx from projets/blue-dragon-awakened-shadow/src/auto/NNS_FndAllocFromFrmHeapEx.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020637e0(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_0206383c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02063918(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0) {
        var_r1 = 1;
    }
    temp_r1 = (var_r1 + 3) & ~3;
    temp_r0 = arg0 + 0x24;
    if (arg2 >= 0) {
        func_020637e0(temp_r0, temp_r1, arg2);
        return;
    }
    func_0206383c(temp_r0, temp_r1, 0 - arg2);
}
