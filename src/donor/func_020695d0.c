/* compiler: 2.0/sp1p5  */
/* __register_global_object from projets/blue-dragon-awakened-shadow/src/auto/__register_global_object.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_0209b924;
void func_020695d0(s32 arg0, s32 arg1, void *arg2) {
    (*(void **) ((s8 *) (arg2) + (0))) = (void *) data_0209b924;
    (*(s32 *) ((s8 *) (arg2) + (4)))   = arg1;
    (*(s32 *) ((s8 *) (arg2) + (8)))   = arg0;
    data_0209b924                      = arg2;
}
