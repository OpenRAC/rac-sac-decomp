/* PLAYER_SetPosition__FPC4VEC3 -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BC310.c.
 */

extern void * g_pActivePlayer;
extern int PLAYER_SetPosition__FP6PLAYERPC4VEC3(int a, int b);

void PLAYER_SetPosition__FPC4VEC3(void *value)
{
    PLAYER_SetPosition__FP6PLAYERPC4VEC3(g_pActivePlayer, value);
}
