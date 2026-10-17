#include "m2c.h"

s32 func_02028eb0(void *arg0, void *arg1) {
    s16 temp_r1;

    if (arg0 == NULL) {
        return 1;
    }
    if (arg1 == NULL) {
        return -1;
    }
    temp_r1 = M2C_FIELD(arg1, s16 *, 6);
    if (temp_r1 == 0) {
        return -1;
    }
    return M2C_FIELD(arg0, s16 *, 6) - temp_r1;
}
