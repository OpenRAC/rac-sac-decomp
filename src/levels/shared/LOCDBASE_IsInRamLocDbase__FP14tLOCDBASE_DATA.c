/* LOCDBASE_IsInRamLocDbase__FP14tLOCDBASE_DATA -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_01F6F0.c.
 */

int LOCDBASE_IsInRamLocDbase__FP14tLOCDBASE_DATA(unsigned int *p)
{
    return p[15] == 0;
}
