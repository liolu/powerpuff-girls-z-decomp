/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_GetWaveDataAddress from projets/blue-dragon-awakened-shadow/src/auto/SND_GetWaveDataAddress.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
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
const void *func_020547d8(const UnkSndWaveArc *waveArc, s32 index) {
    const void *wave;

    func_02053ae4();
    wave = (const void *) waveArc->waveOffset[index];
    if (wave != 0) {
        if ((u32) wave < 0x02000000) {
            wave = (const void *) ((u32) waveArc + (u32) wave);
        }
    } else {
        wave = 0;
    }
    func_02053af8();
    return wave;
}
