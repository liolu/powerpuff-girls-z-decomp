/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CARDi_CheckPulledOutCore from projets/blue-dragon-awakened-shadow/src/auto/CARDi_CheckPulledOutCore.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern u32 func_02052c30(void);
extern u32 func_02052c44(u32 irq_flag);
extern void func_0205962c(u32 tag, u32 data, BOOL err);
extern void func_0205971c(u32 id);
extern void func_0205962c(u32 tag, u32 data, BOOL err);
void func_0205971c(u32 id) {
    vu32 boot_id = *(u32 *) ((*(u16 *) 0x027FFC10 == 0) ? 0x027FF800 : 0x027FFC00);
    if (id != boot_id) {
        u32 prevIRQState = func_02052c30();
        func_0205962c(14, 17, 0);
        func_02052c44(prevIRQState);
    }
}
