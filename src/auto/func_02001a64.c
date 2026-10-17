#include "m2c.h"

void *func_020691b0(M2C_UNK);                       /* extern */
extern void *data_0208c584;

void *func_02001a64(void) {
    void *temp_r0;

    if (data_0208c584 == NULL) {
        temp_r0 = func_020691b0(8);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, s32 *, 0) = 0;
            M2C_FIELD(temp_r0, s32 *, 4) = 0;
        }
        data_0208c584 = temp_r0;
    }
    return data_0208c584;
}
