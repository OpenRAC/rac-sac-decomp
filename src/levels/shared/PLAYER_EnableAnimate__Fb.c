/* PLAYER_EnableAnimate__Fb -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BC310.c.
 */

extern void * g_pActivePlayer;
extern int PLAYER_EnableAnimate__FP6PLAYERb(int a, int b);

void PLAYER_EnableAnimate__Fb(void *value)
{
    PLAYER_EnableAnimate__FP6PLAYERb(g_pActivePlayer, value);
}
