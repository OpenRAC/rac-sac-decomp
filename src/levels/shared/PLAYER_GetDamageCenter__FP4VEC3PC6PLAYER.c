/* PLAYER_GetDamageCenter__FP4VEC3PC6PLAYER -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_04DC08.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} V3;

void PLAYER_GetDamageCenter__FP4VEC3PC6PLAYER(V3 *out, float *a1)
{
    float *p = a1 + 4;
    float *q = a1 + 12;
    float k = 0.6f;

    out->x = q[0] + p[0] * k;
    out->y = q[1] + p[1] * k;
    out->z = q[2] + p[2] * k;
}
