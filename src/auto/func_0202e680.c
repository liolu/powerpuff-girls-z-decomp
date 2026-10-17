#include "m2c.h"

M2C_UNK func_02006594(void *);                      /* extern */
M2C_UNK func_02032608(void *, void *, M2C_UNK);     /* extern */

void func_0202e680(void *arg0) {
    u8 temp_r0;
    void *temp_r2;

    func_02006594(M2C_FIELD(arg0, void **, 0x48));
    temp_r2 = M2C_FIELD(arg0, void **, 0x48);
    temp_r0 = M2C_FIELD(temp_r2, u8 *, 0xCF);
    if (temp_r0 & 0x40) {
        return;
    }
    if (!(temp_r0 & 6)) {
        return;
    }
    func_02032608(temp_r2 + 0xCC, arg0 + 0x6EC, 1);
}
