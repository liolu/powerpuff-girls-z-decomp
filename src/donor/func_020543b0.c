/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_CalcChannelVolume from projets/blue-dragon-awakened-shadow/src/auto/SND_CalcChannelVolume.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
extern const u8 data_02076b48[724];
extern const u8 data_02076b48[724];
u16 func_020543b0(s32 decibel) {
    u8 volume;
    s32 shift;

    if (decibel < -723) {
        decibel = -723;
    } else if (decibel > 0) {
        decibel = 0;
    }
    volume = data_02076b48[decibel + 723];

    if (decibel < -240) {
        shift = 3;
    } else if (decibel < -120) {
        shift = 2;
    } else if (decibel < -60) {
        shift = 1;
    } else {
        shift = 0;
    }
    return (u16) (volume | (shift << 8));
}
