/* GAMEMAP_UpdateCalibration__FUiP4VEC4 -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A6670.c.
 */

extern int GAMEMAP_FindCalibrationSubNodeGivenPlayer__FUiP4VEC4(int idx, float *pos);
extern int GAMEMAP_SetCalibration__FUiUi(unsigned int slot, unsigned int mode);

void GAMEMAP_UpdateCalibration__FUiP4VEC4(int slot, float *pos)
{
    int zone = GAMEMAP_FindCalibrationSubNodeGivenPlayer__FUiP4VEC4(slot, pos);
    GAMEMAP_SetCalibration__FUiUi(slot, zone);
}
