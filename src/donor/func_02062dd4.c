/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Text_DrawLine from https://github.com/Yokimitsuro/khdays-decomp libs/nns/g2d/calls/Text_DrawLine.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef struct {
    signed char dx, dy;
} TextDir;
extern int func_020627f8(int a, int *font, int x, int y, int p5, int ch);
void func_02062dd4(int *ctx, int x, int y, int p5, int s, int *pNext, TextDir dir) {
    int opts              = ctx[2];
    int *font             = (int *) ctx[1];
    int c                 = s;
    int (*getNext)(int *) = (int (*)(int *)) font[1];
    int ch                = getNext(&c);

    if (ch != 0) {
        do {
            int adv, w;
            if (ch == 10) {
                break;
            }
            adv = func_020627f8(ctx[0], font, x, y, p5, ch);
            w   = opts + adv;
            x += w * dir.dx;
            y += w * dir.dy;
            ch = getNext(&c);
        } while (ch != 0);
    }
    if (pNext != 0) {
        *pNext = (ch == 10) ? c : 0;
    }
}
