#include "m2c.h"

void func_0206f5c4(void *arg0, s8 arg1) {
    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        M2C_FIELD(arg0, s8 *, 7)   = arg1;
        M2C_FIELD(arg0, s8 *, 0xB) = 1;
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 5) != 0) {
        M2C_FIELD(arg0, s8 *, 6) = arg1;
    }
}
