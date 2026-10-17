#include "m2c.h"

s32 func_020691b0(M2C_UNK);                         /* extern */
s32 func_0207062c();                                /* extern */
extern s32 data_0209be7c;

s32 func_020705b4(void) {
    s32 var_r0;

    if (data_0209be7c == 0) {
        var_r0 = func_020691b0(0x184);
        if (var_r0 != 0) {
            var_r0 = func_0207062c();
        }
        data_0209be7c = var_r0;
    }
    return data_0209be7c;
}
