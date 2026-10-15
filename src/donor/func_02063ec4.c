/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_SndPlayerMain from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndPlayerMain.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef struct {
    void *prevObject;
    void *nextObject;
} UnkFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} UnkFndList;
typedef struct {
    u8 unk_00[0x10];
} UnkSndFader;
typedef struct {
    u8 unk_00[0x20];
    u8 volume;
} UnkSndPlayerGroup;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    UnkSndPlayerGroup *player;
    u8 unk_08[0x14 - 0x08];
    UnkFndLink prioLink;
    UnkSndFader fader;
    u8 status;
    u8 startedFlag;
    u8 unk_2e;
    u8 updateFlag;
    u32 commandTag;
    u16 seqType;
    u16 unk_36;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 unk_3d;
    s16 extVolume;
    u8 initVolume;
    u8 volume;
    u8 unk_42[2];
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *volatile player;
} UnkSndHandle;
extern UnkFndList data_02099ad8;
extern const s16 data_02076448[];
extern void *func_02063648(UnkFndList *list, void *object);
extern u32 func_020542e0(void);
extern BOOL func_02054004(u32 tag);
extern void func_02064348(UnkSndSeqPlayer *player);
extern void func_02067b50(UnkSndFader *fader);
extern int func_02067b1c(UnkSndFader *fader);
extern BOOL func_02067b68(UnkSndFader *fader);
extern void func_020537a0(u32 playerNo, int volume);
extern void func_020642a8(UnkSndSeqPlayer *player);
extern void func_02053780(u32 playerNo);
void func_02063ec4(void) {
    u32 status              = func_020542e0();
    UnkSndSeqPlayer *player = func_02063648(&data_02099ad8, 0);
    UnkSndSeqPlayer *next;
    int volume;
    int seqVol, initVol, groupVol;

    while (player != 0) {
        next = func_02063648(&data_02099ad8, player);

        if (!player->startedFlag) {
            if (func_02054004(player->commandTag)) {
                player->startedFlag = 1;
            }
        }

        if (player->startedFlag && !(status & (1 << player->playerNo))) {
            func_02064348(player);
        } else {
            func_02067b50(&player->fader);
            seqVol   = data_02076448[player->volume];
            initVol  = data_02076448[player->initVolume];
            groupVol = data_02076448[player->player->volume];
            volume   = data_02076448[func_02067b1c(&player->fader) >> 8];
            volume += initVol + seqVol + groupVol;
            if (volume < -0x8000) {
                volume = -0x8000;
            } else if (volume > 0x7fff) {
                volume = 0x7fff;
            }
            if (volume != player->extVolume) {
                func_020537a0(player->playerNo, volume);
                player->extVolume = volume;
            }
            if (player->status == 2 && func_02067b68(&player->fader)) {
                func_020642a8(player);
            }
            if (player->updateFlag) {
                func_02053780(player->playerNo);
                player->updateFlag = 0;
            }
        }
        player = next;
    }
}
