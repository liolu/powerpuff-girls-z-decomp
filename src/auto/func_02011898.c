#include "m2c.h"

s32 func_02011898(void *arg0) {
    if (M2C_FIELD(((M2C_FIELD(arg0, s8 *, 0x59) * 0x44) + (s32) arg0), s8 *, 0xC9) == 3) {
        return 1;
    }
    return 0;
}
