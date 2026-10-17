#include "m2c.h"

void func_020481d4(void *arg0) {
    s32 temp_r2;

    temp_r2                     = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 8)   = (s32) (temp_r2 - 1);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD((arg0 + (temp_r2 * 4)), s32 *, 0x2C);
}
