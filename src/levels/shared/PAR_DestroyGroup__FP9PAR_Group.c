/* PAR_DestroyGroup__FP9PAR_Group -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/ENGINE/par/LEVEL_01_097620.c.
 */

extern void PAR_ClearGroup__FP9PAR_Group(void *h);

void PAR_DestroyGroup__FP9PAR_Group(char *record)
{
    PAR_ClearGroup__FP9PAR_Group(record);
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
