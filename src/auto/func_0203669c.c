#include "m2c.h"

M2C_UNK func_020011e4();                            /* extern */
M2C_UNK func_02001260(M2C_UNK);                     /* extern */
s32 func_02013794(s32, s32, M2C_UNK);               /* extern */
extern s32 data_0208df04;

void func_0203669c(s32 arg0, void *arg1) {
    func_02001260(0x3C);
    if (func_02013794(data_0208df04, M2C_FIELD(arg1, s32 *, -4), -1) == 0) {
        return;
    }
    func_020011e4();
}
