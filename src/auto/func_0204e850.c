#include "m2c.h"

extern M2C_UNK data_0207dd70;
extern M2C_UNK data_0207dd78;
extern M2C_UNK data_0207de78;

s32 func_0204e850(s32 *arg0, s32 *arg1, M2C_UNK **arg2, M2C_UNK **arg3) {
    *arg0 = M2C_FIELD(&data_0207dd70, s32 *, 4);
    *arg1 = M2C_FIELD(&data_0207dd70, s32 *, 0);
    *arg2 = &data_0207de78;
    *arg3 = &data_0207dd78;
    return 0;
}
