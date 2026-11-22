/* HUD_InitAllMainGameHuds__Fv -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01B730.c.
 */

extern void HUD_InitAmmoCounter__Fv(void);
extern void HUD_InitAmmoCounter_R__Fv(void);
extern void HUD_InitBoltCounter__Fv(void);
extern void HUD_InitHealth__Fv(void);
extern void HUD_InitOneLiner__Fv(void);

void HUD_InitAllMainGameHuds__Fv(void)
{
    HUD_InitAmmoCounter__Fv();
    HUD_InitAmmoCounter_R__Fv();
    HUD_InitBoltCounter__Fv();
    HUD_InitHealth__Fv();
    HUD_InitOneLiner__Fv();
}
