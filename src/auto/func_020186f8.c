#include "m2c.h"

void func_020186f8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0)    = arg2;
    M2C_FIELD(arg0, s32 *, 4)    = arg3;
}
