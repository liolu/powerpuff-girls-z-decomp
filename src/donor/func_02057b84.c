/* compiler: 2.0/sp1p5  */
/* RTC_Init from projets/heroes-of-mana/src/nitro/rtc/external.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02054814();
extern M2C_UNK func_02054920(M2C_UNK, M2C_UNK *);
extern s32 func_0205496c(M2C_UNK, M2C_UNK);
extern M2C_UNK data_02090154;
extern M2C_UNK func_02057c9c;
void func_02057b84(void) {
    if ((*(u16 *) ((s8 *) (&data_02090154) + (0))) != 0) {
        return;
    }
    (*(u16 *) ((s8 *) (&data_02090154) + (0)))    = 1U;
    (*(s32 *) ((s8 *) (&data_02090154) + (4)))    = 0;
    (*(s32 *) ((s8 *) (&data_02090154) + (8)))    = 0;
    (*(s32 *) ((s8 *) (&data_02090154) + (0x20))) = 0;
    (*(s32 *) ((s8 *) (&data_02090154) + (0xC)))  = 0;
    (*(s32 *) ((s8 *) (&data_02090154) + (0x10))) = 0;
    func_02054814();
    do {

    } while (func_0205496c(5, 1) == 0);
    func_02054920(5, &func_02057c9c);
}
