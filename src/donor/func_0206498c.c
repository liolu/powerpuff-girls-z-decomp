/* compiler: 2.0/sp1p5  */
/* func_020afce4 from projets/dragon-ball-origins/src/auto/func_020afce4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02053820(s32, M2C_UNK, s32, M2C_UNK);
extern M2C_UNK func_02053db0(M2C_UNK);
extern M2C_UNK func_02053f6c(s32);
extern s32 func_02053fd8();
void func_0206498c(void *arg0) {
    s32 temp_r4;

    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x24))) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_02053820((*(s32 *) ((s8 *) (arg0) + (0x44))), 0, 1 << (*(s32 *) ((s8 *) (arg0) + (0x40))), 0);
    temp_r4 = func_02053fd8();
    func_02053db0(1);
    func_02053f6c(temp_r4);
}
