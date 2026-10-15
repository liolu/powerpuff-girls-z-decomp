/* compiler: 2.0/sp1p5  */
/* func_0200bc54 from projets/rayman-rr/src/auto/func_0200bc54.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
void func_02008f28(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    *(u16 *) 0x04001008 =
        (*(u16 *) 0x04001008 & 0x43) | (arg0 << 0xE) | (arg1 << 7) | (arg2 << 8) | (arg3 * 4) | (arg4 << 0xD);
}
