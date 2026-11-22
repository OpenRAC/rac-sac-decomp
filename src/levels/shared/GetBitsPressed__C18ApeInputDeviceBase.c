/* GetBitsPressed__C18ApeInputDeviceBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Reads the fourth word of the object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_022A80.c.
 */

int GetBitsPressed__C18ApeInputDeviceBase(int *p)
{
    return p[3];
}
