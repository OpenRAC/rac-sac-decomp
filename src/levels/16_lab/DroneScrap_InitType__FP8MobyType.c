/* DroneScrap_InitType__FP8MobyType -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Requests state 0x16 from the state manager.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1C0E40.c.
 */

extern void FIRECRACKER_Register__F27FIRECRACKER_SortedBuiltinID(int state);

void DroneScrap_InitType__FP8MobyType(void)
{
    FIRECRACKER_Register__F27FIRECRACKER_SortedBuiltinID(0x16);
}
