/* CasinoGuardController_FixLinks__FP4Moby -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the lookup result for the object's resource in its state byte.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1C4A70.c.
 */

extern int GU_SetupMobyLinkArray__FP8MobyLinkUi(int a, int b);

void CasinoGuardController_FixLinks__FP4Moby(char *object)
{
    *(unsigned char *)(object + 0x45) = GU_SetupMobyLinkArray__FP8MobyLinkUi(*(int *)(object + 0x54), 0xE);
}
