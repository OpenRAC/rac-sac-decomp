/* JET_EffectDrawEnd__FPC16JET_EffectConfigi -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1E91F0.c.
 */

extern void FLARE_DrawEnd__FiiUi(void *, int, int);

void JET_EffectDrawEnd__FPC16JET_EffectConfigi(char *record, void *output)
{
    FLARE_DrawEnd__FiiUi(output, 2, *(int *)(record + 4));
}
