/* Lvl07Piston_Rise__FP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_2025E8.c.
 */

void Lvl07Piston_Rise__FP4Moby(char *object)
{
    if (*(unsigned char *)(object + 0x45) == 0)
        *(unsigned char *)(object + 0x45) = 1;
}
