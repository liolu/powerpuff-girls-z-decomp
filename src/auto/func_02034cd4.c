#include "m2c.h"

M2C_UNK func_02009784(s32);                         /* extern */
M2C_UNK func_02069214();                            /* extern */
extern M2C_UNK data_0207bbf0;
extern s32 data_0208def8;

void *func_02034cd4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207bbf0;
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_02069214();
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_02009784(data_0208def8);
    return arg0;
}
