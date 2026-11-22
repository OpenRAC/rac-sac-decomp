/* VEC_SetVec3__FP4VEC3fff -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies three floats into a vector.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_126200.c.
 */

void VEC_SetVec3__FP4VEC3fff(float *v, float x, float y, float z)
{
    v[0] = x;
    v[1] = y;
    v[2] = z;
}
