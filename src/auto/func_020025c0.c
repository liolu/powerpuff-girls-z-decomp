#include "m2c.h"

s32 func_0200263c();                                /* extern */
s32 func_020691b0(M2C_UNK);                         /* extern */
extern s32 data_0208c58c;

s32 func_020025c0(void) {
    s32 var_r0;

    if (data_0208c58c == 0) {
        var_r0 = func_020691b0(0x44);
        if (var_r0 != 0) {
            var_r0 = func_0200263c();
        }
        data_0208c58c = var_r0;
    }
    return data_0208c58c;
}
