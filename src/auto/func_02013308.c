#include "m2c.h"

void *func_020691b0(M2C_UNK);                       /* extern */
extern M2C_UNK data_0208dee8;

void *func_02013308(void) {
    void *temp_r0;

    if (M2C_FIELD(&data_0208dee8, void **, 0x1C) == NULL) {
        temp_r0 = func_020691b0(8);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, s8 *, 0)  = 0;
            M2C_FIELD(temp_r0, s8 *, 1)  = 0;
            M2C_FIELD(temp_r0, s32 *, 4) = 0;
        }
        M2C_FIELD(&data_0208dee8, void **, 0x1C) = temp_r0;
    }
    return M2C_FIELD(&data_0208dee8, void **, 0x1C);
}
