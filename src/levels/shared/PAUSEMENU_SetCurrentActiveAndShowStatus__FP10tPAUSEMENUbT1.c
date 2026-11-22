/* PAUSEMENU_SetCurrentActiveAndShowStatus__FP10tPAUSEMENUbT1 -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores two bytes in the object and reports success.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_012370.c.
 */

int PAUSEMENU_SetCurrentActiveAndShowStatus__FP10tPAUSEMENUbT1(unsigned char *p, unsigned char a, unsigned char b)
{
    p[0x4C] = a;
    p[0x4D] = b;
    return 1;
}
