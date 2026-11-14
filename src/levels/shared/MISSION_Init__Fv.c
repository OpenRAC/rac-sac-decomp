/* MISSION_Init__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Mission initialisation only updates the mission states: it calls
 * MISSION_UpdateMissionStates, which takes no argument.
 */

extern void MISSION_UpdateMissionStates__Fv(void);

void MISSION_Init__Fv(void)
{
    MISSION_UpdateMissionStates__Fv();
}
