/* HUD_InitMaxCharDrop__Fv -- 168 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scans every colour of both palettes and raises the global limit to the
 * largest signed alpha byte found.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/MCP_InitMaxCharDrop__Fv_FRONTEND.c.
 */

struct Col {
    unsigned char a, b, c, d;
};
extern struct Col func_FE_028FE0(unsigned char idx, unsigned char sel);
extern int D_FE_000FB440;

void HUD_InitMaxCharDrop__Fv(void)
{
    unsigned int sel;
    unsigned int idx;
    int v;

    for (sel = 0; sel < 2; sel++) {
        for (idx = 0; idx < 256; idx++) {
            v = (signed char)func_FE_028FE0(idx, sel).d;
            D_FE_000FB440 = D_FE_000FB440 < v ? v : D_FE_000FB440;
        }
    }
}
