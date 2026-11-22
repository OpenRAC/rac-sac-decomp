/* GCSHIP_StateReset__Fv -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears a flag in a global block, stores a record pointer, and calls its
 * virtual method.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_136130.c.
 */

struct Block_2F4F88 {
    char pad[0x64];
    int flag;
    char *slot68;
    char *slot6c;
};

extern struct Block_2F4F88 g_gcship;

void GCSHIP_StateReset__Fv(void)
{
    struct Block_2F4F88 *blk = &g_gcship;
    char *record;
    blk->flag = 0;
    record = blk->slot6c;
    blk->slot68 = record;
    ((void (*)(char *))(*(void **)(*(char **)record + 0x1c)))
        (record + *(short *)(*(char **)record + 0x18));
}
