/* GU_RotateAboutYSafe__FP7MATRIX4P4VEC2RC4VEC2RC12SpringParams -- 108 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Round-trips two floats of the object through a local buffer, then stores a
 * copy and a negated value.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/05_medical_outpost/LEVEL_05_0141D8.c.
 */

struct Pair0141D8 {
    float a;
    float b;
};

extern void GU_RotateAboutYSafe__FP4VEC2T0RC4VEC2RC12SpringParams(float *a0);

void GU_RotateAboutYSafe__FP7MATRIX4P4VEC2RC4VEC2RC12SpringParams(char *a0, void *w, float *b, char *tbl)
{
    char *o;
    struct Pair0141D8 buf;
    float *q;
    float t;

    o = a0;
    q = (float *)(o + 0x20);
    t = q[0];
    buf.a = t;
    t = q[2];
    buf.b = t;
    GU_RotateAboutYSafe__FP4VEC2T0RC4VEC2RC12SpringParams(&buf.a);
    q[0] = buf.a;
    q[2] = buf.b;
    *(int *)(o + 0x4) = 0;
    *(float *)o = *(float *)(o + 0x28);
    *(float *)(o + 0x8) = -q[0];
}
