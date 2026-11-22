/* GAMEMAP_AreMapTexturesDirty__Fv -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A72E8.c.
 */

extern unsigned char D_FE_000FB7FC;
extern unsigned char D_FE_000FB7FD;

int GAMEMAP_AreMapTexturesDirty__Fv(void)
{
    return D_FE_000FB7FC != 0 || D_FE_000FB7FD != 0;
}
