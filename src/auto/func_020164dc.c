#include "m2c.h"

extern M2C_UNK data_0208c5e8;

void func_020164dc(void *arg0, void *arg1) {
    s32 var_r1;
    u32 temp_r2;

    temp_r2 = M2C_FIELD(arg1, u32 *, -4);
    if (temp_r2 <= 0x100U) {
        var_r1 = *((M2C_UNK *) ((s8 *) &data_0208c5e8 + (temp_r2 * 4)));
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r1;
}
