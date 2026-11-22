/* Alert_HasSomeoneBeenDamaged__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_04_14F8D8.c.
 */

unsigned char Alert_HasSomeoneBeenDamaged__FP4Moby(char *object)
{
    char *child = *(char **)(object + 0x58);
    return *(unsigned char *)(child + 0x10);
}
