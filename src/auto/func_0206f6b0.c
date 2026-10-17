#include "m2c.h"

void *func_020691b0(s32);                           /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *data_0209be74;

void *func_0206f6b0(void) {
    void *temp_r0;

    if (data_0209be74 == NULL) {
        temp_r0 = func_020691b0(0xC080);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, s8 *, 0)   = 0;
            M2C_FIELD(temp_r0, s8 *, 1)   = 0;
            M2C_FIELD(temp_r0, s8 *, 2)   = 0;
            M2C_FIELD(temp_r0, s8 *, 3)   = 0;
            M2C_FIELD(temp_r0, s8 *, 4)   = 0;
            M2C_FIELD(temp_r0, s8 *, 5)   = 0;
            M2C_FIELD(temp_r0, s8 *, 6)   = 0;
            M2C_FIELD(temp_r0, s8 *, 7)   = 0;
            M2C_FIELD(temp_r0, s8 *, 8)   = 0;
            M2C_FIELD(temp_r0, s8 *, 9)   = 0;
            M2C_FIELD(temp_r0, s8 *, 0xA) = 0;
            M2C_FIELD(temp_r0, s8 *, 0xB) = 0;
            M2C_FIELD(temp_r0, s8 *, 0xC) = 0;
            M2C_FIELD(temp_r0, s8 *, 0xD) = 0;
            func_02069ed4(temp_r0 + 0xE, 0, 0x3C);
            M2C_FIELD(temp_r0, s32 *, 0xC060) = 0;
            M2C_FIELD(temp_r0, s8 *, 0xC064)  = 0;
        }
        data_0209be74 = temp_r0;
    }
    return data_0209be74;
}
