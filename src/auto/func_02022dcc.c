#include "m2c.h"

M2C_UNK func_020185ac(void *);                      /* extern */
M2C_UNK func_020185fc(s32);                         /* extern */

s32 func_02022dcc(void *arg0) {
    s32 var_r0;

    func_020185fc(arg0 + 0x154);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x178) >= (s32) M2C_FIELD(arg0, s32 *, 0x174)) {
        func_020185ac(arg0 + 0x154);
        if ((M2C_FIELD(arg0, s32 *, 0xBC) == M2C_FIELD(arg0, s32 *, 0xC4)) &&
            (M2C_FIELD(arg0, s32 *, 0xC0) == M2C_FIELD(arg0, s32 *, 0xC8))) {
            var_r0 = 3;
        } else {
            var_r0 = 4;
        }
        return var_r0;
    }
    return -1;
}
