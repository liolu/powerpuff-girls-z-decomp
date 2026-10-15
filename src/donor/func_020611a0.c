/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_TaskThread from projets/blue-dragon-awakened-shadow/src/auto/CTRDGi_TaskThread.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern int func_02052c30(void);
extern void func_02052c44(int state);
extern void func_020534e0(void *dst, int value, int size);
extern void func_0205183c(void *queue);
extern void func_0205172c(void);
extern char data_02097288;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;
void func_020611a0(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        func_020534e0(&job, 0, 0x24);
        enabled = func_02052c30();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            func_0205183c(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        func_02052c44(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                           = func_02052c30();
        done                              = job.done;
        *((char *) &data_02097288 + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &data_02097288 != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            func_02052c44(enabled);
        } else {
            func_0205172c();
            return;
        }
    }
}
