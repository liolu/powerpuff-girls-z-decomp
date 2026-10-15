/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_LoadTexPltt from projets/blue-dragon-awakened-shadow/src/donor/GX_LoadTexPltt.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 data_0207eec0;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState data_0208e03c;
extern void func_0205347c(const void *src, void *dest, u32 size);
extern void func_02053180(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_02053180(dmaNo, src, dest, size, 0, 0);
    } else {
        func_0205347c(src, dest, size);
    }
}
void func_02050a48(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_0207eec0, src, (void *) (data_0208e03c.texPlttStartAddr + destSlotAddr), size);
}
