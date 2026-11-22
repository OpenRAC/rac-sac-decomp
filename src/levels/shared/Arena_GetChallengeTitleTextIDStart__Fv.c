/* Arena_GetChallengeTitleTextIDStart__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_08BCB8.c.
 */

extern char *D_L01_002541D8;

unsigned int Arena_GetChallengeTitleTextIDStart__Fv(void) {
    return *(unsigned int *)(D_L01_002541D8 + 4);
}
