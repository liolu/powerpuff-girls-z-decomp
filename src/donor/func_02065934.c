/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_SndArcLoadWaveArc from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndArcLoadWaveArc.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndWaveArcInfo {
    u32 fileId : 24;
    u32 flags : 8;
} UnkSndWaveArcInfo;
extern void *func_02065064(int index);
extern void *func_02065340(u32 fileId);
extern int func_02065934(int waveArcNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_02065ba4(u32 fileId, void *heap, BOOL addToArc);
extern void *func_02065c10(u32 fileId, void *heap, BOOL addToArc);
int func_02065934(int waveArcNo, u32 flags, void *heap, BOOL addToArc, void **pData) {
    UnkSndWaveArcInfo *info = func_02065064(waveArcNo);
    void *data;

    if (info == 0) {
        return 5;
    }

    if (flags & 4) {
        if (info->flags & 1) {
            data = func_02065c10(info->fileId, heap, addToArc);
        } else {
            data = func_02065ba4(info->fileId, heap, addToArc);
        }
        if (data == 0) {
            return 9;
        }
    } else {
        data = func_02065340(info->fileId);
    }

    if (pData != 0) {
        *pData = data;
    }
    return 0;
}
extern void *func_02065ba4(u32 fileId, void *heap, BOOL addToArc);
extern void *func_02065c10(u32 fileId, void *heap, BOOL addToArc);
