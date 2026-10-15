/* compiler: 2.0/sp1p5  */
/* CTRDGi_CallbackForInitModuleInfo from projets/blue-dragon-awakened-shadow/src/auto/CTRDGi_CallbackForInitModuleInfo.c (same
 * code in another game of this workspace), reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052eb4();
extern s16 data_020970bc;
void func_02061050(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_020970bc = 1;
        return;
    }
    func_02052eb4();
}
