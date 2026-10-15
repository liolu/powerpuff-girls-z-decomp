/* compiler: 2.0/sp1p5  */
/* OS_SetCurrentHeap from projets/heroes-of-mana/src/nitro/os/os_alloc_2.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern M2C_UNK data_0208e344;
s32 func_020526f4(s32 arg0, s32 arg1) {
    s32 *temp_r1;
    s32 temp_r0;
    s32 temp_r4;

    temp_r0  = func_02052c30();
    temp_r1  = *((M2C_UNK *) ((s8 *) &data_0208e344 + (arg0 * 4)));
    temp_r4  = *temp_r1;
    *temp_r1 = arg1;
    func_02052c44(temp_r0);
    return temp_r4;
}
