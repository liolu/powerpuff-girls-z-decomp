#include "m2c.h"

M2C_UNK func_02052eb4();                            /* extern */
s32 func_0205fb64(M2C_UNK);                         /* extern */
s32 func_0206f87c(s16 *, M2C_UNK);                  /* extern */

void func_0206f834(s16 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = 2;
    if (func_0205fb64(arg2) != 0) {
        *arg0 = 7;
        return;
    }
    if (func_0206f87c(arg0, arg1) != 0) {
        return;
    }
    func_02052eb4();
}
