/* func_FE_00D650 -- 168 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern float tanf(float angle);

extern void func_FE_00D6F8(float *out, float a, float b, float c, float d);

void func_FE_00D650(float *out, float a, float b, float c, float d)
{
    float cotB = 1.0f / tanf(b * 0.5f);
    float cotA = 1.0f / tanf(a * 0.5f);

    func_FE_00D6F8(out, cotA, cotB, c, d);
}
