/* compiler: 2.0/sp1p5  */
/* FSi_RomArchiveProc from projets/blue-dragon-awakened-shadow/src/auto/FSi_RomArchiveProc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02058670(u16);
extern M2C_UNK func_0205868c(u16);
extern s32 data_0209003c;
s32 func_020564d4(s32 arg0, s32 arg1) {
    switch (arg1) {
        case 9:
            func_02058670((u16) data_0209003c);
            return 0;
        case 10:
            func_0205868c((u16) data_0209003c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
