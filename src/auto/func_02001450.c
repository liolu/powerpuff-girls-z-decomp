#include "m2c.h"

M2C_UNK func_02069214();                      /* extern */
extern M2C_UNK data_02077204;

void *func_02001450(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02077204;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_02069214();
    }
    func_02069214(arg0);
    return arg0;
}
