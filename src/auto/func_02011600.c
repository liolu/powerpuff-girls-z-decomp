#include "m2c.h"

u8 func_02011600(void *arg0) {
    return *(s8 *) (M2C_FIELD(arg0, s32 *, 0x30) +
                    (M2C_FIELD(((M2C_FIELD(arg0, s8 *, 0x59) * 0x44) + (s32) arg0), s8 *, 0x9A) * 8));
}