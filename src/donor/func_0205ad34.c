/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02019b20 from projets/heroes-of-mana/src/donor/func_02019b20.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
extern void func_02051ff4(void *ptr, u32 size);
extern void func_0205347c(const void *src, void *dest, u32 size);
extern void func_02053468(u32 value, void *dest, u32 size);
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
extern s32 func_0205a26c(void);
extern s32 func_0205a2d8(void);
extern u32 func_0205ad34(UnkWmCallbackFunc callback, u16 *recvBuf, s32 recvBufSize, u16 *sendBuf, u16 sendBufSize,
                         void *tmpParam);
typedef struct UnkWmMPTmpParam {
    u32 mask;
    u16 minFrequency;
    u16 frequency;
    u8 unk_08[0x14];
} UnkWmMPTmpParam;
typedef struct UnkWmStartMPReq {
    u16 apiid;
    u16 unk_02;
    u16 *recvBuf;
    u32 recvBufSize;
    u16 *sendBuf;
    u32 sendBufSize;
    UnkWmMPTmpParam param;
} UnkWmStartMPReq;
u32 func_0205ad34(UnkWmCallbackFunc callback, u16 *recvBuf, s32 recvBufSize, u16 *sendBuf, u16 sendBufSize, void *tmpParam) {
    UnkWmStartMPReq req;
    UnkWmStatus *status = func_02059bd8()->status;
    u32 result          = func_02059c4c(2, 7, 8);

    if (result != 0) {
        return result;
    }

    func_02051ff4(&status->unk_188, 2);
    func_02051ff4(&status->unk_0c6, 2);
    if (status->unk_188 != 0 && status->unk_0c6 != 1) {
        return 3;
    }
    func_02051ff4(&status->unk_00c, 4);
    if (status->unk_00c == 1) {
        return 3;
    }
    if (recvBufSize & 0x3f) {
        return 6;
    }
    if (sendBufSize & 0x1f) {
        return 6;
    }
    func_02051ff4(&status->unk_09c, 2);
    if (status->unk_09c == 0) {
        if (recvBufSize < func_0205a2d8()) {
            return 6;
        }
        if (sendBufSize < func_0205a26c()) {
            return 6;
        }
    }

    func_02059a4c(14, callback);
    func_02053468(0, &req, sizeof(UnkWmStartMPReq));
    req.apiid       = 14;
    req.recvBuf     = recvBuf;
    req.recvBufSize = (u32) recvBufSize >> 1;
    req.sendBuf     = sendBuf;
    req.sendBufSize = sendBufSize;
    func_0205347c(tmpParam, &req.param, sizeof(UnkWmMPTmpParam));
    result = func_02059b68(&req, sizeof(UnkWmStartMPReq));
    if (result != 0) {
        return result;
    }
    return 2;
}
