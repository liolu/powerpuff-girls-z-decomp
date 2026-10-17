#include "m2c.h"

s32 func_02009448();                                /* extern */
s32 func_020691b0(M2C_UNK);                         /* extern */
extern s32 data_0208dee0;

s32 func_020093cc(void) {
    s32 var_r0;

    if (data_0208dee0 == 0) {
        var_r0 = func_020691b0(0x178);
        if (var_r0 != 0) {
            var_r0 = func_02009448();
        }
        data_0208dee0 = var_r0;
    }
    return data_0208dee0;
}
