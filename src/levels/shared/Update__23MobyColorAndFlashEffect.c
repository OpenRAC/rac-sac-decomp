/* Update__23MobyColorAndFlashEffect -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01B730.c.
 */

extern void MobyColor_CleanUp__Fv(void);
extern void MobyFlash_CleanUp__Fv(void);
extern void MobyStain_CleanUp__Fv(void);
extern void MobyFlash_Update__Fv(void);
extern void MobyStain_Update__Fv(void);

void Update__23MobyColorAndFlashEffect(void)
{
    MobyColor_CleanUp__Fv();
    MobyFlash_CleanUp__Fv();
    MobyStain_CleanUp__Fv();
    MobyFlash_Update__Fv();
    MobyStain_Update__Fv();
}
