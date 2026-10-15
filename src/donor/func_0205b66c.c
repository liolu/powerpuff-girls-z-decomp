/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WmDataSharingReceiveData from projets/blue-dragon-awakened-shadow/src/auto/WmDataSharingReceiveData.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u32 func_02052c30(void);
extern u32 func_02052c44(u32 state);
extern void func_0205344c(const void *src, void *dest, u32 size);
extern void func_02053434(u16 value, void *dest, u32 size);
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
extern void func_0205b66c(UnkWmDataSharingInfo *dsInfo, u16 aid, u16 *data);
extern u16 *func_0205b88c(UnkWmDataSharingInfo *dsInfo, u32 aidBitmap, u16 *data, u32 aid);
void func_0205b66c(UnkWmDataSharingInfo *dsInfo, u16 aid, u16 *data) {
    u16 aidBit = (u16) (1 << aid);
    u16 index;
    u32 enabled;

    if (!(dsInfo->aidBitmap & aidBit)) {
        return;
    }
    index = dsInfo->writeIndex;
    if (!(dsInfo->ds[index].aidBitmap & aidBit)) {
        if (dsInfo->doubleMode != 1) {
            return;
        }
        index = (u16) ((index + 1) & 3);
        if (!(dsInfo->ds[index].aidBitmap & aidBit)) {
            return;
        }
    }

    {
        u16 *buf = func_0205b88c(dsInfo, dsInfo->aidBitmap, dsInfo->ds[index].data, aid);
        if (data != 0) {
            func_0205344c(data, buf, dsInfo->dataLength);
        } else {
            func_02053434(0, buf, dsInfo->dataLength);
        }
    }

    enabled = func_02052c30();
    dsInfo->ds[index].aidBitmap &= ~aidBit;
    dsInfo->ds[index].receivedBitmap |= aidBit;
    func_02052c44(enabled);
}
extern u16 *func_0205b88c(UnkWmDataSharingInfo *dsInfo, u32 aidBitmap, u16 *data, u32 aid);
