/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SetTopDispcntWindow0Window1ObjDisplayFlag from https://github.com/RonyxDumb/mkds
 * src/arm9/020ad88c_SetTopDispcntWindow0Window1ObjDisplayFlag.c (license: none), reused by tools/donor_match.py */
typedef unsigned int uintptr_t;
typedef unsigned int uint;
typedef unsigned int uint;
extern void func_02008b1c(int param_1);
void func_02008b1c(int param_1)

{
    (*(uint *) (uintptr_t) 0x4000000u) = (*(uint *) (uintptr_t) 0x4000000u) & 0xffff1fff | param_1 << 0xd;
    return;
}
