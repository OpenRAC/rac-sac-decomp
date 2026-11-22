/* GCSPICKUP_Reset__Fv -- 96 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs the helper on each 0x3C-byte record of the global table and clears two
 * of its words.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1274E0.c.
 */

extern char g_gcspickup[];
extern void GCSPICKUP_GroupReset__FP15GCSPICKUP_Group(char *record);

void GCSPICKUP_Reset__Fv(void)
{
    char *b = g_gcspickup;
    char *record = b + 4;
    char *p = b;
    char *end = p + 0xB4;

    do {
        GCSPICKUP_GroupReset__FP15GCSPICKUP_Group(record);
        *(int *)(p + 0x34) = 0;
        *(int *)(p + 0x38) = 0;
        p += 0x3C;
        record += 0x3C;
    } while ((int)p < (int)end);
}
