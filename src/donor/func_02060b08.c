/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDG_IsExisting from projets/blue-dragon-awakened-shadow/src/auto/CTRDG_IsExisting.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef volatile u16 vu16;
typedef int BOOL;
typedef int OSIntrMode;
typedef enum {
    MI_CTRDG_ROMCYCLE1_10 = 0,
    MI_CTRDG_ROMCYCLE1_8,
    MI_CTRDG_ROMCYCLE1_6,
    MI_CTRDG_ROMCYCLE1_18
} MICartridgeRomCycle1st;
typedef enum {
    MI_CTRDG_ROMCYCLE2_6 = 0,
    MI_CTRDG_ROMCYCLE2_4
} MICartridgeRomCycle2nd;
typedef struct {
    u32 startAddress;
    u8 nintendoLogo[0x9c];
    char titleName[12];
    u32 gameCode;
    u16 makerCode;
    u8 isRomCode;
    u8 machineCode;
    u8 deviceType;
    u8 exLsiID[3];
    u8 reserved_A[4];
    u8 softVersion;
    u8 complement;
    u16 moduleID;
} CTRDGHeader;
typedef struct {
    union {
        struct {
            u8 bitID;
            u8 numberID : 5;
            u8 : 2;
            u8 disableExLsiID : 1;
        };
        u16 raw;
    };
} CTRDGModuleID;
typedef struct {
    CTRDGModuleID moduleID;
    u8 exLsiID[3];
    u8 isAgbCartridge : 1;
    u8 detectPullOut : 1;
    u8 : 0;
    u16 makerCode;
    u32 gameCode;
} CTRDGModuleInfo;
typedef struct CTRDGRomCycle {
    MICartridgeRomCycle1st c1;
    MICartridgeRomCycle2nd c2;
} CTRDGRomCycle;
typedef struct CTRDGLockByProc {
    BOOL locked;
    OSIntrMode irq;
} CTRDGLockByProc;
typedef struct CTRDGWork {
    vu16 subpInitialized;
    u16 lockID;
} CTRDGWork;
extern void func_02060c90(int lockID, CTRDGLockByProc *info);
extern void func_02060cec(int lockID, CTRDGLockByProc *info);
extern void func_02060c14(CTRDGRomCycle *r);
extern void func_02060c5c(CTRDGRomCycle *r);
extern struct {
    BOOL enableFlag;
    CTRDGWork work;
} data_020970b8;
BOOL func_02060b08(void) {
    BOOL retval = 1;
    CTRDGLockByProc lockInfo;

    CTRDGHeader *chp     = ((CTRDGHeader *) 0x08000000);
    CTRDGModuleInfo *cip = ((CTRDGModuleInfo *) (0x02000000 + 0x007ffc30));

    if (cip->moduleID.raw == 0xffff) {
        return 0;
    }

    if (cip->detectPullOut == 1) {
        return 0;
    }
    func_02060c90(data_020970b8.work.lockID, &lockInfo);

    {
        CTRDGRomCycle rc;
        u8 isRomCode;

        func_02060c14(&rc);
        isRomCode = chp->isRomCode;

        if ((isRomCode == 0x96 && cip->moduleID.raw != chp->moduleID) ||
            (isRomCode != 0x96 && cip->moduleID.raw != *((u16 *) (0x08000000 + 0x0001fffe))) ||
            ((cip->gameCode != chp->gameCode) && cip->isAgbCartridge)) {
            cip->detectPullOut = 1;
            retval             = 0;
        }

        func_02060c5c(&rc);
    }

    func_02060cec(data_020970b8.work.lockID, &lockInfo);
    return retval;
}
