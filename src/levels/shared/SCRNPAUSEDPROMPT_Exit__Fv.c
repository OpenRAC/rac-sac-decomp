/* SCRNPAUSEDPROMPT_Exit__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0C9E60.c.
 */

extern unsigned char D_L01_002636B8;
extern int D_L01_002636AC;
extern int D_L01_002636B4;

void SCRNPAUSEDPROMPT_Exit__Fv(void)
{
    D_L01_002636AC = 0;
    D_L01_002636B4 = 0;
    D_L01_002636B8 = 1;
}
