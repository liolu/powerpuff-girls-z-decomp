#include "m2c.h"

s32 func_020115dc(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s8 *, 0xE) >= 5) {
        return 1;
    }
    return 0;
}
