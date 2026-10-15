/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020696fc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_charcanvas.c (license: none),
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
u32 func_02061b3c(u32 x, u32 y, int areaW, int areaH, int wShift, int hShift);
static inline u8 UnkCanvasFontHeight(const UnkFont *font) {
    return font->unk_00->unk_08->unk_01;
}
static inline u8 UnkCanvasFontWidth(const UnkFont *font) {
    return font->unk_00->unk_08->unk_00;
}
static inline u8 UnkCanvasFontBpp(const UnkFont *font) {
    return font->unk_00->unk_08->unk_06;
}
static inline int UnkCanvasCharSize(const UnkCharCanvas *cc) {
    return (8 * 8 * (cc->unk_0c) / 8);
}
void func_02061d88(UnkGlyphCharParam *i);
void func_02062160(UnkCharCanvas *pCC, UnkFont *pFont, int x, int y, int cl, UnkGlyph *pGlyph) {
    int ofs_x_base;
    int ofs_x;
    int ofs_y;
    int ofs_x_end;
    int ofs_y_end;
    int cx, cx_base;
    int cy;
    u8 glyphWidth;
    u8 charHeight;
    int charSize;
    u16 *mapTable;

    charSize = UnkCanvasCharSize(pCC);
    mapTable = (u16 *) (pCC->unk_10.unk_00);

    {
        int chara_x_num;
        int chara_y_num;
        const unsigned int areaWidth      = (unsigned int) pCC->unk_04;
        const unsigned int areaHeight     = (unsigned int) pCC->unk_08;
        const UnkCharWidths *const pWidth = pGlyph->unk_00;

        u32 chara_x_begin;
        u32 chara_x_last;
        u32 chara_y_begin;
        u32 chara_y_last;

        glyphWidth = pWidth->unk_01;
        charHeight = UnkCanvasFontHeight(pFont);

        if (glyphWidth <= 0) {
            return;
        }

        if ((x + glyphWidth < 0) || (y + charHeight) < 0) {
            return;
        }

        chara_x_begin = (x <= 0) ? 0 : ((u32) x / 8);
        chara_y_begin = (y <= 0) ? 0 : ((u32) y / 8);

        chara_x_last = (u32) (x + glyphWidth + (8 - 1)) / 8;
        if (chara_x_last >= areaWidth) {
            chara_x_last = areaWidth;
        }
        chara_y_last = (u32) (y + charHeight + (8 - 1)) / 8;
        if (chara_y_last >= areaHeight) {
            chara_y_last = areaHeight;
        }

        chara_x_num = (int) (chara_x_last - chara_x_begin);
        chara_y_num = (int) (chara_y_last - chara_y_begin);

        if ((chara_x_num < 0) || (chara_y_num < 0)) {
            return;
        }

        cx_base = (int) chara_x_begin;
        cy      = (int) chara_y_begin;

        ofs_x_base = (x < 0) ? x : x & 0x7;
        ofs_y      = (y < 0) ? y : y & 0x7;
        ofs_x_end  = ofs_x_base - 8 * chara_x_num;
        ofs_y_end  = ofs_y - 8 * chara_y_num;
    }

    {
        UnkGlyphCharParam i;
        u8 *const pCharBase = pCC->unk_00;
        UnkCharCanvasLayout p;

        i.unk_04 = pGlyph->unk_04;
        i.unk_10 = glyphWidth;
        i.unk_14 = charHeight;
        i.unk_24 = (u32) (cl - 1);
        i.unk_1c = UnkCanvasFontBpp(pFont);
        i.unk_20 = pCC->unk_0c;
        i.unk_18 = UnkCanvasFontWidth(pFont) * i.unk_1c;

        p.unk_00 = pCC->unk_10.unk_00;

        {
            const u32 areaWidth       = (u32) pCC->unk_04;
            const u32 areaHeight      = (u32) pCC->unk_08;
            const u32 baseWidthShift  = p.unk_obj.unk_00;
            const u32 baseHeightShift = p.unk_obj.unk_08;

            for (; ofs_y > ofs_y_end; ofs_y -= 8) {
                i.unk_0c = ofs_y;
                cx       = cx_base;
                for (ofs_x = ofs_x_base; ofs_x > ofs_x_end; ofs_x -= 8) {
                    const unsigned int iChar =
                        func_02061b3c((u32) cx, (u32) cy, areaWidth, areaHeight, baseWidthShift, baseHeightShift);

                    i.unk_08 = ofs_x;
                    i.unk_00 = pCharBase + iChar * charSize;

                    func_02061d88(&i);
                    cx++;
                }
                cy++;
            }
        }
    }
}
