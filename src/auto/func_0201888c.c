#include "m2c.h"

M2C_UNK func_02007408(s32, s32, s32, void *, s32);  /* extern */
M2C_UNK func_02007514(s32);                         /* extern */

void func_0201888c(void *arg0) {
    func_02007408(M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s32 *, 0x60), arg0 + 0x20, 1);
    func_02007514(M2C_FIELD(arg0, s32 *, 0x64));
}
