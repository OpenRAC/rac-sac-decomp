/* AcidFountain_Activate__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/07_dreamtime/LEVEL_07_16CAE0.c.
 */

void AcidFountain_Activate__FP4Moby(char *object)
{
    *(int *)(object + 0x70) = 0;
    *(unsigned char *)(object + 0x45) = 2;
}
