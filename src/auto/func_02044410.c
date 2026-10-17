#include "m2c.h"

M2C_UNK func_020593a4();                            /* extern */
void *func_020691b0(M2C_UNK);                       /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *data_0208dfbc;

void *func_02044410(void) {
    void *temp_r0;

    if (data_0208dfbc == NULL) {
        temp_r0 = func_020691b0(0x220);
        if (temp_r0 != NULL) {
            func_020593a4();
            M2C_FIELD(temp_r0, s32 *, 0)  = -1;
            M2C_FIELD(temp_r0, s32 *, 4)  = 0;
            M2C_FIELD(temp_r0, s8 *, 0xC) = -1;
            M2C_FIELD(temp_r0, s8 *, 0xD) = 0;
            M2C_FIELD(temp_r0, s8 *, 0xE) = 0;
            M2C_FIELD(temp_r0, s8 *, 0xF) = -1;
            func_02069ed4(temp_r0 + 0x10, 0, 0x200);
        }
        data_0208dfbc = temp_r0;
    }
    return data_0208dfbc;
}
