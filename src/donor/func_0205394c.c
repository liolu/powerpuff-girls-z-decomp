/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_SetupChannelPcm from projets/blue-dragon-awakened-shadow/src/auto/SND_SetupChannelPcm.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern void func_02053a68(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
void func_0205394c(s32 chNo, s32 format, const void *dataAddr, s32 loop, s32 loopStart, s32 loopLen, s32 volume, s32 shift,
                   s32 timer, s32 pan) {
    func_02053a68(14, chNo | (timer << 16), (u32) dataAddr, loopLen | ((volume << 24) | (shift << 22)),
                  loopStart | ((loop << 26) | (format << 24) | (pan << 16)));
}
extern void func_02053a68(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
