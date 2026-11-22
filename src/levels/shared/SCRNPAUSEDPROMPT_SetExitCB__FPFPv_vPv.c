/* SCRNPAUSEDPROMPT_SetExitCB__FPFPv_vPv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A5D20.c.
 */

extern int D_L01_002636BC;
extern int D_L01_003A9220;

void SCRNPAUSEDPROMPT_SetExitCB__FPFPv_vPv(int first, int second)
{
    D_L01_002636BC = first;
    D_L01_003A9220 = second;
}
