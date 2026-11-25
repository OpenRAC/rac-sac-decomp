/* PAUSEMODE_GetScaleFX__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BB4C8.c.
 *
 * Returns one of two scale factors. The byte at D_FE_000FB6A4 selects
 * D_FE_000FB6AC when it is nonzero and D_FE_000FB6A8 otherwise.
 * Those addresses are the frontend placement; other modules take the
 * value from the relocation at the same site.
 */

extern unsigned char D_FE_000FB6A4;
extern float D_FE_000FB6AC;
extern float D_FE_000FB6A8;

float PAUSEMODE_GetScaleFX__Fv(void)
{
    return D_FE_000FB6A4 ? D_FE_000FB6AC : D_FE_000FB6A8;
}
