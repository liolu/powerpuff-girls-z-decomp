#include "m2c.h"

M2C_UNK func_02006594(s32);                         /* extern */
M2C_UNK func_02013260(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0204ee94();                            /* extern */
extern s32 data_0208ca10;
extern M2C_UNK data_0208df18;

void func_0203f4bc(void *arg0) {
    func_0204ee94();
    *(s32 *) 0x04001000 |= 0x10000;
    func_02013260(&data_0208df18, 3, 1);
    func_02006594(data_0208ca10);
    M2C_FIELD((void *) 0x04000010, s32 *, 0) =
        (s32) ((0x1FF & ((s32) M2C_FIELD(arg0, u16 *, 0x28) >> 2)) |
               (0x01FF0000 & ((u32) (((s32) M2C_FIELD(arg0, u16 *, 0x2A) >> 2) << 0x18) >> 8)));
    if ((s32) M2C_FIELD(arg0, s8 *, 0xC) < 2) {
        return;
    }
    M2C_FIELD((void *) 0x04000010, s32 *, 0x1000) =
        (s32) ((0x1FF & ((s32) M2C_FIELD(arg0, u16 *, 0x28) >> 2)) |
               (0x01FF0000 & ((u32) (((s32) M2C_FIELD(arg0, u16 *, 0x2A) >> 2) << 0x18) >> 8)));
}
