/* SCRNMP_IGSAVE_EndMemcardProcessing__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Wrapper that asks the game-mode layer for mode 4 (case 4 of the
 * UPDATE_SetGameMode switch).
 */

extern void func_L01_025E60(int mode, void *arg);

void SCRNMP_IGSAVE_EndMemcardProcessing__Fv(void)
{
    func_L01_025E60(4, (void *)0);
}
