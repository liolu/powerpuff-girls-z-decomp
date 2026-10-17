#include "m2c.h"

M2C_UNK func_02006594(void *);                      /* extern */
M2C_UNK func_02032608(void *, void *, M2C_UNK);     /* extern */

void func_0202864c(void *arg0) {
    void *temp_r2;

    func_02006594(M2C_FIELD(arg0, void **, 0x48));
    temp_r2 = M2C_FIELD(arg0, void **, 0x48);
    if ((M2C_FIELD(temp_r2, u8 *, 0xE3) & 0x46) != 6) {
        return;
    }
    func_02032608(temp_r2 + 0xE0, arg0 + 0x12E8, 1);
}
