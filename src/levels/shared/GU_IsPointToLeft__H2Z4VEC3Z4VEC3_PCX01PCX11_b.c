/* GU_IsPointToLeft__H2Z4VEC3Z4VEC3_PCX01PCX11_b -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tells whether the two cross products differ with a strictly positive sign.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_014810.c.
 */

int GU_IsPointToLeft__H2Z4VEC3Z4VEC3_PCX01PCX11_b(float *a0, float *a1)
{
    return a0[2] * a1[0] - a0[0] * a1[2] > 0.0f;
}
