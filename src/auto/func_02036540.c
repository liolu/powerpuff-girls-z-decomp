#include "m2c.h"

extern void *data_0208defc;

void func_02036540(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(data_0208defc, s8 *, 0xE) == 2) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r1;
}
