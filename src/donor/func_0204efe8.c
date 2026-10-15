/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_VRAMCNT_SetLCDC_ from projets/blue-dragon-awakened-shadow/src/donor/GX_VRAMCNT_SetLCDC_.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef volatile u8 vu8;
void func_0204efe8(u32 lcdc) {
    if (lcdc & 0x001) {
        (*(vu8 *) 0x04000240) = 0x80;
    }
    if (lcdc & 0x002) {
        (*(vu8 *) 0x04000241) = 0x80;
    }
    if (lcdc & 0x004) {
        (*(vu8 *) 0x04000242) = 0x80;
    }
    if (lcdc & 0x008) {
        (*(vu8 *) 0x04000243) = 0x80;
    }
    if (lcdc & 0x010) {
        (*(vu8 *) 0x04000244) = 0x80;
    }
    if (lcdc & 0x020) {
        (*(vu8 *) 0x04000245) = 0x80;
    }
    if (lcdc & 0x040) {
        (*(vu8 *) 0x04000246) = 0x80;
    }
    if (lcdc & 0x080) {
        (*(vu8 *) 0x04000248) = 0x80;
    }
    if (lcdc & 0x100) {
        (*(vu8 *) 0x04000249) = 0x80;
    }
}
