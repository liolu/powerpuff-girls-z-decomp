/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02075780 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndPlayerInfo {
    u8 seqMax;
    u8 unk_01;
    u16 allocChBitFlag;
    u32 heapSize;
} UnkSndPlayerInfo;
extern void *func_02064f28(void);
extern void *func_0206512c(int index);
extern void func_02063be0(int playerNo, int seqMax);
extern void func_02063c00(int playerNo, u32 allocChBitFlag);
extern BOOL func_02063c18(int playerNo, void *heap, u32 size);
BOOL func_02065fe8(void *heap) {
    int i;

    func_02064f28();

    for (i = 0; i < 32; i++) {
        UnkSndPlayerInfo *info = func_0206512c(i);
        if (info == 0) {
            continue;
        }

        func_02063be0(i, info->seqMax);
        func_02063c00(i, info->allocChBitFlag);

        if (info->heapSize != 0 && heap != 0) {
            int j;
            for (j = 0; j < info->seqMax; j++) {
                if (!func_02063c18(i, heap, info->heapSize)) {
                    return 0;
                }
            }
        }
    }

    return 1;
}
