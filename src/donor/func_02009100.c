/* compiler: 2.0/sp1p5  */
/* func_0209d50c from projets/dragon-ball-origins/src/auto/func_0209d50c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
void func_02009100(s32 arg0, s32 arg1) {
    *(s32 *) 0x04001018 = (arg0 & 0x1FF) | (0x01FF0000 & (arg1 << 0x10));
}
