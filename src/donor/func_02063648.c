/* compiler: 2.0/sp1p5  */
/* NNS_FndGetNextListObject from projets/blue-dragon-awakened-shadow/src/auto/NNS_FndGetNextListObject.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
s32 func_02063648(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return (*(s32 *) ((s8 *) (arg0) + (0)));
    }
    return (*(s32 *) ((s8 *) ((arg1 + (*(u16 *) ((s8 *) (arg0) + (0xA))))) + (4)));
}
