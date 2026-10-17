#include "m2c.h"

M2C_UNK func_02006214(s32);                         /* extern */
M2C_UNK func_02069214(s32);                         /* extern */
extern M2C_UNK data_0208ca00;

void func_02005da0(void) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_0208ca00, s32 *, 0x10);
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_02006214(temp_r4);
        func_02069214(temp_r4);
    }
    M2C_FIELD(&data_0208ca00, s32 *, 0x10) = 0;
}
