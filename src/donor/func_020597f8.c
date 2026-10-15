/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov105_WmInitCore from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/wm/calls/Ov105_WmInitCore.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed long s32;
typedef int BOOL;
typedef int OSIntrMode;
typedef u64 OSTick;
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
typedef void *OSMessage;
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
typedef struct OSMessageQueue OSMessageQueue;
struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
};
typedef void (*WMCallbackFunc)(void *arg);
enum {
    WM_ERRCODE_SUCCESS            = 0,
    WM_ERRCODE_FAILED             = 1,
    WM_ERRCODE_OPERATING          = 2,
    WM_ERRCODE_ILLEGAL_STATE      = 3,
    WM_ERRCODE_WM_DISABLE         = 4,
    WM_ERRCODE_NO_KEYSET          = 5,
    WM_ERRCODE_INVALID_PARAM      = 6,
    WM_ERRCODE_NO_CHILD           = 7,
    WM_ERRCODE_FIFO_ERROR         = 8,
    WM_ERRCODE_TIMEOUT            = 9,
    WM_ERRCODE_SEND_QUEUE_FULL    = 10,
    WM_ERRCODE_NO_ENTRY           = 11,
    WM_ERRCODE_OVER_MAX_ENTRY     = 12,
    WM_ERRCODE_INVALID_POLLBITMAP = 13,
    WM_ERRCODE_NO_DATA            = 14,
    WM_ERRCODE_SEND_FAILED        = 15
};
typedef int WMErrCode;
typedef struct WMStatus {
    u16 state;
    u16 BusyApiid;
    BOOL apiBusy;
    u8 reserved0[0x7f8];
} WMStatus;
typedef struct WMArm7Buf {
    WMStatus *status;
    u8 reserved_a[4];
    u32 *fifo7to9;
    u8 reserved_b[0x2f4];
} WMArm7Buf;
typedef struct WMArm9Buf {
    WMArm7Buf *WM7;
    WMStatus *status;
    u32 *indbuf;
    u32 *fifo9to7;
    u32 *fifo7to9;
    u16 dmaNo;
    u16 scanOnlyFlag;
    WMCallbackFunc CallbackTable[44];
    WMCallbackFunc indCallback;
    WMCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
    u32 connectedAidBitmap;
    u16 myAid;
} WMArm9Buf;
extern u16 data_02090a80;
extern OSIntrMode func_02052c30(void);
extern OSIntrMode func_02052c44(OSIntrMode state);
extern void func_02054814(void);
extern BOOL func_0205496c(int tag, int proc);
extern void func_02051ff4(void *addr, u32 size);
extern void func_02052010(void *addr, u32 size);
extern void func_02052ee0(u32 dmaNo, void *dst, u32 value, u32 size);
extern void func_02051bd4(OSMessageQueue *queue, OSMessage *msgArray, s32 msgCount);
extern BOOL func_02051bfc(OSMessageQueue *queue, OSMessage msg, s32 flags);
extern void func_02054920(int tag, void (*callback)(int, u32, BOOL));
extern void func_0205a08c(void);
extern void func_02059ce0(int tag, u32 fifo_buf_adr, BOOL err);
extern OSMessageQueue data_02090a88;
extern OSMessage data_02090aa8[10];
extern u32 data_02090b20[10][256 / sizeof(u32)];
#pragma push
#pragma optimization_level 2
#pragma opt_common_subs off
WMErrCode func_020597f8(void *wmSysBuf, u16 dmaNo, u32 bufSize) {
    OSIntrMode e;

    e = func_02052c30();

    if (data_02090a80) {
        (void) func_02052c44(e);
        return WM_ERRCODE_ILLEGAL_STATE;
    }
    if (wmSysBuf == ((void *) 0)) {
        (void) func_02052c44(e);
        return WM_ERRCODE_INVALID_PARAM;
    }
    if (dmaNo > 3) {
        (void) func_02052c44(e);
        return WM_ERRCODE_INVALID_PARAM;
    }
    if ((u32) wmSysBuf & 0x01f) {
        (void) func_02052c44(e);
        return WM_ERRCODE_INVALID_PARAM;
    }

    func_02054814();
    if (!func_0205496c(10, 1)) {
        (void) func_02052c44(e);
        return WM_ERRCODE_WM_DISABLE;
    }

    func_02051ff4(wmSysBuf, bufSize);

    func_02052ee0(dmaNo, wmSysBuf, 0, bufSize);
    (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4)) = (WMArm9Buf *) wmSysBuf;
    (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->WM7 =
        (WMArm7Buf *) ((u32) (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4)) + 512);
    (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->status =
        (WMStatus *) ((u32) ((*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->WM7) + (256 + 512));
    (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->fifo9to7 =
        (u32 *) ((u32) ((*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->status) + 2048);
    (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->fifo7to9 =
        (u32 *) ((u32) ((*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->fifo9to7) + 256);

    func_0205a08c();

    (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->dmaNo              = dmaNo;
    (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->connectedAidBitmap = 0x0000;
    (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->myAid              = 0;

    {
        s32 i;

        for (i = 0; i < 16; i++) {
            (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->portCallbackTable[i]    = ((void *) 0);
            (*(WMArm9Buf **) ((u8 *) &data_02090a80 + 4))->portCallbackArgument[i] = ((void *) 0);
        }
    }

    {
        s32 i;

        func_02051bd4(&data_02090a88, data_02090aa8, 10);
        for (i = 0; i < 10; i++) {
            *((u16 *) (data_02090b20[i])) = 0x8000;
            func_02052010(data_02090b20[i], 2);
            (void) func_02051bfc(&data_02090a88, data_02090b20[i], 1);
        }
    }

    func_02054920(10, func_02059ce0);

    data_02090a80 = 1;
    (void) func_02052c44(e);
    return WM_ERRCODE_SUCCESS;
}
