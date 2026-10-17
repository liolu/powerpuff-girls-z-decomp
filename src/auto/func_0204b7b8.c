#include "m2c.h"

M2C_UNK func_0204b588(void *, s32);                 /* extern */
s32 func_0204b71c();                                /* extern */
s32 func_0204eb04();                                /* extern */

s32 func_0204b7b8(void *arg0, void *arg1, void *arg2) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg2, s32 *, 0) - M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg2, s32 *, 8) - M2C_FIELD(arg1, s32 *, 8));
    temp_r0                   = func_0204b71c(arg0);
    if (temp_r0 >= 4) {
        func_0204b588(arg0, func_0204eb04());
    }
    return temp_r0;
}
