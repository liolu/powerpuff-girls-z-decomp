#include "m2c.h"

M2C_UNK func_020338a8();                            /* extern */

s32 func_020333cc(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r3;

    if (M2C_FIELD(arg0, u8 *, 0x4F) != 0) {
        func_020338a8(arg0);
    }
    temp_r3                   = (arg1 * 0x2980) + (s32) arg0;
    M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(temp_r3, s32 *, 0x6B0);
    M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(temp_r3, s32 *, 0x6B4);
    M2C_FIELD(arg2, s16 *, 2) = (s16) M2C_FIELD(((arg1 * 0xC) + (s32) arg0), s16 *, 0x6E);
    return 1;
}
