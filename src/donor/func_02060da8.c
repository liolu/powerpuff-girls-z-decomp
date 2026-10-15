/* compiler: 2.0/sp1p5  */
/* CTRDG_Init from projets/blue-dragon-awakened-shadow/src/auto/CTRDG_Init.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02054814();
extern M2C_UNK func_02054920(M2C_UNK, M2C_UNK *);
extern s32 func_0205496c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02060a90();
extern M2C_UNK func_02060d60(M2C_UNK);
extern M2C_UNK func_02060e5c();
extern M2C_UNK func_02061100(M2C_UNK *);
extern M2C_UNK data_020970c0;
extern M2C_UNK data_020971a0;
extern M2C_UNK func_02061050;
extern M2C_UNK func_0206107c;
extern M2C_UNK func_020610ec;
void func_02060da8(void) {
    if ((*(s32 *) ((s8 *) (&data_020970c0) + (8))) != 0) {
        return;
    }
    (*(s32 *) ((s8 *) (&data_020970c0) + (8))) = 1;
    func_02060a90();
    (*(s32 *) ((s8 *) (&data_020970c0) + (0xC))) = 0;
    func_02054814();
    do {

    } while (func_0205496c(0xD, 1) == 0);
    func_02054920(0xD, &func_02061050);
    func_02060e5c();
    func_02054920(0xD, ((void *) 0));
    func_02054920(0xD, &func_0206107c);
    (*(s32 *) ((s8 *) (&data_020970c0) + (0x18))) = 0;
    func_02061100(&data_020971a0);
    func_02054920(0x11, &func_020610ec);
    func_02060d60(0);
}
