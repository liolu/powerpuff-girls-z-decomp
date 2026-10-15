/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CARDi_ReadRomSyncCore from projets/heroes-of-mana/src/donor/CARDi_ReadRomSyncCore.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
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
extern void func_0205188c(OSThreadQueue *queue);
extern void func_020518f4(void *param1);
extern u32 func_02052c30(void);
extern u32 func_02052c44(u32 irq_flag);
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
typedef struct UnkCardRom {
    void (*unk_000)(struct UnkCardRom *rom);
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c[5];
    u32 unk_020[0x80];
} UnkCardRom;
extern UnkCardCommon data_02090200;
extern UnkCardRom data_02090840;
static inline void CARDi_EndTask(UnkCardCommon *p) {
    const UnkCardCallback callback = p->unk_038;
    void *const arg                = p->unk_03c;
    {
        u32 prevIRQState = func_02052c30();
        p->unk_114 &= ~0x4C;
        func_0205188c(&p->unk_10c);
        if (p->unk_114 & 0x10) {
            func_020518f4(&p->unk_044);
        }
        func_02052c44(prevIRQState);
    }
    if (callback != 0) {
        callback(arg);
    }
}
extern BOOL func_02058d5c(UnkCardRom *rom);
extern u32 func_020591b8(void);
extern void func_02059214(UnkCardCommon *common);
extern void func_0205971c(u32 id);
static inline void CARDi_ReadRomDone(void) {
    UnkCardCommon *const p = &data_02090200;
    func_0205971c(func_020591b8());
    p->unk_000->unk_00 = 0;
    CARDi_EndTask(p);
}
extern BOOL func_02058d5c(UnkCardRom *rom);
extern u32 func_020591b8(void);
void func_02059214(UnkCardCommon *common) {
    UnkCardRom *const rom = &data_02090840;
    if (func_02058d5c(rom)) {
        rom->unk_000(rom);
    }
    CARDi_ReadRomDone();
}
