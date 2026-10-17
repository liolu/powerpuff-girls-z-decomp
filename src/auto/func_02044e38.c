#include "m2c.h"

M2C_UNK func_020011e4();                            /* extern */
s32 func_02013794(s32, M2C_UNK, M2C_UNK);           /* extern */
void *func_020691b0(M2C_UNK);                       /* extern */
extern M2C_UNK data_02077230;
extern M2C_UNK data_0207d290;
extern s32 data_0208df04;

void func_02044e38(s32 arg0) {
    void *temp_r0;

    if (func_02013794(data_0208df04, 1, -1) != 0) {
        func_020011e4();
    }
    temp_r0 = func_020691b0(0x20);
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
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_0207d290;
    M2C_FIELD(temp_r0, s32 *, 0x14)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x18)   = 0;
    M2C_FIELD(temp_r0, s8 *, 0xC)     = 0;
    M2C_FIELD(temp_r0, s8 *, 0x1D)    = 0;
}
