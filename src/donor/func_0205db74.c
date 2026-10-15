/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201d0d8 from projets/heroes-of-mana/src/donor/func_0201d0d8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
extern u16 func_0205db74(const u16 *buf, int length);
u16 func_0205db74(const u16 *buf, int length) {
    u32 sum;
    int nwords = length >> 1;

    for (sum = 0; nwords > 0; nwords--) {
        sum += *buf++;
    }

    sum = (sum >> 16) + (sum & 0xffff);
    sum += (sum >> 16);

    return (u16) (sum ^ 0xffff);
}
