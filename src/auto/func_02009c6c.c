#include "engine.h"
#include "m2c.h"

void func_02009c94(M2C_UNK, M2C_UNK);
void func_02009e98(M2C_UNK);

void func_02009c6c(s32 arg0) {
    s32 temp_r1;

    func_02009e98(arg0);
    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x2B0);
    if (temp_r1 == 0) {
        return;
    }
    func_02009c94(arg0, temp_r1);
}
