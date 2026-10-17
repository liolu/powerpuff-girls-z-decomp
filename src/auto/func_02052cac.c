#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
M2C_UNK func_02050b38(M2C_UNK, M2C_UNK);            /* extern */

void func_02052cac(void) {
    WaitByLoop(1);
    func_02050b38(1, 1);
}
