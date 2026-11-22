/* PLAYER_PostInit__Fv -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_134B70.c.
 */

extern void *g_pActivePlayer;
extern void PLAYER_PostInit__FP6PLAYER(void *);
extern void PLAYER_InitSounds__Fv(void);

void PLAYER_PostInit__Fv(void)
{
    PLAYER_PostInit__FP6PLAYER(g_pActivePlayer);
    PLAYER_InitSounds__Fv();
}
