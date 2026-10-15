/* compiler: 2.0/sp1p5  */
/* OSi_DequeueItem from projets/blue-dragon-awakened-shadow/src/auto/OSi_DequeueItem.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
void func_02051f9c(void *arg0, void *arg1) {
    void *temp_r1;
    void *temp_r2;

    temp_r2 = (*(void **) ((s8 *) (arg1) + (0x10)));
    temp_r1 = (*(void **) ((s8 *) (arg1) + (0x14)));
    if (temp_r2 == ((void *) 0)) {
        (*(void **) ((s8 *) (arg0) + (0x8C))) = temp_r1;
    } else {
        (*(void **) ((s8 *) (temp_r2) + (0x14))) = temp_r1;
    }
    if (temp_r1 == ((void *) 0)) {
        (*(void **) ((s8 *) (arg0) + (0x88))) = temp_r2;
        return;
    }
    (*(void **) ((s8 *) (temp_r1) + (0x10))) = temp_r2;
}
