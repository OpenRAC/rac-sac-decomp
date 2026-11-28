/* GetFog__19AglRenderTargetBaseUc -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglRenderTargetBase AglRenderTargetBase;

char *GetFog__19AglRenderTargetBaseUc(AglRenderTargetBase *self, unsigned char i)
{
    unsigned int off = i;
    off = (off << 4) + 0x54;
    return (char *)self + off;
}
