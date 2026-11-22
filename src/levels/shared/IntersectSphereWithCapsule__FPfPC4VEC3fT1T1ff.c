/* IntersectSphereWithCapsule__FPfPC4VEC3fT1T1ff -- 252 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tests a point against a capsule segment and returns the closest parameter.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_15_0E27C0.c.
 */

extern float fabsf(float x);

int IntersectSphereWithCapsule__FPfPC4VEC3fT1T1ff(float *out, float *p, float *o, float *d, float ra, float len, float rb)
{
    float h;
    float r2;
    float c0, c1, c2;
    float t;
    float s;
    float q0, q1, q2;

    r2 = (ra + rb) * (ra + rb);
    h = len * 0.5f;
    c0 = o[0] + d[0] * h;
    c1 = o[1] + d[1] * h;
    c2 = o[2] + d[2] * h;
    t = d[0] * (p[0] - c0) + d[1] * (p[1] - c1) + d[2] * (p[2] - c2);
    s = ((t - h + fabsf(h + t)) + (h + h) - fabsf((h + h) - (t - h + fabsf(h + t)))) * 0.25f;
    q0 = c0 + d[0] * s - p[0];
    q1 = c1 + d[1] * s - p[1];
    q2 = c2 + d[2] * s - p[2];
    if (q0 * q0 + q1 * q1 + q2 * q2 < r2) {
        *out = s + h;
        return 1;
    }
    return 0;
}
