/* Reset__t5Queue2Z14tHUDPROMQ_NODEUi8 -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/Reset__t5Queue2Z14tHUDPROMQ_NODEUi8.c.
 */

extern void *memset(void *, int, unsigned int);

void Reset__t5Queue2Z14tHUDPROMQ_NODEUi8(int *p)
{
    p[24] = 0;
    p[25] = 0;
    p[26] = 0;
    memset(p, 0, 0x60);
}
