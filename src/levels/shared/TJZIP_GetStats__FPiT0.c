/* TJZIP_GetStats__FPiT0 -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/VRAM_GetOffset__FPiT0_LEVEL_01.c.
 */

extern int g_numCollisions;
extern int g_numMatches;

void TJZIP_GetStats__FPiT0(int *first, int *second)
{
    *first = g_numCollisions;
    *second = g_numMatches;
}
