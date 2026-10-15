/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206a038 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_fontres.c (license: none),
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
extern void func_02063268(void *header);
typedef struct UnkBinFileHeader {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
} UnkBinFileHeader;
typedef struct UnkBinBlockHeader {
    u32 unk_00;
    u32 unk_04;
} UnkBinBlockHeader;
typedef struct UnkFontInfoBlock {
    UnkBinBlockHeader unk_00;
    UnkFontInfo unk_08;
} UnkFontInfoBlock;
typedef struct UnkFontWidthBlock {
    UnkBinBlockHeader unk_00;
    UnkFontWidth unk_08;
} UnkFontWidthBlock;
typedef struct UnkFontCodeMapBlock {
    UnkBinBlockHeader unk_00;
    UnkFontCodeMap unk_08;
} UnkFontCodeMapBlock;
void func_02063268(void *resource) {
    UnkBinFileHeader *header = (UnkBinFileHeader *) resource;
    UnkBinBlockHeader *block = (UnkBinBlockHeader *) ((u32) header + header->unk_0c);
    int i;

    for (i = 0; i < header->unk_0e; i++) {
        switch (block->unk_00) {
            case 0x46494e46: {
                UnkFontInfo *finf = &((UnkFontInfoBlock *) block)->unk_08;

                finf->unk_08 = (UnkFontGlyph *) ((u32) finf->unk_08 + (u32) header);
                if (finf->unk_0c != 0) {
                    finf->unk_0c = (UnkFontWidth *) ((u32) finf->unk_0c + (u32) header);
                }
                if (finf->unk_10 != 0) {
                    finf->unk_10 = (UnkFontCodeMap *) ((u32) finf->unk_10 + (u32) header);
                }
            } break;
            case 0x43474c50:
                break;
            case 0x43574448: {
                UnkFontWidth *cwdh = &((UnkFontWidthBlock *) block)->unk_08;

                if (cwdh->unk_04 != 0) {
                    cwdh->unk_04 = (UnkFontWidth *) ((u32) cwdh->unk_04 + (u32) header);
                }
            } break;
            case 0x434d4150: {
                UnkFontCodeMap *cmap = &((UnkFontCodeMapBlock *) block)->unk_08;

                if (cmap->unk_08 != 0) {
                    cmap->unk_08 = (UnkFontCodeMap *) ((u32) cmap->unk_08 + (u32) header);
                }
            } break;
        }
        block = (UnkBinBlockHeader *) ((u32) block + block->unk_04);
    }
}
