/* LEVEL_GetSkyLayerCount__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one byte of the global flag table.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001400.c.
 */

extern unsigned char D_L01_0024D218[];

unsigned char LEVEL_GetSkyLayerCount__Fv(void)
{
    return D_L01_0024D218[0];
}
