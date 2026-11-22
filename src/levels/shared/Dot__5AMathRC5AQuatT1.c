/* Dot__5AMathRC5AQuatT1 -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Dot product of two 4-float vectors.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1231B8.c.
 */

typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

float Dot__5AMathRC5AQuatT1(V4 *a0, V4 *a1)
{
    float t0 = a0->x * a1->x;
    float t1 = a0->y * a1->y;
    float t2 = a0->z * a1->z;
    float t3 = a0->w * a1->w;
    return t0 + t1 + t2 + t3;
}
