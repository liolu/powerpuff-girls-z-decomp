/* compiler: 2.0/sp1p5  */
/* OSi_InsertThreadToList from projets/blue-dragon-awakened-shadow/src/auto/OSi_InsertThreadToList.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct OSThread {
    u8 reserved_00[0x68];
    struct OSThread *next;
    u32 id;
    u32 priority;
} OSThread;
typedef struct OSThreadInfo {
    u8 reserved_00[0x2c];
    OSThread *list;
} OSThreadInfo;
extern OSThreadInfo data_0208e0c0;
void func_02051378(OSThread *thread) {
    OSThread *current  = data_0208e0c0.list;
    OSThread *previous = 0;

    while (current != 0 && current->priority < thread->priority) {
        previous = current;
        current  = current->next;
    }

    if (previous == 0) {
        thread->next       = data_0208e0c0.list;
        data_0208e0c0.list = thread;
    } else {
        thread->next   = previous->next;
        previous->next = thread;
    }
}
