/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020aeb20 from projets/dragon-ball-origins/src/donor/func_020aeb20.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;
typedef struct UnkFndHeapHead {
    u32 unk_00;
    UnkFndLink unk_04;
    UnkFndList unk_0c;
    void *unk_18;
    void *unk_1c;
    u32 unk_20;
} UnkFndHeapHead;
extern void func_02053468(u32 value, void *dest, u32 size);
typedef struct UnkFrmHeapState {
    u32 unk_00;
    void *unk_04;
    void *unk_08;
    struct UnkFrmHeapState *unk_0c;
} UnkFrmHeapState;
typedef struct UnkFrmHeapHead {
    void *unk_00;
    void *unk_04;
    UnkFrmHeapState *unk_08;
} UnkFrmHeapHead;
static inline void FillAllocMemory(UnkFndHeapHead *heap, void *address, u32 size) {
    if ((u16) (heap->unk_20 & 0xff) & 1) {
        func_02053468(0, address, size);
    }
}
void *func_0206383c(UnkFrmHeapHead *frm, u32 size, u32 alignment) {
    void *newBlock = (void *) ((u32) ((u32) frm->unk_04 - size) & ~((alignment) -1));

    if ((u32) newBlock < (u32) frm->unk_00) {
        return 0;
    }
    FillAllocMemory(((UnkFndHeapHead *) ((u32) (frm) - sizeof(UnkFndHeapHead))), newBlock, (u32) frm->unk_04 - (u32) newBlock);
    frm->unk_04 = newBlock;
    return newBlock;
}
