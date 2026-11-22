/* JackCard_Suck__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_08_189638.c.
 */

void JackCard_Suck__FP4Moby(char *object)
{
    *(unsigned char *)(object + 0x45) = 1;
}
