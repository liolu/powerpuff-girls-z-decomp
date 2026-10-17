#include "m2c.h"

s32 func_02026d3c(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s16 *, 2) = (s16) M2C_FIELD(((arg1 * 0xC) + arg0), s16 *, 0x6E);
    return 1;
}
