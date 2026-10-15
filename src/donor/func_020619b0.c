/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020690a8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_font.c (license: none), reused
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
extern UnkCharWidths *func_020619b0(UnkFont *font, u16 index);
UnkCharWidths *func_020619b0(UnkFont *font, u16 index) {
    UnkFontWidth *cwdh;

    for (cwdh = font->unk_00->unk_0c; cwdh != 0; cwdh = cwdh->unk_04) {
        if (cwdh->unk_00 <= index && index <= cwdh->unk_02) {
            return &cwdh->unk_08[index - cwdh->unk_00];
        }
    }
    return &font->unk_00->unk_04;
}
