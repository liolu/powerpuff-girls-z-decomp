#include "m2c.h"

M2C_UNK func_0205202c(M2C_UNK, s32);                /* extern */
M2C_UNK func_02053050(s32, M2C_UNK, M2C_UNK, s32);  /* extern */
M2C_UNK func_0205344c(M2C_UNK, M2C_UNK, s32);       /* extern */
extern s32 data_0207eec0;

void func_020070c4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r4;

    temp_r4 = arg3 * 2;
    func_0205202c(arg1, temp_r4);
    if (data_0207eec0 != -1) {
        func_02053050(data_0207eec0, arg1, arg2, temp_r4);
        return;
    }
    func_0205344c(arg1, arg2, temp_r4);
}
