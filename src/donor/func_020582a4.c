/* compiler: 2.0/sp1p5  */
/* RtcSendPxiCommand from projets/blue-dragon-awakened-shadow/src/auto/RtcSendPxiCommand.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02054990(M2C_UNK, s32, M2C_UNK);
s32 func_020582a4(s32 arg0) {
    if (func_02054990(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        return 1;
    }
    return 0;
}
