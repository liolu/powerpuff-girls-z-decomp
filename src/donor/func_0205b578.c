/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WmDataSharingReceiveCallback_Child from projets/blue-dragon-awakened-shadow/src/auto/WmDataSharingReceiveCallback_Child.c
 * (same code in another game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern void func_0205344c(const void *src, void *dest, u32 size);
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
extern u16 func_0205a0a8(void);
extern void func_0205b578(void *arg);
void func_0205b578(void *arg) {
    UnkWmPortRecvCallback *cb    = (UnkWmPortRecvCallback *) arg;
    UnkWmDataSharingInfo *dsInfo = (UnkWmDataSharingInfo *) cb->arg;

    if (dsInfo == 0) {
        return;
    }
    if (cb->errcode == 0) {
        switch (cb->state) {
            case 0x15: {
                u16 length;
                u16 aidBitmap;
                u16 *data;
                u16 aid;

                data      = cb->data;
                length    = cb->length;
                aidBitmap = data[0];
                aid       = func_0205a0a8();

                if (length != dsInfo->dataSetLength) {
                    if (length > 512) {
                        length = 512;
                    }
                }
                if (length < 4) {
                    return;
                }
                if (!(aidBitmap & (1 << aid))) {
                    return;
                }
                func_0205344c(data, &dsInfo->ds[dsInfo->writeIndex], length);
                dsInfo->seqNum[dsInfo->writeIndex] = (u16) (cb->seqNo >> 1);
                dsInfo->writeIndex                 = (u16) ((dsInfo->writeIndex + 1) & 3);
                break;
            }
            case 7:
            case 9:
            case 0x19:
            case 0x1a:
                break;
        }
    } else {
        dsInfo->state = 5;
    }
}
