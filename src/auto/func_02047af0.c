#include "m2c.h"

M2C_UNK func_0204a030(M2C_UNK *);                   /* extern */
M2C_UNK func_0204a2d4(M2C_UNK *, s32, s32, M2C_UNK); /* extern */

void func_02047af0(s32 arg0) {
    u8 sp0[64];
    s32 temp_r1;

    func_0204a030(sp0);
    temp_r1 = arg0 + 0x44;
    func_0204a2d4(sp0, temp_r1, temp_r1, 3);
}
