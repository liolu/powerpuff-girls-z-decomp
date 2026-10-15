/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G2_GetBG2ScrPtr from projets/blue-dragon-awakened-shadow/src/donor/G2_GetBG2ScrPtr.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
void *func_0204fd94(void) {
    u32 bgMode = (*(vu32 *) 0x04000000) & 7;
    u32 bgcnt  = (*(vu16 *) ((0x04000000) | 0xc));
    u32 offset = (((*(vu32 *) 0x04000000) & 0x38000000) >> 27) * 0x10000;
    u32 block  = (bgcnt & 0x1f00) >> 8;

    switch (bgMode) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            return (void *) (0x6000000 + offset + block * 0x800);
        case 5:
            if (bgcnt & 0x80) {
                return (void *) (0x6000000 + block * 0x4000);
            } else {
                return (void *) (0x6000000 + offset + block * 0x800);
            }
        case 6:
            return (void *) 0x6000000;
        default:
            return 0;
    }
}
