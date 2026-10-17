#include "m2c.h"

void func_0204815c(void *arg0) {
    s32 temp_r2;
    s32 temp_r2_2;
    void *temp_r3;

    temp_r2                         = M2C_FIELD(arg0, s32 *, 8);
    temp_r3                         = arg0 + (temp_r2 * 4);
    temp_r2_2                       = M2C_FIELD(temp_r3, s32 *, 0x2C);
    M2C_FIELD(temp_r3, s32 *, 0x2C) = (s32) M2C_FIELD((arg0 + ((temp_r2 - 1) * 4)), s32 *, 0x2C);
    M2C_FIELD((arg0 + ((M2C_FIELD(arg0, s32 *, 8) - 1) * 4)), s32 *, 0x2C) = temp_r2_2;
}
