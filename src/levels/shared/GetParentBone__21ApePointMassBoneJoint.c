/* GetParentBone__21ApePointMassBoneJoint -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/10_quodrona/LEVEL_10_1743E8.c.
 */

int GetParentBone__21ApePointMassBoneJoint(char *object)
{
    return *(int *)(object + 0x44);
}
