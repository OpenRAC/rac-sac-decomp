/* SCRNHELPMOVES_Exit__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void BACKG_TEXTSTREAMER_UnRegisterAllTargets__Fv(void);
void GAMEMAP_ReleaseMapBuffers__Fv(void);

void SCRNHELPMOVES_Exit__Fv(void)
{
    BACKG_TEXTSTREAMER_UnRegisterAllTargets__Fv();
    GAMEMAP_ReleaseMapBuffers__Fv();
}
