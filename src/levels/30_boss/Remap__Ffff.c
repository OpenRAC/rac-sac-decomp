/* Remap__Ffff -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1D41E0.c.
 */

float Remap__Ffff(float first, float second, float third)
{
    return (second / first) * third;
}
