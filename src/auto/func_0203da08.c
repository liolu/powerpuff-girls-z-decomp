#include "m2c.h"

M2C_UNK func_02006594(s32);                         /* extern */
extern s32 data_0208ca10;

void func_0203da08(void *arg0) {
    *(s32 *) 0x04000010 = 0x01FF0000 & ((u32) (M2C_FIELD(arg0, u16 *, 0x1052) << 0x18) >> 8);
    func_02006594(data_0208ca10);
}
