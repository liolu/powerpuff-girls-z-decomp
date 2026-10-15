/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_DisableIrqMask from projets/blue-dragon-awakened-shadow/src/donor/OS_DisableIrqMask.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 func_02050e44(u32 mask);
static inline BOOL OS_DisableIME(void) {
    u16 prev               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = 0;
    return (BOOL) prev;
}
static inline BOOL OS_RestoreIME(BOOL enable) {
    u16 prev               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = (vu16) enable;
    return (BOOL) prev;
}
u32 func_02050e44(u32 mask) {
    BOOL ime               = OS_DisableIME();
    u32 prev               = (*(vu32 *) 0x04000210);
    (*(vu32 *) 0x04000210) = prev & ~mask;
    OS_RestoreIME(ime);
    return prev;
}
