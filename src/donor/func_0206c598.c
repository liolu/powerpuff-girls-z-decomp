/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* fabs from projets/blue-dragon-awakened-shadow/src/auto/fabs.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern double func_0206c598(double x);
double func_0206c598(double x)

{
    (((int *) &x)[1]) &= 0x7fffffff;
    return x;
}
