/* SecurityLaserStatic_SetParams__FP4MobyPC19SecurityLaserParams -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the value in the first word of the object's record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/19_multiplayer_04/LEVEL_19_1481E8.c.
 */

void SecurityLaserStatic_SetParams__FP4MobyPC19SecurityLaserParams(char *o, int value)
{
    **(int **)(o + 0x58) = value;
}
