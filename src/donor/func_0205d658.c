/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201cbbc from projets/heroes-of-mana/src/donor/func_0201cbbc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern void func_02053574(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    char title_name[12];
    u32 game_code;
    u16 maker_code;
    u8 machine_code;
    u8 rom_type;
    u8 rom_size;
    u8 reserved_A[9];
    u8 soft_version;
    u8 comp_arm9_boot_area : 1;
    u8 comp_arm7_boot_area : 1;
    u8 inspectCard : 1;
    u8 disableClearMemoryPad : 1;
    u8 : 0;
    u32 main_rom_offset;
    void *main_entry_address;
    void *main_ram_address;
    u32 main_size;
    u32 sub_rom_offset;
    void *sub_entry_address;
    void *sub_ram_address;
    u32 sub_size;
    u32 fnt_offset;
    u32 fnt_size;
    u32 fat_offset;
    u32 fat_size;
    u32 main_ovt_offset;
    u32 main_ovt_size;
    u32 sub_ovt_offset;
    u32 sub_ovt_size;
    u8 reserved_A2[32];
    u32 own_size;
    u8 reserved_B[60];
    u8 nintendo_logo[0x9c];
    u16 nintendo_logo_crc16;
    u16 header_crc16;
    u8 reserved_C[32];
} RomHeader;
typedef enum MbSegmentType {
    MB_SEG_ARM9STATIC = 0,
    MB_SEG_ARM7STATIC,
    MB_SEG_ROMHEADER
} MbSegmentType;
typedef struct MbDownloadFileInfoHeader {
    u32 arm9EntryAddr;
    u32 arm7EntryAddr;
    u32 padding;
} MbDownloadFileInfoHeader;
typedef struct MbSegmentInfo {
    u32 recv_addr;
    u32 load_addr;
    u32 size;
    u32 target : 1;
    u32 rsv : 31;
} MbSegmentInfo;
typedef struct {
    MbDownloadFileInfoHeader header;
    MbSegmentInfo seg[(3)];
    u32 auth_code[(136) / sizeof(u32)];
    u32 reserved[32 / sizeof(u32)];
} MBDownloadFileInfo;
extern const MbSegmentType data_02076e40[(3)];
extern const MbSegmentType data_02076e40[(3)];
extern void func_0205d658(MbDownloadFileInfoHeader *mbdlFileInfop, const void *buf);
extern void func_0205d6cc(const RomHeader *mbRomHeaderp, const MbSegmentType *loadSegListp, MbSegmentInfo *seg_infop,
                          u32 *child_recv_buff_addr);
void func_0205d658(MbDownloadFileInfoHeader *mbdlFileInfop, const void *buf) {
    const RomHeader *mbRomHeaderp;
    const MbSegmentType *loadSegListp;
    MbSegmentInfo *seg_infop;
    int seg_num;
    const u16 *auth_code;
    u32 child_recv_buff_addr = (0x02000000 + 0x002c0000);

    mbRomHeaderp = (const RomHeader *) buf;
    auth_code    = (const u16 *) ((u32) buf + (0x160));

    mbdlFileInfop->arm9EntryAddr = (u32) mbRomHeaderp->main_entry_address;
    mbdlFileInfop->arm7EntryAddr = (u32) mbRomHeaderp->sub_entry_address;
    seg_infop                    = (MbSegmentInfo *) (mbdlFileInfop + 1);
    loadSegListp                 = data_02076e40;

    ((void) 0);

    for (seg_num = 0; seg_num < (3); seg_num++) {
        ((void) 0);
        func_0205d6cc(mbRomHeaderp, loadSegListp, seg_infop, &child_recv_buff_addr);
        seg_infop++;
        loadSegListp++;
    }

    {
        MBDownloadFileInfo *pMdfi = (MBDownloadFileInfo *) mbdlFileInfop;
        func_02053574(auth_code, &pMdfi->auth_code[0], (136));
    }
}
extern void func_0205d6cc(const RomHeader *mbRomHeaderp, const MbSegmentType *loadSegListp, MbSegmentInfo *seg_infop,
                          u32 *child_recv_buff_addr);
