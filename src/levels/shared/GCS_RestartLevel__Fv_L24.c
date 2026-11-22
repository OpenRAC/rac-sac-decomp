/* GCS_RestartLevel__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0F52B0.c.
 */

extern int D_L24_0035EE90;
extern void LEVEL_RequestRestart__Fv(void);

void GCS_RestartLevel__Fv(void)
{
    D_L24_0035EE90 = -1;
    LEVEL_RequestRestart__Fv();
}
