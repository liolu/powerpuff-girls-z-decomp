/* compiler: 2.0/sp1p5  */
/* DLExtract from projets/blue-dragon-awakened-shadow/src/auto/DLExtract.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
void **func_020524b4(void **arg0, void *arg1) {
    void **temp_r3;
    void *temp_r2;

    temp_r3 = (*(void ***) ((s8 *) (arg1) + (4)));
    if (temp_r3 != ((void *) 0)) {
        *temp_r3 = (*(void **) ((s8 *) (arg1) + (0)));
    }
    temp_r2 = (*(void **) ((s8 *) (arg1) + (0)));
    if (temp_r2 == ((void *) 0)) {
        return (*(void ***) ((s8 *) (arg1) + (4)));
    }
    (*(void ***) ((s8 *) (temp_r2) + (4))) = (void **) (*(void ***) ((s8 *) (arg1) + (4)));
    return arg0;
}
