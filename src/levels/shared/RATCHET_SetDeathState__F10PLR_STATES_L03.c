/* RATCHET_SetDeathState__F10PLR_STATES -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BC310.c.
 */

extern void * g_pRatchetPlayer;
extern int RATCHET_SetDeathState__FP7RATCHET10PLR_STATES(int a, int b);

void RATCHET_SetDeathState__F10PLR_STATES(void *value)
{
    RATCHET_SetDeathState__FP7RATCHET10PLR_STATES(g_pRatchetPlayer, value);
}
