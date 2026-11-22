/* FIRECRACKER_ReleaseTrail__FP28FIRECRACKER_SortedTrailActor -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0F0980.c.
 */

void FIRECRACKER_ReleaseTrail__FP28FIRECRACKER_SortedTrailActor(char *object)
{
    *(unsigned char *)(object + 4) = 1;
}
