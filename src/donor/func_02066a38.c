/* compiler: 2.0/sp1p5  */
/* func_020b2630 from projets/dragon-ball-origins/src/auto/func_020b2630.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02066a90(M2C_UNK);
extern void func_02067af4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02066a38(s32 arg0, s32 arg1) {
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x110))) << 0x1E) >> 0x1F) == 0) {
        func_02066a90(arg0);
        return;
    }
    if (arg1 == 0) {
        func_02066a90(arg0);
        return;
    }
    func_02067af4(arg0 + 0xE8, 0, arg1);
    (*(s32 *) ((s8 *) (arg0) + (0x110))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x110))) | 8);
    (*(s32 *) ((s8 *) (arg0) + (0x150))) = 0;
}
