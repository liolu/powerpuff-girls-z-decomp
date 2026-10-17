#include "m2c.h"

void func_02018a6c(void *arg0, s16 arg1, s32 arg2) {
    void *temp_r1;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 6) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14)                     = 0;
    M2C_FIELD(arg0, s32 *, 4)                        = (s32) (0 - arg2);
    temp_r1                                          = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r1, u8 *, 3)                      = (u8) (M2C_FIELD(temp_r1, u8 *, 3) | 0x40);
}
