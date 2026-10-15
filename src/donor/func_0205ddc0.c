/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* mystrlen from projets/heroes-of-mana/src/donor/mystrlen.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
#pragma cplusplus off
#pragma ipa file
#pragma ipa file
unsigned int func_0205ddc0(unsigned int r0, unsigned int r1, unsigned int r2, unsigned int r3) {
    unsigned int cmp_a, cmp_b;
L_2009724:
    r2    = 0x0u;
    cmp_a = r2;
    cmp_b = 0;
L_2009726:
    r1 = (unsigned int) (*(unsigned short *) ((unsigned char *) r0 + 0));
L_2009728:
    r0    = (r0 + 0x2u);
    cmp_a = r0;
    cmp_b = 0;
L_200972a:
    cmp_a = r1;
    cmp_b = 0x0u;
L_200972c:
    if ((cmp_a == cmp_b)) {
        goto L_2009738;
    }
L_200972e:
    r2    = (r2 + 0x1u);
    cmp_a = r2;
    cmp_b = 0;
L_2009730:
    r1 = (unsigned int) (*(unsigned short *) ((unsigned char *) r0 + 0));
L_2009732:
    r0    = (r0 + 0x2u);
    cmp_a = r0;
    cmp_b = 0;
L_2009734:
    cmp_a = r1;
    cmp_b = 0x0u;
L_2009736:
    if ((cmp_a != cmp_b)) {
        goto L_200972e;
    }
L_2009738:
    r0    = (r2 + 0x0u);
    cmp_a = r0;
    cmp_b = 0;
L_200973a:
    return r0;
}
