/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_AssignWaveArc from projets/blue-dragon-awakened-shadow/src/auto/SND_AssignWaveArc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
extern void func_02052010(void *ptr, u32 size);
extern void func_02053ae4(void);
extern void func_02053af8(void);
typedef struct UnkSndWaveArc UnkSndWaveArc;
typedef struct UnkSndWaveArcLink {
    UnkSndWaveArc *waveArc;
    struct UnkSndWaveArcLink *next;
} UnkSndWaveArcLink;
struct UnkSndWaveArc {
    u8 unk_00[8];
    u32 fileSize;
    u8 unk_0c[4];
    u8 blockHeader[8];
    UnkSndWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
};
typedef struct UnkSndBankData {
    u8 fileHeader[0x10];
    u8 blockHeader[8];
    UnkSndWaveArcLink waveArcLink[4];
    u32 instCount;
    u32 instOffset[1];
} UnkSndBankData;
void func_02054420(UnkSndBankData *bank, s32 index, UnkSndWaveArc *waveArc) {
    func_02053ae4();

    if (bank->waveArcLink[index].waveArc != 0) {
        if (waveArc == bank->waveArcLink[index].waveArc) {
            func_02053af8();
            return;
        }
        if (&bank->waveArcLink[index] == bank->waveArcLink[index].waveArc->topLink) {
            bank->waveArcLink[index].waveArc->topLink = bank->waveArcLink[index].next;
            func_02052010(bank->waveArcLink[index].waveArc, 0x3c);
        } else {
            UnkSndWaveArcLink *link;
            for (link = bank->waveArcLink[index].waveArc->topLink; link != 0; link = link->next) {
                if (&bank->waveArcLink[index] == link->next) {
                    break;
                }
            }
            link->next = bank->waveArcLink[index].next;
            func_02052010(link, sizeof(UnkSndWaveArcLink));
        }
    }

    {
        UnkSndWaveArcLink *next          = waveArc->topLink;
        waveArc->topLink                 = &bank->waveArcLink[index];
        bank->waveArcLink[index].next    = next;
        bank->waveArcLink[index].waveArc = waveArc;
    }

    func_02053af8();
    func_02052010(bank, 0x3c);
    func_02052010(waveArc, 0x3c);
}
