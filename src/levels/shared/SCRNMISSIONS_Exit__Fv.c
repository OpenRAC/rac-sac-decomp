/* SCRNMISSIONS_Exit__Fv -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0C4EF0.c.
 */

extern void BACKG_TEXTSTREAMER_UnRegisterAllTargets__Fv(void);
extern void GAMEMAP_ReleaseMapBuffers__Fv(void);
extern int HUDSOUND_Play__F9eHUDSOUND(int index);

void SCRNMISSIONS_Exit__Fv(void)
{
    BACKG_TEXTSTREAMER_UnRegisterAllTargets__Fv();
    GAMEMAP_ReleaseMapBuffers__Fv();
    HUDSOUND_Play__F9eHUDSOUND(7);
}
