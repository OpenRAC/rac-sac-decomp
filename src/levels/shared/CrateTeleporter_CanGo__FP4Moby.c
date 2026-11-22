/* CrateTeleporter_CanGo__FP4Moby -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_07_15F8E8.c.
 */

int CrateTeleporter_CanGo__FP4Moby(char *object)
{
    unsigned char state = *(unsigned char *)(object + 0x45);
    if (state == 0 || state == 4)
        return 1;
    return 0;
}
