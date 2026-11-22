/* CrateShared_ResetColor__FPC18CrateShared_TroupeP4Moby -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_02_1E2B68.c.
 */

void CrateShared_ResetColor__FPC18CrateShared_TroupeP4Moby(char *source, char *object)
{
    unsigned int *target = *(unsigned int **)(object + 0x4C);
    if (target != 0) {
        unsigned int value = *(unsigned int *)(source + 0x44);
        unsigned int old = *target;
        value &= 0xFFFFFFu;
        old &= 0xFF000000u;
        old |= value;
        *target = old;
    }
}
