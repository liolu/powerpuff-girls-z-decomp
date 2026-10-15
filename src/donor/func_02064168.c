/* compiler: 2.0/sp1p5  */
/* NNSi_SndPlayerAllocHeap from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndPlayerAllocHeap.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020635e8(s32, void *);
extern void *func_02063648(s32, M2C_UNK);
extern M2C_UNK func_02065430(s32);
extern M2C_UNK data_02099f24;
s32 func_02064168(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &data_02099f24;
    temp_r0 = func_02063648(temp_r5 + 0xC, 0);
    if (temp_r0 == ((void *) 0)) {
        return 0;
    }
    func_020635e8(temp_r5 + 0xC, temp_r0);
    (*(void **) ((s8 *) (temp_r0) + (0xC))) = arg1;
    (*(void **) ((s8 *) (arg1) + (8)))      = temp_r0;
    func_02065430((*(s32 *) ((s8 *) (temp_r0) + (8))));
    return (*(s32 *) ((s8 *) (temp_r0) + (8)));
}
