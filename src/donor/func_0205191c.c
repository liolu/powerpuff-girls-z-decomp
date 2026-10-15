/* compiler: 2.0/sp1p5  */
/* OS_SelectThread from projets/blue-dragon-awakened-shadow/src/auto/OS_SelectThread.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
struct Thread02001ff0 {
    char _0[0x64];
    int field_64;
    struct Thread02001ff0 *next;
};
struct Globals02001ff0 {
    char _0[0x2c];
    struct Thread02001ff0 *list;
};
extern struct Globals02001ff0 data_0208e0c0;
void *func_0205191c(void) {
    struct Thread02001ff0 *t = data_0208e0c0.list;
    while (t != 0 && t->field_64 != 1) {
        t = t->next;
    }
    return t;
}
