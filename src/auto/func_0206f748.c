#include "m2c.h"

M2C_UNK func_0205fc60();                            /* extern */
M2C_UNK func_02069214(void *);                      /* extern */
M2C_UNK func_02069b6c();                            /* extern */
extern void *data_0209be74;

void func_0206f748(void) {
    void *temp_r4;

    temp_r4 = data_0209be74;
    if (temp_r4 == NULL) {
        return;
    }
    if (temp_r4 != NULL) {
        if (M2C_FIELD(temp_r4, u8 *, 0xC064) != 0) {
            func_0205fc60();
        }
        if (M2C_FIELD(temp_r4, s32 *, 0xC060) != 0) {
            func_02069b6c();
        }
        func_02069214(temp_r4);
    }
    data_0209be74 = NULL;
}
