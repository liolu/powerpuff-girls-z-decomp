/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndAllocAlarm from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndAllocAlarm.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct {
    u32 unk_00;
    u32 allocatedBits;
    u32 lockedChannels;
} UnkSndResourceState;
extern UnkSndResourceState data_02099ac0;
int func_02063b5c(void) {
    int i;
    u32 bit = 1;

    for (i = 0; i < 8; i++) {
        if ((data_02099ac0.allocatedBits & bit) == 0) {
            data_02099ac0.allocatedBits |= bit;
            return i;
        }
        bit <<= 1;
    }
    return -1;
}
