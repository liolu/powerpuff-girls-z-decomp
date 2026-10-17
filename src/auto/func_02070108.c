#include "m2c.h"

s32 func_02070108(void *arg0, s32 arg1) {
    if (!(M2C_FIELD(arg0, u16 *, 2) & (1 << arg1))) {
        return 0;
    }
    return ((arg1 - 1) * 0x1E) + (s32) (arg0 + 0xE);
}
