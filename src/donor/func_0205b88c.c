/* compiler: 2.0/sp1p5  */
/* WmGetSharedDataAddress from projets/blue-dragon-awakened-shadow/src/auto/WmGetSharedDataAddress.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern s32 func_02060800(s32);
s32 func_0205b88c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return ((*(u16 *) ((s8 *) (arg0) + (0x810))) * func_02060800(arg1 & ((1 << arg3) - 1))) + arg2;
}
