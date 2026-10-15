/* compiler: 2.0/sp1p5  */
/* func_0204a544 from projets/fairy-tail-kardia/src/auto/func_0204a544.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020602f0(void);
extern void func_02060338(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern s32 data_020970a0;
void func_020604a4(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_02052c30();
    if (func_020602f0() != 0) {
        func_02060338(data_020970a0 + 0xC4, 0, arg0, 0);
    }
    func_02052c44(temp_r4);
}
