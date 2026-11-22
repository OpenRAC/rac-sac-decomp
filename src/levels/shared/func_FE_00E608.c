/* func_FE_00E608 -- 284 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Inverts the rigid transform: the 3x3 part is transposed with alternating
 * signs, the translation is rotated by the 3x3 part.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_004A78.c.
 */

struct Mat4 {
    float m[4][4];
};

void func_FE_00E608(struct Mat4 *out, struct Mat4 *in)
{
    const float *t = in->m[3];
    const float *r1 = in->m[1];
    const float *r2 = in->m[2];

    out->m[0][0] = -in->m[0][0];
    out->m[0][1] = in->m[1][0];
    out->m[0][2] = -in->m[2][0];
    out->m[0][3] = 0.0f;
    out->m[1][0] = -in->m[0][1];
    out->m[1][1] = in->m[1][1];
    out->m[1][2] = -in->m[2][1];
    out->m[1][3] = 0.0f;
    out->m[2][0] = -in->m[0][2];
    out->m[2][1] = in->m[1][2];
    out->m[2][2] = -in->m[2][2];
    out->m[2][3] = 0.0f;
    out->m[3][0] = in->m[0][0] * t[0] + in->m[0][1] * t[1] + in->m[0][2] * t[2];
    out->m[3][1] = -(r1[0] * t[0] + r1[1] * t[1] + r1[2] * t[2]);
    out->m[3][2] = r2[0] * t[0] + r2[1] * t[1] + r2[2] * t[2];
    out->m[3][3] = 1.0f;
}
