/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_02071d20[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_02077128[1] = {(u32) &__sinit_02071d20};
