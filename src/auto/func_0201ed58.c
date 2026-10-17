#include "m2c.h"

M2C_UNK func_0201eff8(s32);                         /* extern */
M2C_UNK func_02061734(s32, s32);                    /* extern */

void func_0201ed58(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r1;
    void *temp_r1;

    temp_r4 = (arg1 * 0x54) + (arg0 + 4);
    temp_r1 = M2C_FIELD(temp_r4, void **, 0x30);
    if ((arg2 >= 0) && (arg2 < (s32) M2C_FIELD(temp_r1, u16 *, 0))) {
        var_r1 = M2C_FIELD(temp_r1, s32 *, 4) + (arg2 * 0x10);
    } else {
        var_r1 = 0;
    }
    func_02061734(temp_r4, var_r1);
    func_0201eff8(temp_r4);
}
