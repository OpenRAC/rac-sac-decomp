/* AcidSplat_Register__FUi -- 176 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs DECAL_ConfigRefresh__FP18DECAL_CSRampConfig on each of the 2x3
 * records of a table, then DECAL_VolumeRefresh__FP18DECAL_CircleVolume on the
 * shared record and DECAL_RampSystemRegister__FUiPFP9PAR_Group_v with the
 * argument and a fixed second one.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1DD2D0.c.
 */

extern char D_L30_0025E958[];
extern char D_L30_0025EA18[];
extern char AcidSplat_DecalUpdateOnly__FP9PAR_Group[];

extern void DECAL_ConfigRefresh__FP18DECAL_CSRampConfig(void *p);
extern void DECAL_VolumeRefresh__FP18DECAL_CircleVolume(void *p);
extern int DECAL_RampSystemRegister__FUiPFP9PAR_Group_v(void *first, void *second);

void AcidSplat_Register__FUi(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            DECAL_ConfigRefresh__FP18DECAL_CSRampConfig(D_L30_0025E958 + i * 0x60 + j * 0x20);
    }
    DECAL_VolumeRefresh__FP18DECAL_CircleVolume(D_L30_0025EA18);
    DECAL_RampSystemRegister__FUiPFP9PAR_Group_v(a0, AcidSplat_DecalUpdateOnly__FP9PAR_Group);
}
