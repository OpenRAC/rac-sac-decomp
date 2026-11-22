/* Quat_Multiply__FP4QUATPC4QUATT1 -- 164 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Multiplies two quaternions (x, y, z, w order) and stores the product.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_122C60.c.
 */

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Quat;

void Quat_Multiply__FP4QUATPC4QUATT1(Quat *out, Quat *a, Quat *b)
{
    float aw;
    float bw;
    float ax;
    float bx;
    float by;
    float bz;
    float ay;
    float az;

    ax = a->x;
    az = a->z;
    bx = b->x;
    by = b->y;
    bz = b->z;
    ay = a->y;
    aw = a->w;
    bw = b->w;

    out->x = (aw * bx + ax * bw + ay * bz) - az * by;
    out->y = (aw * by - ax * bz) + ay * bw + az * bx;
    out->z = ((aw * bz + ax * by) - ay * bx) + az * bw;
    out->w = ((aw * bw - ax * bx) - ay * by) - az * bz;
}
