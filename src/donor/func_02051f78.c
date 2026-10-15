/* compiler: 2.0/sp1p5  */
/* OSi_EnqueueTail from projets/blue-dragon-awakened-shadow/src/auto/OSi_EnqueueTail.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_02051f78(void *arg0, void *arg1) {
    void *temp_r2;

    temp_r2 = (*(void **) ((s8 *) (arg0) + (0x8C)));
    if (temp_r2 == ((void *) 0)) {
        (*(void **) ((s8 *) (arg0) + (0x88))) = arg1;
    } else {
        (*(void **) ((s8 *) (temp_r2) + (0x10))) = arg1;
    }
    (*(void **) ((s8 *) (arg1) + (0x14))) = temp_r2;
    (*(s32 *) ((s8 *) (arg1) + (0x10)))   = 0;
    (*(void **) ((s8 *) (arg0) + (0x8C))) = arg1;
}
