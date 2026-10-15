/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_SetThreadPriority from projets/blue-dragon-awakened-shadow/src/auto/OS_SetThreadPriority.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern int func_02052c30(void);
extern void func_02052c44(int);
extern void func_02051378(void *);
extern void func_02051420(void);
typedef struct Node {
    char pad[0x68];
    struct Node *next;
    int pad2;
    int value;
} Node;
typedef struct {
    char pad[0x2c];
    Node *head;
} ListHead;
extern ListHead data_0208e0c0;
extern Node data_0208e0f4;
int func_02051960(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_0208e0c0.head;
    intr = func_02052c30();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_0208e0f4) {
        func_02052c44(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_0208e0c0.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_02051378(target);
        func_02051420();
    }
    func_02052c44(intr);
    return 1;
}
