/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __timesdec from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/timesdec.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef struct Decimal {
    u8 sign;
    u8 unk_01;
    s16 exp;
    u8 length;
    u8 digits[32];
    u8 pad_25;
} Decimal;
extern void func_0206ca88(Decimal *result, const Decimal *x, const Decimal *y);
extern void func_0206c92c(Decimal *dec, int count);
void func_0206ca88(Decimal *result, const Decimal *x, const Decimal *y) {
    u32 accumulator = 0;
    u8 product[2 * 32];
    int i   = x->length + y->length - 1;
    u8 *out = product + i + 1;
    u8 *end = out;

    result->sign = 0;

    for (; i > 0; i--) {
        int k = y->length - 1;
        int j = i - k - 1;
        int count;
        int xLeft;
        const u8 *xp;
        const u8 *yp;

        if (j < 0) {
            j = 0;
            k = i - 1;
        }
        xp    = x->digits + j;
        yp    = y->digits + k;
        count = k + 1;
        xLeft = x->length - j;
        if (count > xLeft) {
            count = xLeft;
        }
        for (; count > 0; count--, xp++, yp--) {
            accumulator += (u32) *xp * *yp;
        }
        *--out = accumulator % 10;
        accumulator /= 10;
    }
    result->exp = x->exp + y->exp;
    if (accumulator > 0) {
        *--out = accumulator;
        result->exp++;
    }
    for (i = 0; i < 32 && out < end; i++, out++) {
        result->digits[i] = *out;
    }
    result->length = i;

    if (out < end && *out >= 5) {
        if (*out == 5) {
            u8 *p = out + 1;

            for (; p < end; p++) {
                if (*p != 0) {
                    goto round_up;
                }
            }
            if ((*(out - 1) & 1) == 0) {
                return;
            }
        }
    round_up:
        func_0206c92c(result, result->length);
    }
}
