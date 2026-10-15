/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FSi_InitRom from projets/heroes-of-mana/src/nitro/fs/fs_rom_3.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef signed long s32;
typedef long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef float f32;
typedef int BOOL;
typedef volatile u8 REGType8v;
typedef volatile u16 REGType16v;
typedef volatile u32 REGType32v;
typedef int OSIntrMode;
typedef u64 OSTick;
typedef struct OSBirthday {
    u8 month;
    u8 day;
} OSBirthday;
typedef struct OSOwnerInfo {
    u8 language;
    u8 favoriteColor;
    OSBirthday birthday;
    u16 nickName[10 + 1];
    u16 nickNameLength;
    u16 comment[26 + 1];
    u16 commentLength;
} OSOwnerInfo;
enum {
    HW_ITCM      = 0x01ff8000,
    HW_ITCM_SIZE = 0x8000,
    HW_DTCM_SIZE = 0x4000
};
typedef void *OSMessage;
typedef enum {
    FS_SEEK_SET,
    FS_SEEK_CUR,
    FS_SEEK_END
} FSSeekFileMode;
typedef enum {
    FS_COMMAND_ASYNC_BEGIN = 0,
    FS_COMMAND_READFILE    = FS_COMMAND_ASYNC_BEGIN,
    FS_COMMAND_WRITEFILE,
    FS_COMMAND_ASYNC_END,
    FS_COMMAND_SYNC_BEGIN = FS_COMMAND_ASYNC_END,
    FS_COMMAND_SEEKDIR    = FS_COMMAND_SYNC_BEGIN,
    FS_COMMAND_READDIR,
    FS_COMMAND_FINDPATH,
    FS_COMMAND_GETPATH,
    FS_COMMAND_OPENFILEFAST,
    FS_COMMAND_OPENFILEDIRECT,
    FS_COMMAND_CLOSEFILE,
    FS_COMMAND_SYNC_END,
    FS_COMMAND_STATUS_BEGIN = FS_COMMAND_SYNC_END,
    FS_COMMAND_ACTIVATE     = FS_COMMAND_STATUS_BEGIN,
    FS_COMMAND_IDLE,
    FS_COMMAND_SUSPEND,
    FS_COMMAND_RESUME,
    FS_COMMAND_STATUS_END,
    FS_COMMAND_INVALID
} FSCommandType;
typedef enum {
    FS_RESULT_SUCCESS = 0,
    FS_RESULT_FAILURE,
    FS_RESULT_BUSY,
    FS_RESULT_CANCELED,
    FS_RESULT_UNSUPPORTED,
    FS_RESULT_ERROR,
    FS_RESULT_PROC_ASYNC,
    FS_RESULT_PROC_DEFAULT,
    FS_RESULT_PROC_UNKNOWN
} FSResult;
struct FSFile;
struct FSArchive;
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src, u32 pos, u32 size);
typedef struct FSFileLink {
    struct FSFile *prev;
    struct FSFile *next;
} FSFileLink;
typedef struct OSThreadQueue {
    struct OSThread *head;
    struct OSThread *tail;
} OSThreadQueue;
typedef struct FSArchiveFAT {
    u32 top;
    u32 bottom;
} FSArchiveFAT;
typedef struct FSArchiveFNT {
    u32 start;
    u16 index;
    u16 parent;
} FSArchiveFNT;
typedef struct FSArchive {
    union {
        char ptr[3 + 1];
        u32 pack;
    } name;
    struct FSArchive *next;
    struct FSArchive *prev;
    OSThreadQueue sync_q;
    OSThreadQueue stat_q;
    u32 flag;
    FSFileLink list;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 fat_bak;
    u32 fnt_bak;
    void *load_mem;
    FS_ARCHIVE_READ_FUNC read_func;
    FS_ARCHIVE_WRITE_FUNC write_func;
    FS_ARCHIVE_READ_FUNC table_func;
    FS_ARCHIVE_PROC_FUNC proc;
    u32 proc_flag;
} FSArchive;
typedef struct {
    struct FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct {
    struct FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    };
    u32 is_directory;
    u32 name_len;
    char name[127 + 1];
} FSDirEntry;
typedef struct {
    FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
    FSDirEntry *p_entry;
    BOOL skip_string;
} FSReadDirInfo;
typedef struct {
    FSDirPos pos;
    const char *path;
    BOOL find_directory;
    union {
        FSFileID *file;
        FSDirPos *dir;
    } result;
} FSFindPathInfo;
typedef struct {
    u8 *buf;
    u32 buf_len;
    u16 total_len;
    u16 dir_id;
} FSGetPathInfo;
typedef struct {
    FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
    u32 top;
    u32 bottom;
    u32 index;
} FSOpenFileDirectInfo;
typedef struct {
    u32 reserved;
} FSCloseFileInfo;
typedef struct {
    void *dst;
    u32 len_org;
    u32 len;
} FSReadFileInfo;
typedef struct {
    const void *src;
    u32 len_org;
    u32 len;
} FSWriteFileInfo;
typedef struct FSFile {
    FSFileLink link;
    struct FSArchive *arc;
    u32 stat;
    FSCommandType command;
    FSResult error;
    OSThreadQueue queue[1];
    union {
        struct {
            u32 own_id;
            u32 top;
            u32 bottom;
            u32 pos;
        } file;
        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;
    union {
        FSReadFileInfo readfile;
        FSWriteFileInfo writefile;
        FSSeekDirInfo seekdir;
        FSReadDirInfo readdir;
        FSFindPathInfo findpath;
        FSGetPathInfo getpath;
        FSOpenFileFastInfo openfilefast;
        FSOpenFileDirectInfo openfiledirect;
        FSCloseFileInfo closefile;
    } arg;
} FSFile;
extern OSIntrMode OS_DisableInterrupts(void);
extern OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
extern void OS_SleepThread(OSThreadQueue *queue);
extern void OS_WakeupThread(OSThreadQueue *queue);
typedef struct {
    u32 offset;
    u32 length;
} CARDRomRegion;
extern struct {
    u32 card_lock_id;
    u32 default_dma_no;
    CARDRomRegion ovt9;
    CARDRomRegion ovt7;
} data_0209003c;
extern FSArchive data_02090054;
extern const char data_0207eedc[];
extern u32 func_020511d8(void);
extern void func_020593a4(void);
extern void func_02055bf8(FSArchive *p_arc);
extern BOOL func_02055c64(FSArchive *p_arc, const char *name, u32 name_len);
extern void func_02055eac(struct FSArchive *p_arc, FS_ARCHIVE_PROC_FUNC proc, u32 flags);
extern BOOL func_02055d18(FSArchive *p_arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size,
                          FS_ARCHIVE_READ_FUNC read_func, FS_ARCHIVE_WRITE_FUNC write_func);
extern FSResult func_02056548(FSFile *p_file, FSCommandType cmd);
extern FSResult func_020564d4(FSFile *p_file, FSCommandType cmd);
extern FSResult func_02056484(FSArchive *p_arc, void *dst, u32 src, u32 len);
extern FSResult func_020564cc(FSArchive *p_arc, const void *src, u32 dst, u32 len);
extern FSResult func_02056540(FSArchive *p_arc, void *dst, u32 src, u32 len);
static inline BOOL FS_IsBusy(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000001) ? 1 : 0;
}
static inline BOOL FS_IsCanceling(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000002) ? 1 : 0;
}
static inline BOOL FS_IsSucceeded(volatile const FSFile *p_file) {
    return (p_file->error == FS_RESULT_SUCCESS) ? 1 : 0;
}
static inline BOOL FS_IsFile(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000010) ? 1 : 0;
}
static inline BOOL FS_IsDir(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000020) ? 1 : 0;
}
static inline BOOL FS_IsFileSyncMode(const volatile FSFile *p) {
    return (p->stat & 0x00000004) ? 1 : 0;
}
static inline BOOL FS_IsArchiveLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000002) ? 1 : 0;
}
static inline BOOL FS_IsArchiveTableLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000004) ? 1 : 0;
}
static inline BOOL FS_IsArchiveSuspended(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000008) ? 1 : 0;
}
static inline void FSi_CutFromListCore(FSFileLink *trg) {
    FSFile *const nx = trg->next;
    FSFile *const pr = trg->prev;
    if (pr) {
        pr->link.next = nx;
    }
    if (nx) {
        nx->link.prev = pr;
    }
}
static inline void FSi_CutFromList(FSFile *elem) {
    FSFileLink *const trg = &elem->link;
    FSi_CutFromListCore(trg);
    trg->next = trg->prev = ((void *) 0);
}
static inline void FSi_AppendToList(FSFile *elem, FSFile *list) {
    FSFileLink *const trg = &elem->link;
    FSi_CutFromListCore(trg);
    {
        while (list->link.next) {
            list = list->link.next;
        }
        list->link.next = elem;
        trg->prev       = list;
        trg->next       = ((void *) 0);
    }
}
static inline BOOL FSi_IsSlash(u32 c) {
    return (c == '/') || (c == '\\');
}
static inline BOOL FSi_IsArchiveRunning(const volatile FSArchive *p_arc) {
    return ((p_arc->flag & 0x00000010) != 0);
}
static inline BOOL FSi_IsArchiveCanceling(const volatile FSArchive *p_arc) {
    return ((p_arc->flag & 0x00000020) != 0);
}
static inline BOOL FSi_IsArchiveSuspending(const volatile FSArchive *p_arc) {
    return ((p_arc->flag & 0x00000040) != 0);
}
static inline BOOL FSi_IsArchiveAsync(const volatile FSArchive *p_arc) {
    return ((p_arc->flag & 0x00000100) != 0);
}
static inline BOOL FSi_IsArchiveSync(const volatile FSArchive *p_arc) {
    return ((p_arc->flag & 0x00000200) != 0);
}
static inline BOOL MB_IsMultiBootChild(void) {
    return *(const u16 *) 0x027ffc40 == 2;
}
static inline const CARDRomRegion *CARD_GetRomRegionFNT(void) {
    return (const CARDRomRegion *) ((const u8 *) 0x027ffe00 + 0x40);
}
static inline const CARDRomRegion *CARD_GetRomRegionFAT(void) {
    return (const CARDRomRegion *) ((const u8 *) 0x027ffe00 + 0x48);
}
void func_02056550(u32 default_dma_no) {
    data_0209003c.default_dma_no = default_dma_no;
    data_0209003c.card_lock_id   = func_020511d8();
    data_0209003c.ovt9.offset    = 0;
    data_0209003c.ovt9.length    = 0;
    data_0209003c.ovt7.offset    = 0;
    data_0209003c.ovt7.length    = 0;

    func_020593a4();

    func_02055bf8(&data_02090054);
    (void) func_02055c64(&data_02090054, data_0207eedc, 3);

    if (MB_IsMultiBootChild()) {
        data_0209003c.ovt9.offset = (u32) ~0;
        data_0209003c.ovt9.length = 0;
        data_0209003c.ovt7.offset = (u32) ~0;
        data_0209003c.ovt7.length = 0;

        func_02055eac(&data_02090054, func_02056548, (u32) (~0));
        (void) func_02055d18(&data_02090054, 0x00000000, 0, 0, 0, 0, func_02056540, func_020564cc);
    } else {
        const CARDRomRegion *const fnt = CARD_GetRomRegionFNT();
        const CARDRomRegion *const fat = CARD_GetRomRegionFAT();

        func_02055eac(&data_02090054, func_020564d4,
                      (1 << FS_COMMAND_WRITEFILE) | (1 << FS_COMMAND_ACTIVATE) | (1 << FS_COMMAND_IDLE));

        if ((fnt->offset == 0xFFFFFFFF) || (fnt->offset == 0x00000000) || (fat->offset == 0xFFFFFFFF) ||
            (fat->offset == 0x00000000)) {
        } else {
            (void) func_02055d18(&data_02090054, 0x00000000, fat->offset, fat->length, fnt->offset, fnt->length, func_02056484,
                                 func_020564cc);
        }
    }
}
