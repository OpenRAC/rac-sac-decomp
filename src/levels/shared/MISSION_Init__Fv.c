/* MISSION_Init__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern void MISSION_UpdateMissionStates__Fv(void);

void MISSION_Init__Fv(void)
{
    MISSION_UpdateMissionStates__Fv();
}
