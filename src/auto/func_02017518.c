#include "m2c.h"

extern M2C_UNK data_0208c5bc;

void func_02017518(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(&data_0208c5bc, s8 *, 5) == 2) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r1;
}
