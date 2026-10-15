/* compiler: 2.0/sp1p5  */
/* func_020133d4 from projets/farm-frenzy/src/auto/func_020133d4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
void func_02061768(void *arg0, s16 arg1) {
    if ((*(s32 *) ((s8 *) (arg0) + (0))) != 1) {
        return;
    }
    (*(u16 *) ((s8 *) (arg0) + (0x12))) = (u16) ((*(u16 *) ((s8 *) (arg0) + (0x12))) | 4);
    (*(s16 *) ((s8 *) (arg0) + (0x10))) = arg1;
}
