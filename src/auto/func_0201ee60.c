#include "m2c.h"

M2C_UNK func_0201eff8(s32);                         /* extern */
M2C_UNK func_020616d4(s32);                         /* extern */

void func_0201ee60(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = (arg1 * 0x54) + (arg0 + 4);
    func_020616d4(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0xC) = 1;
    func_0201eff8(temp_r4);
}
