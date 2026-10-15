/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PXI_IsCallbackReady from projets/heroes-of-mana/src/nitro/pxi/pxi_fifo_2.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern BOOL func_0205496c(u32 tag, u32 proc);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}
BOOL func_0205496c(u32 tag, u32 proc) {
    UnkPxiSystemWork *work = GetPxiSystemWork();
    return (work->unk_388[proc] & (1 << tag)) ? 1 : 0;
}
