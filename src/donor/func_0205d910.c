/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201ce74 from projets/heroes-of-mana/src/donor/func_0201ce74.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef int BOOL;
typedef struct {
    u8 favoriteColor : 4;
    u8 playerNo : 4;
    u8 nameLength;
    u16 name[10];
} MBUserInfo;
extern const u16(*ctrdgi_fl_maxtime);
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
    u32 seg_src_offset[(3)];
    u16 seg_head_blockno[(3)];
    u16 block_num;
} MB_BlockInfoTable;
typedef struct {
    u32 child_address;
    u32 size;
    u32 offset;
    u8 segment_no;
    u8 pad[3];
} MB_BlockInfo;
static inline MbSegmentInfo *MBi_GetSegmentInfo(MbDownloadFileInfoHeader *mdfi, int i) {
    return ((MbSegmentInfo *) (mdfi + 1)) + i;
}
extern BOOL func_0205d910(MB_BlockInfo *bi, MB_BlockInfoTable *table, u32 block, MbDownloadFileInfoHeader *mdfi);
typedef struct MB_CommCommonWork {
    u32 sendbuf[(0x400) / sizeof(u32)] __attribute__((aligned(32)));
    u32 recvbuf[(0x80) * 15 * 2 / sizeof(u32)] __attribute__((aligned(32)));
    MBUserInfo user;
    u16 isMbInitialized;
    int block_size_max;
    BOOL start_mp_busy;
    BOOL is_started_ex;
    u8 padding[28];
} MB_CommCommonWork;
extern MB_CommCommonWork *data_0209706c;
BOOL func_0205d910(MB_BlockInfo *bi, MB_BlockInfoTable *table, u32 block, MbDownloadFileInfoHeader *mdfi) {
    s8 i;
    u32 seg_block, block_adr_offset;

    if (block >= table->block_num) {
        return 0;
    }

    for (i = (3) - 1; i >= 0; i--) {
        if (block >= table->seg_head_blockno[i]) {
            break;
        }
    }

    if (i < 0) {
        return 0;
    }

    seg_block        = block - table->seg_head_blockno[i];
    block_adr_offset = seg_block * data_0209706c->block_size_max;

    {
        MbSegmentInfo *si = MBi_GetSegmentInfo(mdfi, i);
        bi->size          = si->size - block_adr_offset;

        if (bi->size > data_0209706c->block_size_max) {
            bi->size = (u32) data_0209706c->block_size_max;
        }

        bi->offset        = (u32) (block_adr_offset + table->seg_src_offset[i]);
        bi->child_address = (u32) (block_adr_offset + (u32) (si->recv_addr));
        bi->segment_no    = (u8) i;
    }

    ((void) 0);
    ((void) 0);

    return 1;
}
