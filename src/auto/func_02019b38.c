#include "m2c.h"

void func_02019b38(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r3;

    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        return;
    }
    temp_r3 = (arg1 * 0xC) + (s32) (arg0 + 0x6C);
    if (M2C_FIELD(arg0, u8 *, 5) != 0) {
        M2C_FIELD(arg2, s16 *, 2) = (s16) M2C_FIELD(temp_r3, s16 *, 2);
    } else {
        M2C_FIELD(temp_r3, s16 *, 2) = (s16) M2C_FIELD(arg2, s16 *, 2);
    }
    M2C_FIELD(temp_r3, u16 *, 4) = (u16) M2C_FIELD(arg2, u16 *, 4);
    M2C_FIELD(temp_r3, u8 *, 6)  = (u8) M2C_FIELD(arg2, u8 *, 6);
    M2C_FIELD(temp_r3, u8 *, 7)  = (u8) M2C_FIELD(arg2, u8 *, 7);
}
