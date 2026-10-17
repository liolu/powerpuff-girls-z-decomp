#include "m2c.h"

void *func_020691b0(M2C_UNK);                       /* extern */
extern M2C_UNK data_02077230;
extern M2C_UNK data_0207acb4;
extern M2C_UNK data_0208c5bc;

void func_0202ec6c(s32 arg0) {
    void *temp_r0;

    M2C_FIELD(&data_0208c5bc, s32 *, 0x28) = 0;
    M2C_FIELD(&data_0208c5bc, s32 *, 0x2C) = 0;
    temp_r0                                = func_020691b0(0x100);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_02077230;
    M2C_FIELD(temp_r0, s32 *, 4)      = arg0;
    M2C_FIELD(temp_r0, s16 *, 8)      = 0;
    M2C_FIELD(temp_r0, s16 *, 0xA)    = 0;
    M2C_FIELD(temp_r0, s8 *, 0xC)     = 0;
    M2C_FIELD(temp_r0, s8 *, 0xD)     = -1;
    M2C_FIELD(temp_r0, s8 *, 0xE)     = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10)   = 0;
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_0207acb4;
    M2C_FIELD(temp_r0, s32 *, 0x14)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x18)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x1C)   = 0;
    M2C_FIELD(temp_r0, s8 *, 0x21)    = -1;
    M2C_FIELD(temp_r0, s8 *, 0x22)    = -1;
    M2C_FIELD(temp_r0, s8 *, 0x23)    = -1;
    M2C_FIELD(temp_r0, s8 *, 0x24)    = -1;
    M2C_FIELD(temp_r0, s8 *, 0x26)    = -1;
}
