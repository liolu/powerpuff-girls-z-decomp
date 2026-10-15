/* compiler: 2.0/sp1p5  */
/* func_02046604 from projets/fairy-tail-kardia/src/auto/func_02046604.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020534e0(s32, M2C_UNK, s32);
extern M2C_UNK func_02053574(s32, s32, s32);
void func_0205d350(void *arg0, u32 arg1, u32 arg2, s32 arg3) {
    u32 temp_ip;
    u32 temp_r1;
    u32 var_lr;
    u32 var_r2;

    var_r2  = arg2;
    var_lr  = arg1;
    temp_ip = (*(u32 *) ((s8 *) (arg0) + (0)));
    if (var_lr < 0x4000U) {
        var_lr = 0x4000;
    }
    if (var_r2 > 0x8000U) {
        var_r2 = 0x8000;
    }
    temp_r1 = temp_ip + (*(s32 *) ((s8 *) (arg0) + (0xC)));
    if (var_lr < temp_ip) {
        var_lr = temp_ip;
    }
    if (var_r2 > temp_r1) {
        var_r2 = temp_r1;
    }
    if (var_lr >= var_r2) {
        return;
    }
    if (arg3 != 0) {
        func_020534e0((*(s32 *) ((s8 *) (arg0) + (8))) + var_lr, 0, var_r2 - var_lr);
        return;
    }
    func_02053574((*(s32 *) ((s8 *) (arg0) + (4))) + var_lr, (*(s32 *) ((s8 *) (arg0) + (8))) + var_lr, var_r2 - var_lr);
}
