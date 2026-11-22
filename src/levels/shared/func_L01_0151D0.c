/* func_L01_0151D0 -- 328 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Projects a point set, fits it with a helper, and returns the unprojected
 * result when the fit error is under the limit.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_00BCB8.c.
 */

struct V3_00BCB8 {
    float x;
    float y;
    float z;
};

int func_L01_014FC8(float zmin, float zmax, struct V3_00BCB8 *pts, int a, int b);
float func_L01_0146D8(struct V3_00BCB8 *out, struct V3_00BCB8 *pts, int n, int flag, float f);

int func_L01_0151D0(float *err_out, struct V3_00BCB8 *out, struct V3_00BCB8 *pts, int a, int b, int flag,
                float scale, float zmax, float limit, float unused2, float dist, float k)
{
    struct V3_00BCB8 res;
    struct V3_00BCB8 *p;
    struct V3_00BCB8 *end;
    float err;
    float t;
    float s;
    int n;

    n = func_L01_014FC8(0.0f, zmax, pts, a, b);
    if (n < 3) {
        return 0;
    }
    end = pts + n;
    for (p = pts; p != end; p++) {
        t = dist / (p->z + dist);
        p->x *= t;
        p->y *= t;
    }
    err = func_L01_0146D8(&res, pts, n, flag, scale);
    if (limit <= err) {
        return 0;
    }
    s = res.z * k + 1.0f;
    out->z = res.z;
    out->x = res.x * s;
    out->y = res.y * s;
    *err_out = err;
    return 1;
}
