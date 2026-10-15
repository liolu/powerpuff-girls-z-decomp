/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_AllocFromArenaLo from projets/blue-dragon-awakened-shadow/src/auto/OS_AllocFromArenaLo.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
extern void *func_02052250(u32 id);
extern void *func_02052264(u32 id);
extern void func_02052418(u32 id, void *lo);
extern void *func_02052250(u32 id);
extern void *func_02052264(u32 id);
extern void func_02052418(u32 id, void *lo);
void *func_0205242c(u32 id, u32 size, u32 align) {
    void *ptr = func_02052264(id);
    u32 newLo;

    if (!ptr) {
        return 0;
    }

    ptr   = (void *) (((u32) ptr + align - 1) & ~(align - 1));
    newLo = (u32) ((u8 *) ptr + size + align - 1) & ~(align - 1);

    if (newLo > (u32) func_02052250(id)) {
        return 0;
    }
    func_02052418(id, (void *) newLo);
    return ptr;
}
