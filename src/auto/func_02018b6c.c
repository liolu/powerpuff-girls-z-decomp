#include "m2c.h"

s32 func_02061484(void *);                          /* extern */

void func_02018b6c(void *arg0) {
    if ((M2C_FIELD(arg0, void **, 0) != NULL) && (M2C_FIELD(arg0, s32 *, 0x34) != 0)) {
        if ((s32) M2C_FIELD(arg0, s16 *, 0x38) < 0) {
            return;
        }
        if (func_02061484(arg0 + 4) == 0) {
            return;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 6) = (u16) * *M2C_FIELD(arg0, u16 ***, 4);
    }
}
