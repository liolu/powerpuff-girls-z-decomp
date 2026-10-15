/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205d508 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/card/card_common.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef volatile s32 vs32;
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
extern void func_020518f4(void *param1);
extern void func_0205202c(const void *addr, u32 count);
extern void func_02053494(register u32 value, register void *dest, register u32 count);
extern void func_02053574(register const void *src, register void *dest, register u32 count);
typedef struct UnkCardCmd {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    u32 unk_3c;
    u32 unk_40;
    u32 unk_44;
    u8 unk_48;
    u8 unk_49[3];
    u32 unk_4c;
    u8 unk_50[0x10];
} UnkCardCmd;
typedef void (*UnkCardTask)(struct UnkCardCommon *common);
typedef void (*UnkCardCallback)(void *arg);
typedef struct UnkCardCommon {
    UnkCardCmd *unk_000;
    u32 unk_004;
    vs32 unk_008;
    vs32 unk_00c;
    OSThreadQueue unk_010;
    u32 unk_018;
    u32 unk_01c;
    u32 unk_020;
    u32 unk_024;
    u32 unk_028;
    u32 unk_02c;
    u32 unk_030;
    u32 unk_034;
    UnkCardCallback unk_038;
    void *unk_03c;
    UnkCardTask unk_040;
    OSThread unk_044;
    OSThread *unk_104;
    u32 unk_108;
    OSThreadQueue unk_10c;
    vu32 unk_114;
    u32 unk_118[2];
    u8 unk_120[0x100];
} UnkCardCommon;
extern UnkCardCmd data_020901a0;
extern UnkCardCommon data_02090200;
extern void func_02051630(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void func_02054920(u32 tag, void (*callback)(u32 tag, u32 data, BOOL err));
extern void func_020584d4(void);
extern void func_02058600(BOOL enable);
extern void func_02059420(u32 tag, u32 data, BOOL err);
extern void func_02059454(void *arg);
extern UnkCardCommon data_02090200;
extern u8 data_02090420[0x400] __attribute__((aligned(32)));
static inline BOOL CARDi_IsBootTypeMultiboot(void) {
    return *(vu16 *) 0x027FFC40 == 2;
}
void func_020584d4(void) {
    UnkCardCommon *const p = &data_02090200;

    p->unk_008 = -3;
    p->unk_00c = 0;
    p->unk_018 = 0;
    p->unk_000 = &data_020901a0;
    func_02053494(0, p->unk_000, sizeof(UnkCardCmd));
    func_0205202c(&data_020901a0, sizeof(UnkCardCmd));

    if (!CARDi_IsBootTypeMultiboot()) {
        func_02053574((void *) 0x027FFE00, (void *) 0x027FFA80, 0x160);
    }

    p->unk_108      = 4;
    p->unk_010.tail = 0;
    p->unk_010.head = 0;
    p->unk_10c.tail = 0;
    p->unk_10c.head = 0;
    func_02051630(&p->unk_044, func_02059454, 0, data_02090420 + sizeof(data_02090420), sizeof(data_02090420), p->unk_108);
    func_020518f4(&p->unk_044);
    func_02054920(11, func_02059420);

    if (CARDi_IsBootTypeMultiboot()) {
        return;
    }
    func_02058600(1);
}
void func_02058600(BOOL enable);
