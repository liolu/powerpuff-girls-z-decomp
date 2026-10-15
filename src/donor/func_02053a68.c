/* compiler: 2.0/sp1p5  */
/* PushCommand_impl from projets/blue-dragon-awakened-shadow/src/auto/PushCommand_impl.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02053cf0(M2C_UNK);
extern M2C_UNK func_02053d78();
void func_02053a68(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r0;

    temp_r0 = func_02053cf0(1);
    if (temp_r0 == ((void *) 0)) {
        return;
    }
    (*(s32 *) ((s8 *) (temp_r0) + (4)))    = arg0;
    (*(s32 *) ((s8 *) (temp_r0) + (8)))    = arg1;
    (*(s32 *) ((s8 *) (temp_r0) + (0xC)))  = arg2;
    (*(s32 *) ((s8 *) (temp_r0) + (0x10))) = arg3;
    (*(s32 *) ((s8 *) (temp_r0) + (0x14))) = arg4;
    func_02053d78();
}
