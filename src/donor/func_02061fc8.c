/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02069564 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_charcanvas.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef char s8;
typedef struct UnkCharWidths {
    s8 unk_00;
    u8 unk_01;
    s8 unk_02;
} UnkCharWidths;
typedef struct UnkFontGlyph {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    s8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08[1];
} UnkFontGlyph;
typedef struct UnkFontWidth {
    u16 unk_00;
    u16 unk_02;
    struct UnkFontWidth *unk_04;
    UnkCharWidths unk_08[1];
} UnkFontWidth;
typedef struct UnkFontCodeMap {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    struct UnkFontCodeMap *unk_08;
    u16 unk_0c[1];
} UnkFontCodeMap;
typedef struct UnkFontInfo {
    u8 unk_00;
    s8 unk_01;
    u16 unk_02;
    UnkCharWidths unk_04;
    u8 unk_07;
    UnkFontGlyph *unk_08;
    UnkFontWidth *unk_0c;
    UnkFontCodeMap *unk_10;
} UnkFontInfo;
typedef u16 (*UnkCharSplitter)(const void **str);
typedef struct UnkFont {
    UnkFontInfo *unk_00;
    UnkCharSplitter unk_04;
} UnkFont;
typedef struct UnkGlyph {
    UnkCharWidths *unk_00;
    u8 *unk_04;
} UnkGlyph;
typedef void (*UnkDrawGlyphFunc)(struct UnkCharCanvas *cc, UnkFont *font, int x, int y, int cl, UnkGlyph *glyph);
typedef void (*UnkClearFunc)(struct UnkCharCanvas *cc, int cl);
typedef void (*UnkClearAreaFunc)(struct UnkCharCanvas *cc, int cl, int x, int y, int w, int h);
typedef struct UnkCharCanvasVTable {
    UnkDrawGlyphFunc unk_00;
    UnkClearFunc unk_04;
    UnkClearAreaFunc unk_08;
} UnkCharCanvasVTable;
typedef union UnkCharCanvasLayout {
    int unk_00;
    struct {
        u32 unk_00 : 8;
        u32 unk_08 : 8;
        u32 unk_10 : 16;
    } unk_obj;
} UnkCharCanvasLayout;
typedef struct UnkCharCanvas {
    u8 *unk_00;
    int unk_04;
    int unk_08;
    u8 unk_0c;
    UnkCharCanvasLayout unk_10;
    const UnkCharCanvasVTable *unk_14;
} UnkCharCanvas;
typedef struct UnkGlyphCharParam {
    void *unk_00;
    u8 *unk_04;
    int unk_08;
    int unk_0c;
    int unk_10;
    int unk_14;
    int unk_18;
    int unk_1c;
    int unk_20;
    int unk_24;
} UnkGlyphCharParam;
void func_02061d88(UnkGlyphCharParam *i);
void func_02061fc8(UnkCharCanvas *cc, UnkFont *font, int x, int y, int cl, UnkGlyph *glyph) {
    UnkFontGlyph *cglp = font->unk_00->unk_08;
    int areaW          = cc->unk_04;
    int areaH          = cc->unk_08;
    int glyphW         = glyph->unk_00->unk_01;
    u8 *charBase       = cc->unk_00;
    int charSize       = (8 * 8 * (cc->unk_0c) / 8);
    int glyphH         = cglp->unk_01;
    int cx0;
    UnkGlyphCharParam param;
    int px;
    int ch;
    int xEnd;
    u32 cx1;
    int cw;
    int yEnd;
    int cy0;
    u8 *dst;
    u32 cy1;
    int rowSkip;

    if (glyphW == 0) {
        return;
    }
    if (x + glyphW < 0) {
        return;
    }
    if (y + glyphH < 0) {
        return;
    }
    cx0 = (x <= 0) ? 0 : (u32) x / 8;
    cy0 = (y <= 0) ? 0 : (u32) y / 8;
    cx1 = (u32) (x + glyphW + 7) / 8;
    if (areaW <= cx1) {
        cx1 = areaW;
    }
    cy1 = (u32) (y + glyphH + 7) / 8;
    if (areaH <= cy1) {
        cy1 = areaH;
    }
    cw = cx1 - cx0;
    ch = cy1 - cy0;
    if (cw < 0 || ch < 0) {
        return;
    }

    if (x >= 0) {
        x &= 7;
    }
    dst     = charBase + charSize * (cc->unk_10.unk_00 * cy0 + cx0);
    rowSkip = charSize * (cc->unk_10.unk_00 - cw);
    if (y >= 0) {
        y &= 7;
    }
    param.unk_04 = glyph->unk_04;
    xEnd         = x - cw * 8;
    param.unk_10 = glyphW;
    param.unk_24 = cl - 1;
    param.unk_14 = glyphH;
    yEnd         = y - ch * 8;
    param.unk_1c = font->unk_00->unk_08->unk_06;
    param.unk_20 = cc->unk_0c;
    param.unk_18 = param.unk_1c * font->unk_00->unk_08->unk_00;
    for (; y > yEnd; y -= 8) {
        param.unk_0c = y;
        for (px = x; px > xEnd; px -= 8) {
            param.unk_00 = dst;
            param.unk_08 = px;
            func_02061d88(&param);
            dst += charSize;
        }
        dst += rowSkip;
    }
}
