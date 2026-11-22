/* MCPFONT_FontStringPixelLength__FPCc -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Locks the object, then asks the manager about it.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/MCPFONT_FontStringPixelLength__FPCc_FRONTEND.c.
 */

int MCPFONT_FontStringLength__FPCc(void *);
int MCPFONT_FontStringPixelLength__FPCcUi(void *, int);

int MCPFONT_FontStringPixelLength__FPCc(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = MCPFONT_FontStringLength__FPCc(p);
    return MCPFONT_FontStringPixelLength__FPCcUi(p, r);
}
