#include "m2c.h"

M2C_UNK func_0204b588(M2C_UNK, s32);                /* extern */
s32 func_0204b71c();                                /* extern */
s32 func_0204eb04();                                /* extern */

s32 func_0204b788(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_0204b71c();
    if (temp_r0 >= 4) {
        func_0204b588(arg0, func_0204eb04());
    }
    return temp_r0;
}
