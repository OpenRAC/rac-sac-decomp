/* GCS_InitCurves__FP9CurveLink -- 172 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Refreshes each non-null entry of a pointer list into a fixed table; returns
 * 1 if no entry was null.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/MOBYS/GCS/GCS/LEVEL_15_0F62C8.c.
 */

extern char D_L24_0035EE7C[];

void GCSUTIL_AllocCurve__FP9GCS_CurvePC5Curve(void *e, void *v);
void GCSUTIL_TransformCurve__FP9GCS_CurvePC5Curvef(void *e, void *v, float f);
void GCS_LoadRailPayload__FP9GCS_CurvePC5Curve(void *tab, void *v);

int GCS_InitCurves__FP9CurveLink(void **arr)
{
    int flag;
    int i;

    flag = 0;
    for (i = 0; i < 1; i++) {
        if (arr[i] == 0) {
            flag = 1;
        } else {
            GCSUTIL_AllocCurve__FP9GCS_CurvePC5Curve(D_L24_0035EE7C + i * 12, arr[i]);
            GCSUTIL_TransformCurve__FP9GCS_CurvePC5Curvef(D_L24_0035EE7C + i * 12, arr[i], 2.0f);
        }
    }
    GCS_LoadRailPayload__FP9GCS_CurvePC5Curve(D_L24_0035EE7C, arr[0]);
    return flag == 0;
}
