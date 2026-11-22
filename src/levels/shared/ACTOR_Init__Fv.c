/* ACTOR_Init__Fv -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_09F648.c.
 */

extern char D_L01_0031F560[];

void ACTOR_Init__Fv(void)
{
    char *p = D_L01_0031F560;
    p[0] = 0;
    *(int *)(p + 8) = 0;
    *(int *)(p + 0xc) = 0;
    *(int *)(p + 0x10) = 0;
    *(char **)(p + 0x20) = p + 0x1c;
    *(char **)(p + 0x1c) = p + 0x1c;
}
