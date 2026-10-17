#include "m2c.h"

M2C_UNK func_02069214(void *);                      /* extern */
M2C_UNK func_02069b6c();                            /* extern */
extern M2C_UNK data_0208c564;

void *func_020706ec(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0208c564;
    if (M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x70) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
    }
    func_02069214(arg0);
    return arg0;
}
