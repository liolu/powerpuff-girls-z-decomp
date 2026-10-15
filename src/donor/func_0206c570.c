/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* copysign from projets/blue-dragon-awakened-shadow/src/auto/copysign.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern double func_0206c570(double x, double y);
double func_0206c570(double x, double y)

{
    (((int *) &x)[1]) = ((((int *) &x)[1]) & 0x7FFFFFFF) | ((((int *) &y)[1]) & 0x80000000);
    return x;
}
