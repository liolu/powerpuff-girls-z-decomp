#include "m2c.h"

M2C_UNK func_02069214();                            /* extern */
extern M2C_UNK data_020772d4;

void *func_020043a4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020772d4;
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        func_02069214();
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    return arg0;
}
