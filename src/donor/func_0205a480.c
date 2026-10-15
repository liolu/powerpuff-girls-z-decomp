/* compiler: 2.0/sp1p5  */
/* WM_GetAllowedChannel from projets/blue-dragon-awakened-shadow/src/auto/WM_GetAllowedChannel.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
extern s32 func_02059be8();
u16 func_0205a480(void) {
    if (func_02059be8() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
