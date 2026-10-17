#include "m2c.h"

s32 func_0200644c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x12AC) = 1;
    M2C_FIELD(arg0, s8 *, 0x12AD) = 3;
    M2C_FIELD(arg0, s32 *, 0)     = arg1;
    return 1;
}
