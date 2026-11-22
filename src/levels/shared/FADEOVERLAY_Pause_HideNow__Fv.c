/* FADEOVERLAY_Pause_HideNow__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char D_FE_00144C60[];

void FADEOVERLAYOBJ_HideNow__FP12tFADEOVERLAY(void *);

void FADEOVERLAY_Pause_HideNow__Fv(float a, float b, float c, float d)
{
    FADEOVERLAYOBJ_HideNow__FP12tFADEOVERLAY(D_FE_00144C60);
}
