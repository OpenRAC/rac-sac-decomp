/* func_L04_16E9C0 -- 208 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Fills a float triple with random values in [-v, v) per component.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_10C220.c.
 */

extern int rand(void);

static inline float RandRange(float lo, float hi)
{
    float range = hi - lo;
    return lo + range * ((float)rand() * 4.656612873077393e-10f);
}

void func_L04_16E9C0(float *out, float *in)
{
    out[0] = RandRange(-in[0], in[0]);
    out[1] = RandRange(-in[1], in[1]);
    out[2] = RandRange(-in[2], in[2]);
}
