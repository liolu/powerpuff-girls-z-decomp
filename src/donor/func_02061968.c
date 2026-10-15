/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02069060 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_font.c (license: none), reused
 * by tools/donor_match.py */
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
extern u16 func_02061968(UnkFont *font, u16 c);
u16 func_020617e0(UnkFontCodeMap *cmap, u16 c);
u16 func_02061968(UnkFont *font, u16 c) {
    UnkFontCodeMap *cmap;

    for (cmap = font->unk_00->unk_10; cmap != 0; cmap = cmap->unk_08) {
        if (cmap->unk_00 <= c && c <= cmap->unk_02) {
            return func_020617e0(cmap, c);
        }
    }
    return 0xffff;
}
