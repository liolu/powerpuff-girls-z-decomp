#include "m2c.h"

M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_0208c544;

void *func_0206f25c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0208c544;
    M2C_FIELD(arg0, s8 *, 5)       = 0;
    M2C_FIELD(arg0, s8 *, 4)       = 0;
    M2C_FIELD(arg0, s8 *, 6)       = 0;
    M2C_FIELD(arg0, s8 *, 0xB)     = 0;
    M2C_FIELD(arg0, s8 *, 0xC)     = -1;
    func_02069ed4(arg0 + 0x20, 0, 0x28);
    return arg0;
}
