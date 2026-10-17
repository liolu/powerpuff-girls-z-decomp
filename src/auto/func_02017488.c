#include "m2c.h"

extern void *data_0208defc;

void func_02017488(s32 arg0, void *arg1) {
    void *temp_r2;

    temp_r2                     = M2C_FIELD(data_0208defc, s32 *, 0x30) + (M2C_FIELD(arg1, s32 *, -0xC) * 8);
    M2C_FIELD(temp_r2, s8 *, 3) = 1;
    M2C_FIELD(temp_r2, s8 *, 4) = (s8) M2C_FIELD(arg1, s32 *, -8);
    M2C_FIELD(temp_r2, s8 *, 5) = (s8) M2C_FIELD(arg1, s32 *, -4);
}
