/* Reset__t5Stack2Z18ePAUSEMODE_SCREENSUi8 -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_06_0B7558.c.
 */

extern void *memset(void *, int, unsigned int);

void Reset__t5Stack2Z18ePAUSEMODE_SCREENSUi8(int *record)
{
    *(int *)((char *)record + 0x20) = 0;
    memset(record, 0, 0x20);
}
