/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02076578 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcstrm.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc;
    char unk_40[0x20];
} OSContext;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef void (*OSThreadDestructor)(void *);
typedef struct OSThreadLinkedList {
    OSThread *prev;
    OSThread *next;
} OSThreadLinkedList;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct OSMutexLinkedList {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLinkedList;
typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
typedef struct OSThread {
    OSContext context;
    s32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLinkedList list;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackOffset;
    OSThreadQueue joinQueue;
    void *unk_A4[3];
    void *unk_B0;
    OSThreadDestructor destructor;
    void *userParam;
    s32 error;
} OSThread;
extern void func_0205188c(OSThreadQueue *queue);
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
typedef enum {
    FS_RESULT_SUCCESS  = 0,
    FS_RESULT_FAILURE  = 1,
    FS_RESULT_BUSY     = 2,
    FS_RESULT_CANCELED = 3,
    FS_RESULT_BADCMD   = 4,
    FS_RESULT_ASYNC    = 6,
    FS_RESULT_UNKNOWN  = 8,
} FS_CommandResult;
typedef FS_CommandResult (*FS_RecordReadCB)(struct FS_Record *record, void *dest, u32 pos, u32 size);
typedef FS_CommandResult (*FS_RecordWriteCB)(struct FS_Record *record, const void *src, u32 pos, u32 size);
typedef FS_CommandResult (*FS_RecordMethodCB)(struct FS_File *file, u32 type);
typedef struct FS_LinkedFile {
    struct FS_File *prev;
    struct FS_File *next;
} FS_LinkedFile;
typedef struct FS_Record {
    u32 name;
    struct FS_Record *next;
    struct FS_Record *prev;
    OSThreadQueue unk_0C;

    OSThreadQueue unk_14;

    u32 flags;
    FS_LinkedFile fileList;
    u32 baseOffset;
    u32 fatOffset;
    u32 fatSize;
    u32 fntOffset;
    u32 fntSize;
    u32 fatBase;
    u32 fntBase;
    void *loaded;
    FS_RecordReadCB readCB;
    FS_RecordWriteCB writeCB;
    FS_RecordReadCB tableCB;
    FS_RecordMethodCB methodCB;
    u32 methodFlags;
} FS_Record;
typedef struct FS_FileIdentifier {
    struct FS_Record *record;
    u32 fileID;
} FS_FileIdentifier;
typedef struct FS_FilePosition {
    struct FS_Record *record;
    u16 id;
    u16 index;
    u32 position;
} FS_FilePosition;
typedef struct FS_FileArgs_NormalizePath {
    FS_FilePosition position;
    const char *path;
    BOOL isDirectory;
    union {
        FS_FileIdentifier *file;
        FS_FilePosition *directory;
    } response;
} FS_FileArgs_PathNormalize;
typedef struct FS_FileArgs_ProcessRead {
    void *dest;
    u32 sizeExpected;
    u32 sizeActual;
} FS_FileArgs_ProcessRead;
typedef struct FS_FileArgs_OpenImmediate {
    u32 start;
    u32 end;
    u32 idx;
} FS_FileArgs_OpenImmediate;
typedef struct FS_FileArgs_OpenFromID {
    FS_FileIdentifier iden;
} FS_FileArgs_OpenFromID;
typedef struct FS_File {
    struct FS_LinkedFile link;
    struct FS_Record *record;
    u32 status;
    u32 unk_10;
    FS_CommandResult result;
    OSThreadQueue unk_18;
    u32 unk_20;
    u32 startPosition;
    u32 endPosition;
    u32 currentPosition;

    union {
        FS_FileArgs_PathNormalize normalize;
        FS_FileArgs_ProcessRead read;
        FS_FileArgs_OpenImmediate openImmediate;
        FS_FileArgs_OpenFromID openFromId;
    } methodArgs;
} FS_File;
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_020634e0(UnkList *list, void *obj);
extern void func_020635e8(UnkList *list, void *obj);
extern void *func_02063648(UnkList *list, void *obj);
extern void func_020534e0(void *dest, u8 value, u32 count);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef struct UnkSndStrm {
    u8 unk_00[0x5C];
} UnkSndStrm;
typedef struct UnkSndAdpcmState {
    s16 pred;
    u8 index;
    u8 unk_03;
} UnkSndAdpcmState;
typedef BOOL (*UnkSndArcStrmOpenFunc)(struct UnkSndArcStrm *strm, u32 fileId);
typedef void (*UnkSndArcStrmCloseFunc)(struct UnkSndArcStrm *strm);
typedef s32 (*UnkSndArcStrmReadFunc)(struct UnkSndArcStrm *strm, void *dst, s32 size, u32 offset);
typedef struct UnkSndArcStrmPos {
    int no;
    u32 offset;
} UnkSndArcStrmPos;
typedef void (*UnkSndArcStrmDataCallback)(int status, int chNum, void **buffer, u32 len, int format, void *arg);
typedef BOOL (*UnkSndArcStrmNextCallback)(int status, UnkSndArcStrmPos *cur, UnkSndArcStrmPos *next, void *arg);
typedef struct UnkSndArcStrm {
    UnkSndStrm strm;
    FS_File file;
    u32 fileOffset;
    u8 header[0x18];
    u8 format;
    u8 loop;
    u8 channels;
    u8 unk_c3;
    u16 sampleRate;
    u16 timer;
    u32 loopStart;
    u32 sampleCount;
    u32 dataOffset;
    u32 blockCount;
    u32 blockSize;
    u32 blockSamples;
    u32 lastBlockSize;
    u32 lastBlockSamples;
    UnkSndFader fader;
    UnkSndAdpcmState adpcmState[6];
    BOOL active : 1;
    BOOL started : 1;
    BOOL startRequest : 1;
    BOOL fadeStop : 1;
    BOOL seekDecode : 1;
    BOOL dataEnd : 1;
    BOOL mono : 1;
    volatile int stopWait;
    BOOL prepared;
    int requestCount;
    int channelLockCount;
    u8 chNum;
    u8 unk_125;
    u8 chNo[6];
    void *buffer;
    u32 bufSize;
    UnkSndArcStrmDataCallback dataCallback;
    void *dataCallbackArg;
    UnkSndArcStrmNextCallback nextCallback;
    void *nextCallbackArg;
    int strmNo;
    int playerNo;
    struct UnkSndArcStrmHandle *handle;
    int prio;
    int playerVolume;
    int volume;
    int curVolume;
    u32 curPos;
    UnkSndArcStrmOpenFunc openFunc;
    UnkSndArcStrmCloseFunc closeFunc;
    UnkSndArcStrmReadFunc readFunc;
    UnkSndArcStrmCloseFunc stopFunc;
} UnkSndArcStrm;
typedef struct UnkSndArcStrmHandle {
    UnkSndArcStrm *volatile strm;
} UnkSndArcStrmHandle;
typedef struct UnkSndArcStrmRequest {
    UnkLink link;
    UnkSndArcStrm *strm;
    int status;
    int chNum;
    void *buffer[6];
    u32 len;
} UnkSndArcStrmRequest;
typedef struct UnkSndArcStrmThread {
    OSThread thread;
    u8 stack[0x400];
    OSThreadQueue queue;
    OSMutex mutex;
    UnkList requestList;
} UnkSndArcStrmThread;
typedef struct UnkSndArcStrmWork {
    BOOL initialized;
    UnkSndArcStrmThread *thread;
    u8 *adpcmBuffer;
} UnkSndArcStrmWork;
extern UnkSndArcStrmWork data_0209aab0;
extern UnkSndArcStrmThread data_0209ac60;
extern UnkSndArcStrmRequest *func_02066d08(void);
extern void func_02066d48(UnkSndArcStrmRequest *request);
extern void func_02066e10(int status, int chNum, void **buffer, u32 len, int format, void *arg);
UnkSndArcStrmRequest *func_02066d08(void);
void func_02066d48(UnkSndArcStrmRequest *request);
void func_02066e10(int status, int chNum, void **buffer, u32 len, int format, void *arg) {
    UnkSndArcStrm *strm = arg;
    UnkSndArcStrmRequest *request;
    UnkSndArcStrmThread *thread;
    int i;

    if (strm->requestCount >= 2) {
        request = func_02063648(&data_0209ac60.requestList, 0);
        while (request != 0) {
            if (request->strm == strm) {
                break;
            }
            request = func_02063648(&data_0209ac60.requestList, request);
        }

        for (i = 0; i < request->chNum; i++) {
            func_020534e0(request->buffer[i], 0, request->len);
        }

        func_020635e8(&data_0209ac60.requestList, request);
        strm->requestCount--;
        func_02066d48(request);
    }

    request         = func_02066d08();
    request->strm   = strm;
    request->status = status;
    request->chNum  = chNum;
    for (i = 0; i < chNum; i++) {
        request->buffer[i] = buffer[i];
    }
    request->len = len;

    thread = &data_0209ac60;
    if (status == 0) {
        if (data_0209aab0.thread != 0) {
            thread = data_0209aab0.thread;
        }
    }

    strm->requestCount++;
    func_020634e0(&thread->requestList, request);
    func_0205188c(&thread->queue);
}
