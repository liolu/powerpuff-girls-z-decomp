/* compiler: 2.0/sp1p5  */
/* func_020161b8 from projets/farm-frenzy/src/auto/func_020161b8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052eb4();
extern s32 func_020612a8(void *, s32);
extern M2C_UNK func_02063268(void *);
s32 func_02063114(void *arg0, void **arg1) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r4;

    var_r4 = 0;
    if (arg0 != ((void *) 0)) {
        if ((arg0 != ((void *) 0)) && ((*(s32 *) ((s8 *) (arg0) + (0))) == 0x4E465452)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            if ((arg0 != ((void *) 0)) && ((u32) (*(u16 *) ((s8 *) (arg0) + (6))) >= 0x101U)) {
                var_r0_3 = 1;
            } else {
                var_r0_3 = 0;
            }
            if (var_r0_3 != 0) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
        }
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 == 0) {
        if (arg0 != ((void *) 0)) {
            if ((arg0 != ((void *) 0)) && ((*(s32 *) ((s8 *) (arg0) + (0))) == 0x4E465452)) {
                var_r0_4 = 1;
            } else {
                var_r0_4 = 0;
            }
            if (var_r0_4 != 0) {
                var_r0_5 = 1;
            } else {
                var_r0_5 = 0;
            }
            if (var_r0_5 != 0) {
                if ((arg0 != ((void *) 0)) && ((u32) (*(u16 *) ((s8 *) (arg0) + (6))) >= 0x100U)) {
                    var_r0_6 = 1;
                } else {
                    var_r0_6 = 0;
                }
                if (var_r0_6 != 0) {
                    var_r0_5 = 1;
                } else {
                    var_r0_5 = 0;
                }
            }
        } else {
            var_r0_5 = 0;
        }
        if (var_r0_5 == 0) {
            func_02052eb4();
        }
        var_r4 = 1;
    }
    func_02063268(arg0);
    temp_r0 = func_020612a8(arg0, 0x46494E46);
    if (temp_r0 == 0) {
        *arg1 = ((void *) 0);
        return 0;
    }
    *arg1 = temp_r0 + 8;
    if (var_r4 != 0) {
        (*(s8 *) ((s8 *) ((*(void **) ((s8 *) (*arg1) + (8)))) + (7))) = 0;
    }
    return 1;
}
