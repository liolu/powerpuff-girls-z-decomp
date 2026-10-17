#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_02054990(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_0205977c(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_02054990(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_02054990(0xE, arg0, 0) != 0);
}
