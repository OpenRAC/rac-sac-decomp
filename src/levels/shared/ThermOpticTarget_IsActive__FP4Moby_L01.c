/* ThermOpticTarget_IsActive__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/19_multiplayer_04/LEVEL_19_15C010.c.
 */

int ThermOpticTarget_IsActive__FP4Moby(char *object)
{
    char *child = *(char **)(object + 0x58);
    return *(unsigned char *)(child + 0xC) == 0;
}
