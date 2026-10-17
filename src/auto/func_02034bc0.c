#include "m2c.h"

M2C_UNK func_02001260(M2C_UNK);                     /* extern */
M2C_UNK func_02034bf0(s32, M2C_UNK);                /* extern */
s32 func_020691b0(s32);                             /* extern */

void func_02034bc0(M2C_UNK arg0) {
    s32 temp_r0;

    func_02001260(0);
    temp_r0 = func_020691b0(0x5AC);
    if (temp_r0 == 0) {
        return;
    }
    func_02034bf0(temp_r0, arg0);
}
