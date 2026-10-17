#include "m2c.h"

M2C_UNK func_02006214();                            /* extern */
M2C_UNK func_02069214(void *);                      /* extern */
M2C_UNK func_0206f2a0(void *);                      /* extern */
extern M2C_UNK data_0207a59c;

void *func_0202c46c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207a59c;
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        func_02006214();
    }
    func_0206f2a0(arg0);
    func_02069214(arg0);
    return arg0;
}
