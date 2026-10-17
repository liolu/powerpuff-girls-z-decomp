#include "m2c.h"

M2C_UNK func_02069214();                            /* extern */

void *func_02046e40(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        func_02069214();
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}
