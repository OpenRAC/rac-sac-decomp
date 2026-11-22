/* HUD_DrawScreenXY__FUiiiUiUif -- 368 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks the selected entry's list in the menu block and sets up each item at
 * the offset from the anchor point.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0101D8.c.
 */

extern char *D_FE_000FB47C;
extern unsigned char D_FE_000FB461;
extern int HUD_DebugScreenId;
extern void HUD_GetBoundingBox__FUiP17HUD_BoundingBox16f(int a, float s, float *out);
extern int GetCenterX__17HUD_BoundingBox16(float *v);
extern int GetCenterY__17HUD_BoundingBox16(float *v);
extern void HUD_DrawWidget3dXYOFFSET__FUiUciifffUif(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void HUD_DrawScreenXY__FUiiiUiUif(unsigned int idx, int ax, int ay, int ref, int w, float scale)
{
    float buf[4];
    char *mgr;
    int *p;
    unsigned int bit;
    unsigned int i;
    unsigned int n;
    unsigned int cnt;
    unsigned int skip;
    int x;
    int y;

    mgr = D_FE_000FB47C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_FE_000FB461 = bit;
    if (HUD_DebugScreenId != -1) {
        idx = HUD_DebugScreenId;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_FE_000FB461) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_FE_000FB461) {
                p++;
            }
            if (D_FE_000FB461) {
                skip = *p++;
                p += skip;
            }
            if (D_FE_000FB461) {
                p++;
            }
            n = *p;
            HUD_GetBoundingBox__FUiP17HUD_BoundingBox16f(ref, scale, buf);
            p++;
            x = ax - GetCenterX__17HUD_BoundingBox16(buf);
            y = ay - GetCenterY__17HUD_BoundingBox16(buf);
            for (i = 0; i < n; i++) {
                HUD_DrawWidget3dXYOFFSET__FUiUciifffUif(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
