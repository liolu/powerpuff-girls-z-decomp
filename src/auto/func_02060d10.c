#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_02054990(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02060d10(M2C_UNK arg0) {
    if (func_02054990(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_02054990(0xD, arg0, 0) != 0);
}
