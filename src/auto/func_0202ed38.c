#include "m2c.h"

M2C_UNK func_02009784();                         /* extern */
M2C_UNK func_02069214();                      /* extern */
extern M2C_UNK data_0207acb4;
extern s32 data_0208def8;

void *func_0202ed38(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207acb4;
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        func_02069214();
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    func_02009784(data_0208def8);
    func_02069214(arg0);
    return arg0;
}
