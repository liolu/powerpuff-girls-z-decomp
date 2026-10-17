#include "m2c.h"

void func_02018598(void *arg0) {
    void *temp_r1;

    temp_r1                     = M2C_FIELD(arg0, void **, 0x28);
    M2C_FIELD(temp_r1, u8 *, 3) = (u8) (M2C_FIELD(temp_r1, u8 *, 3) | 6);
}
