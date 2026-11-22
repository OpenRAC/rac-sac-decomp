/* SCRNMAP_SetMarkerPositions__Fff -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Store the two float arguments in the record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0A5850.c.
 */

extern float g_MarkerX;
extern float g_MarkerY;

void SCRNMAP_SetMarkerPositions__Fff(float a, float b)
{
    g_MarkerX = a;
    g_MarkerY = b;
}
