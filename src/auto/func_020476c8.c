#include "m2c.h"

M2C_UNK func_02047024(M2C_UNK, M2C_UNK *, s32);     /* extern */
M2C_UNK func_0204784c(M2C_UNK *, s32, s32);         /* extern */
extern s32 data_0208dfc0;
extern s32 data_0208dfc4;

void func_020476c8(M2C_UNK arg0, s32 arg1) {
    u8 sp0[96];

    func_02047024(arg0, sp0, arg1 + 0x70);
    func_0204784c(sp0, data_0208dfc0, data_0208dfc4);
}
