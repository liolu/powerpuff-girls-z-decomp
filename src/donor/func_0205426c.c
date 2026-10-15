/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SNDi_SetAlarmHandler from projets/blue-dragon-awakened-shadow/src/auto/SNDi_SetAlarmHandler.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef int s32;
typedef void (*UnkSndAlarmHandler)(void *arg);
typedef struct UnkSndAlarm {
    UnkSndAlarmHandler func;
    void *arg;
    u8 id;
} UnkSndAlarm;
extern u8 func_0205426c(s32 no, UnkSndAlarmHandler func, void *arg);
extern UnkSndAlarm data_0208ff40[8];
u8 func_0205426c(s32 no, UnkSndAlarmHandler func, void *arg) {
    UnkSndAlarm *alarm = &data_0208ff40[no];

    alarm->func = func;
    alarm->arg  = arg;
    alarm->id++;
    return alarm->id;
}
