/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020699dc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_charcanvas.c (license: none),
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
void func_02061c50(void *chr, int x, int y, int w, int h, u32 pattern, u32 bpp);
void func_02062440(UnkCharCanvas *cc, int cl, int x, int y, int w, int h) {
    int cx;
    int dh;
    int cy;
    int xEnd;
    int yEnd;
    int cyEnd;
    u32 row;
    int cxStart;
    int charSize;
    int stride;
    int cxEnd;
    u32 chr;
    int bpp;

    bpp  = cc->unk_0c;
    xEnd = x + w;
    yEnd = y + h;
    {
        u32 pat;

        if (bpp == 4) {
            pat = cl | (cl << 4);
            pat |= pat << 8;
            cl = pat | (pat << 16);
        } else {
            pat = cl | (cl << 8);
            cl  = pat | (pat << 16);
        }
    }
    cxEnd    = (xEnd + 7) & ~7;
    cy       = y & ~7;
    cyEnd    = (yEnd + 7) & ~7;
    cxStart  = x & ~7;
    charSize = (8 * 8 * (bpp) / 8);
    row      = (u32) cc->unk_00 + charSize * (cy / 8 * cc->unk_10.unk_00 + cxStart / 8);
    stride   = cc->unk_10.unk_00 * charSize;

    for (; cy < cyEnd; cy += 8) {
        int dy = (cy < y) ? y - cy : 0;

        dh  = ((yEnd - cy > 8) ? 8 : yEnd - cy) - dy;
        chr = row;
        for (cx = cxStart; cx < cxEnd; cx += 8) {
            int dx = (cx < x) ? x - cx : 0;
            int dw = ((xEnd - cx > 8) ? 8 : xEnd - cx) - dx;

            func_02061c50((void *) chr, dx, dy, dw, dh, cl, bpp);
            chr += charSize;
        }
        row += stride;
    }
}
