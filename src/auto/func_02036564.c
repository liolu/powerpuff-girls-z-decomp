#include "m2c.h"

extern void *data_0208defc;

void func_02036564(s32 arg0, void *arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg1, s32 *, -4);
    if (M2C_FIELD(data_0208defc, s8 *, 0x25) != temp_r2) {
        M2C_FIELD(data_0208defc, s8 *, 0x28) = (s8) temp_r2;
    }
}
