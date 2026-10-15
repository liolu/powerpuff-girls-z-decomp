/* compiler: 2.0/sp1p5  */
/* NNSi_SndPlayerAllocSeqPlayer from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndPlayerAllocSeqPlayer.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02063648(M2C_UNK, M2C_UNK);
extern void func_02063d6c(M2C_UNK);
extern void func_02064204(M2C_UNK, M2C_UNK);
extern void func_020642a8(M2C_UNK);
extern M2C_UNK func_020642e0(M2C_UNK);
extern M2C_UNK data_02099f24;
s32 func_02064028(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;

    temp_r6 = (arg1 * 0x24) + (s32) &data_02099f24;
    if (*(M2C_UNK *) arg0 != 0) {
        func_02063d6c(arg0);
    }
    if ((u32) (*(u16 *) ((s8 *) (temp_r6) + (8))) >= (u32) (*(u32 *) ((s8 *) (temp_r6) + (0x18)))) {
        temp_r0_2 = func_02063648(temp_r6, 0);
        if (temp_r0_2 == 0) {
            return 0;
        }
        if (arg2 < (s32) (*(u8 *) ((s8 *) (temp_r0_2) + (0x3D)))) {
            return 0;
        }
        func_020642a8(temp_r0_2);
        goto block_8;
    }
block_8:
    temp_r0 = func_020642e0(arg2);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02064204(temp_r6, temp_r0);
    *(M2C_UNK *) temp_r0 = arg0;
    *(M2C_UNK *) arg0    = temp_r0;
    return temp_r0;
}
