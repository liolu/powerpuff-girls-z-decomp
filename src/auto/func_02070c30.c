#include "m2c.h"

void func_02070c30(void *arg0, s16 arg1) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s16 *, 0x80);
    if ((s32) temp_r3 >= 0x80) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x80)                   = (s16) (temp_r3 + 1);
    M2C_FIELD((arg0 + (temp_r3 * 2)), s16 *, 0x82) = arg1;
}
