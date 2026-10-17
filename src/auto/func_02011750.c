#include "m2c.h"

void func_02011750(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x30) + (arg1 * 8)), s8 *, 1) = arg2;
    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x30) + (arg2 * 8)), s8 *, 2) = arg1;
}
