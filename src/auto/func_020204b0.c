#include "m2c.h"

s32 func_020204b0(void **arg0) {
    if (!(M2C_FIELD(*arg0, u8 *, 3) & 0x40)) {
        return 1;
    }
    return 0;
}
