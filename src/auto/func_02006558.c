#include "engine.h"
#include "m2c.h"

void *func_02069eb4(void *, const void *, int);

extern M2C_UNK data_02077334;
extern M2C_UNK data_0208cb40;

void func_02006558(s32 arg0, s32 arg1) {
    func_02069eb4((s32) &data_0208cb40, (0x60 * arg1) + (s32) &data_02077334, 0x60);
}
