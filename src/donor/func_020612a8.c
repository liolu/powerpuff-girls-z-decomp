/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200d8b4 from projets/livly-garden/src/donor/func_0200d8b4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
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
extern UnkBinBlockHeader *func_020612a8(UnkBinFileHeader *header, u32 kind);
UnkBinBlockHeader *func_020612a8(UnkBinFileHeader *header, u32 kind) {
    UnkBinBlockHeader *block = (UnkBinBlockHeader *) ((u32) header + header->unk_0c);
    u16 i;

    for (i = 0; i < header->unk_0e; i++) {
        if (block->unk_00 == kind) {
            return block;
        }
        block = (UnkBinBlockHeader *) ((u32) block + block->unk_04);
    }
    return 0;
}
