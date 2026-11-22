/* CAMDRIVER_SetDriftAzimuthScale__Ff -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at 0x143F04.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_012B88.c.
 */

extern float D_L01_002D5CF4;

void CAMDRIVER_SetDriftAzimuthScale__Ff(float a0)
{
    D_L01_002D5CF4 = a0;
}
