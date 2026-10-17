#include "m2c.h"

u8 func_0201163c(void *arg0) {
    s8 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s8 *, 0x5C);
    if ((s32) temp_r2 < 0) {
        return 3U;
    }
    return *(s8 *) (M2C_FIELD(arg0, s32 *, 0x30) + (M2C_FIELD(((temp_r2 * 0x44) + (s32) arg0), s8 *, 0x9A) * 8));
}