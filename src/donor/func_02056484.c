/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FSi_ReadRomCallback from projets/blue-dragon-awakened-shadow/src/auto/FSi_ReadRomCallback.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern int func_020592ac(int a, int b, int c, int d, int e, int f, int g);
extern int func_02056460();
extern int *data_0209003c[];
int func_02056484(int a, int b, int c, int d) {
    func_020592ac((int) data_0209003c[1], c, b, d, (int) func_02056460, a, 1);
    return 6;
}
