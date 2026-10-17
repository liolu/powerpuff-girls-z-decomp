#include "m2c.h"

M2C_UNK func_020338a8(void *, s32);                 /* extern */
M2C_UNK func_02033b28();                            /* extern */

s32 func_020332d0(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r2;
    s32 var_ip;

    var_ip = 0;
    if ((M2C_FIELD(arg0, s8 *, 7) == 2) && ((s32) M2C_FIELD(arg0, s16 *, 0x52) < (s32) M2C_FIELD(arg0, u16 *, 0x54))) {
        if (M2C_FIELD(arg0, u8 *, 0xB320) == 0) {
            func_02033b28(arg0, arg1);
            func_020338a8(arg0, arg1);
        }
        temp_r2                   = (arg1 * 0x2980) + (s32) arg0;
        M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(temp_r2, s32 *, 0x6B0);
        var_ip                    = 1;
        M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(temp_r2, s32 *, 0x6B4);
        M2C_FIELD(arg2, s16 *, 2) = (s16) M2C_FIELD(((arg1 * 0xC) + (s32) arg0), s16 *, 0x6E);
    }
    return var_ip;
}
