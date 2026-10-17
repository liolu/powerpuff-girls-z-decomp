#include "m2c.h"

M2C_UNK func_020477b8(void *);                      /* extern */

void func_02046fa8(void *arg0, void *arg1) {
    void **temp_r0;

    if (M2C_FIELD(arg1, s32 *, 8) != 0) {
        return;
    }
    func_020477b8(arg1);
    if (M2C_FIELD(arg1, u8 *, 0x16) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg1, void ***, 0x74);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg1, u8 *, 0x16)    = 0U;
    M2C_FIELD(arg1, void **, 0x1C) = (void *) M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(arg0, void **, 0xC)  = arg1;
}
