/* TangleVineRoots_SetFloorMoby__FP4MobyT0 -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/16_multiplayer_01/LEVEL_16_16CB28.c.
 */

extern void MOVERMOBY_SetMoverMoby__FP9MoverMobyP4Moby(char *);

void TangleVineRoots_SetFloorMoby__FP4MobyT0(char *item)
{
    MOVERMOBY_SetMoverMoby__FP9MoverMobyP4Moby(*(char **)(item + 0x58) + 4);
}
