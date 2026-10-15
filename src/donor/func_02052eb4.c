/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_Terminate from projets/blue-dragon-awakened-shadow/src/auto/OS_Terminate.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_02052c30(void);
extern void func_02052eb4(void);
extern void func_02052ec4(void);
void func_02052eb4(void) {
    while (1) {
        func_02052c30();
        func_02052ec4();
    }
}
extern void func_02052ec4(void);
