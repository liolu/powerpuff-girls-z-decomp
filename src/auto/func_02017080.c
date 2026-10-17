#include "engine.h"
#include "m2c.h"

void func_02011164(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02048bf4(M2C_UNK, M2C_UNK);

extern s32 data_0208defc;

void func_02017080(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_02048bf4(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg1, s32 *, -8));
    func_02011164(data_0208defc, *(M2C_UNK *) temp_r4, temp_r4 + 4,
                  func_02048bf4(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg1, s32 *, -4)) + 4);
}
