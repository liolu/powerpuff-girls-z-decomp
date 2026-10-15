/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3X_GetMtxStackLevelPV from projets/blue-dragon-awakened-shadow/src/donor/G3X_GetMtxStackLevelPV.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern s32 func_02050558(s32 *level);
s32 func_02050558(s32 *level) {
    if ((*(vu32 *) 0x04000600) & 0x4000) {
        return -1;
    }
    *level = ((*(vu32 *) 0x04000600) & 0x1f00) >> 8;
    return 0;
}
