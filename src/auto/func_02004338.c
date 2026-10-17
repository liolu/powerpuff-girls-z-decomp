#include "m2c.h"

void *func_020691b0(M2C_UNK);                       /* extern */
extern M2C_UNK data_02077214;
extern M2C_UNK data_02077230;

void func_02004338(s32 arg0) {
    void *temp_r0;

    temp_r0 = func_020691b0(0x14);
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
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_02077214;
}
