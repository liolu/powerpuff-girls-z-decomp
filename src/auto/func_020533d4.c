#include "m2c.h"

M2C_UNK func_01ff81b4(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02053218(M2C_UNK);                     /* extern */
M2C_UNK func_020532fc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02053380(M2C_UNK, M2C_UNK, u32, M2C_UNK); /* extern */

void func_020533d4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3) {
    func_020532fc(arg0, 0x10000000);
    func_02053380(arg0, arg1, arg3, 0);
    if (arg3 == 0) {
        return;
    }
    func_02053218(arg0);
    func_01ff81b4(arg0, arg1, arg2, 0x92600000 | (arg3 >> 1));
}
