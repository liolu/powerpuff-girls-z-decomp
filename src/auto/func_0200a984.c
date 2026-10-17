#include "m2c.h"

M2C_UNK func_0200428c();                         /* extern */
M2C_UNK func_02009784();                         /* extern */
M2C_UNK func_02053280();                     /* extern */
M2C_UNK func_02069214();                         /* extern */
extern M2C_UNK data_020777fc;
extern M2C_UNK data_0208c5bc;
extern s32 data_0208def8;

void *func_0200a984(void *arg0) {
    s32 temp_r5;
    s32 var_r6;
    void **temp_r0;
    void *var_r7;

    var_r6                         = 0;
    var_r7                         = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020777fc;
    do {
        temp_r0 = M2C_FIELD(var_r7, void ***, 0x9C);
        if (temp_r0 != NULL) {
            if (temp_r0 != NULL) {
                M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
            }
            M2C_FIELD(var_r7, void ***, 0x9C) = NULL;
        }
        var_r6 += 1;
        var_r7 += 0x44;
    } while (var_r6 < 4);
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        func_02069214();
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r5 != 0) {
        if (temp_r5 != 0) {
            func_0200428c(temp_r5);
            func_02069214(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x66) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
            func_02069214();
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
    } else if (M2C_FIELD(&data_0208c5bc, s32 *, 0x1C) != 0) {
        func_02069214();
        M2C_FIELD(&data_0208c5bc, s32 *, 0x1C) = 0;
    }
    func_02053280(1);
    *(s8 *) 0x0400004C = 0;
    *(u16 *) 0x0400000A &= ~0x40;
    func_02009784(data_0208def8);
    return arg0;
}
