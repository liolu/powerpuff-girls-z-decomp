/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020155b8 from projets/heroes-of-mana/src/donor/func_020155b8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed short int s16;
typedef signed long s32;
typedef volatile u16 vu16;
typedef u32 REGType32;
typedef u64 REGType64;
typedef vu16 REGType16v;
typedef u32 OSIntrMode;
extern OSIntrMode func_02052c30(void);
extern OSIntrMode func_02052c44(OSIntrMode state);
static inline void CP_SetDivImm32_32_NS_(u32 numer, u32 denom) {
    *(REGType32 *) (0x04000000 + 0x290) = numer;
    *(REGType64 *) (0x04000000 + 0x298) = denom;
}
static inline void CP_SetDiv32_32(u32 numer, u32 denom) {
    (*(REGType16v *) (0x04000000 + 0x280)) = (0UL << 0);
    CP_SetDivImm32_32_NS_(numer, denom);
}
static inline s32 CP_IsDivBusy(void) {
    return ((*(REGType16v *) (0x04000000 + 0x280)) & 0x8000);
}
static inline void CP_WaitDiv(void) {
    while (CP_IsDivBusy()) {
    }
}
static inline s32 CP_GetDivResultImm32(void) {
    return (s32) (*(REGType32 *) (0x04000000 + 0x2a0));
}
static inline s32 CP_GetDivResult32(void) {
    CP_WaitDiv();
    return CP_GetDivResultImm32();
}
typedef struct NvTpData {
    s16 x0;
    s16 y0;
    s16 xDotSize;
    s16 yDotSize;
} TPCalibrateParam;
extern u32 func_02056d90(TPCalibrateParam *calibrate, u16 raw_x1, u16 raw_y1, u16 dx1, u16 dy1, u16 raw_x2, u16 raw_y2,
                         u16 dx2, u16 dy2);
extern const u16(*ctrdgi_fl_maxtime);
u32 func_02056d90(TPCalibrateParam *calibrate, u16 raw_x1, u16 raw_y1, u16 dx1, u16 dy1, u16 raw_x2, u16 raw_y2, u16 dx2,
                  u16 dy2) {
    s32 rx_width, dx_width, ry_width, dy_width;
    s32 tmp32;
    OSIntrMode enabled;

    ((void) 0);

    if (raw_x1 >= 0x1000 || raw_y1 >= 0x1000 || raw_x2 >= 0x1000 || raw_y2 >= 0x1000) {
        return 1;
    }
    if (dx1 >= 256 || dx2 >= 256 || dy1 >= 192 || dy2 >= 192) {
        return 1;
    }
    if (dx1 == dx2 || dy1 == dy2 || raw_x1 == raw_x2 || raw_y1 == raw_y2) {
        return 1;
    }

    rx_width = raw_x1 - raw_x2;
    dx_width = dx1 - dx2;

    enabled = func_02052c30();

    CP_SetDiv32_32(((u32) rx_width) << 8, (u32) dx_width);

    ry_width = raw_y1 - raw_y2;
    dy_width = dy1 - dy2;

    tmp32 = CP_GetDivResult32();
    CP_SetDiv32_32(((u32) ry_width) << 8, (u32) dy_width);

    if (!((tmp32) < 0x8000 && (tmp32) >= -0x8000)) {
        (void) func_02052c44(enabled);
        return 1;
    }
    calibrate->xDotSize = (s16) tmp32;
    tmp32               = (s16) ((((s32) (raw_x1 + raw_x2) << 8) - ((s32) (dx1 + dx2) * calibrate->xDotSize)) >> (8 - 2 + 1));
    if (!((tmp32) < 0x8000 && (tmp32) >= -0x8000)) {
        (void) func_02052c44(enabled);
        return 1;
    }
    calibrate->x0 = (s16) tmp32;

    tmp32 = CP_GetDivResult32();
    (void) func_02052c44(enabled);

    if (!((tmp32) < 0x8000 && (tmp32) >= -0x8000)) {
        return 1;
    }

    calibrate->yDotSize = (s16) tmp32;
    tmp32               = (s16) ((((s32) (raw_y1 + raw_y2) << 8) - ((s32) (dy1 + dy2) * calibrate->yDotSize)) >> (8 - 2 + 1));
    if (!((tmp32) < 0x8000 && (tmp32) >= -0x8000)) {
        return 1;
    }

    calibrate->y0 = (s16) tmp32;

    return 0;
}
