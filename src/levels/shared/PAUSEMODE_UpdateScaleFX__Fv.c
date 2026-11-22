/* PAUSEMODE_UpdateScaleFX__Fv -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BB488.c.
 */

extern unsigned char D_FE_000FB6A5;
extern unsigned char D_FE_000FB6A4;
extern unsigned char D_FE_000FB6A6;
void PAUSEMODE_UpdateScaleFX__Fv(void)
{
    --D_FE_000FB6A5;
    if (D_FE_000FB6A5 == 0) {
        D_FE_000FB6A5 = D_FE_000FB6A6;
        D_FE_000FB6A4 ^= 1;
    }
}