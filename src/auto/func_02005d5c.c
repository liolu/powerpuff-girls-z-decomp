#include "m2c.h"

s32 func_02006014();                                /* extern */
s32 func_020691b0(s32);                             /* extern */
extern M2C_UNK data_0208ca00;

s32 func_02005d5c(void) {
    s32 var_r0;

    if (M2C_FIELD(&data_0208ca00, s32 *, 0x10) == 0) {
        var_r0 = func_020691b0(0x12B8);
        if (var_r0 != 0) {
            var_r0 = func_02006014();
        }
        M2C_FIELD(&data_0208ca00, s32 *, 0x10) = var_r0;
    }
    return M2C_FIELD(&data_0208ca00, s32 *, 0x10);
}
