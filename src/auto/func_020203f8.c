#include "m2c.h"

M2C_UNK func_02018584(void *, s32, M2C_UNK, M2C_UNK, s32); /* extern */

void func_020203f8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_02018584(((s8 *) arg0 + 4), arg1, 0x1000, 0x1800, 0x800);
}
