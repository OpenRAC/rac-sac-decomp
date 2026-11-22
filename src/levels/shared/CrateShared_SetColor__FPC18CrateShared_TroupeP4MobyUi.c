/* CrateShared_SetColor__FPC18CrateShared_TroupeP4MobyUi -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_02_1E2B38.c.
 */

void CrateShared_SetColor__FPC18CrateShared_TroupeP4MobyUi(int unused, char *object, unsigned int value)
{
    unsigned int *target = *(unsigned int **)(object + 0x4C);
    if (target != 0) {
        unsigned int old = *target;
        unsigned int low = value & 0xFFFFFFu;
        unsigned int high = old & 0xFF000000u;
        high |= low;
        *target = high;
    }
}
