/* EndRender__15AglRenderBuffer -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_renderActive;

void EndRender__15AglRenderBuffer(void)
{
    g_renderActive ^= 1;
}
