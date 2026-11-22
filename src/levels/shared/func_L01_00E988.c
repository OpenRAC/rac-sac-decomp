/* func_L01_00E988 -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Adds the vector produced by func_L01_00E920 to the caller's second vector
 * and stores the result in the first.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_005AC8.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_L01_00E920(float *out, float *in, float s);

void func_L01_00E988(V3 *a0, V3 *a1, V3 *a2, float s)
{
    V3 t;
    func_L01_00E920((float *)&t, (float *)a2, s);
    a0->x = a1->x + t.x;
    a0->y = a1->y + t.y;
    a0->z = a1->z + t.z;
}
