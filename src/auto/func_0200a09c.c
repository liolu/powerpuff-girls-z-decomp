#include "m2c.h"

s16 func_0200a09c(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x16A) = (s16) (M2C_FIELD(arg0, s16 *, 0x16A) + 1);
    return M2C_FIELD(arg0, s16 *, 0x16A);
}
