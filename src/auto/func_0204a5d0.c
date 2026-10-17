#include "m2c.h"

M2C_UNK func_020492b8(M2C_UNK, s32 *, s32 *);       /* extern */
M2C_UNK func_02049690();                            /* extern */

void *func_0204a5d0(void *arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_02049690();
    func_020492b8(arg1, &sp4, &sp0);
    M2C_FIELD(arg0, s32 *, 0x14) = sp0;
    M2C_FIELD(arg0, s32 *, 0x18) = sp4;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (0 - sp4);
    M2C_FIELD(arg0, s32 *, 0x28) = sp0;
    return arg0;
}
