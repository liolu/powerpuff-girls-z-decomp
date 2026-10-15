/* compiler: 2.0/sp1p5  */
/* MB_CommGetChildUser from projets/heroes-of-mana/src/nitro/mb/mb_parent_2.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern void func_02053574(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_0205ce40(M2C_UNK);
extern s32 data_0209706c;
s32 func_0205bac4(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_02052c30();
    if ((data_0209706c != 0) && (func_0205ce40(arg0) != 0)) {
        func_02053574(((arg0 - 1) * 0x16) + (data_0209706c + 0x1340), data_0209706c + 0x1772, 0x16);
        func_02052c44(temp_r4);
        return data_0209706c + 0x1772;
    }
    func_02052c44(temp_r4);
    return 0;
}
