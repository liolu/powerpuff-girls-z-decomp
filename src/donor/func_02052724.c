/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_InitAlloc from projets/blue-dragon-awakened-shadow/src/auto/OS_InitAlloc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef u32 OSIntrMode;
extern OSIntrMode func_02052c30(void);
extern OSIntrMode func_02052c44(OSIntrMode state);
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef int OSHeapHandle;
extern void *func_02052724(OSArenaId id, void *arenaStart, void *arenaEnd, int maxHeaps);
typedef struct Cell Cell;
typedef struct HeapDesc HeapDesc;
struct Cell {
    Cell *prev;
    Cell *next;
    long size;
};
struct HeapDesc {
    long size;
    Cell *free;
    Cell *allocated;
};
typedef struct {
    volatile OSHeapHandle currentHeap;
    int numHeaps;
    void *arenaStart;
    void *arenaEnd;
    HeapDesc *heapArray;
} OSHeapInfo;
extern void *data_0208e344[OS_ARENA_MAX];
void *func_02052724(OSArenaId id, void *arenaStart, void *arenaEnd, int maxHeaps) {
    OSHeapInfo *heapInfo;
    u32 arraySize;
    OSHeapHandle i;
    OSIntrMode enabled = func_02052c30();

    ((void) 0);
    ((void) 0);

    ((void) 0);
    ((void) 0);
    ((void) 0);

    heapInfo          = arenaStart;
    data_0208e344[id] = heapInfo;

    arraySize           = sizeof(HeapDesc) * maxHeaps;
    heapInfo->heapArray = (void *) ((u32) arenaStart + sizeof(OSHeapInfo));
    heapInfo->numHeaps  = maxHeaps;

    for (i = 0; i < heapInfo->numHeaps; i++) {
        HeapDesc *hd = &heapInfo->heapArray[i];

        hd->size = -1;
        hd->free = hd->allocated = ((void *) 0);
    }

    heapInfo->currentHeap = -1;

    arenaStart = (void *) ((char *) heapInfo->heapArray + arraySize);
    arenaStart = (void *) (((u32) (arenaStart) + (32) - 1) & ~((32) - 1));

    heapInfo->arenaStart = arenaStart;
    heapInfo->arenaEnd   = (void *) (((u32) (arenaEnd)) & ~((32) - 1));

    ((void) 0);

    (void) func_02052c44(enabled);
    return heapInfo->arenaStart;
}
