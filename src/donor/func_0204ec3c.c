/* compiler: 2.0/sp1p5  */
/* func_020b4e6c from projets/dragon-ball-origins/src/auto/func_020b4e6c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
void func_0204ec3c(s32 arg0) {
    if (arg0 > 0) {
        (*(s16 *) ((s8 *) ((void *) 0x040002B0) + (0)))   = 1;
        (*(s32 *) ((s8 *) ((void *) 0x040002B0) + (8)))   = 0;
        (*(s32 *) ((s8 *) ((void *) 0x040002B0) + (0xC))) = arg0;
        return;
    }
    (*(s16 *) ((s8 *) ((void *) 0x040002B0) + (0)))   = 1;
    (*(s32 *) ((s8 *) ((void *) 0x040002B0) + (8)))   = 0;
    (*(s32 *) ((s8 *) ((void *) 0x040002B0) + (0xC))) = 0;
}
