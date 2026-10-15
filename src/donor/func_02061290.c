/* compiler: 2.0/sp1p5  */
/* func_020326d8 from projets/code-lyoko/src/auto/func_020326d8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
s32 func_02061290(void *arg0, u32 arg1) {
    if ((u32) (*(u16 *) ((s8 *) (arg0) + (0))) > arg1) {
        return (*(s32 *) ((s8 *) (arg0) + (4))) + (arg1 * 0x10);
    }
    return 0;
}
