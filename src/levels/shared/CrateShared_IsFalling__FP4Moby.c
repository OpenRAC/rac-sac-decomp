/* CrateShared_IsFalling__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_02_1E2B28.c.
 */

int CrateShared_IsFalling__FP4Moby(char *object)
{
    return (*(unsigned char *)(object + 0x78) & 0x22u) != 0;
}
