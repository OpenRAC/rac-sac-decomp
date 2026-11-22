/* HEROSKIN_GetPlayerSkinName__F12SPHeroSkinId -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_000190.c.
 */

extern unsigned int D_FE_000F4D58[];

unsigned int HEROSKIN_GetPlayerSkinName__F12SPHeroSkinId(unsigned int index) {
    return D_FE_000F4D58[index];
}
