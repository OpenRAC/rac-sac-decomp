/* GAMEMAP_SetMapTexturesToDirty__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A7318.c.
 */

extern unsigned char D_FE_000FB7FC;
extern unsigned char D_FE_000FB7FD;

void GAMEMAP_SetMapTexturesToDirty__Fv(void)
{
    D_FE_000FB7FC = 1;
    D_FE_000FB7FD = 1;
}
