/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WM_Init from projets/blue-dragon-awakened-shadow/src/auto/WM_Init.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern int func_020597f8(int a0, int a1, int a2);
extern int data_02090a80;
int func_020597cc(int a0, int a1) {
    int result = func_020597f8(a0, a1, 0xf00);
    if (result != 0) {
        return result;
    }
    *(unsigned short *) (*(char **) ((char *) &data_02090a80 + 4) + 0x16) = 0;
    return result;
}
