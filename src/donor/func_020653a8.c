/* compiler: 2.0/sp1p5  */
/* NNS_SndHeapCreate from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndHeapCreate.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_020638d4(s32, s32, M2C_UNK);
extern M2C_UNK func_0206390c(s32);
extern s32 func_02065564(u32, s32);
u32 func_020653a8(s32 arg0, s32 arg1) {
    s32 temp_r0_2;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r5;

    temp_r0 = arg0 + arg1;
    temp_r5 = (arg0 + 3) & ~3;
    if (temp_r5 > temp_r0) {
        return 0U;
    }
    temp_r1 = temp_r0 - temp_r5;
    if (temp_r1 < 0x10U) {
        return 0U;
    }
    temp_r0_2 = func_020638d4(temp_r5 + 0x10, temp_r1 - 0x10, 0);
    if (temp_r0_2 == 0) {
        return 0U;
    }
    if (func_02065564(temp_r5, temp_r0_2) != 0) {
        return temp_r5;
    }
    func_0206390c(temp_r0_2);
    return 0U;
}
