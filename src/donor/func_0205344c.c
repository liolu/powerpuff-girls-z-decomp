/* compiler: 2.0/sp1p5  */
/* MIi_CpuCopy16 from projets/heroes-of-mana/src/nitro/mi/mi_memory.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef short s16;
typedef unsigned short u16;
typedef long s32;
void func_0205344c(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_ip;

    var_ip = 0;
loop_1:
    if (var_ip < arg2) {
        u16 tmp                  = (u16) * (s16 *) (arg0 + var_ip);
        *(s16 *) (arg1 + var_ip) = (s16) tmp;
        var_ip += 2;
        goto loop_1;
    }
}
