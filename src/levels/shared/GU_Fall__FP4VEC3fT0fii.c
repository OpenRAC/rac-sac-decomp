/* GU_Fall__FP4VEC3fT0fii -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_013DF8.c.
 */

/* LEVEL_04.REL:013DF8 -- offsets the middle of the point by the first float,
   hands it to the shared routine with the second float, then takes the
   offset back out. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec;

extern int GU_Fall__FP6SphereP4VEC3fii(float *pos, float *vel, int a2, int a3, float dy);

void GU_Fall__FP4VEC3fT0fii(Vec *a0, float *vel, int a2, int a3, float a, float b)
{
    float v[4];

    v[0] = a0->f_00;
    v[1] = a0->f_04 + a;
    v[2] = a0->f_08;
    v[3] = a;
    GU_Fall__FP6SphereP4VEC3fii(v, vel, a2, a3, b);
    a0->f_00 = v[0];
    a0->f_04 = v[1] - a;
    a0->f_08 = v[2];
}
