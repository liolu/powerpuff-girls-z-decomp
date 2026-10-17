#include "m2c.h"

void func_02018da8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)   = arg1;
    M2C_FIELD(arg0, s32 *, 4)   = arg2;
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) | 2);
}
