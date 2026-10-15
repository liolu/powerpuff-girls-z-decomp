/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02069d94 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_charcanvas.c (license: none),
 * reused by tools/donor_match.py */
typedef signed long intptr_t;
typedef unsigned long uintptr_t;
typedef intptr_t ptrdiff_t;
typedef unsigned long size_t;
typedef unsigned short wchar_t;
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef long long s64;
typedef int s32;
typedef short s16;
typedef char s8;
typedef float f32;
typedef double f64;
typedef volatile u64 vu64;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef volatile u8 vu8;
typedef volatile s64 vs64;
typedef volatile s32 vs32;
typedef volatile s16 vs16;
typedef volatile s8 vs8;
typedef volatile f32 vf32;
typedef volatile f64 vf64;
typedef s32 BOOL;
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
extern u16 func_02061968(UnkFont *font, u16 c);
extern UnkCharWidths *func_020619b0(UnkFont *font, u16 index);
extern BOOL func_02069ee4(void *resource, UnkFontInfo **info);
extern void func_0206a038(void *header);
extern u16 func_0206a174(const void **str);
extern u16 func_0206a188(const void **str);
extern u16 func_0206a204(const void **str);
extern u16 func_0206a258(const void **str);
struct UnkCharCanvas;
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
typedef struct UnkBitReader {
    u8 *unk_00;
    s8 unk_04;
    u8 unk_05;
} UnkBitReader;
typedef struct UnkChar8bppRow {
    u32 unk_00;
    u32 unk_04;
} UnkChar8bppRow;
extern void MI_CpuFill(u32 value, void *dest, u32 size);
extern u32 func_0206a114(UnkBitReader *reader, int nBits);
extern void func_02069d6c(UnkCharCanvas *cc, void *charBase, int areaW, int areaH, int bpp, const UnkCharCanvasVTable *vtable,
                          u32 param);
extern const u8 data_020ba560[4][4][2];
extern const u16 data_020ba580[4][4][2];
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    MI_CpuFill(data, dest, size);
}
// clang-format off
static inline u32 CountLeadingZeros(u32 x) {
    asm { clz x, x }
    return x;
}
// clang-format on
static inline const u8 *GetObjShiftWH(int w, int h) {
    int sw = (w >= 8) ? 3 : 31 - CountLeadingZeros(w);
    int sh = (h >= 8) ? 3 : 31 - CountLeadingZeros(h);

    return data_020ba560[sh][sw];
}
static inline u32 GetLowBits(u32 v, int shift) {
    return v & ~(0xffffffff << shift);
}
static inline u32 GetHighBits(u32 v, int shift) {
    return v & (0xffffffff << shift);
}
u32 func_020690f4(u32 x, u32 y, int areaW, int areaH, int wShift, int hShift);
void func_020691ec(void *chr, int x, int y, int w, int h, u32 pattern, u32 bpp);
static inline int UnkCanvasMin(int a, int b) {
    return (a <= b) ? a : b;
}
static inline int UnkCanvasMax(int a, int b) {
    return (a >= b) ? a : b;
}
static inline void UnkCanvasReaderInit(UnkBitReader *reader, const void *src) {
    reader->unk_04 = 0;
    reader->unk_00 = (u8 *) src;
    reader->unk_05 = 0;
}
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
void func_02069324(UnkGlyphCharParam *i);
void func_02069564(UnkCharCanvas *cc, UnkFont *font, int x, int y, int cl, UnkGlyph *glyph);
void func_020696fc(UnkCharCanvas *pCC, UnkFont *pFont, int x, int y, int cl, UnkGlyph *pGlyph);
void func_0206990c(UnkCharCanvas *cc, int cl);
void func_0206995c(UnkCharCanvas *cc, int cl);
void func_020699dc(UnkCharCanvas *cc, int cl, int x, int y, int w, int h);
void func_02069b78(UnkCharCanvas *cc, int cl, int x, int y, int w, int h);
extern const UnkCharCanvasVTable data_020ba548;
extern const UnkCharCanvasVTable data_020ba53c;
extern const UnkCharCanvasVTable data_020ba554;
void func_02069d6c(UnkCharCanvas *cc, void *charBase, int areaW, int areaH, int bpp, const UnkCharCanvasVTable *vtable,
                   u32 param);
int func_020627f8(UnkCharCanvas *cc, UnkFont *font, int x, int y, int cl, u16 c) {
    UnkGlyph glyph;
    u16 index = func_02061968(font, c);
    UnkFontGlyph *cglp;

    if (index == 0xffff) {
        index = font->unk_00->unk_02;
    }
    glyph.unk_00 = func_020619b0(font, index);
    glyph.unk_04 = font->unk_00->unk_08->unk_08 + index * font->unk_00->unk_08->unk_02;

    cglp = font->unk_00->unk_08;
    switch (cglp->unk_07) {
        case 0:
        case 7:
            x += glyph.unk_00->unk_00;
            break;
        case 1:
        case 2:
            x -= cglp->unk_00;
            y += glyph.unk_00->unk_00;
            break;
        case 3:
        case 4:
            x -= glyph.unk_00->unk_00 + glyph.unk_00->unk_01;
            y -= cglp->unk_01;
            break;
        case 5:
        case 6:
            y -= glyph.unk_00->unk_00 + cglp->unk_01;
            break;
    }

    cc->unk_14->unk_00(cc, font, x, y, cl, &glyph);
    return glyph.unk_00->unk_02;
}
void func_02069eb8(UnkCharCanvas *cc, void *charBase, int areaW, int areaH, int bpp);
void unkfunc_unused_20(UnkCharCanvas *cc, void *charBase, int areaW, int areaH, int bpp);
void unkfunc_unused_21(UnkCharCanvas *cc, void *charBase, int areaW, int areaH, int bpp);
void unkfunc_unused_22(u16 *attr, int w, int h);
