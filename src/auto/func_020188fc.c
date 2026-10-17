#include "m2c.h"

M2C_UNK func_02007408(s32, s32, s32, void *, s32);  /* extern */
M2C_UNK func_02007514(s32);                         /* extern */
M2C_UNK func_020189b4(void *, M2C_UNK);             /* extern */

void func_020188fc(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r2;
    u16 temp_r5;

    temp_r1                      = M2C_FIELD(arg0, s32 *, 0x54) + arg1;
    M2C_FIELD(arg0, s32 *, 0x54) = temp_r1;
    temp_r2                      = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_r1 < temp_r2) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (M2C_FIELD(arg0, s32 *, 0x54) - temp_r2);
    temp_r5                      = M2C_FIELD(arg0, u16 *, 0x40);
    if (temp_r5 & 1) {
        func_020189b4(arg0, 0);
    }
    if (temp_r5 & 2) {
        func_020189b4(arg0, 1);
    }
    if (temp_r5 & 4) {
        func_020189b4(arg0, 2);
    }
    if (temp_r5 & 8) {
        func_020189b4(arg0, 3);
    }
    if (temp_r5 & 0x10) {
        func_020189b4(arg0, 4);
    }
    func_02007408(M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s32 *, 0x60), arg0, 1);
    func_02007514(M2C_FIELD(arg0, s32 *, 0x64));
}
