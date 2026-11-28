/* GetAABBFromPyramid__FP4VEC3T0PC4VEC3N42 -- 288 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_11B618.c.
 *
 * Builds the axis-aligned bounds of an oriented box: for each axis the
 * extent is the absolute projections of the first two half-extents plus
 * the signed projection of the third, split into the lower and upper
 * bound around the centre.
 */

extern float fabsf(float x);

void GetAABBFromPyramid__FP4VEC3T0PC4VEC3N42(float *lo, float *hi, float *c, float *s,
                                             float *x, float *y, float *z)
{
    float cx = c[0];
    float cy = c[1];
    float cz = c[2];
    float ax0 = fabsf(x[0]);
    float ax1 = fabsf(x[1]);
    float ax2 = fabsf(x[2]);
    float ay0 = fabsf(y[0]);
    float ay1 = fabsf(y[1]);
    float ay2 = fabsf(y[2]);
    float ex = ax0 * s[0] + ay0 * s[1];
    float ey = ax1 * s[0] + ay1 * s[1];
    float ez = ax2 * s[0] + ay2 * s[1];
    float zx = z[0] * s[2];
    float zy = z[1] * s[2];
    float zz = z[2] * s[2];
    float lx = zx - ex;
    float ly = zy - ey;
    float lz = zz - ez;
    float hx = zx + ex;
    float hy = zy + ey;
    float hz = zz + ez;

    lo[0] = cx + (lx - fabsf(lx)) * 0.5f;
    lo[1] = cy + (ly - fabsf(ly)) * 0.5f;
    lo[2] = cz + (lz - fabsf(lz)) * 0.5f;
    hi[0] = cx + (hx + fabsf(hx)) * 0.5f;
    hi[1] = cy + (hy + fabsf(hy)) * 0.5f;
    hi[2] = cz + (hz + fabsf(hz)) * 0.5f;
}
