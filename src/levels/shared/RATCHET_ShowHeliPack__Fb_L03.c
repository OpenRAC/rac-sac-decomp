/* RATCHET_ShowHeliPack__Fb -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BC310.c.
 */

extern void * g_pRatchetPlayer;
extern int RATCHET_ShowHeliPack__FP7RATCHETb(int a, int b);

void RATCHET_ShowHeliPack__Fb(void *value)
{
    RATCHET_ShowHeliPack__FP7RATCHETb(g_pRatchetPlayer, value);
}
