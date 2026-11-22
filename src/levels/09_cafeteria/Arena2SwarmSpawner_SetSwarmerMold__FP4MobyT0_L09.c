/* Arena2SwarmSpawner_SetSwarmerMold__FP4MobyT0 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the value in the first word of the object's record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/19_multiplayer_04/LEVEL_19_1481E8.c.
 */

void Arena2SwarmSpawner_SetSwarmerMold__FP4MobyT0(char *o, int value)
{
    **(int **)(o + 0x58) = value;
}
