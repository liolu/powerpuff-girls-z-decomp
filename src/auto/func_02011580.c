#include "m2c.h"

void func_02011580(void *arg0) {
    M2C_FIELD(M2C_FIELD(((M2C_FIELD(arg0, s8 *, 0x59) * 0x44) + (s32) arg0), void **, 0x9C), s8 *, 9) = 0;
    M2C_FIELD(arg0, s8 *, 0x59) = (s8) (M2C_FIELD(arg0, s8 *, 0x59) + 1);
    if ((s32) M2C_FIELD(arg0, s8 *, 0x59) >= (s32) M2C_FIELD(arg0, s8 *, 0x57)) {
        M2C_FIELD(arg0, s8 *, 0x59) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x5A)  = -1;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s8 *, 0xD)   = (s8) M2C_FIELD(arg0, s8 *, 0xC);
    M2C_FIELD(arg0, s8 *, 0xC)   = 4;
    M2C_FIELD(arg0, s8 *, 0xE)   = 0;
}
