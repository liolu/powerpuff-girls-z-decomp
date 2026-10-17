#include "m2c.h"

u8 func_0206f5f0(void *arg0) {
    u8 temp_r2;

    temp_r2                    = M2C_FIELD(arg0, u8 *, 0xB);
    M2C_FIELD(arg0, u8 *, 0xB) = 0U;
    return temp_r2;
}
