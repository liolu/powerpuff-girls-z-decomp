/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02017988 from projets/heroes-of-mana/src/donor/func_02017988.c (same code in another game of this workspace), reused by
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
struct CPContext;
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
struct HeapDesc;
struct OSContext;
struct OSLockWord;
struct OSMessageQueue;
struct OSMutex;
struct OSThread;
struct OSThreadInfo;
struct OSiAlarm;
struct OSiAlarmQueue;
struct OSiExContext;
struct OSiExceptionStatics;
struct OSiThreadInfoPrefix;
struct _OSMutexLink;
struct _OSMutexQueue;
struct _OSThread;
struct _OSThreadLink;
struct _OSThreadQueue;
enum {
    OS_IE_CARD_DATA = 1 << 19
};
typedef void *OSMessage;
struct OSiThreadInfoPrefix {
    u32 initialized;
    void *current_thread;
};
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;
    u32 sp_svc;
    CPContext cp_context;
} OSContext;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
};
struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
};
struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
};
struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
};
typedef enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSThreadDestructor)(void *);
typedef struct OSContext OSContext;
struct _OSThread {
    OSContext context;
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLink link;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    OSThreadQueue joinQueue;
    void *specific[3];
    OSAlarm *alarmForSleep;
    OSThreadDestructor destructor;
    void *userParameter;
    int systemErrno;
};
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTick period;
    OSTick start;
};
typedef u32 OSIrqMask;
typedef void (*OSIrqFunction)(void *arg);
typedef unsigned int OSIntrMode_Irq;
typedef unsigned int OSProcMode;
typedef struct OSiExContext {
    OSContext context;
    u32 cp15;
    u32 spsr;
    u32 exinfo;
    u32 debug[4];
} OSiExContext;
typedef struct OSiExContext OSiExContext;
typedef void (*OSExceptionHandler)(void *context, void *arg);
typedef struct OSiExceptionStatics {
    void *debuggerHandler;
    void *userExceptionHandlerArg;
    OSExceptionHandler userExceptionHandler;
} OSiExceptionStatics;
typedef int OSHeapHandle;
typedef struct HeapDesc HeapDesc;
typedef struct {
    volatile OSHeapHandle currentHeap;
    int numHeaps;
    void *arenaStart;
    void *arenaEnd;
    HeapDesc *heapArray;
} OSHeapInfo;
typedef void (*OSThreadFunc)(void *pArg);
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void *switchCallback;
} OSThreadInfo;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
struct OSThread {
    u8 context[0x64];
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLink link;
    void *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    OSThreadQueue joinQueue;
    void *specific[3];
    void *alarmForSleep;
    void (*destructor)(void *);
    void *userParameter;
    int systemErrno;
};
typedef struct {
    OSIrqFunction pfnHandler;
    unsigned int bKeepEnabled;
    void *pArg;
} OSiIrqSlot;
typedef struct {
    u8 bootCheckInfo[0x20];
    u32 resetParameter;
    u8 padding5[0x8];
    u32 romBaseOffset;
    u8 cartridgeModuleInfo[12];
    u32 vblankCount;
    u8 wmBootBuf[0x40];
    u8 nvramUserInfo[0x100];
    u8 isd_reserved1[0x20];
    u8 arenaInfo[0x48];
    u8 real_time_clock[8];
    u32 dmaClearBuf[4];
    u8 rom_header[0x160];
    u8 isd_reserved2[32];
    u32 pxiSignalParam[2];
    u32 pxiHandleChecker[2];
    u32 mic_last_address;
    u16 mic_sampling_data;
    u16 wm_callback_control;
    u16 wm_rssi_pool;
    u8 ctrdg_SetModuleInfoFlag;
    u8 ctrdg_IsExisting;
    u32 component_param;
    void *threadinfo_mainp;
    void *threadinfo_subp;
    u16 button_XY;
    u8 touch_panel[4];
    u16 autoloadSync;
} OSSystemWork;
typedef struct OSLockWord {
    u16 lockFlag;
    u16 extension;
} OSLockWord;
typedef void (*OSLockCallback)(void);
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
typedef struct {
    u8 reserved[0x3fc0];
    u8 sysrv[0x38];
    vu32 intr_check;
} OSDtcm;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
typedef struct OSMessageQueue OSMessageQueue;
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef struct {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;
struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
};
enum {
    CARD_RESULT_SUCCESS = 0,
    CARD_STAT_BUSY      = 1 << 2,
    CARD_STAT_TASK      = 1 << 3,
    CARD_STAT_RECV      = 1 << 4,
    CARD_STAT_CANCEL    = 1 << 6,
    CARD_ROM_PAGE_SIZE  = 512
};
typedef void (*CARDCallback)(void *argument);
struct CARDiCommandArg {
    int result;
};
struct CARDiCommon {
    struct CARDiCommandArg *cmd;
    s32 command;
    volatile s32 lock_owner;
    volatile s32 lock_ref;
    u8 lock_queue[8];
    s32 lock_target;
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    s32 req_type;
    s32 req_retry;
    s32 req_mode;
    CARDCallback callback;
    void *callback_arg;
    void (*task_func)(struct CARDiCommon *common);
    u8 thread[0xc8];
    u8 busy_q[8];
    volatile u32 flag;
};
struct CARDRomStat {
    void (*read_func)(struct CARDRomStat *state);
    u32 ctrl;
    u8 *cache_page;
    u32 dummy[5];
    u8 cache_buf[CARD_ROM_PAGE_SIZE];
};
extern int func_02052c30(void);
extern void func_02052c44(int state);
extern void func_02053280(u32 channel);
extern void func_02050e44(u32 mask);
extern void func_02050e74(u32 mask);
extern u32 func_020591b8(void);
extern void func_0205971c(u32 id);
extern void func_0205188c(void *queue);
extern void func_020518f4(void *thread);
extern void func_02058e48(void);
extern struct CARDiCommon data_02090200;
extern struct CARDRomStat data_02046b20 __attribute__((aligned(32)));
static inline BOOL Card_AdvanceReadPage(struct CARDRomStat *state) {

#pragma unused(state)
#line 67
    struct CARDiCommon *common = &data_02090200;
    common->src += CARD_ROM_PAGE_SIZE;
    common->dst += CARD_ROM_PAGE_SIZE;
    common->len -= CARD_ROM_PAGE_SIZE;
    return common->len > 0;
}
void func_02058e9c(void) {
    struct CARDRomStat *state  = &data_02046b20;
    struct CARDiCommon *common = &data_02090200;
    CARDCallback callback;
    void *callbackArgument;
    int interruptState;

    func_02053280(common->dma);
    if (!Card_AdvanceReadPage(state)) {
        func_02050e44(OS_IE_CARD_DATA);
        func_02050e74(OS_IE_CARD_DATA);
        common = &data_02090200;
        func_0205971c(func_020591b8());
        common->cmd->result = CARD_RESULT_SUCCESS;
        callback            = common->callback;
        callbackArgument    = common->callback_arg;
        interruptState      = func_02052c30();
        common->flag &= ~(CARD_STAT_BUSY | CARD_STAT_TASK | CARD_STAT_CANCEL);
        func_0205188c(common->busy_q);
        if ((common->flag & CARD_STAT_RECV) != 0) {
            func_020518f4(common->thread);
        }
        func_02052c44(interruptState);
        if (callback == 0) {
            return;
        }
        callback(callbackArgument);
    } else {
        func_02058e48();
    }
}
