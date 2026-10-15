/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02025900 from projets/blue-dragon-awakened-shadow/src/auto/func_02025900.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
struct E {
    int f0;
    int f4;
    int f8;
};
struct S {
    int f0;
    unsigned char *f1;
    int f2;
    struct E *f3;
    struct E *f4;
};
extern int __FindExceptionTable(struct S *p, int v);
extern struct E *func_02067d5c(struct E *base, int count, unsigned int key);
extern unsigned char *func_020698bc(unsigned char *p);
extern unsigned char *func_02067cd0(unsigned char *p, int *out);
void func_02067dc0(int r4, struct S *sb) {
    struct E *e;
    unsigned char *p;
    int a, b, c;
    unsigned int end;
    unsigned int acc;
    unsigned int tmp;

    sb->f1 = 0;
    sb->f2 = 0;
    if (!__FindExceptionTable(sb, r4)) {
        return;
    }
    e = func_02067d5c(sb->f3, sb->f4 - sb->f3, (unsigned int) r4);
    if (!e) {
        return;
    }
    if (e->f4 & 1) {
        sb->f1 = (unsigned char *) &e->f8;
    } else {
        sb->f1 = (unsigned char *) e->f8;
    }
    sb->f0 = e->f0;
    end    = (unsigned int) (r4 - e->f0);
    p      = func_020698bc(sb->f1);
    acc    = 0;
    do {
        p = func_02067cd0(p, &a);
        if (a == 0) {
            return;
        }
        p   = func_02067cd0(p, &b);
        p   = func_02067cd0(p, &c);
        tmp = acc + (unsigned int) a;
        if (end < tmp) {
            return;
        }
        acc = tmp + (unsigned int) b;
    } while (end > acc);
    sb->f2 = (int) sb->f1 + c;
}
