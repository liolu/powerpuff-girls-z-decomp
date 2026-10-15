/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MIi_CheckAnotherAutoDMA from projets/blue-dragon-awakened-shadow/src/auto/MIi_CheckAnotherAutoDMA.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
typedef int s32;
extern void func_02052eb4(void);
void func_020532fc(u32 dmaNo, u32 dmaType) {
    s32 i;
    vu32 *cnt = &(((vu32 *) 0x040000b0)[(0) * 3 + 2]);

    for (i = 0; i < 3; i++, cnt += 3) {
        u32 dmaCnt;
        if (i == dmaNo) {
            continue;
        }
        dmaCnt = *cnt;
        if (!(dmaCnt & 0x80000000)) {
            continue;
        }
        dmaCnt &= 0x38000000;
        if (dmaCnt == dmaType) {
            continue;
        }
        if (dmaCnt == 0x08000000 && dmaType == 0x10000000) {
            continue;
        }
        if (dmaCnt == 0x10000000 && dmaType == 0x08000000) {
            continue;
        }
        if (dmaCnt == 0x18000000 || dmaCnt == 0x20000000 || dmaCnt == 0x28000000 || dmaCnt == 0x30000000 ||
            dmaCnt == 0x38000000 || dmaCnt == 0x08000000 || dmaCnt == 0x10000000) {
            func_02052eb4();
        }
    }
}
