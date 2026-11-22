/* func_L03_132B88 -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1CE2F0.c.
 */

extern void VEC_LookUpAtLeft__FP4VEC3T0PC4VEC3N22(float *a, float *b, const float *c,
                        const float *d, const float *e);

void func_L03_132B88(char *first, char *second, const float *vector)
{
    float *a;
    float *b;
    VEC_LookUpAtLeft__FP4VEC3T0PC4VEC3N22((float *)first, (float *)(first + 0x18), vector, (float *)(first + 0x18), (float *)first);
    a = (float *)(first + 0x0c);
    a[0] = vector[0];
    a[1] = vector[1];
    a[2] = vector[2];
    VEC_LookUpAtLeft__FP4VEC3T0PC4VEC3N22((float *)second, (float *)(second + 0x20), vector, (float *)(second + 0x20), (float *)second);
    b = (float *)(second + 0x10);
    b[0] = vector[0];
    b[1] = vector[1];
    b[2] = vector[2];
}


