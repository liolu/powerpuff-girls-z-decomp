/* compiler: 2.0/sp1p5  */
/* func_020afb50 from projets/dragon-ball-origins/src/auto/func_020afb50.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205392c(s32, M2C_UNK);
void func_020647f8(void *arg0, s32 arg1, M2C_UNK arg2) {
    if (arg1 > (s32) ((*(s32 *) ((s8 *) (arg0) + (0x48))) - 1)) {
        return;
    }
    func_0205392c(1 << (*(u8 *) ((s8 *) ((arg0 + arg1)) + (0x4C))), arg2);
}
