#include "m2c.h"

M2C_UNK func_02047708(s32 *, s32);                  /* extern */
M2C_UNK func_020477b8(s32 *);                       /* extern */

void func_0201699c(s32 arg0, void *arg1) {
    s32 *temp_r4;

    temp_r4 = M2C_FIELD(arg1, s32 **, -8);
    if (*temp_r4 != 0) {
        func_020477b8(temp_r4);
    }
    func_02047708(temp_r4, M2C_FIELD(arg1, s32 *, -4));
}
