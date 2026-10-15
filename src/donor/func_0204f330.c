/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_SetBankForOBJ from projets/blue-dragon-awakened-shadow/src/donor/GX_SetBankForOBJ.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
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
void func_0204f330(s32 obj) {
    data_0208e020.lcdc = ~obj & (data_0208e020.lcdc | data_0208e020.obj);
    data_0208e020.obj  = obj;

    switch (obj) {
        case 0x03:
            (*(vu8 *) 0x04000241) = 0x8a;
        case 0x01:
            (*(vu8 *) 0x04000240) = 0x82;
        case 0x00:
            break;
        case 0x02:
            (*(vu8 *) 0x04000241) = 0x82;
            break;
        case 0x70:
            (*(vu8 *) 0x04000246) = 0x9a;
        case 0x30:
            (*(vu8 *) 0x04000245) = 0x92;
        case 0x10:
            (*(vu8 *) 0x04000244) = 0x82;
            break;
        case 0x50:
            (*(vu8 *) 0x04000246) = 0x92;
            (*(vu8 *) 0x04000244) = 0x82;
            break;
        case 0x60:
            (*(vu8 *) 0x04000246) = 0x8a;
        case 0x20:
            (*(vu8 *) 0x04000245) = 0x82;
            break;
        case 0x40:
            (*(vu8 *) 0x04000246) = 0x82;
            break;
        default:
            break;
    }
    func_0204efe8(data_0208e020.lcdc);
}
