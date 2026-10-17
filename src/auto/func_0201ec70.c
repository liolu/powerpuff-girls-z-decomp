#include "m2c.h"

M2C_UNK func_0201eff8(void *);                      /* extern */
s32 func_02061484(void *, M2C_UNK);                 /* extern */

void func_0201ec70(s32 arg0) {
    s32 var_r5;
    void *var_r6;

    var_r6 = arg0 + 4;
    var_r5 = 0;
    do {
        if ((M2C_FIELD(var_r6, s32 *, 0x30) != 0) && (func_02061484(var_r6, 0x1000) != 0)) {
            func_0201eff8(var_r6);
        }
        var_r5 += 1;
        var_r6 += 0x54;
    } while (var_r5 < 0x10);
}
