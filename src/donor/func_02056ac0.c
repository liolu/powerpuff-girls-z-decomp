/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02015130 from projets/heroes-of-mana/src/donor/func_02015130.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef short s16;
typedef signed long s32;
typedef volatile u16 vu16;
typedef volatile u16 REGType16v;
typedef int OSIntrMode;
typedef u32 REGType32;
typedef u64 REGType64;
typedef int TPRequestCommand;
typedef int TPRequestResult;
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;
typedef struct NvTpData {
    s16 x0;
    s16 y0;
    s16 xDotSize;
    s16 yDotSize;
} TPCalibrateParam;
typedef void (*TPRecvCallback)(TPRequestCommand command, TPRequestResult result, u16 index);
typedef struct {
    s32 x0;
    s32 xDotSize;
    s32 xDotSizeInv;
    s32 y0;
    s32 yDotSize;
    s32 yDotSizeInv;
} TPiCalibrateParam;
extern struct {
    u32 reserved0;
    TPRecvCallback callback;
    TPData buf;
    u16 index;
    u16 frequence;
    TPData *samplingBufs;
    u16 bufSize;
    u16 reserved1a;
    TPiCalibrateParam calibrate;
    u16 calibrate_flg;
    vu16 state;
    vu16 err_flg;
    vu16 command_flg;
} data_020900b0;
extern OSIntrMode func_02052c30(void);
extern OSIntrMode func_02052c44(OSIntrMode state);
static inline void CP_SetDivImm32_32_NS_(u32 numer, u32 denom) {
    *(REGType32 *) 0x04000290 = numer;
    *(REGType64 *) 0x04000298 = denom;
}
static inline void CP_SetDiv32_32(u32 numer, u32 denom) {
    (*(REGType16v *) 0x04000280) = 0;
    CP_SetDivImm32_32_NS_(numer, denom);
}
static inline u32 CP_IsDivBusy(void) {
    return ((*(REGType16v *) 0x04000280) & 0x8000);
}
static inline void CP_WaitDiv(void) {
    while (CP_IsDivBusy()) {
    }
}
static inline s32 CP_GetDivResultImm32(void) {
    return (s32) (*(REGType32 *) 0x040002a0);
}
static inline s32 CP_GetDivResult32(void) {
    CP_WaitDiv();
    return CP_GetDivResultImm32();
}
void func_02056ac0(const TPCalibrateParam *param) {
    OSIntrMode enabled;

    if (param == ((void *) 0)) {
        data_020900b0.calibrate_flg = 0;
        return;
    }

    enabled = func_02052c30();

    if (param->xDotSize != 0) {
        CP_SetDiv32_32(0x10000000, (u32) param->xDotSize);

        data_020900b0.calibrate.x0          = param->x0;
        data_020900b0.calibrate.xDotSize    = param->xDotSize;
        data_020900b0.calibrate.xDotSizeInv = (s32) CP_GetDivResult32();
    } else {
        data_020900b0.calibrate.x0          = 0;
        data_020900b0.calibrate.xDotSize    = 0;
        data_020900b0.calibrate.xDotSizeInv = 0;
    }

    if (param->yDotSize != 0) {
        CP_SetDiv32_32(0x10000000, (u32) param->yDotSize);

        data_020900b0.calibrate.y0          = param->y0;
        data_020900b0.calibrate.yDotSize    = param->yDotSize;
        data_020900b0.calibrate.yDotSizeInv = (s32) CP_GetDivResult32();
    } else {
        data_020900b0.calibrate.y0          = 0;
        data_020900b0.calibrate.yDotSize    = 0;
        data_020900b0.calibrate.yDotSizeInv = 0;
    }

    (void) func_02052c44(enabled);

    data_020900b0.calibrate_flg = 1;
}
