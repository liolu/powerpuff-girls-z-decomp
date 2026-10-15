/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02068f68 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_font.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef struct UnkFontCodeMap {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    struct UnkFontCodeMap *unk_08;
    u16 unk_0c[1];
} UnkFontCodeMap;
typedef struct UnkCMapScanEntry {
    u16 unk_00;
    u16 unk_02;
} UnkCMapScanEntry;
typedef struct UnkCMapScan {
    u16 unk_00;
    UnkCMapScanEntry unk_02[1];
} UnkCMapScan;
u16 func_020617e0(UnkFontCodeMap *cmap, u16 c) {
    u16 index = 0xffff;

    switch (cmap->unk_04) {
        case 0:
            index = (u16) (c - cmap->unk_00 + cmap->unk_0c[0]);
            break;
        case 1:
            index = cmap->unk_0c[c - cmap->unk_00];
            break;
        case 2: {
            UnkCMapScan *ws      = (UnkCMapScan *) cmap->unk_0c;
            UnkCMapScanEntry *st = &ws->unk_02[0];
            UnkCMapScanEntry *ed = &ws->unk_02[ws->unk_00 - 1];

            while (st <= ed) {
                UnkCMapScanEntry *md = st + (ed - st) / 2;

                if (md->unk_00 < c) {
                    st = md + 1;
                } else if (c < md->unk_00) {
                    ed = md - 1;
                } else {
                    index = md->unk_02;
                    break;
                }
            }
        } break;
    }
    return index;
}
