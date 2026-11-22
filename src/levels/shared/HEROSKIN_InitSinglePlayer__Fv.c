/* HEROSKIN_InitSinglePlayer__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears a global flag and returns 1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_14EF88.c.
 */

extern int D_FE_000F4D50;

int HEROSKIN_InitSinglePlayer__Fv(void)
{
    D_FE_000F4D50 = 0;
    return 1;
}
