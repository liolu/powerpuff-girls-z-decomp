#include "m2c.h"

void func_02018a98(void *arg0) {
    s32 temp_r2;
    u8 temp_ip;
    void *temp_lr;
    void *temp_r2_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > (s32) M2C_FIELD(arg0, s32 *, 0x10)) {
        return;
    }
    temp_r2                   = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r2 + 1);
    if (temp_r2 == 0) {
        temp_r2_2                     = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r2_2, u8 *, 3) = (u8) (M2C_FIELD(temp_r2_2, u8 *, 3) & ~0x40);
    }
    temp_lr = M2C_FIELD(arg0, void **, 0);
    temp_ip = M2C_FIELD(temp_lr, u8 *, 3);
    if (temp_ip & 0x40) {
        if ((s32) (M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0xC)) >= (s32) M2C_FIELD(arg0, s32 *, 4)) {
            return;
        }
        M2C_FIELD(temp_lr, u8 *, 3) = (u8) (temp_ip & ~0x40);
        M2C_FIELD(arg0, s32 *, 4)   = 0;
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 8) >= (s32) M2C_FIELD(arg0, s32 *, 4)) {
        return;
    }
    M2C_FIELD(temp_lr, u8 *, 3)  = (u8) (temp_ip | 0x40);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
}
