#include "m2c.h"

M2C_UNK func_020016e0();                            /* extern */
M2C_UNK func_02001794();                            /* extern */
M2C_UNK func_02001804();                            /* extern */
s32 func_02013308();                                /* extern */
M2C_UNK func_02013354();                            /* extern */
s32 func_0201339c();                                /* extern */
M2C_UNK func_020134a0(s32);                         /* extern */
M2C_UNK func_02055f50(M2C_UNK);                     /* extern */
s32 func_02056698(s32, s32);                        /* extern */
s32 func_02069228();                                /* extern */

void main(void) {
    s32 temp_r0;
    s32 temp_r4;

    func_020016e0();
    func_02001794();
    func_02001804();
    func_02055f50(-1);
    temp_r4 = func_02056698(0, 0);
    func_02056698(func_02069228(), temp_r4);
    temp_r0 = func_02013308();
    if (temp_r0 == 0) {
        return;
    }
    if (func_0201339c() != 0) {
        func_020134a0(temp_r0);
    }
    func_02013354();
}
