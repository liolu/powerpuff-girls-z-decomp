/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* AllocSeqPlayer from projets/blue-dragon-awakened-shadow/src/auto/AllocSeqPlayer.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_020635e8(UnkList *list, void *obj);
extern void *func_02063648(UnkList *list, void *obj);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    struct UnkSndPlayer *player;
    struct UnkSndPlayerHeap *heap;
    UnkLink prioLink;
    UnkLink playerLink;
    UnkSndFader fader;
    u8 status;
    u8 unk_2d;
    u8 unk_2e;
    u8 unk_2f;
    u32 commandTag;
    u16 unk_34;
    u8 unk_36[6];
    u8 playerNo;
    u8 prio;
    u16 unk_3e;
    u8 unk_40;
    u8 unk_41;
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *player;
} UnkSndHandle;
typedef struct UnkSndPlayer {
    UnkList playerList;
    UnkList heapList;
    u32 playableSeqCount;
    u32 allocChBitFlag;
    u32 unk_20;
} UnkSndPlayer;
typedef struct UnkSndPlayerHeap {
    UnkLink link;
    void *heap;
    UnkSndSeqPlayer *seqPlayer;
    int playerNo;
} UnkSndPlayerHeap;
extern UnkList data_02099acc;
extern UnkList data_02099ad8;
extern void func_02064254(UnkSndSeqPlayer *seqPlayer);
extern void func_020642a8(UnkSndSeqPlayer *seqPlayer);
extern UnkSndSeqPlayer *func_020642e0(int prio);
extern void func_02064254(UnkSndSeqPlayer *seqPlayer);
extern void func_020642a8(UnkSndSeqPlayer *seqPlayer);
UnkSndSeqPlayer *func_020642e0(int prio) {
    UnkSndSeqPlayer *seqPlayer = func_02063648(&data_02099acc, 0);

    if (seqPlayer == 0) {
        seqPlayer = func_02063648(&data_02099ad8, 0);
        if (prio < seqPlayer->prio) {
            return 0;
        }
        func_020642a8(seqPlayer);
    }

    func_020635e8(&data_02099acc, seqPlayer);
    seqPlayer->prio = prio;
    func_02064254(seqPlayer);
    return seqPlayer;
}
