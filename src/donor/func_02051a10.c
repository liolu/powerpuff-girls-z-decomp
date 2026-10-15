/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_SetSwitchThreadCallback from projets/blue-dragon-awakened-shadow/src/auto/OS_SetSwitchThreadCallback.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
extern int func_02052c30();
extern void func_02052c44(int mask);
extern int data_0208e0c0[];
int func_02051a10(int arg0) {
    int mask;
    int old;
    mask               = func_02052c30();
    old                = data_0208e0c0[0xc];
    data_0208e0c0[0xc] = arg0;
    func_02052c44(mask);
    return old;
}
