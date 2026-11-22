/* GCSHIP_GrantHealth__Fi -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Adds an integer to a stored float, caps the sum at 100.0, and stores it
 * back.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_137288.c.
 */

struct Obj {
    char pad_00[0x2C];
    float f_2C;
};

extern struct Obj g_gcship;

static __inline__ float *minref(float *a, float *b)
{
    if (*a < *b) {
        return a;
    }
    return b;
}

void GCSHIP_GrantHealth__Fi(int a0)
{
    float x;
    float y;
    float *p;

    x = g_gcship.f_2C + (float)a0;
    y = 100.0f;
    p = minref(&x, &y);
    g_gcship.f_2C = *p;
}
