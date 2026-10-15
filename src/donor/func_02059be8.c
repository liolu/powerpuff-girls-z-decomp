/* compiler: 2.0/sp1p5  */
/* WMi_CheckInitialized from projets/blue-dragon-awakened-shadow/src/auto/WMi_CheckInitialized.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
extern u16 data_02090a80;
s32 func_02059be8(void) {
    if (data_02090a80 != 0) {
        return 0;
    }
    return 3;
}
