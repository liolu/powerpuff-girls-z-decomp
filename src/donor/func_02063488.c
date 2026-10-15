/* compiler: 2.0/sp1p5  */
/* func_0201652c from projets/farm-frenzy/src/auto/func_0201652c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
u8 func_02063488(u8 **arg0) {
    u8 *temp_r1;
    u8 temp_ret;

    temp_r1 = *arg0;
    *(u8 *) (temp_r1 + 1);
    temp_ret = *temp_r1;
    *arg0    = temp_r1 + 1;
    return temp_ret;
}
