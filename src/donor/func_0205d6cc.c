/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201cc30 from projets/heroes-of-mana/src/donor/func_0201cc30.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_02052eb4();
extern void func_02052eb4(void);
typedef enum {
    MI_PROCESSOR_ARM9 = 0,
    MI_PROCESSOR_ARM7 = 1
} MIProcessor;
typedef struct {
    u32 offset;
    u32 length;
} CARDRomRegion;
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
typedef struct MbSegmentInfo {
    u32 recv_addr;
    u32 load_addr;
    u32 size;
    u32 target : 1;
    u32 rsv : 31;
} MbSegmentInfo;
extern void func_0205d6cc(const RomHeader *mbRomHeaderp, const MbSegmentType *loadSegListp, MbSegmentInfo *seg_infop,
                          u32 *child_recv_buff_addr);
void func_0205d6cc(const RomHeader *mbRomHeaderp, const MbSegmentType *loadSegListp, MbSegmentInfo *seg_infop,
                   u32 *child_recv_buff_addr) {
    CARDRomRegion *romRegp;

    switch (*loadSegListp) {
        case MB_SEG_ARM9STATIC:
            romRegp = (CARDRomRegion *) (&mbRomHeaderp->main_ram_address);

            if (((u32) romRegp->offset >= (0x02000000)) && ((u32) romRegp->offset < (0x02000000 + 0x002c0000)) &&
                (((u32) romRegp->offset + romRegp->length) <= (0x02000000 + 0x002c0000))) {

                seg_infop->size      = romRegp->length;
                seg_infop->load_addr = (u32) romRegp->offset;

                seg_infop->recv_addr = seg_infop->load_addr;
                seg_infop->target    = MI_PROCESSOR_ARM9;
                ((void) 0);
            } else {
                func_02052eb4();
            }
            break;

        case MB_SEG_ARM7STATIC: {
            BOOL error_flag  = 0;
            BOOL reload_flag = 0;
            u32 load_last_addr;

            romRegp        = (CARDRomRegion *) (&mbRomHeaderp->sub_ram_address);
            load_last_addr = (u32) ((u32) romRegp->offset + romRegp->length);

            if (((u32) romRegp->offset >= (0x02000000)) && ((u32) romRegp->offset < (0x02000000 + 0x003fe800))) {

                if (load_last_addr <= ((0x02000000 + 0x002c0000) + ((0x02000000 + 0x00300000) - (0x02000000 + 0x002c0000)))) {
                } else if ((load_last_addr < (0x02000000 + 0x003fe800)) &&
                           (romRegp->length <= ((0x02000000 + 0x00300000) - (0x02000000 + 0x002c0000)))) {
                    reload_flag = 1;
                } else {
                    error_flag = 1;
                }
            } else if (((u32) romRegp->offset >= 0x037f8000) && ((u32) romRegp->offset < 0x037f8000 + (0x18000 - 0x1000))) {

                if (load_last_addr <= (0x037f8000 + (0x18000 - 0x1000))) {
                    reload_flag = 1;
                } else {
                    error_flag = 1;
                }
            } else {
                error_flag = 1;
            }

            if (error_flag == 1) {
                func_02052eb4();
            }

            {
                seg_infop->size      = romRegp->length;
                seg_infop->load_addr = (u32) romRegp->offset;

                if (!reload_flag) {
                    seg_infop->recv_addr = seg_infop->load_addr;
                } else {
                    seg_infop->recv_addr = *child_recv_buff_addr;
                    *child_recv_buff_addr += seg_infop->size;
                }
            }

            seg_infop->target = MI_PROCESSOR_ARM7;
            ((void) 0);
        } break;
        case MB_SEG_ROMHEADER:
            seg_infop->size      = (0x160);
            seg_infop->load_addr = (u32) (0x02000000 + 0x007ffe00);
            seg_infop->recv_addr = seg_infop->load_addr;
            seg_infop->target    = MI_PROCESSOR_ARM9;

            ((void) 0);
            break;
    }

    ((void) 0);
}
