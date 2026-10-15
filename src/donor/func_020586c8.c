/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205d718 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/card/card_backup.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile s32 vs32;
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
extern void func_020534e0(register void *dest, register u8 value, register u32 count);
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
extern UnkCardCommon data_02090200;
extern void func_020586c8(u32 type);
void func_020586c8(u32 type) {
    UnkCardCmd *const cmd = data_02090200.unk_000;

    func_020534e0(&cmd->unk_18, 0, 0x48);
    cmd->unk_04 = type;
    cmd->unk_4c = 0x3F;

    if (type != 0) {
        const u32 size = (u32) (1 << (((s32) type >> 8) & 0xFF));
        const u32 kind = type & 0xFF;

        cmd->unk_18 = size;
        cmd->unk_48 = 0xFF;

        if (kind == 1) {
            switch (size) {
                case 0x200:
                    cmd->unk_20 = 0x10;
                    cmd->unk_24 = 1;
                    cmd->unk_28 = 5;
                    cmd->unk_48 = 0xF0;
                    break;
                case 0x2000:
                    cmd->unk_20 = 0x20;
                    cmd->unk_24 = 2;
                    cmd->unk_28 = 5;
                    cmd->unk_48 = 0;
                    break;
                case 0x10000:
                    cmd->unk_20 = 0x80;
                    cmd->unk_24 = 2;
                    cmd->unk_28 = 10;
                    cmd->unk_48 = 0;
                    break;
                default:
                    goto invalid;
            }
            cmd->unk_1c = cmd->unk_20;
            cmd->unk_4c |= 0x340;
        } else if (kind == 2) {
            switch (size) {
                case 0x40000:
                case 0x80000:
                case 0x100000:
                    cmd->unk_2c = 25;
                    cmd->unk_30 = 300;
                    cmd->unk_44 = 300;
                    cmd->unk_3c = 5000;
                    cmd->unk_4c |= 0x480;
                    break;
                case 0x200000:
                    cmd->unk_2c = 23;
                    cmd->unk_30 = 300;
                    cmd->unk_3c = 500;
                    cmd->unk_40 = 5000;
                    cmd->unk_34 = 10000;
                    cmd->unk_38 = 60000;
                    cmd->unk_48 = 0;
                    cmd->unk_4c |= 0x480;
                    cmd->unk_4c |= 0x1000;
                    break;
                case 0x800000:
                    cmd->unk_3c = 1000;
                    cmd->unk_40 = 3000;
                    cmd->unk_34 = 68000;
                    cmd->unk_38 = 160000;
                    cmd->unk_48 = 0;
                    cmd->unk_4c |= 0x1000;
                    break;
                default:
                    goto invalid;
            }
            cmd->unk_1c = 0x10000;
            cmd->unk_20 = 0x100;
            cmd->unk_24 = 3;
            cmd->unk_28 = 5;
            cmd->unk_4c |= 0xB40;
        } else if (kind == 3) {
            if (size != 0x2000 && size != 0x8000) {
                goto invalid;
            }
            cmd->unk_20 = size;
            cmd->unk_1c = size;
            cmd->unk_24 = 2;
            cmd->unk_48 = 0;
            cmd->unk_4c |= 0x340;
        } else {
            goto invalid;
        }
    }
    return;

invalid:
    cmd->unk_18 = cmd->unk_04     = 0;
    data_02090200.unk_000->unk_00 = 3;
}
