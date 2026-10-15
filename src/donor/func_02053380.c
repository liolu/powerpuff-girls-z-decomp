/* compiler: 2.0/sp1p5  */
/* MIi_CheckDma0SourceAddress from projets/blue-dragon-awakened-shadow/src/auto/MIi_CheckDma0SourceAddress.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052eb4();
void func_02053380(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r1;
    u32 temp_ip;
    u32 temp_r0;

    var_r1 = arg1;
    if (arg0 != 0) {
        return;
    }
    temp_ip = var_r1 & 0xFF000000;
    switch (arg3) {
        case 0x800000:
            var_r1 -= arg2;
            break;
        case 0x0:
            var_r1 += arg2;
            break;
    }
    temp_r0 = var_r1 & 0xFF000000;
    if ((temp_ip != 0x04000000) && (temp_ip < 0x08000000U) && (temp_r0 != 0x04000000) && (temp_r0 < 0x08000000U)) {
        return;
    }
    func_02052eb4();
}
