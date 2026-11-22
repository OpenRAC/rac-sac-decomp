/* Quat_Normalize__FP4QUAT -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/05_medical_outpost/LEVEL_05_11F098.c.
 */

typedef struct {
    float f0;
    float f4;
    float f8;
    float fC;
} S;

extern float Quat_Magnitude__FPC4QUAT(S *source);

void Quat_Normalize__FP4QUAT(S *s0)
{
    float k = 1.0f / Quat_Magnitude__FPC4QUAT(s0);

    s0->fC = s0->fC * k;
    s0->f0 = s0->f0 * k;
    s0->f4 = s0->f4 * k;
    s0->f8 = s0->f8 * k;
}
