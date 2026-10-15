/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WmDataSharingSendDataSet from projets/blue-dragon-awakened-shadow/src/auto/WmDataSharingSendDataSet.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
extern u32 func_02052c30(void);
extern u32 func_02052c44(u32 state);
extern void func_02053434(u16 value, void *dest, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
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
extern u16 func_0205a108(void);
extern u32 func_0205af9c(UnkWmCallbackFunc callback, void *arg, const u16 *sendData, u16 sendDataSize, u16 destBitmap,
                         u16 port, u16 prio);
extern void func_0205b374(void *arg);
extern void func_0205b738(UnkWmDataSharingInfo *dsInfo, BOOL delayed);
extern void func_0205b374(void *arg);
void func_0205b738(UnkWmDataSharingInfo *dsInfo, BOOL delayed) {
    u32 enabled = func_02052c30();

    if (dsInfo->ds[dsInfo->writeIndex].aidBitmap == 0) {
        u16 connectedAIDs = func_0205a108();
        u16 oldWI         = dsInfo->writeIndex;
        u16 nextWI        = (u16) ((oldWI + 1) & 3);
        u16 newWI;
        u32 result;

        if (dsInfo->doubleMode == 1) {
            newWI = (u16) ((nextWI + 1) & 3);
        } else {
            newWI = nextWI;
        }
        func_02053434(0, &dsInfo->ds[newWI], sizeof(UnkWmDataSet));
        dsInfo->ds[newWI].aidBitmap = (u16) (dsInfo->aidBitmap & (connectedAIDs | 1));
        dsInfo->writeIndex          = nextWI;
        dsInfo->ds[oldWI].aidBitmap = dsInfo->aidBitmap;
        if (delayed == 1) {
            dsInfo->ds[oldWI].aidBitmap &= ~1;
        }
        func_02052c44(enabled);

        result = func_0205af9c(func_0205b374, dsInfo, (u16 *) &dsInfo->ds[oldWI], dsInfo->dataSetLength,
                               (u16) (dsInfo->aidBitmap & connectedAIDs), dsInfo->port, 1);
        if (result == 7) {
            dsInfo->seqNum[oldWI] = 0xffff;
            dsInfo->sendIndex     = (u16) ((dsInfo->sendIndex + 1) & 3);
        } else if (result != 0 && result != 2) {
            dsInfo->state = 5;
        }
    } else {
        func_02052c44(enabled);
    }
}
