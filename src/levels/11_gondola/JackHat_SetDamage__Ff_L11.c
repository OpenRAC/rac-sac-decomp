/* JackHat_SetDamage__Ff -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at 0x143F04.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_012B88.c.
 */

extern float D_L11_00284E48;

void JackHat_SetDamage__Ff(float a0)
{
    D_L11_00284E48 = a0;
}
