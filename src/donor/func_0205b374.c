/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WmDataSharingSetDataCallback from projets/blue-dragon-awakened-shadow/src/auto/WmDataSharingSetDataCallback.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
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
typedef struct UnkWmPortSendCallback {
    u16 apiid;
    u16 errcode;
    u8 unk_04[6];
    u16 port;
    u8 unk_0c[0xe];
    u16 seqNo;
    void *callback;
    void *arg;
} UnkWmPortSendCallback;
typedef struct UnkWmDataSet {
    u16 aidBitmap;
    u16 receivedBitmap;
    u16 data[14];
    u16 childData[240];
} UnkWmDataSet;
typedef struct UnkWmDataSharingInfo {
    UnkWmDataSet ds[4];
    u16 seqNum[4];
    u16 writeIndex;
    u16 sendIndex;
    u16 readIndex;
    u16 aidBitmap;
    u16 dataLength;
    u16 stationNumber;
    u16 dataSetLength;
    u16 port;
    u16 doubleMode;
    u16 currentSeqNum;
    u16 state;
    u16 reserved;
} UnkWmDataSharingInfo;
extern UnkWmArm9Buf *func_02059bd8(void);
extern u16 func_0205a0a8(void);
extern void func_0205b374(void *arg);
extern void func_0205b44c(void *arg);
extern void func_0205b578(void *arg);
void func_0205b374(void *arg) {
    UnkWmPortSendCallback *cb    = (UnkWmPortSendCallback *) arg;
    UnkWmArm9Buf *p              = func_02059bd8();
    UnkWmCallbackFunc callback   = p->portCallbackTable[cb->port];
    UnkWmDataSharingInfo *dsInfo = (UnkWmDataSharingInfo *) p->portCallbackArgument[cb->port];
    u16 aid;

    if (callback != func_0205b44c && callback != func_0205b578) {
        return;
    }
    if (dsInfo == 0) {
        return;
    }
    if (dsInfo != cb->arg) {
        return;
    }

    aid = func_0205a0a8();
    if (cb->errcode == 0) {
        if (aid != 0) {
            return;
        }
        dsInfo->seqNum[dsInfo->sendIndex] = (u16) (cb->seqNo >> 1);
        dsInfo->sendIndex                 = (u16) ((dsInfo->sendIndex + 1) & 3);
    } else if (cb->errcode == 10) {
        if (aid != 0) {
            dsInfo->sendIndex = (u16) ((dsInfo->sendIndex + 3) & 3);
        }
        dsInfo->state = 4;
    } else {
        dsInfo->state = 5;
    }
}
extern void func_0205b44c(void *arg);
extern void func_0205b578(void *arg);
