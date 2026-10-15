/* compiler: 2.0/sp1p5  */
/* SND_CountWaitingCommand from projets/blue-dragon-awakened-shadow/src/auto/SND_CountWaitingCommand.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef long s32;
extern s32 func_02054054();
extern s32 func_02054090();
s32 func_020540cc(void) {
    s32 temp_r4;

    temp_r4 = func_02054054();
    return (0x100 - temp_r4) - func_02054090();
}
