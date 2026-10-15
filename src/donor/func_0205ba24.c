/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WM_MeasureChannel from projets/blue-dragon-awakened-shadow/src/auto/WM_MeasureChannel.c (same code in another game of this
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
extern u32 func_02059b68(void *data, u32 length);
extern UnkWmArm9Buf *func_02059bd8(void);
extern u32 func_02059c4c(s32 paramNum, ...);
typedef struct UnkWmSetLifeTimeReq {
    u16 apiid;
    u16 arg0;
    u16 arg1;
    u16 arg2;
    u16 arg3;
} UnkWmSetLifeTimeReq;
u32 func_0205ba24(UnkWmCallbackFunc callback, u16 arg0, u16 arg1, u16 arg2, u16 arg3) {
    UnkWmSetLifeTimeReq req;
    UnkWmArm9Buf *p = func_02059bd8();
    u32 result      = func_02059c4c(1, 2);

    if (result != 0) {
        return result;
    }
    func_02059a4c(30, callback);
    req.apiid = 30;
    req.arg0  = arg0;
    req.arg1  = arg1;
    req.arg2  = arg2;
    req.arg3  = arg3;
    result    = func_02059b68(&req, sizeof(UnkWmSetLifeTimeReq));
    if (result != 0) {
        return result;
    }
    return 2;
}
