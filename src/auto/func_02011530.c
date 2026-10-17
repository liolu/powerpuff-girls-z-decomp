#include "m2c.h"

s32 func_02011530(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s8 *, 0xE) >= 2) {
        return 1;
    }
    return 0;
}
