/* Init__9ArenaStunPC15ArenaStunConfig -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores a value into the field at +0x10 of the object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_08C420.c.
 */

void Init__9ArenaStunPC15ArenaStunConfig(char *object, int value)
{
    *(int *)(object + 0x10) = value;
}
