/* GCSHIP_JetInit__Fv -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_135AF0.c.
 */

extern char D_L24_0035DE68[];
extern void JET_EffectRegister__FP16JET_EffectConfig(void *);
extern void GCSHIP_JetRefreshConfig__Fv(void);

void GCSHIP_JetInit__Fv(void)
{
    JET_EffectRegister__FP16JET_EffectConfig(D_L24_0035DE68);
    GCSHIP_JetRefreshConfig__Fv();
}
