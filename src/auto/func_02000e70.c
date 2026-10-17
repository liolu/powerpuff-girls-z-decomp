#include "m2c.h"

M2C_UNK func_02063978();                            /* extern */
M2C_UNK func_02063d60(void *);                      /* extern */
M2C_UNK func_02064cbc(void *, s32, s32, M2C_UNK);   /* extern */
s32 func_020653a8(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02065fe8(s32);                         /* extern */
M2C_UNK func_0206630c(M2C_UNK, s32);                /* extern */
M2C_UNK func_020665dc(void *);                      /* extern */
extern s32 data_02077828;

s32 func_02000e70(void *arg0) {
    func_02063978();
    M2C_FIELD(arg0, s32 *, 0x80090) = func_020653a8(arg0 + 0x90, 0x80000);
    func_02064cbc(arg0, data_02077828, M2C_FIELD(arg0, s32 *, 0x80090), 0);
    func_0206630c(0xA, M2C_FIELD(arg0, s32 *, 0x80090));
    func_02065fe8(M2C_FIELD(arg0, s32 *, 0x80090));
    func_02063d60(arg0 + 0x80094);
    func_02063d60(arg0 + 0x80098);
    func_02063d60(arg0 + 0x8009C);
    func_020665dc(arg0 + 0x800A0);
    return 1;
}
