/* GAMEMAP_DecompressCurrentFog__Fv -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A66A0.c.
 */

extern int D_FE_000FB7F4;
extern int D_FE_000FB7F8;
extern void GAMEMAP_DecompressFog__FUiUi(int, int);

void GAMEMAP_DecompressCurrentFog__Fv(void)
{
    int second_value = D_FE_000FB7F8;
    GAMEMAP_DecompressFog__FUiUi(D_FE_000FB7F4, second_value);
}
