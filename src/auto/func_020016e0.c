#include "m2c.h"

M2C_UNK func_0204ecd4();                            /* extern */
M2C_UNK func_0204ecd8();                            /* extern */
M2C_UNK func_0204ee58();                            /* extern */
M2C_UNK func_02052098();                            /* extern */
s32 func_02052250(M2C_UNK);                         /* extern */
s32 func_02052264(M2C_UNK);                         /* extern */
M2C_UNK func_02052418(M2C_UNK, s32);                /* extern */
s32 func_0205242c(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_020526f4(M2C_UNK, s32);                /* extern */
s32 func_02052724(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
s32 func_020527cc(M2C_UNK, s32, s32);               /* extern */
M2C_UNK func_02052ab4();                            /* extern */
M2C_UNK func_02052b94();                            /* extern */
M2C_UNK func_02054820();                            /* extern */
M2C_UNK func_020569b4();                            /* extern */

void func_020016e0(void) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;

    func_02052098();
    func_02052ab4();
    func_02052b94();
    func_02054820();
    func_0204ecd4();
    func_0204ecd8();
    func_020569b4();
    func_0204ee58();
    *(s32 *) 0x04001000 &= ~0x10000;
    temp_r4 = func_02052250(0);
    func_02052418(0, func_02052724(0, func_02052264(0), temp_r4, 1));
    temp_r4_2 = func_02052264(0);
    temp_r4_3 = func_02052250(0) - temp_r4_2;
    temp_r0   = func_0205242c(0, temp_r4_3, 0x20);
    func_020526f4(0, func_020527cc(0, temp_r0, temp_r0 + temp_r4_3));
}
