/* HUD_RenderUberTopNoMatterWhat__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Two calls in sequence.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_017498.c.
 */

void HUD_RenderUberTopNoMatterWhat__Fv(void);
void HUD_SetUseEncodedTextColorTo__Fb(int mode);

void HUD_RenderUberTopNoMatterWhat__Fv(void)
{
    HUD_SetGuWidgetRenderState__Fv();
    HUD_SetUseEncodedTextColorTo__Fb(1);
}
