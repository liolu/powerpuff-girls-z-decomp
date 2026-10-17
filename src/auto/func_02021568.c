#include "m2c.h"

M2C_UNK func_0200130c(M2C_UNK);                     /* extern */
M2C_UNK func_020185ac(void *);                      /* extern */
M2C_UNK func_020185fc(s32);                         /* extern */

s32 func_02021568(void *arg0) {
    void *temp_ip;

    func_020185fc(arg0 + 0x6B8);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6DC) < (s32) M2C_FIELD(arg0, s32 *, 0x6D8)) {
        return -1;
    }
    func_020185ac(arg0 + 0x6B8);
    temp_ip                         = M2C_FIELD(arg0, void **, 0x6B4);
    M2C_FIELD(temp_ip, u8 *, 3)     = (u8) (M2C_FIELD(temp_ip, u8 *, 3) | 0x40);
    M2C_FIELD(arg0, s32 *, 0x6B0)   = 0;
    M2C_FIELD(arg0, void **, 0x6B4) = NULL;
    M2C_FIELD(arg0, s8 *, 0x6A8)    = (s8) (M2C_FIELD(arg0, s8 *, 0x6A8) + 1);
    func_0200130c(0x28);
    return 0;
}
