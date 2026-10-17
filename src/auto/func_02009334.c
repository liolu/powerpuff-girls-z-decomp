#include "engine.h"
#include "m2c.h"

s32 func_02009334(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0                                     = (arg1 * 0x14) + (arg0 + 0x54);
    M2C_FIELD((temp_r0 + (arg3 * 2)), s16 *, 6) = (s16) arg2;
    return temp_r0;
}
