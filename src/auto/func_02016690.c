#include "m2c.h"

M2C_UNK func_02045c9c(void *, s32);                 /* extern */

void func_02016690(s32 arg0, void *arg1) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg1, void **, -8), void **, 0x74);
    func_02045c9c(temp_r4, M2C_FIELD(arg1, s32 *, -4));
    M2C_FIELD(temp_r4, s16 *, 0x46) = -1;
    M2C_FIELD(temp_r4, s32 *, 0x48) = 1;
    M2C_FIELD(temp_r4, s32 *, 0xC)  = (s32) (M2C_FIELD(temp_r4, s32 *, 0xC) & ~0x40000000);
}
