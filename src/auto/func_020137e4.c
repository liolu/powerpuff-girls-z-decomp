#include "m2c.h"

M2C_UNK func_02069214(void *);                      /* extern */
M2C_UNK func_02069254();                            /* extern */
extern M2C_UNK data_020779cc;

void *func_020137e4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020779cc;
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        func_02069254();
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    }
    func_02069214(arg0);
    return arg0;
}
