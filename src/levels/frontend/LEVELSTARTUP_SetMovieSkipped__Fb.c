/* LEVELSTARTUP_SetMovieSkipped__Fb -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00B900.c.
 */

extern char s_MovieSkipped[];

void LEVELSTARTUP_SetMovieSkipped__Fb(unsigned char b)
{
    *(char *)s_MovieSkipped = (char)b;
}
