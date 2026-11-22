/* JackShared_GetCardAttackConfig__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the global at 0x305E0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_019510.c.
 */

extern char D_L10_002B0DB8[];

int JackShared_GetCardAttackConfig__Fv(void)
{
    return (int)D_L10_002B0DB8;
}
