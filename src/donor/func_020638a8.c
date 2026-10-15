/* compiler: 2.0/sp1p5  */
/* FreeTail from projets/blue-dragon-awakened-shadow/src/auto/FreeTail.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_020638a8(void *arg0) {
    void *var_r2;

    var_r2 = (*(void **) ((s8 *) (arg0) + (0x2C)));
    if (var_r2 != ((void *) 0)) {
        do {
            (*(s32 *) ((s8 *) (var_r2) + (8))) = (s32) (*(s32 *) ((s8 *) (arg0) + (0x1C)));
            var_r2                             = (*(void **) ((s8 *) (var_r2) + (0xC)));
        } while (var_r2 != ((void *) 0));
    }
    (*(s32 *) ((s8 *) (arg0) + (0x28))) = (s32) (*(s32 *) ((s8 *) (arg0) + (0x1C)));
}
