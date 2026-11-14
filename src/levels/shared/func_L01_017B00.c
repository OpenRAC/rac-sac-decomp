/* func_L01_017B00 -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct SpringCoeffs SpringCoeffs;

extern SpringCoeffs g_springCoefficients;

extern void MU_UnderdampedSpringSetup__FP11SpringCoefffff(SpringCoeffs *coefficients,
                                                          float frequency,
                                                          float damping,
                                                          float ratio);

void func_L01_017B00(void)
{
    MU_UnderdampedSpringSetup__FP11SpringCoefffff(&g_springCoefficients,
                                                   62.831851959228516f,
                                                   20.0f,
                                                   0.03333333507180214f);
}
