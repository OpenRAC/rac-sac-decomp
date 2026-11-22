/* Spitfire_GetDamageRange__Ff -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1B0978.c.
 */

float Spitfire_GetDamageRange__Ff(float value)
{
    return value * 0.003f + 0.75f;
}
