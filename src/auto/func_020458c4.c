#include "m2c.h"

s32 func_0204b654(void *, void *);                  /* extern */

void *func_020458c4(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0)    = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg1, s32 *, 4)    = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg1, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(arg1, s32 *, 0xC)  = 0;
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg1, s32 *, 0x1C) = 0;
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg1, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg1, s32 *, 0x2C) = 0;
    M2C_FIELD(arg1, s32 *, 0x30) = (s32) (0 - func_0204b654(arg0, arg0 + 0xC));
    M2C_FIELD(arg1, s32 *, 0x34) = (s32) (0 - func_0204b654(arg0, arg0 + 0x18));
    M2C_FIELD(arg1, s32 *, 0x38) = (s32) (0 - func_0204b654(arg0, arg0 + 0x24));
    M2C_FIELD(arg1, s32 *, 0x3C) = 0x1000;
    return arg1;
}
