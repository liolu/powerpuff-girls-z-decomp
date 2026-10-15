/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dFontGetStringWidth from https://github.com/Yokimitsuro/khdays-decomp libs/nns/g2d/calls/NNSi_G2dFontGetStringWidth.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed char s8;
typedef struct NNSG2dCharWidths {
    s8 left;
    u8 glyphWidth;
    s8 charWidth;
} NNSG2dCharWidths;
typedef struct NNSG2dFontCodeMap {
    u16 ccodeBegin;
    u16 ccodeEnd;
    u16 mappingMethod;
    u16 reserved;
    struct NNSG2dFontCodeMap *pNext;
    u16 mapInfo[];
} NNSG2dFontCodeMap;
typedef struct NNSG2dFontGlyph {
    u8 cellWidth;
    u8 cellHeight;
    u16 cellSize;
    s8 baselinePos;
    u8 maxCharWidth;
    u8 bpp;
    u8 flags;
    u8 glyphTable[];
} NNSG2dFontGlyph;
typedef struct NNSG2dFontWidth {
    u16 indexBegin;
    u16 indexEnd;
    struct NNSG2dFontWidth *pNext;
    NNSG2dCharWidths widthTable[];
} NNSG2dFontWidth;
typedef struct NNSG2dFontInformation {
    u8 fontType;
    s8 linefeed;
    u16 alterCharIndex;
    NNSG2dCharWidths defaultWidth;
    u8 encoding;
    NNSG2dFontGlyph *pGlyph;
    NNSG2dFontWidth *pWidth;
    NNSG2dFontCodeMap *pMap;
} NNSG2dFontInformation;
typedef u16 (*NNSiG2dSplitCharCallback)(const void **ppChar);
typedef struct NNSG2dFont {
    NNSG2dFontInformation *pRes;
    NNSiG2dSplitCharCallback cbCharSpliter;
} NNSG2dFont;
extern u16 func_02061968(const NNSG2dFont *pFont, u16 c);
extern const NNSG2dCharWidths *func_020619b0(const NNSG2dFont *pFont, u16 idx);
inline NNSiG2dSplitCharCallback NNSi_G2dFontGetSpliter(const NNSG2dFont *pFont) {
    return pFont->cbCharSpliter;
}
inline u16 NNS_G2dFontGetGlyphIndex(const NNSG2dFont *pFont, u16 c) {
    const u16 idx = func_02061968(pFont, c);
    return (idx != 0xFFFF) ? idx : pFont->pRes->alterCharIndex;
}
inline const NNSG2dCharWidths *NNS_G2dFontGetCharWidths(const NNSG2dFont *pFont, u16 c) {
    u16 iGlyph;
    iGlyph = NNS_G2dFontGetGlyphIndex(pFont, c);
    return func_020619b0(pFont, iGlyph);
}
inline int NNS_G2dFontGetCharWidth(const NNSG2dFont *pFont, u16 c) {
    const NNSG2dCharWidths *pWidths;
    pWidths = NNS_G2dFontGetCharWidths(pFont, c);
    return pWidths->charWidth;
}
extern u16 func_02061968(const NNSG2dFont *pFont, u16 c);
extern const NNSG2dCharWidths *func_020619b0(const NNSG2dFont *pFont, u16 idx);
int func_020619fc(const NNSG2dFont *pFont, int hSpace, const void *str, const void **pPos) {
    int width       = 0;
    const void *pos = str;
    u16 c;
    NNSiG2dSplitCharCallback getNextChar;

    getNextChar = NNSi_G2dFontGetSpliter(pFont);

    while ((c = getNextChar((const void **) &pos)) != 0) {
        if (c == '\n') {
            break;
        }

        width += NNS_G2dFontGetCharWidth(pFont, c) + hSpace;
    }

    if (pPos != ((void *) 0)) {
        *pPos = (c == '\n') ? pos : ((void *) 0);
    }
    if (width > 0) {
        width -= hSpace;
    }
    return width;
}
