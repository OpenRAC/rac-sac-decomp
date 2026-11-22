/* func_L01_00E9F0 -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Subtracts the vector the helper computes from the source vector and stores
 * it in the destination.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_005B30.c.
 */

struct V3 {
    float x;
    float y;
    float z;
};

extern void func_L01_00E920(float *out, float *arg, float s);

void func_L01_00E9F0(struct V3 *dst, struct V3 *src, void *arg, float s)
{
    struct V3 t;

    func_L01_00E920((float *)&t, (float *)arg, s);
    dst->x = src->x - t.x;
    dst->y = src->y - t.y;
    dst->z = src->z - t.z;
}
