/* compiler: 2.0/sp1p5  */
/* abort from projets/blue-dragon-awakened-shadow/src/auto/abort.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020699e0(M2C_UNK);
extern void func_0206c284(M2C_UNK);
extern M2C_UNK data_0209b928;
void func_020699bc(void) {
    func_0206c284(1);
    (*(s32 *) ((s8 *) (&data_0209b928) + (0xC))) = 1;
    func_020699e0(1);
}
