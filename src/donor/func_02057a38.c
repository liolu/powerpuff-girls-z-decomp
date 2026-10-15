/* compiler: 2.0/sp1p5  */
/* PM_GetLCDPower from projets/blue-dragon-awakened-shadow/src/auto/PM_GetLCDPower.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
s32 func_02057a38(void) {
    if (*(u16 *) 0x04000304 & 1) {
        return 1;
    }
    return 0;
}
