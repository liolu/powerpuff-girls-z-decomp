#include "m2c.h"

extern M2C_UNK data_0208c5e8;

void func_020165f8(s32 arg0, void *arg1) {
    u32 temp_r2;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg1, void **, -8);
    if (temp_r0 == NULL) {
        return;
    }
    temp_r2                         = M2C_FIELD(arg1, u32 *, -4);
    M2C_FIELD(temp_r0, s16 *, 0x1A) = (s16) temp_r2;
    if (temp_r2 <= 0x100U) {
        *((M2C_UNK *) ((s8 *) &data_0208c5e8 + (temp_r2 * 4))) = M2C_FIELD(arg1, void **, -8);
    }
}
