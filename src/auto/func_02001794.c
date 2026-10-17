#include "m2c.h"

M2C_UNK func_0204f8ec(s32);                         /* extern */
M2C_UNK func_0204fcb0();                            /* extern */
M2C_UNK func_02053494(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_02001794(void) {
    func_0204f8ec(0x1FF);
    func_02053494(0, 0x06800000, 0xA4000);
    func_0204fcb0();
    func_02053494(0xC0, 0x07000000, 0x400);
    func_02053494(0, 0x05000000, 0x400);
    func_02053494(0xC0, 0x07000400, 0x400);
    func_02053494(0, 0x05000400, 0x400);
}
