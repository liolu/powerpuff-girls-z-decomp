/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201cf28 from projets/heroes-of-mana/src/donor/func_0201cf28.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
typedef enum MbSegmentType {
    MB_SEG_ARM9STATIC = 0,
    MB_SEG_ARM7STATIC,
    MB_SEG_ROMHEADER
} MbSegmentType;
extern const MbSegmentType data_02076e40[(3)];
extern BOOL func_0205d9c4(u8 segment_no, u32 address, u32 size);
extern const MbSegmentType data_02076e40[(3)];
BOOL func_0205d9c4(u8 segment_no, u32 address, u32 size) {
    MbSegmentType seg_type;

    ((void) 0);

    seg_type = data_02076e40[segment_no];

    switch (seg_type) {
        case MB_SEG_ROMHEADER:
            if (address >= (0x02000000 + 0x007ffe00) && address + size <= (0x02000000 + 0x007ffe00) + (0x160)) {
                return 1;
            }
            break;
        case MB_SEG_ARM9STATIC:
            if (address >= (0x02000000) && address + size <= (0x02000000 + 0x002c0000)) {
                return 1;
            }
            break;
        case MB_SEG_ARM7STATIC:
            if (address >= (0x02000000 + 0x002c0000) && address + size <= (0x02000000 + 0x00300000)) {
                return 1;
            } else if (address >= (0x02000000) && address + size <= (0x02000000 + 0x00300000)) {
                return 1;
            }
            break;
        default:
            return 0;
    }

    return 0;
}
