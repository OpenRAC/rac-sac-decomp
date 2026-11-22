/* HUDPROMQ_FadeOverlayUpdate__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char D_FE_001BEAC0[];

void FADEOVERLAYOBJ_Update__FP12tFADEOVERLAY(void *);

void HUDPROMQ_FadeOverlayUpdate__Fv(float a, float b, float c, float d)
{
    FADEOVERLAYOBJ_Update__FP12tFADEOVERLAY(D_FE_001BEAC0);
}
