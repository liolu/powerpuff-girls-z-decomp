/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201faa4 from projets/heroes-of-mana/src/donor/func_0201faa4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
extern const u16(*ctrdgi_fl_maxtime);
typedef enum MBCommType {
    MB_COMM_TYPE_DUMMY = 0,
    MB_COMM_TYPE_PARENT_SENDSTART,
    MB_COMM_TYPE_PARENT_KICKREQ,
    MB_COMM_TYPE_PARENT_DL_FILEINFO,
    MB_COMM_TYPE_PARENT_DATA,
    MB_COMM_TYPE_PARENT_BOOTREQ,
    MB_COMM_TYPE_PARENT_MEMBER_FULL,
    MB_COMM_TYPE_CHILD_FILEREQ,
    MB_COMM_TYPE_CHILD_ACCEPT_FILEINFO,
    MB_COMM_TYPE_CHILD_CONTINUE,
    MB_COMM_TYPE_CHILD_STOPREQ,
    MB_COMM_TYPE_CHILD_BOOTREQ_ACCEPTED
} MBCommType;
typedef struct {
    u8 type;
    u8 pad1[1];
    u16 fid;
    u16 seqno;
} MBCommParentBlockHeader;
extern u8 *func_02060580(const MBCommParentBlockHeader *hdr, u8 *sendbuf);
u8 *func_02060580(const MBCommParentBlockHeader *hdr, u8 *sendbuf) {
    u8 *ptr = sendbuf;
    *ptr++  = hdr->type;

    switch (hdr->type) {
        case MB_COMM_TYPE_PARENT_SENDSTART:
            break;
        case MB_COMM_TYPE_PARENT_KICKREQ:
            break;
        case MB_COMM_TYPE_PARENT_DL_FILEINFO:
            break;
        case MB_COMM_TYPE_PARENT_DATA:
            *ptr++ = (u8) (0x00ff & hdr->fid);
            *ptr++ = (u8) ((0xff00 & hdr->fid) >> 8);
            *ptr++ = (u8) (0x00ff & hdr->seqno);
            *ptr++ = (u8) ((0xff00 & hdr->seqno) >> 8);
            break;
        case MB_COMM_TYPE_PARENT_BOOTREQ:
            break;
        case MB_COMM_TYPE_PARENT_MEMBER_FULL:
            break;
        default:
            return 0;
    }

    return ptr;
}
