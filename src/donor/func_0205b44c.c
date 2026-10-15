/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WmDataSharingReceiveCallback_Parent from projets/blue-dragon-awakened-shadow/src/auto/WmDataSharingReceiveCallback_Parent.c
 * (same code in another game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern u32 func_02052c30(void);
extern u32 func_02052c44(u32 state);
typedef struct UnkWmPortRecvCallback {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 port;
    u16 *recvBuf;
    u16 *data;
    u16 length;
    u16 aid;
    u8 macAddress[6];
    u16 seqNo;
    void *arg;
    u16 myAid;
    u16 connectedAidBitmap;
    u8 ssid[24];
    u16 reason;
    u16 rssi;
    u16 maxSendDataSize;
    u16 maxRecvDataSize;
} UnkWmPortRecvCallback;
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
extern void func_0205b44c(void *arg);
extern void func_0205b66c(UnkWmDataSharingInfo *dsInfo, u16 aid, u16 *data);
extern void func_0205b738(UnkWmDataSharingInfo *dsInfo, BOOL delayed);
void func_0205b44c(void *arg) {
    UnkWmPortRecvCallback *cb    = (UnkWmPortRecvCallback *) arg;
    UnkWmDataSharingInfo *dsInfo = (UnkWmDataSharingInfo *) cb->arg;

    if (dsInfo == 0) {
        return;
    }
    if (cb->errcode == 0) {
        switch (cb->state) {
            case 0x15:
                func_0205b66c(dsInfo, cb->aid, cb->data);
                func_0205b738(dsInfo, 0);
                break;
            case 7:
                func_0205b738(dsInfo, 0);
                break;
            case 9:
            case 0x1a: {
                u16 aid     = cb->aid;
                u32 aidBit  = 1U << aid;
                u32 enabled = func_02052c30();
                u16 index   = dsInfo->writeIndex;

                dsInfo->ds[index].aidBitmap &= ~aidBit;
                if (dsInfo->doubleMode == 1) {
                    dsInfo->ds[(u16) ((index + 1) & 3)].aidBitmap &= ~aidBit;
                }
                func_02052c44(enabled);

                func_0205b738(dsInfo, 0);
                if (dsInfo->doubleMode == 1) {
                    func_0205b738(dsInfo, 0);
                }
                break;
            }
            case 0x19:
                break;
        }
    } else {
        dsInfo->state = 5;
    }
}
extern void func_0205b66c(UnkWmDataSharingInfo *dsInfo, u16 aid, u16 *data);
extern void func_0205b738(UnkWmDataSharingInfo *dsInfo, BOOL delayed);
