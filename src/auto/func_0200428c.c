#include "m2c.h"

M2C_UNK func_02069214();                            /* extern */

void *func_0200428c(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0xA) != 0) && ((s32) M2C_FIELD(arg0, s16 *, 8) > 0) && (M2C_FIELD(arg0, s32 *, 0) != 0)) {
        func_02069214();
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    return arg0;
}
