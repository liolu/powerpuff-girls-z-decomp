#include "m2c.h"

s32 func_02018158(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((s32) ((arg1 - arg2) + M2C_FIELD(((M2C_FIELD(arg0, s8 *, 9) * 0xC) + (s32) arg0), s16 *, 0x6E)) >= arg3) {
        return 1;
    }
    return 0;
}
