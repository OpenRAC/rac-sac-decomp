/* CAMDRIVER_PolarToCart__FP4VEC3ffff -- 380 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct VEC3 { float x, y, z; } VEC3;

extern float floorf(float x);
extern float cosf(float x);
extern float sqrtf(float x);

void CAMDRIVER_PolarToCart__FP4VEC3ffff(VEC3 *out, float ang1, float ang2,
                                        float rad1, float rad2)
{
    float c1, s1, c2, s2, t;

    ang1 = ang1 - floorf(ang1 * 0.15915494f + 0.5f) * 6.2831855f;
    c1 = cosf(ang1);
    s1 = sqrtf(1.0f - c1 * c1);
    if (ang1 < 0.0f)
        s1 = -s1;
    c2 = cosf(ang2);
    s2 = sqrtf(1.0f - c2 * c2);
    if (ang2 < 0.0f)
        s2 = -s2;

    t = rad2 * s2 + rad1 * c2;
    out->x = t * c1;
    out->y = rad2 * c2 - rad1 * s2;
    out->z = t * s1;
}
