/* Footprint_Register__FUiP18DECAL_CSRampConfigP18DECAL_CircleVolumePFP9PAR_Group_v -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1D1638.c.
 */

extern void DECAL_ConfigRefresh__FP18DECAL_CSRampConfig(void *);
extern void DECAL_VolumeRefresh__FP18DECAL_CircleVolume(void *);
extern int DECAL_RampSystemRegister__FUiPFP9PAR_Group_v(int, int);

int Footprint_Register__FUiP18DECAL_CSRampConfigP18DECAL_CircleVolumePFP9PAR_Group_v(int first, char *second, char *third, int fourth)
{
    DECAL_ConfigRefresh__FP18DECAL_CSRampConfig(second);
    DECAL_VolumeRefresh__FP18DECAL_CircleVolume(third);
    return DECAL_RampSystemRegister__FUiPFP9PAR_Group_v(first, fourth);
}
