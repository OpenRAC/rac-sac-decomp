/* Log_getFilename__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the global at 0x305E0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_019510.c.
 */

extern char D_FE_001086B8[];

int Log_getFilename__Fv(void)
{
    return (int)D_FE_001086B8;
}
