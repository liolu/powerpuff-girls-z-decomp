#include "m2c.h"

M2C_UNK func_02056ce8();                            /* extern */
M2C_UNK func_020570a0();                     /* extern */
s32 func_020570cc();                         /* extern */
M2C_UNK func_02069214();                      /* extern */
extern void *data_0208c588;

void func_02001f94(void) {
    void *temp_r6;

    temp_r6 = data_0208c588;
    if (temp_r6 == NULL) {
        return;
    }
    if (temp_r6 != NULL) {
        if (M2C_FIELD(temp_r6, u8 *, 1) != 0) {
            do {
                func_02056ce8();
                func_020570a0(4);
            } while (func_020570cc(4) != 0);
            M2C_FIELD(temp_r6, s8 *, 1) = 0;
        }
        if (M2C_FIELD(temp_r6, s32 *, 0xC) != 0) {
            func_02069214();
            M2C_FIELD(temp_r6, s32 *, 0xC) = 0;
        }
        func_02069214(temp_r6);
    }
    data_0208c588 = NULL;
}
