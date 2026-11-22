/* TimedButtonController_PlaySong__F26TimedButtonControllerSongs -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards the entry of the table.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00EE60.c.
 */

extern int D_L02_00212390[];
void TimedButtonController_PlaySong__F26TimedButtonControllerSongs(int value);

void TimedButtonController_PlaySong__F26TimedButtonControllerSongs(int index)
{
    TimedButtonController_PlaySong__FPCc(D_L02_00212390[index]);
}
