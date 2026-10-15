/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G2S_GetBG2CharPtr from projets/blue-dragon-awakened-shadow/src/donor/G2S_GetBG2CharPtr.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
void *func_0205007c(void) {
    s32 bgMode = (*(vu32 *) 0x04001000) & 7;
    u32 bgcnt  = (*(vu16 *) ((0x04001000) | 0xc));

    if (bgMode < 5 || !(bgcnt & 0x80)) {
        u32 block = (bgcnt & 0x3c) >> 2;
        return (void *) (0x6200000 + block * 0x4000);
    }
    return 0;
}
