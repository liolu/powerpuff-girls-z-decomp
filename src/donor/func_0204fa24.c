/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_SetBankForSubBGExtPltt from projets/blue-dragon-awakened-shadow/src/donor/GX_SetBankForSubBGExtPltt.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u8 vu8;
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clearImage;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 subBg;
    u16 subObj;
    u16 subBgExtPltt;
    u16 subObjExtPltt;
} UnkGxVramState;
extern UnkGxVramState data_0208e020;
extern UnkGxVramState data_0208e020;
extern void func_0204efe8(u32 lcdc);
void func_0204fa24(s32 subBgExtPltt) {
    data_0208e020.lcdc         = ~subBgExtPltt & (data_0208e020.lcdc | data_0208e020.subBgExtPltt);
    data_0208e020.subBgExtPltt = subBgExtPltt;

    switch (subBgExtPltt) {
        case 0x080:
            (*(u32 *) ((0x04001000) | 0x0)) |= 0x40000000;
            (*(vu8 *) 0x04000248) = 0x82;
            break;
        case 0x000:
            (*(u32 *) ((0x04001000) | 0x0)) &= ~0x40000000;
            break;
    }
    func_0204efe8(data_0208e020.lcdc);
}
