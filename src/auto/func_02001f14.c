#include "m2c.h"

M2C_UNK func_02052eb4();                            /* extern */
s32 func_02056a2c(M2C_UNK *);                       /* extern */
M2C_UNK func_02056ac0(M2C_UNK *);                   /* extern */
void *func_020691b0(M2C_UNK);                       /* extern */
extern void *data_0208c588;

void *func_02001f14(void) {
    u8 sp0[8];
    void *temp_r0;

    if (data_0208c588 == NULL) {
        temp_r0 = func_020691b0(0x10);
        if (temp_r0 != NULL) {
            if (func_02056a2c(sp0) == 0) {
                func_02052eb4();
            }
            func_02056ac0(sp0);
            M2C_FIELD(temp_r0, s8 *, 0)    = 0;
            M2C_FIELD(temp_r0, s8 *, 1)    = 0;
            M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
            M2C_FIELD(temp_r0, s16 *, 2)   = 4;
            M2C_FIELD(temp_r0, s16 *, 4)   = 0xA;
        }
        data_0208c588 = temp_r0;
    }
    return data_0208c588;
}
