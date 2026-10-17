#include "m2c.h"

M2C_UNK func_020011e4();                            /* extern */
s32 func_02013794(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0203f17c(s32, M2C_UNK);                /* extern */
s32 func_020691b0(M2C_UNK);                         /* extern */
M2C_UNK func_020705b4();                            /* extern */
extern s32 data_0208df04;

void func_0203f130(M2C_UNK arg0) {
    s32 temp_r0;

    func_020705b4();
    if (func_02013794(data_0208df04, 0xB, -1) != 0) {
        func_020011e4();
    }
    temp_r0 = func_020691b0(0xDC);
    if (temp_r0 == 0) {
        return;
    }
    func_0203f17c(temp_r0, arg0);
}
