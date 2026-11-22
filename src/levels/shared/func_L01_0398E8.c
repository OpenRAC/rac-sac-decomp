/* func_L01_0398E8 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_02AD58.c.
 */

extern char D_L01_002540A8[];
extern char D_L01_002540E0[];
extern void BLAST_RefreshConfig__FP19BLAST_EmitterConfig(void *);
extern void BLAST_RefreshConfig__FP17BLAST_GroupConfig(void *);

void func_L01_0398E8(void)
{
    BLAST_RefreshConfig__FP19BLAST_EmitterConfig(D_L01_002540A8);
    BLAST_RefreshConfig__FP17BLAST_GroupConfig(D_L01_002540E0);
}
