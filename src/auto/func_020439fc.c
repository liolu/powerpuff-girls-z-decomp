#include "m2c.h"

M2C_UNK func_020011e4();                            /* extern */
s32 func_02013794(s32, M2C_UNK, M2C_UNK);           /* extern */
void *func_020691b0(M2C_UNK);                       /* extern */
extern M2C_UNK data_02077230;
extern M2C_UNK data_0207d220;
extern s32 data_0208df04;

void func_020439fc(s32 arg0) {
    void *temp_r0;

    if (func_02013794(data_0208df04, 6, -1) != 0) {
        func_020011e4();
    }
    temp_r0 = func_020691b0(0x34);
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
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_0207d220;
    M2C_FIELD(temp_r0, s32 *, 0x14)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x18)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x1C)   = 0;
    M2C_FIELD(temp_r0, s16 *, 0x24)   = 0;
    M2C_FIELD(temp_r0, s8 *, 0x20)    = 0;
    M2C_FIELD(temp_r0, s8 *, 0x22)    = 0;
    M2C_FIELD(temp_r0, s8 *, 0x21)    = 0;
    M2C_FIELD(temp_r0, s16 *, 0x26)   = 0;
}
