/* HUDDIAG_FadeOverlayUpdate__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tFADEOVERLAY tFADEOVERLAY;

extern tFADEOVERLAY D_FE_001B29E0[];
extern void FADEOVERLAYOBJ_Update__FP12tFADEOVERLAY(tFADEOVERLAY *overlay);

void HUDDIAG_FadeOverlayUpdate__Fv(void)
{
    FADEOVERLAYOBJ_Update__FP12tFADEOVERLAY(D_FE_001B29E0);
}
