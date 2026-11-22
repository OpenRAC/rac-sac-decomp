/* TubeLeak_IsBursting__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one byte of the global flag table.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001400.c.
 */

extern unsigned char D_L29_0027F898[];

unsigned char TubeLeak_IsBursting__Fv(void)
{
    return D_L29_0027F898[0];
}
