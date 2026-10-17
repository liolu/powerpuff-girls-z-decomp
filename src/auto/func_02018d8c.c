#include "m2c.h"

M2C_UNK func_0204eab4(void *);                      /* extern */

void func_02018d8c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x30)  = 0;
    func_0204eab4(arg0 + 0x20);
}
