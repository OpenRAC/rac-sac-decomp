/* GCSPICKUP_GroupReset__FP15GCSPICKUP_Group -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1269F0.c.
 */

extern void PAR_ClearGroup__FP9PAR_Group(void *h);

void GCSPICKUP_GroupReset__FP15GCSPICKUP_Group(char *record)
{
    PAR_ClearGroup__FP9PAR_Group(record);
    *(int *)(record + 0x2c) = 0;
}
