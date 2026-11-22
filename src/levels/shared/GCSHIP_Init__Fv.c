/* GCSHIP_Init__Fv -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs the five update stages while the global enable byte is set.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_137320.c.
 */

extern unsigned char g_moby_firstInit;
extern void GCSHIP_StateInit__Fv(void);
extern void GCSHIP_AnimInit__Fv(void);
extern void GCSHIP_WeaponInit__Fv(void);
extern void GCSHIP_JetInit__Fv(void);
extern void GCSHIP_SoundInit__Fv(void);

void GCSHIP_Init__Fv(void)
{
    if (g_moby_firstInit) {
        GCSHIP_StateInit__Fv();
        GCSHIP_AnimInit__Fv();
        GCSHIP_WeaponInit__Fv();
        GCSHIP_JetInit__Fv();
        GCSHIP_SoundInit__Fv();
    }
}
