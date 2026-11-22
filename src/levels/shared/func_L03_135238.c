/* func_L03_135238 -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sums the float array of an object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0570C8.c.
 */

typedef struct {
    int pad[2];
    float *v;
} Obj;

float func_L03_135238(Obj *a0, int n, float sum)
{
    float *p = a0->v;
    float *end = p + n;

    while (p != end) {
        sum += *p;
        p++;
    }
    return sum;
}
