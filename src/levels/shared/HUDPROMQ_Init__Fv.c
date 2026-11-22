/* HUDPROMQ_Init__Fv -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0C9A78.c.
 */

extern char D_FE_001BEAC0[];
extern void FADEOVERLAYOBJ_Init__FP12tFADEOVERLAY(void *);
extern void HUDPROMQ_SetOkToShowFlag__Fb(int);

void HUDPROMQ_Init__Fv(void)
{
    FADEOVERLAYOBJ_Init__FP12tFADEOVERLAY(D_FE_001BEAC0);
    HUDPROMQ_SetOkToShowFlag__Fb(1);
}
