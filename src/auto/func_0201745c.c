#include "m2c.h"

extern void *data_0208defc;

void func_0201745c(s32 arg0, void *arg1) {
    void *temp_r2;

    temp_r2                     = M2C_FIELD(data_0208defc, s32 *, 0x30) + (M2C_FIELD(arg1, s32 *, -8) * 8);
    M2C_FIELD(temp_r2, s8 *, 3) = 4;
    M2C_FIELD(temp_r2, s8 *, 4) = (s8) M2C_FIELD(arg1, s32 *, -4);
}
