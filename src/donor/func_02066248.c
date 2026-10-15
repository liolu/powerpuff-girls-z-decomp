/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* StartSeqArc from projets/blue-dragon-awakened-shadow/src/auto/StartSeqArc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndSeqParam {
    u32 fileId;
    u16 bankNo;
    u8 volume;
    u8 channelPrio;
    u8 playerPrio;
    u8 playerNo;
} UnkSndSeqParam;
typedef struct UnkSndSeqData {
    u8 unk_00[0x18];
    u32 dataOffset;
} UnkSndSeqData;
extern int func_020657f4(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_02064028(void *handle, int playerNo, int prio);
extern void func_020640c0(void *seqPlayer);
extern void func_020640cc(void *seqPlayer, const void *seq, u32 offset, const void *bank);
extern void *func_02064168(int playerNo, void *seqPlayer);
extern void func_02063d8c(void *handle, int volume);
extern void func_02063da0(void *handle, int prio);
extern void func_02063de4(void *handle, int seqArcNo, int index);
extern BOOL func_02066248(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, UnkSndSeqData *seqArc,
                          int seqArcNo, int index);
BOOL func_02066248(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, UnkSndSeqData *seqArc,
                   int seqArcNo, int index) {
    void *seqPlayer;
    void *heap;
    void *bank;

    seqPlayer = func_02064028(handle, playerNo, playerPrio);
    if (seqPlayer == 0) {
        return 0;
    }

    heap = func_02064168(playerNo, seqPlayer);

    if (func_020657f4(bankNo, 6, heap, 0, &bank) != 0) {
        func_020640c0(seqPlayer);
        return 0;
    }

    func_020640cc(seqPlayer, (u8 *) seqArc + seqArc->dataOffset, param->fileId, bank);
    func_02063d8c(handle, param->volume);
    func_02063da0(handle, param->channelPrio);
    func_02063de4(handle, seqArcNo, index);
    return 1;
}
