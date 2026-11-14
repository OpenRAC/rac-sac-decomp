/* HUD_SetUseEncodedTextColorTo__Fb -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned char g;

void HUD_SetUseEncodedTextColorTo__Fb(int v)
{
    g = v;
}
