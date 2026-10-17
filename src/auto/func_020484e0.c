#include "m2c.h"

void func_020484e0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 8) * 4)), s32 *, 0x2C);
}
