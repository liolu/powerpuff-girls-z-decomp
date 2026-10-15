/* compiler: 2.0/sp1p5  */
/* CTRDGi_IsAgbCartridgeAtInit from projets/blue-dragon-awakened-shadow/src/auto/CTRDGi_IsAgbCartridgeAtInit.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u8 unk0[5];
    u8 flag : 1;
} UnkStruct;
u32 func_02060af0(void) {
    UnkStruct *p = (UnkStruct *) 0x027FFC30;
    return p->flag;
}
