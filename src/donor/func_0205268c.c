/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_FreeToHeap from projets/blue-dragon-awakened-shadow/src/auto/OS_FreeToHeap.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 func_02052c30(void);
extern u32 func_02052c44(u32 irq_flag);
typedef struct UnkHeapCell UnkHeapCell;
struct UnkHeapCell {
    UnkHeapCell *prev;
    UnkHeapCell *next;
    s32 size;
};
typedef struct UnkHeapDesc {
    s32 size;
    UnkHeapCell *free;
    UnkHeapCell *allocated;
} UnkHeapDesc;
typedef struct UnkHeapInfo {
    s32 currentHeap;
    s32 numHeaps;
    void *arenaStart;
    void *arenaEnd;
    UnkHeapDesc *heapArray;
} UnkHeapInfo;
extern UnkHeapInfo *data_0208e344[9];
extern UnkHeapCell *func_020524b4(UnkHeapCell *list, UnkHeapCell *cell);
extern UnkHeapCell *func_020524dc(UnkHeapCell *list, UnkHeapCell *cell);
void func_0205268c(u32 id, s32 heap, void *ptr) {
    UnkHeapInfo *heapInfo;
    UnkHeapDesc *hd;
    UnkHeapCell *cell;
    u32 prev = func_02052c30();

    heapInfo = data_0208e344[id];
    if (heap < 0) {
        heap = heapInfo->currentHeap;
    }
    hd = &heapInfo->heapArray[heap];

    cell          = (UnkHeapCell *) ((char *) ptr - 0x20);
    hd->allocated = func_020524b4(hd->allocated, cell);
    hd->free      = func_020524dc(hd->free, cell);

    func_02052c44(prev);
}
