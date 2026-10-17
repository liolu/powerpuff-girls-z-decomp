#include "m2c.h"

M2C_UNK func_02069214();                            /* extern */
extern M2C_UNK data_0207d220;

void *func_02043a94(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207d220;
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_02069214();
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    return arg0;
}
