/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __destroy_global_chain from projets/blue-dragon-awakened-shadow/src/auto/__destroy_global_chain.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
struct Node72 {
    struct Node72 *next;
    void (*fn)(void *object, int v);
    void *object;
};
extern struct Node72 *data_0209b924;
void func_020692ac(void) {
    struct Node72 *head = data_0209b924;
    if (head == 0) {
        return;
    }
    do {
        data_0209b924 = head->next;
        head->fn(head->object, -1);
        head = data_0209b924;
    } while (head != 0);
}
