#include "m2c.h"

M2C_UNK func_02006594(s32);                         /* extern */
M2C_UNK func_02032520(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02032608(void *, void *, M2C_UNK);     /* extern */

void func_0203bcfc(void *arg0) {
    void *temp_r0;

    func_02006594(M2C_FIELD(arg0, s32 *, 0x48));
    temp_r0 = M2C_FIELD(arg0, void **, 0x710);
    if ((temp_r0 != NULL) && ((M2C_FIELD(temp_r0, u8 *, 3) & 0x46) == 6)) {
        func_02032608(temp_r0, arg0 + 0x724, 1);
    }
    if (M2C_FIELD(arg0, s16 *, 0x6B2) != 3) {
        return;
    }
    func_02032520(M2C_FIELD((arg0 + (M2C_FIELD(arg0, s16 *, 0x6B6) * 0x10)), s32 *, 0x6C0), 0xF, 1);
}
