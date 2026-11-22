/* RATCHET_ActivateShield__FP4Moby -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BC310.c.
 */

extern void * g_pRatchetPlayer;
extern int RATCHET_ActivateShield__FP7RATCHETP4Moby(int a, int b);

void RATCHET_ActivateShield__FP4Moby(void *value)
{
    RATCHET_ActivateShield__FP7RATCHETP4Moby(g_pRatchetPlayer, value);
}
