/* LEVEL_SetSkyPos__FUiPC4VEC3 -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the three coordinates of the source vector in the slot of the table
 * and raises its fourth coordinate to 1.0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_013B30.c.
 */

struct Elem {
    float f[16];
};

extern struct Elem D_L01_0031A8C0[8];

void LEVEL_SetSkyPos__FUiPC4VEC3(unsigned int index, float *src)
{
    struct Elem *e;

    if (index < 8) {
        e = &D_L01_0031A8C0[index];
        e->f[0] = src[0];
        e->f[1] = src[1];
        e->f[2] = src[2];
        e->f[3] = 1.0f;
    }
}
