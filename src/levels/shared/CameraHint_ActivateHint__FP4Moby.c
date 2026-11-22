/* CameraHint_ActivateHint__FP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_05_152200.c.
 */

void CameraHint_ActivateHint__FP4Moby(char *object)
{
    char *child = *(char **)(object + 0x54);
    *(unsigned char *)(object + 0x45) = 2;
    *(unsigned int *)(child + 0x18) = *(unsigned char *)(child + 0x1D);
}
