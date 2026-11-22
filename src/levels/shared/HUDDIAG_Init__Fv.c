/* HUDDIAG_Init__Fv -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0D66E8.c.
 */

extern int D_FE_000FB738;
extern char D_FE_001B29E0[];
extern void FADEOVERLAYOBJ_Init__FP12tFADEOVERLAY(void *);

void HUDDIAG_Init__Fv(void)
{
    D_FE_000FB738 = 0;
    FADEOVERLAYOBJ_Init__FP12tFADEOVERLAY(D_FE_001B29E0);
}
