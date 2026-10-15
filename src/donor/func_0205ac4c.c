/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WM_Disconnect from projets/blue-dragon-awakened-shadow/src/auto/WM_Disconnect.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef void (*UnkWmCallbackFunc)(void *arg);
typedef struct UnkWmStatus {
    u16 state;
    u8 unk_002[0xa];
    u32 unk_00c;
    u8 unk_010[0x2c];
    u16 unk_03c;
    u16 unk_03e;
    u8 unk_040[0x32];
    u16 unk_072;
    u8 unk_074[0x8];
    u32 unk_07c;
    u8 unk_080[0x6];
    u16 unk_086;
    u8 unk_088[0x14];
    u16 unk_09c;
    u8 unk_09e[0x1e];
    u16 unk_0bc;
    u8 unk_0be[0x8];
    u16 unk_0c6;
    u8 unk_0c8[0x30];
    u16 unk_0f8;
    u8 unk_0fa[0x88];
    u16 unk_182;
    u8 unk_184[0x4];
    u16 unk_188;
} UnkWmStatus;
typedef struct UnkWmArm9Buf {
    void *unk_000;
    UnkWmStatus *status;
    void *unk_008;
    void *unk_00c;
    void *unk_010;
    u16 dmaNo;
    u16 unk_016;
    UnkWmCallbackFunc callbackTable[0x2c];
    UnkWmCallbackFunc indCallback;
    UnkWmCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
    u32 connectedAidBitmap;
    u16 myAid;
} UnkWmArm9Buf;
extern void func_02059a4c(u32 id, UnkWmCallbackFunc callback);
extern UnkWmArm9Buf *func_02059bd8(void);
extern u32 func_02059c4c(s32 paramNum, ...);
extern void func_02051ff4(void *ptr, u32 size);
extern u32 func_02059abc(u16 id, u16 paramNum, ...);
u32 func_0205ac4c(UnkWmCallbackFunc callback, u16 aid) {
    UnkWmArm9Buf *p = func_02059bd8();
    u32 result      = func_02059c4c(5, 7, 9, 8, 10, 11);

    if (result != 0) {
        return result;
    }
    if (p->status->state == 7 || p->status->state == 9) {
        if (aid < 1 || aid > 15) {
            return 6;
        }
        func_02051ff4(&p->status->unk_182, 2);
        if (!(p->status->unk_182 & (1 << aid))) {
            return 7;
        }
    } else {
        if (aid != 0) {
            return 6;
        }
    }

    func_02059a4c(13, callback);
    result = func_02059abc(13, 1, 1 << aid);
    if (result != 0) {
        return result;
    }
    return 2;
}
