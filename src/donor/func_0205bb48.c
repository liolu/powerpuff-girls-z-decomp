/* compiler: 2.0/sp1p5  */
/* MB_CommIsBootable from projets/heroes-of-mana/src/nitro/mb/mb_parent_2.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205ce40(M2C_UNK);
extern s32 data_0209706c;
s32 func_0205bb48(s32 arg0) {
    if ((data_0209706c != 0) && (func_0205ce40(arg0) != 0) &&
        ((*(s32 *) ((s8 *) ((data_0209706c + ((arg0 - 1) * 4))) + (0x14E8))) == 7)) {
        return 1;
    }
    return 0;
}
