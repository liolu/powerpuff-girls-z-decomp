#include "m2c.h"

M2C_UNK func_02069b6c();                            /* extern */

void func_02070740(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x70) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s16 *, 0x74) = 0;
    M2C_FIELD(arg0, s16 *, 0x76) = 0;
    M2C_FIELD(arg0, s16 *, 0x80) = 0;
    M2C_FIELD(arg0, s8 *, 0x62)  = 0;
    M2C_FIELD(arg0, s8 *, 0x63)  = 0;
}
