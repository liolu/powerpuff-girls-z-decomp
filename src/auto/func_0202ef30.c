#include "m2c.h"

M2C_UNK func_02006594(s32);                         /* extern */
M2C_UNK func_02013260(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0204ee94();                            /* extern */
extern s32 data_0208ca10;
extern M2C_UNK data_0208df18;

void func_0202ef30(void *arg0) {
    void **temp_r0;

    func_0204ee94();
    *(s32 *) 0x04001000 |= 0x10000;
    func_02013260(&data_0208df18, 3, 1);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x1C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x18)(temp_r0);
        return;
    }
    func_02006594(data_0208ca10);
}
