#include "m2c.h"

void *func_020691b0(s32);                           /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *data_0208c580;

void *func_02000dcc(void) {
    void *temp_r0;

    if (data_0208c580 == NULL) {
        temp_r0 = func_020691b0(0x800A8);
        if (temp_r0 != NULL) {
            func_02069ed4(temp_r0, 0, 0x90);
            func_02069ed4(temp_r0 + 0x90, 0, 0x80000);
            M2C_FIELD(temp_r0, s32 *, 0x80090) = 0;
            M2C_FIELD(temp_r0, s16 *, 0x800A4) = -1;
            M2C_FIELD(temp_r0, s16 *, 0x800A6) = -1;
        }
        data_0208c580 = temp_r0;
    }
    return data_0208c580;
}
