/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_AlarmInit from projets/blue-dragon-awakened-shadow/src/auto/SND_AlarmInit.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef int s32;
typedef void (*UnkSndAlarmHandler)(void *arg);
typedef struct UnkSndAlarm {
    UnkSndAlarmHandler func;
    void *arg;
    u8 id;
} UnkSndAlarm;
extern void func_0205421c(void);
extern UnkSndAlarm data_0208ff40[8];
void func_0205421c(void) {
    s32 i;

    for (i = 0; i < 8; i++) {
        data_0208ff40[i].func = 0;
        data_0208ff40[i].arg  = 0;
        data_0208ff40[i].id   = 0;
    }
}
