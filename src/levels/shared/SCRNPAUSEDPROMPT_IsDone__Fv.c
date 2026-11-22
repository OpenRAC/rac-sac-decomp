/* SCRNPAUSEDPROMPT_IsDone__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/22_skyboard_kalidon/LEVEL_22_0B83B8.c.
 */

extern unsigned char D_L01_002636B8;

unsigned char SCRNPAUSEDPROMPT_IsDone__Fv(void)
{
    unsigned char old = D_L01_002636B8;
    D_L01_002636B8 = 0;
    return old;
}
