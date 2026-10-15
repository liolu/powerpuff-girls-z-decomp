/* compiler: 2.0/sp1p5  */
/* NNS_SndInit from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndInit.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02053aac();
extern M2C_UNK func_02057b24(M2C_UNK *);
extern M2C_UNK func_02057b3c(M2C_UNK *);
extern M2C_UNK func_02063bc4();
extern M2C_UNK func_02063e10();
extern M2C_UNK func_02064a48();
extern M2C_UNK data_020976c0;
extern M2C_UNK data_020976d0;
extern M2C_UNK data_020976dc;
extern M2C_UNK func_02063a84;
extern M2C_UNK func_02063abc;
void func_02063978(void) {
    if ((*(s32 *) ((s8 *) (&data_020976c0) + (0xC))) != 0) {
        return;
    }
    (*(s32 *) ((s8 *) (&data_020976c0) + (0xC))) = 1;
    func_02053aac();
    (*(M2C_UNK **) ((s8 *) (&data_020976c0) + (0x10))) = &func_02063a84;
    (*(s32 *) ((s8 *) (&data_020976c0) + (0x14)))      = 0;
    (*(M2C_UNK **) ((s8 *) (&data_020976c0) + (0x1C))) = &func_02063abc;
    (*(s32 *) ((s8 *) (&data_020976c0) + (0x20)))      = 0;
    func_02057b24(&data_020976d0);
    func_02057b3c(&data_020976dc);
    func_02063bc4();
    func_02064a48();
    func_02063e10();
    (*(s8 *) ((s8 *) (&data_020976c0) + (0)))  = -1;
    (*(s32 *) ((s8 *) (&data_020976c0) + (4))) = 1;
}
