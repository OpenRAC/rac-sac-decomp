/* GCSUTIL_GetTime__FPC9GCS_CurvePC21GCS_CurveInterpolator -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Evaluates a curve segment: picks the entry of the table (index clamped at
 * zero) and returns a + b * (t * c).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_130100.c.
 */

typedef struct {
    char pad_00[0x24];
    float a;
    float b;
    char pad_2C[4];
    float c;
    char pad_34[4];
} Seg;

typedef struct {
    Seg *segs;
} Curve;

typedef struct {
    int index;
    float t;
} Query;

float GCSUTIL_GetTime__FPC9GCS_CurvePC21GCS_CurveInterpolator(Curve *cv, Query *q)
{
    int i = q->index;
    Seg *s;

    if (i < 1) {
        i = 0;
    }
    s = cv->segs + i;
    return s->a + s->b * (q->t * s->c);
}
