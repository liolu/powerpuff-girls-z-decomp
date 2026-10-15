/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02003230 from projets/blue-dragon-awakened-shadow/src/donor/func_02003230.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_0207eebc;
extern u16 data_0208e01c;
extern u16 data_0207eebc;
extern u16 data_0208e01c;
void func_0204eedc(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = (*(u32 *) ((0x04000000) | 0x0));

    data_0208e01c = dispMode;
    if (!data_0207eebc) {
        dispMode = 0;
    }
    (*(u32 *) ((0x04000000) | 0x0)) = (cnt & ~0xf000f) | (dispMode << 16) | bgMode | (bg0_2d3d << 3);
    if (data_0208e01c == 0) {
        data_0207eebc = 0;
    }
}
