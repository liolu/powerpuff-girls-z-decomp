/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002af0 from projets/blue-dragon-awakened-shadow/src/donor/func_02002af0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
extern s32 func_0204ec80(void);
s32 func_0204ec80(void) {
    while ((*(vu16 *) 0x040002B0) & 0x8000) {
    }
    return (s32) (((*(vu32 *) 0x040002B4) + (1 << 9)) >> 10);
}
