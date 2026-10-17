#include "m2c.h"

s32 func_020204b0(s32);                             /* extern */

s32 func_0202bdb8(void *arg0) {
    void *temp_ip;
    void *temp_lr;

    if (func_020204b0(arg0 + 0x71C) == 0) {
        temp_ip                       = M2C_FIELD(arg0, void **, 0x710);
        M2C_FIELD(temp_ip, u8 *, 3)   = (u8) (M2C_FIELD(temp_ip, u8 *, 3) | 0x40);
        temp_lr                       = M2C_FIELD(arg0, void **, 0x714);
        M2C_FIELD(temp_lr, u8 *, 3)   = (u8) (M2C_FIELD(temp_lr, u8 *, 3) | 0x40);
        M2C_FIELD(arg0, s16 *, 0x50)  = 0;
        M2C_FIELD(arg0, s32 *, 0x6C0) = 0;
        M2C_FIELD(arg0, s32 *, 0x6BC) = 0xC0000;
        M2C_FIELD(arg0, s16 *, 0x6AE) = 4;
    }
    return -1;
}
