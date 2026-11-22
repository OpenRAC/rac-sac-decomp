/* GetWorldMatrix__14ApeAnimChannel -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Reads the third word of the object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_022A78.c.
 */

int GetWorldMatrix__14ApeAnimChannel(int *p)
{
    return p[2];
}
