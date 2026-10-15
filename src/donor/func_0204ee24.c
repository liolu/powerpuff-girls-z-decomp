/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02003178 from projets/blue-dragon-awakened-shadow/src/donor/func_02003178.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
s32 func_0204ee24(BOOL enable) {
    s32 prev = (*(vu16 *) 0x04000004) & 8;
    if (enable) {
        (*(vu16 *) 0x04000004) |= 8;
    } else {
        (*(vu16 *) 0x04000004) &= ~8;
    }
    return prev;
}
