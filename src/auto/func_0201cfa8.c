#include "m2c.h"

M2C_UNK func_02006594(s32);                         /* extern */
M2C_UNK func_02032608(void *, void *, M2C_UNK);     /* extern */

void func_0201cfa8(void *arg0) {
    void *temp_r0;

    func_02006594(M2C_FIELD(arg0, s32 *, 0x48));
    temp_r0 = M2C_FIELD(arg0, void **, 0x934);
    if (temp_r0 == NULL) {
        return;
    }
    if ((M2C_FIELD(temp_r0, u8 *, 3) & 0x46) != 6) {
        return;
    }
    func_02032608(temp_r0, arg0 + 0x948, 1);
}
