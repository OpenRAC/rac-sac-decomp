/* func_L01_00AA20 -- 360 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct VEC3 { float x, y, z; } VEC3;

extern float floorf(float x);
extern float cosf(float x);
extern float sqrtf(float x);

void func_L01_00AA20(VEC3 *out, float ang1, float ang2, float rad1, float rad2)
{
    float ang = ang1 - floorf(ang1 * 0.15915494f + 0.5f) * 6.2831855f;
    float c1 = cosf(ang);
    float s1 = sqrtf(1.0f - c1 * c1);
    float c2, s2, t;

    if (ang < 0.0f)
        s1 = -s1;
    c2 = cosf(ang2);
    s2 = sqrtf(1.0f - c2 * c2);
    if (ang2 < 0.0f)
        s2 = -s2;

    t = rad2 * s2 + rad1 * c2;
    out->x = t * c1;
    out->y = t * s1;
}
