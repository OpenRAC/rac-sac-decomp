/* UPDATE_GameModeInit__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Asks the game-mode layer for the initialisation (mode 1, case 1 of the
 * UPDATE_SetGameMode switch).
 */

extern void func_L01_025E60(int mode, void *arg);

void UPDATE_GameModeInit__Fv(void)
{
    func_L01_025E60(1, (void *)0);
}
