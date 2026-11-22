/* Quat_Conjugate__FP4QUATPC4QUAT -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies a four-float vector negating the first three components.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1230B0.c.
 */

void Quat_Conjugate__FP4QUATPC4QUAT(float *d, float *s)
{
    d[0] = -s[0];
    d[1] = -s[1];
    d[2] = -s[2];
    d[3] = s[3];
}
