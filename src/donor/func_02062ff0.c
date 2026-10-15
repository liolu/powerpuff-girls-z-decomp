/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Text_AlignAnchor from https://github.com/Yokimitsuro/khdays-decomp libs/nns/g2d/calls/Text_AlignAnchor.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
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
typedef struct NNSG2dTextRect {
    int width;
    int height;
} NNSG2dTextRect;
typedef struct {
    signed char dx, dy;
} AxisOffset;
typedef struct {
    int w, h;
} TextDimsAlias;
extern NNSG2dTextRect func_02061aa8(const NNSG2dFont *pFont, int hSpace, int vSpace, const void *txt);
extern void func_02062e88(int *ctx, int x, int y, int w, int mode, int flags, int p6, AxisOffset off);
void func_02062ff0(int *ctx, int x, int y, int mode, int flags, int p6, AxisOffset off) {
    NNSG2dTextRect work;
    NNSG2dTextRect dims;
    TextDimsAlias hview;
    int t;

    dims  = func_02061aa8((const NNSG2dFont *) ctx[1], ctx[2], ctx[3], (const void *) p6);
    hview = *(TextDimsAlias *) &dims;
    work  = dims;
    if (flags & 0x10) {
        t = -(hview.w + 1) / 2;
        x = t * off.dx + x;
        y = t * off.dy + y;
    } else if (flags & 0x20) {
        x = -hview.w * off.dx + x;
        y = -hview.w * off.dy + y;
    }
    if (flags & 2) {
        t = -(work.height + 1) / 2;
        x = t * -off.dy + x;
        y = t * off.dx + y;
    } else if (flags & 4) {
        t = -work.height;
        x = t * -off.dy + x;
        y = t * off.dx + y;
    }
    func_02062e88(ctx, x, y, work.width, mode, flags, p6, off);
}
