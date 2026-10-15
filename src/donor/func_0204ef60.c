/* compiler: 2.0/sp1p5  */
/* GXx_SetMasterBrightness_ from projets/blue-dragon-awakened-shadow/src/auto/GXx_SetMasterBrightness_.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
void func_0204ef60(s16 *arg0, s32 arg1) {
    if (arg1 == 0) {
        *arg0 = 0;
        return;
    }
    if (arg1 > 0) {
        *arg0 = arg1 | 0x4000;
        return;
    }
    *arg0 = (0 - arg1) | 0x8000;
}
