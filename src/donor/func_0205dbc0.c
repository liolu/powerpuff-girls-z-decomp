/* compiler: 2.0/sp1p5  */
/* MBi_MakeGameInfo from projets/heroes-of-mana/src/nitro/mb/mb_gameinfo.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02053434(M2C_UNK, void *, M2C_UNK);
extern M2C_UNK func_0205344c(s32, void *, u16);
extern M2C_UNK func_02053494(M2C_UNK, void *, M2C_UNK);
extern s32 func_0205dcb0(s32, void *, M2C_UNK);
extern s32 func_0205ddc0(s32);
void func_0205dbc0(void *arg0, void *arg1, s32 arg2) {
    s32 var_r0;
    s32 var_r7;

    func_02053434(0, arg0, 0x4C0);
    (*(s8 *) ((s8 *) (arg0) + (0x4B2))) = 0;
    if (func_0205dcb0((*(s32 *) ((s8 *) (arg1) + (0xC))), arg0, 1) == 0) {
        var_r7 = 1;
    } else {
        var_r7 = 0;
    }
    if (func_0205dcb0((*(s32 *) ((s8 *) (arg1) + (0x10))), arg0, 0) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if ((var_r7 | var_r0) != 0) {
        (*(s8 *) ((s8 *) (arg0) + (0x4B2))) = 1;
        func_02053494(0, arg0, 0x220);
    }
    (*(s32 *) ((s8 *) (arg0) + (0x4B8))) = (s32) (*(s32 *) ((s8 *) (arg1) + (0x14)));
    if (arg2 != 0) {
        func_0205344c(arg2, arg0 + 0x220, 0x16U);
    }
    (*(u8 *) ((s8 *) (arg0) + (0x236))) = (u8) (*(u8 *) ((s8 *) (arg1) + (0x18)));
    func_0205344c((*(s32 *) ((s8 *) (arg1) + (4))), arg0 + 0x238, (u16) (func_0205ddc0((*(s32 *) ((s8 *) (arg1) + (4)))) * 2));
    func_0205344c((*(s32 *) ((s8 *) (arg1) + (8))), arg0 + 0x298, 0xC0U);
    (*(s8 *) ((s8 *) (arg0) + (0x358)))  = 1;
    (*(s16 *) ((s8 *) (arg0) + (0x35A))) = 1;
    (*(s16 *) ((s8 *) (arg0) + (0x4B0))) = 1;
}
