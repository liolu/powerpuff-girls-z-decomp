#include "m2c.h"

s32 func_02057a38();                                /* extern */

void func_02001ad8(void *arg0) {
    u16 temp_r0;

    if (func_02057a38() == 0) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        return;
    }
    temp_r0                   = ((*(u16 *) 0x04000130 | *(u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 4) ^ temp_r0) & temp_r0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) temp_r0;
}
