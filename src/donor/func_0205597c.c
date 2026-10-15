/* compiler: 2.0/sp1p5  */
/* FSi_ExecuteAsyncCommand from projets/blue-dragon-awakened-shadow/src/auto/FSi_ExecuteAsyncCommand.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205188c(void *);
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern s32 func_02054b8c(void *, s32);
extern void *func_02055768(s32);
void func_0205597c(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0;
    void *var_r6;

    var_r6  = arg0;
    temp_r4 = (*(volatile s32 *) ((s8 *) (var_r6) + (8)));
    if (var_r6 == ((void *) 0)) {
        return;
    }
loop_3:
    temp_r5                                       = func_02052c30();
    (*(volatile s32 *) ((s8 *) (var_r6) + (0xC))) = (s32) ((*(volatile s32 *) ((s8 *) (var_r6) + (0xC))) | 0x40);
    if ((*(volatile s32 *) ((s8 *) (var_r6) + (0xC))) & 4) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_0205188c(var_r6 + 0x18);
        func_02052c44(temp_r5);
        return;
    }
    (*(volatile s32 *) ((s8 *) (var_r6) + (0xC))) = (s32) ((*(volatile s32 *) ((s8 *) (var_r6) + (0xC))) | 8);
    func_02052c44(temp_r5);
    if (func_02054b8c(var_r6, (*(volatile s32 *) ((s8 *) (var_r6) + (0x10)))) == 6) {
        return;
    }
    var_r6 = func_02055768(temp_r4);
    if (var_r6 == ((void *) 0)) {
        return;
    }
    goto loop_3;
}
