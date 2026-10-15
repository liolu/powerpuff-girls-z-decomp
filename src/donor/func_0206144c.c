/* compiler: 2.0/sp1p5  */
/* func_0200db64 from projets/livly-garden/src/auto/func_0200db64.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
s32 func_0206144c(void *arg0, u32 arg1) {
    void *temp_r2;
    void *temp_r3;

    temp_r3 = (*(void **) ((s8 *) (arg0) + (0x1C)));
    if (arg1 < (u32) (*(u16 *) ((s8 *) (temp_r3) + (0)))) {
        temp_r2                            = (*(s32 *) ((s8 *) (temp_r3) + (0xC))) + (arg1 * 8);
        (*(void **) ((s8 *) (arg0) + (0))) = temp_r2;
        if ((*(u16 *) ((s8 *) (temp_r2) + (4))) != 0) {
            (*(void **) ((s8 *) (arg0) + (4))) = temp_r2;
        }
        return 1;
    }
    return 0;
}
