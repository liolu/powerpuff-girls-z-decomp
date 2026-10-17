#include "m2c.h"

void func_020484f4(void *arg0) {
    s32 temp_r2;

    temp_r2                                        = M2C_FIELD(arg0, s32 *, 8) + 1;
    M2C_FIELD(arg0, s32 *, 8)                      = temp_r2;
    M2C_FIELD((arg0 + (temp_r2 * 4)), s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
}
