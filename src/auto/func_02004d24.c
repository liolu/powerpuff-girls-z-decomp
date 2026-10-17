#include "m2c.h"

M2C_UNK func_020044e0();                            /* extern */
extern M2C_UNK data_020772b8;
extern M2C_UNK data_020772d4;
extern M2C_UNK data_020772f8;

void *func_02004d24(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020772b8;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020772d4;
    M2C_FIELD(arg0, s16 *, 0xC)    = 0;
    M2C_FIELD(arg0, s16 *, 0xE)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    func_020044e0(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020772f8;
    return arg0;
}
