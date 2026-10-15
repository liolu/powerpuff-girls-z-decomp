/* compiler: 2.0/sp1p5  */
/* OSi_ExitThread_Destroy from projets/blue-dragon-awakened-shadow/src/auto/OSi_ExitThread_Destroy.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020512f4(s32, void *);
extern M2C_UNK func_020513d8(void *);
extern M2C_UNK func_0205188c(void *);
extern M2C_UNK func_02051944();
extern M2C_UNK func_02051a48();
extern M2C_UNK func_02051a7c();
extern M2C_UNK func_02051ec8(void *);
extern M2C_UNK func_02052eb4();
extern M2C_UNK data_0208e0c0;
void func_020517e0(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *(*(void ***) ((s8 *) (&data_0208e0c0) + (8)));
    func_02051a48();
    func_02051ec8(temp_r4);
    temp_r0 = (*(s32 *) ((s8 *) (temp_r4) + (0x78)));
    if (temp_r0 != 0) {
        func_020512f4(temp_r0, temp_r4);
    }
    func_020513d8(temp_r4);
    (*(s32 *) ((s8 *) (temp_r4) + (0x64))) = 2;
    func_0205188c(temp_r4 + 0x9C);
    func_02051a7c();
    func_02051944();
    func_02052eb4();
}
