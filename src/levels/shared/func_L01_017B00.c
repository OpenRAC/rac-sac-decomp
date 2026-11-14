/* func_L01_017B00 -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls MU_UnderdampedSpringSetup with the address of a module-local spring
 * coefficient object (not exported by the symbol table) and three float
 * constants: 0x427B53D1 = 62.831853 (20*pi), 0x41A00000 = 20.0 and 0x3D088889
 * = 0.0333333351 (1/30). The constants are written as the exact decimal values
 * the retail holds, because the compiler's own folding of 20*pi is one ulp
 * off.
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
