/* compiler: 2.0/sp1p5  */
/* func_020457cc from projets/fairy-tail-kardia/src/auto/func_020457cc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205c190(u16 *, u16);
extern u16 *func_0205a39c(M2C_UNK, u16);
extern s32 data_020915a0;
extern s32 data_0209706c;
void func_0205c674(M2C_UNK arg0) {
    s32 temp_r5;
    u16 *temp_r0;
    u16 temp_r1;
    u16 var_ip;
    u16 var_r6;

    var_ip = 0;
    do {
        temp_r5 = (var_ip * 0x5D4) + data_0209706c;
        if ((*(u8 *) ((s8 *) (temp_r5) + (0x1D52))) != 0) {
            (*(s16 *) ((s8 *) (temp_r5) + (0x1D4A))) = 0;
        }
        var_ip += 1;
    } while ((u32) var_ip < 0x10U);
    data_020915a0 = 0;
    var_r6        = 1;
    do {
        temp_r0 = func_0205a39c(arg0, var_r6);
        if ((temp_r0 != ((void *) 0)) && (temp_r1 = *temp_r0, (temp_r1 != 0xFFFF)) && (temp_r1 != 0)) {
            func_0205c190(temp_r0, var_r6);
        }
        var_r6 += 1;
    } while ((u32) var_r6 <= 0xFU);
}
