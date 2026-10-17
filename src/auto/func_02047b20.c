#include "m2c.h"

void func_02047b20(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + M2C_FIELD(arg1, s32 *, 8));
}
