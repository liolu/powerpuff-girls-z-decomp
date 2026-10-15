/* compiler: 2.0/sp1p5  */
/* DLAddFront from projets/blue-dragon-awakened-shadow/src/auto/DLAddFront.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void *func_02052498(void **arg0, void *arg1) {
    (*(void ***) ((s8 *) (arg1) + (4))) = arg0;
    (*(s32 *) ((s8 *) (arg1) + (0)))    = 0;
    if (arg0 != ((void *) 0)) {
        *arg0 = arg1;
    }
    return arg1;
}
