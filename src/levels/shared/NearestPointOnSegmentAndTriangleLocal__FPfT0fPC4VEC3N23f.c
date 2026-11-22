/* NearestPointOnSegmentAndTriangleLocal__FPfT0fPC4VEC3N23f -- 264 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Adjusts a local weight before a second geometry query.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_11E9A8.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern float fabsf(float);
extern float NearestPointOnLineAndTriangleLocal__FPfT0PC4VEC3N22(float *weight, float *a, float *b, float *c, float *d);
extern float NearestPointOnTriangle__FPfPC4VEC3N31(float *a, Vec3 *offset, float *b, float *c, float *d);

float NearestPointOnSegmentAndTriangleLocal__FPfT0fPC4VEC3N23f(float limit, float threshold, float *out,
                  float *a, float *b, float *c, float *d)
{
    Vec3 offset;
    float weight[4];
    float result = NearestPointOnLineAndTriangleLocal__FPfT0PC4VEC3N22(weight, a, b, c, d);

    weight[0] = -weight[0];
    if (threshold < result) {
        return result;
    }
    {
        if (limit < fabsf(weight[0])) {
            float value;
            float twice_limit;

            offset.x = 0.0f;
            offset.y = 0.0f;
            value = (weight[0] - limit) + fabsf(limit + weight[0]);
            twice_limit = limit + limit;
            weight[0] = ((value + twice_limit) - fabsf(twice_limit - value)) * 0.25f;
            offset.z = -weight[0];
            result = NearestPointOnTriangle__FPfPC4VEC3N31(a, &offset, b, c, d);
        }
        *out = -weight[0];
    }
    return result;
}
