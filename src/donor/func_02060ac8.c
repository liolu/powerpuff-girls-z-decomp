/* compiler: 2.0/sp1p5  */
/* CTRDG_IsOptionCartridge from projets/blue-dragon-awakened-shadow/src/auto/CTRDG_IsOptionCartridge.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef long s32;
extern s32 func_02060af0();
extern s32 func_02060b08();
s32 func_02060ac8(void) {
    if ((func_02060b08() != 0) && (func_02060af0() == 0)) {
        return 1;
    }
    return 0;
}
