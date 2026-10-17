#include "m2c.h"

M2C_UNK func_02069214();                            /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_0207798c;

void *func_020124a4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207798c;
    M2C_FIELD(arg0, s32 *, 0x28C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x290)  = 0;
    if (M2C_FIELD(arg0, s32 *, 0x2A4) != 0) {
        func_02069214();
    }
    if (M2C_FIELD(arg0, s32 *, 0x2A8) != 0) {
        func_02069214();
    }
    if (M2C_FIELD(arg0, s32 *, 0x2AC) != 0) {
        func_02069214();
    }
    M2C_FIELD(arg0, s32 *, 0x2A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x2B0) = 0;
    func_02069ed4(arg0 + 0x2B4, 0, 0x100);
    return arg0;
}
