/* compiler: 2.0/sp1p5  */
/* OSi_RemoveMutexLinkFromQueue from projets/blue-dragon-awakened-shadow/src/auto/OSi_RemoveMutexLinkFromQueue.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void *func_02051348(void *arg0) {
    void *temp_r1;
    void *temp_r2;

    temp_r2 = (*(void **) ((s8 *) (arg0) + (0)));
    if (temp_r2 != ((void *) 0)) {
        temp_r1                            = (*(void **) ((s8 *) (temp_r2) + (0x10)));
        (*(void **) ((s8 *) (arg0) + (0))) = temp_r1;
        if (temp_r1 != ((void *) 0)) {
            (*(s32 *) ((s8 *) (temp_r1) + (0x14))) = 0;
        } else {
            (*(s32 *) ((s8 *) (arg0) + (4))) = 0;
        }
    }
    return temp_r2;
}
