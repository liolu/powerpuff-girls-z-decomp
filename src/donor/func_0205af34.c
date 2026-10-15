/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02019d20 from projets/heroes-of-mana/src/donor/func_02019d20.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
extern void func_02053468(u32 value, void *dest, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
extern u32 func_0205ad34(UnkWmCallbackFunc callback, u16 *recvBuf, s32 recvBufSize, u16 *sendBuf, u16 sendBufSize,
                         void *tmpParam);
typedef struct UnkWmMPTmpParam {
    u32 mask;
    u16 minFrequency;
    u16 frequency;
    u8 unk_08[0x14];
} UnkWmMPTmpParam;
extern u32 func_0205ad34(UnkWmCallbackFunc callback, u16 *recvBuf, s32 recvBufSize, u16 *sendBuf, u16 sendBufSize,
                         void *tmpParam);
u32 func_0205af34(UnkWmCallbackFunc callback, u16 *recvBuf, s32 recvBufSize, u16 *sendBuf, u16 sendBufSize, u16 mpFreq) {
    UnkWmMPTmpParam tmpParam;

    func_02053468(0, &tmpParam, sizeof(UnkWmMPTmpParam));
    tmpParam.mask         = 3;
    tmpParam.minFrequency = mpFreq;
    tmpParam.frequency    = mpFreq;
    return func_0205ad34(callback, recvBuf, recvBufSize, sendBuf, sendBufSize, &tmpParam);
}
