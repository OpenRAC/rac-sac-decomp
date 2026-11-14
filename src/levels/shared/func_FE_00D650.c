/* func_FE_00D650 -- 168 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The two half angles are converted into cotangents (1 / tanf of half of the
 * argument) and handed to the helper that fills the plane; the two last float
 * arguments travel unchanged. The 0.5f and 1.0f constants live across the
 * calls, so they are kept in callee-saved float registers, and the retail
 * reserves the two instruction slots of the R5900 before each division.
 */

extern float tanf(float angle);

extern void func_FE_00D6F8(float *out, float a, float b, float c, float d);

void func_FE_00D650(float *out, float a, float b, float c, float d)
{
    float cotB = 1.0f / tanf(b * 0.5f);
    float cotA = 1.0f / tanf(a * 0.5f);

    func_FE_00D6F8(out, cotA, cotB, c, d);
}
