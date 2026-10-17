#include "m2c.h"

M2C_UNK func_02052eb4();                            /* extern */
M2C_UNK func_0205ba9c(M2C_UNK *);                   /* extern */
s32 func_0205f5c0(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0205f814(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK func_0206fb34;

void func_0206f7a4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    M2C_FIELD(arg0, s16 *, 0)   = 0;
    M2C_FIELD(arg0, s16 *, 2)   = 0;
    M2C_FIELD(arg0, s16 *, 4)   = 0;
    M2C_FIELD(arg0, s16 *, 6)   = 0;
    M2C_FIELD(arg0, s16 *, 8)   = 0;
    M2C_FIELD(arg0, s16 *, 0xA) = 0;
    M2C_FIELD(arg0, s16 *, 0xC) = 0;
    if (func_0205f5c0(arg0 + 0x60, arg3, arg1, arg2, 2) != 0) {
        func_02052eb4();
    }
    M2C_FIELD(arg0, s8 *, 0xC064) = 1;
    func_0205f814(0x100, 2);
    func_0205ba9c(&func_0206fb34);
    M2C_FIELD(arg0, s16 *, 0) = 1;
}
