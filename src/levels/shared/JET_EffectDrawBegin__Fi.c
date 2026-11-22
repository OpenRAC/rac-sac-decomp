/* JET_EffectDrawBegin__Fi -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1E91D0.c.
 */

extern void FLARE_DrawBegin__Fii(void *, int);

void JET_EffectDrawBegin__Fi(void *item)
{
    FLARE_DrawBegin__Fii(item, 2);
}
