/* GCS_FIRECRACKER_RefreshConfig__FP27GCS_FIRECRACKER_GlintConfig -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Divides one by the float at 0x00 of the argument object and writes the
 * result into the float at 0x40.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0F01C0.c.
 */

void GCS_FIRECRACKER_RefreshConfig__FP27GCS_FIRECRACKER_GlintConfig(void *a0)
{
    float f0 = 1.0f / *(float *)((char *)a0 + 0x00);
    *(float *)((char *)a0 + 0x40) = f0;
}
