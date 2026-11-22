/* COL_CheckTriLineSegClsn__FRC15ColFileTrianglePC4VEC3T1fPf -- 120 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Builds the ray segment from the origin along the direction scaled by the
 * first argument and tests it against the triangle prism, passing the hit
 * output through.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_111578.c.
 */

typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

typedef struct {
    char pad0[8];
    V4 pl;
    V4 e[3];
} Tri;

typedef struct {
    float o[3];
    float pad[3];
    float d[3];
} Ray;

extern int COL_CheckTriLineSegClsn__FRC15ColFileTriangleRC11LineSegmentPf(Tri *tri, Ray *ray, float *out);

int COL_CheckTriLineSegClsn__FRC15ColFileTrianglePC4VEC3T1fPf(float t, Tri *tri, float *origin, float *dir, float *out)
{
    Ray ray;

    ray.pad[0] = origin[0] + t * dir[0];
    ray.d[1] = t * dir[1];
    ray.d[2] = t * dir[2];
    ray.pad[1] = origin[1] + t * dir[1];
    ray.o[0] = origin[0];
    ray.o[1] = origin[1];
    ray.pad[2] = origin[2] + t * dir[2];
    ray.o[2] = origin[2];
    ray.d[0] = t * dir[0];
    return COL_CheckTriLineSegClsn__FRC15ColFileTriangleRC11LineSegmentPf(tri, &ray, out);
}
