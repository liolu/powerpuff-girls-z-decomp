/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0202589c from projets/blue-dragon-awakened-shadow/src/auto/func_0202589c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
struct E {
    unsigned int f0;
    unsigned int f4;
    int f8;
};
struct E *func_02067d5c(struct E *base, int count, unsigned int key) {
    int lo = 0, hi = count - 1;
    while (lo <= hi) {
        int mid        = (lo + hi) >> 1;
        struct E *e    = &base[mid];
        unsigned int v = e->f0;
        if (key < v) {
            hi = mid - 1;
        } else if (key > v + (e->f4 & ~1u)) {
            lo = mid + 1;
        } else {
            return e;
        }
    }
    return 0;
}
