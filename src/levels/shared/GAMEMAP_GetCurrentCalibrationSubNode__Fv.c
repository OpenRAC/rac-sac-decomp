/* GAMEMAP_GetCurrentCalibrationSubNode__Fv -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A6A10.c.
 */

extern int D_FE_000FB7F8;
extern int GAMEMAP_IsMapValid__Fv(void);

int GAMEMAP_GetCurrentCalibrationSubNode__Fv(void)
{
    if (GAMEMAP_IsMapValid__Fv() == 0)
        return -1;
    return D_FE_000FB7F8;
}
