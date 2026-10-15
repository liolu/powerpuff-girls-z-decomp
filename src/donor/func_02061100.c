/* compiler: 2.0/sp1p5  */
/* CTRDGi_InitTaskThread from projets/blue-dragon-awakened-shadow/src/auto/CTRDGi_InitTaskThread.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051630(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32);
extern M2C_UNK func_020518f4(void *);
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern M2C_UNK func_0206118c(M2C_UNK *);
extern void *data_02097288;
extern M2C_UNK data_0209728c;
extern M2C_UNK data_020976b0;
extern M2C_UNK func_020611a0;
void func_02061100(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02052c30();
    if (data_02097288 == ((void *) 0)) {
        data_02097288 = arg0;
        func_0206118c(arg0 + 0xC4);
        func_0206118c(&data_0209728c);
        (*(s32 *) ((s8 *) (arg0) + (0xC0))) = 0;
        func_02051630(arg0, &func_020611a0, arg0, &data_020976b0, 0x400, 0x14);
        func_020518f4(arg0);
    }
    func_02052c44(temp_r4);
}
