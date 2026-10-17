#include "m2c.h"

void func_02016ed4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg1, s32 *, -8) - M2C_FIELD(arg1, s32 *, -4));
}
